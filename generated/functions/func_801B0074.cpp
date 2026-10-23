#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800CFAF4(CpuContext* ctx);
extern "C" uint64_t func_800CFAF4_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_801D66F8(CpuContext* ctx);
extern "C" uint32_t func_801D66F8_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_801E0220(CpuContext* ctx);
extern "C" uint32_t func_801E0220_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" MkwStateFreeResult2 func_801D66F8_statefree(uint32_t, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_801E0220_statefree(uint32_t, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_801D66F8_statefree_v0(uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_801E0220_statefree_v0(uint32_t, uint32_t);

extern "C" uint32_t func_801B0074_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t xer = ctx->xer;

    goto loc_801B0074;

loc_801B0074:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r28 = r3;
    r3 = 3;
    // inline leaf 0x800CFB34 (15 guest instruction(s))
}

loc_inl0_0x800CFB34:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl0_0x800CFB44:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x800CFB50;
    }
}

loc_inl0_0x800CFB48:
{
    r3 = 0;
    goto loc_inl0_cont_800CFB34;
}

loc_inl0_0x800CFB50:
{
    r0 = (r3 & 255);
}

loc_inl0_0x800CFB58:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl0_0x800CFB64;
    }
}

loc_inl0_0x800CFB5C:
{
    r3 = 0;
    goto loc_inl0_cont_800CFB34;
}

loc_inl0_0x800CFB64:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r4_addr_1 = (r4 + r0);
    r3 = MemoryInline::FlatRead16(r4_addr_1);
}

loc_inl0_cont_800CFB34:
{
    // end of inlined leaf 0x800CFB34
    r30 = (r3 & 65535);
    r3 = 3;
    if constexpr (KnownRegArgsCpuCall<0x800CFAF4u>(&func_800CFAF4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800CFAF4_ABB = func_800CFAF4_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_800CFAF4_ABB);
        r4 = static_cast<uint32_t>(regargs_result_800CFAF4_ABB >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800CFAF4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r31 = r3;
    r29 = 0;
    goto loc_801B0144;
}

loc_801B00B4:
{
    r0 = MemoryInline::FlatRead8(r31);
}

loc_801B00BC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801B013C;
    }
}

loc_801B00C0:
{
    r3 = MemoryInline::FlatRead8((r31 + 481));
    r0 = (r28 & 255);
}

loc_801B00CC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_801B013C;
    }
}

loc_801B00D0:
{
    r3 = MemoryInline::FlatRead8((r31 + 3));
    r0 = (r3 + -1);
}

loc_801B00DC:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_801B00F4;
    }
}

loc_801B00E0:
{
}

loc_801B00E4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(5))) {
        goto loc_801B010C;
    }
}

loc_801B00E8:
{
}

loc_801B00EC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(7))) {
        goto loc_801B0124;
    }
}

loc_801B00F0:
{
    goto loc_801B013C;
}

loc_801B00F4:
{
    r3 = r31;
    // inline leaf 0x801547E8 (10 guest instruction(s))
}

loc_inl1_0x801547E8:
{
    r0 = MemoryInline::FlatRead8((r3 + 485));
}

loc_inl1_0x801547F0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(13))) {
        goto loc_inl1_0x80154808;
    }
}

loc_inl1_0x801547F4:
{
    r0 = MemoryInline::FlatRead8((r3 + 486));
}

loc_inl1_0x801547FC:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(4))) {
        goto loc_inl1_0x80154808;
    }
}

loc_inl1_0x80154800:
{
    r3 = 1;
    goto loc_inl1_cont_801547E8;
}

loc_inl1_0x80154808:
{
    r3 = 0;
}

loc_inl1_cont_801547E8:
{
    // end of inlined leaf 0x801547E8
}

loc_801B0100:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801B013C;
    }
}

loc_801B0104:
{
    r3 = 1;
    goto loc_801B0150;
}

loc_801B010C:
{
    r3 = r31;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x801D66F8u) && KnownTranslatedCpuCall<0x801D66F8u>::kAvailable && !KnownTranslatedCpuCall<0x801D66F8u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x801D66F8u>()) {
        const auto state_free_result_801D66F8_155B = func_801D66F8_statefree_v0(r3, xer);
        r0 = static_cast<uint32_t>(state_free_result_801D66F8_155B[0]);
        r3 = static_cast<uint32_t>(state_free_result_801D66F8_155B[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x801D66F8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        xer = ctx->xer;
    }
}

loc_801B0118:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801B013C;
    }
}

loc_801B011C:
{
    r3 = 1;
    goto loc_801B0150;
}

loc_801B0124:
{
    r3 = r31;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x801E0220u) && KnownTranslatedCpuCall<0x801E0220u>::kAvailable && !KnownTranslatedCpuCall<0x801E0220u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x801E0220u>()) {
        const auto state_free_result_801E0220_1952 = func_801E0220_statefree_v0(r3, xer);
        r0 = static_cast<uint32_t>(state_free_result_801E0220_1952[0]);
        r3 = static_cast<uint32_t>(state_free_result_801E0220_1952[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x801E0220u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        xer = ctx->xer;
    }
}

loc_801B0130:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801B013C;
    }
}

loc_801B0134:
{
    r3 = 1;
    goto loc_801B0150;
}

loc_801B013C:
{
    r29 = (r29 + 1);
    r31 = (r31 + 2840);
}

loc_801B0144:
{
}

loc_801B0148:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(r30))) {
        goto loc_801B00B4;
    }
}

loc_801B014C:
{
    r3 = 0;
}

loc_801B0150:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    return r3;
}

}

extern "C" void func_801B0074(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_801B0074_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801B0074 func_801B0074 preserves=true fpr_mask=0x00000000
