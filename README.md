# verilator-test
Testing simulating a design with Verilator

## Usage

Usage: `make Vtest && obj_dir/Vtest`

## Expected Output

```sh
% make clean
% make Vtest
verilator -Wall --cc --trace test.v --exe test_tb.cpp
make -j -C obj_dir/ -f Vtest.mk Vtest
clang++  -I.  -MMD -I/usr/local/Cellar/verilator/3.926/share/verilator/include -I/usr/local/Cellar/verilator/3.926/share/verilator/include/vltstd -DVL_PRINTF=printf -DVM_COVERAGE=0 -DVM_SC=0 -DVM_TRACE=1 -faligned-new -fbracket-depth=4096 -Qunused-arguments -Wno-parentheses-equality -Wno-sign-compare -Wno-uninitialized -Wno-unused-parameter -Wno-unused-variable -Wno-shadow       -c -o test_tb.o ../test_tb.cpp
clang++  -I.  -MMD -I/usr/local/Cellar/verilator/3.926/share/verilator/include -I/usr/local/Cellar/verilator/3.926/share/verilator/include/vltstd -DVL_PRINTF=printf -DVM_COVERAGE=0 -DVM_SC=0 -DVM_TRACE=1 -faligned-new -fbracket-depth=4096 -Qunused-arguments -Wno-parentheses-equality -Wno-sign-compare -Wno-uninitialized -Wno-unused-parameter -Wno-unused-variable -Wno-shadow       -c -o verilated.o /usr/local/Cellar/verilator/3.926/share/verilator/include/verilated.cpp
clang++  -I.  -MMD -I/usr/local/Cellar/verilator/3.926/share/verilator/include -I/usr/local/Cellar/verilator/3.926/share/verilator/include/vltstd -DVL_PRINTF=printf -DVM_COVERAGE=0 -DVM_SC=0 -DVM_TRACE=1 -faligned-new -fbracket-depth=4096 -Qunused-arguments -Wno-parentheses-equality -Wno-sign-compare -Wno-uninitialized -Wno-unused-parameter -Wno-unused-variable -Wno-shadow       -c -o verilated_vcd_c.o /usr/local/Cellar/verilator/3.926/share/verilator/include/verilated_vcd_c.cpp
/usr/bin/perl /usr/local/Cellar/verilator/3.926/share/verilator/bin/verilator_includer -DVL_INCLUDE_OPT=include Vtest.cpp > Vtest__ALLcls.cpp
/usr/bin/perl /usr/local/Cellar/verilator/3.926/share/verilator/bin/verilator_includer -DVL_INCLUDE_OPT=include Vtest__Trace.cpp Vtest__Syms.cpp Vtest__Trace__Slow.cpp > Vtest__ALLsup.cpp
clang++  -I.  -MMD -I/usr/local/Cellar/verilator/3.926/share/verilator/include -I/usr/local/Cellar/verilator/3.926/share/verilator/include/vltstd -DVL_PRINTF=printf -DVM_COVERAGE=0 -DVM_SC=0 -DVM_TRACE=1 -faligned-new -fbracket-depth=4096 -Qunused-arguments -Wno-parentheses-equality -Wno-sign-compare -Wno-uninitialized -Wno-unused-parameter -Wno-unused-variable -Wno-shadow       -c -o Vtest__ALLsup.o Vtest__ALLsup.cpp
clang++  -I.  -MMD -I/usr/local/Cellar/verilator/3.926/share/verilator/include -I/usr/local/Cellar/verilator/3.926/share/verilator/include/vltstd -DVL_PRINTF=printf -DVM_COVERAGE=0 -DVM_SC=0 -DVM_TRACE=1 -faligned-new -fbracket-depth=4096 -Qunused-arguments -Wno-parentheses-equality -Wno-sign-compare -Wno-uninitialized -Wno-unused-parameter -Wno-unused-variable -Wno-shadow       -c -o Vtest__ALLcls.o Vtest__ALLcls.cpp
      Archiving Vtest__ALL.a ...
ar r Vtest__ALL.a Vtest__ALLcls.o Vtest__ALLsup.o
ar: creating archive Vtest__ALL.a
ranlib Vtest__ALL.a
clang++    test_tb.o verilated.o verilated_vcd_c.o Vtest__ALL.a    -o Vtest -lm -lstdc++

% obj_dir/Vtest
count: $0
count: $0
count: $1
count: $2
count: $3
count: $4
count: $5
count: $6
count: $7
count: $8
count: $9
count: $A
count: $B
count: $C
count: $D
count: $E
count: $F
count: $0
count: $1
count: $2
```

## License

"THE BEER-WARE LICENSE" (Revision 42):
<cody.cziesler@google.com> wrote this file.  As long as you retain this notice you
can do whatever you want with this stuff. If we meet some day, and you think
this stuff is worth it, you can buy me a beer in return. Cody Cziesler.
