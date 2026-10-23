#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802FB928(CpuContext* ctx);
extern "C" uint32_t func_802FB928_ra0_0_8_0(CpuContext*);
extern "C" void func_802FB964(CpuContext* ctx);
extern "C" uint32_t func_802FB964_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_803AAFEC(CpuContext* ctx);
extern "C" uint64_t func_803AAFEC_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_803AB044(CpuContext* ctx);
extern "C" uint32_t func_803AB044_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_802B32D4_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_10 = 0;
    uint32_t r3_addr_100 = 0;
    uint32_t r3_addr_101 = 0;
    uint32_t r3_addr_102 = 0;
    uint32_t r3_addr_103 = 0;
    uint32_t r3_addr_104 = 0;
    uint32_t r3_addr_105 = 0;
    uint32_t r3_addr_106 = 0;
    uint32_t r3_addr_107 = 0;
    uint32_t r3_addr_108 = 0;
    uint32_t r3_addr_109 = 0;
    uint32_t r3_addr_11 = 0;
    uint32_t r3_addr_110 = 0;
    uint32_t r3_addr_111 = 0;
    uint32_t r3_addr_112 = 0;
    uint32_t r3_addr_113 = 0;
    uint32_t r3_addr_114 = 0;
    uint32_t r3_addr_115 = 0;
    uint32_t r3_addr_116 = 0;
    uint32_t r3_addr_117 = 0;
    uint32_t r3_addr_118 = 0;
    uint32_t r3_addr_119 = 0;
    uint32_t r3_addr_12 = 0;
    uint32_t r3_addr_120 = 0;
    uint32_t r3_addr_121 = 0;
    uint32_t r3_addr_122 = 0;
    uint32_t r3_addr_123 = 0;
    uint32_t r3_addr_124 = 0;
    uint32_t r3_addr_125 = 0;
    uint32_t r3_addr_126 = 0;
    uint32_t r3_addr_127 = 0;
    uint32_t r3_addr_128 = 0;
    uint32_t r3_addr_129 = 0;
    uint32_t r3_addr_13 = 0;
    uint32_t r3_addr_14 = 0;
    uint32_t r3_addr_15 = 0;
    uint32_t r3_addr_16 = 0;
    uint32_t r3_addr_17 = 0;
    uint32_t r3_addr_18 = 0;
    uint32_t r3_addr_19 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_20 = 0;
    uint32_t r3_addr_21 = 0;
    uint32_t r3_addr_22 = 0;
    uint32_t r3_addr_23 = 0;
    uint32_t r3_addr_24 = 0;
    uint32_t r3_addr_25 = 0;
    uint32_t r3_addr_26 = 0;
    uint32_t r3_addr_27 = 0;
    uint32_t r3_addr_28 = 0;
    uint32_t r3_addr_29 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_30 = 0;
    uint32_t r3_addr_31 = 0;
    uint32_t r3_addr_32 = 0;
    uint32_t r3_addr_33 = 0;
    uint32_t r3_addr_34 = 0;
    uint32_t r3_addr_35 = 0;
    uint32_t r3_addr_36 = 0;
    uint32_t r3_addr_37 = 0;
    uint32_t r3_addr_38 = 0;
    uint32_t r3_addr_39 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_40 = 0;
    uint32_t r3_addr_41 = 0;
    uint32_t r3_addr_42 = 0;
    uint32_t r3_addr_43 = 0;
    uint32_t r3_addr_44 = 0;
    uint32_t r3_addr_45 = 0;
    uint32_t r3_addr_46 = 0;
    uint32_t r3_addr_47 = 0;
    uint32_t r3_addr_48 = 0;
    uint32_t r3_addr_49 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_50 = 0;
    uint32_t r3_addr_51 = 0;
    uint32_t r3_addr_52 = 0;
    uint32_t r3_addr_53 = 0;
    uint32_t r3_addr_54 = 0;
    uint32_t r3_addr_55 = 0;
    uint32_t r3_addr_56 = 0;
    uint32_t r3_addr_57 = 0;
    uint32_t r3_addr_58 = 0;
    uint32_t r3_addr_59 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_60 = 0;
    uint32_t r3_addr_61 = 0;
    uint32_t r3_addr_62 = 0;
    uint32_t r3_addr_63 = 0;
    uint32_t r3_addr_64 = 0;
    uint32_t r3_addr_65 = 0;
    uint32_t r3_addr_66 = 0;
    uint32_t r3_addr_67 = 0;
    uint32_t r3_addr_68 = 0;
    uint32_t r3_addr_69 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_70 = 0;
    uint32_t r3_addr_71 = 0;
    uint32_t r3_addr_72 = 0;
    uint32_t r3_addr_73 = 0;
    uint32_t r3_addr_74 = 0;
    uint32_t r3_addr_75 = 0;
    uint32_t r3_addr_76 = 0;
    uint32_t r3_addr_77 = 0;
    uint32_t r3_addr_78 = 0;
    uint32_t r3_addr_79 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_80 = 0;
    uint32_t r3_addr_81 = 0;
    uint32_t r3_addr_82 = 0;
    uint32_t r3_addr_83 = 0;
    uint32_t r3_addr_84 = 0;
    uint32_t r3_addr_85 = 0;
    uint32_t r3_addr_86 = 0;
    uint32_t r3_addr_87 = 0;
    uint32_t r3_addr_88 = 0;
    uint32_t r3_addr_89 = 0;
    uint32_t r3_addr_9 = 0;
    uint32_t r3_addr_90 = 0;
    uint32_t r3_addr_91 = 0;
    uint32_t r3_addr_92 = 0;
    uint32_t r3_addr_93 = 0;
    uint32_t r3_addr_94 = 0;
    uint32_t r3_addr_95 = 0;
    uint32_t r3_addr_96 = 0;
    uint32_t r3_addr_97 = 0;
    uint32_t r3_addr_98 = 0;
    uint32_t r3_addr_99 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_10 = 0;
    uint32_t r3_rot_11 = 0;
    uint32_t r3_rot_12 = 0;
    uint32_t r3_rot_13 = 0;
    uint32_t r3_rot_14 = 0;
    uint32_t r3_rot_15 = 0;
    uint32_t r3_rot_16 = 0;
    uint32_t r3_rot_17 = 0;
    uint32_t r3_rot_18 = 0;
    uint32_t r3_rot_19 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_20 = 0;
    uint32_t r3_rot_21 = 0;
    uint32_t r3_rot_22 = 0;
    uint32_t r3_rot_23 = 0;
    uint32_t r3_rot_24 = 0;
    uint32_t r3_rot_25 = 0;
    uint32_t r3_rot_26 = 0;
    uint32_t r3_rot_27 = 0;
    uint32_t r3_rot_28 = 0;
    uint32_t r3_rot_29 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_30 = 0;
    uint32_t r3_rot_31 = 0;
    uint32_t r3_rot_32 = 0;
    uint32_t r3_rot_33 = 0;
    uint32_t r3_rot_34 = 0;
    uint32_t r3_rot_35 = 0;
    uint32_t r3_rot_36 = 0;
    uint32_t r3_rot_37 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    const uint32_t r27_entry = r27;
    const uint32_t r28_entry = r28;
    const uint32_t r29_entry = r29;
    const uint32_t r30_entry = r30;
    const uint32_t r31_entry = r31;
    uint32_t ctr = ctx->ctr;

    goto loc_802B32D4;

loc_802B32D4:
{
    MemoryInline::FlatWriteRam32((r1 + -112), r1);
    r1 = (r1 + -112);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 116), r0);
    r11 = (r1 + 112);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r27 = r4;
    r31 = 0;
    r30 = 0;
    r29 = 0;
    r28 = 0;
    r0 = MemoryInline::FlatRead8((r3 + 3013));
}

loc_802B3304:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(22))) {
        goto loc_802B40C0;
    }
}

loc_802B3308:
{
    r4 = 0x805D0000u;
    r4 = (r4 + -280);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r4_addr_1 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_1);
    ctr = r4;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x802B40C0u:
        goto loc_802B40C0;
        break;
    case 0x802B3320u:
        goto loc_802B3320;
        break;
    case 0x802B33A8u:
        goto loc_802B33A8;
        break;
    case 0x802B33C0u:
        goto loc_802B33C0;
        break;
    case 0x802B377Cu:
        goto loc_802B377C;
        break;
    case 0x802B33D8u:
        goto loc_802B33D8;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_802B3320:
{
    r4 = MemoryInline::FlatRead8((r3 + 3014));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = 0x805D0000u;
    r3 = (r3 + -416);
    r3_addr_1 = (r3 + r0);
    r31 = MemoryInline::FlatRead32(r3_addr_1);
}

loc_802B3338:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_802B3350;
    }
}

loc_802B333C:
{
}

loc_802B3340:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(1))) {
        goto loc_802B3374;
    }
}

loc_802B3344:
{
}

loc_802B3348:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(6))) {
        goto loc_802B338C;
    }
}

loc_802B334C:
{
    goto loc_802B40C0;
}

loc_802B3350:
{
    r0 = (r5 & 255);
}

loc_802B3358:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_802B4124;
    }
}

loc_802B335C:
{
    ctx->lr = 0x802B3360u;
    if constexpr (KnownRegArgsCpuCall<0x803AAFECu>(&func_803AAFEC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803AAFEC_250B = func_803AAFEC_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_803AAFEC_250B);
        r4 = static_cast<uint32_t>(regargs_result_803AAFEC_250B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803AAFECu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (r3 & 255);
}

loc_802B3368:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802B40C0;
    }
}

loc_802B336C:
{
    r30 = 1;
    goto loc_802B40C0;
}

loc_802B3374:
{
    ctx->lr = 0x802B3378u;
    if constexpr (KnownRegArgsCpuCall<0x803AB044u>(&func_803AB044)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_803AB044_28DD = func_803AB044_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803AB044_28DD;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803AB044u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (r3 & 255);
}

loc_802B3380:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802B40C0;
    }
}

loc_802B3384:
{
    r30 = 1;
    goto loc_802B40C0;
}

loc_802B338C:
{
    r0 = (r5 & 255);
}

loc_802B3394:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802B4124;
    }
}

loc_802B3398:
{
}

loc_802B339C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802B40C0;
    }
}

loc_802B33A0:
{
    r30 = 1;
    goto loc_802B40C0;
}

loc_802B33A8:
{
    r0 = MemoryInline::FlatRead8((r3 + 3014));
}

loc_802B33B0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802B40C0;
    }
}

loc_802B33B4:
{
    r31 = (r13 + -27152);
    r30 = 0;
    goto loc_802B40C0;
}

loc_802B33C0:
{
    r0 = MemoryInline::FlatRead8((r3 + 3014));
}

loc_802B33C8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802B40C0;
    }
}

loc_802B33CC:
{
    r31 = (r13 + -27152);
    r30 = 1;
    goto loc_802B40C0;
}

loc_802B33D8:
{
    r0 = MemoryInline::FlatRead8((r3 + 3014));
}

loc_802B33E0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802B3478;
    }
}

loc_802B33E4:
{
    r31 = (r1 + 8);
    r0 = (r1 + 52);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r0 = (r1 + 16);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    ctx->lr = 0x802B33FCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x802FB9E0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    ctr = ctx->ctr;
    r0 = (r3 & 255);
}

loc_802B3404:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802B3410;
    }
}

loc_802B3408:
{
    r5 = (r13 + -27072);
    goto loc_802B342C;
}

loc_802B3410:
{
    r5 = (r13 + -27068);
    goto loc_802B342C;
}

loc_802B3418:
{
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r28 & 255);
    r3_addr_3 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_3, static_cast<uint8_t>(r4));
    r5 = (r5 + 1);
    r28 = (r28 + 1);
}

loc_802B342C:
{
    r4 = MemoryInline::FlatRead8(r5);
}

loc_802B3434:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(255))) {
        goto loc_802B3418;
    }
}

loc_802B3438:
{
    // inline leaf 0x8021F29C (4 guest instruction(s))
    r3 = 0x806B0000u;
    r3 = (r3 + -12536);
    r3 = MemoryInline::FlatRead32((r3 + 56));
    // end of inlined leaf 0x8021F29C
}

loc_802B3440:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802B3458;
    }
}

loc_802B3444:
{
    r4 = 1;
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r28 & 255);
    r3_addr_4 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_4, static_cast<uint8_t>(r4));
    r28 = (r28 + 1);
}

loc_802B3458:
{
    r30 = 1;
    r4 = 255;
    r3 = MemoryInline::FlatRead32((r1 + 12));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r28 & 255);
    r3_addr_6 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_6, static_cast<uint8_t>(r4));
    goto loc_802B40C0;
}

loc_802B3478:
{
}

loc_802B347C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802B3498;
    }
}

loc_802B3480:
{
    r31 = (r13 + -27056);
    // inline leaf 0x8021F29C (4 guest instruction(s))
    r3 = 0x806B0000u;
    r3 = (r3 + -12536);
    r3 = MemoryInline::FlatRead32((r3 + 56));
    // end of inlined leaf 0x8021F29C
}

loc_802B348C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_802B40C0;
    }
}

loc_802B3490:
{
    r30 = 1;
    goto loc_802B40C0;
}

loc_802B3498:
{
}

loc_802B349C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_802B40C0;
    }
}

loc_802B34A0:
{
    r31 = (r1 + 8);
    r0 = (r1 + 52);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r0 = (r1 + 16);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = 0;
    // inline leaf 0x802FB950 (5 guest instruction(s))
    r4 = MemoryInline::FlatRead32((r13 + -17824));
    r0 = (r3 & 255);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 18004));
    // end of inlined leaf 0x802FB950
    r0 = (r3 & 255);
}

loc_802B34C4:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_802B34DC;
    }
}

loc_802B34C8:
{
}

loc_802B34CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_802B34FC;
    }
}

loc_802B34D0:
{
}

loc_802B34D4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_802B351C;
    }
}

loc_802B34D8:
{
    goto loc_802B3538;
}

loc_802B34DC:
{
    r0 = 3;
    r3 = MemoryInline::FlatRead32((r1 + 8));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r0 = 4;
    r3 = MemoryInline::FlatRead32((r1 + 8));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    r28 = 2;
    goto loc_802B3538;
}

loc_802B34FC:
{
    r0 = 1;
    r3 = MemoryInline::FlatRead32((r1 + 8));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r0 = 4;
    r3 = MemoryInline::FlatRead32((r1 + 8));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    r28 = 2;
    goto loc_802B3538;
}

loc_802B351C:
{
    r0 = 1;
    r3 = MemoryInline::FlatRead32((r1 + 8));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r0 = 2;
    r3 = MemoryInline::FlatRead32((r1 + 8));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    r28 = 2;
}

loc_802B3538:
{
    r3 = 2;
    // inline leaf 0x802FB950 (5 guest instruction(s))
    r4 = MemoryInline::FlatRead32((r13 + -17824));
    r0 = (r3 & 255);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 18004));
    // end of inlined leaf 0x802FB950
    r0 = (r3 & 255);
}

loc_802B3548:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802B3560;
    }
}

loc_802B354C:
{
}

loc_802B3550:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_802B359C;
    }
}

loc_802B3554:
{
}

loc_802B3558:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_802B35C4;
    }
}

loc_802B355C:
{
    goto loc_802B35D4;
}

loc_802B3560:
{
    r0 = 8;
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r3_addr_10 = (r3 + r28);
    MemoryInline::FlatWrite8(r3_addr_10, static_cast<uint8_t>(r0));
    r28 = (r28 + 1);
    r4 = 9;
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r28 & 255);
    r3_addr_11 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_11, static_cast<uint8_t>(r4));
    r28 = (r28 + 1);
    r4 = 10;
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r28 & 255);
    r3_addr_12 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_12, static_cast<uint8_t>(r4));
    r28 = (r28 + 1);
    goto loc_802B35D4;
}

loc_802B359C:
{
    r0 = 9;
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r3_addr_8 = (r3 + r28);
    MemoryInline::FlatWrite8(r3_addr_8, static_cast<uint8_t>(r0));
    r28 = (r28 + 1);
    r4 = 10;
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r28 & 255);
    r3_addr_9 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_9, static_cast<uint8_t>(r4));
    r28 = (r28 + 1);
    goto loc_802B35D4;
}

loc_802B35C4:
{
    r0 = 10;
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r3_addr_7 = (r3 + r28);
    MemoryInline::FlatWrite8(r3_addr_7, static_cast<uint8_t>(r0));
    r28 = (r28 + 1);
}

loc_802B35D4:
{
    r3 = 3;
    // inline leaf 0x802FB950 (5 guest instruction(s))
    r4 = MemoryInline::FlatRead32((r13 + -17824));
    r0 = (r3 & 255);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 18004));
    // end of inlined leaf 0x802FB950
    r0 = (r3 & 255);
}

loc_802B35E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802B35FC;
    }
}

loc_802B35E8:
{
}

loc_802B35EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_802B363C;
    }
}

loc_802B35F0:
{
}

loc_802B35F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_802B3668;
    }
}

loc_802B35F8:
{
    goto loc_802B367C;
}

loc_802B35FC:
{
    r4 = 11;
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r28 & 255);
    r3_addr_17 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_17, static_cast<uint8_t>(r4));
    r28 = (r28 + 1);
    r4 = 12;
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r28 & 255);
    r3_addr_18 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_18, static_cast<uint8_t>(r4));
    r28 = (r28 + 1);
    r4 = 13;
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r28 & 255);
    r3_addr_19 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_19, static_cast<uint8_t>(r4));
    r28 = (r28 + 1);
    goto loc_802B367C;
}

loc_802B363C:
{
    r4 = 12;
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r28 & 255);
    r3_addr_15 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_15, static_cast<uint8_t>(r4));
    r28 = (r28 + 1);
    r4 = 13;
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r28 & 255);
    r3_addr_16 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_16, static_cast<uint8_t>(r4));
    r28 = (r28 + 1);
    goto loc_802B367C;
}

loc_802B3668:
{
    r4 = 13;
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r28 & 255);
    r3_addr_14 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_14, static_cast<uint8_t>(r4));
    r28 = (r28 + 1);
}

loc_802B367C:
{
    r3 = 1;
    // inline leaf 0x802FB950 (5 guest instruction(s))
    r4 = MemoryInline::FlatRead32((r13 + -17824));
    r0 = (r3 & 255);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 18004));
    // end of inlined leaf 0x802FB950
    r0 = (r3 & 255);
}

loc_802B368C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_802B369C;
    }
}

loc_802B3690:
{
}

loc_802B3694:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_802B36C8;
    }
}

loc_802B3698:
{
    goto loc_802B36DC;
}

loc_802B369C:
{
    r4 = 14;
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r28 & 255);
    r3_addr_22 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_22, static_cast<uint8_t>(r4));
    r28 = (r28 + 1);
    r4 = 15;
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r28 & 255);
    r3_addr_23 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_23, static_cast<uint8_t>(r4));
    r28 = (r28 + 1);
    goto loc_802B36DC;
}

loc_802B36C8:
{
    r4 = 15;
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r28 & 255);
    r3_addr_21 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_21, static_cast<uint8_t>(r4));
    r28 = (r28 + 1);
}

loc_802B36DC:
{
    ctx->lr = 0x802B36E0u;
    if constexpr (KnownRegArgsCpuCall<0x802FB928u>(&func_802FB928)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        const auto regargs_result_802FB928_588B = func_802FB928_ra0_0_8_0(ctx);
        r3 = regargs_result_802FB928_588B;
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
        InvokeDirectCpu<0x802FB928u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = (r3 & 255);
}

loc_802B36E8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802B3704;
    }
}

loc_802B36EC:
{
    r4 = 6;
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r28 & 255);
    r3_addr_25 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_25, static_cast<uint8_t>(r4));
    r28 = (r28 + 1);
    goto loc_802B3718;
}

loc_802B3704:
{
    r4 = 5;
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r28 & 255);
    r3_addr_26 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_26, static_cast<uint8_t>(r4));
    r28 = (r28 + 1);
}

loc_802B3718:
{
    ctx->lr = 0x802B371Cu;
    if constexpr (KnownRegArgsCpuCall<0x802FB964u>(&func_802FB964)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        const auto regargs_result_802FB964_5E15 = func_802FB964_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_802FB964_5E15;
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
        InvokeDirectCpu<0x802FB964u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = (r3 & 255);
}

loc_802B3724:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802B373C;
    }
}

loc_802B3728:
{
    r4 = 16;
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r28 & 255);
    r3_addr_28 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_28, static_cast<uint8_t>(r4));
    r28 = (r28 + 1);
}

loc_802B373C:
{
    // inline leaf 0x8021F29C (4 guest instruction(s))
    r3 = 0x806B0000u;
    r3 = (r3 + -12536);
    r3 = MemoryInline::FlatRead32((r3 + 56));
    // end of inlined leaf 0x8021F29C
}

loc_802B3744:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802B375C;
    }
}

loc_802B3748:
{
    r4 = 7;
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r28 & 255);
    r3_addr_30 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_30, static_cast<uint8_t>(r4));
    r28 = (r28 + 1);
}

loc_802B375C:
{
    r30 = 1;
    r4 = 255;
    r3 = MemoryInline::FlatRead32((r1 + 12));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r28 & 255);
    r3_addr_32 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_32, static_cast<uint8_t>(r4));
    goto loc_802B40C0;
}

loc_802B377C:
{
    r0 = MemoryInline::FlatRead8((r3 + 3014));
}

loc_802B3784:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802B37BC;
    }
}

loc_802B3788:
{
}

loc_802B378C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_802B392C;
    }
}

loc_802B3790:
{
}

loc_802B3794:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_802B3A9C;
    }
}

loc_802B3798:
{
}

loc_802B379C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_802B3C7C;
    }
}

loc_802B37A0:
{
}

loc_802B37A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_802B3E14;
    }
}

loc_802B37A8:
{
}

loc_802B37AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_802B3E2C;
    }
}

loc_802B37B0:
{
}

loc_802B37B4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(7))) {
        goto loc_802B3E44;
    }
}

loc_802B37B8:
{
    goto loc_802B40C0;
}

loc_802B37BC:
{
    r31 = (r1 + 8);
    r0 = (r1 + 52);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r0 = (r1 + 16);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    // inline leaf 0x8021F29C (4 guest instruction(s))
    r3 = 0x806B0000u;
    r3 = (r3 + -12536);
    r3 = MemoryInline::FlatRead32((r3 + 56));
    // end of inlined leaf 0x8021F29C
}

loc_802B37D8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_802B3874;
    }
}

loc_802B37DC:
{
    r3 = 0x805D0000u;
    r5 = (r3 + -364);
    goto loc_802B37FC;
}

loc_802B37E8:
{
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r28 & 255);
    r3_addr_114 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_114, static_cast<uint8_t>(r4));
    r5 = (r5 + 1);
    r28 = (r28 + 1);
}

loc_802B37FC:
{
    r4 = MemoryInline::FlatRead8(r5);
}

loc_802B3804:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(255))) {
        goto loc_802B37E8;
    }
}

loc_802B3808:
{
    r5 = (r13 + -27144);
    goto loc_802B3824;
}

loc_802B3810:
{
    r3 = MemoryInline::FlatRead32((r1 + 12));
    r0 = (r29 & 255);
    r3_addr_116 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_116, static_cast<uint8_t>(r4));
    r5 = (r5 + 1);
    r29 = (r29 + 1);
}

loc_802B3824:
{
    r4 = MemoryInline::FlatRead8(r5);
}

loc_802B382C:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(255))) {
        goto loc_802B3810;
    }
}

loc_802B3830:
{
    // inline leaf 0x802FBA40 (7 guest instruction(s))
    r3 = 0x806B0000u;
    r3 = (r3 + -12348);
    r3 = MemoryInline::FlatRead8((r3 + 351));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_31 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_31 & 134217727);
    // end of inlined leaf 0x802FBA40
}

loc_802B3838:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802B3908;
    }
}

loc_802B383C:
{
    // inline leaf 0x802FBA5C (7 guest instruction(s))
    r3 = 0x806B0000u;
    r3 = (r3 + -12348);
    r3 = MemoryInline::FlatRead8((r3 + 353));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_32 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_32 & 134217727);
    // end of inlined leaf 0x802FBA5C
}

loc_802B3844:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802B3908;
    }
}

loc_802B3848:
{
    r4 = 18;
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r28 & 255);
    r3_addr_117 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_117, static_cast<uint8_t>(r4));
    r28 = (r28 + 1);
    r4 = 19;
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r28 & 255);
    r3_addr_118 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_118, static_cast<uint8_t>(r4));
    r28 = (r28 + 1);
    goto loc_802B3908;
}

loc_802B3874:
{
    r5 = (r13 + -27144);
    goto loc_802B3890;
}

loc_802B387C:
{
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r28 & 255);
    r3_addr_120 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_120, static_cast<uint8_t>(r4));
    r5 = (r5 + 1);
    r28 = (r28 + 1);
}

loc_802B3890:
{
    r4 = MemoryInline::FlatRead8(r5);
}

loc_802B3898:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(255))) {
        goto loc_802B387C;
    }
}

loc_802B389C:
{
    r3 = 0x805D0000u;
    r5 = (r3 + -364);
    goto loc_802B38BC;
}

loc_802B38A8:
{
    r3 = MemoryInline::FlatRead32((r1 + 12));
    r0 = (r29 & 255);
    r3_addr_122 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_122, static_cast<uint8_t>(r4));
    r5 = (r5 + 1);
    r29 = (r29 + 1);
}

loc_802B38BC:
{
    r4 = MemoryInline::FlatRead8(r5);
}

loc_802B38C4:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(255))) {
        goto loc_802B38A8;
    }
}

loc_802B38C8:
{
    // inline leaf 0x802FBA40 (7 guest instruction(s))
    r3 = 0x806B0000u;
    r3 = (r3 + -12348);
    r3 = MemoryInline::FlatRead8((r3 + 351));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_33 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_33 & 134217727);
    // end of inlined leaf 0x802FBA40
}

loc_802B38D0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802B3908;
    }
}

loc_802B38D4:
{
    // inline leaf 0x802FBA5C (7 guest instruction(s))
    r3 = 0x806B0000u;
    r3 = (r3 + -12348);
    r3 = MemoryInline::FlatRead8((r3 + 353));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_34 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_34 & 134217727);
    // end of inlined leaf 0x802FBA5C
}

loc_802B38DC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802B3908;
    }
}

loc_802B38E0:
{
    r4 = 16;
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r28 & 255);
    r3_addr_123 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_123, static_cast<uint8_t>(r4));
    r28 = (r28 + 1);
    r4 = 17;
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r28 & 255);
    r3_addr_124 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_124, static_cast<uint8_t>(r4));
    r28 = (r28 + 1);
}

loc_802B3908:
{
    r30 = 1;
    r4 = 255;
    r3 = MemoryInline::FlatRead32((r1 + 12));
    r0 = (r29 & 255);
    r3_addr_126 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_126, static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r28 & 255);
    r3_addr_127 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_127, static_cast<uint8_t>(r4));
    goto loc_802B40C0;
}

loc_802B392C:
{
    r31 = (r1 + 8);
    r0 = (r1 + 52);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r0 = (r1 + 16);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    // inline leaf 0x8021F29C (4 guest instruction(s))
    r3 = 0x806B0000u;
    r3 = (r3 + -12536);
    r3 = MemoryInline::FlatRead32((r3 + 56));
    // end of inlined leaf 0x8021F29C
}

loc_802B3948:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_802B39E4;
    }
}

loc_802B394C:
{
    r3 = 0x805D0000u;
    r5 = (r3 + -344);
    goto loc_802B396C;
}

loc_802B3958:
{
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r28 & 255);
    r3_addr_99 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_99, static_cast<uint8_t>(r4));
    r5 = (r5 + 1);
    r28 = (r28 + 1);
}

loc_802B396C:
{
    r4 = MemoryInline::FlatRead8(r5);
}

loc_802B3974:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(255))) {
        goto loc_802B3958;
    }
}

loc_802B3978:
{
    r5 = (r13 + -27140);
    goto loc_802B3994;
}

loc_802B3980:
{
    r3 = MemoryInline::FlatRead32((r1 + 12));
    r0 = (r29 & 255);
    r3_addr_101 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_101, static_cast<uint8_t>(r4));
    r5 = (r5 + 1);
    r29 = (r29 + 1);
}

loc_802B3994:
{
    r4 = MemoryInline::FlatRead8(r5);
}

loc_802B399C:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(255))) {
        goto loc_802B3980;
    }
}

loc_802B39A0:
{
    // inline leaf 0x802FBA40 (7 guest instruction(s))
    r3 = 0x806B0000u;
    r3 = (r3 + -12348);
    r3 = MemoryInline::FlatRead8((r3 + 351));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_26 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_26 & 134217727);
    // end of inlined leaf 0x802FBA40
}

loc_802B39A8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802B3A78;
    }
}

loc_802B39AC:
{
    // inline leaf 0x802FBA5C (7 guest instruction(s))
    r3 = 0x806B0000u;
    r3 = (r3 + -12348);
    r3 = MemoryInline::FlatRead8((r3 + 353));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_27 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_27 & 134217727);
    // end of inlined leaf 0x802FBA5C
}

loc_802B39B4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802B3A78;
    }
}

loc_802B39B8:
{
    r4 = 17;
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r28 & 255);
    r3_addr_102 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_102, static_cast<uint8_t>(r4));
    r28 = (r28 + 1);
    r4 = 18;
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r28 & 255);
    r3_addr_103 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_103, static_cast<uint8_t>(r4));
    r28 = (r28 + 1);
    goto loc_802B3A78;
}

loc_802B39E4:
{
    r5 = (r13 + -27140);
    goto loc_802B3A00;
}

loc_802B39EC:
{
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r28 & 255);
    r3_addr_105 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_105, static_cast<uint8_t>(r4));
    r5 = (r5 + 1);
    r28 = (r28 + 1);
}

loc_802B3A00:
{
    r4 = MemoryInline::FlatRead8(r5);
}

loc_802B3A08:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(255))) {
        goto loc_802B39EC;
    }
}

loc_802B3A0C:
{
    r3 = 0x805D0000u;
    r5 = (r3 + -344);
    goto loc_802B3A2C;
}

loc_802B3A18:
{
    r3 = MemoryInline::FlatRead32((r1 + 12));
    r0 = (r29 & 255);
    r3_addr_107 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_107, static_cast<uint8_t>(r4));
    r5 = (r5 + 1);
    r29 = (r29 + 1);
}

loc_802B3A2C:
{
    r4 = MemoryInline::FlatRead8(r5);
}

loc_802B3A34:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(255))) {
        goto loc_802B3A18;
    }
}

loc_802B3A38:
{
    // inline leaf 0x802FBA40 (7 guest instruction(s))
    r3 = 0x806B0000u;
    r3 = (r3 + -12348);
    r3 = MemoryInline::FlatRead8((r3 + 351));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_28 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_28 & 134217727);
    // end of inlined leaf 0x802FBA40
}

loc_802B3A40:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802B3A78;
    }
}

loc_802B3A44:
{
    // inline leaf 0x802FBA5C (7 guest instruction(s))
    r3 = 0x806B0000u;
    r3 = (r3 + -12348);
    r3 = MemoryInline::FlatRead8((r3 + 353));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_29 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_29 & 134217727);
    // end of inlined leaf 0x802FBA5C
}

loc_802B3A4C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802B3A78;
    }
}

loc_802B3A50:
{
    r4 = 15;
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r28 & 255);
    r3_addr_108 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_108, static_cast<uint8_t>(r4));
    r28 = (r28 + 1);
    r4 = 16;
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r28 & 255);
    r3_addr_109 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_109, static_cast<uint8_t>(r4));
    r28 = (r28 + 1);
}

loc_802B3A78:
{
    r30 = 1;
    r4 = 255;
    r3 = MemoryInline::FlatRead32((r1 + 12));
    r0 = (r29 & 255);
    r3_addr_111 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_111, static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r28 & 255);
    r3_addr_112 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_112, static_cast<uint8_t>(r4));
    goto loc_802B40C0;
}

loc_802B3A9C:
{
    r31 = (r1 + 8);
    r0 = (r1 + 52);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r0 = (r1 + 16);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    // inline leaf 0x8021F29C (4 guest instruction(s))
    r3 = 0x806B0000u;
    r3 = (r3 + -12536);
    r3 = MemoryInline::FlatRead32((r3 + 56));
    // end of inlined leaf 0x8021F29C
}

loc_802B3AB8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_802B3B8C;
    }
}

loc_802B3ABC:
{
    r3 = 0x805D0000u;
    r5 = (r3 + -332);
    goto loc_802B3ADC;
}

loc_802B3AC8:
{
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r28 & 255);
    r3_addr_80 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_80, static_cast<uint8_t>(r4));
    r5 = (r5 + 1);
    r28 = (r28 + 1);
}

loc_802B3ADC:
{
    r4 = MemoryInline::FlatRead8(r5);
}

loc_802B3AE4:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(255))) {
        goto loc_802B3AC8;
    }
}

loc_802B3AE8:
{
    r5 = (r13 + -27136);
    goto loc_802B3B04;
}

loc_802B3AF0:
{
    r3 = MemoryInline::FlatRead32((r1 + 12));
    r0 = (r29 & 255);
    r3_addr_82 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_82, static_cast<uint8_t>(r4));
    r5 = (r5 + 1);
    r29 = (r29 + 1);
}

loc_802B3B04:
{
    r4 = MemoryInline::FlatRead8(r5);
}

loc_802B3B0C:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(255))) {
        goto loc_802B3AF0;
    }
}

loc_802B3B10:
{
    // inline leaf 0x802FBA40 (7 guest instruction(s))
    r3 = 0x806B0000u;
    r3 = (r3 + -12348);
    r3 = MemoryInline::FlatRead8((r3 + 351));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_17 & 134217727);
    // end of inlined leaf 0x802FBA40
}

loc_802B3B18:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802B3B68;
    }
}

loc_802B3B1C:
{
    // inline leaf 0x802FBA5C (7 guest instruction(s))
    r3 = 0x806B0000u;
    r3 = (r3 + -12348);
    r3 = MemoryInline::FlatRead8((r3 + 353));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_18 & 134217727);
    // end of inlined leaf 0x802FBA5C
}

loc_802B3B24:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802B3B68;
    }
}

loc_802B3B28:
{
    r4 = 4;
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r28 & 255);
    r3_addr_83 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_83, static_cast<uint8_t>(r4));
    r28 = (r28 + 1);
    r4 = 12;
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r28 & 255);
    r3_addr_84 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_84, static_cast<uint8_t>(r4));
    r28 = (r28 + 1);
    r4 = 13;
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r28 & 255);
    r3_addr_85 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_85, static_cast<uint8_t>(r4));
    r28 = (r28 + 1);
    goto loc_802B3C58;
}

loc_802B3B68:
{
    // inline leaf 0x802FBA5C (7 guest instruction(s))
    r3 = 0x806B0000u;
    r3 = (r3 + -12348);
    r3 = MemoryInline::FlatRead8((r3 + 353));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_20 & 134217727);
    // end of inlined leaf 0x802FBA5C
}

loc_802B3B70:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802B3C58;
    }
}

loc_802B3B74:
{
    r4 = 4;
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r28 & 255);
    r3_addr_86 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_86, static_cast<uint8_t>(r4));
    r28 = (r28 + 1);
    goto loc_802B3C58;
}

loc_802B3B8C:
{
    r5 = (r13 + -27136);
    goto loc_802B3BA8;
}

loc_802B3B94:
{
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r28 & 255);
    r3_addr_88 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_88, static_cast<uint8_t>(r4));
    r5 = (r5 + 1);
    r28 = (r28 + 1);
}

loc_802B3BA8:
{
    r4 = MemoryInline::FlatRead8(r5);
}

loc_802B3BB0:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(255))) {
        goto loc_802B3B94;
    }
}

loc_802B3BB4:
{
    r3 = 0x805D0000u;
    r5 = (r3 + -332);
    goto loc_802B3BD4;
}

loc_802B3BC0:
{
    r3 = MemoryInline::FlatRead32((r1 + 12));
    r0 = (r29 & 255);
    r3_addr_90 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_90, static_cast<uint8_t>(r4));
    r5 = (r5 + 1);
    r29 = (r29 + 1);
}

loc_802B3BD4:
{
    r4 = MemoryInline::FlatRead8(r5);
}

loc_802B3BDC:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(255))) {
        goto loc_802B3BC0;
    }
}

loc_802B3BE0:
{
    // inline leaf 0x802FBA40 (7 guest instruction(s))
    r3 = 0x806B0000u;
    r3 = (r3 + -12348);
    r3 = MemoryInline::FlatRead8((r3 + 351));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_21 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_21 & 134217727);
    // end of inlined leaf 0x802FBA40
}

loc_802B3BE8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802B3C38;
    }
}

loc_802B3BEC:
{
    // inline leaf 0x802FBA5C (7 guest instruction(s))
    r3 = 0x806B0000u;
    r3 = (r3 + -12348);
    r3 = MemoryInline::FlatRead8((r3 + 353));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_22 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_22 & 134217727);
    // end of inlined leaf 0x802FBA5C
}

loc_802B3BF4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802B3C38;
    }
}

loc_802B3BF8:
{
    r4 = 2;
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r28 & 255);
    r3_addr_91 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_91, static_cast<uint8_t>(r4));
    r28 = (r28 + 1);
    r4 = 10;
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r28 & 255);
    r3_addr_92 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_92, static_cast<uint8_t>(r4));
    r28 = (r28 + 1);
    r4 = 11;
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r28 & 255);
    r3_addr_93 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_93, static_cast<uint8_t>(r4));
    r28 = (r28 + 1);
    goto loc_802B3C58;
}

loc_802B3C38:
{
    // inline leaf 0x802FBA5C (7 guest instruction(s))
    r3 = 0x806B0000u;
    r3 = (r3 + -12348);
    r3 = MemoryInline::FlatRead8((r3 + 353));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_24 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_24 & 134217727);
    // end of inlined leaf 0x802FBA5C
}

loc_802B3C40:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802B3C58;
    }
}

loc_802B3C44:
{
    r4 = 2;
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r28 & 255);
    r3_addr_94 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_94, static_cast<uint8_t>(r4));
    r28 = (r28 + 1);
}

loc_802B3C58:
{
    r30 = 1;
    r4 = 255;
    r3 = MemoryInline::FlatRead32((r1 + 12));
    r0 = (r29 & 255);
    r3_addr_96 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_96, static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r28 & 255);
    r3_addr_97 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_97, static_cast<uint8_t>(r4));
    goto loc_802B40C0;
}

loc_802B3C7C:
{
    r31 = (r1 + 8);
    r0 = (r1 + 52);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r0 = (r1 + 16);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    // inline leaf 0x8021F29C (4 guest instruction(s))
    r3 = 0x806B0000u;
    r3 = (r3 + -12536);
    r3 = MemoryInline::FlatRead32((r3 + 56));
    // end of inlined leaf 0x8021F29C
}

loc_802B3C98:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_802B3D48;
    }
}

loc_802B3C9C:
{
    r5 = (r13 + -27128);
    goto loc_802B3CB8;
}

loc_802B3CA4:
{
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r28 & 255);
    r3_addr_63 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_63, static_cast<uint8_t>(r4));
    r5 = (r5 + 1);
    r28 = (r28 + 1);
}

loc_802B3CB8:
{
    r4 = MemoryInline::FlatRead8(r5);
}

loc_802B3CC0:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(255))) {
        goto loc_802B3CA4;
    }
}

loc_802B3CC4:
{
    r5 = (r13 + -27120);
    goto loc_802B3CE0;
}

loc_802B3CCC:
{
    r3 = MemoryInline::FlatRead32((r1 + 12));
    r0 = (r29 & 255);
    r3_addr_65 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_65, static_cast<uint8_t>(r4));
    r5 = (r5 + 1);
    r29 = (r29 + 1);
}

loc_802B3CE0:
{
    r4 = MemoryInline::FlatRead8(r5);
}

loc_802B3CE8:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(255))) {
        goto loc_802B3CCC;
    }
}

loc_802B3CEC:
{
    // inline leaf 0x802FBA40 (7 guest instruction(s))
    r3 = 0x806B0000u;
    r3 = (r3 + -12348);
    r3 = MemoryInline::FlatRead8((r3 + 351));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_10 & 134217727);
    // end of inlined leaf 0x802FBA40
}

loc_802B3CF4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802B3D30;
    }
}

loc_802B3CF8:
{
    // inline leaf 0x802FBA5C (7 guest instruction(s))
    r3 = 0x806B0000u;
    r3 = (r3 + -12348);
    r3 = MemoryInline::FlatRead8((r3 + 353));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_11 & 134217727);
    // end of inlined leaf 0x802FBA5C
}

loc_802B3D00:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802B3D30;
    }
}

loc_802B3D04:
{
    r4 = 7;
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r28 & 255);
    r3_addr_66 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_66, static_cast<uint8_t>(r4));
    r28 = (r28 + 1);
    r4 = 8;
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r28 & 255);
    r3_addr_67 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_67, static_cast<uint8_t>(r4));
    r28 = (r28 + 1);
    goto loc_802B3DF0;
}

loc_802B3D30:
{
    r4 = 4;
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r28 & 255);
    r3_addr_68 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_68, static_cast<uint8_t>(r4));
    r28 = (r28 + 1);
    goto loc_802B3DF0;
}

loc_802B3D48:
{
    r5 = (r13 + -27120);
    goto loc_802B3D64;
}

loc_802B3D50:
{
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r28 & 255);
    r3_addr_70 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_70, static_cast<uint8_t>(r4));
    r5 = (r5 + 1);
    r28 = (r28 + 1);
}

loc_802B3D64:
{
    r4 = MemoryInline::FlatRead8(r5);
}

loc_802B3D6C:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(255))) {
        goto loc_802B3D50;
    }
}

loc_802B3D70:
{
    r5 = (r13 + -27128);
    goto loc_802B3D8C;
}

loc_802B3D78:
{
    r3 = MemoryInline::FlatRead32((r1 + 12));
    r0 = (r29 & 255);
    r3_addr_72 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_72, static_cast<uint8_t>(r4));
    r5 = (r5 + 1);
    r29 = (r29 + 1);
}

loc_802B3D8C:
{
    r4 = MemoryInline::FlatRead8(r5);
}

loc_802B3D94:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(255))) {
        goto loc_802B3D78;
    }
}

loc_802B3D98:
{
    // inline leaf 0x802FBA40 (7 guest instruction(s))
    r3 = 0x806B0000u;
    r3 = (r3 + -12348);
    r3 = MemoryInline::FlatRead8((r3 + 351));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_13 & 134217727);
    // end of inlined leaf 0x802FBA40
}

loc_802B3DA0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802B3DDC;
    }
}

loc_802B3DA4:
{
    // inline leaf 0x802FBA5C (7 guest instruction(s))
    r3 = 0x806B0000u;
    r3 = (r3 + -12348);
    r3 = MemoryInline::FlatRead8((r3 + 353));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_14 & 134217727);
    // end of inlined leaf 0x802FBA5C
}

loc_802B3DAC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802B3DDC;
    }
}

loc_802B3DB0:
{
    r4 = 5;
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r28 & 255);
    r3_addr_73 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_73, static_cast<uint8_t>(r4));
    r28 = (r28 + 1);
    r4 = 6;
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r28 & 255);
    r3_addr_74 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_74, static_cast<uint8_t>(r4));
    r28 = (r28 + 1);
    goto loc_802B3DF0;
}

loc_802B3DDC:
{
    r4 = 3;
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r28 & 255);
    r3_addr_75 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_75, static_cast<uint8_t>(r4));
    r28 = (r28 + 1);
}

loc_802B3DF0:
{
    r30 = 1;
    r4 = 255;
    r3 = MemoryInline::FlatRead32((r1 + 12));
    r0 = (r29 & 255);
    r3_addr_77 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_77, static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r28 & 255);
    r3_addr_78 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_78, static_cast<uint8_t>(r4));
    goto loc_802B40C0;
}

loc_802B3E14:
{
    r31 = (r13 + -27104);
    // inline leaf 0x8021F29C (4 guest instruction(s))
    r3 = 0x806B0000u;
    r3 = (r3 + -12536);
    r3 = MemoryInline::FlatRead32((r3 + 56));
    // end of inlined leaf 0x8021F29C
}

loc_802B3E20:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_802B40C0;
    }
}

loc_802B3E24:
{
    r30 = 1;
    goto loc_802B40C0;
}

loc_802B3E2C:
{
    r31 = (r13 + -27088);
    // inline leaf 0x8021F29C (4 guest instruction(s))
    r3 = 0x806B0000u;
    r3 = (r3 + -12536);
    r3 = MemoryInline::FlatRead32((r3 + 56));
    // end of inlined leaf 0x8021F29C
}

loc_802B3E38:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_802B40C0;
    }
}

loc_802B3E3C:
{
    r30 = 1;
    goto loc_802B40C0;
}

loc_802B3E44:
{
    r31 = (r1 + 8);
    r0 = (r1 + 52);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r0 = (r1 + 16);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    // inline leaf 0x8021F29C (4 guest instruction(s))
    r3 = 0x806B0000u;
    r3 = (r3 + -12536);
    r3 = MemoryInline::FlatRead32((r3 + 56));
    // end of inlined leaf 0x8021F29C
}

loc_802B3E60:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_802B3F84;
    }
}

loc_802B3E64:
{
    r3 = 0x805D0000u;
    r5 = (r3 + -320);
    goto loc_802B3E84;
}

loc_802B3E70:
{
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r28 & 255);
    r3_addr_34 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_34, static_cast<uint8_t>(r4));
    r5 = (r5 + 1);
    r28 = (r28 + 1);
}

loc_802B3E84:
{
    r4 = MemoryInline::FlatRead8(r5);
}

loc_802B3E8C:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(255))) {
        goto loc_802B3E70;
    }
}

loc_802B3E90:
{
    r5 = (r13 + -27080);
    goto loc_802B3EAC;
}

loc_802B3E98:
{
    r3 = MemoryInline::FlatRead32((r1 + 12));
    r0 = (r29 & 255);
    r3_addr_36 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_36, static_cast<uint8_t>(r4));
    r5 = (r5 + 1);
    r29 = (r29 + 1);
}

loc_802B3EAC:
{
    r4 = MemoryInline::FlatRead8(r5);
}

loc_802B3EB4:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(255))) {
        goto loc_802B3E98;
    }
}

loc_802B3EB8:
{
    // inline leaf 0x802FBA40 (7 guest instruction(s))
    r3 = 0x806B0000u;
    r3 = (r3 + -12348);
    r3 = MemoryInline::FlatRead8((r3 + 351));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 134217727);
    // end of inlined leaf 0x802FBA40
}

loc_802B3EC0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802B3F24;
    }
}

loc_802B3EC4:
{
    // inline leaf 0x802FBA5C (7 guest instruction(s))
    r3 = 0x806B0000u;
    r3 = (r3 + -12348);
    r3 = MemoryInline::FlatRead8((r3 + 353));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_2 & 134217727);
    // end of inlined leaf 0x802FBA5C
}

loc_802B3ECC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802B3F24;
    }
}

loc_802B3ED0:
{
    r4 = 25;
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r28 & 255);
    r3_addr_37 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_37, static_cast<uint8_t>(r4));
    r28 = (r28 + 1);
    r4 = 29;
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r28 & 255);
    r3_addr_38 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_38, static_cast<uint8_t>(r4));
    r28 = (r28 + 1);
    r4 = 30;
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r28 & 255);
    r3_addr_39 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_39, static_cast<uint8_t>(r4));
    r28 = (r28 + 1);
    r4 = 35;
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r28 & 255);
    r3_addr_40 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_40, static_cast<uint8_t>(r4));
    r28 = (r28 + 1);
    goto loc_802B40A0;
}

loc_802B3F24:
{
    // inline leaf 0x802FBA5C (7 guest instruction(s))
    r3 = 0x806B0000u;
    r3 = (r3 + -12348);
    r3 = MemoryInline::FlatRead8((r3 + 353));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_4 & 134217727);
    // end of inlined leaf 0x802FBA5C
}

loc_802B3F2C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802B3F44;
    }
}

loc_802B3F30:
{
    r4 = 25;
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r28 & 255);
    r3_addr_41 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_41, static_cast<uint8_t>(r4));
    r28 = (r28 + 1);
}

loc_802B3F44:
{
    r4 = 23;
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r28 & 255);
    r3_addr_43 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_43, static_cast<uint8_t>(r4));
    r28 = (r28 + 1);
    r4 = 24;
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r28 & 255);
    r3_addr_44 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_44, static_cast<uint8_t>(r4));
    r28 = (r28 + 1);
    r4 = 31;
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r28 & 255);
    r3_addr_45 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_45, static_cast<uint8_t>(r4));
    r28 = (r28 + 1);
    goto loc_802B40A0;
}

loc_802B3F84:
{
    r5 = (r13 + -27080);
    goto loc_802B3FA0;
}

loc_802B3F8C:
{
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r28 & 255);
    r3_addr_47 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_47, static_cast<uint8_t>(r4));
    r5 = (r5 + 1);
    r28 = (r28 + 1);
}

loc_802B3FA0:
{
    r4 = MemoryInline::FlatRead8(r5);
}

loc_802B3FA8:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(255))) {
        goto loc_802B3F8C;
    }
}

loc_802B3FAC:
{
    r3 = 0x805D0000u;
    r5 = (r3 + -320);
    goto loc_802B3FCC;
}

loc_802B3FB8:
{
    r3 = MemoryInline::FlatRead32((r1 + 12));
    r0 = (r29 & 255);
    r3_addr_49 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_49, static_cast<uint8_t>(r4));
    r5 = (r5 + 1);
    r29 = (r29 + 1);
}

loc_802B3FCC:
{
    r4 = MemoryInline::FlatRead8(r5);
}

loc_802B3FD4:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(255))) {
        goto loc_802B3FB8;
    }
}

loc_802B3FD8:
{
    // inline leaf 0x802FBA40 (7 guest instruction(s))
    r3 = 0x806B0000u;
    r3 = (r3 + -12348);
    r3 = MemoryInline::FlatRead8((r3 + 351));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_5 & 134217727);
    // end of inlined leaf 0x802FBA40
}

loc_802B3FE0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802B4044;
    }
}

loc_802B3FE4:
{
    // inline leaf 0x802FBA5C (7 guest instruction(s))
    r3 = 0x806B0000u;
    r3 = (r3 + -12348);
    r3 = MemoryInline::FlatRead8((r3 + 353));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_6 & 134217727);
    // end of inlined leaf 0x802FBA5C
}

loc_802B3FEC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802B4044;
    }
}

loc_802B3FF0:
{
    r4 = 5;
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r28 & 255);
    r3_addr_50 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_50, static_cast<uint8_t>(r4));
    r28 = (r28 + 1);
    r4 = 27;
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r28 & 255);
    r3_addr_51 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_51, static_cast<uint8_t>(r4));
    r28 = (r28 + 1);
    r4 = 28;
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r28 & 255);
    r3_addr_52 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_52, static_cast<uint8_t>(r4));
    r28 = (r28 + 1);
    r4 = 34;
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r28 & 255);
    r3_addr_53 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_53, static_cast<uint8_t>(r4));
    r28 = (r28 + 1);
    goto loc_802B40A0;
}

loc_802B4044:
{
    // inline leaf 0x802FBA5C (7 guest instruction(s))
    r3 = 0x806B0000u;
    r3 = (r3 + -12348);
    r3 = MemoryInline::FlatRead8((r3 + 353));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_8 & 134217727);
    // end of inlined leaf 0x802FBA5C
}

loc_802B404C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802B4064;
    }
}

loc_802B4050:
{
    r4 = 5;
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r28 & 255);
    r3_addr_54 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_54, static_cast<uint8_t>(r4));
    r28 = (r28 + 1);
}

loc_802B4064:
{
    r4 = 4;
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r28 & 255);
    r3_addr_56 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_56, static_cast<uint8_t>(r4));
    r28 = (r28 + 1);
    r4 = 22;
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r28 & 255);
    r3_addr_57 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_57, static_cast<uint8_t>(r4));
    r28 = (r28 + 1);
    r4 = 26;
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r28 & 255);
    r3_addr_58 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_58, static_cast<uint8_t>(r4));
    r28 = (r28 + 1);
}

loc_802B40A0:
{
    r30 = 1;
    r4 = 255;
    r3 = MemoryInline::FlatRead32((r1 + 12));
    r0 = (r29 & 255);
    r3_addr_60 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_60, static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r28 & 255);
    r3_addr_61 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_61, static_cast<uint8_t>(r4));
}

loc_802B40C0:
{
}

loc_802B40C4:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_802B4124;
    }
}

loc_802B40C8:
{
}

loc_802B40CC:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_802B40DC;
    }
}

loc_802B40D0:
{
    r28 = MemoryInline::FlatRead32((r31 + 4));
    r29 = MemoryInline::FlatRead32(r31);
    goto loc_802B40F8;
}

loc_802B40DC:
{
    r28 = MemoryInline::FlatRead32(r31);
    r29 = MemoryInline::FlatRead32((r31 + 4));
    goto loc_802B40F8;
}

loc_802B40E8:
{
    r3 = r27;
    r5 = 1;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800E3154u>(ctx);
    r28 = (r28 + 1);
}

loc_802B40F8:
{
    r4 = MemoryInline::FlatRead8(r28);
}

loc_802B4100:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(255))) {
        goto loc_802B40E8;
    }
}

loc_802B4104:
{
    goto loc_802B4118;
}

loc_802B4108:
{
    r3 = r27;
    r5 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800E3154u>(ctx);
    r29 = (r29 + 1);
}

loc_802B4118:
{
    r4 = MemoryInline::FlatRead8(r29);
}

loc_802B4120:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(255))) {
        goto loc_802B4108;
    }
}

loc_802B4124:
{
    r11 = (r1 + 112);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 116));
    ctx->lr = r0;
    r1 = (r1 + 112);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->ctr = ctr;
    ctx->gpr[27] = r27_entry;
    ctx->gpr[28] = r28_entry;
    ctx->gpr[29] = r29_entry;
    ctx->gpr[30] = r30_entry;
    ctx->gpr[31] = r31_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802B32D4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802B32D4_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802B32D4 func_802B32D4 preserves=true fpr_mask=0x00000000
