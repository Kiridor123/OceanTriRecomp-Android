#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004AED4(CpuContext* ctx);
extern "C" uint32_t func_8004AED4_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_8004AFC4(CpuContext* ctx);
extern "C" uint32_t func_8004AFC4_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8004B0C8(CpuContext* ctx);
extern "C" uint64_t func_8004B0C8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8004B108(CpuContext* ctx);
extern "C" uint64_t func_8004B108_ra58_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80273218(CpuContext* ctx);
extern "C" uint64_t func_80273218_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" MkwStateFreeResult2 func_8004AFC4_statefree(uint32_t, uint32_t, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_8004AFC4_statefree_v0(uint32_t, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8034A878_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8034A878;

loc_8034A878:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r28 = r4;
    r30 = MemoryInline::FlatRead32((r3 + 400));
    // inline leaf 0x800CF26C (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 36));
    // end of inlined leaf 0x800CF26C
    r0 = (r3 & 255);
}

loc_8034A8A8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_8034A8BC;
    }
}

loc_8034A8AC:
{
    r3 = (r28 & 65535);
    r4 = MemoryInline::FlatRead32((r13 + -17824));
    ctx->lr = 0x8034A8B8u;
    if constexpr (KnownRegArgsCpuCall<0x8004B108u>(&func_8004B108)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_8004B108_A39 = func_8004B108_ra58_0_18_0(ctx, r3, r4, r6);
        r3 = static_cast<uint32_t>(regargs_result_8004B108_A39);
        r4 = static_cast<uint32_t>(regargs_result_8004B108_A39 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x8004B108u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    goto loc_8034A958;
}

loc_8034A8BC:
{
    r3 = r30;
    r4 = (r28 & 65535);
    ctx->lr = 0x8034A8C8u;
    if constexpr (KnownRegArgsCpuCall<0x80273218u>(&func_80273218)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80273218_E43 = func_80273218_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80273218_E43);
        r4 = static_cast<uint32_t>(regargs_result_80273218_E43 >> 32);
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
        InvokeDirectCpu<0x80273218u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r31 = r3;
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    ctx->lr = 0x8034A8D4u;
    if constexpr (KnownRegArgsCpuCall<0x8004AED4u>(&func_8004AED4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_8004AED4_126B = func_8004AED4_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8004AED4_126B;
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
    r3 = (r28 & 65535);
    r4 = MemoryInline::FlatRead32((r13 + -17824));
    r4 = (r4 + 384);
    ctx->lr = 0x8034A8E8u;
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
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r29 = (r31 + r3);
    r3 = r30;
    // inline leaf 0x8026FEA8 (9 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2));
    r4 = (r3 + -4);
    r3 = 2;
    r0 = (2 - r4);
    r3 = (r3 | ~r4);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_1 & 2147483647);
    r0 = (r3 - r0);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x8026FEA8
}

loc_8034A8F8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8034A92C;
    }
}

loc_8034A8FC:
{
    r3 = 0;
    // inline leaf 0x8004AF70 (5 guest instruction(s))
}

loc_inl2_0x8004AF70:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_inl2_0x8004AF74:
{
    r3 = 24;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x8004AF7C:
{
    r3 = 32;
    goto loc_inl2_cont_8004AF70;
}

loc_inl2_return:
{
}

loc_inl2_cont_8004AF70:
{
    // end of inlined leaf 0x8004AF70
    r31 = r3;
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    r4 = 0;
    // inline leaf 0x8004AFC4 (6 guest instruction(s))
}

loc_inl3_0x8004AFC4:
{
}

loc_inl3_0x8004AFC8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(1))) {
        goto loc_inl3_0x8004AFD4;
    }
}

loc_inl3_0x8004AFCC:
{
    r3 = (r3 + 256);
    goto loc_inl3_cont_8004AFC4;
}

loc_inl3_0x8004AFD4:
{
    r3 = (r3 + 160);
}

loc_inl3_cont_8004AFC4:
{
    // end of inlined leaf 0x8004AFC4
    r4 = r3;
    r3 = (r28 & 65535);
    r5 = r31;
    if constexpr (KnownRegArgsCpuCall<0x8004B0C8u>(&func_8004B0C8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8004B0C8_1E08 = func_8004B0C8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004B0C8_1E08);
        r4 = static_cast<uint32_t>(regargs_result_8004B0C8_1E08 >> 32);
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
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
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r3 = (r29 + r3);
    goto loc_8034A958;
}

loc_8034A92C:
{
    r3 = 1;
    // inline leaf 0x8004AF70 (5 guest instruction(s))
}

loc_inl4_0x8004AF70:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_inl4_0x8004AF74:
{
    r3 = 24;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl4_return;
    }
}

loc_inl4_0x8004AF7C:
{
    r3 = 32;
    goto loc_inl4_cont_8004AF70;
}

loc_inl4_return:
{
}

loc_inl4_cont_8004AF70:
{
    // end of inlined leaf 0x8004AF70
    r31 = r3;
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    r4 = 1;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8004AFC4u) && KnownTranslatedCpuCall<0x8004AFC4u>::kAvailable && !KnownTranslatedCpuCall<0x8004AFC4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8004AFC4u>()) {
        const auto state_free_result_8004AFC4_240D = func_8004AFC4_statefree_v0(r3, r4, cr, xer);
        r3 = static_cast<uint32_t>(state_free_result_8004AFC4_240D[0]);
        cr = static_cast<uint32_t>(state_free_result_8004AFC4_240D[1]);
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
        r6 = ctx->gpr[6];
        r13 = ctx->gpr[13];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r4 = r3;
    r3 = (r28 & 65535);
    r5 = r31;
    if constexpr (KnownRegArgsCpuCall<0x8004B0C8u>(&func_8004B0C8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8004B0C8_279A = func_8004B0C8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004B0C8_279A);
        r4 = static_cast<uint32_t>(regargs_result_8004B0C8_279A >> 32);
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
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
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r3 = (r29 + r3);
}

loc_8034A958:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8034A878(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8034A878_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8034A878 func_8034A878 preserves=true fpr_mask=0x00000000
