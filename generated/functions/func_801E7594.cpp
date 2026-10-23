#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801E7514(CpuContext* ctx);
extern "C" uint64_t func_801E7514_ra58_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_801E7594_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_16 = 0;
    uint32_t r0_rot_17 = 0;
    uint32_t r0_rot_18 = 0;
    uint32_t r0_rot_19 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_801E7594;

loc_801E7594:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = r3;
    r5 = 0x805C0000u;
    r28 = (r5 + -20844);
    r5 = 0x805C0000u;
    r31 = (r5 + -20776);
    MemoryInline::FlatWrite16((r3 + 12), static_cast<uint16_t>(r4));
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 16), static_cast<uint16_t>(r0));
    r29 = 0;
    goto loc_801E75F0;
}

loc_801E75D8:
{
    r3 = MemoryInline::FlatRead16((r28 + 4));
    ctx->lr = 0x801E75E0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x802FB520u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
}

loc_801E75E4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801E75FC;
    }
}

loc_801E75E8:
{
    r29 = (r29 + 1);
    r28 = (r28 + 6);
}

loc_801E75F0:
{
    r0 = MemoryInline::FlatRead16(r28);
}

loc_801E75F8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801E75D8;
    }
}

loc_801E75FC:
{
    r3 = 10;
    ctx->lr = 0x801E7604u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x802FB520u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
}

loc_801E7608:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801E7630;
    }
}

loc_801E760C:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r29)));
}

loc_801E7614:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(6))) {
        goto loc_801E7624;
    }
}

loc_801E7618:
{
    r0 = 6;
    MemoryInline::FlatWrite16((r30 + 14), static_cast<uint16_t>(r0));
    goto loc_801E7650;
}

loc_801E7624:
{
    r0 = 5;
    MemoryInline::FlatWrite16((r30 + 14), static_cast<uint16_t>(r0));
    goto loc_801E7650;
}

loc_801E7630:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r29)));
}

loc_801E7638:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(6))) {
        goto loc_801E7648;
    }
}

loc_801E763C:
{
    r0 = 5;
    MemoryInline::FlatWrite16((r30 + 14), static_cast<uint16_t>(r0));
    goto loc_801E7650;
}

loc_801E7648:
{
    r0 = 4;
    MemoryInline::FlatWrite16((r30 + 14), static_cast<uint16_t>(r0));
}

loc_801E7650:
{
    r3 = (r30 + 208);
    r4 = 0;
    r5 = 48;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead16((r30 + 12));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_801E7668:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_801E7688;
    }
}

loc_801E766C:
{
}

loc_801E7670:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_801E76D8;
    }
}

loc_801E7674:
{
}

loc_801E7678:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_801E777C;
    }
}

loc_801E767C:
{
}

loc_801E7680:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_801E7844;
    }
}

loc_801E7684:
{
    goto loc_801E78DC;
}

loc_801E7688:
{
    r0 = (r0 * 6);
    r4 = (r0 * 6);
    r3 = 0x805C0000u;
    r0 = (r3 + -20960);
    r4 = (r0 + r4);
    goto loc_801E76BC;
}

loc_801E76A0:
{
    r3 = MemoryInline::FlatRead16((r30 + 16));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r30 + 16), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_801E76B4:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(6))) {
        goto loc_801E76C8;
    }
}

loc_801E76B8:
{
    r4 = (r4 + 6);
}

loc_801E76BC:
{
    r0 = MemoryInline::FlatRead16(r4);
}

loc_801E76C4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801E76A0;
    }
}

loc_801E76C8:
{
    r3 = r30;
    r4 = MemoryInline::FlatRead16((r30 + 12));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    ctx->lr = 0x801E76D4u;
    if constexpr (KnownRegArgsCpuCall<0x801E7514u>(&func_801E7514)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_801E7514_1849 = func_801E7514_ra58_0_18_0(ctx, r3, r4, r6);
        r3 = static_cast<uint32_t>(regargs_result_801E7514_1849);
        r4 = static_cast<uint32_t>(regargs_result_801E7514_1849 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x801E7514u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    goto loc_801E78DC;
}

loc_801E76D8:
{
    r3 = 0x805C0000u;
    r31 = (r3 + -20844);
    r29 = 0;
    goto loc_801E776C;
}

loc_801E76E8:
{
    r3 = MemoryInline::FlatRead16((r31 + 4));
    ctx->lr = 0x801E76F0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x802FB520u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
}

loc_801E76F4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801E78DC;
    }
}

loc_801E76F8:
{
    r0 = MemoryInline::FlatRead16(r31);
    r4 = (r0 & 255);
    r0 = MemoryInline::FlatRead16((r30 + 16));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_14 & -8);
    r3 = (r30 + r0);
    MemoryInline::FlatWrite8((r3 + 208), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead16((r31 + 2));
    r0 = MemoryInline::FlatRead16((r30 + 16));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_15 & -8);
    r3 = (r30 + r0);
    MemoryInline::FlatWrite16((r3 + 210), static_cast<uint16_t>(r4));
    r0 = MemoryInline::FlatRead16((r30 + 16));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_16 & -8);
    r3 = (r30 + r0);
    MemoryInline::FlatWrite8((r3 + 209), static_cast<uint8_t>(r29));
    r5 = MemoryInline::FlatRead16((r30 + 16));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r3 = MemoryInline::FlatRead32((r13 + -17172));
    r0_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_17 & -4);
    r3_addr_4 = (r3 + r0);
    r4 = MemoryInline::FlatRead32(r3_addr_4);
    r0_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r0 = (r0_rot_18 & -8);
    r3 = (r30 + r0);
    MemoryInline::FlatWrite32((r3 + 212), r4);
    r3 = MemoryInline::FlatRead16((r30 + 16));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r30 + 16), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_801E7764:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(6))) {
        goto loc_801E78DC;
    }
}

loc_801E7768:
{
    r31 = (r31 + 6);
}

loc_801E776C:
{
    r0 = MemoryInline::FlatRead16(r31);
}

loc_801E7774:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801E76E8;
    }
}

loc_801E7778:
{
    goto loc_801E78DC;
}

loc_801E777C:
{
    r0 = MemoryInline::FlatRead16((r30 + 14));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_801E7784:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(3))) {
        goto loc_801E7798;
    }
}

loc_801E7788:
{
    r3 = 10;
    ctx->lr = 0x801E7790u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x802FB520u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
}

loc_801E7794:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_801E7844;
    }
}

loc_801E7798:
{
    r3 = 0x805C0000u;
    r31 = (r3 + -20844);
    r31 = (r31 + 36);
    r29 = 0;
    goto loc_801E7834;
}

loc_801E77AC:
{
    r3 = MemoryInline::FlatRead16((r31 + 4));
    ctx->lr = 0x801E77B4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x802FB520u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
}

loc_801E77B8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801E78DC;
    }
}

loc_801E77BC:
{
    r0 = MemoryInline::FlatRead16(r31);
    r4 = (r0 & 255);
    r0 = MemoryInline::FlatRead16((r30 + 16));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_2 & -8);
    r3 = (r30 + r0);
    MemoryInline::FlatWrite8((r3 + 208), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead16((r31 + 2));
    r0 = MemoryInline::FlatRead16((r30 + 16));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_3 & -8);
    r3 = (r30 + r0);
    MemoryInline::FlatWrite16((r3 + 210), static_cast<uint16_t>(r4));
    r0 = MemoryInline::FlatRead16((r30 + 16));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_4 & -8);
    r3 = (r30 + r0);
    MemoryInline::FlatWrite8((r3 + 209), static_cast<uint8_t>(r29));
    r5 = MemoryInline::FlatRead16((r30 + 16));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r3 = MemoryInline::FlatRead32((r13 + -17172));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r3 = (r3 + r0);
    r4 = MemoryInline::FlatRead32((r3 + 24));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r0 = (r0_rot_6 & -8);
    r3 = (r30 + r0);
    MemoryInline::FlatWrite32((r3 + 212), r4);
    r3 = MemoryInline::FlatRead16((r30 + 16));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r30 + 16), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_801E782C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(6))) {
        goto loc_801E78DC;
    }
}

loc_801E7830:
{
    r31 = (r31 + 6);
}

loc_801E7834:
{
    r0 = MemoryInline::FlatRead16(r31);
}

loc_801E783C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801E77AC;
    }
}

loc_801E7840:
{
    goto loc_801E78DC;
}

loc_801E7844:
{
    r29 = 1;
    goto loc_801E78D0;
}

loc_801E784C:
{
    r3 = MemoryInline::FlatRead16((r31 + 6));
    ctx->lr = 0x801E7854u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x802FB520u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
}

loc_801E7858:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801E78DC;
    }
}

loc_801E785C:
{
    r0 = MemoryInline::FlatRead16(r31);
    r4 = (r0 & 255);
    r0 = MemoryInline::FlatRead16((r30 + 16));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_8 & -8);
    r3 = (r30 + r0);
    MemoryInline::FlatWrite8((r3 + 208), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead16((r31 + 2));
    r0 = MemoryInline::FlatRead16((r30 + 16));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_9 & -8);
    r3 = (r30 + r0);
    MemoryInline::FlatWrite16((r3 + 210), static_cast<uint16_t>(r4));
    r0 = MemoryInline::FlatRead16((r30 + 16));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_10 & -8);
    r3 = (r30 + r0);
    MemoryInline::FlatWrite8((r3 + 209), static_cast<uint8_t>(r29));
    r5 = MemoryInline::FlatRead16((r30 + 16));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r3 = MemoryInline::FlatRead32((r13 + -17176));
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_11 & -4);
    r3_addr_2 = (r3 + r0);
    r4 = MemoryInline::FlatRead32(r3_addr_2);
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r0 = (r0_rot_12 & -8);
    r3 = (r30 + r0);
    MemoryInline::FlatWrite32((r3 + 212), r4);
    r3 = MemoryInline::FlatRead16((r30 + 16));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r30 + 16), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_801E78C8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(6))) {
        goto loc_801E78DC;
    }
}

loc_801E78CC:
{
    r31 = (r31 + 8);
}

loc_801E78D0:
{
    r0 = MemoryInline::FlatRead16(r31);
}

loc_801E78D8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801E784C;
    }
}

loc_801E78DC:
{
    r3 = MemoryInline::FlatRead16((r30 + 16));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead16((r30 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_801E78E8:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(r0))) {
        goto loc_801E78F8;
    }
}

loc_801E78EC:
{
    r0 = (r3 + -1);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWrite16((r30 + 8), static_cast<uint16_t>(r0));
}

loc_801E78F8:
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

extern "C" void func_801E7594(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801E7594_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801E7594 func_801E7594 preserves=true fpr_mask=0x00000000
