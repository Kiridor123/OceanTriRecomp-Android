#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004A270(CpuContext* ctx);
extern "C" void func_8004A270_ra18_0_0_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8004CBD8(CpuContext* ctx);
extern "C" uint32_t func_8004CBD8_ra28_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8004CDD4(CpuContext* ctx);
extern "C" uint64_t func_8004CDD4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8027F018(CpuContext* ctx);
extern "C" uint32_t func_8027F018_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_8004A270_statefree(uint32_t, uint32_t);
extern "C" uint64_t func_8027F018_statefree(uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_8027F018_statefree_v0(uint32_t, uint32_t);

extern "C" uint64_t func_8004CE08_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_10 = 0;
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
    uint32_t r5 = arg_r5;
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x8004CE08u);
    goto loc_8004CE08;

loc_8004CE08:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = r3;
    r3 = (r3 + 32);
    r4 = 0;
    r5 = 12;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r31 + 44);
    r4 = 0;
    r5 = 24;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead16((r31 + 140));
    r0 = (r0 * 12);
    r3 = (r31 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 3584));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8027F018u) && KnownTranslatedCpuCall<0x8027F018u>::kAvailable && !KnownTranslatedCpuCall<0x8027F018u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8027F018u>()) {
        const auto state_free_result_8027F018_A19 = func_8027F018_statefree_v0(r3, xer);
        r3 = static_cast<uint32_t>(state_free_result_8027F018_A19);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8027F018u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        xer = ctx->xer;
    }
    r0 = (r3 & 255);
}

loc_8004CE64:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8004CE84;
    }
}

loc_8004CE68:
{
    r3 = (r31 + 32);
    r0 = MemoryInline::FlatRead16((r31 + 140));
    r0 = (r0 * 12);
    r4 = (r31 + r0);
    r4 = (r4 + 3584);
    // inline leaf 0x8004A270 (13 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 4));
    MemoryInline::FlatWrite16((r3 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r4 + 6));
    MemoryInline::FlatWrite32((r3 + 6), r0);
    r0 = MemoryInline::FlatRead16((r4 + 10));
    MemoryInline::FlatWrite16((r3 + 10), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8004A270
    goto loc_8004CE94;
}

loc_8004CE84:
{
    r0 = 8;
    MemoryInline::FlatWrite8((r31 + 32), static_cast<uint8_t>(r0));
    r0 = 1;
    MemoryInline::FlatWrite16((r31 + 34), static_cast<uint16_t>(r0));
}

loc_8004CE94:
{
    r0 = MemoryInline::FlatRead8((r31 + 32));
}

loc_8004CE9C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(11))) {
        goto loc_8004CED0;
    }
}

loc_8004CEA0:
{
    r3 = (r31 + 32);
    // inline leaf 0x8027F128 (12 guest instruction(s))
}

loc_inl1_0x8027F128:
{
    r0 = MemoryInline::FlatRead8(r3);
}

loc_inl1_0x8027F130:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(11))) {
        goto loc_inl1_0x8027F13C;
    }
}

loc_inl1_0x8027F134:
{
    r3 = 0;
    goto loc_inl1_cont_8027F128;
}

loc_inl1_0x8027F13C:
{
    r3 = MemoryInline::FlatRead16((r3 + 2));
    r3 = (r3 + -17);
    r0 = (r3 ^ 2);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
}

loc_inl1_cont_8027F128:
{
    // end of inlined leaf 0x8027F128
}

loc_8004CEAC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8004CED0;
    }
}

loc_8004CEB0:
{
    r0 = 12;
    MemoryInline::FlatWrite8((r31 + 44), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead16((r31 + 34));
    MemoryInline::FlatWrite16((r31 + 46), static_cast<uint16_t>(r3));
    r0 = 13;
    MemoryInline::FlatWrite8((r31 + 56), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite16((r31 + 58), static_cast<uint16_t>(r3));
    goto loc_8004CF30;
}

loc_8004CED0:
{
    r28 = 0;
    r30 = r31;
    r29 = (r31 + 44);
}

loc_8004CEDC:
{
    r0 = MemoryInline::FlatRead16((r30 + 142));
}

loc_8004CEE4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_8004CF1C;
    }
}

loc_8004CEE8:
{
    r0 = (r0 * 12);
    r3 = (r31 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 3584));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8027F018u) && KnownTranslatedCpuCall<0x8027F018u>::kAvailable && !KnownTranslatedCpuCall<0x8027F018u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8027F018u>()) {
        const auto state_free_result_8027F018_1900 = func_8027F018_statefree_v0(r3, xer);
        r3 = static_cast<uint32_t>(state_free_result_8027F018_1900);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8027F018u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        xer = ctx->xer;
    }
    r0 = (r3 & 255);
}

loc_8004CF00:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_8004CF1C;
    }
}

loc_8004CF04:
{
    r3 = r29;
    r0 = MemoryInline::FlatRead16((r30 + 142));
    r0 = (r0 * 12);
    r4 = (r31 + r0);
    r4 = (r4 + 3584);
    // inline leaf 0x8004A270 (13 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 4));
    MemoryInline::FlatWrite16((r3 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r4 + 6));
    MemoryInline::FlatWrite32((r3 + 6), r0);
    r0 = MemoryInline::FlatRead16((r4 + 10));
    MemoryInline::FlatWrite16((r3 + 10), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8004A270
}

loc_8004CF1C:
{
    r30 = (r30 + 2);
    r29 = (r29 + 12);
    r28 = (r28 + 1);
}

loc_8004CF2C:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(2))) {
        goto loc_8004CEDC;
    }
}

loc_8004CF30:
{
    r3 = r31;
    ctx->lr = 0x8004CF38u;
    if constexpr (KnownRegArgsCpuCall<0x8004CBD8u>(&func_8004CBD8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_8004CBD8_208A = func_8004CBD8_ra28_0_8_0(ctx, r3, r5);
        r3 = regargs_result_8004CBD8_208A;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8004CBD8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = r31;
    r4 = MemoryInline::FlatRead16((r31 + 152));
    r5 = 4;
    // inline leaf 0x8004CDD4 (13 guest instruction(s))
}

loc_inl3_0x8004CDD4:
{
    r0 = (r4 & 65535);
}

loc_inl3_0x8004CDDC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_inl3_0x8004CDE8;
    }
}

loc_inl3_0x8004CDE0:
{
    r3 = 0;
    goto loc_inl3_cont_8004CDD4;
}

loc_inl3_0x8004CDE8:
{
    r4 = (r5 & 255);
    r0 = (r0 * 12);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 3584));
    r0 = (r0 - r4);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_5 & 134217727);
}

loc_inl3_cont_8004CDD4:
{
    // end of inlined leaf 0x8004CDD4
}

loc_8004CF4C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8004CF6C;
    }
}

loc_8004CF50:
{
    r3 = (r31 + 104);
    r0 = MemoryInline::FlatRead16((r31 + 152));
    r0 = (r0 * 12);
    r4 = (r31 + r0);
    r4 = (r4 + 3584);
    // inline leaf 0x8004A270 (13 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 4));
    MemoryInline::FlatWrite16((r3 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r4 + 6));
    MemoryInline::FlatWrite32((r3 + 6), r0);
    r0 = MemoryInline::FlatRead16((r4 + 10));
    MemoryInline::FlatWrite16((r3 + 10), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8004A270
    goto loc_8004CF84;
}

loc_8004CF6C:
{
    r3 = (r31 + 104);
    r4 = 0;
    r5 = 12;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r0 = 4;
    MemoryInline::FlatWrite8((r31 + 104), static_cast<uint8_t>(r0));
}

loc_8004CF84:
{
    r3 = r31;
    r4 = MemoryInline::FlatRead16((r31 + 154));
    r5 = 5;
    // inline leaf 0x8004CDD4 (13 guest instruction(s))
}

loc_inl5_0x8004CDD4:
{
    r0 = (r4 & 65535);
}

loc_inl5_0x8004CDDC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_inl5_0x8004CDE8;
    }
}

loc_inl5_0x8004CDE0:
{
    r3 = 0;
    goto loc_inl5_cont_8004CDD4;
}

loc_inl5_0x8004CDE8:
{
    r4 = (r5 & 255);
    r0 = (r0 * 12);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 3584));
    r0 = (r0 - r4);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_7 & 134217727);
}

loc_inl5_cont_8004CDD4:
{
    // end of inlined leaf 0x8004CDD4
}

loc_8004CF98:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8004CFB8;
    }
}

loc_8004CF9C:
{
    r3 = (r31 + 116);
    r0 = MemoryInline::FlatRead16((r31 + 154));
    r0 = (r0 * 12);
    r4 = (r31 + r0);
    r4 = (r4 + 3584);
    // inline leaf 0x8004A270 (13 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 4));
    MemoryInline::FlatWrite16((r3 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r4 + 6));
    MemoryInline::FlatWrite32((r3 + 6), r0);
    r0 = MemoryInline::FlatRead16((r4 + 10));
    MemoryInline::FlatWrite16((r3 + 10), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8004A270
    goto loc_8004CFD0;
}

loc_8004CFB8:
{
    r3 = (r31 + 116);
    r4 = 0;
    r5 = 12;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r0 = 5;
    MemoryInline::FlatWrite8((r31 + 116), static_cast<uint8_t>(r0));
}

loc_8004CFD0:
{
    r3 = r31;
    r4 = MemoryInline::FlatRead16((r31 + 146));
    r5 = 1;
    // inline leaf 0x8004CDD4 (13 guest instruction(s))
}

loc_inl7_0x8004CDD4:
{
    r0 = (r4 & 65535);
}

loc_inl7_0x8004CDDC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_inl7_0x8004CDE8;
    }
}

loc_inl7_0x8004CDE0:
{
    r3 = 0;
    goto loc_inl7_cont_8004CDD4;
}

loc_inl7_0x8004CDE8:
{
    r4 = (r5 & 255);
    r0 = (r0 * 12);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 3584));
    r0 = (r0 - r4);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_9 & 134217727);
}

loc_inl7_cont_8004CDD4:
{
    // end of inlined leaf 0x8004CDD4
}

loc_8004CFE4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8004D004;
    }
}

loc_8004CFE8:
{
    r3 = (r31 + 68);
    r0 = MemoryInline::FlatRead16((r31 + 146));
    r0 = (r0 * 12);
    r4 = (r31 + r0);
    r4 = (r4 + 3584);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8004A270u) && KnownTranslatedCpuCall<0x8004A270u>::kAvailable && !KnownTranslatedCpuCall<0x8004A270u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8004A270u>()) {
        const auto state_free_result_8004A270_385F = func_8004A270_statefree(r3, r4);
        r0 = static_cast<uint32_t>(state_free_result_8004A270_385F);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8004A270u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        xer = ctx->xer;
    }
    goto loc_8004D01C;
}

loc_8004D004:
{
    r3 = (r31 + 68);
    r4 = 0;
    r5 = 12;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 68), static_cast<uint8_t>(r0));
}

loc_8004D01C:
{
    r3 = r31;
    r4 = MemoryInline::FlatRead16((r31 + 148));
    r5 = 2;
    if constexpr (KnownRegArgsCpuCall<0x8004CDD4u>(&func_8004CDD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8004CDD4_3C68 = func_8004CDD4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004CDD4_3C68);
        r4 = static_cast<uint32_t>(regargs_result_8004CDD4_3C68 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8004CDD4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_8004D030:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8004D050;
    }
}

loc_8004D034:
{
    r3 = (r31 + 80);
    r0 = MemoryInline::FlatRead16((r31 + 148));
    r0 = (r0 * 12);
    r4 = (r31 + r0);
    r4 = (r4 + 3584);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8004A270u) && KnownTranslatedCpuCall<0x8004A270u>::kAvailable && !KnownTranslatedCpuCall<0x8004A270u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8004A270u>()) {
        const auto state_free_result_8004A270_407C = func_8004A270_statefree(r3, r4);
        r0 = static_cast<uint32_t>(state_free_result_8004A270_407C);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8004A270u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        xer = ctx->xer;
    }
    goto loc_8004D068;
}

loc_8004D050:
{
    r3 = (r31 + 80);
    r4 = 0;
    r5 = 12;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r0 = 2;
    MemoryInline::FlatWrite8((r31 + 80), static_cast<uint8_t>(r0));
}

loc_8004D068:
{
    r3 = r31;
    r4 = MemoryInline::FlatRead16((r31 + 150));
    r5 = 3;
    if constexpr (KnownRegArgsCpuCall<0x8004CDD4u>(&func_8004CDD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8004CDD4_4485 = func_8004CDD4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004CDD4_4485);
        r4 = static_cast<uint32_t>(regargs_result_8004CDD4_4485 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8004CDD4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_8004D07C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8004D09C;
    }
}

loc_8004D080:
{
    r3 = (r31 + 92);
    r0 = MemoryInline::FlatRead16((r31 + 150));
    r0 = (r0 * 12);
    r4 = (r31 + r0);
    r4 = (r4 + 3584);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8004A270u) && KnownTranslatedCpuCall<0x8004A270u>::kAvailable && !KnownTranslatedCpuCall<0x8004A270u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8004A270u>()) {
        const auto state_free_result_8004A270_4899 = func_8004A270_statefree(r3, r4);
        r0 = static_cast<uint32_t>(state_free_result_8004A270_4899);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8004A270u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        xer = ctx->xer;
    }
    goto loc_8004D0B4;
}

loc_8004D09C:
{
    r3 = (r31 + 92);
    r4 = 0;
    r5 = 12;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r0 = 3;
    MemoryInline::FlatWrite8((r31 + 92), static_cast<uint8_t>(r0));
}

loc_8004D0B4:
{
    r3 = r31;
    r4 = MemoryInline::FlatRead16((r31 + 156));
    r5 = 6;
    if constexpr (KnownRegArgsCpuCall<0x8004CDD4u>(&func_8004CDD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8004CDD4_4CA2 = func_8004CDD4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004CDD4_4CA2);
        r4 = static_cast<uint32_t>(regargs_result_8004CDD4_4CA2 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8004CDD4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_8004D0C8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8004D0E8;
    }
}

loc_8004D0CC:
{
    r3 = (r31 + 128);
    r0 = MemoryInline::FlatRead16((r31 + 156));
    r0 = (r0 * 12);
    r4 = (r31 + r0);
    r4 = (r4 + 3584);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8004A270u) && KnownTranslatedCpuCall<0x8004A270u>::kAvailable && !KnownTranslatedCpuCall<0x8004A270u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8004A270u>()) {
        const auto state_free_result_8004A270_50B7 = func_8004A270_statefree(r3, r4);
        r0 = static_cast<uint32_t>(state_free_result_8004A270_50B7);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8004A270u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        xer = ctx->xer;
    }
    goto loc_8004D100;
}

loc_8004D0E8:
{
    r3 = (r31 + 128);
    r4 = 0;
    r5 = 12;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r0 = 6;
    MemoryInline::FlatWrite8((r31 + 128), static_cast<uint8_t>(r0));
}

loc_8004D100:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8004CE08(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8004CE08_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8004CE08 func_8004CE08 preserves=true fpr_mask=0x00000000
