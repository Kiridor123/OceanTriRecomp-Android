#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_808415E0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r10_addr_0 = 0;
    uint32_t r10_addr_1 = 0;
    uint32_t r10_addr_2 = 0;
    uint32_t r10_addr_3 = 0;
    uint32_t r31_rot_0 = 0;
    uint32_t r31_rot_1 = 0;
    uint32_t r31_rot_2 = 0;
    uint32_t r31_rot_3 = 0;
    uint32_t r31_rot_4 = 0;
    uint32_t r31_rot_5 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_10 = 0;
    uint32_t r8_rot_11 = 0;
    uint32_t r8_rot_12 = 0;
    uint32_t r8_rot_13 = 0;
    uint32_t r8_rot_14 = 0;
    uint32_t r8_rot_15 = 0;
    uint32_t r8_rot_16 = 0;
    uint32_t r8_rot_17 = 0;
    uint32_t r8_rot_18 = 0;
    uint32_t r8_rot_19 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_20 = 0;
    uint32_t r8_rot_21 = 0;
    uint32_t r8_rot_22 = 0;
    uint32_t r8_rot_23 = 0;
    uint32_t r8_rot_24 = 0;
    uint32_t r8_rot_25 = 0;
    uint32_t r8_rot_26 = 0;
    uint32_t r8_rot_27 = 0;
    uint32_t r8_rot_28 = 0;
    uint32_t r8_rot_29 = 0;
    uint32_t r8_rot_3 = 0;
    uint32_t r8_rot_30 = 0;
    uint32_t r8_rot_31 = 0;
    uint32_t r8_rot_32 = 0;
    uint32_t r8_rot_33 = 0;
    uint32_t r8_rot_34 = 0;
    uint32_t r8_rot_35 = 0;
    uint32_t r8_rot_36 = 0;
    uint32_t r8_rot_37 = 0;
    uint32_t r8_rot_38 = 0;
    uint32_t r8_rot_39 = 0;
    uint32_t r8_rot_4 = 0;
    uint32_t r8_rot_40 = 0;
    uint32_t r8_rot_41 = 0;
    uint32_t r8_rot_42 = 0;
    uint32_t r8_rot_43 = 0;
    uint32_t r8_rot_44 = 0;
    uint32_t r8_rot_45 = 0;
    uint32_t r8_rot_5 = 0;
    uint32_t r8_rot_6 = 0;
    uint32_t r8_rot_7 = 0;
    uint32_t r8_rot_8 = 0;
    uint32_t r8_rot_9 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_10 = 0;
    uint32_t r9_rot_11 = 0;
    uint32_t r9_rot_12 = 0;
    uint32_t r9_rot_13 = 0;
    uint32_t r9_rot_14 = 0;
    uint32_t r9_rot_15 = 0;
    uint32_t r9_rot_16 = 0;
    uint32_t r9_rot_17 = 0;
    uint32_t r9_rot_18 = 0;
    uint32_t r9_rot_2 = 0;
    uint32_t r9_rot_3 = 0;
    uint32_t r9_rot_4 = 0;
    uint32_t r9_rot_5 = 0;
    uint32_t r9_rot_6 = 0;
    uint32_t r9_rot_7 = 0;
    uint32_t r9_rot_8 = 0;
    uint32_t r9_rot_9 = 0;

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
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    goto loc_808415E0;

loc_808415E0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r6 = 0x80870000u;
    r6 = (r6 + -32112);
    r0 = MemoryInline::FlatRead32((r6 + 1720));
}

loc_80841600:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808420C4;
    }
}

loc_80841604:
{
    r3 = 0x80840000u;
    r8 = 16;
    r4 = (r3 + 32032);
    r7 = 0;
    r5 = 65536;
    r0 = 0;
    r3 = 715849728;
    ctr = r8;
    // nop
}

loc_80841628:
{
    r10 = MemoryInline::FlatRead32((r6 + 116));
    r9 = 0;
    r10_addr_2 = (r10 + r7);
    r11 = MemoryInline::FlatRead32(r10_addr_2);
    r10 = r10_addr_2;
    r8 = 0;
}

loc_8084163C:
{
    if ((static_cast<int32_t>(r11) == static_cast<int32_t>(0))) {
        goto loc_808420BC;
    }
}

loc_80841640:
{
    r29 = MemoryInline::FlatRead32((r10 + 4));
    r12 = 0;
    r29 = (r29 & 536870912);
}

loc_8084164C:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_80841668;
    }
}

loc_80841650:
{
    r29 = MemoryInline::FlatRead16((r10 + 50));
    r9 = 1;
    MemoryInline::FlatWrite16((r10 + 48), static_cast<uint16_t>(r29));
    r29 = MemoryInline::FlatRead32((r10 + 4));
    r29 = (r29 & -536870913);
    MemoryInline::FlatWrite32((r10 + 4), r29);
}

loc_80841668:
{
    r29 = MemoryInline::FlatRead32((r10 + 4));
    r29 = (r29 & 268435456);
}

loc_80841670:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_808416BC;
    }
}

loc_80841674:
{
    r9 = MemoryInline::FlatRead32((r10 + 8));
}

loc_8084167C:
{
    if ((static_cast<int32_t>(r9) > static_cast<int32_t>(-904))) {
        goto loc_80841688;
    }
}

loc_80841680:
{
    r9 = 0;
    goto loc_808416A4;
}

loc_80841688:
{
}

loc_8084168C:
{
    if ((static_cast<int32_t>(r9) < static_cast<int32_t>(60))) {
        goto loc_80841698;
    }
}

loc_80841690:
{
    r9 = (r5 + -156);
    goto loc_808416A4;
}

loc_80841698:
{
    r9_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(1));
    r9 = (r9_rot_2 & -2);
    r9 = (r4 + r9);
    r9 = MemoryInline::FlatRead16((r9 + 1808));
}

loc_808416A4:
{
    MemoryInline::FlatWrite16((r10 + 50), static_cast<uint16_t>(r9));
    r9 = 1;
    r29 = MemoryInline::FlatRead32((r10 + 4));
    r29 = (r29 & -268435457);
    r29 = (r29 | 536870912);
    MemoryInline::FlatWrite32((r10 + 4), r29);
}

loc_808416BC:
{
    r29 = MemoryInline::FlatRead32((r10 + 4));
    r29 = (r29 & -2147483648);
}

loc_808416C4:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_80841738;
    }
}

loc_808416C8:
{
    r29 = MemoryInline::FlatRead16((r10 + 54));
    r8 = 1;
    MemoryInline::FlatWrite16((r10 + 52), static_cast<uint16_t>(r29));
    r29 = MemoryInline::FlatRead16((r10 + 58));
    MemoryInline::FlatWrite16((r10 + 56), static_cast<uint16_t>(r29));
    r29 = MemoryInline::FlatRead16((r10 + 62));
    MemoryInline::FlatWrite16((r10 + 60), static_cast<uint16_t>(r29));
    r29 = MemoryInline::FlatRead16((r10 + 66));
    MemoryInline::FlatWrite16((r10 + 64), static_cast<uint16_t>(r29));
    r29 = MemoryInline::FlatRead16((r10 + 70));
    MemoryInline::FlatWrite16((r10 + 68), static_cast<uint16_t>(r29));
    r29 = MemoryInline::FlatRead16((r10 + 74));
    MemoryInline::FlatWrite16((r10 + 72), static_cast<uint16_t>(r29));
    r29 = MemoryInline::FlatRead16((r10 + 78));
    MemoryInline::FlatWrite16((r10 + 76), static_cast<uint16_t>(r29));
    r29 = MemoryInline::FlatRead16((r10 + 82));
    MemoryInline::FlatWrite16((r10 + 80), static_cast<uint16_t>(r29));
    r29 = MemoryInline::FlatRead16((r10 + 86));
    MemoryInline::FlatWrite16((r10 + 84), static_cast<uint16_t>(r29));
    r29 = MemoryInline::FlatRead16((r10 + 90));
    MemoryInline::FlatWrite16((r10 + 88), static_cast<uint16_t>(r29));
    r29 = MemoryInline::FlatRead16((r10 + 94));
    MemoryInline::FlatWrite16((r10 + 92), static_cast<uint16_t>(r29));
    r29 = MemoryInline::FlatRead16((r10 + 98));
    MemoryInline::FlatWrite16((r10 + 96), static_cast<uint16_t>(r29));
    r29 = MemoryInline::FlatRead32((r10 + 4));
    r29 = (r29 & 2147483647);
    MemoryInline::FlatWrite32((r10 + 4), r29);
}

loc_80841738:
{
    r29 = MemoryInline::FlatRead32((r10 + 4));
    r29 = (r29 & 1073741824);
}

loc_80841740:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_80841D34;
    }
}

loc_80841744:
{
    r8 = MemoryInline::FlatRead32((r6 + 112));
}

loc_8084174C:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_80841764;
    }
}

loc_80841750:
{
}

loc_80841754:
{
    if ((static_cast<uint32_t>(r8) == static_cast<uint32_t>(1))) {
        goto loc_80841908;
    }
}

loc_80841758:
{
}

loc_8084175C:
{
    if ((static_cast<uint32_t>(r8) == static_cast<uint32_t>(2))) {
        goto loc_80841ACC;
    }
}

loc_80841760:
{
    goto loc_80841D20;
}

loc_80841764:
{
    r29 = MemoryInline::FlatRead32((r10 + 20));
    r8 = MemoryInline::FlatRead32((r10 + 32));
    r8 = (r29 + r8);
}

loc_80841774:
{
    if ((static_cast<int32_t>(r8) > static_cast<int32_t>(-904))) {
        goto loc_80841780;
    }
}

loc_80841778:
{
    r8 = 0;
    goto loc_8084179C;
}

loc_80841780:
{
}

loc_80841784:
{
    if ((static_cast<int32_t>(r8) < static_cast<int32_t>(60))) {
        goto loc_80841790;
    }
}

loc_80841788:
{
    r8 = (r5 + -156);
    goto loc_8084179C;
}

loc_80841790:
{
    r8_rot_30 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r8 = (r8_rot_30 & -2);
    r8 = (r4 + r8);
    r8 = MemoryInline::FlatRead16((r8 + 1808));
}

loc_8084179C:
{
    MemoryInline::FlatWrite16((r10 + 54), static_cast<uint16_t>(r8));
    r29 = MemoryInline::FlatRead32((r10 + 20));
    r8 = MemoryInline::FlatRead32((r10 + 32));
    r8 = (r29 + r8);
}

loc_808417B0:
{
    if ((static_cast<int32_t>(r8) > static_cast<int32_t>(-904))) {
        goto loc_808417BC;
    }
}

loc_808417B4:
{
    r8 = 0;
    goto loc_808417D8;
}

loc_808417BC:
{
}

loc_808417C0:
{
    if ((static_cast<int32_t>(r8) < static_cast<int32_t>(60))) {
        goto loc_808417CC;
    }
}

loc_808417C4:
{
    r8 = (r5 + -156);
    goto loc_808417D8;
}

loc_808417CC:
{
    r8_rot_32 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r8 = (r8_rot_32 & -2);
    r8 = (r4 + r8);
    r8 = MemoryInline::FlatRead16((r8 + 1808));
}

loc_808417D8:
{
    MemoryInline::FlatWrite16((r10 + 58), static_cast<uint16_t>(r8));
    r29 = MemoryInline::FlatRead32((r10 + 20));
    r8 = MemoryInline::FlatRead32((r10 + 36));
    r8 = (r29 + r8);
    r8 = (r8 + -30);
}

loc_808417F0:
{
    if ((static_cast<int32_t>(r8) > static_cast<int32_t>(-904))) {
        goto loc_808417FC;
    }
}

loc_808417F4:
{
    r8 = 0;
    goto loc_80841818;
}

loc_808417FC:
{
}

loc_80841800:
{
    if ((static_cast<int32_t>(r8) < static_cast<int32_t>(60))) {
        goto loc_8084180C;
    }
}

loc_80841804:
{
    r8 = (r5 + -156);
    goto loc_80841818;
}

loc_8084180C:
{
    r8_rot_34 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r8 = (r8_rot_34 & -2);
    r8 = (r4 + r8);
    r8 = MemoryInline::FlatRead16((r8 + 1808));
}

loc_80841818:
{
    MemoryInline::FlatWrite16((r10 + 62), static_cast<uint16_t>(r8));
    r30 = MemoryInline::FlatRead32((r10 + 32));
    r8 = MemoryInline::FlatRead32((r10 + 20));
    r29 = MemoryInline::FlatRead32((r10 + 12));
    r8 = (r30 + r8);
    r8 = (r29 + r8);
}

loc_80841834:
{
    if ((static_cast<int32_t>(r8) > static_cast<int32_t>(-904))) {
        goto loc_80841840;
    }
}

loc_80841838:
{
    r8 = 0;
    goto loc_8084185C;
}

loc_80841840:
{
}

loc_80841844:
{
    if ((static_cast<int32_t>(r8) < static_cast<int32_t>(60))) {
        goto loc_80841850;
    }
}

loc_80841848:
{
    r8 = (r5 + -156);
    goto loc_8084185C;
}

loc_80841850:
{
    r8_rot_36 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r8 = (r8_rot_36 & -2);
    r8 = (r4 + r8);
    r8 = MemoryInline::FlatRead16((r8 + 1808));
}

loc_8084185C:
{
    MemoryInline::FlatWrite16((r10 + 66), static_cast<uint16_t>(r8));
    r30 = MemoryInline::FlatRead32((r10 + 32));
    r8 = MemoryInline::FlatRead32((r10 + 20));
    r29 = MemoryInline::FlatRead32((r10 + 12));
    r8 = (r30 + r8);
    r8 = (r29 + r8);
}

loc_80841878:
{
    if ((static_cast<int32_t>(r8) > static_cast<int32_t>(-904))) {
        goto loc_80841884;
    }
}

loc_8084187C:
{
    r8 = 0;
    goto loc_808418A0;
}

loc_80841884:
{
}

loc_80841888:
{
    if ((static_cast<int32_t>(r8) < static_cast<int32_t>(60))) {
        goto loc_80841894;
    }
}

loc_8084188C:
{
    r8 = (r5 + -156);
    goto loc_808418A0;
}

loc_80841894:
{
    r8_rot_38 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r8 = (r8_rot_38 & -2);
    r8 = (r4 + r8);
    r8 = MemoryInline::FlatRead16((r8 + 1808));
}

loc_808418A0:
{
    MemoryInline::FlatWrite16((r10 + 70), static_cast<uint16_t>(r8));
    r30 = MemoryInline::FlatRead32((r10 + 20));
    r8 = MemoryInline::FlatRead32((r10 + 12));
    r29 = MemoryInline::FlatRead32((r10 + 36));
    r8 = (r30 + r8);
    r8 = (r8 + r29);
    r8 = (r8 + -30);
}

loc_808418C0:
{
    if ((static_cast<int32_t>(r8) > static_cast<int32_t>(-904))) {
        goto loc_808418CC;
    }
}

loc_808418C4:
{
    r8 = 0;
    goto loc_808418E8;
}

loc_808418CC:
{
}

loc_808418D0:
{
    if ((static_cast<int32_t>(r8) < static_cast<int32_t>(60))) {
        goto loc_808418DC;
    }
}

loc_808418D4:
{
    r8 = (r5 + -156);
    goto loc_808418E8;
}

loc_808418DC:
{
    r8_rot_40 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r8 = (r8_rot_40 & -2);
    r8 = (r4 + r8);
    r8 = MemoryInline::FlatRead16((r8 + 1808));
}

loc_808418E8:
{
    MemoryInline::FlatWrite16((r10 + 74), static_cast<uint16_t>(r8));
    MemoryInline::FlatWrite16((r10 + 78), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r10 + 82), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r10 + 86), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r10 + 90), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r10 + 94), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r10 + 98), static_cast<uint16_t>(r0));
    goto loc_80841D20;
}

loc_80841908:
{
    r30 = MemoryInline::FlatRead32((r10 + 32));
    r8 = MemoryInline::FlatRead32((r10 + 20));
    r29 = MemoryInline::FlatRead32((r10 + 24));
    r8 = (r30 + r8);
    r8 = (r29 + r8);
}

loc_80841920:
{
    if ((static_cast<int32_t>(r8) > static_cast<int32_t>(-904))) {
        goto loc_8084192C;
    }
}

loc_80841924:
{
    r8 = 0;
    goto loc_80841948;
}

loc_8084192C:
{
}

loc_80841930:
{
    if ((static_cast<int32_t>(r8) < static_cast<int32_t>(60))) {
        goto loc_8084193C;
    }
}

loc_80841934:
{
    r8 = (r5 + -156);
    goto loc_80841948;
}

loc_8084193C:
{
    r8_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r8 = (r8_rot_18 & -2);
    r8 = (r4 + r8);
    r8 = MemoryInline::FlatRead16((r8 + 1808));
}

loc_80841948:
{
    MemoryInline::FlatWrite16((r10 + 54), static_cast<uint16_t>(r8));
    r30 = MemoryInline::FlatRead32((r10 + 32));
    r8 = MemoryInline::FlatRead32((r10 + 20));
    r29 = MemoryInline::FlatRead32((r10 + 28));
    r8 = (r30 + r8);
    r8 = (r29 + r8);
}

loc_80841964:
{
    if ((static_cast<int32_t>(r8) > static_cast<int32_t>(-904))) {
        goto loc_80841970;
    }
}

loc_80841968:
{
    r8 = 0;
    goto loc_8084198C;
}

loc_80841970:
{
}

loc_80841974:
{
    if ((static_cast<int32_t>(r8) < static_cast<int32_t>(60))) {
        goto loc_80841980;
    }
}

loc_80841978:
{
    r8 = (r5 + -156);
    goto loc_8084198C;
}

loc_80841980:
{
    r8_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r8 = (r8_rot_20 & -2);
    r8 = (r4 + r8);
    r8 = MemoryInline::FlatRead16((r8 + 1808));
}

loc_8084198C:
{
    MemoryInline::FlatWrite16((r10 + 58), static_cast<uint16_t>(r8));
    r29 = MemoryInline::FlatRead32((r10 + 20));
    r8 = MemoryInline::FlatRead32((r10 + 36));
    r8 = (r29 + r8);
    r8 = (r8 + -30);
}

loc_808419A4:
{
    if ((static_cast<int32_t>(r8) > static_cast<int32_t>(-904))) {
        goto loc_808419B0;
    }
}

loc_808419A8:
{
    r8 = 0;
    goto loc_808419CC;
}

loc_808419B0:
{
}

loc_808419B4:
{
    if ((static_cast<int32_t>(r8) < static_cast<int32_t>(60))) {
        goto loc_808419C0;
    }
}

loc_808419B8:
{
    r8 = (r5 + -156);
    goto loc_808419CC;
}

loc_808419C0:
{
    r8_rot_22 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r8 = (r8_rot_22 & -2);
    r8 = (r4 + r8);
    r8 = MemoryInline::FlatRead16((r8 + 1808));
}

loc_808419CC:
{
    MemoryInline::FlatWrite16((r10 + 62), static_cast<uint16_t>(r8));
    r31 = MemoryInline::FlatRead32((r10 + 32));
    r29 = MemoryInline::FlatRead32((r10 + 24));
    r30 = MemoryInline::FlatRead32((r10 + 20));
    r8 = MemoryInline::FlatRead32((r10 + 12));
    r29 = (r31 + r29);
    r8 = (r30 + r8);
    r8 = (r29 + r8);
}

loc_808419F0:
{
    if ((static_cast<int32_t>(r8) > static_cast<int32_t>(-904))) {
        goto loc_808419FC;
    }
}

loc_808419F4:
{
    r8 = 0;
    goto loc_80841A18;
}

loc_808419FC:
{
}

loc_80841A00:
{
    if ((static_cast<int32_t>(r8) < static_cast<int32_t>(60))) {
        goto loc_80841A0C;
    }
}

loc_80841A04:
{
    r8 = (r5 + -156);
    goto loc_80841A18;
}

loc_80841A0C:
{
    r8_rot_24 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r8 = (r8_rot_24 & -2);
    r8 = (r4 + r8);
    r8 = MemoryInline::FlatRead16((r8 + 1808));
}

loc_80841A18:
{
    MemoryInline::FlatWrite16((r10 + 66), static_cast<uint16_t>(r8));
    r31 = MemoryInline::FlatRead32((r10 + 32));
    r29 = MemoryInline::FlatRead32((r10 + 28));
    r30 = MemoryInline::FlatRead32((r10 + 20));
    r8 = MemoryInline::FlatRead32((r10 + 12));
    r29 = (r31 + r29);
    r8 = (r30 + r8);
    r8 = (r29 + r8);
}

loc_80841A3C:
{
    if ((static_cast<int32_t>(r8) > static_cast<int32_t>(-904))) {
        goto loc_80841A48;
    }
}

loc_80841A40:
{
    r8 = 0;
    goto loc_80841A64;
}

loc_80841A48:
{
}

loc_80841A4C:
{
    if ((static_cast<int32_t>(r8) < static_cast<int32_t>(60))) {
        goto loc_80841A58;
    }
}

loc_80841A50:
{
    r8 = (r5 + -156);
    goto loc_80841A64;
}

loc_80841A58:
{
    r8_rot_26 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r8 = (r8_rot_26 & -2);
    r8 = (r4 + r8);
    r8 = MemoryInline::FlatRead16((r8 + 1808));
}

loc_80841A64:
{
    MemoryInline::FlatWrite16((r10 + 70), static_cast<uint16_t>(r8));
    r30 = MemoryInline::FlatRead32((r10 + 20));
    r8 = MemoryInline::FlatRead32((r10 + 12));
    r29 = MemoryInline::FlatRead32((r10 + 36));
    r8 = (r30 + r8);
    r8 = (r8 + r29);
    r8 = (r8 + -30);
}

loc_80841A84:
{
    if ((static_cast<int32_t>(r8) > static_cast<int32_t>(-904))) {
        goto loc_80841A90;
    }
}

loc_80841A88:
{
    r8 = 0;
    goto loc_80841AAC;
}

loc_80841A90:
{
}

loc_80841A94:
{
    if ((static_cast<int32_t>(r8) < static_cast<int32_t>(60))) {
        goto loc_80841AA0;
    }
}

loc_80841A98:
{
    r8 = (r5 + -156);
    goto loc_80841AAC;
}

loc_80841AA0:
{
    r8_rot_28 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r8 = (r8_rot_28 & -2);
    r8 = (r4 + r8);
    r8 = MemoryInline::FlatRead16((r8 + 1808));
}

loc_80841AAC:
{
    MemoryInline::FlatWrite16((r10 + 74), static_cast<uint16_t>(r8));
    MemoryInline::FlatWrite16((r10 + 78), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r10 + 82), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r10 + 86), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r10 + 90), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r10 + 94), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r10 + 98), static_cast<uint16_t>(r0));
    goto loc_80841D20;
}

loc_80841ACC:
{
    r30 = MemoryInline::FlatRead32((r10 + 32));
    r8 = MemoryInline::FlatRead32((r10 + 20));
    r29 = MemoryInline::FlatRead32((r10 + 24));
    r8 = (r30 + r8);
    r8 = (r29 + r8);
}

loc_80841AE4:
{
    if ((static_cast<int32_t>(r8) > static_cast<int32_t>(-904))) {
        goto loc_80841AF0;
    }
}

loc_80841AE8:
{
    r8 = 0;
    goto loc_80841B0C;
}

loc_80841AF0:
{
}

loc_80841AF4:
{
    if ((static_cast<int32_t>(r8) < static_cast<int32_t>(60))) {
        goto loc_80841B00;
    }
}

loc_80841AF8:
{
    r8 = (r5 + -156);
    goto loc_80841B0C;
}

loc_80841B00:
{
    r8_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r8 = (r8_rot_2 & -2);
    r8 = (r4 + r8);
    r8 = MemoryInline::FlatRead16((r8 + 1808));
}

loc_80841B0C:
{
    MemoryInline::FlatWrite16((r10 + 54), static_cast<uint16_t>(r8));
    r30 = MemoryInline::FlatRead32((r10 + 32));
    r8 = MemoryInline::FlatRead32((r10 + 20));
    r29 = MemoryInline::FlatRead32((r10 + 28));
    r8 = (r30 + r8);
    r8 = (r29 + r8);
}

loc_80841B28:
{
    if ((static_cast<int32_t>(r8) > static_cast<int32_t>(-904))) {
        goto loc_80841B34;
    }
}

loc_80841B2C:
{
    r8 = 0;
    goto loc_80841B50;
}

loc_80841B34:
{
}

loc_80841B38:
{
    if ((static_cast<int32_t>(r8) < static_cast<int32_t>(60))) {
        goto loc_80841B44;
    }
}

loc_80841B3C:
{
    r8 = (r5 + -156);
    goto loc_80841B50;
}

loc_80841B44:
{
    r8_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r8 = (r8_rot_4 & -2);
    r8 = (r4 + r8);
    r8 = MemoryInline::FlatRead16((r8 + 1808));
}

loc_80841B50:
{
    MemoryInline::FlatWrite16((r10 + 58), static_cast<uint16_t>(r8));
    r30 = MemoryInline::FlatRead32((r10 + 36));
    r8 = MemoryInline::FlatRead32((r10 + 20));
    r29 = MemoryInline::FlatRead32((r10 + 40));
    r8 = (r30 + r8);
    r8 = (r29 + r8);
}

loc_80841B6C:
{
    if ((static_cast<int32_t>(r8) > static_cast<int32_t>(-904))) {
        goto loc_80841B78;
    }
}

loc_80841B70:
{
    r8 = 0;
    goto loc_80841B94;
}

loc_80841B78:
{
}

loc_80841B7C:
{
    if ((static_cast<int32_t>(r8) < static_cast<int32_t>(60))) {
        goto loc_80841B88;
    }
}

loc_80841B80:
{
    r8 = (r5 + -156);
    goto loc_80841B94;
}

loc_80841B88:
{
    r8_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r8 = (r8_rot_6 & -2);
    r8 = (r4 + r8);
    r8 = MemoryInline::FlatRead16((r8 + 1808));
}

loc_80841B94:
{
    MemoryInline::FlatWrite16((r10 + 62), static_cast<uint16_t>(r8));
    r30 = MemoryInline::FlatRead32((r10 + 36));
    r8 = MemoryInline::FlatRead32((r10 + 20));
    r29 = MemoryInline::FlatRead32((r10 + 44));
    r8 = (r30 + r8);
    r8 = (r29 + r8);
}

loc_80841BB0:
{
    if ((static_cast<int32_t>(r8) > static_cast<int32_t>(-904))) {
        goto loc_80841BBC;
    }
}

loc_80841BB4:
{
    r8 = 0;
    goto loc_80841BD8;
}

loc_80841BBC:
{
}

loc_80841BC0:
{
    if ((static_cast<int32_t>(r8) < static_cast<int32_t>(60))) {
        goto loc_80841BCC;
    }
}

loc_80841BC4:
{
    r8 = (r5 + -156);
    goto loc_80841BD8;
}

loc_80841BCC:
{
    r8_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r8 = (r8_rot_8 & -2);
    r8 = (r4 + r8);
    r8 = MemoryInline::FlatRead16((r8 + 1808));
}

loc_80841BD8:
{
    MemoryInline::FlatWrite16((r10 + 90), static_cast<uint16_t>(r8));
    r31 = MemoryInline::FlatRead32((r10 + 32));
    r29 = MemoryInline::FlatRead32((r10 + 24));
    r30 = MemoryInline::FlatRead32((r10 + 20));
    r8 = MemoryInline::FlatRead32((r10 + 12));
    r29 = (r31 + r29);
    r8 = (r30 + r8);
    r8 = (r29 + r8);
}

loc_80841BFC:
{
    if ((static_cast<int32_t>(r8) > static_cast<int32_t>(-904))) {
        goto loc_80841C08;
    }
}

loc_80841C00:
{
    r8 = 0;
    goto loc_80841C24;
}

loc_80841C08:
{
}

loc_80841C0C:
{
    if ((static_cast<int32_t>(r8) < static_cast<int32_t>(60))) {
        goto loc_80841C18;
    }
}

loc_80841C10:
{
    r8 = (r5 + -156);
    goto loc_80841C24;
}

loc_80841C18:
{
    r8_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r8 = (r8_rot_10 & -2);
    r8 = (r4 + r8);
    r8 = MemoryInline::FlatRead16((r8 + 1808));
}

loc_80841C24:
{
    MemoryInline::FlatWrite16((r10 + 66), static_cast<uint16_t>(r8));
    r31 = MemoryInline::FlatRead32((r10 + 32));
    r29 = MemoryInline::FlatRead32((r10 + 28));
    r30 = MemoryInline::FlatRead32((r10 + 20));
    r8 = MemoryInline::FlatRead32((r10 + 12));
    r29 = (r31 + r29);
    r8 = (r30 + r8);
    r8 = (r29 + r8);
}

loc_80841C48:
{
    if ((static_cast<int32_t>(r8) > static_cast<int32_t>(-904))) {
        goto loc_80841C54;
    }
}

loc_80841C4C:
{
    r8 = 0;
    goto loc_80841C70;
}

loc_80841C54:
{
}

loc_80841C58:
{
    if ((static_cast<int32_t>(r8) < static_cast<int32_t>(60))) {
        goto loc_80841C64;
    }
}

loc_80841C5C:
{
    r8 = (r5 + -156);
    goto loc_80841C70;
}

loc_80841C64:
{
    r8_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r8 = (r8_rot_12 & -2);
    r8 = (r4 + r8);
    r8 = MemoryInline::FlatRead16((r8 + 1808));
}

loc_80841C70:
{
    MemoryInline::FlatWrite16((r10 + 70), static_cast<uint16_t>(r8));
    r31 = MemoryInline::FlatRead32((r10 + 36));
    r29 = MemoryInline::FlatRead32((r10 + 40));
    r30 = MemoryInline::FlatRead32((r10 + 20));
    r8 = MemoryInline::FlatRead32((r10 + 12));
    r29 = (r31 + r29);
    r8 = (r30 + r8);
    r8 = (r29 + r8);
}

loc_80841C94:
{
    if ((static_cast<int32_t>(r8) > static_cast<int32_t>(-904))) {
        goto loc_80841CA0;
    }
}

loc_80841C98:
{
    r8 = 0;
    goto loc_80841CBC;
}

loc_80841CA0:
{
}

loc_80841CA4:
{
    if ((static_cast<int32_t>(r8) < static_cast<int32_t>(60))) {
        goto loc_80841CB0;
    }
}

loc_80841CA8:
{
    r8 = (r5 + -156);
    goto loc_80841CBC;
}

loc_80841CB0:
{
    r8_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r8 = (r8_rot_14 & -2);
    r8 = (r4 + r8);
    r8 = MemoryInline::FlatRead16((r8 + 1808));
}

loc_80841CBC:
{
    MemoryInline::FlatWrite16((r10 + 74), static_cast<uint16_t>(r8));
    r29 = MemoryInline::FlatRead32((r10 + 36));
    r30 = MemoryInline::FlatRead32((r10 + 44));
    r31 = MemoryInline::FlatRead32((r10 + 20));
    r8 = MemoryInline::FlatRead32((r10 + 12));
    r30 = (r29 + r30);
    r8 = (r31 + r8);
    r8 = (r30 + r8);
}

loc_80841CE0:
{
    if ((static_cast<int32_t>(r8) > static_cast<int32_t>(-904))) {
        goto loc_80841CEC;
    }
}

loc_80841CE4:
{
    r8 = 0;
    goto loc_80841D08;
}

loc_80841CEC:
{
}

loc_80841CF0:
{
    if ((static_cast<int32_t>(r8) < static_cast<int32_t>(60))) {
        goto loc_80841CFC;
    }
}

loc_80841CF4:
{
    r8 = (r5 + -156);
    goto loc_80841D08;
}

loc_80841CFC:
{
    r8_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r8 = (r8_rot_16 & -2);
    r8 = (r4 + r8);
    r8 = MemoryInline::FlatRead16((r8 + 1808));
}

loc_80841D08:
{
    MemoryInline::FlatWrite16((r10 + 94), static_cast<uint16_t>(r8));
    r12 = (r12 | -2147483648);
    MemoryInline::FlatWrite16((r10 + 78), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r10 + 82), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r10 + 86), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r10 + 98), static_cast<uint16_t>(r0));
}

loc_80841D20:
{
    r30 = MemoryInline::FlatRead32((r10 + 4));
    r8 = 1;
    r30 = (r30 & -1073741825);
    r30 = (r30 | -2147483648);
    MemoryInline::FlatWrite32((r10 + 4), r30);
}

loc_80841D34:
{
}

loc_80841D38:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_80841D74;
    }
}

loc_80841D3C:
{
    r9 = MemoryInline::FlatRead16((r10 + 48));
    r30 = (r3 + -21845);
    MemoryInline::FlatWrite16((r11 + 146), static_cast<uint16_t>(r9));
    r31 = MemoryInline::FlatRead16((r10 + 48));
    r9 = MemoryInline::FlatRead16((r10 + 50));
    r9 = (r9 - r31);
    r9 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r30)) * static_cast<int64_t>(static_cast<int32_t>(r9))) >> 32));
    r9 = (static_cast<int32_t>(r9) >> 4);
    r31_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(1));
    r31 = (r31_rot_2 & 1);
    r9 = (r9 + r31);
    MemoryInline::FlatWrite16((r11 + 148), static_cast<uint16_t>(r9));
    r9 = MemoryInline::FlatRead32((r11 + 28));
    r9 = (r9 | 256);
    MemoryInline::FlatWrite32((r11 + 28), r9);
}

loc_80841D74:
{
}

loc_80841D78:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_808420BC;
    }
}

loc_80841D7C:
{
    r8 = MemoryInline::FlatRead16((r10 + 52));
    MemoryInline::FlatWrite16((r11 + 60), static_cast<uint16_t>(r8));
}

loc_80841D88:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_80841D90;
    }
}

loc_80841D8C:
{
    r12 = (r12 | 1);
}

loc_80841D90:
{
    r9 = MemoryInline::FlatRead16((r10 + 52));
    r31 = (r3 + -21845);
    r8 = MemoryInline::FlatRead16((r10 + 54));
    r8 = (r8 - r9);
    r8 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r31)) * static_cast<int64_t>(static_cast<int32_t>(r8))) >> 32));
    r8 = (static_cast<int32_t>(r8) >> 4);
    r9_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r9 = (r9_rot_5 & 1);
    r8 = (r8 + r9);
    MemoryInline::FlatWrite16((r11 + 62), static_cast<uint16_t>(r8));
    r8 = (r8 & 65535);
}

loc_80841DB8:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_80841DC0;
    }
}

loc_80841DBC:
{
    r12 = (r12 | 4);
}

loc_80841DC0:
{
    r8 = MemoryInline::FlatRead16((r10 + 56));
    MemoryInline::FlatWrite16((r11 + 64), static_cast<uint16_t>(r8));
}

loc_80841DCC:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_80841DD4;
    }
}

loc_80841DD0:
{
    r12 = (r12 | 2);
}

loc_80841DD4:
{
    r9 = MemoryInline::FlatRead16((r10 + 56));
    r31 = (r3 + -21845);
    r8 = MemoryInline::FlatRead16((r10 + 58));
    r8 = (r8 - r9);
    r8 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r31)) * static_cast<int64_t>(static_cast<int32_t>(r8))) >> 32));
    r8 = (static_cast<int32_t>(r8) >> 4);
    r9_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r9 = (r9_rot_6 & 1);
    r8 = (r8 + r9);
    MemoryInline::FlatWrite16((r11 + 66), static_cast<uint16_t>(r8));
    r8 = (r8 & 65535);
}

loc_80841DFC:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_80841E04;
    }
}

loc_80841E00:
{
    r12 = (r12 | 4);
}

loc_80841E04:
{
    r8 = MemoryInline::FlatRead16((r10 + 64));
    MemoryInline::FlatWrite16((r11 + 68), static_cast<uint16_t>(r8));
}

loc_80841E10:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_80841E18;
    }
}

loc_80841E14:
{
    r12 = (r12 | 65536);
}

loc_80841E18:
{
    r9 = MemoryInline::FlatRead16((r10 + 64));
    r31 = (r3 + -21845);
    r8 = MemoryInline::FlatRead16((r10 + 66));
    r8 = (r8 - r9);
    r8 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r31)) * static_cast<int64_t>(static_cast<int32_t>(r8))) >> 32));
    r8 = (static_cast<int32_t>(r8) >> 4);
    r9_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r9 = (r9_rot_7 & 1);
    r8 = (r8 + r9);
    MemoryInline::FlatWrite16((r11 + 70), static_cast<uint16_t>(r8));
    r8 = (r8 & 65535);
}

loc_80841E40:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_80841E48;
    }
}

loc_80841E44:
{
    r12 = (r12 | 262144);
}

loc_80841E48:
{
    r8 = MemoryInline::FlatRead16((r10 + 68));
    MemoryInline::FlatWrite16((r11 + 72), static_cast<uint16_t>(r8));
}

loc_80841E54:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_80841E5C;
    }
}

loc_80841E58:
{
    r12 = (r12 | 131072);
}

loc_80841E5C:
{
    r9 = MemoryInline::FlatRead16((r10 + 68));
    r31 = (r3 + -21845);
    r8 = MemoryInline::FlatRead16((r10 + 70));
    r8 = (r8 - r9);
    r8 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r31)) * static_cast<int64_t>(static_cast<int32_t>(r8))) >> 32));
    r8 = (static_cast<int32_t>(r8) >> 4);
    r9_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r9 = (r9_rot_8 & 1);
    r8 = (r8 + r9);
    MemoryInline::FlatWrite16((r11 + 74), static_cast<uint16_t>(r8));
    r8 = (r8 & 65535);
}

loc_80841E84:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_80841E8C;
    }
}

loc_80841E88:
{
    r12 = (r12 | 262144);
}

loc_80841E8C:
{
    r8 = MemoryInline::FlatRead16((r10 + 76));
    MemoryInline::FlatWrite16((r11 + 76), static_cast<uint16_t>(r8));
}

loc_80841E98:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_80841EA0;
    }
}

loc_80841E9C:
{
    r12 = (r12 | 2097152);
}

loc_80841EA0:
{
    r9 = MemoryInline::FlatRead16((r10 + 76));
    r31 = (r3 + -21845);
    r8 = MemoryInline::FlatRead16((r10 + 78));
    r8 = (r8 - r9);
    r8 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r31)) * static_cast<int64_t>(static_cast<int32_t>(r8))) >> 32));
    r8 = (static_cast<int32_t>(r8) >> 4);
    r9_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r9 = (r9_rot_9 & 1);
    r8 = (r8 + r9);
    MemoryInline::FlatWrite16((r11 + 78), static_cast<uint16_t>(r8));
    r8 = (r8 & 65535);
}

loc_80841EC8:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_80841ED0;
    }
}

loc_80841ECC:
{
    r12 = (r12 | 8388608);
}

loc_80841ED0:
{
    r8 = MemoryInline::FlatRead16((r10 + 80));
    MemoryInline::FlatWrite16((r11 + 80), static_cast<uint16_t>(r8));
}

loc_80841EDC:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_80841EE4;
    }
}

loc_80841EE0:
{
    r12 = (r12 | 4194304);
}

loc_80841EE4:
{
    r9 = MemoryInline::FlatRead16((r10 + 80));
    r31 = (r3 + -21845);
    r8 = MemoryInline::FlatRead16((r10 + 82));
    r8 = (r8 - r9);
    r8 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r31)) * static_cast<int64_t>(static_cast<int32_t>(r8))) >> 32));
    r8 = (static_cast<int32_t>(r8) >> 4);
    r9_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r9 = (r9_rot_10 & 1);
    r8 = (r8 + r9);
    MemoryInline::FlatWrite16((r11 + 82), static_cast<uint16_t>(r8));
    r8 = (r8 & 65535);
}

loc_80841F0C:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_80841F14;
    }
}

loc_80841F10:
{
    r12 = (r12 | 8388608);
}

loc_80841F14:
{
    r8 = MemoryInline::FlatRead16((r10 + 88));
    MemoryInline::FlatWrite16((r11 + 84), static_cast<uint16_t>(r8));
}

loc_80841F20:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_80841F28;
    }
}

loc_80841F24:
{
    r12 = (r12 | 67108864);
}

loc_80841F28:
{
    r9 = MemoryInline::FlatRead16((r10 + 88));
    r31 = (r3 + -21845);
    r8 = MemoryInline::FlatRead16((r10 + 90));
    r8 = (r8 - r9);
    r8 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r31)) * static_cast<int64_t>(static_cast<int32_t>(r8))) >> 32));
    r8 = (static_cast<int32_t>(r8) >> 4);
    r9_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r9 = (r9_rot_11 & 1);
    r8 = (r8 + r9);
    MemoryInline::FlatWrite16((r11 + 86), static_cast<uint16_t>(r8));
    r8 = (r8 & 65535);
}

loc_80841F50:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_80841F58;
    }
}

loc_80841F54:
{
    r12 = (r12 | 268435456);
}

loc_80841F58:
{
    r8 = MemoryInline::FlatRead16((r10 + 92));
    MemoryInline::FlatWrite16((r11 + 88), static_cast<uint16_t>(r8));
}

loc_80841F64:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_80841F6C;
    }
}

loc_80841F68:
{
    r12 = (r12 | 134217728);
}

loc_80841F6C:
{
    r9 = MemoryInline::FlatRead16((r10 + 92));
    r31 = (r3 + -21845);
    r8 = MemoryInline::FlatRead16((r10 + 94));
    r8 = (r8 - r9);
    r8 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r31)) * static_cast<int64_t>(static_cast<int32_t>(r8))) >> 32));
    r8 = (static_cast<int32_t>(r8) >> 4);
    r9_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r9 = (r9_rot_12 & 1);
    r8 = (r8 + r9);
    MemoryInline::FlatWrite16((r11 + 90), static_cast<uint16_t>(r8));
    r8 = (r8 & 65535);
}

loc_80841F94:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_80841F9C;
    }
}

loc_80841F98:
{
    r12 = (r12 | 268435456);
}

loc_80841F9C:
{
    r8 = MemoryInline::FlatRead16((r10 + 60));
    MemoryInline::FlatWrite16((r11 + 92), static_cast<uint16_t>(r8));
}

loc_80841FA8:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_80841FB0;
    }
}

loc_80841FAC:
{
    r12 = (r12 | 8);
}

loc_80841FB0:
{
    r9 = MemoryInline::FlatRead16((r10 + 60));
    r31 = (r3 + -21845);
    r8 = MemoryInline::FlatRead16((r10 + 62));
    r8 = (r8 - r9);
    r8 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r31)) * static_cast<int64_t>(static_cast<int32_t>(r8))) >> 32));
    r8 = (static_cast<int32_t>(r8) >> 4);
    r9_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r9 = (r9_rot_13 & 1);
    r8 = (r8 + r9);
    MemoryInline::FlatWrite16((r11 + 94), static_cast<uint16_t>(r8));
    r8 = (r8 & 65535);
}

loc_80841FD8:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_80841FE0;
    }
}

loc_80841FDC:
{
    r12 = (r12 | 16);
}

loc_80841FE0:
{
    r8 = MemoryInline::FlatRead16((r10 + 72));
    MemoryInline::FlatWrite16((r11 + 96), static_cast<uint16_t>(r8));
}

loc_80841FEC:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_80841FF4;
    }
}

loc_80841FF0:
{
    r12 = (r12 | 524288);
}

loc_80841FF4:
{
    r9 = MemoryInline::FlatRead16((r10 + 72));
    r31 = (r3 + -21845);
    r8 = MemoryInline::FlatRead16((r10 + 74));
    r8 = (r8 - r9);
    r8 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r31)) * static_cast<int64_t>(static_cast<int32_t>(r8))) >> 32));
    r8 = (static_cast<int32_t>(r8) >> 4);
    r9_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r9 = (r9_rot_14 & 1);
    r8 = (r8 + r9);
    MemoryInline::FlatWrite16((r11 + 98), static_cast<uint16_t>(r8));
    r8 = (r8 & 65535);
}

loc_8084201C:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_80842024;
    }
}

loc_80842020:
{
    r12 = (r12 | 1048576);
}

loc_80842024:
{
    r8 = MemoryInline::FlatRead16((r10 + 84));
    MemoryInline::FlatWrite16((r11 + 100), static_cast<uint16_t>(r8));
}

loc_80842030:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_80842038;
    }
}

loc_80842034:
{
    r12 = (r12 | 16777216);
}

loc_80842038:
{
    r9 = MemoryInline::FlatRead16((r10 + 84));
    r31 = (r3 + -21845);
    r8 = MemoryInline::FlatRead16((r10 + 86));
    r8 = (r8 - r9);
    r8 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r31)) * static_cast<int64_t>(static_cast<int32_t>(r8))) >> 32));
    r8 = (static_cast<int32_t>(r8) >> 4);
    r9_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r9 = (r9_rot_15 & 1);
    r8 = (r8 + r9);
    MemoryInline::FlatWrite16((r11 + 102), static_cast<uint16_t>(r8));
    r8 = (r8 & 65535);
}

loc_80842060:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_80842068;
    }
}

loc_80842064:
{
    r12 = (r12 | 33554432);
}

loc_80842068:
{
    r8 = MemoryInline::FlatRead16((r10 + 96));
    MemoryInline::FlatWrite16((r11 + 104), static_cast<uint16_t>(r8));
}

loc_80842074:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_8084207C;
    }
}

loc_80842078:
{
    r12 = (r12 | 536870912);
}

loc_8084207C:
{
    r9 = MemoryInline::FlatRead16((r10 + 96));
    r31 = (r3 + -21845);
    r8 = MemoryInline::FlatRead16((r10 + 98));
    r8 = (r8 - r9);
    r8 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r31)) * static_cast<int64_t>(static_cast<int32_t>(r8))) >> 32));
    r8 = (static_cast<int32_t>(r8) >> 4);
    r9_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r9 = (r9_rot_16 & 1);
    r8 = (r8 + r9);
    MemoryInline::FlatWrite16((r11 + 106), static_cast<uint16_t>(r8));
    r8 = (r8 & 65535);
}

loc_808420A4:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_808420AC;
    }
}

loc_808420A8:
{
    r12 = (r12 | 1073741824);
}

loc_808420AC:
{
    MemoryInline::FlatWrite32((r11 + 52), r12);
    r8 = MemoryInline::FlatRead32((r11 + 28));
    r8 = (r8 | 18);
    MemoryInline::FlatWrite32((r11 + 28), r8);
}

loc_808420BC:
{
    r7 = (r7 + 100);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80841628;
    }
}

loc_808420C4:
{
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
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00001FFB gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x808415E0 func_808415E0 preserves=true fpr_mask=0x00000000
