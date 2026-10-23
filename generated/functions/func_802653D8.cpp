#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802642D8(CpuContext* ctx);
extern "C" uint64_t func_802642D8_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80272B14(CpuContext* ctx);
extern "C" uint64_t func_80272B14_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80275B28(CpuContext* ctx);
extern "C" uint64_t func_80275B28_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" void func_802653D8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_addze_src_0 = 0;
    uint32_t r0_addze_src_1 = 0;
    uint32_t r0_addze_src_2 = 0;
    uint32_t r0_addze_src_3 = 0;
    uint32_t r0_addze_src_4 = 0;
    uint32_t r0_ca_0 = 0;
    uint32_t r0_ca_1 = 0;
    uint32_t r0_ca_2 = 0;
    uint32_t r0_ca_3 = 0;
    uint32_t r0_ca_4 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_subfc_sub_0 = 0;
    uint32_t r0_subfc_sub_1 = 0;
    uint32_t r0_subfc_sub_2 = 0;
    uint32_t r0_subfc_sub_3 = 0;
    uint32_t r3_adde_right_0 = 0;
    uint32_t r3_adde_right_1 = 0;
    uint32_t r3_adde_right_2 = 0;
    uint32_t r3_adde_right_3 = 0;
    uint32_t r3_ca_0 = 0;
    uint32_t r3_ca_1 = 0;
    uint32_t r3_ca_2 = 0;
    uint32_t r3_ca_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    uint32_t xer = ctx->xer;

    goto loc_802653D8;

loc_802653D8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r31 = r3;
    r0 = MemoryInline::FlatRead16((r3 + 880));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_802653F8:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_80265404;
    }
}

loc_802653FC:
{
    r3 = 0;
    goto loc_80265738;
}

loc_80265404:
{
    r27 = 0;
    r28 = r31;
    r30 = 3600;
    r29 = 1800;
}

loc_80265414:
{
    r0 = MemoryInline::FlatRead16((r28 + 1060));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8026541C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80265440;
    }
}

loc_80265420:
{
    r3 = r31;
    r4 = 46;
    if constexpr (KnownRegArgsCpuCall<0x80272B14u>(&func_80272B14)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->xer = xer;
        const auto regargs_result_80272B14_EA5 = func_80272B14_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80272B14_EA5);
        r4 = static_cast<uint32_t>(regargs_result_80272B14_EA5 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->xer = xer;
        InvokeDirectCpu<0x80272B14u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_80265430:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8026543C;
    }
}

loc_80265434:
{
    MemoryInline::FlatWrite16((r28 + 1070), static_cast<uint16_t>(r29));
    goto loc_80265440;
}

loc_8026543C:
{
    MemoryInline::FlatWrite16((r28 + 1070), static_cast<uint16_t>(r30));
}

loc_80265440:
{
    r28 = (r28 + 2);
    r27 = (r27 + 1);
}

loc_8026544C:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(5))) {
        goto loc_80265414;
    }
}

loc_80265450:
{
    r0 = MemoryInline::FlatRead16((r31 + 1056));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80265458:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80265484;
    }
}

loc_8026545C:
{
    r3 = r31;
    r4 = 46;
    if constexpr (KnownRegArgsCpuCall<0x80272B14u>(&func_80272B14)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->xer = xer;
        const auto regargs_result_80272B14_14A3 = func_80272B14_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80272B14_14A3);
        r4 = static_cast<uint32_t>(regargs_result_80272B14_14A3 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->xer = xer;
        InvokeDirectCpu<0x80272B14u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_8026546C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8026547C;
    }
}

loc_80265470:
{
    r0 = 2700;
    MemoryInline::FlatWrite16((r31 + 1058), static_cast<uint16_t>(r0));
    goto loc_80265484;
}

loc_8026547C:
{
    r0 = 5400;
    MemoryInline::FlatWrite16((r31 + 1058), static_cast<uint16_t>(r0));
}

loc_80265484:
{
    r0 = MemoryInline::FlatRead16((r31 + 1022));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8026548C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_802655C4;
    }
}

loc_80265490:
{
    r3 = r31;
    r4 = 8;
    ctx->lr = 0x8026549Cu;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_802654A0:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_802654D4;
    }
}

loc_802654A4:
{
    r3 = r31;
    r4 = 6;
    r5 = 27;
    // inline leaf 0x8026FECC (12 guest instruction(s))
}

loc_inl1_0x8026FECC:
{
    r6 = MemoryInline::FlatRead8((r3 + 10));
    r0 = (r4 & 255);
}

loc_inl1_0x8026FED8:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl1_0x8026FEF4;
    }
}

loc_inl1_0x8026FEDC:
{
    r3 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r5 & 65535);
}

loc_inl1_0x8026FEE8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl1_0x8026FEF4;
    }
}

loc_inl1_0x8026FEEC:
{
    r3 = 1;
    goto loc_inl1_cont_8026FECC;
}

loc_inl1_0x8026FEF4:
{
    r3 = 0;
}

loc_inl1_cont_8026FECC:
{
    // end of inlined leaf 0x8026FECC
}

loc_802654B8:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_802654D4;
    }
}

loc_802654BC:
{
    r3 = r31;
    r4 = 6;
    r5 = 35;
    // inline leaf 0x8026FECC (12 guest instruction(s))
}

loc_inl2_0x8026FECC:
{
    r6 = MemoryInline::FlatRead8((r3 + 10));
    r0 = (r4 & 255);
}

loc_inl2_0x8026FED8:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl2_0x8026FEF4;
    }
}

loc_inl2_0x8026FEDC:
{
    r3 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r5 & 65535);
}

loc_inl2_0x8026FEE8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl2_0x8026FEF4;
    }
}

loc_inl2_0x8026FEEC:
{
    r3 = 1;
    goto loc_inl2_cont_8026FECC;
}

loc_inl2_0x8026FEF4:
{
    r3 = 0;
}

loc_inl2_cont_8026FECC:
{
    // end of inlined leaf 0x8026FECC
}

loc_802654D0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802654E8;
    }
}

loc_802654D4:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r31 + 1022), static_cast<uint16_t>(r0));
    r3 = r31;
    // inline leaf 0x80257ED4 (6 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 1024), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r3 + 1020), static_cast<uint16_t>(r0));
    r0 = 30;
    MemoryInline::FlatWrite16((r3 + 1026), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x80257ED4
    goto loc_802655C4;
}

loc_802654E8:
{
    r28 = MemoryInline::FlatRead16((r31 + 1022));
    r28 = (r28 << 16);
    r28 = (static_cast<int32_t>(r28) >> 16);
    r3 = r31;
    r4 = 32;
    // inline leaf 0x80279130 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 988));
    r3 = (r0 & r4);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x80279130
}

loc_802654FC:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_80265514;
    }
}

loc_80265500:
{
    r3 = r31;
    r4 = 16;
    // inline leaf 0x80279130 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 988));
    r3 = (r0 & r4);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    // end of inlined leaf 0x80279130
}

loc_80265510:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8026554C;
    }
}

loc_80265514:
{
    r3 = r31;
    r4 = 32;
    // inline leaf 0x80279148 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 992));
    r3 = (r0 & r4);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_4 & 1);
    // end of inlined leaf 0x80279148
}

loc_80265524:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_8026553C;
    }
}

loc_80265528:
{
    r3 = r31;
    r4 = 16;
    // inline leaf 0x80279148 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 992));
    r3 = (r0 & r4);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_5 & 1);
    // end of inlined leaf 0x80279148
}

loc_80265538:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8026554C;
    }
}

loc_8026553C:
{
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r28);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(2) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r28) >> 2);
    r0_addze_src_1 = r0;
    r0_ca_1 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_1 + r0_ca_1);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r28 = (r28 + r0);
}

loc_8026554C:
{
    r0 = MemoryInline::FlatRead16((r31 + 1020));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 + r28);
    MemoryInline::FlatWrite16((r31 + 1020), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r31 + 9));
}

loc_80265560:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_80265570;
    }
}

loc_80265564:
{
    r0 = 300;
    MemoryInline::FlatWrite16((r31 + 1024), static_cast<uint16_t>(r0));
    goto loc_80265578;
}

loc_80265570:
{
    r0 = 150;
    MemoryInline::FlatWrite16((r31 + 1024), static_cast<uint16_t>(r0));
}

loc_80265578:
{
    r3 = r31;
    // inline leaf 0x80264F08 (7 guest instruction(s))
    r5 = MemoryInline::FlatRead16((r3 + 1020));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r0 = 50;
    r4 = (static_cast<int32_t>(r5) >> 31);
    r3 = 0;
    r0_subfc_sub_1 = r0;
    r0 = (r5 - r0_subfc_sub_1);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r0_subfc_sub_1) ? 1u : 0u) << 29);
    r3_adde_right_1 = r3;
    r3_ca_1 = (xer >> 29) & 1u;
    r3 = (r4 + r3_adde_right_1);
    r3 = (r3 + r3_ca_1);
    // end of inlined leaf 0x80264F08
}

loc_80265584:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802655C4;
    }
}

loc_80265588:
{
    r3 = r31;
    r4 = 7;
    ctx->lr = 0x80265594u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80265598:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802655C4;
    }
}

loc_8026559C:
{
    r3 = 1;
    // inline leaf 0x800CEF20 (23 guest instruction(s))
}

loc_inl9_0x800CEF20:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r6 = (r4 + r0);
    r0 = MemoryInline::FlatRead16((r6 + 24));
}

loc_inl9_0x800CEF38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl9_0x800CEF40;
    }
}

loc_inl9_0x800CEF3C:
{
    r0 = 1;
}

loc_inl9_0x800CEF40:
{
    r5 = (r0 * 176);
    r3 = 11337728;
    r0 = (r3 + 30009);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r5)) >> 32));
    r0 = (r5 - r3);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_2 & 2147483647);
    r0 = (r0 + r3);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_1 & 131071);
    r3 = 65536;
    r0 = (r3 + -173);
    r0 = (r4 * r0);
    r0 = (r5 - r0);
    r3 = (r0 & 65535);
    MemoryInline::FlatWriteRam16((r6 + 24), static_cast<uint16_t>(r3));
}

loc_inl9_cont_800CEF20:
{
    // end of inlined leaf 0x800CEF20
    r0 = (r3 & 65535);
    r0 = (r0 & 1);
}

loc_802655B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802655C4;
    }
}

loc_802655B4:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r31 + 1022), static_cast<uint16_t>(r0));
    r3 = r31;
    // inline leaf 0x80257ED4 (6 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 1024), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r3 + 1020), static_cast<uint16_t>(r0));
    r0 = 30;
    MemoryInline::FlatWrite16((r3 + 1026), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x80257ED4
}

loc_802655C4:
{
    r0 = MemoryInline::FlatRead16((r31 + 1004));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_802655CC:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_802655F8;
    }
}

loc_802655D0:
{
    r3 = r31;
    r4 = 1;
    ctx->lr = 0x802655DCu;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_802655E0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802655F8;
    }
}

loc_802655E4:
{
    r3 = r31;
    r4 = MemoryInline::FlatRead16((r31 + 1004));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    ctx->lr = 0x802655F0u;
    if constexpr (KnownRegArgsCpuCall<0x802642D8u>(&func_802642D8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->xer = xer;
        const auto regargs_result_802642D8_40D4 = func_802642D8_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802642D8_40D4);
        r4 = static_cast<uint32_t>(regargs_result_802642D8_40D4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->xer = xer;
        InvokeDirectCpu<0x802642D8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = 30;
    MemoryInline::FlatWrite16((r31 + 1006), static_cast<uint16_t>(r0));
}

loc_802655F8:
{
    r0 = MemoryInline::FlatRead16((r31 + 1038));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80265600:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_8026560C;
    }
}

loc_80265604:
{
    r0 = 5400;
    MemoryInline::FlatWrite16((r31 + 1040), static_cast<uint16_t>(r0));
}

loc_8026560C:
{
    r28 = MemoryInline::FlatRead16((r31 + 1010));
    r28 = (r28 << 16);
    r28 = (static_cast<int32_t>(r28) >> 16);
}

loc_80265614:
{
    if ((static_cast<int32_t>(r28) <= static_cast<int32_t>(0))) {
        goto loc_802656B8;
    }
}

loc_80265618:
{
    r0 = MemoryInline::FlatRead8((r31 + 9));
}

loc_80265620:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(3))) {
        goto loc_802656B8;
    }
}

loc_80265624:
{
    r3 = r31;
    r4 = 5;
    ctx->lr = 0x80265630u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80265634:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802656B8;
    }
}

loc_80265638:
{
    r0 = MemoryInline::FlatRead16((r31 + 1008));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 + r28);
    MemoryInline::FlatWrite16((r31 + 1008), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r31 + 1012));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 + r28);
    MemoryInline::FlatWrite16((r31 + 1012), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r31 + 10));
}

loc_80265658:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(6))) {
        goto loc_80265670;
    }
}

loc_8026565C:
{
    r0 = MemoryInline::FlatRead16((r31 + 12));
}

loc_80265664:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(28))) {
        goto loc_80265670;
    }
}

loc_80265668:
{
}

loc_8026566C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(29))) {
        goto loc_802656B0;
    }
}

loc_80265670:
{
    r3 = r31;
    // inline leaf 0x80257ED4 (6 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 1024), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r3 + 1020), static_cast<uint16_t>(r0));
    r0 = 30;
    MemoryInline::FlatWrite16((r3 + 1026), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x80257ED4
    r0 = MemoryInline::FlatRead16((r31 + 1012));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80265680:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(200))) {
        goto loc_8026569C;
    }
}

loc_80265684:
{
    r3 = r31;
    r4 = 6;
    r5 = 28;
    r6 = 0;
    ctx->lr = 0x80265698u;
    if constexpr (KnownRegArgsCpuCall<0x80275B28u>(&func_80275B28)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->xer = xer;
        const auto regargs_result_80275B28_4F87 = func_80275B28_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80275B28_4F87);
        r4 = static_cast<uint32_t>(regargs_result_80275B28_4F87 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->xer = xer;
        InvokeDirectCpu<0x80275B28u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        xer = ctx->xer;
    }
    goto loc_802656B0;
}

loc_8026569C:
{
    r3 = r31;
    r4 = 6;
    r5 = 29;
    r6 = 0;
    ctx->lr = 0x802656B0u;
    if constexpr (KnownRegArgsCpuCall<0x80275B28u>(&func_80275B28)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->xer = xer;
        const auto regargs_result_80275B28_5637 = func_80275B28_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80275B28_5637);
        r4 = static_cast<uint32_t>(regargs_result_80275B28_5637 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->xer = xer;
        InvokeDirectCpu<0x80275B28u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        xer = ctx->xer;
    }
}

loc_802656B0:
{
    r3 = 1;
    goto loc_80265738;
}

loc_802656B8:
{
    r28 = MemoryInline::FlatRead16((r31 + 1016));
    r28 = (r28 << 16);
    r28 = (static_cast<int32_t>(r28) >> 16);
}

loc_802656C0:
{
    if ((static_cast<int32_t>(r28) <= static_cast<int32_t>(0))) {
        goto loc_80265734;
    }
}

loc_802656C4:
{
    r3 = r31;
    r4 = 3;
    ctx->lr = 0x802656D0u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_802656D4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80265734;
    }
}

loc_802656D8:
{
    r0 = MemoryInline::FlatRead16((r31 + 1014));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 + r28);
    MemoryInline::FlatWrite16((r31 + 1014), static_cast<uint16_t>(r0));
    r3 = r31;
    // inline leaf 0x802653AC (11 guest instruction(s))
}

loc_inl12_0x802653AC:
{
    r0 = MemoryInline::FlatRead8((r3 + 10));
}

loc_inl12_0x802653B4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(6))) {
        goto loc_inl12_0x802653D0;
    }
}

loc_inl12_0x802653B8:
{
    r3 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r3 + -31);
}

loc_inl12_0x802653C4:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(3))) {
        goto loc_inl12_0x802653D0;
    }
}

loc_inl12_0x802653C8:
{
    r3 = 1;
    goto loc_inl12_cont_802653AC;
}

loc_inl12_0x802653D0:
{
    r3 = 0;
}

loc_inl12_cont_802653AC:
{
    // end of inlined leaf 0x802653AC
}

loc_802656F0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80265734;
    }
}

loc_802656F4:
{
    r0 = MemoryInline::FlatRead8((r31 + 9));
}

loc_802656FC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_80265718;
    }
}

loc_80265700:
{
    r3 = r31;
    r4 = 6;
    r5 = 33;
    r6 = 12;
    ctx->lr = 0x80265714u;
    if constexpr (KnownRegArgsCpuCall<0x80275B28u>(&func_80275B28)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->xer = xer;
        const auto regargs_result_80275B28_647E = func_80275B28_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80275B28_647E);
        r4 = static_cast<uint32_t>(regargs_result_80275B28_647E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->xer = xer;
        InvokeDirectCpu<0x80275B28u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        xer = ctx->xer;
    }
    goto loc_8026572C;
}

loc_80265718:
{
    r3 = r31;
    r4 = 6;
    r5 = 31;
    r6 = 12;
    ctx->lr = 0x8026572Cu;
    if constexpr (KnownRegArgsCpuCall<0x80275B28u>(&func_80275B28)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->xer = xer;
        const auto regargs_result_80275B28_6B2F = func_80275B28_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80275B28_6B2F);
        r4 = static_cast<uint32_t>(regargs_result_80275B28_6B2F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->xer = xer;
        InvokeDirectCpu<0x80275B28u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        xer = ctx->xer;
    }
}

loc_8026572C:
{
    r3 = 1;
    goto loc_80265738;
}

loc_80265734:
{
    r3 = 0;
}

loc_80265738:
{
    r11 = (r1 + 32);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802653D8 func_802653D8 preserves=true fpr_mask=0x00000000
