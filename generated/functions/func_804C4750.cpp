#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804C5DF0(CpuContext* ctx);
extern "C" uint64_t func_804C5DF0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_804C4750(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_100 = 0;
    uint32_t r0_rot_101 = 0;
    uint32_t r0_rot_102 = 0;
    uint32_t r0_rot_103 = 0;
    uint32_t r0_rot_104 = 0;
    uint32_t r0_rot_105 = 0;
    uint32_t r0_rot_106 = 0;
    uint32_t r0_rot_107 = 0;
    uint32_t r0_rot_108 = 0;
    uint32_t r0_rot_109 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_110 = 0;
    uint32_t r0_rot_111 = 0;
    uint32_t r0_rot_112 = 0;
    uint32_t r0_rot_113 = 0;
    uint32_t r0_rot_114 = 0;
    uint32_t r0_rot_115 = 0;
    uint32_t r0_rot_116 = 0;
    uint32_t r0_rot_117 = 0;
    uint32_t r0_rot_118 = 0;
    uint32_t r0_rot_119 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_120 = 0;
    uint32_t r0_rot_121 = 0;
    uint32_t r0_rot_122 = 0;
    uint32_t r0_rot_123 = 0;
    uint32_t r0_rot_124 = 0;
    uint32_t r0_rot_125 = 0;
    uint32_t r0_rot_126 = 0;
    uint32_t r0_rot_127 = 0;
    uint32_t r0_rot_128 = 0;
    uint32_t r0_rot_129 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_130 = 0;
    uint32_t r0_rot_131 = 0;
    uint32_t r0_rot_132 = 0;
    uint32_t r0_rot_133 = 0;
    uint32_t r0_rot_134 = 0;
    uint32_t r0_rot_135 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_16 = 0;
    uint32_t r0_rot_17 = 0;
    uint32_t r0_rot_18 = 0;
    uint32_t r0_rot_19 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_20 = 0;
    uint32_t r0_rot_21 = 0;
    uint32_t r0_rot_22 = 0;
    uint32_t r0_rot_23 = 0;
    uint32_t r0_rot_24 = 0;
    uint32_t r0_rot_25 = 0;
    uint32_t r0_rot_26 = 0;
    uint32_t r0_rot_27 = 0;
    uint32_t r0_rot_28 = 0;
    uint32_t r0_rot_29 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_30 = 0;
    uint32_t r0_rot_31 = 0;
    uint32_t r0_rot_32 = 0;
    uint32_t r0_rot_33 = 0;
    uint32_t r0_rot_34 = 0;
    uint32_t r0_rot_35 = 0;
    uint32_t r0_rot_36 = 0;
    uint32_t r0_rot_37 = 0;
    uint32_t r0_rot_38 = 0;
    uint32_t r0_rot_39 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_40 = 0;
    uint32_t r0_rot_41 = 0;
    uint32_t r0_rot_42 = 0;
    uint32_t r0_rot_43 = 0;
    uint32_t r0_rot_44 = 0;
    uint32_t r0_rot_45 = 0;
    uint32_t r0_rot_46 = 0;
    uint32_t r0_rot_47 = 0;
    uint32_t r0_rot_48 = 0;
    uint32_t r0_rot_49 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_50 = 0;
    uint32_t r0_rot_51 = 0;
    uint32_t r0_rot_52 = 0;
    uint32_t r0_rot_53 = 0;
    uint32_t r0_rot_54 = 0;
    uint32_t r0_rot_55 = 0;
    uint32_t r0_rot_56 = 0;
    uint32_t r0_rot_57 = 0;
    uint32_t r0_rot_58 = 0;
    uint32_t r0_rot_59 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_60 = 0;
    uint32_t r0_rot_61 = 0;
    uint32_t r0_rot_62 = 0;
    uint32_t r0_rot_63 = 0;
    uint32_t r0_rot_64 = 0;
    uint32_t r0_rot_65 = 0;
    uint32_t r0_rot_66 = 0;
    uint32_t r0_rot_67 = 0;
    uint32_t r0_rot_68 = 0;
    uint32_t r0_rot_69 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_70 = 0;
    uint32_t r0_rot_71 = 0;
    uint32_t r0_rot_72 = 0;
    uint32_t r0_rot_73 = 0;
    uint32_t r0_rot_74 = 0;
    uint32_t r0_rot_75 = 0;
    uint32_t r0_rot_76 = 0;
    uint32_t r0_rot_77 = 0;
    uint32_t r0_rot_78 = 0;
    uint32_t r0_rot_79 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_80 = 0;
    uint32_t r0_rot_81 = 0;
    uint32_t r0_rot_82 = 0;
    uint32_t r0_rot_83 = 0;
    uint32_t r0_rot_84 = 0;
    uint32_t r0_rot_85 = 0;
    uint32_t r0_rot_86 = 0;
    uint32_t r0_rot_87 = 0;
    uint32_t r0_rot_88 = 0;
    uint32_t r0_rot_89 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r0_rot_90 = 0;
    uint32_t r0_rot_91 = 0;
    uint32_t r0_rot_92 = 0;
    uint32_t r0_rot_93 = 0;
    uint32_t r0_rot_94 = 0;
    uint32_t r0_rot_95 = 0;
    uint32_t r0_rot_96 = 0;
    uint32_t r0_rot_97 = 0;
    uint32_t r0_rot_98 = 0;
    uint32_t r0_rot_99 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_rot_5 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_10 = 0;
    uint32_t r7_rot_11 = 0;
    uint32_t r7_rot_12 = 0;
    uint32_t r7_rot_13 = 0;
    uint32_t r7_rot_14 = 0;
    uint32_t r7_rot_15 = 0;
    uint32_t r7_rot_16 = 0;
    uint32_t r7_rot_17 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint32_t r7_rot_5 = 0;
    uint32_t r7_rot_6 = 0;
    uint32_t r7_rot_7 = 0;
    uint32_t r7_rot_8 = 0;
    uint32_t r7_rot_9 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x804C4750u);
    goto loc_804C4750;

loc_804C4750:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r0 = MemoryInline::FlatRead32((r13 + -15228));
}

loc_804C476C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804C5DCC;
    }
}

loc_804C4770:
{
    r3 = 0x80620000u;
    r26 = 0;
    r27 = 0;
    r29 = 65536;
    r30 = (r3 + -18752);
    r28 = 0;
    r31 = 715849728;
    goto loc_804C5DC0;
}

loc_804C4790:
{
    r4 = MemoryInline::FlatRead32((r13 + -15232));
    r3 = 0;
    r0 = 0;
    r5 = (r4 + r27);
    r4_addr_2 = (r4 + r27);
    r4 = MemoryInline::FlatRead32(r4_addr_2);
}

loc_804C47A8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_804C5DB8;
    }
}

loc_804C47AC:
{
    r7 = MemoryInline::FlatRead32((r5 + 4));
    r6 = 0;
    r7 = (r7 & 536870912);
}

loc_804C47B8:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_804C47D4;
    }
}

loc_804C47BC:
{
    r7 = MemoryInline::FlatRead16((r5 + 62));
    r3 = 1;
    MemoryInline::FlatWrite16((r5 + 60), static_cast<uint16_t>(r7));
    r7 = MemoryInline::FlatRead32((r5 + 4));
    r7 = (r7 & -536870913);
    MemoryInline::FlatWrite32((r5 + 4), r7);
}

loc_804C47D4:
{
    r8 = MemoryInline::FlatRead32((r5 + 4));
    r7 = (r8 & 268435456);
}

loc_804C47DC:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_804C4838;
    }
}

loc_804C47E0:
{
    r3 = (r8 & 8);
}

loc_804C47E4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804C47F0;
    }
}

loc_804C47E8:
{
    MemoryInline::FlatWrite16((r5 + 62), static_cast<uint16_t>(r28));
    goto loc_804C4824;
}

loc_804C47F0:
{
    r3 = MemoryInline::FlatRead32((r5 + 8));
}

loc_804C47F8:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_804C4804;
    }
}

loc_804C47FC:
{
    r3 = 0;
    goto loc_804C4820;
}

loc_804C4804:
{
}

loc_804C4808:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_804C4814;
    }
}

loc_804C480C:
{
    r3 = (r29 + -156);
    goto loc_804C4820;
}

loc_804C4814:
{
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & -2);
    r3 = (r30 + r3);
    r3 = MemoryInline::FlatRead16((r3 + 1808));
}

loc_804C4820:
{
    MemoryInline::FlatWrite16((r5 + 62), static_cast<uint16_t>(r3));
}

loc_804C4824:
{
    r7 = MemoryInline::FlatRead32((r5 + 4));
    r3 = 1;
    r7 = (r7 & -268435457);
    r7 = (r7 | 536870912);
    MemoryInline::FlatWrite32((r5 + 4), r7);
}

loc_804C4838:
{
    r7 = MemoryInline::FlatRead32((r5 + 4));
    r7 = (r7 & -2147483648);
}

loc_804C4840:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_804C48B4;
    }
}

loc_804C4844:
{
    r7 = MemoryInline::FlatRead16((r5 + 66));
    r0 = 1;
    MemoryInline::FlatWrite16((r5 + 64), static_cast<uint16_t>(r7));
    r7 = MemoryInline::FlatRead16((r5 + 70));
    MemoryInline::FlatWrite16((r5 + 68), static_cast<uint16_t>(r7));
    r7 = MemoryInline::FlatRead16((r5 + 74));
    MemoryInline::FlatWrite16((r5 + 72), static_cast<uint16_t>(r7));
    r7 = MemoryInline::FlatRead16((r5 + 78));
    MemoryInline::FlatWrite16((r5 + 76), static_cast<uint16_t>(r7));
    r7 = MemoryInline::FlatRead16((r5 + 82));
    MemoryInline::FlatWrite16((r5 + 80), static_cast<uint16_t>(r7));
    r7 = MemoryInline::FlatRead16((r5 + 86));
    MemoryInline::FlatWrite16((r5 + 84), static_cast<uint16_t>(r7));
    r7 = MemoryInline::FlatRead16((r5 + 90));
    MemoryInline::FlatWrite16((r5 + 88), static_cast<uint16_t>(r7));
    r7 = MemoryInline::FlatRead16((r5 + 94));
    MemoryInline::FlatWrite16((r5 + 92), static_cast<uint16_t>(r7));
    r7 = MemoryInline::FlatRead16((r5 + 98));
    MemoryInline::FlatWrite16((r5 + 96), static_cast<uint16_t>(r7));
    r7 = MemoryInline::FlatRead16((r5 + 102));
    MemoryInline::FlatWrite16((r5 + 100), static_cast<uint16_t>(r7));
    r7 = MemoryInline::FlatRead16((r5 + 106));
    MemoryInline::FlatWrite16((r5 + 104), static_cast<uint16_t>(r7));
    r7 = MemoryInline::FlatRead16((r5 + 110));
    MemoryInline::FlatWrite16((r5 + 108), static_cast<uint16_t>(r7));
    r7 = MemoryInline::FlatRead32((r5 + 4));
    r7 = (r7 & 2147483647);
    MemoryInline::FlatWrite32((r5 + 4), r7);
}

loc_804C48B4:
{
    r7 = MemoryInline::FlatRead32((r5 + 4));
    r7 = (r7 & 1073741824);
}

loc_804C48BC:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_804C5A24;
    }
}

loc_804C48C0:
{
    r7 = MemoryInline::FlatRead32((r13 + -15220));
    r0 = (r7 + -1);
}

loc_804C48CC:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_804C4E68;
    }
}

loc_804C48D0:
{
}

loc_804C48D4:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_804C48E4;
    }
}

loc_804C48D8:
{
}

loc_804C48DC:
{
    if ((static_cast<uint32_t>(r7) == static_cast<uint32_t>(3))) {
        goto loc_804C545C;
    }
}

loc_804C48E0:
{
    goto loc_804C5A10;
}

loc_804C48E4:
{
    r7 = MemoryInline::FlatRead32((r5 + 32));
    r0 = MemoryInline::FlatRead32((r5 + 44));
    r0 = (r7 + r0);
}

loc_804C48F4:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(-904))) {
        goto loc_804C4900;
    }
}

loc_804C48F8:
{
    r0 = 0;
    goto loc_804C491C;
}

loc_804C4900:
{
}

loc_804C4904:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(60))) {
        goto loc_804C4910;
    }
}

loc_804C4908:
{
    r0 = (r29 + -156);
    goto loc_804C491C;
}

loc_804C4910:
{
    r0_rot_44 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_44 & -2);
    r7 = (r30 + r0);
    r0 = MemoryInline::FlatRead16((r7 + 1808));
}

loc_804C491C:
{
    MemoryInline::FlatWrite16((r5 + 66), static_cast<uint16_t>(r0));
    r7 = MemoryInline::FlatRead32((r5 + 32));
    r0 = MemoryInline::FlatRead32((r5 + 44));
    r0 = (r7 + r0);
}

loc_804C4930:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(-904))) {
        goto loc_804C493C;
    }
}

loc_804C4934:
{
    r0 = 0;
    goto loc_804C4958;
}

loc_804C493C:
{
}

loc_804C4940:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(60))) {
        goto loc_804C494C;
    }
}

loc_804C4944:
{
    r0 = (r29 + -156);
    goto loc_804C4958;
}

loc_804C494C:
{
    r0_rot_46 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_46 & -2);
    r7 = (r30 + r0);
    r0 = MemoryInline::FlatRead16((r7 + 1808));
}

loc_804C4958:
{
    MemoryInline::FlatWrite16((r5 + 70), static_cast<uint16_t>(r0));
    r7 = MemoryInline::FlatRead32((r5 + 32));
    r0 = MemoryInline::FlatRead32((r5 + 48));
    r7 = (r7 + r0);
    r7 = (r7 + -30);
}

loc_804C4970:
{
    if ((static_cast<int32_t>(r7) > static_cast<int32_t>(-904))) {
        goto loc_804C497C;
    }
}

loc_804C4974:
{
    r0 = 0;
    goto loc_804C4998;
}

loc_804C497C:
{
}

loc_804C4980:
{
    if ((static_cast<int32_t>(r7) < static_cast<int32_t>(60))) {
        goto loc_804C498C;
    }
}

loc_804C4984:
{
    r0 = (r29 + -156);
    goto loc_804C4998;
}

loc_804C498C:
{
    r0_rot_48 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r0 = (r0_rot_48 & -2);
    r7 = (r30 + r0);
    r0 = MemoryInline::FlatRead16((r7 + 1808));
}

loc_804C4998:
{
    MemoryInline::FlatWrite16((r5 + 74), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r5 + 4));
    r0 = (r0 & 1);
}

loc_804C49A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804C4A64;
    }
}

loc_804C49A8:
{
    r7 = MemoryInline::FlatRead32((r5 + 12));
    r0 = MemoryInline::FlatRead32((r5 + 44));
    r0 = (r7 + r0);
}

loc_804C49B8:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(-904))) {
        goto loc_804C49C4;
    }
}

loc_804C49BC:
{
    r0 = 0;
    goto loc_804C49E0;
}

loc_804C49C4:
{
}

loc_804C49C8:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(60))) {
        goto loc_804C49D4;
    }
}

loc_804C49CC:
{
    r0 = (r29 + -156);
    goto loc_804C49E0;
}

loc_804C49D4:
{
    r0_rot_50 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_50 & -2);
    r7 = (r30 + r0);
    r0 = MemoryInline::FlatRead16((r7 + 1808));
}

loc_804C49E0:
{
    MemoryInline::FlatWrite16((r5 + 78), static_cast<uint16_t>(r0));
    r7 = MemoryInline::FlatRead32((r5 + 12));
    r0 = MemoryInline::FlatRead32((r5 + 44));
    r0 = (r7 + r0);
}

loc_804C49F4:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(-904))) {
        goto loc_804C4A00;
    }
}

loc_804C49F8:
{
    r0 = 0;
    goto loc_804C4A1C;
}

loc_804C4A00:
{
}

loc_804C4A04:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(60))) {
        goto loc_804C4A10;
    }
}

loc_804C4A08:
{
    r0 = (r29 + -156);
    goto loc_804C4A1C;
}

loc_804C4A10:
{
    r0_rot_52 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_52 & -2);
    r7 = (r30 + r0);
    r0 = MemoryInline::FlatRead16((r7 + 1808));
}

loc_804C4A1C:
{
    MemoryInline::FlatWrite16((r5 + 82), static_cast<uint16_t>(r0));
    r7 = MemoryInline::FlatRead32((r5 + 12));
    r0 = MemoryInline::FlatRead32((r5 + 48));
    r7 = (r7 + r0);
    r7 = (r7 + -30);
}

loc_804C4A34:
{
    if ((static_cast<int32_t>(r7) > static_cast<int32_t>(-904))) {
        goto loc_804C4A40;
    }
}

loc_804C4A38:
{
    r0 = 0;
    goto loc_804C4A5C;
}

loc_804C4A40:
{
}

loc_804C4A44:
{
    if ((static_cast<int32_t>(r7) < static_cast<int32_t>(60))) {
        goto loc_804C4A50;
    }
}

loc_804C4A48:
{
    r0 = (r29 + -156);
    goto loc_804C4A5C;
}

loc_804C4A50:
{
    r0_rot_54 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r0 = (r0_rot_54 & -2);
    r7 = (r30 + r0);
    r0 = MemoryInline::FlatRead16((r7 + 1808));
}

loc_804C4A5C:
{
    MemoryInline::FlatWrite16((r5 + 86), static_cast<uint16_t>(r0));
    goto loc_804C4B34;
}

loc_804C4A64:
{
    r8 = MemoryInline::FlatRead32((r5 + 44));
    r0 = MemoryInline::FlatRead32((r5 + 32));
    r7 = MemoryInline::FlatRead32((r5 + 12));
    r0 = (r8 + r0);
    r0 = (r7 + r0);
}

loc_804C4A7C:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(-904))) {
        goto loc_804C4A88;
    }
}

loc_804C4A80:
{
    r0 = 0;
    goto loc_804C4AA4;
}

loc_804C4A88:
{
}

loc_804C4A8C:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(60))) {
        goto loc_804C4A98;
    }
}

loc_804C4A90:
{
    r0 = (r29 + -156);
    goto loc_804C4AA4;
}

loc_804C4A98:
{
    r0_rot_56 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_56 & -2);
    r7 = (r30 + r0);
    r0 = MemoryInline::FlatRead16((r7 + 1808));
}

loc_804C4AA4:
{
    MemoryInline::FlatWrite16((r5 + 78), static_cast<uint16_t>(r0));
    r8 = MemoryInline::FlatRead32((r5 + 44));
    r0 = MemoryInline::FlatRead32((r5 + 32));
    r7 = MemoryInline::FlatRead32((r5 + 12));
    r0 = (r8 + r0);
    r0 = (r7 + r0);
}

loc_804C4AC0:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(-904))) {
        goto loc_804C4ACC;
    }
}

loc_804C4AC4:
{
    r0 = 0;
    goto loc_804C4AE8;
}

loc_804C4ACC:
{
}

loc_804C4AD0:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(60))) {
        goto loc_804C4ADC;
    }
}

loc_804C4AD4:
{
    r0 = (r29 + -156);
    goto loc_804C4AE8;
}

loc_804C4ADC:
{
    r0_rot_58 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_58 & -2);
    r7 = (r30 + r0);
    r0 = MemoryInline::FlatRead16((r7 + 1808));
}

loc_804C4AE8:
{
    MemoryInline::FlatWrite16((r5 + 82), static_cast<uint16_t>(r0));
    r8 = MemoryInline::FlatRead32((r5 + 32));
    r0 = MemoryInline::FlatRead32((r5 + 12));
    r7 = MemoryInline::FlatRead32((r5 + 48));
    r0 = (r8 + r0);
    r7 = (r0 + r7);
    r7 = (r7 + -30);
}

loc_804C4B08:
{
    if ((static_cast<int32_t>(r7) > static_cast<int32_t>(-904))) {
        goto loc_804C4B14;
    }
}

loc_804C4B0C:
{
    r0 = 0;
    goto loc_804C4B30;
}

loc_804C4B14:
{
}

loc_804C4B18:
{
    if ((static_cast<int32_t>(r7) < static_cast<int32_t>(60))) {
        goto loc_804C4B24;
    }
}

loc_804C4B1C:
{
    r0 = (r29 + -156);
    goto loc_804C4B30;
}

loc_804C4B24:
{
    r0_rot_60 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r0 = (r0_rot_60 & -2);
    r7 = (r30 + r0);
    r0 = MemoryInline::FlatRead16((r7 + 1808));
}

loc_804C4B30:
{
    MemoryInline::FlatWrite16((r5 + 86), static_cast<uint16_t>(r0));
}

loc_804C4B34:
{
    r0 = MemoryInline::FlatRead32((r5 + 4));
    r0 = (r0 & 2);
}

loc_804C4B3C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804C4BFC;
    }
}

loc_804C4B40:
{
    r7 = MemoryInline::FlatRead32((r5 + 16));
    r0 = MemoryInline::FlatRead32((r5 + 44));
    r0 = (r7 + r0);
}

loc_804C4B50:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(-904))) {
        goto loc_804C4B5C;
    }
}

loc_804C4B54:
{
    r0 = 0;
    goto loc_804C4B78;
}

loc_804C4B5C:
{
}

loc_804C4B60:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(60))) {
        goto loc_804C4B6C;
    }
}

loc_804C4B64:
{
    r0 = (r29 + -156);
    goto loc_804C4B78;
}

loc_804C4B6C:
{
    r0_rot_63 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_63 & -2);
    r7 = (r30 + r0);
    r0 = MemoryInline::FlatRead16((r7 + 1808));
}

loc_804C4B78:
{
    MemoryInline::FlatWrite16((r5 + 90), static_cast<uint16_t>(r0));
    r7 = MemoryInline::FlatRead32((r5 + 16));
    r0 = MemoryInline::FlatRead32((r5 + 44));
    r0 = (r7 + r0);
}

loc_804C4B8C:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(-904))) {
        goto loc_804C4B98;
    }
}

loc_804C4B90:
{
    r0 = 0;
    goto loc_804C4BB4;
}

loc_804C4B98:
{
}

loc_804C4B9C:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(60))) {
        goto loc_804C4BA8;
    }
}

loc_804C4BA0:
{
    r0 = (r29 + -156);
    goto loc_804C4BB4;
}

loc_804C4BA8:
{
    r0_rot_65 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_65 & -2);
    r7 = (r30 + r0);
    r0 = MemoryInline::FlatRead16((r7 + 1808));
}

loc_804C4BB4:
{
    MemoryInline::FlatWrite16((r5 + 94), static_cast<uint16_t>(r0));
    r7 = MemoryInline::FlatRead32((r5 + 16));
    r0 = MemoryInline::FlatRead32((r5 + 48));
    r7 = (r7 + r0);
    r7 = (r7 + -30);
}

loc_804C4BCC:
{
    if ((static_cast<int32_t>(r7) > static_cast<int32_t>(-904))) {
        goto loc_804C4BD8;
    }
}

loc_804C4BD0:
{
    r0 = 0;
    goto loc_804C4BF4;
}

loc_804C4BD8:
{
}

loc_804C4BDC:
{
    if ((static_cast<int32_t>(r7) < static_cast<int32_t>(60))) {
        goto loc_804C4BE8;
    }
}

loc_804C4BE0:
{
    r0 = (r29 + -156);
    goto loc_804C4BF4;
}

loc_804C4BE8:
{
    r0_rot_67 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r0 = (r0_rot_67 & -2);
    r7 = (r30 + r0);
    r0 = MemoryInline::FlatRead16((r7 + 1808));
}

loc_804C4BF4:
{
    MemoryInline::FlatWrite16((r5 + 98), static_cast<uint16_t>(r0));
    goto loc_804C4CCC;
}

loc_804C4BFC:
{
    r8 = MemoryInline::FlatRead32((r5 + 44));
    r0 = MemoryInline::FlatRead32((r5 + 32));
    r7 = MemoryInline::FlatRead32((r5 + 16));
    r0 = (r8 + r0);
    r0 = (r7 + r0);
}

loc_804C4C14:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(-904))) {
        goto loc_804C4C20;
    }
}

loc_804C4C18:
{
    r0 = 0;
    goto loc_804C4C3C;
}

loc_804C4C20:
{
}

loc_804C4C24:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(60))) {
        goto loc_804C4C30;
    }
}

loc_804C4C28:
{
    r0 = (r29 + -156);
    goto loc_804C4C3C;
}

loc_804C4C30:
{
    r0_rot_69 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_69 & -2);
    r7 = (r30 + r0);
    r0 = MemoryInline::FlatRead16((r7 + 1808));
}

loc_804C4C3C:
{
    MemoryInline::FlatWrite16((r5 + 90), static_cast<uint16_t>(r0));
    r8 = MemoryInline::FlatRead32((r5 + 44));
    r0 = MemoryInline::FlatRead32((r5 + 32));
    r7 = MemoryInline::FlatRead32((r5 + 16));
    r0 = (r8 + r0);
    r0 = (r7 + r0);
}

loc_804C4C58:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(-904))) {
        goto loc_804C4C64;
    }
}

loc_804C4C5C:
{
    r0 = 0;
    goto loc_804C4C80;
}

loc_804C4C64:
{
}

loc_804C4C68:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(60))) {
        goto loc_804C4C74;
    }
}

loc_804C4C6C:
{
    r0 = (r29 + -156);
    goto loc_804C4C80;
}

loc_804C4C74:
{
    r0_rot_71 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_71 & -2);
    r7 = (r30 + r0);
    r0 = MemoryInline::FlatRead16((r7 + 1808));
}

loc_804C4C80:
{
    MemoryInline::FlatWrite16((r5 + 94), static_cast<uint16_t>(r0));
    r8 = MemoryInline::FlatRead32((r5 + 32));
    r0 = MemoryInline::FlatRead32((r5 + 16));
    r7 = MemoryInline::FlatRead32((r5 + 48));
    r0 = (r8 + r0);
    r7 = (r0 + r7);
    r7 = (r7 + -30);
}

loc_804C4CA0:
{
    if ((static_cast<int32_t>(r7) > static_cast<int32_t>(-904))) {
        goto loc_804C4CAC;
    }
}

loc_804C4CA4:
{
    r0 = 0;
    goto loc_804C4CC8;
}

loc_804C4CAC:
{
}

loc_804C4CB0:
{
    if ((static_cast<int32_t>(r7) < static_cast<int32_t>(60))) {
        goto loc_804C4CBC;
    }
}

loc_804C4CB4:
{
    r0 = (r29 + -156);
    goto loc_804C4CC8;
}

loc_804C4CBC:
{
    r0_rot_73 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r0 = (r0_rot_73 & -2);
    r7 = (r30 + r0);
    r0 = MemoryInline::FlatRead16((r7 + 1808));
}

loc_804C4CC8:
{
    MemoryInline::FlatWrite16((r5 + 98), static_cast<uint16_t>(r0));
}

loc_804C4CCC:
{
    r0 = MemoryInline::FlatRead32((r5 + 4));
    r0 = (r0 & 4);
}

loc_804C4CD4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804C4D94;
    }
}

loc_804C4CD8:
{
    r7 = MemoryInline::FlatRead32((r5 + 20));
    r0 = MemoryInline::FlatRead32((r5 + 44));
    r0 = (r7 + r0);
}

loc_804C4CE8:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(-904))) {
        goto loc_804C4CF4;
    }
}

loc_804C4CEC:
{
    r0 = 0;
    goto loc_804C4D10;
}

loc_804C4CF4:
{
}

loc_804C4CF8:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(60))) {
        goto loc_804C4D04;
    }
}

loc_804C4CFC:
{
    r0 = (r29 + -156);
    goto loc_804C4D10;
}

loc_804C4D04:
{
    r0_rot_76 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_76 & -2);
    r7 = (r30 + r0);
    r0 = MemoryInline::FlatRead16((r7 + 1808));
}

loc_804C4D10:
{
    MemoryInline::FlatWrite16((r5 + 102), static_cast<uint16_t>(r0));
    r7 = MemoryInline::FlatRead32((r5 + 20));
    r0 = MemoryInline::FlatRead32((r5 + 44));
    r0 = (r7 + r0);
}

loc_804C4D24:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(-904))) {
        goto loc_804C4D30;
    }
}

loc_804C4D28:
{
    r0 = 0;
    goto loc_804C4D4C;
}

loc_804C4D30:
{
}

loc_804C4D34:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(60))) {
        goto loc_804C4D40;
    }
}

loc_804C4D38:
{
    r0 = (r29 + -156);
    goto loc_804C4D4C;
}

loc_804C4D40:
{
    r0_rot_78 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_78 & -2);
    r7 = (r30 + r0);
    r0 = MemoryInline::FlatRead16((r7 + 1808));
}

loc_804C4D4C:
{
    MemoryInline::FlatWrite16((r5 + 106), static_cast<uint16_t>(r0));
    r7 = MemoryInline::FlatRead32((r5 + 20));
    r0 = MemoryInline::FlatRead32((r5 + 48));
    r7 = (r7 + r0);
    r7 = (r7 + -30);
}

loc_804C4D64:
{
    if ((static_cast<int32_t>(r7) > static_cast<int32_t>(-904))) {
        goto loc_804C4D70;
    }
}

loc_804C4D68:
{
    r0 = 0;
    goto loc_804C4D8C;
}

loc_804C4D70:
{
}

loc_804C4D74:
{
    if ((static_cast<int32_t>(r7) < static_cast<int32_t>(60))) {
        goto loc_804C4D80;
    }
}

loc_804C4D78:
{
    r0 = (r29 + -156);
    goto loc_804C4D8C;
}

loc_804C4D80:
{
    r0_rot_80 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r0 = (r0_rot_80 & -2);
    r7 = (r30 + r0);
    r0 = MemoryInline::FlatRead16((r7 + 1808));
}

loc_804C4D8C:
{
    MemoryInline::FlatWrite16((r5 + 110), static_cast<uint16_t>(r0));
    goto loc_804C5A10;
}

loc_804C4D94:
{
    r8 = MemoryInline::FlatRead32((r5 + 44));
    r0 = MemoryInline::FlatRead32((r5 + 32));
    r7 = MemoryInline::FlatRead32((r5 + 20));
    r0 = (r8 + r0);
    r0 = (r7 + r0);
}

loc_804C4DAC:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(-904))) {
        goto loc_804C4DB8;
    }
}

loc_804C4DB0:
{
    r0 = 0;
    goto loc_804C4DD4;
}

loc_804C4DB8:
{
}

loc_804C4DBC:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(60))) {
        goto loc_804C4DC8;
    }
}

loc_804C4DC0:
{
    r0 = (r29 + -156);
    goto loc_804C4DD4;
}

loc_804C4DC8:
{
    r0_rot_82 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_82 & -2);
    r7 = (r30 + r0);
    r0 = MemoryInline::FlatRead16((r7 + 1808));
}

loc_804C4DD4:
{
    MemoryInline::FlatWrite16((r5 + 102), static_cast<uint16_t>(r0));
    r8 = MemoryInline::FlatRead32((r5 + 44));
    r0 = MemoryInline::FlatRead32((r5 + 32));
    r7 = MemoryInline::FlatRead32((r5 + 20));
    r0 = (r8 + r0);
    r0 = (r7 + r0);
}

loc_804C4DF0:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(-904))) {
        goto loc_804C4DFC;
    }
}

loc_804C4DF4:
{
    r0 = 0;
    goto loc_804C4E18;
}

loc_804C4DFC:
{
}

loc_804C4E00:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(60))) {
        goto loc_804C4E0C;
    }
}

loc_804C4E04:
{
    r0 = (r29 + -156);
    goto loc_804C4E18;
}

loc_804C4E0C:
{
    r0_rot_84 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_84 & -2);
    r7 = (r30 + r0);
    r0 = MemoryInline::FlatRead16((r7 + 1808));
}

loc_804C4E18:
{
    MemoryInline::FlatWrite16((r5 + 106), static_cast<uint16_t>(r0));
    r8 = MemoryInline::FlatRead32((r5 + 32));
    r0 = MemoryInline::FlatRead32((r5 + 20));
    r7 = MemoryInline::FlatRead32((r5 + 48));
    r0 = (r8 + r0);
    r7 = (r0 + r7);
    r7 = (r7 + -30);
}

loc_804C4E38:
{
    if ((static_cast<int32_t>(r7) > static_cast<int32_t>(-904))) {
        goto loc_804C4E44;
    }
}

loc_804C4E3C:
{
    r0 = 0;
    goto loc_804C4E60;
}

loc_804C4E44:
{
}

loc_804C4E48:
{
    if ((static_cast<int32_t>(r7) < static_cast<int32_t>(60))) {
        goto loc_804C4E54;
    }
}

loc_804C4E4C:
{
    r0 = (r29 + -156);
    goto loc_804C4E60;
}

loc_804C4E54:
{
    r0_rot_86 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r0 = (r0_rot_86 & -2);
    r7 = (r30 + r0);
    r0 = MemoryInline::FlatRead16((r7 + 1808));
}

loc_804C4E60:
{
    MemoryInline::FlatWrite16((r5 + 110), static_cast<uint16_t>(r0));
    goto loc_804C5A10;
}

loc_804C4E68:
{
    r8 = MemoryInline::FlatRead32((r5 + 44));
    r0 = MemoryInline::FlatRead32((r5 + 32));
    r7 = MemoryInline::FlatRead32((r5 + 36));
    r0 = (r8 + r0);
    r0 = (r7 + r0);
}

loc_804C4E80:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(-904))) {
        goto loc_804C4E8C;
    }
}

loc_804C4E84:
{
    r0 = 0;
    goto loc_804C4EA8;
}

loc_804C4E8C:
{
}

loc_804C4E90:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(60))) {
        goto loc_804C4E9C;
    }
}

loc_804C4E94:
{
    r0 = (r29 + -156);
    goto loc_804C4EA8;
}

loc_804C4E9C:
{
    r0_rot_88 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_88 & -2);
    r7 = (r30 + r0);
    r0 = MemoryInline::FlatRead16((r7 + 1808));
}

loc_804C4EA8:
{
    MemoryInline::FlatWrite16((r5 + 66), static_cast<uint16_t>(r0));
    r8 = MemoryInline::FlatRead32((r5 + 44));
    r0 = MemoryInline::FlatRead32((r5 + 32));
    r7 = MemoryInline::FlatRead32((r5 + 40));
    r0 = (r8 + r0);
    r0 = (r7 + r0);
}

loc_804C4EC4:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(-904))) {
        goto loc_804C4ED0;
    }
}

loc_804C4EC8:
{
    r0 = 0;
    goto loc_804C4EEC;
}

loc_804C4ED0:
{
}

loc_804C4ED4:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(60))) {
        goto loc_804C4EE0;
    }
}

loc_804C4ED8:
{
    r0 = (r29 + -156);
    goto loc_804C4EEC;
}

loc_804C4EE0:
{
    r0_rot_90 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_90 & -2);
    r7 = (r30 + r0);
    r0 = MemoryInline::FlatRead16((r7 + 1808));
}

loc_804C4EEC:
{
    MemoryInline::FlatWrite16((r5 + 70), static_cast<uint16_t>(r0));
    r7 = MemoryInline::FlatRead32((r5 + 32));
    r0 = MemoryInline::FlatRead32((r5 + 48));
    r7 = (r7 + r0);
    r7 = (r7 + -30);
}

loc_804C4F04:
{
    if ((static_cast<int32_t>(r7) > static_cast<int32_t>(-904))) {
        goto loc_804C4F10;
    }
}

loc_804C4F08:
{
    r0 = 0;
    goto loc_804C4F2C;
}

loc_804C4F10:
{
}

loc_804C4F14:
{
    if ((static_cast<int32_t>(r7) < static_cast<int32_t>(60))) {
        goto loc_804C4F20;
    }
}

loc_804C4F18:
{
    r0 = (r29 + -156);
    goto loc_804C4F2C;
}

loc_804C4F20:
{
    r0_rot_92 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r0 = (r0_rot_92 & -2);
    r7 = (r30 + r0);
    r0 = MemoryInline::FlatRead16((r7 + 1808));
}

loc_804C4F2C:
{
    MemoryInline::FlatWrite16((r5 + 74), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r5 + 4));
    r0 = (r0 & 1);
}

loc_804C4F38:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804C5008;
    }
}

loc_804C4F3C:
{
    r8 = MemoryInline::FlatRead32((r5 + 44));
    r0 = MemoryInline::FlatRead32((r5 + 12));
    r7 = MemoryInline::FlatRead32((r5 + 36));
    r0 = (r8 + r0);
    r0 = (r7 + r0);
}

loc_804C4F54:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(-904))) {
        goto loc_804C4F60;
    }
}

loc_804C4F58:
{
    r0 = 0;
    goto loc_804C4F7C;
}

loc_804C4F60:
{
}

loc_804C4F64:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(60))) {
        goto loc_804C4F70;
    }
}

loc_804C4F68:
{
    r0 = (r29 + -156);
    goto loc_804C4F7C;
}

loc_804C4F70:
{
    r0_rot_94 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_94 & -2);
    r7 = (r30 + r0);
    r0 = MemoryInline::FlatRead16((r7 + 1808));
}

loc_804C4F7C:
{
    MemoryInline::FlatWrite16((r5 + 78), static_cast<uint16_t>(r0));
    r8 = MemoryInline::FlatRead32((r5 + 44));
    r0 = MemoryInline::FlatRead32((r5 + 12));
    r7 = MemoryInline::FlatRead32((r5 + 40));
    r0 = (r8 + r0);
    r0 = (r7 + r0);
}

loc_804C4F98:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(-904))) {
        goto loc_804C4FA4;
    }
}

loc_804C4F9C:
{
    r0 = 0;
    goto loc_804C4FC0;
}

loc_804C4FA4:
{
}

loc_804C4FA8:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(60))) {
        goto loc_804C4FB4;
    }
}

loc_804C4FAC:
{
    r0 = (r29 + -156);
    goto loc_804C4FC0;
}

loc_804C4FB4:
{
    r0_rot_96 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_96 & -2);
    r7 = (r30 + r0);
    r0 = MemoryInline::FlatRead16((r7 + 1808));
}

loc_804C4FC0:
{
    MemoryInline::FlatWrite16((r5 + 82), static_cast<uint16_t>(r0));
    r7 = MemoryInline::FlatRead32((r5 + 12));
    r0 = MemoryInline::FlatRead32((r5 + 48));
    r7 = (r7 + r0);
    r7 = (r7 + -30);
}

loc_804C4FD8:
{
    if ((static_cast<int32_t>(r7) > static_cast<int32_t>(-904))) {
        goto loc_804C4FE4;
    }
}

loc_804C4FDC:
{
    r0 = 0;
    goto loc_804C5000;
}

loc_804C4FE4:
{
}

loc_804C4FE8:
{
    if ((static_cast<int32_t>(r7) < static_cast<int32_t>(60))) {
        goto loc_804C4FF4;
    }
}

loc_804C4FEC:
{
    r0 = (r29 + -156);
    goto loc_804C5000;
}

loc_804C4FF4:
{
    r0_rot_98 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r0 = (r0_rot_98 & -2);
    r7 = (r30 + r0);
    r0 = MemoryInline::FlatRead16((r7 + 1808));
}

loc_804C5000:
{
    MemoryInline::FlatWrite16((r5 + 86), static_cast<uint16_t>(r0));
    goto loc_804C50E8;
}

loc_804C5008:
{
    r9 = MemoryInline::FlatRead32((r5 + 44));
    r7 = MemoryInline::FlatRead32((r5 + 36));
    r8 = MemoryInline::FlatRead32((r5 + 32));
    r0 = MemoryInline::FlatRead32((r5 + 12));
    r7 = (r9 + r7);
    r0 = (r8 + r0);
    r0 = (r7 + r0);
}

loc_804C5028:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(-904))) {
        goto loc_804C5034;
    }
}

loc_804C502C:
{
    r0 = 0;
    goto loc_804C5050;
}

loc_804C5034:
{
}

loc_804C5038:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(60))) {
        goto loc_804C5044;
    }
}

loc_804C503C:
{
    r0 = (r29 + -156);
    goto loc_804C5050;
}

loc_804C5044:
{
    r0_rot_100 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_100 & -2);
    r7 = (r30 + r0);
    r0 = MemoryInline::FlatRead16((r7 + 1808));
}

loc_804C5050:
{
    MemoryInline::FlatWrite16((r5 + 78), static_cast<uint16_t>(r0));
    r9 = MemoryInline::FlatRead32((r5 + 44));
    r7 = MemoryInline::FlatRead32((r5 + 40));
    r8 = MemoryInline::FlatRead32((r5 + 32));
    r0 = MemoryInline::FlatRead32((r5 + 12));
    r7 = (r9 + r7);
    r0 = (r8 + r0);
    r0 = (r7 + r0);
}

loc_804C5074:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(-904))) {
        goto loc_804C5080;
    }
}

loc_804C5078:
{
    r0 = 0;
    goto loc_804C509C;
}

loc_804C5080:
{
}

loc_804C5084:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(60))) {
        goto loc_804C5090;
    }
}

loc_804C5088:
{
    r0 = (r29 + -156);
    goto loc_804C509C;
}

loc_804C5090:
{
    r0_rot_102 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_102 & -2);
    r7 = (r30 + r0);
    r0 = MemoryInline::FlatRead16((r7 + 1808));
}

loc_804C509C:
{
    MemoryInline::FlatWrite16((r5 + 82), static_cast<uint16_t>(r0));
    r8 = MemoryInline::FlatRead32((r5 + 32));
    r0 = MemoryInline::FlatRead32((r5 + 12));
    r7 = MemoryInline::FlatRead32((r5 + 48));
    r0 = (r8 + r0);
    r7 = (r0 + r7);
    r7 = (r7 + -30);
}

loc_804C50BC:
{
    if ((static_cast<int32_t>(r7) > static_cast<int32_t>(-904))) {
        goto loc_804C50C8;
    }
}

loc_804C50C0:
{
    r0 = 0;
    goto loc_804C50E4;
}

loc_804C50C8:
{
}

loc_804C50CC:
{
    if ((static_cast<int32_t>(r7) < static_cast<int32_t>(60))) {
        goto loc_804C50D8;
    }
}

loc_804C50D0:
{
    r0 = (r29 + -156);
    goto loc_804C50E4;
}

loc_804C50D8:
{
    r0_rot_104 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r0 = (r0_rot_104 & -2);
    r7 = (r30 + r0);
    r0 = MemoryInline::FlatRead16((r7 + 1808));
}

loc_804C50E4:
{
    MemoryInline::FlatWrite16((r5 + 86), static_cast<uint16_t>(r0));
}

loc_804C50E8:
{
    r0 = MemoryInline::FlatRead32((r5 + 4));
    r0 = (r0 & 2);
}

loc_804C50F0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804C51C0;
    }
}

loc_804C50F4:
{
    r8 = MemoryInline::FlatRead32((r5 + 44));
    r0 = MemoryInline::FlatRead32((r5 + 16));
    r7 = MemoryInline::FlatRead32((r5 + 36));
    r0 = (r8 + r0);
    r0 = (r7 + r0);
}

loc_804C510C:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(-904))) {
        goto loc_804C5118;
    }
}

loc_804C5110:
{
    r0 = 0;
    goto loc_804C5134;
}

loc_804C5118:
{
}

loc_804C511C:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(60))) {
        goto loc_804C5128;
    }
}

loc_804C5120:
{
    r0 = (r29 + -156);
    goto loc_804C5134;
}

loc_804C5128:
{
    r0_rot_107 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_107 & -2);
    r7 = (r30 + r0);
    r0 = MemoryInline::FlatRead16((r7 + 1808));
}

loc_804C5134:
{
    MemoryInline::FlatWrite16((r5 + 90), static_cast<uint16_t>(r0));
    r8 = MemoryInline::FlatRead32((r5 + 44));
    r0 = MemoryInline::FlatRead32((r5 + 16));
    r7 = MemoryInline::FlatRead32((r5 + 40));
    r0 = (r8 + r0);
    r0 = (r7 + r0);
}

loc_804C5150:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(-904))) {
        goto loc_804C515C;
    }
}

loc_804C5154:
{
    r0 = 0;
    goto loc_804C5178;
}

loc_804C515C:
{
}

loc_804C5160:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(60))) {
        goto loc_804C516C;
    }
}

loc_804C5164:
{
    r0 = (r29 + -156);
    goto loc_804C5178;
}

loc_804C516C:
{
    r0_rot_109 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_109 & -2);
    r7 = (r30 + r0);
    r0 = MemoryInline::FlatRead16((r7 + 1808));
}

loc_804C5178:
{
    MemoryInline::FlatWrite16((r5 + 94), static_cast<uint16_t>(r0));
    r7 = MemoryInline::FlatRead32((r5 + 16));
    r0 = MemoryInline::FlatRead32((r5 + 48));
    r7 = (r7 + r0);
    r7 = (r7 + -30);
}

loc_804C5190:
{
    if ((static_cast<int32_t>(r7) > static_cast<int32_t>(-904))) {
        goto loc_804C519C;
    }
}

loc_804C5194:
{
    r0 = 0;
    goto loc_804C51B8;
}

loc_804C519C:
{
}

loc_804C51A0:
{
    if ((static_cast<int32_t>(r7) < static_cast<int32_t>(60))) {
        goto loc_804C51AC;
    }
}

loc_804C51A4:
{
    r0 = (r29 + -156);
    goto loc_804C51B8;
}

loc_804C51AC:
{
    r0_rot_111 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r0 = (r0_rot_111 & -2);
    r7 = (r30 + r0);
    r0 = MemoryInline::FlatRead16((r7 + 1808));
}

loc_804C51B8:
{
    MemoryInline::FlatWrite16((r5 + 98), static_cast<uint16_t>(r0));
    goto loc_804C52A0;
}

loc_804C51C0:
{
    r9 = MemoryInline::FlatRead32((r5 + 44));
    r7 = MemoryInline::FlatRead32((r5 + 36));
    r8 = MemoryInline::FlatRead32((r5 + 32));
    r0 = MemoryInline::FlatRead32((r5 + 16));
    r7 = (r9 + r7);
    r0 = (r8 + r0);
    r0 = (r7 + r0);
}

loc_804C51E0:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(-904))) {
        goto loc_804C51EC;
    }
}

loc_804C51E4:
{
    r0 = 0;
    goto loc_804C5208;
}

loc_804C51EC:
{
}

loc_804C51F0:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(60))) {
        goto loc_804C51FC;
    }
}

loc_804C51F4:
{
    r0 = (r29 + -156);
    goto loc_804C5208;
}

loc_804C51FC:
{
    r0_rot_113 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_113 & -2);
    r7 = (r30 + r0);
    r0 = MemoryInline::FlatRead16((r7 + 1808));
}

loc_804C5208:
{
    MemoryInline::FlatWrite16((r5 + 90), static_cast<uint16_t>(r0));
    r9 = MemoryInline::FlatRead32((r5 + 44));
    r7 = MemoryInline::FlatRead32((r5 + 40));
    r8 = MemoryInline::FlatRead32((r5 + 32));
    r0 = MemoryInline::FlatRead32((r5 + 16));
    r7 = (r9 + r7);
    r0 = (r8 + r0);
    r0 = (r7 + r0);
}

loc_804C522C:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(-904))) {
        goto loc_804C5238;
    }
}

loc_804C5230:
{
    r0 = 0;
    goto loc_804C5254;
}

loc_804C5238:
{
}

loc_804C523C:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(60))) {
        goto loc_804C5248;
    }
}

loc_804C5240:
{
    r0 = (r29 + -156);
    goto loc_804C5254;
}

loc_804C5248:
{
    r0_rot_115 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_115 & -2);
    r7 = (r30 + r0);
    r0 = MemoryInline::FlatRead16((r7 + 1808));
}

loc_804C5254:
{
    MemoryInline::FlatWrite16((r5 + 94), static_cast<uint16_t>(r0));
    r8 = MemoryInline::FlatRead32((r5 + 32));
    r0 = MemoryInline::FlatRead32((r5 + 16));
    r7 = MemoryInline::FlatRead32((r5 + 48));
    r0 = (r8 + r0);
    r7 = (r0 + r7);
    r7 = (r7 + -30);
}

loc_804C5274:
{
    if ((static_cast<int32_t>(r7) > static_cast<int32_t>(-904))) {
        goto loc_804C5280;
    }
}

loc_804C5278:
{
    r0 = 0;
    goto loc_804C529C;
}

loc_804C5280:
{
}

loc_804C5284:
{
    if ((static_cast<int32_t>(r7) < static_cast<int32_t>(60))) {
        goto loc_804C5290;
    }
}

loc_804C5288:
{
    r0 = (r29 + -156);
    goto loc_804C529C;
}

loc_804C5290:
{
    r0_rot_117 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r0 = (r0_rot_117 & -2);
    r7 = (r30 + r0);
    r0 = MemoryInline::FlatRead16((r7 + 1808));
}

loc_804C529C:
{
    MemoryInline::FlatWrite16((r5 + 98), static_cast<uint16_t>(r0));
}

loc_804C52A0:
{
    r0 = MemoryInline::FlatRead32((r5 + 4));
    r0 = (r0 & 4);
}

loc_804C52A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804C5378;
    }
}

loc_804C52AC:
{
    r8 = MemoryInline::FlatRead32((r5 + 44));
    r0 = MemoryInline::FlatRead32((r5 + 20));
    r7 = MemoryInline::FlatRead32((r5 + 36));
    r0 = (r8 + r0);
    r0 = (r7 + r0);
}

loc_804C52C4:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(-904))) {
        goto loc_804C52D0;
    }
}

loc_804C52C8:
{
    r0 = 0;
    goto loc_804C52EC;
}

loc_804C52D0:
{
}

loc_804C52D4:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(60))) {
        goto loc_804C52E0;
    }
}

loc_804C52D8:
{
    r0 = (r29 + -156);
    goto loc_804C52EC;
}

loc_804C52E0:
{
    r0_rot_120 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_120 & -2);
    r7 = (r30 + r0);
    r0 = MemoryInline::FlatRead16((r7 + 1808));
}

loc_804C52EC:
{
    MemoryInline::FlatWrite16((r5 + 102), static_cast<uint16_t>(r0));
    r8 = MemoryInline::FlatRead32((r5 + 44));
    r0 = MemoryInline::FlatRead32((r5 + 20));
    r7 = MemoryInline::FlatRead32((r5 + 40));
    r0 = (r8 + r0);
    r0 = (r7 + r0);
}

loc_804C5308:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(-904))) {
        goto loc_804C5314;
    }
}

loc_804C530C:
{
    r0 = 0;
    goto loc_804C5330;
}

loc_804C5314:
{
}

loc_804C5318:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(60))) {
        goto loc_804C5324;
    }
}

loc_804C531C:
{
    r0 = (r29 + -156);
    goto loc_804C5330;
}

loc_804C5324:
{
    r0_rot_122 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_122 & -2);
    r7 = (r30 + r0);
    r0 = MemoryInline::FlatRead16((r7 + 1808));
}

loc_804C5330:
{
    MemoryInline::FlatWrite16((r5 + 106), static_cast<uint16_t>(r0));
    r7 = MemoryInline::FlatRead32((r5 + 20));
    r0 = MemoryInline::FlatRead32((r5 + 48));
    r7 = (r7 + r0);
    r7 = (r7 + -30);
}

loc_804C5348:
{
    if ((static_cast<int32_t>(r7) > static_cast<int32_t>(-904))) {
        goto loc_804C5354;
    }
}

loc_804C534C:
{
    r0 = 0;
    goto loc_804C5370;
}

loc_804C5354:
{
}

loc_804C5358:
{
    if ((static_cast<int32_t>(r7) < static_cast<int32_t>(60))) {
        goto loc_804C5364;
    }
}

loc_804C535C:
{
    r0 = (r29 + -156);
    goto loc_804C5370;
}

loc_804C5364:
{
    r0_rot_124 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r0 = (r0_rot_124 & -2);
    r7 = (r30 + r0);
    r0 = MemoryInline::FlatRead16((r7 + 1808));
}

loc_804C5370:
{
    MemoryInline::FlatWrite16((r5 + 110), static_cast<uint16_t>(r0));
    goto loc_804C5A10;
}

loc_804C5378:
{
    r9 = MemoryInline::FlatRead32((r5 + 44));
    r7 = MemoryInline::FlatRead32((r5 + 36));
    r8 = MemoryInline::FlatRead32((r5 + 32));
    r0 = MemoryInline::FlatRead32((r5 + 20));
    r7 = (r9 + r7);
    r0 = (r8 + r0);
    r0 = (r7 + r0);
}

loc_804C5398:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(-904))) {
        goto loc_804C53A4;
    }
}

loc_804C539C:
{
    r0 = 0;
    goto loc_804C53C0;
}

loc_804C53A4:
{
}

loc_804C53A8:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(60))) {
        goto loc_804C53B4;
    }
}

loc_804C53AC:
{
    r0 = (r29 + -156);
    goto loc_804C53C0;
}

loc_804C53B4:
{
    r0_rot_126 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_126 & -2);
    r7 = (r30 + r0);
    r0 = MemoryInline::FlatRead16((r7 + 1808));
}

loc_804C53C0:
{
    MemoryInline::FlatWrite16((r5 + 102), static_cast<uint16_t>(r0));
    r9 = MemoryInline::FlatRead32((r5 + 44));
    r7 = MemoryInline::FlatRead32((r5 + 40));
    r8 = MemoryInline::FlatRead32((r5 + 32));
    r0 = MemoryInline::FlatRead32((r5 + 20));
    r7 = (r9 + r7);
    r0 = (r8 + r0);
    r0 = (r7 + r0);
}

loc_804C53E4:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(-904))) {
        goto loc_804C53F0;
    }
}

loc_804C53E8:
{
    r0 = 0;
    goto loc_804C540C;
}

loc_804C53F0:
{
}

loc_804C53F4:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(60))) {
        goto loc_804C5400;
    }
}

loc_804C53F8:
{
    r0 = (r29 + -156);
    goto loc_804C540C;
}

loc_804C5400:
{
    r0_rot_128 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_128 & -2);
    r7 = (r30 + r0);
    r0 = MemoryInline::FlatRead16((r7 + 1808));
}

loc_804C540C:
{
    MemoryInline::FlatWrite16((r5 + 106), static_cast<uint16_t>(r0));
    r8 = MemoryInline::FlatRead32((r5 + 32));
    r0 = MemoryInline::FlatRead32((r5 + 20));
    r7 = MemoryInline::FlatRead32((r5 + 48));
    r0 = (r8 + r0);
    r7 = (r0 + r7);
    r7 = (r7 + -30);
}

loc_804C542C:
{
    if ((static_cast<int32_t>(r7) > static_cast<int32_t>(-904))) {
        goto loc_804C5438;
    }
}

loc_804C5430:
{
    r0 = 0;
    goto loc_804C5454;
}

loc_804C5438:
{
}

loc_804C543C:
{
    if ((static_cast<int32_t>(r7) < static_cast<int32_t>(60))) {
        goto loc_804C5448;
    }
}

loc_804C5440:
{
    r0 = (r29 + -156);
    goto loc_804C5454;
}

loc_804C5448:
{
    r0_rot_130 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r0 = (r0_rot_130 & -2);
    r7 = (r30 + r0);
    r0 = MemoryInline::FlatRead16((r7 + 1808));
}

loc_804C5454:
{
    MemoryInline::FlatWrite16((r5 + 110), static_cast<uint16_t>(r0));
    goto loc_804C5A10;
}

loc_804C545C:
{
    r8 = MemoryInline::FlatRead32((r5 + 44));
    r0 = MemoryInline::FlatRead32((r5 + 32));
    r7 = MemoryInline::FlatRead32((r5 + 36));
    r0 = (r8 + r0);
    r0 = (r7 + r0);
}

loc_804C5474:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(-904))) {
        goto loc_804C5480;
    }
}

loc_804C5478:
{
    r0 = 0;
    goto loc_804C549C;
}

loc_804C5480:
{
}

loc_804C5484:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(60))) {
        goto loc_804C5490;
    }
}

loc_804C5488:
{
    r0 = (r29 + -156);
    goto loc_804C549C;
}

loc_804C5490:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    r7 = (r30 + r0);
    r0 = MemoryInline::FlatRead16((r7 + 1808));
}

loc_804C549C:
{
    MemoryInline::FlatWrite16((r5 + 66), static_cast<uint16_t>(r0));
    r8 = MemoryInline::FlatRead32((r5 + 44));
    r0 = MemoryInline::FlatRead32((r5 + 32));
    r7 = MemoryInline::FlatRead32((r5 + 40));
    r0 = (r8 + r0);
    r0 = (r7 + r0);
}

loc_804C54B8:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(-904))) {
        goto loc_804C54C4;
    }
}

loc_804C54BC:
{
    r0 = 0;
    goto loc_804C54E0;
}

loc_804C54C4:
{
}

loc_804C54C8:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(60))) {
        goto loc_804C54D4;
    }
}

loc_804C54CC:
{
    r0 = (r29 + -156);
    goto loc_804C54E0;
}

loc_804C54D4:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & -2);
    r7 = (r30 + r0);
    r0 = MemoryInline::FlatRead16((r7 + 1808));
}

loc_804C54E0:
{
    MemoryInline::FlatWrite16((r5 + 70), static_cast<uint16_t>(r0));
    r8 = MemoryInline::FlatRead32((r5 + 48));
    r0 = MemoryInline::FlatRead32((r5 + 32));
    r7 = MemoryInline::FlatRead32((r5 + 52));
    r0 = (r8 + r0);
    r0 = (r7 + r0);
}

loc_804C54FC:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(-904))) {
        goto loc_804C5508;
    }
}

loc_804C5500:
{
    r0 = 0;
    goto loc_804C5524;
}

loc_804C5508:
{
}

loc_804C550C:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(60))) {
        goto loc_804C5518;
    }
}

loc_804C5510:
{
    r0 = (r29 + -156);
    goto loc_804C5524;
}

loc_804C5518:
{
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_6 & -2);
    r7 = (r30 + r0);
    r0 = MemoryInline::FlatRead16((r7 + 1808));
}

loc_804C5524:
{
    MemoryInline::FlatWrite16((r5 + 74), static_cast<uint16_t>(r0));
    r8 = MemoryInline::FlatRead32((r5 + 48));
    r0 = MemoryInline::FlatRead32((r5 + 32));
    r7 = MemoryInline::FlatRead32((r5 + 56));
    r0 = (r8 + r0);
    r0 = (r7 + r0);
}

loc_804C5540:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(-904))) {
        goto loc_804C554C;
    }
}

loc_804C5544:
{
    r0 = 0;
    goto loc_804C5568;
}

loc_804C554C:
{
}

loc_804C5550:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(60))) {
        goto loc_804C555C;
    }
}

loc_804C5554:
{
    r0 = (r29 + -156);
    goto loc_804C5568;
}

loc_804C555C:
{
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_8 & -2);
    r7 = (r30 + r0);
    r0 = MemoryInline::FlatRead16((r7 + 1808));
}

loc_804C5568:
{
    MemoryInline::FlatWrite16((r5 + 102), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r5 + 4));
    r0 = (r0 & 1);
}

loc_804C5574:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804C568C;
    }
}

loc_804C5578:
{
    r8 = MemoryInline::FlatRead32((r5 + 44));
    r0 = MemoryInline::FlatRead32((r5 + 12));
    r7 = MemoryInline::FlatRead32((r5 + 36));
    r0 = (r8 + r0);
    r0 = (r7 + r0);
}

loc_804C5590:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(-904))) {
        goto loc_804C559C;
    }
}

loc_804C5594:
{
    r0 = 0;
    goto loc_804C55B8;
}

loc_804C559C:
{
}

loc_804C55A0:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(60))) {
        goto loc_804C55AC;
    }
}

loc_804C55A4:
{
    r0 = (r29 + -156);
    goto loc_804C55B8;
}

loc_804C55AC:
{
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_10 & -2);
    r7 = (r30 + r0);
    r0 = MemoryInline::FlatRead16((r7 + 1808));
}

loc_804C55B8:
{
    MemoryInline::FlatWrite16((r5 + 78), static_cast<uint16_t>(r0));
    r8 = MemoryInline::FlatRead32((r5 + 44));
    r0 = MemoryInline::FlatRead32((r5 + 12));
    r7 = MemoryInline::FlatRead32((r5 + 40));
    r0 = (r8 + r0);
    r0 = (r7 + r0);
}

loc_804C55D4:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(-904))) {
        goto loc_804C55E0;
    }
}

loc_804C55D8:
{
    r0 = 0;
    goto loc_804C55FC;
}

loc_804C55E0:
{
}

loc_804C55E4:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(60))) {
        goto loc_804C55F0;
    }
}

loc_804C55E8:
{
    r0 = (r29 + -156);
    goto loc_804C55FC;
}

loc_804C55F0:
{
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_12 & -2);
    r7 = (r30 + r0);
    r0 = MemoryInline::FlatRead16((r7 + 1808));
}

loc_804C55FC:
{
    MemoryInline::FlatWrite16((r5 + 82), static_cast<uint16_t>(r0));
    r8 = MemoryInline::FlatRead32((r5 + 48));
    r0 = MemoryInline::FlatRead32((r5 + 12));
    r7 = MemoryInline::FlatRead32((r5 + 52));
    r0 = (r8 + r0);
    r0 = (r7 + r0);
}

loc_804C5618:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(-904))) {
        goto loc_804C5624;
    }
}

loc_804C561C:
{
    r0 = 0;
    goto loc_804C5640;
}

loc_804C5624:
{
}

loc_804C5628:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(60))) {
        goto loc_804C5634;
    }
}

loc_804C562C:
{
    r0 = (r29 + -156);
    goto loc_804C5640;
}

loc_804C5634:
{
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_14 & -2);
    r7 = (r30 + r0);
    r0 = MemoryInline::FlatRead16((r7 + 1808));
}

loc_804C5640:
{
    MemoryInline::FlatWrite16((r5 + 86), static_cast<uint16_t>(r0));
    r8 = MemoryInline::FlatRead32((r5 + 48));
    r0 = MemoryInline::FlatRead32((r5 + 12));
    r7 = MemoryInline::FlatRead32((r5 + 56));
    r0 = (r8 + r0);
    r0 = (r7 + r0);
}

loc_804C565C:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(-904))) {
        goto loc_804C5668;
    }
}

loc_804C5660:
{
    r0 = 0;
    goto loc_804C5684;
}

loc_804C5668:
{
}

loc_804C566C:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(60))) {
        goto loc_804C5678;
    }
}

loc_804C5670:
{
    r0 = (r29 + -156);
    goto loc_804C5684;
}

loc_804C5678:
{
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_16 & -2);
    r7 = (r30 + r0);
    r0 = MemoryInline::FlatRead16((r7 + 1808));
}

loc_804C5684:
{
    MemoryInline::FlatWrite16((r5 + 106), static_cast<uint16_t>(r0));
    goto loc_804C57BC;
}

loc_804C568C:
{
    r9 = MemoryInline::FlatRead32((r5 + 44));
    r7 = MemoryInline::FlatRead32((r5 + 36));
    r8 = MemoryInline::FlatRead32((r5 + 32));
    r0 = MemoryInline::FlatRead32((r5 + 12));
    r7 = (r9 + r7);
    r0 = (r8 + r0);
    r0 = (r7 + r0);
}

loc_804C56AC:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(-904))) {
        goto loc_804C56B8;
    }
}

loc_804C56B0:
{
    r0 = 0;
    goto loc_804C56D4;
}

loc_804C56B8:
{
}

loc_804C56BC:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(60))) {
        goto loc_804C56C8;
    }
}

loc_804C56C0:
{
    r0 = (r29 + -156);
    goto loc_804C56D4;
}

loc_804C56C8:
{
    r0_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_18 & -2);
    r7 = (r30 + r0);
    r0 = MemoryInline::FlatRead16((r7 + 1808));
}

loc_804C56D4:
{
    MemoryInline::FlatWrite16((r5 + 78), static_cast<uint16_t>(r0));
    r9 = MemoryInline::FlatRead32((r5 + 44));
    r7 = MemoryInline::FlatRead32((r5 + 40));
    r8 = MemoryInline::FlatRead32((r5 + 32));
    r0 = MemoryInline::FlatRead32((r5 + 12));
    r7 = (r9 + r7);
    r0 = (r8 + r0);
    r0 = (r7 + r0);
}

loc_804C56F8:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(-904))) {
        goto loc_804C5704;
    }
}

loc_804C56FC:
{
    r0 = 0;
    goto loc_804C5720;
}

loc_804C5704:
{
}

loc_804C5708:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(60))) {
        goto loc_804C5714;
    }
}

loc_804C570C:
{
    r0 = (r29 + -156);
    goto loc_804C5720;
}

loc_804C5714:
{
    r0_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_20 & -2);
    r7 = (r30 + r0);
    r0 = MemoryInline::FlatRead16((r7 + 1808));
}

loc_804C5720:
{
    MemoryInline::FlatWrite16((r5 + 82), static_cast<uint16_t>(r0));
    r9 = MemoryInline::FlatRead32((r5 + 48));
    r7 = MemoryInline::FlatRead32((r5 + 52));
    r8 = MemoryInline::FlatRead32((r5 + 32));
    r0 = MemoryInline::FlatRead32((r5 + 12));
    r7 = (r9 + r7);
    r0 = (r8 + r0);
    r0 = (r7 + r0);
}

loc_804C5744:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(-904))) {
        goto loc_804C5750;
    }
}

loc_804C5748:
{
    r0 = 0;
    goto loc_804C576C;
}

loc_804C5750:
{
}

loc_804C5754:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(60))) {
        goto loc_804C5760;
    }
}

loc_804C5758:
{
    r0 = (r29 + -156);
    goto loc_804C576C;
}

loc_804C5760:
{
    r0_rot_22 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_22 & -2);
    r7 = (r30 + r0);
    r0 = MemoryInline::FlatRead16((r7 + 1808));
}

loc_804C576C:
{
    MemoryInline::FlatWrite16((r5 + 86), static_cast<uint16_t>(r0));
    r9 = MemoryInline::FlatRead32((r5 + 48));
    r7 = MemoryInline::FlatRead32((r5 + 56));
    r8 = MemoryInline::FlatRead32((r5 + 32));
    r0 = MemoryInline::FlatRead32((r5 + 12));
    r7 = (r9 + r7);
    r0 = (r8 + r0);
    r0 = (r7 + r0);
}

loc_804C5790:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(-904))) {
        goto loc_804C579C;
    }
}

loc_804C5794:
{
    r0 = 0;
    goto loc_804C57B8;
}

loc_804C579C:
{
}

loc_804C57A0:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(60))) {
        goto loc_804C57AC;
    }
}

loc_804C57A4:
{
    r0 = (r29 + -156);
    goto loc_804C57B8;
}

loc_804C57AC:
{
    r0_rot_24 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_24 & -2);
    r7 = (r30 + r0);
    r0 = MemoryInline::FlatRead16((r7 + 1808));
}

loc_804C57B8:
{
    MemoryInline::FlatWrite16((r5 + 106), static_cast<uint16_t>(r0));
}

loc_804C57BC:
{
    r0 = MemoryInline::FlatRead32((r5 + 4));
    r0 = (r0 & 2);
}

loc_804C57C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804C58DC;
    }
}

loc_804C57C8:
{
    r8 = MemoryInline::FlatRead32((r5 + 44));
    r0 = MemoryInline::FlatRead32((r5 + 16));
    r7 = MemoryInline::FlatRead32((r5 + 36));
    r0 = (r8 + r0);
    r0 = (r7 + r0);
}

loc_804C57E0:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(-904))) {
        goto loc_804C57EC;
    }
}

loc_804C57E4:
{
    r0 = 0;
    goto loc_804C5808;
}

loc_804C57EC:
{
}

loc_804C57F0:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(60))) {
        goto loc_804C57FC;
    }
}

loc_804C57F4:
{
    r0 = (r29 + -156);
    goto loc_804C5808;
}

loc_804C57FC:
{
    r0_rot_27 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_27 & -2);
    r7 = (r30 + r0);
    r0 = MemoryInline::FlatRead16((r7 + 1808));
}

loc_804C5808:
{
    MemoryInline::FlatWrite16((r5 + 90), static_cast<uint16_t>(r0));
    r8 = MemoryInline::FlatRead32((r5 + 44));
    r0 = MemoryInline::FlatRead32((r5 + 16));
    r7 = MemoryInline::FlatRead32((r5 + 40));
    r0 = (r8 + r0);
    r0 = (r7 + r0);
}

loc_804C5824:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(-904))) {
        goto loc_804C5830;
    }
}

loc_804C5828:
{
    r0 = 0;
    goto loc_804C584C;
}

loc_804C5830:
{
}

loc_804C5834:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(60))) {
        goto loc_804C5840;
    }
}

loc_804C5838:
{
    r0 = (r29 + -156);
    goto loc_804C584C;
}

loc_804C5840:
{
    r0_rot_29 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_29 & -2);
    r7 = (r30 + r0);
    r0 = MemoryInline::FlatRead16((r7 + 1808));
}

loc_804C584C:
{
    MemoryInline::FlatWrite16((r5 + 94), static_cast<uint16_t>(r0));
    r8 = MemoryInline::FlatRead32((r5 + 48));
    r0 = MemoryInline::FlatRead32((r5 + 16));
    r7 = MemoryInline::FlatRead32((r5 + 52));
    r0 = (r8 + r0);
    r0 = (r7 + r0);
}

loc_804C5868:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(-904))) {
        goto loc_804C5874;
    }
}

loc_804C586C:
{
    r0 = 0;
    goto loc_804C5890;
}

loc_804C5874:
{
}

loc_804C5878:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(60))) {
        goto loc_804C5884;
    }
}

loc_804C587C:
{
    r0 = (r29 + -156);
    goto loc_804C5890;
}

loc_804C5884:
{
    r0_rot_31 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_31 & -2);
    r7 = (r30 + r0);
    r0 = MemoryInline::FlatRead16((r7 + 1808));
}

loc_804C5890:
{
    MemoryInline::FlatWrite16((r5 + 98), static_cast<uint16_t>(r0));
    r8 = MemoryInline::FlatRead32((r5 + 48));
    r0 = MemoryInline::FlatRead32((r5 + 16));
    r7 = MemoryInline::FlatRead32((r5 + 56));
    r0 = (r8 + r0);
    r0 = (r7 + r0);
}

loc_804C58AC:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(-904))) {
        goto loc_804C58B8;
    }
}

loc_804C58B0:
{
    r0 = 0;
    goto loc_804C58D4;
}

loc_804C58B8:
{
}

loc_804C58BC:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(60))) {
        goto loc_804C58C8;
    }
}

loc_804C58C0:
{
    r0 = (r29 + -156);
    goto loc_804C58D4;
}

loc_804C58C8:
{
    r0_rot_33 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_33 & -2);
    r7 = (r30 + r0);
    r0 = MemoryInline::FlatRead16((r7 + 1808));
}

loc_804C58D4:
{
    MemoryInline::FlatWrite16((r5 + 110), static_cast<uint16_t>(r0));
    goto loc_804C5A0C;
}

loc_804C58DC:
{
    r9 = MemoryInline::FlatRead32((r5 + 44));
    r7 = MemoryInline::FlatRead32((r5 + 36));
    r8 = MemoryInline::FlatRead32((r5 + 32));
    r0 = MemoryInline::FlatRead32((r5 + 16));
    r7 = (r9 + r7);
    r0 = (r8 + r0);
    r0 = (r7 + r0);
}

loc_804C58FC:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(-904))) {
        goto loc_804C5908;
    }
}

loc_804C5900:
{
    r0 = 0;
    goto loc_804C5924;
}

loc_804C5908:
{
}

loc_804C590C:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(60))) {
        goto loc_804C5918;
    }
}

loc_804C5910:
{
    r0 = (r29 + -156);
    goto loc_804C5924;
}

loc_804C5918:
{
    r0_rot_35 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_35 & -2);
    r7 = (r30 + r0);
    r0 = MemoryInline::FlatRead16((r7 + 1808));
}

loc_804C5924:
{
    MemoryInline::FlatWrite16((r5 + 90), static_cast<uint16_t>(r0));
    r9 = MemoryInline::FlatRead32((r5 + 44));
    r7 = MemoryInline::FlatRead32((r5 + 40));
    r8 = MemoryInline::FlatRead32((r5 + 32));
    r0 = MemoryInline::FlatRead32((r5 + 16));
    r7 = (r9 + r7);
    r0 = (r8 + r0);
    r0 = (r7 + r0);
}

loc_804C5948:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(-904))) {
        goto loc_804C5954;
    }
}

loc_804C594C:
{
    r0 = 0;
    goto loc_804C5970;
}

loc_804C5954:
{
}

loc_804C5958:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(60))) {
        goto loc_804C5964;
    }
}

loc_804C595C:
{
    r0 = (r29 + -156);
    goto loc_804C5970;
}

loc_804C5964:
{
    r0_rot_37 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_37 & -2);
    r7 = (r30 + r0);
    r0 = MemoryInline::FlatRead16((r7 + 1808));
}

loc_804C5970:
{
    MemoryInline::FlatWrite16((r5 + 94), static_cast<uint16_t>(r0));
    r9 = MemoryInline::FlatRead32((r5 + 48));
    r7 = MemoryInline::FlatRead32((r5 + 52));
    r8 = MemoryInline::FlatRead32((r5 + 32));
    r0 = MemoryInline::FlatRead32((r5 + 16));
    r7 = (r9 + r7);
    r0 = (r8 + r0);
    r0 = (r7 + r0);
}

loc_804C5994:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(-904))) {
        goto loc_804C59A0;
    }
}

loc_804C5998:
{
    r0 = 0;
    goto loc_804C59BC;
}

loc_804C59A0:
{
}

loc_804C59A4:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(60))) {
        goto loc_804C59B0;
    }
}

loc_804C59A8:
{
    r0 = (r29 + -156);
    goto loc_804C59BC;
}

loc_804C59B0:
{
    r0_rot_39 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_39 & -2);
    r7 = (r30 + r0);
    r0 = MemoryInline::FlatRead16((r7 + 1808));
}

loc_804C59BC:
{
    MemoryInline::FlatWrite16((r5 + 98), static_cast<uint16_t>(r0));
    r9 = MemoryInline::FlatRead32((r5 + 48));
    r7 = MemoryInline::FlatRead32((r5 + 56));
    r8 = MemoryInline::FlatRead32((r5 + 32));
    r0 = MemoryInline::FlatRead32((r5 + 16));
    r7 = (r9 + r7);
    r0 = (r8 + r0);
    r0 = (r7 + r0);
}

loc_804C59E0:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(-904))) {
        goto loc_804C59EC;
    }
}

loc_804C59E4:
{
    r0 = 0;
    goto loc_804C5A08;
}

loc_804C59EC:
{
}

loc_804C59F0:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(60))) {
        goto loc_804C59FC;
    }
}

loc_804C59F4:
{
    r0 = (r29 + -156);
    goto loc_804C5A08;
}

loc_804C59FC:
{
    r0_rot_41 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_41 & -2);
    r7 = (r30 + r0);
    r0 = MemoryInline::FlatRead16((r7 + 1808));
}

loc_804C5A08:
{
    MemoryInline::FlatWrite16((r5 + 110), static_cast<uint16_t>(r0));
}

loc_804C5A0C:
{
    r6 = (r6 | -2147483648);
}

loc_804C5A10:
{
    r7 = MemoryInline::FlatRead32((r5 + 4));
    r0 = 1;
    r7 = (r7 & -1073741825);
    r7 = (r7 | -2147483648);
    MemoryInline::FlatWrite32((r5 + 4), r7);
}

loc_804C5A24:
{
}

loc_804C5A28:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804C5A64;
    }
}

loc_804C5A2C:
{
    r3 = MemoryInline::FlatRead16((r5 + 60));
    r8 = (r31 + -21845);
    MemoryInline::FlatWrite16((r4 + 146), static_cast<uint16_t>(r3));
    r7 = MemoryInline::FlatRead16((r5 + 60));
    r3 = MemoryInline::FlatRead16((r5 + 62));
    r3 = (r3 - r7);
    r3 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r8)) * static_cast<int64_t>(static_cast<int32_t>(r3))) >> 32));
    r3 = (static_cast<int32_t>(r3) >> 4);
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r7 = (r7_rot_2 & 1);
    r3 = (r3 + r7);
    MemoryInline::FlatWrite16((r4 + 148), static_cast<uint16_t>(r3));
    r3 = MemoryInline::FlatRead32((r4 + 28));
    r3 = (r3 | 256);
    MemoryInline::FlatWrite32((r4 + 28), r3);
}

loc_804C5A64:
{
}

loc_804C5A68:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804C5DB0;
    }
}

loc_804C5A6C:
{
    r0 = MemoryInline::FlatRead16((r5 + 64));
    r3 = (r4 + 62);
    MemoryInline::FlatWrite16((r4 + 60), static_cast<uint16_t>(r0));
}

loc_804C5A7C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804C5A84;
    }
}

loc_804C5A80:
{
    r6 = (r6 | 1);
}

loc_804C5A84:
{
    r7 = MemoryInline::FlatRead16((r5 + 64));
    r8 = (r31 + -21845);
    r0 = MemoryInline::FlatRead16((r5 + 66));
    r0 = (r0 - r7);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r8)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 4);
    r7_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r7 = (r7_rot_4 & 1);
    r0 = (r0 + r7);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r0 = (r0 & 65535);
}

loc_804C5AAC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804C5AB4;
    }
}

loc_804C5AB0:
{
    r6 = (r6 | 4);
}

loc_804C5AB4:
{
    r0 = MemoryInline::FlatRead16((r5 + 68));
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
}

loc_804C5AC0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804C5AC8;
    }
}

loc_804C5AC4:
{
    r6 = (r6 | 2);
}

loc_804C5AC8:
{
    r7 = MemoryInline::FlatRead16((r5 + 68));
    r8 = (r31 + -21845);
    r0 = MemoryInline::FlatRead16((r5 + 70));
    r0 = (r0 - r7);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r8)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 4);
    r7_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r7 = (r7_rot_5 & 1);
    r0 = (r0 + r7);
    MemoryInline::FlatWrite16((r3 + 4), static_cast<uint16_t>(r0));
    r0 = (r0 & 65535);
}

loc_804C5AF0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804C5AF8;
    }
}

loc_804C5AF4:
{
    r6 = (r6 | 4);
}

loc_804C5AF8:
{
    r0 = MemoryInline::FlatRead16((r5 + 76));
    MemoryInline::FlatWrite16((r3 + 6), static_cast<uint16_t>(r0));
}

loc_804C5B04:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804C5B0C;
    }
}

loc_804C5B08:
{
    r6 = (r6 | 65536);
}

loc_804C5B0C:
{
    r7 = MemoryInline::FlatRead16((r5 + 76));
    r8 = (r31 + -21845);
    r0 = MemoryInline::FlatRead16((r5 + 78));
    r0 = (r0 - r7);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r8)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 4);
    r7_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r7 = (r7_rot_6 & 1);
    r0 = (r0 + r7);
    MemoryInline::FlatWrite16((r3 + 8), static_cast<uint16_t>(r0));
    r0 = (r0 & 65535);
}

loc_804C5B34:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804C5B3C;
    }
}

loc_804C5B38:
{
    r6 = (r6 | 262144);
}

loc_804C5B3C:
{
    r0 = MemoryInline::FlatRead16((r5 + 80));
    MemoryInline::FlatWrite16((r3 + 10), static_cast<uint16_t>(r0));
}

loc_804C5B48:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804C5B50;
    }
}

loc_804C5B4C:
{
    r6 = (r6 | 131072);
}

loc_804C5B50:
{
    r7 = MemoryInline::FlatRead16((r5 + 80));
    r8 = (r31 + -21845);
    r0 = MemoryInline::FlatRead16((r5 + 82));
    r0 = (r0 - r7);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r8)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 4);
    r7_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r7 = (r7_rot_7 & 1);
    r0 = (r0 + r7);
    MemoryInline::FlatWrite16((r3 + 12), static_cast<uint16_t>(r0));
    r0 = (r0 & 65535);
}

loc_804C5B78:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804C5B80;
    }
}

loc_804C5B7C:
{
    r6 = (r6 | 262144);
}

loc_804C5B80:
{
    r0 = MemoryInline::FlatRead16((r5 + 88));
    MemoryInline::FlatWrite16((r3 + 14), static_cast<uint16_t>(r0));
}

loc_804C5B8C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804C5B94;
    }
}

loc_804C5B90:
{
    r6 = (r6 | 2097152);
}

loc_804C5B94:
{
    r7 = MemoryInline::FlatRead16((r5 + 88));
    r8 = (r31 + -21845);
    r0 = MemoryInline::FlatRead16((r5 + 90));
    r0 = (r0 - r7);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r8)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 4);
    r7_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r7 = (r7_rot_8 & 1);
    r0 = (r0 + r7);
    MemoryInline::FlatWrite16((r3 + 16), static_cast<uint16_t>(r0));
    r0 = (r0 & 65535);
}

loc_804C5BBC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804C5BC4;
    }
}

loc_804C5BC0:
{
    r6 = (r6 | 8388608);
}

loc_804C5BC4:
{
    r0 = MemoryInline::FlatRead16((r5 + 92));
    MemoryInline::FlatWrite16((r3 + 18), static_cast<uint16_t>(r0));
}

loc_804C5BD0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804C5BD8;
    }
}

loc_804C5BD4:
{
    r6 = (r6 | 4194304);
}

loc_804C5BD8:
{
    r7 = MemoryInline::FlatRead16((r5 + 92));
    r8 = (r31 + -21845);
    r0 = MemoryInline::FlatRead16((r5 + 94));
    r0 = (r0 - r7);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r8)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 4);
    r7_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r7 = (r7_rot_9 & 1);
    r0 = (r0 + r7);
    MemoryInline::FlatWrite16((r3 + 20), static_cast<uint16_t>(r0));
    r0 = (r0 & 65535);
}

loc_804C5C00:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804C5C08;
    }
}

loc_804C5C04:
{
    r6 = (r6 | 8388608);
}

loc_804C5C08:
{
    r0 = MemoryInline::FlatRead16((r5 + 100));
    MemoryInline::FlatWrite16((r3 + 22), static_cast<uint16_t>(r0));
}

loc_804C5C14:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804C5C1C;
    }
}

loc_804C5C18:
{
    r6 = (r6 | 67108864);
}

loc_804C5C1C:
{
    r7 = MemoryInline::FlatRead16((r5 + 100));
    r8 = (r31 + -21845);
    r0 = MemoryInline::FlatRead16((r5 + 102));
    r0 = (r0 - r7);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r8)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 4);
    r7_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r7 = (r7_rot_10 & 1);
    r0 = (r0 + r7);
    MemoryInline::FlatWrite16((r3 + 24), static_cast<uint16_t>(r0));
    r0 = (r0 & 65535);
}

loc_804C5C44:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804C5C4C;
    }
}

loc_804C5C48:
{
    r6 = (r6 | 268435456);
}

loc_804C5C4C:
{
    r0 = MemoryInline::FlatRead16((r5 + 104));
    MemoryInline::FlatWrite16((r3 + 26), static_cast<uint16_t>(r0));
}

loc_804C5C58:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804C5C60;
    }
}

loc_804C5C5C:
{
    r6 = (r6 | 134217728);
}

loc_804C5C60:
{
    r7 = MemoryInline::FlatRead16((r5 + 104));
    r8 = (r31 + -21845);
    r0 = MemoryInline::FlatRead16((r5 + 106));
    r0 = (r0 - r7);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r8)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 4);
    r7_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r7 = (r7_rot_11 & 1);
    r0 = (r0 + r7);
    MemoryInline::FlatWrite16((r3 + 28), static_cast<uint16_t>(r0));
    r0 = (r0 & 65535);
}

loc_804C5C88:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804C5C90;
    }
}

loc_804C5C8C:
{
    r6 = (r6 | 268435456);
}

loc_804C5C90:
{
    r0 = MemoryInline::FlatRead16((r5 + 72));
    MemoryInline::FlatWrite16((r3 + 30), static_cast<uint16_t>(r0));
}

loc_804C5C9C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804C5CA4;
    }
}

loc_804C5CA0:
{
    r6 = (r6 | 8);
}

loc_804C5CA4:
{
    r7 = MemoryInline::FlatRead16((r5 + 72));
    r8 = (r31 + -21845);
    r0 = MemoryInline::FlatRead16((r5 + 74));
    r0 = (r0 - r7);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r8)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 4);
    r7_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r7 = (r7_rot_12 & 1);
    r0 = (r0 + r7);
    MemoryInline::FlatWrite16((r3 + 32), static_cast<uint16_t>(r0));
    r0 = (r0 & 65535);
}

loc_804C5CCC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804C5CD4;
    }
}

loc_804C5CD0:
{
    r6 = (r6 | 16);
}

loc_804C5CD4:
{
    r0 = MemoryInline::FlatRead16((r5 + 84));
    MemoryInline::FlatWrite16((r3 + 34), static_cast<uint16_t>(r0));
}

loc_804C5CE0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804C5CE8;
    }
}

loc_804C5CE4:
{
    r6 = (r6 | 524288);
}

loc_804C5CE8:
{
    r7 = MemoryInline::FlatRead16((r5 + 84));
    r8 = (r31 + -21845);
    r0 = MemoryInline::FlatRead16((r5 + 86));
    r0 = (r0 - r7);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r8)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 4);
    r7_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r7 = (r7_rot_13 & 1);
    r0 = (r0 + r7);
    MemoryInline::FlatWrite16((r3 + 36), static_cast<uint16_t>(r0));
    r0 = (r0 & 65535);
}

loc_804C5D10:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804C5D18;
    }
}

loc_804C5D14:
{
    r6 = (r6 | 1048576);
}

loc_804C5D18:
{
    r0 = MemoryInline::FlatRead16((r5 + 96));
    MemoryInline::FlatWrite16((r3 + 38), static_cast<uint16_t>(r0));
}

loc_804C5D24:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804C5D2C;
    }
}

loc_804C5D28:
{
    r6 = (r6 | 16777216);
}

loc_804C5D2C:
{
    r7 = MemoryInline::FlatRead16((r5 + 96));
    r8 = (r31 + -21845);
    r0 = MemoryInline::FlatRead16((r5 + 98));
    r0 = (r0 - r7);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r8)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 4);
    r7_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r7 = (r7_rot_14 & 1);
    r0 = (r0 + r7);
    MemoryInline::FlatWrite16((r3 + 40), static_cast<uint16_t>(r0));
    r0 = (r0 & 65535);
}

loc_804C5D54:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804C5D5C;
    }
}

loc_804C5D58:
{
    r6 = (r6 | 33554432);
}

loc_804C5D5C:
{
    r0 = MemoryInline::FlatRead16((r5 + 108));
    MemoryInline::FlatWrite16((r3 + 42), static_cast<uint16_t>(r0));
}

loc_804C5D68:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804C5D70;
    }
}

loc_804C5D6C:
{
    r6 = (r6 | 536870912);
}

loc_804C5D70:
{
    r7 = MemoryInline::FlatRead16((r5 + 108));
    r8 = (r31 + -21845);
    r0 = MemoryInline::FlatRead16((r5 + 110));
    r0 = (r0 - r7);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r8)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 4);
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r5 = (r5_rot_2 & 1);
    r0 = (r0 + r5);
    MemoryInline::FlatWrite16((r3 + 44), static_cast<uint16_t>(r0));
    r0 = (r0 & 65535);
}

loc_804C5D98:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804C5DA0;
    }
}

loc_804C5D9C:
{
    r6 = (r6 | 1073741824);
}

loc_804C5DA0:
{
    MemoryInline::FlatWrite32((r4 + 52), r6);
    r0 = MemoryInline::FlatRead32((r4 + 28));
    r0 = (r0 | 18);
    MemoryInline::FlatWrite32((r4 + 28), r0);
}

loc_804C5DB0:
{
    r3 = r26;
    ctx->lr = 0x804C5DB8u;
    if constexpr (KnownRegArgsCpuCall<0x804C5DF0u>(&func_804C5DF0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_804C5DF0_1368A = func_804C5DF0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804C5DF0_1368A);
        r4 = static_cast<uint32_t>(regargs_result_804C5DF0_1368A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x804C5DF0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
}

loc_804C5DB8:
{
    r27 = (r27 + 112);
    r26 = (r26 + 1);
}

loc_804C5DC0:
{
    r0 = MemoryInline::FlatRead32((r13 + -15224));
}

loc_804C5DC8:
{
    if ((static_cast<uint32_t>(r26) < static_cast<uint32_t>(r0))) {
        goto loc_804C4790;
    }
}

loc_804C5DCC:
{
    r11 = (r1 + 32);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000023FB gpr_write=0x00000BFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804C4750 func_804C4750 preserves=true fpr_mask=0x00000000
