// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vquadra_top.h for the primary calling header

#include "Vquadra_top__pch.h"
#include "Vquadra_top__Syms.h"
#include "Vquadra_top___024root.h"

void Vquadra_top___024root___ctor_var_reset(Vquadra_top___024root* vlSelf);

Vquadra_top___024root::Vquadra_top___024root(Vquadra_top__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vquadra_top___024root___ctor_var_reset(this);
}

void Vquadra_top___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vquadra_top___024root::~Vquadra_top___024root() {
}
