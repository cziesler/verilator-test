#include "Vtest.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

int main(int argc, char **argv, char **env) {
  Verilated::commandArgs(argc, argv);

  // init top verilog instance
  Vtest* top = new Vtest;

  // init trace dump
  Verilated::traceEverOn(true);
  VerilatedVcdC* tfp = new VerilatedVcdC;
  top->trace(tfp, 99);
  tfp->open("counter.vcd");

  // initialize simulation inputs
  top->clk   = 1;
  top->rst_n = 0;

  // run simulation
  for (int i = 0; i < 20; i++) {
    top->rst_n = !(i < 2);
    // dump variables into VCD file and toggle clock
    for (int clk = 0; clk < 2; clk++) {
      tfp->dump(2*i+clk);
      top->clk = !top->clk;
      top->eval();
    }
    printf("count: $%0X\n", top->cnt);
    if (Verilated::gotFinish()) exit(0);
  }

  tfp->close();
  exit(0);
}
