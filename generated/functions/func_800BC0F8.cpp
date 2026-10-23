#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800513DC(CpuContext* ctx);
extern "C" uint64_t func_800513DC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800BC0B0(CpuContext* ctx);
extern "C" uint32_t func_800BC0B0_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_800BC0C0(CpuContext* ctx);
extern "C" uint32_t func_800BC0C0_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_800BC0D4(CpuContext* ctx);
extern "C" uint32_t func_800BC0D4_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_800BC0B0_statefree(uint32_t);
extern "C" uint64_t func_800BC0C0_statefree(uint32_t);
extern "C" void func_800BC0D4_statefree(uint32_t);

extern "C" void func_800BC0F8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];

    goto loc_800BC0F8;

loc_800BC0F8:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r28 = r3;
    r29 = r4;
    r30 = r5;
    r31 = r6;
    r3 = 128;
    r4 = 0;
    r5 = 4;
    ctx->lr = 0x800BC134u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    InvokeDirectCpu<0x804B6EF0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    r3 = (r1 + 44);
    r4 = r28;
    r5 = r29;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80050D04u>(ctx);
    r3 = (r1 + 44);
    // inline leaf 0x800BC0D4 (9 guest instruction(s))
}

loc_inl0_0x800BC0D4:
{
    f1.d = MemoryInline::FlatReadFloat32(r3);
    f2.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f3.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl0_0x800BC0E4:
{
    r3 = -872349696;
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f3.d));
}

loc_inl0_cont_800BC0D4:
{
    // end of inlined leaf 0x800BC0D4
    r3 = r31;
    // inline leaf 0x800BC0C0 (5 guest instruction(s))
    r3 = (r3 & 1);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x800BC0C0
}

loc_800BC158:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800BC164;
    }
}

loc_800BC15C:
{
    r3 = 0;
    // inline leaf 0x800BC0B0 (4 guest instruction(s))
    r0 = (r3 & 255);
    r3 = -872349696;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    // end of inlined leaf 0x800BC0B0
}

loc_800BC164:
{
    r3 = (r1 + 32);
    r4 = r28;
    r5 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80050D04u>(ctx);
    r3 = (r1 + 32);
    // inline leaf 0x800BC0D4 (9 guest instruction(s))
}

loc_inl3_0x800BC0D4:
{
    f1.d = MemoryInline::FlatReadFloat32(r3);
    f2.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f3.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl3_0x800BC0E4:
{
    r3 = -872349696;
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f3.d));
}

loc_inl3_cont_800BC0D4:
{
    // end of inlined leaf 0x800BC0D4
    r3 = r31;
    // inline leaf 0x800BC0C0 (5 guest instruction(s))
    r3 = (r3 & 1);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x800BC0C0
}

loc_800BC188:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800BC194;
    }
}

loc_800BC18C:
{
    r3 = 1;
    // inline leaf 0x800BC0B0 (4 guest instruction(s))
    r0 = (r3 & 255);
    r3 = -872349696;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    // end of inlined leaf 0x800BC0B0
}

loc_800BC194:
{
    r3 = (r1 + 20);
    r4 = r28;
    r5 = r29;
    ctx->lr = 0x800BC1A4u;
    if constexpr (KnownRegArgsCpuCall<0x800513DCu>(&func_800513DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[1] = f1;
        const auto regargs_result_800513DC_13FC = func_800513DC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800513DC_13FC);
        r4 = static_cast<uint32_t>(regargs_result_800513DC_13FC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800513DCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    }
    r3 = (r1 + 20);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800BC0D4u) && KnownTranslatedCpuCall<0x800BC0D4u>::kAvailable && !KnownTranslatedCpuCall<0x800BC0D4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800BC0D4u>()) {
        func_800BC0D4_statefree(r3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x800BC0D4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    r3 = r31;
    // inline leaf 0x800BC0C0 (5 guest instruction(s))
    r3 = (r3 & 1);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    // end of inlined leaf 0x800BC0C0
}

loc_800BC1B8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800BC1C4;
    }
}

loc_800BC1BC:
{
    r3 = 2;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800BC0B0u) && KnownTranslatedCpuCall<0x800BC0B0u>::kAvailable && !KnownTranslatedCpuCall<0x800BC0B0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800BC0B0u>()) {
        const auto state_free_result_800BC0B0_1CCA = func_800BC0B0_statefree(r3);
        r3 = static_cast<uint32_t>(state_free_result_800BC0B0_1CCA);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x800BC0B0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
}

loc_800BC1C4:
{
    r3 = (r1 + 8);
    r4 = r28;
    r5 = r30;
    ctx->lr = 0x800BC1D4u;
    if constexpr (KnownRegArgsCpuCall<0x800513DCu>(&func_800513DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[1] = f1;
        const auto regargs_result_800513DC_206C = func_800513DC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800513DC_206C);
        r4 = static_cast<uint32_t>(regargs_result_800513DC_206C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800513DCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    }
    r3 = (r1 + 8);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800BC0D4u) && KnownTranslatedCpuCall<0x800BC0D4u>::kAvailable && !KnownTranslatedCpuCall<0x800BC0D4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800BC0D4u>()) {
        func_800BC0D4_statefree(r3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x800BC0D4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    r3 = r31;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800BC0C0u) && KnownTranslatedCpuCall<0x800BC0C0u>::kAvailable && !KnownTranslatedCpuCall<0x800BC0C0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800BC0C0u>()) {
        const auto state_free_result_800BC0C0_278D = func_800BC0C0_statefree(r3);
        r3 = static_cast<uint32_t>(state_free_result_800BC0C0_278D);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x800BC0C0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
}

loc_800BC1E8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800BC1F4;
    }
}

loc_800BC1EC:
{
    r3 = 3;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800BC0B0u) && KnownTranslatedCpuCall<0x800BC0B0u>::kAvailable && !KnownTranslatedCpuCall<0x800BC0B0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800BC0B0u>()) {
        const auto state_free_result_800BC0B0_2BCA = func_800BC0B0_statefree(r3);
        r3 = static_cast<uint32_t>(state_free_result_800BC0B0_2BCA);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x800BC0B0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
}

loc_800BC1F4:
{
    // inline leaf 0x800BC0AC (1 guest instruction(s))
    // end of inlined leaf 0x800BC0AC
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800BC0F8 func_800BC0F8 preserves=true fpr_mask=0x00000000
