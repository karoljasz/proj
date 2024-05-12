// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vquadra_top.h for the primary calling header

#include "Vquadra_top__pch.h"
#include "Vquadra_top___024root.h"

void Vquadra_top___024root___eval_act(Vquadra_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___eval_act\n"); );
}

void Vquadra_top___024root___nba_sequent__TOP__0(Vquadra_top___024root* vlSelf);

void Vquadra_top___024root___eval_nba(Vquadra_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vquadra_top___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

extern const VlUnpacked<IData/*31:0*/, 128> Vquadra_top__ConstPool__TABLE_h1a1b8b11_0;
extern const VlUnpacked<IData/*31:0*/, 128> Vquadra_top__ConstPool__TABLE_ha7b5af72_0;
extern const VlUnpacked<IData/*31:0*/, 128> Vquadra_top__ConstPool__TABLE_hc24388b3_0;

VL_INLINE_OPT void Vquadra_top___024root___nba_sequent__TOP__0(Vquadra_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*6:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    // Body
    if (vlSelf->rst_b) {
        vlSelf->quadra_top__DOT__s_fxd_q = vlSelf->quadra_top__DOT__s_fxd_d;
        vlSelf->quadra_top__DOT__b_fxd_q = vlSelf->quadra_top__DOT__b_fxd_d;
        vlSelf->quadra_top__DOT__x1_int_q = (0x7fU 
                                             & (vlSelf->x 
                                                >> 0x11U));
        vlSelf->quadra_top__DOT__c_fxd_q = vlSelf->quadra_top__DOT__c_fxd_d;
        vlSelf->quadra_top__DOT__t1_fxd_q = vlSelf->quadra_top__DOT__t1_fxd_d;
        vlSelf->quadra_top__DOT__t2_fxd_q = vlSelf->quadra_top__DOT__t2_fxd_d;
        vlSelf->quadra_top__DOT__sq_fxd_q = (0xffffffU 
                                             & (IData)(
                                                       (0xffffffULL 
                                                        & (((QData)((IData)(vlSelf->quadra_top__DOT__x2_int_q)) 
                                                            * (QData)((IData)(vlSelf->quadra_top__DOT__x2_int_q))) 
                                                           >> 0xaU))));
        vlSelf->quadra_top__DOT__x2_int_q_q = vlSelf->quadra_top__DOT__x2_int_q;
        vlSelf->quadra_top__DOT__t0_fxd_q = (vlSelf->quadra_top__DOT__a_fxd_q 
                                             >> 1U);
        vlSelf->quadra_top__DOT__x2_int_q = (0x1ffffU 
                                             & vlSelf->x);
        vlSelf->quadra_top__DOT__a_fxd_q = vlSelf->quadra_top__DOT__a_fxd_d;
    }
    vlSelf->quadra_top__DOT__dv_p2 = ((IData)(vlSelf->rst_b) 
                                      && (IData)(vlSelf->quadra_top__DOT__dv_p1));
    __Vtableidx2 = vlSelf->quadra_top__DOT__x1_int_q;
    vlSelf->quadra_top__DOT__b_fxd_d = Vquadra_top__ConstPool__TABLE_h1a1b8b11_0
        [__Vtableidx2];
    __Vtableidx3 = vlSelf->quadra_top__DOT__x1_int_q;
    vlSelf->quadra_top__DOT__c_fxd_d = Vquadra_top__ConstPool__TABLE_ha7b5af72_0
        [__Vtableidx3];
    vlSelf->quadra_top__DOT__m1__DOT__sign = (vlSelf->quadra_top__DOT__c_fxd_q 
                                              >> 0x1fU);
    vlSelf->quadra_top__DOT__m1__DOT__x2_sign = (0x3fffffffU 
                                                 & VL_SHIFTR_III(31,31,32, vlSelf->quadra_top__DOT__sq_fxd_q, 9U));
    vlSelf->quadra_top__DOT__m1__DOT__x1_sign = (0x3fffffffU 
                                                 & ((IData)(vlSelf->quadra_top__DOT__m1__DOT__sign)
                                                     ? 
                                                    ((IData)(1U) 
                                                     + 
                                                     (~ 
                                                      (0x3fffffffU 
                                                       & (vlSelf->quadra_top__DOT__c_fxd_q 
                                                          >> 1U))))
                                                     : 
                                                    (0x3fffffffU 
                                                     & (vlSelf->quadra_top__DOT__c_fxd_q 
                                                        >> 1U))));
    vlSelf->quadra_top__DOT__m1__DOT__res = (0xfffffffffffffffULL 
                                             & ((QData)((IData)(vlSelf->quadra_top__DOT__m1__DOT__x1_sign)) 
                                                * (QData)((IData)(vlSelf->quadra_top__DOT__m1__DOT__x2_sign))));
    vlSelf->quadra_top__DOT__m1__DOT__res_sign = (0xfffffffffffffffULL 
                                                  & ((IData)(vlSelf->quadra_top__DOT__m1__DOT__sign)
                                                      ? 
                                                     (1ULL 
                                                      + 
                                                      (~ vlSelf->quadra_top__DOT__m1__DOT__res))
                                                      : vlSelf->quadra_top__DOT__m1__DOT__res));
    vlSelf->quadra_top__DOT__m1__DOT__res_final = (
                                                   ((QData)((IData)(vlSelf->quadra_top__DOT__m1__DOT__sign)) 
                                                    << 0x3cU) 
                                                   | vlSelf->quadra_top__DOT__m1__DOT__res_sign);
    vlSelf->quadra_top__DOT__t2_fxd_d = (0x7fffffffU 
                                         & (IData)(
                                                   (vlSelf->quadra_top__DOT__m1__DOT__res_final 
                                                    >> 0x1bU)));
    vlSelf->quadra_top__DOT__m0__DOT__sign = (vlSelf->quadra_top__DOT__b_fxd_q 
                                              >> 0x1fU);
    vlSelf->quadra_top__DOT__m0__DOT__x2_sign = (0x3fffffffU 
                                                 & (vlSelf->quadra_top__DOT__x2_int_q_q 
                                                    << 4U));
    vlSelf->quadra_top__DOT__m0__DOT__x1_sign = (0x3fffffffU 
                                                 & ((IData)(vlSelf->quadra_top__DOT__m0__DOT__sign)
                                                     ? 
                                                    ((IData)(1U) 
                                                     + 
                                                     (~ 
                                                      (0x3fffffffU 
                                                       & (vlSelf->quadra_top__DOT__b_fxd_q 
                                                          >> 1U))))
                                                     : 
                                                    (0x3fffffffU 
                                                     & (vlSelf->quadra_top__DOT__b_fxd_q 
                                                        >> 1U))));
    vlSelf->quadra_top__DOT__m0__DOT__res = (0xfffffffffffffffULL 
                                             & ((QData)((IData)(vlSelf->quadra_top__DOT__m0__DOT__x1_sign)) 
                                                * (QData)((IData)(vlSelf->quadra_top__DOT__m0__DOT__x2_sign))));
    vlSelf->quadra_top__DOT__m0__DOT__res_sign = (0xfffffffffffffffULL 
                                                  & ((IData)(vlSelf->quadra_top__DOT__m0__DOT__sign)
                                                      ? 
                                                     (1ULL 
                                                      + 
                                                      (~ vlSelf->quadra_top__DOT__m0__DOT__res))
                                                      : vlSelf->quadra_top__DOT__m0__DOT__res));
    vlSelf->quadra_top__DOT__m0__DOT__res_final = (
                                                   ((QData)((IData)(vlSelf->quadra_top__DOT__m0__DOT__sign)) 
                                                    << 0x3cU) 
                                                   | vlSelf->quadra_top__DOT__m0__DOT__res_sign);
    vlSelf->quadra_top__DOT__t1_fxd_d = (0x7fffffffU 
                                         & (IData)(
                                                   (vlSelf->quadra_top__DOT__m0__DOT__res_final 
                                                    >> 0x1bU)));
    vlSelf->quadra_top__DOT__t0_to_s = vlSelf->quadra_top__DOT__t0_fxd_q;
    vlSelf->quadra_top__DOT__t1_to_s = vlSelf->quadra_top__DOT__t1_fxd_q;
    vlSelf->quadra_top__DOT__t2_to_s = vlSelf->quadra_top__DOT__t2_fxd_q;
    vlSelf->quadra_top__DOT__s_res = (0x7fffffffU & 
                                      ((vlSelf->quadra_top__DOT__t0_to_s 
                                        + vlSelf->quadra_top__DOT__t1_to_s) 
                                       + vlSelf->quadra_top__DOT__t2_to_s));
    vlSelf->quadra_top__DOT__s_fxd_d = (0x7ffffffU 
                                        & (vlSelf->quadra_top__DOT__s_res 
                                           >> 4U));
    vlSelf->y_dv = vlSelf->quadra_top__DOT__dv_p2;
    vlSelf->quadra_top__DOT__dv_p1 = ((IData)(vlSelf->rst_b) 
                                      && (IData)(vlSelf->quadra_top__DOT__dv_p0));
    vlSelf->y = (0x1ffffffU & vlSelf->quadra_top__DOT__s_fxd_d);
    __Vtableidx1 = vlSelf->quadra_top__DOT__x1_int_q;
    vlSelf->quadra_top__DOT__a_fxd_d = Vquadra_top__ConstPool__TABLE_hc24388b3_0
        [__Vtableidx1];
    vlSelf->quadra_top__DOT__dv_p0 = ((IData)(vlSelf->rst_b) 
                                      && (IData)(vlSelf->x_dv));
}

void Vquadra_top___024root___eval_triggers__act(Vquadra_top___024root* vlSelf);

bool Vquadra_top___024root___eval_phase__act(Vquadra_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vquadra_top___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vquadra_top___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vquadra_top___024root___eval_phase__nba(Vquadra_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vquadra_top___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vquadra_top___024root___dump_triggers__nba(Vquadra_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vquadra_top___024root___dump_triggers__act(Vquadra_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vquadra_top___024root___eval(Vquadra_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vquadra_top___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/root/proj/rtl-model/quadra_top.vs", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vquadra_top___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/root/proj/rtl-model/quadra_top.vs", 3, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vquadra_top___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vquadra_top___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vquadra_top___024root___eval_debug_assertions(Vquadra_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst_b & 0xfeU))) {
        Verilated::overWidthError("rst_b");}
    if (VL_UNLIKELY((vlSelf->x & 0xff000000U))) {
        Verilated::overWidthError("x");}
    if (VL_UNLIKELY((vlSelf->x_dv & 0xfeU))) {
        Verilated::overWidthError("x_dv");}
}
#endif  // VL_DEBUG
