#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800CF3F8(CpuContext* ctx);
extern "C" uint32_t func_800CF3F8_ra8_0_10_0(CpuContext*, uint32_t);
extern "C" void func_802BC5C8(CpuContext* ctx);
extern "C" uint64_t func_802BC5C8_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_802BED34(CpuContext* ctx);
extern "C" uint32_t func_802BED34_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_800CF3F8_statefree(uint32_t);

extern "C" uint64_t func_802BEEA0_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;

    goto loc_802BEEA0;

loc_802BEEA0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r30 = r4;
    // inline leaf 0x800CF3E8 (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 39));
    // end of inlined leaf 0x800CF3E8
    r31 = r3;
    r3 = 0;
    // inline leaf 0x800CF3F8 (4 guest instruction(s))
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    MemoryInline::FlatWriteRam8((r4 + 39), static_cast<uint8_t>(r3));
    // end of inlined leaf 0x800CF3F8
    ctx->lr = 0x802BEED4u;
    if constexpr (KnownRegArgsCpuCall<0x802BED34u>(&func_802BED34)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_802BED34_77D = func_802BED34_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_802BED34_77D;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->cr = cr;
        InvokeDirectCpu<0x802BED34u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    }
    r3 = MemoryInline::FlatRead32((r3 + 1172));
    r3 = (r3 + 60);
    // inline leaf 0x802B06EC (6 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13856));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
    r3 = cr;
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x802B06EC
}

loc_802BEEE4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802BEEF4;
    }
}

loc_802BEEE8:
{
    r3 = (r29 & 255);
    r4 = r30;
    ctx->lr = 0x802BEEF4u;
    if constexpr (KnownRegArgsCpuCall<0x802BC5C8u>(&func_802BC5C8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_802BC5C8_C81 = func_802BC5C8_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802BC5C8_C81);
        r4 = static_cast<uint32_t>(regargs_result_802BC5C8_C81 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x802BC5C8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_802BEEF4:
{
    r3 = 1;
    // inline leaf 0x800CF3F8 (4 guest instruction(s))
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    MemoryInline::FlatWriteRam8((r4 + 39), static_cast<uint8_t>(r3));
    // end of inlined leaf 0x800CF3F8
    ctx->lr = 0x802BEF00u;
    if constexpr (KnownRegArgsCpuCall<0x802BED34u>(&func_802BED34)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_802BED34_10A3 = func_802BED34_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_802BED34_10A3;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->cr = cr;
        InvokeDirectCpu<0x802BED34u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    }
    r3 = MemoryInline::FlatRead32((r3 + 1172));
    r3 = (r3 + 60);
    // inline leaf 0x802B06EC (6 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13856));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
    r3 = cr;
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x802B06EC
}

loc_802BEF10:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802BEF20;
    }
}

loc_802BEF14:
{
    r3 = (r29 & 255);
    r4 = r30;
    ctx->lr = 0x802BEF20u;
    if constexpr (KnownRegArgsCpuCall<0x802BC5C8u>(&func_802BC5C8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_802BC5C8_15A9 = func_802BC5C8_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802BC5C8_15A9);
        r4 = static_cast<uint32_t>(regargs_result_802BC5C8_15A9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x802BC5C8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_802BEF20:
{
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r31)));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800CF3F8u) && KnownTranslatedCpuCall<0x800CF3F8u>::kAvailable && !KnownTranslatedCpuCall<0x800CF3F8u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800CF3F8u>()) {
        const auto state_free_result_800CF3F8_196F = func_800CF3F8_statefree(r3);
        r4 = static_cast<uint32_t>(state_free_result_800CF3F8_196F);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x800CF3F8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802BEEA0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802BEEA0_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001F gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802BEEA0 func_802BEEA0 preserves=true fpr_mask=0x00000000
