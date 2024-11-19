rm -rf obj_dir
rm -f main.vcd

verilator -Wall --cc --trace main.sv --exe main_tb.cpp # build obj_dir

make -j -C obj_dir/ -f Vmain.mk Vmain # build c++ project

obj_dir/Vmain # build vcd file

# source ./_buildVcd.sh
