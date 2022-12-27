#include<stdio.h>
#include<iostream>
#include<fstream>
#include "debug.h"
#include "debug.cpp"
#include<string.h>

using namespace std;

int main(){
   unsigned int dbg_level = PRINT_L1 | PRINT_L3;

    set_debug_environment(dbg_level);

    debug("message 1");

    debug("message 2", PRINT_L2);

    debug("message 3", PRINT_L3);

    // test case #2

    dbg_level = PRINT_L2;

    set_debug_environment(dbg_level, true);

    debug("message 1");

    string m2("message 2");

    debug(m2, PRINT_L2);

    debug("message 3", PRINT_L2);

    debug("message 4", PRINT_L3);

    debug_close();

    // test 3

    dbg_level = PRINT_L1 | PRINT_L2 | PRINT_L3;

    set_debug_environment(dbg_level, true);

    debug("Hello There!");

    debug("Go Fish!", PRINT_L2);

    debug("No Thanks!", PRINT_L3);

    debug_close();

    // test 4

    dbg_level = PRINT_L0;

    set_debug_environment(dbg_level);

    debug("message 1");

    debug("message 2", PRINT_L2);

    debug("message 3", PRINT_L3);

    // test 5

    dbg_level = PRINT_L1 | PRINT_L2;

    set_debug_environment(dbg_level);

    debug("message 1");

    debug("message 2", PRINT_L2);

    debug("message 3", PRINT_L3);

    // test 6

    dbg_level = PRINT_L2 | PRINT_L3;

    set_debug_environment(dbg_level);

    debug("message 1");

    debug("message 2", PRINT_L2);

    debug("message 3", PRINT_L3);


    return 0;
}
