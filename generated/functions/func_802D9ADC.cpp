#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80114D2C(CpuContext* ctx);
extern "C" uint64_t func_80114D2C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802D69C8(CpuContext* ctx);
extern "C" uint32_t func_802D69C8_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802D6A08(CpuContext* ctx);
extern "C" uint32_t func_802D6A08_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_803AB08C(CpuContext* ctx);
extern "C" uint32_t func_803AB08C_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_802D9ADC_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    const uint32_t r30_entry = r30;
    const uint32_t r31_entry = r31;
    uint32_t ctr = ctx->ctr;

    goto loc_802D9ADC;

loc_802D9ADC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    ctx->lr = 0x802D9AF8u;
    if constexpr (KnownRegArgsCpuCall<0x803AB08Cu>(&func_803AB08C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_803AB08C_747 = func_803AB08C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803AB08C_747;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803AB08Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_802D9AFC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802D9CD0;
    }
}

loc_802D9B00:
{
    r3 = 0x806C0000u;
    r31 = (r3 + -2080);
    r0 = MemoryInline::FlatRead8((r3 + -2080));
}

loc_802D9B10:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802D9CD0;
    }
}

loc_802D9B14:
{
    r4 = MemoryInline::FlatRead32((r31 + 364));
}

loc_802D9B1C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_802D9CD0;
    }
}

loc_802D9B20:
{
    r3 = MemoryInline::FlatRead8((r31 + 420));
    r0 = MemoryInline::FlatRead8((r4 + 22));
}

loc_802D9B2C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_802D9CD0;
    }
}

loc_802D9B30:
{
    r0 = MemoryInline::FlatRead8((r31 + 369));
}

loc_802D9B38:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(5))) {
        goto loc_802D9CD0;
    }
}

loc_802D9B3C:
{
    r0 = (r30 & 255);
}

loc_802D9B44:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(8))) {
        goto loc_802D9CD0;
    }
}

loc_802D9B48:
{
    r3 = 0x805D0000u;
    r3 = (r3 + 23608);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x802D9B60u:
        goto loc_802D9B60;
        break;
    case 0x802D9BB4u:
        goto loc_802D9BB4;
        break;
    case 0x802D9C4Cu:
        goto loc_802D9C4C;
        break;
    case 0x802D9C9Cu:
        goto loc_802D9C9C;
        break;
    case 0x802D9B7Cu:
        goto loc_802D9B7C;
        break;
    case 0x802D9B98u:
        goto loc_802D9B98;
        break;
    case 0x802D9C00u:
        goto loc_802D9C00;
        break;
    case 0x802D9C74u:
        goto loc_802D9C74;
        break;
    case 0x802D9CB4u:
        goto loc_802D9CB4;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_802D9B60:
{
    r3 = r31;
    r4 = 10;
    // inline leaf 0x802D3618 (14 guest instruction(s))
}

loc_inl0_0x802D3618:
{
    r5 = MemoryInline::FlatRead32((r3 + 496));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    r0 = (r5 + r0);
    MemoryInline::FlatWriteRam32((r3 + 496), r0);
}

loc_inl0_0x802D362C:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_inl0_0x802D3638;
    }
}

loc_inl0_0x802D3630:
{
    r0 = 0;
    MemoryInline::FlatWriteRam32((r3 + 496), r0);
}

loc_inl0_0x802D3638:
{
    r4 = MemoryInline::FlatRead32((r3 + 500));
    r0 = MemoryInline::FlatRead32((r3 + 496));
}

loc_inl0_0x802D3644:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r4))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x802D3648:
{
    MemoryInline::FlatWriteRam32((r3 + 496), r4);
    goto loc_inl0_cont_802D3618;
}

loc_inl0_return:
{
}

loc_inl0_cont_802D3618:
{
    // end of inlined leaf 0x802D3618
    r3 = r31;
    r4 = 0;
    ctx->lr = 0x802D9B78u;
    if constexpr (KnownRegArgsCpuCall<0x80114D2Cu>(&func_80114D2C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_80114D2C_178C = func_80114D2C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80114D2C_178C);
        r4 = static_cast<uint32_t>(regargs_result_80114D2C_178C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80114D2Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    }
    goto loc_802D9CD0;
}

loc_802D9B7C:
{
    r3 = r31;
    r4 = 30;
    // inline leaf 0x802D3618 (14 guest instruction(s))
}

loc_inl1_0x802D3618:
{
    r5 = MemoryInline::FlatRead32((r3 + 496));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    r0 = (r5 + r0);
    MemoryInline::FlatWriteRam32((r3 + 496), r0);
}

loc_inl1_0x802D362C:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_inl1_0x802D3638;
    }
}

loc_inl1_0x802D3630:
{
    r0 = 0;
    MemoryInline::FlatWriteRam32((r3 + 496), r0);
}

loc_inl1_0x802D3638:
{
    r4 = MemoryInline::FlatRead32((r3 + 500));
    r0 = MemoryInline::FlatRead32((r3 + 496));
}

loc_inl1_0x802D3644:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r4))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x802D3648:
{
    MemoryInline::FlatWriteRam32((r3 + 496), r4);
    goto loc_inl1_cont_802D3618;
}

loc_inl1_return:
{
}

loc_inl1_cont_802D3618:
{
    // end of inlined leaf 0x802D3618
    r3 = r31;
    r4 = 0;
    ctx->lr = 0x802D9B94u;
    if constexpr (KnownRegArgsCpuCall<0x80114D2Cu>(&func_80114D2C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_80114D2C_1F47 = func_80114D2C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80114D2C_1F47);
        r4 = static_cast<uint32_t>(regargs_result_80114D2C_1F47 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80114D2Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    }
    goto loc_802D9CD0;
}

loc_802D9B98:
{
    r3 = r31;
    r4 = 50;
    // inline leaf 0x802D3618 (14 guest instruction(s))
}

loc_inl2_0x802D3618:
{
    r5 = MemoryInline::FlatRead32((r3 + 496));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    r0 = (r5 + r0);
    MemoryInline::FlatWriteRam32((r3 + 496), r0);
}

loc_inl2_0x802D362C:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_inl2_0x802D3638;
    }
}

loc_inl2_0x802D3630:
{
    r0 = 0;
    MemoryInline::FlatWriteRam32((r3 + 496), r0);
}

loc_inl2_0x802D3638:
{
    r4 = MemoryInline::FlatRead32((r3 + 500));
    r0 = MemoryInline::FlatRead32((r3 + 496));
}

loc_inl2_0x802D3644:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r4))) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x802D3648:
{
    MemoryInline::FlatWriteRam32((r3 + 496), r4);
    goto loc_inl2_cont_802D3618;
}

loc_inl2_return:
{
}

loc_inl2_cont_802D3618:
{
    // end of inlined leaf 0x802D3618
    r3 = r31;
    r4 = 0;
    ctx->lr = 0x802D9BB0u;
    if constexpr (KnownRegArgsCpuCall<0x80114D2Cu>(&func_80114D2C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_80114D2C_2702 = func_80114D2C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80114D2C_2702);
        r4 = static_cast<uint32_t>(regargs_result_80114D2C_2702 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80114D2Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    }
    goto loc_802D9CD0;
}

loc_802D9BB4:
{
    r3 = r31;
    r4 = 1;
    r5 = MemoryInline::FlatRead16((r31 + 510));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r0 = (r0 - r5);
    r5 = 1374420992;
    r5 = (r5 + -31457);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r5)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 5);
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r5 = (r5_rot_1 & 1);
    r0 = (r0 + r5);
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if constexpr (KnownRegArgsCpuCall<0x802D69C8u>(&func_802D69C8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802D69C8_2CFC = func_802D69C8_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_802D69C8_2CFC;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802D69C8u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
    }
    r0 = 5400;
    MemoryInline::FlatWriteRam16((r31 + 566), static_cast<uint16_t>(r0));
    r3 = r31;
    r4 = 1;
    ctx->lr = 0x802D9BFCu;
    if constexpr (KnownRegArgsCpuCall<0x80114D2Cu>(&func_80114D2C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_80114D2C_2FC9 = func_80114D2C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80114D2C_2FC9);
        r4 = static_cast<uint32_t>(regargs_result_80114D2C_2FC9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80114D2Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    }
    goto loc_802D9CD0;
}

loc_802D9C00:
{
    r3 = r31;
    r4 = 1;
    r5 = MemoryInline::FlatRead16((r31 + 510));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r0 = (r0 + r5);
    r5 = 1374420992;
    r5 = (r5 + -31457);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r5)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 5);
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r5 = (r5_rot_2 & 1);
    r0 = (r0 + r5);
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if constexpr (KnownRegArgsCpuCall<0x802D69C8u>(&func_802D69C8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802D69C8_35C3 = func_802D69C8_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_802D69C8_35C3;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802D69C8u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
    }
    r0 = 5400;
    MemoryInline::FlatWriteRam16((r31 + 566), static_cast<uint16_t>(r0));
    r3 = r31;
    r4 = 1;
    ctx->lr = 0x802D9C48u;
    if constexpr (KnownRegArgsCpuCall<0x80114D2Cu>(&func_80114D2C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_80114D2C_3890 = func_80114D2C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80114D2C_3890);
        r4 = static_cast<uint32_t>(regargs_result_80114D2C_3890 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80114D2Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    }
    goto loc_802D9CD0;
}

loc_802D9C4C:
{
    r3 = r31;
    r4 = 1;
    r5 = 10;
    if constexpr (KnownRegArgsCpuCall<0x802D6A08u>(&func_802D6A08)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802D6A08_3C3C = func_802D6A08_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_802D6A08_3C3C;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802D6A08u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
    }
    r0 = 5400;
    MemoryInline::FlatWriteRam16((r31 + 570), static_cast<uint16_t>(r0));
    r3 = r31;
    r4 = 2;
    ctx->lr = 0x802D9C70u;
    if constexpr (KnownRegArgsCpuCall<0x80114D2Cu>(&func_80114D2C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_80114D2C_3F09 = func_80114D2C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80114D2C_3F09);
        r4 = static_cast<uint32_t>(regargs_result_80114D2C_3F09 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80114D2Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    }
    goto loc_802D9CD0;
}

loc_802D9C74:
{
    r3 = r31;
    r4 = 1;
    r5 = 20;
    if constexpr (KnownRegArgsCpuCall<0x802D6A08u>(&func_802D6A08)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802D6A08_42B5 = func_802D6A08_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_802D6A08_42B5;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802D6A08u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
    }
    r0 = 5400;
    MemoryInline::FlatWriteRam16((r31 + 570), static_cast<uint16_t>(r0));
    r3 = r31;
    r4 = 2;
    ctx->lr = 0x802D9C98u;
    if constexpr (KnownRegArgsCpuCall<0x80114D2Cu>(&func_80114D2C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_80114D2C_4582 = func_80114D2C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80114D2C_4582);
        r4 = static_cast<uint32_t>(regargs_result_80114D2C_4582 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80114D2Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    }
    goto loc_802D9CD0;
}

loc_802D9C9C:
{
    r0 = 0;
    MemoryInline::FlatWriteRam16((r31 + 540), static_cast<uint16_t>(r0));
    r3 = r31;
    r4 = 4;
    ctx->lr = 0x802D9CB0u;
    if constexpr (KnownRegArgsCpuCall<0x80114D2Cu>(&func_80114D2C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_80114D2C_49AD = func_80114D2C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80114D2C_49AD);
        r4 = static_cast<uint32_t>(regargs_result_80114D2C_49AD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80114D2Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    }
    goto loc_802D9CD0;
}

loc_802D9CB4:
{
    r3 = r31;
    r4 = 1;
    r5 = 5400;
    // inline leaf 0x802D6A48 (7 guest instruction(s))
}

loc_inl3_0x802D6A48:
{
    MemoryInline::FlatWriteRam8((r3 + 572), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead16((r3 + 574));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
}

loc_inl3_0x802D6A58:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r0))) {
        goto loc_inl3_return;
    }
}

loc_inl3_0x802D6A5C:
{
    MemoryInline::FlatWriteRam16((r3 + 574), static_cast<uint16_t>(r5));
    goto loc_inl3_cont_802D6A48;
}

loc_inl3_return:
{
}

loc_inl3_cont_802D6A48:
{
    // end of inlined leaf 0x802D6A48
    r3 = r31;
    r4 = 9;
    ctx->lr = 0x802D9CD0u;
    if constexpr (KnownRegArgsCpuCall<0x80114D2Cu>(&func_80114D2C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_80114D2C_506B = func_80114D2C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80114D2C_506B);
        r4 = static_cast<uint32_t>(regargs_result_80114D2C_506B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80114D2Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    }
}

loc_802D9CD0:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    ctx->gpr[30] = r30_entry;
    ctx->gpr[31] = r31_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802D9ADC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802D9ADC_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000007FF gpr_write=0x000007FB gpr_return=0x00000018 fpr_read=0x80000001 fpr_write=0x80000003 fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802D9ADC func_802D9ADC preserves=true fpr_mask=0x00000000
