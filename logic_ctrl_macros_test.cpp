#include "logic_ctrl_macros.h"

int main(int argc, char **argv) {
    // test of PASS_OR_ACTION

    int a = 2;
    REP(3) {
        PASS_OR_ACTION(8 == 8, continue, "i=[%d]", 8);
    }

    REP(a+2) {
        PASS_OR_ACTION(8 == 8, continue, "j=[%d]", 8);
    }

    REP(3) REP(3) {
        PASS_OR_ACTION(8 == 8, continue, "k=[%d]", 8);
    }
    return 0;
}
