// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vquadra_top.h for the primary calling header

#include "Vquadra_top__pch.h"
#include "Vquadra_top___024root.h"

VL_ATTR_COLD void Vquadra_top___024root___eval_static(Vquadra_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vquadra_top___024root___eval_initial(Vquadra_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
}

VL_ATTR_COLD void Vquadra_top___024root___eval_final(Vquadra_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vquadra_top___024root___dump_triggers__stl(Vquadra_top___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vquadra_top___024root___eval_phase__stl(Vquadra_top___024root* vlSelf);

VL_ATTR_COLD void Vquadra_top___024root___eval_settle(Vquadra_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vquadra_top___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/root/proj/rtl-model/quadra_top.vs", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vquadra_top___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vquadra_top___024root___dump_triggers__stl(Vquadra_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vquadra_top___024root___stl_sequent__TOP__0(Vquadra_top___024root* vlSelf);

VL_ATTR_COLD void Vquadra_top___024root___eval_stl(Vquadra_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vquadra_top___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

extern const VlUnpacked<IData/*31:0*/, 128> Vquadra_top__ConstPool__TABLE_hc24388b3_0;
extern const VlUnpacked<IData/*31:0*/, 128> Vquadra_top__ConstPool__TABLE_h1a1b8b11_0;
extern const VlUnpacked<IData/*31:0*/, 128> Vquadra_top__ConstPool__TABLE_ha7b5af72_0;

VL_ATTR_COLD void Vquadra_top___024root___stl_sequent__TOP__0(Vquadra_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*6:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    // Body
    vlSelf->y_dv = vlSelf->quadra_top__DOT__dv_p2;
    __Vtableidx1 = vlSelf->quadra_top__DOT__x1_int_q;
    vlSelf->quadra_top__DOT__a_fxd_d = Vquadra_top__ConstPool__TABLE_hc24388b3_0
        [__Vtableidx1];
    __Vtableidx2 = vlSelf->quadra_top__DOT__x1_int_q;
    vlSelf->quadra_top__DOT__b_fxd_d = Vquadra_top__ConstPool__TABLE_h1a1b8b11_0
        [__Vtableidx2];
    __Vtableidx3 = vlSelf->quadra_top__DOT__x1_int_q;
    vlSelf->quadra_top__DOT__c_fxd_d = Vquadra_top__ConstPool__TABLE_ha7b5af72_0
        [__Vtableidx3];
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
    vlSelf->y = (0x1ffffffU & vlSelf->quadra_top__DOT__s_fxd_d);
}

VL_ATTR_COLD void Vquadra_top___024root___eval_triggers__stl(Vquadra_top___024root* vlSelf);

VL_ATTR_COLD bool Vquadra_top___024root___eval_phase__stl(Vquadra_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vquadra_top___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vquadra_top___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vquadra_top___024root___dump_triggers__act(Vquadra_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vquadra_top___024root___dump_triggers__nba(Vquadra_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vquadra_top___024root___ctor_var_reset(Vquadra_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_b = VL_RAND_RESET_I(1);
    vlSelf->x = VL_RAND_RESET_I(24);
    vlSelf->x_dv = VL_RAND_RESET_I(1);
    vlSelf->y = VL_RAND_RESET_I(25);
    vlSelf->y_dv = VL_RAND_RESET_I(1);
    vlSelf->quadra_top__DOT__dv_p0 = VL_RAND_RESET_I(1);
    vlSelf->quadra_top__DOT__dv_p1 = VL_RAND_RESET_I(1);
    vlSelf->quadra_top__DOT__dv_p2 = VL_RAND_RESET_I(1);
    vlSelf->quadra_top__DOT__x1_int_q = VL_RAND_RESET_I(7);
    vlSelf->quadra_top__DOT__x2_int_q = VL_RAND_RESET_I(17);
    vlSelf->quadra_top__DOT__x2_int_q_q = VL_RAND_RESET_I(17);
    vlSelf->quadra_top__DOT__sq_fxd_q = VL_RAND_RESET_I(24);
    vlSelf->quadra_top__DOT__a_fxd_d = VL_RAND_RESET_I(32);
    vlSelf->quadra_top__DOT__a_fxd_q = VL_RAND_RESET_I(32);
    vlSelf->quadra_top__DOT__b_fxd_d = VL_RAND_RESET_I(32);
    vlSelf->quadra_top__DOT__b_fxd_q = VL_RAND_RESET_I(32);
    vlSelf->quadra_top__DOT__c_fxd_d = VL_RAND_RESET_I(32);
    vlSelf->quadra_top__DOT__c_fxd_q = VL_RAND_RESET_I(32);
    vlSelf->quadra_top__DOT__t0_fxd_q = VL_RAND_RESET_I(31);
    vlSelf->quadra_top__DOT__t1_fxd_d = VL_RAND_RESET_I(31);
    vlSelf->quadra_top__DOT__t1_fxd_q = VL_RAND_RESET_I(31);
    vlSelf->quadra_top__DOT__t2_fxd_d = VL_RAND_RESET_I(31);
    vlSelf->quadra_top__DOT__t2_fxd_q = VL_RAND_RESET_I(31);
    vlSelf->quadra_top__DOT__s_fxd_d = VL_RAND_RESET_I(31);
    vlSelf->quadra_top__DOT__s_fxd_q = VL_RAND_RESET_I(31);
    vlSelf->quadra_top__DOT__t1_res = VL_RAND_RESET_Q(62);
    vlSelf->quadra_top__DOT__x2_to_res = VL_RAND_RESET_Q(62);
    vlSelf->quadra_top__DOT__b_to_res = VL_RAND_RESET_Q(62);
    vlSelf->quadra_top__DOT__t1_res_temp = VL_RAND_RESET_Q(61);
    vlSelf->quadra_top__DOT__t2_res = VL_RAND_RESET_Q(62);
    vlSelf->quadra_top__DOT__t0_to_s = VL_RAND_RESET_I(31);
    vlSelf->quadra_top__DOT__t1_to_s = VL_RAND_RESET_I(31);
    vlSelf->quadra_top__DOT__t2_to_s = VL_RAND_RESET_I(31);
    vlSelf->quadra_top__DOT__s_res = VL_RAND_RESET_I(31);
    vlSelf->quadra_top__DOT__m0__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->quadra_top__DOT__m0__DOT__x1_sign = VL_RAND_RESET_I(30);
    vlSelf->quadra_top__DOT__m0__DOT__x2_sign = VL_RAND_RESET_I(30);
    vlSelf->quadra_top__DOT__m0__DOT__res = VL_RAND_RESET_Q(60);
    vlSelf->quadra_top__DOT__m0__DOT__res_sign = VL_RAND_RESET_Q(60);
    vlSelf->quadra_top__DOT__m0__DOT__res_final = VL_RAND_RESET_Q(61);
    vlSelf->quadra_top__DOT__m1__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->quadra_top__DOT__m1__DOT__x1_sign = VL_RAND_RESET_I(30);
    vlSelf->quadra_top__DOT__m1__DOT__x2_sign = VL_RAND_RESET_I(30);
    vlSelf->quadra_top__DOT__m1__DOT__res = VL_RAND_RESET_Q(60);
    vlSelf->quadra_top__DOT__m1__DOT__res_sign = VL_RAND_RESET_Q(60);
    vlSelf->quadra_top__DOT__m1__DOT__res_final = VL_RAND_RESET_Q(61);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
