module test (
  input wire clk,
  input wire rst_n,
  output reg [3:0] cnt
);

always @(posedge clk or negedge rst_n) begin
  if (!rst_n) begin
    cnt <= 4'h0;
  end
  else begin
    cnt <= cnt + 4'h1;
  end
end

endmodule
