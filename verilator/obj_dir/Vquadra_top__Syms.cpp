// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vquadra_top__pch.h"
#include "Vquadra_top.h"
#include "Vquadra_top___024root.h"
#include "Vquadra_top___024unit.h"

// FUNCTIONS
Vquadra_top__Syms::~Vquadra_top__Syms()
{
}

Vquadra_top__Syms::Vquadra_top__Syms(VerilatedContext* contextp, const char* namep, Vquadra_top* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(30);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
