#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804A55A0(CpuContext* ctx);
extern "C" uint32_t func_804A55A0_ra0_0_8_0(CpuContext*);
extern "C" void func_804A55E0(CpuContext* ctx);
extern "C" uint32_t func_804A55E0_ra8_0_10_0(CpuContext*, uint32_t);

extern "C" uint64_t func_804A55A0_statefree();
extern "C" uint64_t func_804A55E0_statefree(uint32_t);
extern "C" void func_804A55E0_statefree_v0(uint32_t);

extern "C" uint64_t func_804A5CC0_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
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
    uint32_t r4 = arg_r4;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_804A5CC0;

loc_804A5CC0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
}

loc_804A5CCC:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r4;
    r30 = r3;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804A5D24;
    }
}

loc_804A5CE4:
{
    r3 = MemoryInline::FlatRead32((r3 + 24));
    // inline leaf 0x804A55E0 (5 guest instruction(s))
    r4 = -872415232;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0 = (r0_rot_0 & 65535);
    MemoryInline::FlatWrite16((r4 + 20480), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r4 + 20482), static_cast<uint16_t>(r3));
    // end of inlined leaf 0x804A55E0
}

loc_804A5CEC:
{
    // inline leaf 0x804A55A0 (4 guest instruction(s))
    r3 = -872415232;
    r0 = MemoryInline::FlatRead16((r3 + 20480));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r3 = (r3_rot_2 & 1);
    // end of inlined leaf 0x804A55A0
}

loc_804A5CF4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804A5CEC;
    }
}

loc_804A5CF8:
{
    r3 = MemoryInline::FlatRead32((r30 + 28));
    // inline leaf 0x804A55E0 (5 guest instruction(s))
    r4 = -872415232;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0 = (r0_rot_1 & 65535);
    MemoryInline::FlatWrite16((r4 + 20480), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r4 + 20482), static_cast<uint16_t>(r3));
    // end of inlined leaf 0x804A55E0
}

loc_804A5D00:
{
    // inline leaf 0x804A55A0 (4 guest instruction(s))
    r3 = -872415232;
    r0 = MemoryInline::FlatRead16((r3 + 20480));
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r3 = (r3_rot_4 & 1);
    // end of inlined leaf 0x804A55A0
}

loc_804A5D08:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804A5D00;
    }
}

loc_804A5D0C:
{
    r3 = MemoryInline::FlatRead32((r30 + 32));
    // inline leaf 0x804A55E0 (5 guest instruction(s))
    r4 = -872415232;
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0 = (r0_rot_2 & 65535);
    MemoryInline::FlatWrite16((r4 + 20480), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r4 + 20482), static_cast<uint16_t>(r3));
    // end of inlined leaf 0x804A55E0
}

loc_804A5D14:
{
    // inline leaf 0x804A55A0 (4 guest instruction(s))
    r3 = -872415232;
    r0 = MemoryInline::FlatRead16((r3 + 20480));
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r3 = (r3_rot_6 & 1);
    // end of inlined leaf 0x804A55A0
}

loc_804A5D1C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804A5D14;
    }
}

loc_804A5D20:
{
    goto loc_804A5D60;
}

loc_804A5D24:
{
    r3 = 0;
    // inline leaf 0x804A55E0 (5 guest instruction(s))
    r4 = -872415232;
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0 = (r0_rot_3 & 65535);
    MemoryInline::FlatWrite16((r4 + 20480), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r4 + 20482), static_cast<uint16_t>(r3));
    // end of inlined leaf 0x804A55E0
}

loc_804A5D2C:
{
    // inline leaf 0x804A55A0 (4 guest instruction(s))
    r3 = -872415232;
    r0 = MemoryInline::FlatRead16((r3 + 20480));
    r3_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r3 = (r3_rot_8 & 1);
    // end of inlined leaf 0x804A55A0
}

loc_804A5D34:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804A5D2C;
    }
}

loc_804A5D38:
{
    r3 = 0;
    // inline leaf 0x804A55E0 (5 guest instruction(s))
    r4 = -872415232;
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0 = (r0_rot_4 & 65535);
    MemoryInline::FlatWrite16((r4 + 20480), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r4 + 20482), static_cast<uint16_t>(r3));
    // end of inlined leaf 0x804A55E0
}

loc_804A5D40:
{
    // inline leaf 0x804A55A0 (4 guest instruction(s))
    r3 = -872415232;
    r0 = MemoryInline::FlatRead16((r3 + 20480));
    r3_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r3 = (r3_rot_10 & 1);
    // end of inlined leaf 0x804A55A0
}

loc_804A5D48:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804A5D40;
    }
}

loc_804A5D4C:
{
    r3 = 0;
    // inline leaf 0x804A55E0 (5 guest instruction(s))
    r4 = -872415232;
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0 = (r0_rot_5 & 65535);
    MemoryInline::FlatWrite16((r4 + 20480), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r4 + 20482), static_cast<uint16_t>(r3));
    // end of inlined leaf 0x804A55E0
}

loc_804A5D54:
{
    // inline leaf 0x804A55A0 (4 guest instruction(s))
    r3 = -872415232;
    r0 = MemoryInline::FlatRead16((r3 + 20480));
    r3_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r3 = (r3_rot_12 & 1);
    // end of inlined leaf 0x804A55A0
}

loc_804A5D5C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804A5D54;
    }
}

loc_804A5D60:
{
    r3 = MemoryInline::FlatRead32((r31 + 12));
    // inline leaf 0x804A55E0 (5 guest instruction(s))
    r4 = -872415232;
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0 = (r0_rot_7 & 65535);
    MemoryInline::FlatWrite16((r4 + 20480), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r4 + 20482), static_cast<uint16_t>(r3));
    // end of inlined leaf 0x804A55E0
}

loc_804A5D68:
{
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x804A55A0u) && KnownTranslatedCpuCall<0x804A55A0u>::kAvailable && !KnownTranslatedCpuCall<0x804A55A0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x804A55A0u>()) {
        const auto state_free_result_804A55A0_1E3C = func_804A55A0_statefree();
        r3 = static_cast<uint32_t>(state_free_result_804A55A0_1E3C);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x804A55A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_804A5D70:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804A5D68;
    }
}

loc_804A5D74:
{
    r3 = MemoryInline::FlatRead32((r31 + 16));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x804A55E0u) && KnownTranslatedCpuCall<0x804A55E0u>::kAvailable && !KnownTranslatedCpuCall<0x804A55E0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x804A55E0u>()) {
        func_804A55E0_statefree_v0(r3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x804A55E0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_804A5D7C:
{
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x804A55A0u) && KnownTranslatedCpuCall<0x804A55A0u>::kAvailable && !KnownTranslatedCpuCall<0x804A55A0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x804A55A0u>()) {
        const auto state_free_result_804A55A0_23F8 = func_804A55A0_statefree();
        r3 = static_cast<uint32_t>(state_free_result_804A55A0_23F8);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x804A55A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_804A5D84:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804A5D7C;
    }
}

loc_804A5D88:
{
    r3 = MemoryInline::FlatRead32((r31 + 20));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x804A55E0u) && KnownTranslatedCpuCall<0x804A55E0u>::kAvailable && !KnownTranslatedCpuCall<0x804A55E0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x804A55E0u>()) {
        func_804A55E0_statefree_v0(r3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x804A55E0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_804A5D90:
{
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x804A55A0u) && KnownTranslatedCpuCall<0x804A55A0u>::kAvailable && !KnownTranslatedCpuCall<0x804A55A0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x804A55A0u>()) {
        const auto state_free_result_804A55A0_29B4 = func_804A55A0_statefree();
        r3 = static_cast<uint32_t>(state_free_result_804A55A0_29B4);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x804A55A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_804A5D98:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804A5D90;
    }
}

loc_804A5D9C:
{
    r0 = MemoryInline::FlatRead32(r31);
}

loc_804A5DA4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804A5DFC;
    }
}

loc_804A5DA8:
{
    r3 = MemoryInline::FlatRead16((r31 + 36));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x804A55E0u) && KnownTranslatedCpuCall<0x804A55E0u>::kAvailable && !KnownTranslatedCpuCall<0x804A55E0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x804A55E0u>()) {
        func_804A55E0_statefree_v0(r3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x804A55E0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_804A5DB0:
{
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x804A55A0u) && KnownTranslatedCpuCall<0x804A55A0u>::kAvailable && !KnownTranslatedCpuCall<0x804A55A0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x804A55A0u>()) {
        const auto state_free_result_804A55A0_302C = func_804A55A0_statefree();
        r3 = static_cast<uint32_t>(state_free_result_804A55A0_302C);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x804A55A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_804A5DB8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804A5DB0;
    }
}

loc_804A5DBC:
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
        InvokeDirectCpu<0x804A55E0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_804A5DC4:
{
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x804A55A0u) && KnownTranslatedCpuCall<0x804A55A0u>::kAvailable && !KnownTranslatedCpuCall<0x804A55A0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x804A55A0u>()) {
        const auto state_free_result_804A55A0_35C5 = func_804A55A0_statefree();
        r3 = static_cast<uint32_t>(state_free_result_804A55A0_35C5);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x804A55A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_804A5DCC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804A5DC4;
    }
}

loc_804A5DD0:
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
        InvokeDirectCpu<0x804A55E0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_804A5DD8:
{
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x804A55A0u) && KnownTranslatedCpuCall<0x804A55A0u>::kAvailable && !KnownTranslatedCpuCall<0x804A55A0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x804A55A0u>()) {
        const auto state_free_result_804A55A0_3B5E = func_804A55A0_statefree();
        r3 = static_cast<uint32_t>(state_free_result_804A55A0_3B5E);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x804A55A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_804A5DE0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804A5DD8;
    }
}

loc_804A5DE4:
{
    r3 = 0;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x804A55E0u) && KnownTranslatedCpuCall<0x804A55E0u>::kAvailable && !KnownTranslatedCpuCall<0x804A55E0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x804A55E0u>()) {
        const auto state_free_result_804A55E0_3EA6 = func_804A55E0_statefree(r3);
        r4 = static_cast<uint32_t>(state_free_result_804A55E0_3EA6);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x804A55E0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_804A5DEC:
{
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x804A55A0u) && KnownTranslatedCpuCall<0x804A55A0u>::kAvailable && !KnownTranslatedCpuCall<0x804A55A0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x804A55A0u>()) {
        const auto state_free_result_804A55A0_4167 = func_804A55A0_statefree();
        r3 = static_cast<uint32_t>(state_free_result_804A55A0_4167);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x804A55A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_804A5DF4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804A5DEC;
    }
}

loc_804A5DF8:
{
    goto loc_804A5E4C;
}

loc_804A5DFC:
{
    r3 = MemoryInline::FlatRead16((r31 + 38));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x804A55E0u) && KnownTranslatedCpuCall<0x804A55E0u>::kAvailable && !KnownTranslatedCpuCall<0x804A55E0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x804A55E0u>()) {
        func_804A55E0_statefree_v0(r3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x804A55E0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_804A5E04:
{
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x804A55A0u) && KnownTranslatedCpuCall<0x804A55A0u>::kAvailable && !KnownTranslatedCpuCall<0x804A55A0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x804A55A0u>()) {
        const auto state_free_result_804A55A0_4752 = func_804A55A0_statefree();
        r3 = static_cast<uint32_t>(state_free_result_804A55A0_4752);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x804A55A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_804A5E0C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804A5E04;
    }
}

loc_804A5E10:
{
    r3 = MemoryInline::FlatRead32((r31 + 24));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x804A55E0u) && KnownTranslatedCpuCall<0x804A55E0u>::kAvailable && !KnownTranslatedCpuCall<0x804A55E0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x804A55E0u>()) {
        func_804A55E0_statefree_v0(r3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x804A55E0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_804A5E18:
{
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x804A55A0u) && KnownTranslatedCpuCall<0x804A55A0u>::kAvailable && !KnownTranslatedCpuCall<0x804A55A0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x804A55A0u>()) {
        const auto state_free_result_804A55A0_4D0E = func_804A55A0_statefree();
        r3 = static_cast<uint32_t>(state_free_result_804A55A0_4D0E);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x804A55A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_804A5E20:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804A5E18;
    }
}

loc_804A5E24:
{
    r3 = MemoryInline::FlatRead32((r31 + 28));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x804A55E0u) && KnownTranslatedCpuCall<0x804A55E0u>::kAvailable && !KnownTranslatedCpuCall<0x804A55E0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x804A55E0u>()) {
        func_804A55E0_statefree_v0(r3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x804A55E0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_804A5E2C:
{
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x804A55A0u) && KnownTranslatedCpuCall<0x804A55A0u>::kAvailable && !KnownTranslatedCpuCall<0x804A55A0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x804A55A0u>()) {
        const auto state_free_result_804A55A0_52CA = func_804A55A0_statefree();
        r3 = static_cast<uint32_t>(state_free_result_804A55A0_52CA);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x804A55A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_804A5E34:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804A5E2C;
    }
}

loc_804A5E38:
{
    r3 = MemoryInline::FlatRead32((r31 + 32));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x804A55E0u) && KnownTranslatedCpuCall<0x804A55E0u>::kAvailable && !KnownTranslatedCpuCall<0x804A55E0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x804A55E0u>()) {
        const auto state_free_result_804A55E0_5635 = func_804A55E0_statefree(r3);
        r4 = static_cast<uint32_t>(state_free_result_804A55E0_5635);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x804A55E0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_804A5E40:
{
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x804A55A0u) && KnownTranslatedCpuCall<0x804A55A0u>::kAvailable && !KnownTranslatedCpuCall<0x804A55A0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x804A55A0u>()) {
        const auto state_free_result_804A55A0_58F6 = func_804A55A0_statefree();
        r3 = static_cast<uint32_t>(state_free_result_804A55A0_58F6);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x804A55A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_804A5E48:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804A5E40;
    }
}

loc_804A5E4C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804A5CC0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804A5CC0_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804A5CC0 func_804A5CC0 preserves=true fpr_mask=0x00000000
