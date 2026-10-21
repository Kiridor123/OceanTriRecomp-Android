#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804A55A0(CpuContext* ctx);
extern "C" uint32_t func_804A55A0_ra0_0_8_0(CpuContext*);
extern "C" void func_804A55E0(CpuContext* ctx);
extern "C" uint32_t func_804A55E0_ra8_0_10_0(CpuContext*, uint32_t);
extern "C" void func_804A5840(CpuContext* ctx);
extern "C" void func_804A5840_ra38_1fe_0_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_804A55A0_statefree();
extern "C" uint64_t func_804A55E0_statefree(uint32_t);
extern "C" void func_804A55E0_statefree_v0(uint32_t);

extern "C" uint32_t func_804A5E70_ra68_1fe_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r5, uint32_t arg_r6, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r3_mdest_0 = 0;
    uint32_t r3_mrot_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_10 = 0;
    uint32_t r3_rot_11 = 0;
    uint32_t r3_rot_12 = 0;
    uint32_t r3_rot_13 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = arg_r5;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    ctx->gpr[6] = arg_r6;
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x804A5E70u);
    goto loc_804A5E70;

loc_804A5E70:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = 0x80620000u;
    r31 = (r31 + -29112);
    r30 = r3;
}

loc_804A5E90:
{
    // inline leaf 0x804A55B0 (4 guest instruction(s))
    r3 = -872415232;
    r0 = MemoryInline::FlatRead16((r3 + 20484));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r3 = (r3_rot_2 & 1);
    // end of inlined leaf 0x804A55B0
}

loc_804A5E98:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804A5E90;
    }
}

loc_804A5E9C:
{
    // inline leaf 0x804A55C0 (5 guest instruction(s))
    r3 = -872415232;
    r0 = MemoryInline::FlatRead16((r3 + 20484));
    r3 = MemoryInline::FlatRead16((r3 + 20486));
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r3_mrot_0 = (r3_rot_3 & -65536);
    r3_mdest_0 = (r3 & 65535);
    r3 = (r3_mdest_0 | r3_mrot_0);
    // end of inlined leaf 0x804A55C0
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    r3 = 0x80F40000u;
    r3 = (r3 + -24575);
    // inline leaf 0x804A55E0 (5 guest instruction(s))
    r4 = -872415232;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0 = (r0_rot_0 & 65535);
    MemoryInline::FlatWrite16((r4 + 20480), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r4 + 20482), static_cast<uint16_t>(r3));
    // end of inlined leaf 0x804A55E0
}

loc_804A5EB0:
{
    // inline leaf 0x804A55A0 (4 guest instruction(s))
    r3 = -872415232;
    r0 = MemoryInline::FlatRead16((r3 + 20480));
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r3 = (r3_rot_5 & 1);
    // end of inlined leaf 0x804A55A0
}

loc_804A5EB8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804A5EB0;
    }
}

loc_804A5EBC:
{
    r3 = MemoryInline::FlatRead32((r30 + 12));
    // inline leaf 0x804A55E0 (5 guest instruction(s))
    r4 = -872415232;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0 = (r0_rot_1 & 65535);
    MemoryInline::FlatWrite16((r4 + 20480), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r4 + 20482), static_cast<uint16_t>(r3));
    // end of inlined leaf 0x804A55E0
}

loc_804A5EC4:
{
    // inline leaf 0x804A55A0 (4 guest instruction(s))
    r3 = -872415232;
    r0 = MemoryInline::FlatRead16((r3 + 20480));
    r3_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r3 = (r3_rot_7 & 1);
    // end of inlined leaf 0x804A55A0
}

loc_804A5ECC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804A5EC4;
    }
}

loc_804A5ED0:
{
    r3 = 0x80F40000u;
    r3 = (r3 + -16382);
    // inline leaf 0x804A55E0 (5 guest instruction(s))
    r4 = -872415232;
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0 = (r0_rot_2 & 65535);
    MemoryInline::FlatWrite16((r4 + 20480), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r4 + 20482), static_cast<uint16_t>(r3));
    // end of inlined leaf 0x804A55E0
}

loc_804A5EDC:
{
    // inline leaf 0x804A55A0 (4 guest instruction(s))
    r3 = -872415232;
    r0 = MemoryInline::FlatRead16((r3 + 20480));
    r3_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r3 = (r3_rot_9 & 1);
    // end of inlined leaf 0x804A55A0
}

loc_804A5EE4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804A5EDC;
    }
}

loc_804A5EE8:
{
    r0 = MemoryInline::FlatRead32((r30 + 20));
    r3 = (r0 & 65535);
    // inline leaf 0x804A55E0 (5 guest instruction(s))
    r4 = -872415232;
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0 = (r0_rot_3 & 65535);
    MemoryInline::FlatWrite16((r4 + 20480), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r4 + 20482), static_cast<uint16_t>(r3));
    // end of inlined leaf 0x804A55E0
}

loc_804A5EF4:
{
    // inline leaf 0x804A55A0 (4 guest instruction(s))
    r3 = -872415232;
    r0 = MemoryInline::FlatRead16((r3 + 20480));
    r3_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r3 = (r3_rot_11 & 1);
    // end of inlined leaf 0x804A55A0
}

loc_804A5EFC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804A5EF4;
    }
}

loc_804A5F00:
{
    r3 = 0x80F40000u;
    r3 = (r3 + -24574);
    // inline leaf 0x804A55E0 (5 guest instruction(s))
    r4 = -872415232;
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0 = (r0_rot_4 & 65535);
    MemoryInline::FlatWrite16((r4 + 20480), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r4 + 20482), static_cast<uint16_t>(r3));
    // end of inlined leaf 0x804A55E0
}

loc_804A5F0C:
{
    // inline leaf 0x804A55A0 (4 guest instruction(s))
    r3 = -872415232;
    r0 = MemoryInline::FlatRead16((r3 + 20480));
    r3_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r3 = (r3_rot_13 & 1);
    // end of inlined leaf 0x804A55A0
}

loc_804A5F14:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804A5F0C;
    }
}

loc_804A5F18:
{
    r3 = MemoryInline::FlatRead32((r30 + 16));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x804A55E0u) && KnownTranslatedCpuCall<0x804A55E0u>::kAvailable && !KnownTranslatedCpuCall<0x804A55E0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x804A55E0u>()) {
        func_804A55E0_statefree_v0(r3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x804A55E0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    }
}

loc_804A5F20:
{
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x804A55A0u) && KnownTranslatedCpuCall<0x804A55A0u>::kAvailable && !KnownTranslatedCpuCall<0x804A55A0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x804A55A0u>()) {
        const auto state_free_result_804A55A0_22A0 = func_804A55A0_statefree();
        r3 = static_cast<uint32_t>(state_free_result_804A55A0_22A0);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x804A55A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    }
}

loc_804A5F28:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804A5F20;
    }
}

loc_804A5F2C:
{
    r3 = 0x80F40000u;
    r3 = (r3 + -20478);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x804A55E0u) && KnownTranslatedCpuCall<0x804A55E0u>::kAvailable && !KnownTranslatedCpuCall<0x804A55E0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x804A55E0u>()) {
        func_804A55E0_statefree_v0(r3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x804A55E0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    }
}

loc_804A5F38:
{
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x804A55A0u) && KnownTranslatedCpuCall<0x804A55A0u>::kAvailable && !KnownTranslatedCpuCall<0x804A55A0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x804A55A0u>()) {
        const auto state_free_result_804A55A0_2C2E = func_804A55A0_statefree();
        r3 = static_cast<uint32_t>(state_free_result_804A55A0_2C2E);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x804A55A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    }
}

loc_804A5F40:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804A5F38;
    }
}

loc_804A5F44:
{
    r3 = 0;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x804A55E0u) && KnownTranslatedCpuCall<0x804A55E0u>::kAvailable && !KnownTranslatedCpuCall<0x804A55E0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x804A55E0u>()) {
        func_804A55E0_statefree_v0(r3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x804A55E0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    }
}

loc_804A5F4C:
{
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x804A55A0u) && KnownTranslatedCpuCall<0x804A55A0u>::kAvailable && !KnownTranslatedCpuCall<0x804A55A0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x804A55A0u>()) {
        const auto state_free_result_804A55A0_359A = func_804A55A0_statefree();
        r3 = static_cast<uint32_t>(state_free_result_804A55A0_359A);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x804A55A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    }
}

loc_804A5F54:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804A5F4C;
    }
}

loc_804A5F58:
{
    r3 = 0x80F40000u;
    r3 = (r3 + -12287);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x804A55E0u) && KnownTranslatedCpuCall<0x804A55E0u>::kAvailable && !KnownTranslatedCpuCall<0x804A55E0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x804A55E0u>()) {
        func_804A55E0_statefree_v0(r3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x804A55E0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    }
}

loc_804A5F64:
{
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x804A55A0u) && KnownTranslatedCpuCall<0x804A55A0u>::kAvailable && !KnownTranslatedCpuCall<0x804A55A0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x804A55A0u>()) {
        const auto state_free_result_804A55A0_3F28 = func_804A55A0_statefree();
        r3 = static_cast<uint32_t>(state_free_result_804A55A0_3F28);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x804A55A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    }
}

loc_804A5F6C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804A5F64;
    }
}

loc_804A5F70:
{
    r3 = MemoryInline::FlatRead16((r30 + 36));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x804A55E0u) && KnownTranslatedCpuCall<0x804A55E0u>::kAvailable && !KnownTranslatedCpuCall<0x804A55E0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x804A55E0u>()) {
        func_804A55E0_statefree_v0(r3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x804A55E0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    }
}

loc_804A5F78:
{
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x804A55A0u) && KnownTranslatedCpuCall<0x804A55A0u>::kAvailable && !KnownTranslatedCpuCall<0x804A55A0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x804A55A0u>()) {
        const auto state_free_result_804A55A0_48B7 = func_804A55A0_statefree();
        r3 = static_cast<uint32_t>(state_free_result_804A55A0_48B7);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x804A55A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    }
}

loc_804A5F80:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804A5F78;
    }
}

loc_804A5F84:
{
    r4 = r30;
    r3 = (r31 + 0);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    if constexpr (KnownRegArgsCpuCall<0x804A5840u>(&func_804A5840)) {
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        func_804A5840_ra38_1fe_0_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x804A5840u>(ctx);
        r1 = ctx->gpr[1];
    }
    r4 = MemoryInline::FlatRead32((r30 + 12));
    r3 = (r31 + 32);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    if constexpr (KnownRegArgsCpuCall<0x804A5840u>(&func_804A5840)) {
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        func_804A5840_ra38_1fe_0_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x804A5840u>(ctx);
        r1 = ctx->gpr[1];
    }
    r4 = MemoryInline::FlatRead32((r30 + 20));
    r3 = (r31 + 80);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    if constexpr (KnownRegArgsCpuCall<0x804A5840u>(&func_804A5840)) {
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        func_804A5840_ra38_1fe_0_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x804A5840u>(ctx);
        r1 = ctx->gpr[1];
    }
    r4 = MemoryInline::FlatRead32((r30 + 16));
    r3 = (r31 + 128);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    if constexpr (KnownRegArgsCpuCall<0x804A5840u>(&func_804A5840)) {
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        func_804A5840_ra38_1fe_0_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x804A5840u>(ctx);
        r1 = ctx->gpr[1];
    }
    r4 = MemoryInline::FlatRead32((r30 + 28));
    r3 = (r31 + 176);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    if constexpr (KnownRegArgsCpuCall<0x804A5840u>(&func_804A5840)) {
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        func_804A5840_ra38_1fe_0_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x804A5840u>(ctx);
        r1 = ctx->gpr[1];
    }
    r4 = MemoryInline::FlatRead16((r30 + 36));
    r3 = (r31 + 224);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    if constexpr (KnownRegArgsCpuCall<0x804A5840u>(&func_804A5840)) {
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        func_804A5840_ra38_1fe_0_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x804A5840u>(ctx);
        r1 = ctx->gpr[1];
    }
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return r3;
}

}

extern "C" void func_804A5E70(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_804A5E70_ra68_1fe_8_0(ctx, ctx->gpr[3], ctx->gpr[5], ctx->gpr[6], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x000007EB gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x000001FE fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0x03 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804A5E70 func_804A5E70 preserves=true fpr_mask=0x00000000
