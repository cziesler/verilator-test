# usage: make Vtest && obj_dir/Vtest

Vtest:
	verilator -Wall --cc --trace test.v --exe test_tb.cpp
	make -j -C obj_dir/ -f Vtest.mk Vtest

clean:
	-rm -r obj_dir
	-rm counter.vcd
