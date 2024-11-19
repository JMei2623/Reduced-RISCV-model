#include "Vmain.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

int main(int argc, char **argv, char **env)
{
    int i, clk;

    Verilated::commandArgs(argc, argv);

    Vmain *top = new Vmain;

    // turning on signal tracing
    Verilated::traceEverOn(true);
    VerilatedVcdC *tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("main.vcd");

    // input init
    top->clk = 0;
    top->rst = 0;

    for (i = 0; i < 1200; i++)
    {
        for (clk = 0; clk < 2; clk++)
        {
            tfp->dump(2 * i + clk);
            top->clk = !top->clk;
            top->eval();
        }

        if (Verilated::gotFinish())
            exit(0);
    }
    tfp->close();
    exit(0);
}