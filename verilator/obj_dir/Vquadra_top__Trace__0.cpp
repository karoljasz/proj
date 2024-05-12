// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vquadra_top__Syms.h"


void Vquadra_top___024root__trace_chg_0_sub_0(Vquadra_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vquadra_top___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root__trace_chg_0\n"); );
    // Init
    Vquadra_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vquadra_top___024root*>(voidSelf);
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vquadra_top___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vquadra_top___024root__trace_chg_0_sub_0(Vquadra_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->quadra_top__DOT__dv_p0));
        bufp->chgBit(oldp+1,(vlSelf->quadra_top__DOT__dv_p1));
        bufp->chgBit(oldp+2,(vlSelf->quadra_top__DOT__dv_p2));
        bufp->chgCData(oldp+3,(vlSelf->quadra_top__DOT__x1_int_q),7);
        bufp->chgIData(oldp+4,(vlSelf->quadra_top__DOT__x2_int_q),17);
        bufp->chgIData(oldp+5,(vlSelf->quadra_top__DOT__x2_int_q_q),17);
        bufp->chgIData(oldp+6,((0xffffffU & (IData)(
                                                    (0xffffffULL 
                                                     & (((QData)((IData)(vlSelf->quadra_top__DOT__x2_int_q)) 
                                                         * (QData)((IData)(vlSelf->quadra_top__DOT__x2_int_q))) 
                                                        >> 0xaU))))),24);
        bufp->chgIData(oldp+7,(vlSelf->quadra_top__DOT__sq_fxd_q),24);
        bufp->chgIData(oldp+8,(vlSelf->quadra_top__DOT__a_fxd_d),32);
        bufp->chgIData(oldp+9,(vlSelf->quadra_top__DOT__a_fxd_q),32);
        bufp->chgIData(oldp+10,(vlSelf->quadra_top__DOT__b_fxd_d),32);
        bufp->chgIData(oldp+11,(vlSelf->quadra_top__DOT__b_fxd_q),32);
        bufp->chgIData(oldp+12,(vlSelf->quadra_top__DOT__c_fxd_d),32);
        bufp->chgIData(oldp+13,(vlSelf->quadra_top__DOT__c_fxd_q),32);
        bufp->chgIData(oldp+14,((vlSelf->quadra_top__DOT__a_fxd_q 
                                 >> 1U)),31);
        bufp->chgIData(oldp+15,(vlSelf->quadra_top__DOT__t0_fxd_q),31);
        bufp->chgIData(oldp+16,(vlSelf->quadra_top__DOT__t1_fxd_d),31);
        bufp->chgIData(oldp+17,(vlSelf->quadra_top__DOT__t1_fxd_q),31);
        bufp->chgIData(oldp+18,(vlSelf->quadra_top__DOT__t2_fxd_d),31);
        bufp->chgIData(oldp+19,(vlSelf->quadra_top__DOT__t2_fxd_q),31);
        bufp->chgIData(oldp+20,(vlSelf->quadra_top__DOT__s_fxd_d),31);
        bufp->chgIData(oldp+21,(vlSelf->quadra_top__DOT__s_fxd_q),31);
        bufp->chgIData(oldp+22,((vlSelf->quadra_top__DOT__x2_int_q_q 
                                 << 4U)),31);
        bufp->chgIData(oldp+23,((vlSelf->quadra_top__DOT__b_fxd_q 
                                 >> 1U)),31);
        bufp->chgIData(oldp+24,((vlSelf->quadra_top__DOT__c_fxd_q 
                                 >> 1U)),31);
        bufp->chgIData(oldp+25,((0x7fffffffU & VL_SHIFTR_III(31,31,32, vlSelf->quadra_top__DOT__sq_fxd_q, 9U))),31);
        bufp->chgIData(oldp+26,(vlSelf->quadra_top__DOT__t0_to_s),31);
        bufp->chgIData(oldp+27,(vlSelf->quadra_top__DOT__t1_to_s),31);
        bufp->chgIData(oldp+28,(vlSelf->quadra_top__DOT__t2_to_s),31);
        bufp->chgIData(oldp+29,(vlSelf->quadra_top__DOT__s_res),31);
        bufp->chgBit(oldp+30,(vlSelf->quadra_top__DOT__m0__DOT__sign));
        bufp->chgIData(oldp+31,(vlSelf->quadra_top__DOT__m0__DOT__x1_sign),30);
        bufp->chgIData(oldp+32,(vlSelf->quadra_top__DOT__m0__DOT__x2_sign),30);
        bufp->chgQData(oldp+33,(vlSelf->quadra_top__DOT__m0__DOT__res),60);
        bufp->chgQData(oldp+35,(vlSelf->quadra_top__DOT__m0__DOT__res_sign),60);
        bufp->chgQData(oldp+37,(vlSelf->quadra_top__DOT__m0__DOT__res_final),61);
        bufp->chgBit(oldp+39,(vlSelf->quadra_top__DOT__m1__DOT__sign));
        bufp->chgIData(oldp+40,(vlSelf->quadra_top__DOT__m1__DOT__x1_sign),30);
        bufp->chgIData(oldp+41,(vlSelf->quadra_top__DOT__m1__DOT__x2_sign),30);
        bufp->chgQData(oldp+42,(vlSelf->quadra_top__DOT__m1__DOT__res),60);
        bufp->chgQData(oldp+44,(vlSelf->quadra_top__DOT__m1__DOT__res_sign),60);
        bufp->chgQData(oldp+46,(vlSelf->quadra_top__DOT__m1__DOT__res_final),61);
        bufp->chgQData(oldp+48,((0x3ffffffffULL & ((QData)((IData)(vlSelf->quadra_top__DOT__x2_int_q)) 
                                                   * (QData)((IData)(vlSelf->quadra_top__DOT__x2_int_q))))),34);
    }
    bufp->chgBit(oldp+50,(vlSelf->clk));
    bufp->chgBit(oldp+51,(vlSelf->rst_b));
    bufp->chgIData(oldp+52,(vlSelf->x),24);
    bufp->chgBit(oldp+53,(vlSelf->x_dv));
    bufp->chgIData(oldp+54,(vlSelf->y),25);
    bufp->chgBit(oldp+55,(vlSelf->y_dv));
    bufp->chgCData(oldp+56,((0x7fU & (vlSelf->x >> 0x11U))),7);
    bufp->chgIData(oldp+57,((0x1ffffU & vlSelf->x)),17);
}

void Vquadra_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root__trace_cleanup\n"); );
    // Init
    Vquadra_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vquadra_top___024root*>(voidSelf);
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
