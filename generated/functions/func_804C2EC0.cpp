#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804C2EC0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lhax_804C2C8C_loc_0 = 0;
    uint32_t addr_lhax_804C2CA4_loc_0 = 0;
    uint32_t addr_lhax_804C2CAC_loc_0 = 0;
    uint32_t addr_lhax_804C2CB4_loc_0 = 0;
    uint32_t addr_lhax_804C2CBC_loc_0 = 0;
    uint32_t addr_lhax_804C2CC4_loc_0 = 0;
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
    uint32_t r0_rot_136 = 0;
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
    uint32_t r12_addr_0 = 0;
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
    uint32_t r3_addr_130 = 0;
    uint32_t r3_addr_131 = 0;
    uint32_t r3_addr_132 = 0;
    uint32_t r3_addr_133 = 0;
    uint32_t r3_addr_134 = 0;
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
    uint32_t r4_addr_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r7_addr_0 = 0;
    uint32_t r7_addr_1 = 0;
    uint32_t r7_addr_2 = 0;
    uint32_t r7_addr_3 = 0;
    uint32_t r7_addr_4 = 0;
    uint32_t r7_addr_5 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x804C2EC0u);
    goto loc_804C2EC0;

loc_804C2EC0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = (r4 & 15);
    r29 = r5;
    r28 = r3;
    r11 = MemoryInline::FlatRead32((r3 + 24));
    r12 = MemoryInline::FlatRead32((r13 + -15232));
    r4 = (r11 * 112);
    r11 = MemoryInline::FlatRead32((r1 + 40));
    r12_addr_0 = (r12 + r4);
    MemoryInline::FlatWrite32(r12_addr_0, r3);
    r30 = (r12 + r4);
    r3 = r30;
    guest_range_2 = MemoryInline::ResolveRangeHost((r30 + 4), 0, 32u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_2, 0u, (r30 + 4), r0);
        MemoryInline::WriteResolved32(guest_range_2, 4u, (r30 + 8), r5);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_2, 8u, (r30 + 12), r6);
        MemoryInline::WriteResolved32(guest_range_2, 12u, (r30 + 16), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r9)))) {
        MemoryInline::WriteResolved32(guest_range_2, 16u, (r30 + 20), r8);
        MemoryInline::WriteResolved32(guest_range_2, 20u, (r30 + 24), r9);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r10)) << 32) | static_cast<uint32_t>(r11)))) {
        MemoryInline::WriteResolved32(guest_range_2, 24u, (r30 + 28), r10);
        MemoryInline::WriteResolved32(guest_range_2, 28u, (r30 + 32), r11);
    }
    // inline leaf 0x804C2C60 (45 guest instruction(s))
}

loc_inl0_0x804C2C60:
{
    r0 = MemoryInline::FlatRead32((r13 + -15220));
    r4 = 0x80620000u;
    r5 = MemoryInline::FlatRead32((r3 + 24));
    r4 = (r4 + -18752);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
}

loc_inl0_0x804C2C74:
{
    r10 = MemoryInline::FlatRead32((r3 + 28));
    r6 = (127 - r5);
    r11 = (127 - r10);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl0_0x804C2CD0;
    }
}

loc_inl0_0x804C2C84:
{
    r9_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r9 = (r9_rot_0 & -2);
    r7 = (r4 + 2448);
    addr_lhax_804C2C8C_loc_0 = (r7 + r9);
    r0 = MemoryInline::FlatRead16(addr_lhax_804C2C8C_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r8_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r8 = (r8_rot_0 & -2);
    MemoryInline::FlatWrite32((r3 + 36), r0);
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(1));
    r5 = (r5_rot_0 & -2);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & -2);
    r4 = (r4 + 2704);
    addr_lhax_804C2CA4_loc_0 = (r7 + r8);
    r6 = MemoryInline::FlatRead16(addr_lhax_804C2CA4_loc_0);
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    MemoryInline::FlatWrite32((r3 + 40), r6);
    addr_lhax_804C2CAC_loc_0 = (r7 + r5);
    r5 = MemoryInline::FlatRead16(addr_lhax_804C2CAC_loc_0);
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    MemoryInline::FlatWrite32((r3 + 44), r5);
    addr_lhax_804C2CB4_loc_0 = (r7 + r0);
    r0 = MemoryInline::FlatRead16(addr_lhax_804C2CB4_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite32((r3 + 48), r0);
    addr_lhax_804C2CBC_loc_0 = (r4 + r8);
    r0 = MemoryInline::FlatRead16(addr_lhax_804C2CBC_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite32((r3 + 52), r0);
    addr_lhax_804C2CC4_loc_0 = (r4 + r9);
    r0 = MemoryInline::FlatRead16(addr_lhax_804C2CC4_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite32((r3 + 56), r0);
    goto loc_inl0_cont_804C2C60;
}

loc_inl0_0x804C2CD0:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r7 = (r4 + 1936);
    r7_addr_1 = (r7 + r0);
    r0 = MemoryInline::FlatRead32(r7_addr_1);
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r6 = (r6_rot_1 & -4);
    MemoryInline::FlatWrite32((r3 + 36), r0);
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(2));
    r5 = (r5_rot_1 & -4);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(2));
    r4 = (r4_rot_1 & -4);
    r0 = 0;
    r7_addr_2 = (r7 + r6);
    r6 = MemoryInline::FlatRead32(r7_addr_2);
    MemoryInline::FlatWrite32((r3 + 40), r6);
    r7_addr_3 = (r7 + r5);
    r5 = MemoryInline::FlatRead32(r7_addr_3);
    MemoryInline::FlatWrite32((r3 + 44), r5);
    r7_addr_4 = (r7 + r4);
    r4 = MemoryInline::FlatRead32(r7_addr_4);
    MemoryInline::FlatWrite32((r3 + 48), r4);
    MemoryInline::FlatWrite32((r3 + 52), r0);
    MemoryInline::FlatWrite32((r3 + 56), r0);
}

loc_inl0_cont_804C2C60:
{
    // end of inlined leaf 0x804C2C60
    r0 = MemoryInline::FlatRead32((r30 + 4));
    r0 = (r0 & 8);
}

loc_804C2F30:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804C2F40;
    }
}

loc_804C2F34:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r30 + 60), static_cast<uint16_t>(r0));
    goto loc_804C2F7C;
}

loc_804C2F40:
{
}

loc_804C2F44:
{
    if ((static_cast<int32_t>(r29) > static_cast<int32_t>(-904))) {
        goto loc_804C2F50;
    }
}

loc_804C2F48:
{
    r0 = 0;
    goto loc_804C2F78;
}

loc_804C2F50:
{
}

loc_804C2F54:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(60))) {
        goto loc_804C2F64;
    }
}

loc_804C2F58:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_804C2F78;
}

loc_804C2F64:
{
    r0 = (r29 + 904);
    r3 = 0x80620000u;
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & -2);
    r3 = (r3 + -18752);
    r3_addr_1 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_1);
}

loc_804C2F78:
{
    MemoryInline::FlatWrite16((r30 + 60), static_cast<uint16_t>(r0));
}

loc_804C2F7C:
{
    r3 = MemoryInline::FlatRead32((r13 + -15220));
    r29 = 0;
    r0 = (r3 + -1);
}

loc_804C2F8C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_804C3624;
    }
}

loc_804C2F90:
{
}

loc_804C2F94:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804C2FA4;
    }
}

loc_804C2F98:
{
}

loc_804C2F9C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(3))) {
        goto loc_804C3D14;
    }
}

loc_804C2FA0:
{
    goto loc_804C43B8;
}

loc_804C2FA4:
{
    r3 = MemoryInline::FlatRead32((r30 + 32));
    r0 = MemoryInline::FlatRead32((r30 + 44));
    r3 = (r3 + r0);
}

loc_804C2FB4:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_804C2FC0;
    }
}

loc_804C2FB8:
{
    r0 = 0;
    goto loc_804C2FE8;
}

loc_804C2FC0:
{
}

loc_804C2FC4:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_804C2FD4;
    }
}

loc_804C2FC8:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_804C2FE8;
}

loc_804C2FD4:
{
    r0 = (r3 + 904);
    r3 = 0x80620000u;
    r0_rot_48 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_48 & -2);
    r3 = (r3 + -18752);
    r3_addr_46 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_46);
}

loc_804C2FE8:
{
    MemoryInline::FlatWrite16((r30 + 64), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r30 + 32));
    r0 = MemoryInline::FlatRead32((r30 + 44));
    r3 = (r3 + r0);
}

loc_804C2FFC:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_804C3008;
    }
}

loc_804C3000:
{
    r0 = 0;
    goto loc_804C3030;
}

loc_804C3008:
{
}

loc_804C300C:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_804C301C;
    }
}

loc_804C3010:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_804C3030;
}

loc_804C301C:
{
    r0 = (r3 + 904);
    r3 = 0x80620000u;
    r0_rot_50 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_50 & -2);
    r3 = (r3 + -18752);
    r3_addr_48 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_48);
}

loc_804C3030:
{
    MemoryInline::FlatWrite16((r30 + 68), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r30 + 32));
    r0 = MemoryInline::FlatRead32((r30 + 48));
    r3 = (r3 + r0);
    r3 = (r3 + -30);
}

loc_804C3048:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_804C3054;
    }
}

loc_804C304C:
{
    r0 = 0;
    goto loc_804C307C;
}

loc_804C3054:
{
}

loc_804C3058:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_804C3068;
    }
}

loc_804C305C:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_804C307C;
}

loc_804C3068:
{
    r0 = (r3 + 904);
    r3 = 0x80620000u;
    r0_rot_52 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_52 & -2);
    r3 = (r3 + -18752);
    r3_addr_50 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_50);
}

loc_804C307C:
{
    MemoryInline::FlatWrite16((r30 + 72), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r30 + 4));
    r0 = (r0 & 1);
}

loc_804C3088:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804C316C;
    }
}

loc_804C308C:
{
    r3 = MemoryInline::FlatRead32((r30 + 12));
    r0 = MemoryInline::FlatRead32((r30 + 44));
    r3 = (r3 + r0);
}

loc_804C309C:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_804C30A8;
    }
}

loc_804C30A0:
{
    r0 = 0;
    goto loc_804C30D0;
}

loc_804C30A8:
{
}

loc_804C30AC:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_804C30BC;
    }
}

loc_804C30B0:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_804C30D0;
}

loc_804C30BC:
{
    r0 = (r3 + 904);
    r3 = 0x80620000u;
    r0_rot_54 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_54 & -2);
    r3 = (r3 + -18752);
    r3_addr_52 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_52);
}

loc_804C30D0:
{
    MemoryInline::FlatWrite16((r30 + 76), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r30 + 12));
    r0 = MemoryInline::FlatRead32((r30 + 44));
    r3 = (r3 + r0);
}

loc_804C30E4:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_804C30F0;
    }
}

loc_804C30E8:
{
    r0 = 0;
    goto loc_804C3118;
}

loc_804C30F0:
{
}

loc_804C30F4:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_804C3104;
    }
}

loc_804C30F8:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_804C3118;
}

loc_804C3104:
{
    r0 = (r3 + 904);
    r3 = 0x80620000u;
    r0_rot_56 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_56 & -2);
    r3 = (r3 + -18752);
    r3_addr_54 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_54);
}

loc_804C3118:
{
    MemoryInline::FlatWrite16((r30 + 80), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r30 + 12));
    r0 = MemoryInline::FlatRead32((r30 + 48));
    r3 = (r3 + r0);
    r3 = (r3 + -30);
}

loc_804C3130:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_804C313C;
    }
}

loc_804C3134:
{
    r0 = 0;
    goto loc_804C3164;
}

loc_804C313C:
{
}

loc_804C3140:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_804C3150;
    }
}

loc_804C3144:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_804C3164;
}

loc_804C3150:
{
    r0 = (r3 + 904);
    r3 = 0x80620000u;
    r0_rot_58 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_58 & -2);
    r3 = (r3 + -18752);
    r3_addr_56 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_56);
}

loc_804C3164:
{
    MemoryInline::FlatWrite16((r30 + 84), static_cast<uint16_t>(r0));
    goto loc_804C3260;
}

loc_804C316C:
{
    r4 = MemoryInline::FlatRead32((r30 + 44));
    r0 = MemoryInline::FlatRead32((r30 + 32));
    r3 = MemoryInline::FlatRead32((r30 + 12));
    r0 = (r4 + r0);
    r3 = (r3 + r0);
}

loc_804C3184:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_804C3190;
    }
}

loc_804C3188:
{
    r0 = 0;
    goto loc_804C31B8;
}

loc_804C3190:
{
}

loc_804C3194:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_804C31A4;
    }
}

loc_804C3198:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_804C31B8;
}

loc_804C31A4:
{
    r0 = (r3 + 904);
    r3 = 0x80620000u;
    r0_rot_60 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_60 & -2);
    r3 = (r3 + -18752);
    r3_addr_58 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_58);
}

loc_804C31B8:
{
    MemoryInline::FlatWrite16((r30 + 76), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r30 + 44));
    r0 = MemoryInline::FlatRead32((r30 + 32));
    r3 = MemoryInline::FlatRead32((r30 + 12));
    r0 = (r4 + r0);
    r3 = (r3 + r0);
}

loc_804C31D4:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_804C31E0;
    }
}

loc_804C31D8:
{
    r0 = 0;
    goto loc_804C3208;
}

loc_804C31E0:
{
}

loc_804C31E4:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_804C31F4;
    }
}

loc_804C31E8:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_804C3208;
}

loc_804C31F4:
{
    r0 = (r3 + 904);
    r3 = 0x80620000u;
    r0_rot_62 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_62 & -2);
    r3 = (r3 + -18752);
    r3_addr_60 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_60);
}

loc_804C3208:
{
    MemoryInline::FlatWrite16((r30 + 80), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r30 + 32));
    r0 = MemoryInline::FlatRead32((r30 + 12));
    r3 = MemoryInline::FlatRead32((r30 + 48));
    r0 = (r4 + r0);
    r3 = (r0 + r3);
    r3 = (r3 + -30);
}

loc_804C3228:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_804C3234;
    }
}

loc_804C322C:
{
    r0 = 0;
    goto loc_804C325C;
}

loc_804C3234:
{
}

loc_804C3238:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_804C3248;
    }
}

loc_804C323C:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_804C325C;
}

loc_804C3248:
{
    r0 = (r3 + 904);
    r3 = 0x80620000u;
    r0_rot_64 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_64 & -2);
    r3 = (r3 + -18752);
    r3_addr_62 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_62);
}

loc_804C325C:
{
    MemoryInline::FlatWrite16((r30 + 84), static_cast<uint16_t>(r0));
}

loc_804C3260:
{
    r0 = MemoryInline::FlatRead32((r30 + 4));
    r0 = (r0 & 2);
}

loc_804C3268:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804C334C;
    }
}

loc_804C326C:
{
    r3 = MemoryInline::FlatRead32((r30 + 16));
    r0 = MemoryInline::FlatRead32((r30 + 44));
    r3 = (r3 + r0);
}

loc_804C327C:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_804C3288;
    }
}

loc_804C3280:
{
    r0 = 0;
    goto loc_804C32B0;
}

loc_804C3288:
{
}

loc_804C328C:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_804C329C;
    }
}

loc_804C3290:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_804C32B0;
}

loc_804C329C:
{
    r0 = (r3 + 904);
    r3 = 0x80620000u;
    r0_rot_67 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_67 & -2);
    r3 = (r3 + -18752);
    r3_addr_65 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_65);
}

loc_804C32B0:
{
    MemoryInline::FlatWrite16((r30 + 88), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r30 + 16));
    r0 = MemoryInline::FlatRead32((r30 + 44));
    r3 = (r3 + r0);
}

loc_804C32C4:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_804C32D0;
    }
}

loc_804C32C8:
{
    r0 = 0;
    goto loc_804C32F8;
}

loc_804C32D0:
{
}

loc_804C32D4:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_804C32E4;
    }
}

loc_804C32D8:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_804C32F8;
}

loc_804C32E4:
{
    r0 = (r3 + 904);
    r3 = 0x80620000u;
    r0_rot_69 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_69 & -2);
    r3 = (r3 + -18752);
    r3_addr_67 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_67);
}

loc_804C32F8:
{
    MemoryInline::FlatWrite16((r30 + 92), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r30 + 16));
    r0 = MemoryInline::FlatRead32((r30 + 48));
    r3 = (r3 + r0);
    r3 = (r3 + -30);
}

loc_804C3310:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_804C331C;
    }
}

loc_804C3314:
{
    r0 = 0;
    goto loc_804C3344;
}

loc_804C331C:
{
}

loc_804C3320:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_804C3330;
    }
}

loc_804C3324:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_804C3344;
}

loc_804C3330:
{
    r0 = (r3 + 904);
    r3 = 0x80620000u;
    r0_rot_71 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_71 & -2);
    r3 = (r3 + -18752);
    r3_addr_69 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_69);
}

loc_804C3344:
{
    MemoryInline::FlatWrite16((r30 + 96), static_cast<uint16_t>(r0));
    goto loc_804C3440;
}

loc_804C334C:
{
    r4 = MemoryInline::FlatRead32((r30 + 44));
    r0 = MemoryInline::FlatRead32((r30 + 32));
    r3 = MemoryInline::FlatRead32((r30 + 16));
    r0 = (r4 + r0);
    r3 = (r3 + r0);
}

loc_804C3364:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_804C3370;
    }
}

loc_804C3368:
{
    r0 = 0;
    goto loc_804C3398;
}

loc_804C3370:
{
}

loc_804C3374:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_804C3384;
    }
}

loc_804C3378:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_804C3398;
}

loc_804C3384:
{
    r0 = (r3 + 904);
    r3 = 0x80620000u;
    r0_rot_73 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_73 & -2);
    r3 = (r3 + -18752);
    r3_addr_71 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_71);
}

loc_804C3398:
{
    MemoryInline::FlatWrite16((r30 + 88), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r30 + 44));
    r0 = MemoryInline::FlatRead32((r30 + 32));
    r3 = MemoryInline::FlatRead32((r30 + 16));
    r0 = (r4 + r0);
    r3 = (r3 + r0);
}

loc_804C33B4:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_804C33C0;
    }
}

loc_804C33B8:
{
    r0 = 0;
    goto loc_804C33E8;
}

loc_804C33C0:
{
}

loc_804C33C4:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_804C33D4;
    }
}

loc_804C33C8:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_804C33E8;
}

loc_804C33D4:
{
    r0 = (r3 + 904);
    r3 = 0x80620000u;
    r0_rot_75 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_75 & -2);
    r3 = (r3 + -18752);
    r3_addr_73 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_73);
}

loc_804C33E8:
{
    MemoryInline::FlatWrite16((r30 + 92), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r30 + 32));
    r0 = MemoryInline::FlatRead32((r30 + 16));
    r3 = MemoryInline::FlatRead32((r30 + 48));
    r0 = (r4 + r0);
    r3 = (r0 + r3);
    r3 = (r3 + -30);
}

loc_804C3408:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_804C3414;
    }
}

loc_804C340C:
{
    r0 = 0;
    goto loc_804C343C;
}

loc_804C3414:
{
}

loc_804C3418:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_804C3428;
    }
}

loc_804C341C:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_804C343C;
}

loc_804C3428:
{
    r0 = (r3 + 904);
    r3 = 0x80620000u;
    r0_rot_77 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_77 & -2);
    r3 = (r3 + -18752);
    r3_addr_75 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_75);
}

loc_804C343C:
{
    MemoryInline::FlatWrite16((r30 + 96), static_cast<uint16_t>(r0));
}

loc_804C3440:
{
    r0 = MemoryInline::FlatRead32((r30 + 4));
    r0 = (r0 & 4);
}

loc_804C3448:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804C352C;
    }
}

loc_804C344C:
{
    r3 = MemoryInline::FlatRead32((r30 + 20));
    r0 = MemoryInline::FlatRead32((r30 + 44));
    r3 = (r3 + r0);
}

loc_804C345C:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_804C3468;
    }
}

loc_804C3460:
{
    r0 = 0;
    goto loc_804C3490;
}

loc_804C3468:
{
}

loc_804C346C:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_804C347C;
    }
}

loc_804C3470:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_804C3490;
}

loc_804C347C:
{
    r0 = (r3 + 904);
    r3 = 0x80620000u;
    r0_rot_80 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_80 & -2);
    r3 = (r3 + -18752);
    r3_addr_78 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_78);
}

loc_804C3490:
{
    MemoryInline::FlatWrite16((r30 + 100), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r30 + 20));
    r0 = MemoryInline::FlatRead32((r30 + 44));
    r3 = (r3 + r0);
}

loc_804C34A4:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_804C34B0;
    }
}

loc_804C34A8:
{
    r0 = 0;
    goto loc_804C34D8;
}

loc_804C34B0:
{
}

loc_804C34B4:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_804C34C4;
    }
}

loc_804C34B8:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_804C34D8;
}

loc_804C34C4:
{
    r0 = (r3 + 904);
    r3 = 0x80620000u;
    r0_rot_82 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_82 & -2);
    r3 = (r3 + -18752);
    r3_addr_80 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_80);
}

loc_804C34D8:
{
    MemoryInline::FlatWrite16((r30 + 104), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r30 + 20));
    r0 = MemoryInline::FlatRead32((r30 + 48));
    r3 = (r3 + r0);
    r3 = (r3 + -30);
}

loc_804C34F0:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_804C34FC;
    }
}

loc_804C34F4:
{
    r0 = 0;
    goto loc_804C3524;
}

loc_804C34FC:
{
}

loc_804C3500:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_804C3510;
    }
}

loc_804C3504:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_804C3524;
}

loc_804C3510:
{
    r0 = (r3 + 904);
    r3 = 0x80620000u;
    r0_rot_84 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_84 & -2);
    r3 = (r3 + -18752);
    r3_addr_82 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_82);
}

loc_804C3524:
{
    MemoryInline::FlatWrite16((r30 + 108), static_cast<uint16_t>(r0));
    goto loc_804C43B8;
}

loc_804C352C:
{
    r4 = MemoryInline::FlatRead32((r30 + 44));
    r0 = MemoryInline::FlatRead32((r30 + 32));
    r3 = MemoryInline::FlatRead32((r30 + 20));
    r0 = (r4 + r0);
    r3 = (r3 + r0);
}

loc_804C3544:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_804C3550;
    }
}

loc_804C3548:
{
    r0 = 0;
    goto loc_804C3578;
}

loc_804C3550:
{
}

loc_804C3554:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_804C3564;
    }
}

loc_804C3558:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_804C3578;
}

loc_804C3564:
{
    r0 = (r3 + 904);
    r3 = 0x80620000u;
    r0_rot_86 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_86 & -2);
    r3 = (r3 + -18752);
    r3_addr_84 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_84);
}

loc_804C3578:
{
    MemoryInline::FlatWrite16((r30 + 100), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r30 + 44));
    r0 = MemoryInline::FlatRead32((r30 + 32));
    r3 = MemoryInline::FlatRead32((r30 + 20));
    r0 = (r4 + r0);
    r3 = (r3 + r0);
}

loc_804C3594:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_804C35A0;
    }
}

loc_804C3598:
{
    r0 = 0;
    goto loc_804C35C8;
}

loc_804C35A0:
{
}

loc_804C35A4:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_804C35B4;
    }
}

loc_804C35A8:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_804C35C8;
}

loc_804C35B4:
{
    r0 = (r3 + 904);
    r3 = 0x80620000u;
    r0_rot_88 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_88 & -2);
    r3 = (r3 + -18752);
    r3_addr_86 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_86);
}

loc_804C35C8:
{
    MemoryInline::FlatWrite16((r30 + 104), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r30 + 32));
    r0 = MemoryInline::FlatRead32((r30 + 20));
    r3 = MemoryInline::FlatRead32((r30 + 48));
    r0 = (r4 + r0);
    r3 = (r0 + r3);
    r3 = (r3 + -30);
}

loc_804C35E8:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_804C35F4;
    }
}

loc_804C35EC:
{
    r0 = 0;
    goto loc_804C361C;
}

loc_804C35F4:
{
}

loc_804C35F8:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_804C3608;
    }
}

loc_804C35FC:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_804C361C;
}

loc_804C3608:
{
    r0 = (r3 + 904);
    r3 = 0x80620000u;
    r0_rot_90 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_90 & -2);
    r3 = (r3 + -18752);
    r3_addr_88 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_88);
}

loc_804C361C:
{
    MemoryInline::FlatWrite16((r30 + 108), static_cast<uint16_t>(r0));
    goto loc_804C43B8;
}

loc_804C3624:
{
    r4 = MemoryInline::FlatRead32((r30 + 44));
    r0 = MemoryInline::FlatRead32((r30 + 32));
    r3 = MemoryInline::FlatRead32((r30 + 36));
    r0 = (r4 + r0);
    r3 = (r3 + r0);
}

loc_804C363C:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_804C3648;
    }
}

loc_804C3640:
{
    r0 = 0;
    goto loc_804C3670;
}

loc_804C3648:
{
}

loc_804C364C:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_804C365C;
    }
}

loc_804C3650:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_804C3670;
}

loc_804C365C:
{
    r0 = (r3 + 904);
    r3 = 0x80620000u;
    r0_rot_92 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_92 & -2);
    r3 = (r3 + -18752);
    r3_addr_90 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_90);
}

loc_804C3670:
{
    MemoryInline::FlatWrite16((r30 + 64), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r30 + 44));
    r0 = MemoryInline::FlatRead32((r30 + 32));
    r3 = MemoryInline::FlatRead32((r30 + 40));
    r0 = (r4 + r0);
    r3 = (r3 + r0);
}

loc_804C368C:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_804C3698;
    }
}

loc_804C3690:
{
    r0 = 0;
    goto loc_804C36C0;
}

loc_804C3698:
{
}

loc_804C369C:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_804C36AC;
    }
}

loc_804C36A0:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_804C36C0;
}

loc_804C36AC:
{
    r0 = (r3 + 904);
    r3 = 0x80620000u;
    r0_rot_94 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_94 & -2);
    r3 = (r3 + -18752);
    r3_addr_92 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_92);
}

loc_804C36C0:
{
    MemoryInline::FlatWrite16((r30 + 68), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r30 + 32));
    r0 = MemoryInline::FlatRead32((r30 + 48));
    r3 = (r3 + r0);
    r3 = (r3 + -30);
}

loc_804C36D8:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_804C36E4;
    }
}

loc_804C36DC:
{
    r0 = 0;
    goto loc_804C370C;
}

loc_804C36E4:
{
}

loc_804C36E8:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_804C36F8;
    }
}

loc_804C36EC:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_804C370C;
}

loc_804C36F8:
{
    r0 = (r3 + 904);
    r3 = 0x80620000u;
    r0_rot_96 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_96 & -2);
    r3 = (r3 + -18752);
    r3_addr_94 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_94);
}

loc_804C370C:
{
    MemoryInline::FlatWrite16((r30 + 72), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r30 + 4));
    r0 = (r0 & 1);
}

loc_804C3718:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804C380C;
    }
}

loc_804C371C:
{
    r4 = MemoryInline::FlatRead32((r30 + 44));
    r0 = MemoryInline::FlatRead32((r30 + 12));
    r3 = MemoryInline::FlatRead32((r30 + 36));
    r0 = (r4 + r0);
    r3 = (r3 + r0);
}

loc_804C3734:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_804C3740;
    }
}

loc_804C3738:
{
    r0 = 0;
    goto loc_804C3768;
}

loc_804C3740:
{
}

loc_804C3744:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_804C3754;
    }
}

loc_804C3748:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_804C3768;
}

loc_804C3754:
{
    r0 = (r3 + 904);
    r3 = 0x80620000u;
    r0_rot_98 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_98 & -2);
    r3 = (r3 + -18752);
    r3_addr_96 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_96);
}

loc_804C3768:
{
    MemoryInline::FlatWrite16((r30 + 76), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r30 + 44));
    r0 = MemoryInline::FlatRead32((r30 + 12));
    r3 = MemoryInline::FlatRead32((r30 + 40));
    r0 = (r4 + r0);
    r3 = (r3 + r0);
}

loc_804C3784:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_804C3790;
    }
}

loc_804C3788:
{
    r0 = 0;
    goto loc_804C37B8;
}

loc_804C3790:
{
}

loc_804C3794:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_804C37A4;
    }
}

loc_804C3798:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_804C37B8;
}

loc_804C37A4:
{
    r0 = (r3 + 904);
    r3 = 0x80620000u;
    r0_rot_100 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_100 & -2);
    r3 = (r3 + -18752);
    r3_addr_98 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_98);
}

loc_804C37B8:
{
    MemoryInline::FlatWrite16((r30 + 80), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r30 + 12));
    r0 = MemoryInline::FlatRead32((r30 + 48));
    r3 = (r3 + r0);
    r3 = (r3 + -30);
}

loc_804C37D0:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_804C37DC;
    }
}

loc_804C37D4:
{
    r0 = 0;
    goto loc_804C3804;
}

loc_804C37DC:
{
}

loc_804C37E0:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_804C37F0;
    }
}

loc_804C37E4:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_804C3804;
}

loc_804C37F0:
{
    r0 = (r3 + 904);
    r3 = 0x80620000u;
    r0_rot_102 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_102 & -2);
    r3 = (r3 + -18752);
    r3_addr_100 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_100);
}

loc_804C3804:
{
    MemoryInline::FlatWrite16((r30 + 84), static_cast<uint16_t>(r0));
    goto loc_804C3910;
}

loc_804C380C:
{
    r5 = MemoryInline::FlatRead32((r30 + 44));
    r3 = MemoryInline::FlatRead32((r30 + 36));
    r4 = MemoryInline::FlatRead32((r30 + 32));
    r0 = MemoryInline::FlatRead32((r30 + 12));
    r3 = (r5 + r3);
    r0 = (r4 + r0);
    r3 = (r3 + r0);
}

loc_804C382C:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_804C3838;
    }
}

loc_804C3830:
{
    r0 = 0;
    goto loc_804C3860;
}

loc_804C3838:
{
}

loc_804C383C:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_804C384C;
    }
}

loc_804C3840:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_804C3860;
}

loc_804C384C:
{
    r0 = (r3 + 904);
    r3 = 0x80620000u;
    r0_rot_104 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_104 & -2);
    r3 = (r3 + -18752);
    r3_addr_102 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_102);
}

loc_804C3860:
{
    MemoryInline::FlatWrite16((r30 + 76), static_cast<uint16_t>(r0));
    r5 = MemoryInline::FlatRead32((r30 + 44));
    r3 = MemoryInline::FlatRead32((r30 + 40));
    r4 = MemoryInline::FlatRead32((r30 + 32));
    r0 = MemoryInline::FlatRead32((r30 + 12));
    r3 = (r5 + r3);
    r0 = (r4 + r0);
    r3 = (r3 + r0);
}

loc_804C3884:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_804C3890;
    }
}

loc_804C3888:
{
    r0 = 0;
    goto loc_804C38B8;
}

loc_804C3890:
{
}

loc_804C3894:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_804C38A4;
    }
}

loc_804C3898:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_804C38B8;
}

loc_804C38A4:
{
    r0 = (r3 + 904);
    r3 = 0x80620000u;
    r0_rot_106 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_106 & -2);
    r3 = (r3 + -18752);
    r3_addr_104 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_104);
}

loc_804C38B8:
{
    MemoryInline::FlatWrite16((r30 + 80), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r30 + 32));
    r0 = MemoryInline::FlatRead32((r30 + 12));
    r3 = MemoryInline::FlatRead32((r30 + 48));
    r0 = (r4 + r0);
    r3 = (r0 + r3);
    r3 = (r3 + -30);
}

loc_804C38D8:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_804C38E4;
    }
}

loc_804C38DC:
{
    r0 = 0;
    goto loc_804C390C;
}

loc_804C38E4:
{
}

loc_804C38E8:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_804C38F8;
    }
}

loc_804C38EC:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_804C390C;
}

loc_804C38F8:
{
    r0 = (r3 + 904);
    r3 = 0x80620000u;
    r0_rot_108 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_108 & -2);
    r3 = (r3 + -18752);
    r3_addr_106 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_106);
}

loc_804C390C:
{
    MemoryInline::FlatWrite16((r30 + 84), static_cast<uint16_t>(r0));
}

loc_804C3910:
{
    r0 = MemoryInline::FlatRead32((r30 + 4));
    r0 = (r0 & 2);
}

loc_804C3918:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804C3A0C;
    }
}

loc_804C391C:
{
    r4 = MemoryInline::FlatRead32((r30 + 44));
    r0 = MemoryInline::FlatRead32((r30 + 16));
    r3 = MemoryInline::FlatRead32((r30 + 36));
    r0 = (r4 + r0);
    r3 = (r3 + r0);
}

loc_804C3934:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_804C3940;
    }
}

loc_804C3938:
{
    r0 = 0;
    goto loc_804C3968;
}

loc_804C3940:
{
}

loc_804C3944:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_804C3954;
    }
}

loc_804C3948:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_804C3968;
}

loc_804C3954:
{
    r0 = (r3 + 904);
    r3 = 0x80620000u;
    r0_rot_111 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_111 & -2);
    r3 = (r3 + -18752);
    r3_addr_109 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_109);
}

loc_804C3968:
{
    MemoryInline::FlatWrite16((r30 + 88), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r30 + 44));
    r0 = MemoryInline::FlatRead32((r30 + 16));
    r3 = MemoryInline::FlatRead32((r30 + 40));
    r0 = (r4 + r0);
    r3 = (r3 + r0);
}

loc_804C3984:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_804C3990;
    }
}

loc_804C3988:
{
    r0 = 0;
    goto loc_804C39B8;
}

loc_804C3990:
{
}

loc_804C3994:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_804C39A4;
    }
}

loc_804C3998:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_804C39B8;
}

loc_804C39A4:
{
    r0 = (r3 + 904);
    r3 = 0x80620000u;
    r0_rot_113 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_113 & -2);
    r3 = (r3 + -18752);
    r3_addr_111 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_111);
}

loc_804C39B8:
{
    MemoryInline::FlatWrite16((r30 + 92), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r30 + 16));
    r0 = MemoryInline::FlatRead32((r30 + 48));
    r3 = (r3 + r0);
    r3 = (r3 + -30);
}

loc_804C39D0:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_804C39DC;
    }
}

loc_804C39D4:
{
    r0 = 0;
    goto loc_804C3A04;
}

loc_804C39DC:
{
}

loc_804C39E0:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_804C39F0;
    }
}

loc_804C39E4:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_804C3A04;
}

loc_804C39F0:
{
    r0 = (r3 + 904);
    r3 = 0x80620000u;
    r0_rot_115 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_115 & -2);
    r3 = (r3 + -18752);
    r3_addr_113 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_113);
}

loc_804C3A04:
{
    MemoryInline::FlatWrite16((r30 + 96), static_cast<uint16_t>(r0));
    goto loc_804C3B10;
}

loc_804C3A0C:
{
    r5 = MemoryInline::FlatRead32((r30 + 44));
    r3 = MemoryInline::FlatRead32((r30 + 36));
    r4 = MemoryInline::FlatRead32((r30 + 32));
    r0 = MemoryInline::FlatRead32((r30 + 16));
    r3 = (r5 + r3);
    r0 = (r4 + r0);
    r3 = (r3 + r0);
}

loc_804C3A2C:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_804C3A38;
    }
}

loc_804C3A30:
{
    r0 = 0;
    goto loc_804C3A60;
}

loc_804C3A38:
{
}

loc_804C3A3C:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_804C3A4C;
    }
}

loc_804C3A40:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_804C3A60;
}

loc_804C3A4C:
{
    r0 = (r3 + 904);
    r3 = 0x80620000u;
    r0_rot_117 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_117 & -2);
    r3 = (r3 + -18752);
    r3_addr_115 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_115);
}

loc_804C3A60:
{
    MemoryInline::FlatWrite16((r30 + 88), static_cast<uint16_t>(r0));
    r5 = MemoryInline::FlatRead32((r30 + 44));
    r3 = MemoryInline::FlatRead32((r30 + 40));
    r4 = MemoryInline::FlatRead32((r30 + 32));
    r0 = MemoryInline::FlatRead32((r30 + 16));
    r3 = (r5 + r3);
    r0 = (r4 + r0);
    r3 = (r3 + r0);
}

loc_804C3A84:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_804C3A90;
    }
}

loc_804C3A88:
{
    r0 = 0;
    goto loc_804C3AB8;
}

loc_804C3A90:
{
}

loc_804C3A94:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_804C3AA4;
    }
}

loc_804C3A98:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_804C3AB8;
}

loc_804C3AA4:
{
    r0 = (r3 + 904);
    r3 = 0x80620000u;
    r0_rot_119 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_119 & -2);
    r3 = (r3 + -18752);
    r3_addr_117 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_117);
}

loc_804C3AB8:
{
    MemoryInline::FlatWrite16((r30 + 92), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r30 + 32));
    r0 = MemoryInline::FlatRead32((r30 + 16));
    r3 = MemoryInline::FlatRead32((r30 + 48));
    r0 = (r4 + r0);
    r3 = (r0 + r3);
    r3 = (r3 + -30);
}

loc_804C3AD8:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_804C3AE4;
    }
}

loc_804C3ADC:
{
    r0 = 0;
    goto loc_804C3B0C;
}

loc_804C3AE4:
{
}

loc_804C3AE8:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_804C3AF8;
    }
}

loc_804C3AEC:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_804C3B0C;
}

loc_804C3AF8:
{
    r0 = (r3 + 904);
    r3 = 0x80620000u;
    r0_rot_121 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_121 & -2);
    r3 = (r3 + -18752);
    r3_addr_119 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_119);
}

loc_804C3B0C:
{
    MemoryInline::FlatWrite16((r30 + 96), static_cast<uint16_t>(r0));
}

loc_804C3B10:
{
    r0 = MemoryInline::FlatRead32((r30 + 4));
    r0 = (r0 & 4);
}

loc_804C3B18:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804C3C0C;
    }
}

loc_804C3B1C:
{
    r4 = MemoryInline::FlatRead32((r30 + 44));
    r0 = MemoryInline::FlatRead32((r30 + 20));
    r3 = MemoryInline::FlatRead32((r30 + 36));
    r0 = (r4 + r0);
    r3 = (r3 + r0);
}

loc_804C3B34:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_804C3B40;
    }
}

loc_804C3B38:
{
    r0 = 0;
    goto loc_804C3B68;
}

loc_804C3B40:
{
}

loc_804C3B44:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_804C3B54;
    }
}

loc_804C3B48:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_804C3B68;
}

loc_804C3B54:
{
    r0 = (r3 + 904);
    r3 = 0x80620000u;
    r0_rot_124 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_124 & -2);
    r3 = (r3 + -18752);
    r3_addr_122 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_122);
}

loc_804C3B68:
{
    MemoryInline::FlatWrite16((r30 + 100), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r30 + 44));
    r0 = MemoryInline::FlatRead32((r30 + 20));
    r3 = MemoryInline::FlatRead32((r30 + 40));
    r0 = (r4 + r0);
    r3 = (r3 + r0);
}

loc_804C3B84:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_804C3B90;
    }
}

loc_804C3B88:
{
    r0 = 0;
    goto loc_804C3BB8;
}

loc_804C3B90:
{
}

loc_804C3B94:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_804C3BA4;
    }
}

loc_804C3B98:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_804C3BB8;
}

loc_804C3BA4:
{
    r0 = (r3 + 904);
    r3 = 0x80620000u;
    r0_rot_126 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_126 & -2);
    r3 = (r3 + -18752);
    r3_addr_124 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_124);
}

loc_804C3BB8:
{
    MemoryInline::FlatWrite16((r30 + 104), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r30 + 20));
    r0 = MemoryInline::FlatRead32((r30 + 48));
    r3 = (r3 + r0);
    r3 = (r3 + -30);
}

loc_804C3BD0:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_804C3BDC;
    }
}

loc_804C3BD4:
{
    r0 = 0;
    goto loc_804C3C04;
}

loc_804C3BDC:
{
}

loc_804C3BE0:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_804C3BF0;
    }
}

loc_804C3BE4:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_804C3C04;
}

loc_804C3BF0:
{
    r0 = (r3 + 904);
    r3 = 0x80620000u;
    r0_rot_128 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_128 & -2);
    r3 = (r3 + -18752);
    r3_addr_126 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_126);
}

loc_804C3C04:
{
    MemoryInline::FlatWrite16((r30 + 108), static_cast<uint16_t>(r0));
    goto loc_804C43B8;
}

loc_804C3C0C:
{
    r5 = MemoryInline::FlatRead32((r30 + 44));
    r3 = MemoryInline::FlatRead32((r30 + 36));
    r4 = MemoryInline::FlatRead32((r30 + 32));
    r0 = MemoryInline::FlatRead32((r30 + 20));
    r3 = (r5 + r3);
    r0 = (r4 + r0);
    r3 = (r3 + r0);
}

loc_804C3C2C:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_804C3C38;
    }
}

loc_804C3C30:
{
    r0 = 0;
    goto loc_804C3C60;
}

loc_804C3C38:
{
}

loc_804C3C3C:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_804C3C4C;
    }
}

loc_804C3C40:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_804C3C60;
}

loc_804C3C4C:
{
    r0 = (r3 + 904);
    r3 = 0x80620000u;
    r0_rot_130 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_130 & -2);
    r3 = (r3 + -18752);
    r3_addr_128 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_128);
}

loc_804C3C60:
{
    MemoryInline::FlatWrite16((r30 + 100), static_cast<uint16_t>(r0));
    r5 = MemoryInline::FlatRead32((r30 + 44));
    r3 = MemoryInline::FlatRead32((r30 + 40));
    r4 = MemoryInline::FlatRead32((r30 + 32));
    r0 = MemoryInline::FlatRead32((r30 + 20));
    r3 = (r5 + r3);
    r0 = (r4 + r0);
    r3 = (r3 + r0);
}

loc_804C3C84:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_804C3C90;
    }
}

loc_804C3C88:
{
    r0 = 0;
    goto loc_804C3CB8;
}

loc_804C3C90:
{
}

loc_804C3C94:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_804C3CA4;
    }
}

loc_804C3C98:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_804C3CB8;
}

loc_804C3CA4:
{
    r0 = (r3 + 904);
    r3 = 0x80620000u;
    r0_rot_132 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_132 & -2);
    r3 = (r3 + -18752);
    r3_addr_130 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_130);
}

loc_804C3CB8:
{
    MemoryInline::FlatWrite16((r30 + 104), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r30 + 32));
    r0 = MemoryInline::FlatRead32((r30 + 20));
    r3 = MemoryInline::FlatRead32((r30 + 48));
    r0 = (r4 + r0);
    r3 = (r0 + r3);
    r3 = (r3 + -30);
}

loc_804C3CD8:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_804C3CE4;
    }
}

loc_804C3CDC:
{
    r0 = 0;
    goto loc_804C3D0C;
}

loc_804C3CE4:
{
}

loc_804C3CE8:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_804C3CF8;
    }
}

loc_804C3CEC:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_804C3D0C;
}

loc_804C3CF8:
{
    r0 = (r3 + 904);
    r3 = 0x80620000u;
    r0_rot_134 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_134 & -2);
    r3 = (r3 + -18752);
    r3_addr_132 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_132);
}

loc_804C3D0C:
{
    MemoryInline::FlatWrite16((r30 + 108), static_cast<uint16_t>(r0));
    goto loc_804C43B8;
}

loc_804C3D14:
{
    r4 = MemoryInline::FlatRead32((r30 + 44));
    r0 = MemoryInline::FlatRead32((r30 + 32));
    r3 = MemoryInline::FlatRead32((r30 + 36));
    r0 = (r4 + r0);
    r3 = (r3 + r0);
}

loc_804C3D2C:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_804C3D38;
    }
}

loc_804C3D30:
{
    r0 = 0;
    goto loc_804C3D60;
}

loc_804C3D38:
{
}

loc_804C3D3C:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_804C3D4C;
    }
}

loc_804C3D40:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_804C3D60;
}

loc_804C3D4C:
{
    r0 = (r3 + 904);
    r3 = 0x80620000u;
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_6 & -2);
    r3 = (r3 + -18752);
    r3_addr_4 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_4);
}

loc_804C3D60:
{
    MemoryInline::FlatWrite16((r30 + 64), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r30 + 44));
    r0 = MemoryInline::FlatRead32((r30 + 32));
    r3 = MemoryInline::FlatRead32((r30 + 40));
    r0 = (r4 + r0);
    r3 = (r3 + r0);
}

loc_804C3D7C:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_804C3D88;
    }
}

loc_804C3D80:
{
    r0 = 0;
    goto loc_804C3DB0;
}

loc_804C3D88:
{
}

loc_804C3D8C:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_804C3D9C;
    }
}

loc_804C3D90:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_804C3DB0;
}

loc_804C3D9C:
{
    r0 = (r3 + 904);
    r3 = 0x80620000u;
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_8 & -2);
    r3 = (r3 + -18752);
    r3_addr_6 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_6);
}

loc_804C3DB0:
{
    MemoryInline::FlatWrite16((r30 + 68), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r30 + 48));
    r0 = MemoryInline::FlatRead32((r30 + 32));
    r3 = MemoryInline::FlatRead32((r30 + 52));
    r0 = (r4 + r0);
    r3 = (r3 + r0);
}

loc_804C3DCC:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_804C3DD8;
    }
}

loc_804C3DD0:
{
    r0 = 0;
    goto loc_804C3E00;
}

loc_804C3DD8:
{
}

loc_804C3DDC:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_804C3DEC;
    }
}

loc_804C3DE0:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_804C3E00;
}

loc_804C3DEC:
{
    r0 = (r3 + 904);
    r3 = 0x80620000u;
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_10 & -2);
    r3 = (r3 + -18752);
    r3_addr_8 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_8);
}

loc_804C3E00:
{
    MemoryInline::FlatWrite16((r30 + 72), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r30 + 48));
    r0 = MemoryInline::FlatRead32((r30 + 32));
    r3 = MemoryInline::FlatRead32((r30 + 56));
    r0 = (r4 + r0);
    r3 = (r3 + r0);
}

loc_804C3E1C:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_804C3E28;
    }
}

loc_804C3E20:
{
    r0 = 0;
    goto loc_804C3E50;
}

loc_804C3E28:
{
}

loc_804C3E2C:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_804C3E3C;
    }
}

loc_804C3E30:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_804C3E50;
}

loc_804C3E3C:
{
    r0 = (r3 + 904);
    r3 = 0x80620000u;
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_12 & -2);
    r3 = (r3 + -18752);
    r3_addr_10 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_10);
}

loc_804C3E50:
{
    MemoryInline::FlatWrite16((r30 + 100), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r30 + 4));
    r0 = (r0 & 1);
}

loc_804C3E5C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804C3FA4;
    }
}

loc_804C3E60:
{
    r4 = MemoryInline::FlatRead32((r30 + 44));
    r0 = MemoryInline::FlatRead32((r30 + 12));
    r3 = MemoryInline::FlatRead32((r30 + 36));
    r0 = (r4 + r0);
    r3 = (r3 + r0);
}

loc_804C3E78:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_804C3E84;
    }
}

loc_804C3E7C:
{
    r0 = 0;
    goto loc_804C3EAC;
}

loc_804C3E84:
{
}

loc_804C3E88:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_804C3E98;
    }
}

loc_804C3E8C:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_804C3EAC;
}

loc_804C3E98:
{
    r0 = (r3 + 904);
    r3 = 0x80620000u;
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_14 & -2);
    r3 = (r3 + -18752);
    r3_addr_12 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_12);
}

loc_804C3EAC:
{
    MemoryInline::FlatWrite16((r30 + 76), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r30 + 44));
    r0 = MemoryInline::FlatRead32((r30 + 12));
    r3 = MemoryInline::FlatRead32((r30 + 40));
    r0 = (r4 + r0);
    r3 = (r3 + r0);
}

loc_804C3EC8:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_804C3ED4;
    }
}

loc_804C3ECC:
{
    r0 = 0;
    goto loc_804C3EFC;
}

loc_804C3ED4:
{
}

loc_804C3ED8:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_804C3EE8;
    }
}

loc_804C3EDC:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_804C3EFC;
}

loc_804C3EE8:
{
    r0 = (r3 + 904);
    r3 = 0x80620000u;
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_16 & -2);
    r3 = (r3 + -18752);
    r3_addr_14 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_14);
}

loc_804C3EFC:
{
    MemoryInline::FlatWrite16((r30 + 80), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r30 + 48));
    r0 = MemoryInline::FlatRead32((r30 + 12));
    r3 = MemoryInline::FlatRead32((r30 + 52));
    r0 = (r4 + r0);
    r3 = (r3 + r0);
}

loc_804C3F18:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_804C3F24;
    }
}

loc_804C3F1C:
{
    r0 = 0;
    goto loc_804C3F4C;
}

loc_804C3F24:
{
}

loc_804C3F28:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_804C3F38;
    }
}

loc_804C3F2C:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_804C3F4C;
}

loc_804C3F38:
{
    r0 = (r3 + 904);
    r3 = 0x80620000u;
    r0_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_18 & -2);
    r3 = (r3 + -18752);
    r3_addr_16 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_16);
}

loc_804C3F4C:
{
    MemoryInline::FlatWrite16((r30 + 84), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r30 + 48));
    r0 = MemoryInline::FlatRead32((r30 + 12));
    r3 = MemoryInline::FlatRead32((r30 + 56));
    r0 = (r4 + r0);
    r3 = (r3 + r0);
}

loc_804C3F68:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_804C3F74;
    }
}

loc_804C3F6C:
{
    r0 = 0;
    goto loc_804C3F9C;
}

loc_804C3F74:
{
}

loc_804C3F78:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_804C3F88;
    }
}

loc_804C3F7C:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_804C3F9C;
}

loc_804C3F88:
{
    r0 = (r3 + 904);
    r3 = 0x80620000u;
    r0_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_20 & -2);
    r3 = (r3 + -18752);
    r3_addr_18 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_18);
}

loc_804C3F9C:
{
    MemoryInline::FlatWrite16((r30 + 104), static_cast<uint16_t>(r0));
    goto loc_804C4104;
}

loc_804C3FA4:
{
    r5 = MemoryInline::FlatRead32((r30 + 44));
    r3 = MemoryInline::FlatRead32((r30 + 36));
    r4 = MemoryInline::FlatRead32((r30 + 32));
    r0 = MemoryInline::FlatRead32((r30 + 12));
    r3 = (r5 + r3);
    r0 = (r4 + r0);
    r3 = (r3 + r0);
}

loc_804C3FC4:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_804C3FD0;
    }
}

loc_804C3FC8:
{
    r0 = 0;
    goto loc_804C3FF8;
}

loc_804C3FD0:
{
}

loc_804C3FD4:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_804C3FE4;
    }
}

loc_804C3FD8:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_804C3FF8;
}

loc_804C3FE4:
{
    r0 = (r3 + 904);
    r3 = 0x80620000u;
    r0_rot_22 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_22 & -2);
    r3 = (r3 + -18752);
    r3_addr_20 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_20);
}

loc_804C3FF8:
{
    MemoryInline::FlatWrite16((r30 + 76), static_cast<uint16_t>(r0));
    r5 = MemoryInline::FlatRead32((r30 + 44));
    r3 = MemoryInline::FlatRead32((r30 + 40));
    r4 = MemoryInline::FlatRead32((r30 + 32));
    r0 = MemoryInline::FlatRead32((r30 + 12));
    r3 = (r5 + r3);
    r0 = (r4 + r0);
    r3 = (r3 + r0);
}

loc_804C401C:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_804C4028;
    }
}

loc_804C4020:
{
    r0 = 0;
    goto loc_804C4050;
}

loc_804C4028:
{
}

loc_804C402C:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_804C403C;
    }
}

loc_804C4030:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_804C4050;
}

loc_804C403C:
{
    r0 = (r3 + 904);
    r3 = 0x80620000u;
    r0_rot_24 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_24 & -2);
    r3 = (r3 + -18752);
    r3_addr_22 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_22);
}

loc_804C4050:
{
    MemoryInline::FlatWrite16((r30 + 80), static_cast<uint16_t>(r0));
    r5 = MemoryInline::FlatRead32((r30 + 48));
    r3 = MemoryInline::FlatRead32((r30 + 52));
    r4 = MemoryInline::FlatRead32((r30 + 32));
    r0 = MemoryInline::FlatRead32((r30 + 12));
    r3 = (r5 + r3);
    r0 = (r4 + r0);
    r3 = (r3 + r0);
}

loc_804C4074:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_804C4080;
    }
}

loc_804C4078:
{
    r0 = 0;
    goto loc_804C40A8;
}

loc_804C4080:
{
}

loc_804C4084:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_804C4094;
    }
}

loc_804C4088:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_804C40A8;
}

loc_804C4094:
{
    r0 = (r3 + 904);
    r3 = 0x80620000u;
    r0_rot_26 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_26 & -2);
    r3 = (r3 + -18752);
    r3_addr_24 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_24);
}

loc_804C40A8:
{
    MemoryInline::FlatWrite16((r30 + 84), static_cast<uint16_t>(r0));
    r5 = MemoryInline::FlatRead32((r30 + 48));
    r3 = MemoryInline::FlatRead32((r30 + 56));
    r4 = MemoryInline::FlatRead32((r30 + 32));
    r0 = MemoryInline::FlatRead32((r30 + 12));
    r3 = (r5 + r3);
    r0 = (r4 + r0);
    r3 = (r3 + r0);
}

loc_804C40CC:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_804C40D8;
    }
}

loc_804C40D0:
{
    r0 = 0;
    goto loc_804C4100;
}

loc_804C40D8:
{
}

loc_804C40DC:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_804C40EC;
    }
}

loc_804C40E0:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_804C4100;
}

loc_804C40EC:
{
    r0 = (r3 + 904);
    r3 = 0x80620000u;
    r0_rot_28 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_28 & -2);
    r3 = (r3 + -18752);
    r3_addr_26 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_26);
}

loc_804C4100:
{
    MemoryInline::FlatWrite16((r30 + 104), static_cast<uint16_t>(r0));
}

loc_804C4104:
{
    r0 = MemoryInline::FlatRead32((r30 + 4));
    r0 = (r0 & 2);
}

loc_804C410C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804C4254;
    }
}

loc_804C4110:
{
    r4 = MemoryInline::FlatRead32((r30 + 44));
    r0 = MemoryInline::FlatRead32((r30 + 16));
    r3 = MemoryInline::FlatRead32((r30 + 36));
    r0 = (r4 + r0);
    r3 = (r3 + r0);
}

loc_804C4128:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_804C4134;
    }
}

loc_804C412C:
{
    r0 = 0;
    goto loc_804C415C;
}

loc_804C4134:
{
}

loc_804C4138:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_804C4148;
    }
}

loc_804C413C:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_804C415C;
}

loc_804C4148:
{
    r0 = (r3 + 904);
    r3 = 0x80620000u;
    r0_rot_31 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_31 & -2);
    r3 = (r3 + -18752);
    r3_addr_29 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_29);
}

loc_804C415C:
{
    MemoryInline::FlatWrite16((r30 + 88), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r30 + 44));
    r0 = MemoryInline::FlatRead32((r30 + 16));
    r3 = MemoryInline::FlatRead32((r30 + 40));
    r0 = (r4 + r0);
    r3 = (r3 + r0);
}

loc_804C4178:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_804C4184;
    }
}

loc_804C417C:
{
    r0 = 0;
    goto loc_804C41AC;
}

loc_804C4184:
{
}

loc_804C4188:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_804C4198;
    }
}

loc_804C418C:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_804C41AC;
}

loc_804C4198:
{
    r0 = (r3 + 904);
    r3 = 0x80620000u;
    r0_rot_33 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_33 & -2);
    r3 = (r3 + -18752);
    r3_addr_31 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_31);
}

loc_804C41AC:
{
    MemoryInline::FlatWrite16((r30 + 92), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r30 + 48));
    r0 = MemoryInline::FlatRead32((r30 + 16));
    r3 = MemoryInline::FlatRead32((r30 + 52));
    r0 = (r4 + r0);
    r3 = (r3 + r0);
}

loc_804C41C8:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_804C41D4;
    }
}

loc_804C41CC:
{
    r0 = 0;
    goto loc_804C41FC;
}

loc_804C41D4:
{
}

loc_804C41D8:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_804C41E8;
    }
}

loc_804C41DC:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_804C41FC;
}

loc_804C41E8:
{
    r0 = (r3 + 904);
    r3 = 0x80620000u;
    r0_rot_35 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_35 & -2);
    r3 = (r3 + -18752);
    r3_addr_33 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_33);
}

loc_804C41FC:
{
    MemoryInline::FlatWrite16((r30 + 96), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r30 + 48));
    r0 = MemoryInline::FlatRead32((r30 + 16));
    r3 = MemoryInline::FlatRead32((r30 + 56));
    r0 = (r4 + r0);
    r3 = (r3 + r0);
}

loc_804C4218:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_804C4224;
    }
}

loc_804C421C:
{
    r0 = 0;
    goto loc_804C424C;
}

loc_804C4224:
{
}

loc_804C4228:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_804C4238;
    }
}

loc_804C422C:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_804C424C;
}

loc_804C4238:
{
    r0 = (r3 + 904);
    r3 = 0x80620000u;
    r0_rot_37 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_37 & -2);
    r3 = (r3 + -18752);
    r3_addr_35 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_35);
}

loc_804C424C:
{
    MemoryInline::FlatWrite16((r30 + 108), static_cast<uint16_t>(r0));
    goto loc_804C43B4;
}

loc_804C4254:
{
    r5 = MemoryInline::FlatRead32((r30 + 44));
    r3 = MemoryInline::FlatRead32((r30 + 36));
    r4 = MemoryInline::FlatRead32((r30 + 32));
    r0 = MemoryInline::FlatRead32((r30 + 16));
    r3 = (r5 + r3);
    r0 = (r4 + r0);
    r3 = (r3 + r0);
}

loc_804C4274:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_804C4280;
    }
}

loc_804C4278:
{
    r0 = 0;
    goto loc_804C42A8;
}

loc_804C4280:
{
}

loc_804C4284:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_804C4294;
    }
}

loc_804C4288:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_804C42A8;
}

loc_804C4294:
{
    r0 = (r3 + 904);
    r3 = 0x80620000u;
    r0_rot_39 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_39 & -2);
    r3 = (r3 + -18752);
    r3_addr_37 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_37);
}

loc_804C42A8:
{
    MemoryInline::FlatWrite16((r30 + 88), static_cast<uint16_t>(r0));
    r5 = MemoryInline::FlatRead32((r30 + 44));
    r3 = MemoryInline::FlatRead32((r30 + 40));
    r4 = MemoryInline::FlatRead32((r30 + 32));
    r0 = MemoryInline::FlatRead32((r30 + 16));
    r3 = (r5 + r3);
    r0 = (r4 + r0);
    r3 = (r3 + r0);
}

loc_804C42CC:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_804C42D8;
    }
}

loc_804C42D0:
{
    r0 = 0;
    goto loc_804C4300;
}

loc_804C42D8:
{
}

loc_804C42DC:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_804C42EC;
    }
}

loc_804C42E0:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_804C4300;
}

loc_804C42EC:
{
    r0 = (r3 + 904);
    r3 = 0x80620000u;
    r0_rot_41 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_41 & -2);
    r3 = (r3 + -18752);
    r3_addr_39 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_39);
}

loc_804C4300:
{
    MemoryInline::FlatWrite16((r30 + 92), static_cast<uint16_t>(r0));
    r5 = MemoryInline::FlatRead32((r30 + 48));
    r3 = MemoryInline::FlatRead32((r30 + 52));
    r4 = MemoryInline::FlatRead32((r30 + 32));
    r0 = MemoryInline::FlatRead32((r30 + 16));
    r3 = (r5 + r3);
    r0 = (r4 + r0);
    r3 = (r3 + r0);
}

loc_804C4324:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_804C4330;
    }
}

loc_804C4328:
{
    r0 = 0;
    goto loc_804C4358;
}

loc_804C4330:
{
}

loc_804C4334:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_804C4344;
    }
}

loc_804C4338:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_804C4358;
}

loc_804C4344:
{
    r0 = (r3 + 904);
    r3 = 0x80620000u;
    r0_rot_43 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_43 & -2);
    r3 = (r3 + -18752);
    r3_addr_41 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_41);
}

loc_804C4358:
{
    MemoryInline::FlatWrite16((r30 + 96), static_cast<uint16_t>(r0));
    r5 = MemoryInline::FlatRead32((r30 + 48));
    r3 = MemoryInline::FlatRead32((r30 + 56));
    r4 = MemoryInline::FlatRead32((r30 + 32));
    r0 = MemoryInline::FlatRead32((r30 + 16));
    r3 = (r5 + r3);
    r0 = (r4 + r0);
    r3 = (r3 + r0);
}

loc_804C437C:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_804C4388;
    }
}

loc_804C4380:
{
    r0 = 0;
    goto loc_804C43B0;
}

loc_804C4388:
{
}

loc_804C438C:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_804C439C;
    }
}

loc_804C4390:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_804C43B0;
}

loc_804C439C:
{
    r0 = (r3 + 904);
    r3 = 0x80620000u;
    r0_rot_45 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_45 & -2);
    r3 = (r3 + -18752);
    r3_addr_43 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_43);
}

loc_804C43B0:
{
    MemoryInline::FlatWrite16((r30 + 108), static_cast<uint16_t>(r0));
}

loc_804C43B4:
{
    r29 = (r29 | -2147483648);
}

loc_804C43B8:
{
    r3 = MemoryInline::FlatRead32((r28 + 24));
    // inline leaf 0x804C6230 (22 guest instruction(s))
    r4 = (r3 * 68);
    r5 = MemoryInline::FlatRead32((r13 + -15216));
    r3 = 0;
    r4_addr_0 = (r4 + r5);
    MemoryInline::FlatWrite32(r4_addr_0, r3);
    r4 = r4_addr_0;
    r0 = -960;
    guest_range_0 = MemoryInline::ResolveRangeHost((r4 + 4), 0, 62u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r4 + 4), r3);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r4 + 8), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r4 + 12), r3);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r4 + 16), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r4 + 20), r0);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r4 + 24), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r4 + 28), r0);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r4 + 32), r0);
    }
    MemoryInline::WriteResolved16(guest_range_0, 60u, (r4 + 64), static_cast<uint16_t>(r3));
    MemoryInline::WriteResolved16(guest_range_0, 56u, (r4 + 60), static_cast<uint16_t>(r3));
    MemoryInline::WriteResolved16(guest_range_0, 52u, (r4 + 56), static_cast<uint16_t>(r3));
    MemoryInline::WriteResolved16(guest_range_0, 48u, (r4 + 52), static_cast<uint16_t>(r3));
    MemoryInline::WriteResolved16(guest_range_0, 44u, (r4 + 48), static_cast<uint16_t>(r3));
    MemoryInline::WriteResolved16(guest_range_0, 40u, (r4 + 44), static_cast<uint16_t>(r3));
    MemoryInline::WriteResolved16(guest_range_0, 36u, (r4 + 40), static_cast<uint16_t>(r3));
    MemoryInline::WriteResolved16(guest_range_0, 32u, (r4 + 36), static_cast<uint16_t>(r3));
    // end of inlined leaf 0x804C6230
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x804D12F0
    r4 = MemoryInline::FlatRead16((r30 + 60));
    r0 = 0;
    r31 = r3;
    MemoryInline::FlatWrite16((r28 + 146), static_cast<uint16_t>(r4));
    r3 = (r28 + 62);
    MemoryInline::FlatWrite16((r28 + 148), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 64));
    MemoryInline::FlatWrite16((r28 + 60), static_cast<uint16_t>(r0));
}

loc_804C43E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804C43F0;
    }
}

loc_804C43EC:
{
    r29 = (r29 | 1);
}

loc_804C43F0:
{
    r0 = 0;
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 46u, false, true);
    MemoryInline::WriteResolved16(guest_range_1, 0u, r3, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 68));
    MemoryInline::WriteResolved16(guest_range_1, 2u, (r3 + 2), static_cast<uint16_t>(r0));
}

loc_804C4404:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804C440C;
    }
}

loc_804C4408:
{
    r29 = (r29 | 2);
}

loc_804C440C:
{
    r0 = 0;
    MemoryInline::WriteResolved16(guest_range_1, 4u, (r3 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 76));
    MemoryInline::WriteResolved16(guest_range_1, 6u, (r3 + 6), static_cast<uint16_t>(r0));
}

loc_804C4420:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804C4428;
    }
}

loc_804C4424:
{
    r29 = (r29 | 65536);
}

loc_804C4428:
{
    r0 = 0;
    MemoryInline::WriteResolved16(guest_range_1, 8u, (r3 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 80));
    MemoryInline::WriteResolved16(guest_range_1, 10u, (r3 + 10), static_cast<uint16_t>(r0));
}

loc_804C443C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804C4444;
    }
}

loc_804C4440:
{
    r29 = (r29 | 131072);
}

loc_804C4444:
{
    r0 = 0;
    MemoryInline::WriteResolved16(guest_range_1, 12u, (r3 + 12), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 88));
    MemoryInline::WriteResolved16(guest_range_1, 14u, (r3 + 14), static_cast<uint16_t>(r0));
}

loc_804C4458:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804C4460;
    }
}

loc_804C445C:
{
    r29 = (r29 | 2097152);
}

loc_804C4460:
{
    r0 = 0;
    MemoryInline::WriteResolved16(guest_range_1, 16u, (r3 + 16), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 92));
    MemoryInline::WriteResolved16(guest_range_1, 18u, (r3 + 18), static_cast<uint16_t>(r0));
}

loc_804C4474:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804C447C;
    }
}

loc_804C4478:
{
    r29 = (r29 | 4194304);
}

loc_804C447C:
{
    r0 = 0;
    MemoryInline::WriteResolved16(guest_range_1, 20u, (r3 + 20), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 100));
    MemoryInline::WriteResolved16(guest_range_1, 22u, (r3 + 22), static_cast<uint16_t>(r0));
}

loc_804C4490:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804C4498;
    }
}

loc_804C4494:
{
    r29 = (r29 | 67108864);
}

loc_804C4498:
{
    r0 = 0;
    MemoryInline::WriteResolved16(guest_range_1, 24u, (r3 + 24), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 104));
    MemoryInline::WriteResolved16(guest_range_1, 26u, (r3 + 26), static_cast<uint16_t>(r0));
}

loc_804C44AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804C44B4;
    }
}

loc_804C44B0:
{
    r29 = (r29 | 134217728);
}

loc_804C44B4:
{
    r0 = 0;
    MemoryInline::WriteResolved16(guest_range_1, 28u, (r3 + 28), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 72));
    MemoryInline::WriteResolved16(guest_range_1, 30u, (r3 + 30), static_cast<uint16_t>(r0));
}

loc_804C44C8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804C44D0;
    }
}

loc_804C44CC:
{
    r29 = (r29 | 8);
}

loc_804C44D0:
{
    r0 = 0;
    MemoryInline::WriteResolved16(guest_range_1, 32u, (r3 + 32), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 84));
    MemoryInline::WriteResolved16(guest_range_1, 34u, (r3 + 34), static_cast<uint16_t>(r0));
}

loc_804C44E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804C44EC;
    }
}

loc_804C44E8:
{
    r29 = (r29 | 524288);
}

loc_804C44EC:
{
    r0 = 0;
    MemoryInline::WriteResolved16(guest_range_1, 36u, (r3 + 36), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 96));
    MemoryInline::WriteResolved16(guest_range_1, 38u, (r3 + 38), static_cast<uint16_t>(r0));
}

loc_804C4500:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804C4508;
    }
}

loc_804C4504:
{
    r29 = (r29 | 16777216);
}

loc_804C4508:
{
    r0 = 0;
    MemoryInline::WriteResolved16(guest_range_1, 40u, (r3 + 40), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 108));
    MemoryInline::WriteResolved16(guest_range_1, 42u, (r3 + 42), static_cast<uint16_t>(r0));
}

loc_804C451C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804C4524;
    }
}

loc_804C4520:
{
    r29 = (r29 | 536870912);
}

loc_804C4524:
{
    r0 = MemoryInline::FlatRead32((r28 + 28));
    r30 = 0;
    MemoryInline::WriteResolved16(guest_range_1, 44u, (r3 + 44), static_cast<uint16_t>(r30));
    r3 = (r28 + 258);
    r0 = (r0 | 274);
    r4 = 0;
    MemoryInline::FlatWrite32((r28 + 52), r29);
    r5 = 32;
    MemoryInline::FlatWrite32((r28 + 28), r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead32((r28 + 28));
    r3 = r31;
    MemoryInline::FlatWrite16((r28 + 256), static_cast<uint16_t>(r30));
    r0 = (r0 | 50331648);
    MemoryInline::FlatWrite32((r28 + 28), r0);
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl3_0x804D1330:
{
}

loc_inl3_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl3_0x804D1344;
    }
}

loc_inl3_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl3_0x804D1348;
}

loc_inl3_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl3_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_1 & 1);
}

loc_inl3_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
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
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000027FB gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804C2EC0 func_804C2EC0 preserves=true fpr_mask=0x00000000
