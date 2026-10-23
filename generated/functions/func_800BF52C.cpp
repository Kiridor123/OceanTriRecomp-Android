#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800BF5CC(CpuContext* ctx);
extern "C" uint32_t func_800BF5CC_ra0_6_8_0(CpuContext*, double, double);
extern "C" void func_800BF5F0(CpuContext* ctx);
extern "C" uint32_t func_800BF5F0_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_800BF5CC_statefree(PPC_FPR, PPC_FPR);

extern "C" void func_800BF52C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];

    goto loc_800BF52C;

loc_800BF52C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r30 = r4;
    r31 = r5;
    r3 = 168;
    r4 = 0;
    r5 = 2;
    ctx->lr = 0x800BF560u;
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
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    r3 = r29;
    // inline leaf 0x800BF5F0 (9 guest instruction(s))
}

loc_inl0_0x800BF5F0:
{
    f1.d = MemoryInline::FlatReadFloat32(r3);
    f2.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f3.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl0_0x800BF600:
{
    r3 = -872349696;
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f3.d));
}

loc_inl0_cont_800BF5F0:
{
    // end of inlined leaf 0x800BF5F0
    r3 = r31;
    // inline leaf 0x800BF5DC (5 guest instruction(s))
    r3 = (r3 & 1);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x800BF5DC
}

loc_800BF574:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800BF584;
    }
}

loc_800BF578:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -30964));
    f2.d = f1.d;
    // inline leaf 0x800BF5CC (4 guest instruction(s))
    r3 = -872349696;
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    // end of inlined leaf 0x800BF5CC
}

loc_800BF584:
{
    r3 = r30;
    if constexpr (KnownRegArgsCpuCall<0x800BF5F0u>(&func_800BF5F0)) {
        ctx->gpr[1] = r1;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        const auto regargs_result_800BF5F0_C4E = func_800BF5F0_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800BF5F0_C4E;
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x800BF5F0u>(ctx);
        r3 = ctx->gpr[3];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    r3 = r31;
    // inline leaf 0x800BF5DC (5 guest instruction(s))
    r3 = (r3 & 1);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x800BF5DC
}

loc_800BF598:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800BF5A8;
    }
}

loc_800BF59C:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -30964));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -30960));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800BF5CCu) && KnownTranslatedCpuCall<0x800BF5CCu>::kAvailable && !KnownTranslatedCpuCall<0x800BF5CCu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800BF5CCu>()) {
        const auto state_free_result_800BF5CC_116C = func_800BF5CC_statefree(f1, f2);
        r3 = static_cast<uint32_t>(state_free_result_800BF5CC_116C);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x800BF5CCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
}

loc_800BF5A8:
{
    // inline leaf 0x800BF5C8 (1 guest instruction(s))
    // end of inlined leaf 0x800BF5C8
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
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

// RECOMP_GUEST_ABI gpr_read=0x00003FFE gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800BF52C func_800BF52C preserves=true fpr_mask=0x00000000
