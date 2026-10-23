#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004AED4(CpuContext* ctx);
extern "C" uint32_t func_8004AED4_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_8004AF24(CpuContext* ctx);
extern "C" uint64_t func_8004AF24_ra28_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8004AFC4(CpuContext* ctx);
extern "C" uint32_t func_8004AFC4_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8004B0C8(CpuContext* ctx);
extern "C" uint64_t func_8004B0C8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" MkwStateFreeResult2 func_8004AFC4_statefree(uint32_t, uint32_t, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_8004AFC4_statefree_v0(uint32_t, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8039D00C_ra68_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r5, uint32_t arg_r6)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = arg_r5;
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->gpr[6] = arg_r6;
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8039D00C;

loc_8039D00C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    // inline leaf 0x8004D184 (5 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead32((r3 + 2396));
    MemoryInline::FlatWrite32((r13 + -17824), r3);
    // end of inlined leaf 0x8004D184
    ctx->lr = 0x8039D02Cu;
    if constexpr (KnownRegArgsCpuCall<0x8004AF24u>(&func_8004AF24)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8004AF24_7AA = func_8004AF24_ra28_0_18_0(ctx, r3, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004AF24_7AA);
        r4 = static_cast<uint32_t>(regargs_result_8004AF24_7AA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x8004AF24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_8039D030:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8039D064;
    }
}

loc_8039D034:
{
    r3 = 0;
    // inline leaf 0x8004AF70 (5 guest instruction(s))
}

loc_inl1_0x8004AF70:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_inl1_0x8004AF74:
{
    r3 = 24;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x8004AF7C:
{
    r3 = 32;
    goto loc_inl1_cont_8004AF70;
}

loc_inl1_return:
{
}

loc_inl1_cont_8004AF70:
{
    // end of inlined leaf 0x8004AF70
    r31 = r3;
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    r4 = 0;
    // inline leaf 0x8004AFC4 (6 guest instruction(s))
}

loc_inl2_0x8004AFC4:
{
}

loc_inl2_0x8004AFC8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(1))) {
        goto loc_inl2_0x8004AFD4;
    }
}

loc_inl2_0x8004AFCC:
{
    r3 = (r3 + 256);
    goto loc_inl2_cont_8004AFC4;
}

loc_inl2_0x8004AFD4:
{
    r3 = (r3 + 160);
}

loc_inl2_cont_8004AFC4:
{
    // end of inlined leaf 0x8004AFC4
    r4 = r3;
    r3 = (r30 & 65535);
    r5 = r31;
    if constexpr (KnownRegArgsCpuCall<0x8004B0C8u>(&func_8004B0C8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8004B0C8_FE4 = func_8004B0C8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004B0C8_FE4);
        r4 = static_cast<uint32_t>(regargs_result_8004B0C8_FE4 >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x8004B0C8u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r31 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    goto loc_8039D090;
}

loc_8039D064:
{
    r3 = 1;
    // inline leaf 0x8004AF70 (5 guest instruction(s))
}

loc_inl3_0x8004AF70:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_inl3_0x8004AF74:
{
    r3 = 24;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl3_return;
    }
}

loc_inl3_0x8004AF7C:
{
    r3 = 32;
    goto loc_inl3_cont_8004AF70;
}

loc_inl3_return:
{
}

loc_inl3_cont_8004AF70:
{
    // end of inlined leaf 0x8004AF70
    r31 = r3;
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    r4 = 1;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8004AFC4u) && KnownTranslatedCpuCall<0x8004AFC4u>::kAvailable && !KnownTranslatedCpuCall<0x8004AFC4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8004AFC4u>()) {
        const auto state_free_result_8004AFC4_15D7 = func_8004AFC4_statefree_v0(r3, r4, cr, xer);
        r3 = static_cast<uint32_t>(state_free_result_8004AFC4_15D7[0]);
        cr = static_cast<uint32_t>(state_free_result_8004AFC4_15D7[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x8004AFC4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r13 = ctx->gpr[13];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r4 = r3;
    r3 = (r30 & 65535);
    r5 = r31;
    if constexpr (KnownRegArgsCpuCall<0x8004B0C8u>(&func_8004B0C8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8004B0C8_1949 = func_8004B0C8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004B0C8_1949);
        r4 = static_cast<uint32_t>(regargs_result_8004B0C8_1949 >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x8004B0C8u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r31 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
}

loc_8039D090:
{
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    ctx->lr = 0x8039D098u;
    if constexpr (KnownRegArgsCpuCall<0x8004AED4u>(&func_8004AED4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_8004AED4_1D1B = func_8004AED4_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8004AED4_1D1B;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x8004AED4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r5 = (r3 & 65535);
    r3 = (r30 & 65535);
    r4 = MemoryInline::FlatRead32((r13 + -17824));
    r4 = (r4 + 384);
    ctx->lr = 0x8039D0ACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8004B770u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r3 = (r31 + r0);
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8039D00C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8039D00C_ra68_0_18_0(ctx, ctx->gpr[3], ctx->gpr[5], ctx->gpr[6]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FEF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8039D00C func_8039D00C preserves=true fpr_mask=0x00000000
