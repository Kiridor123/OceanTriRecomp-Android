#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80477970(CpuContext* ctx);
extern "C" uint64_t func_80477970_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80477B90_ra90_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r4, uint32_t arg_r7)
{
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r31_addr_0 = 0;
    uint32_t r31_addr_1 = 0;
    uint32_t r31_addr_2 = 0;
    uint32_t r31_addr_3 = 0;
    uint32_t r31_addr_4 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = arg_r7;
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    goto loc_80477B90;

loc_80477B90:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r3 = 0x80710000u;
    r6 = 0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = 2;
    r3 = (r3 + -3456);
    r4 = 0;
    r31 = (r3 + 84);
    ctr = r0;
}

loc_80477BBC:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(4));
    r0 = (r0_rot_2 & 4080);
    r6 = (r6 + 1);
    r5 = (r31 + r0);
    r3 = (r5 + 196608);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(4));
    r0 = (r0_rot_3 & 4080);
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + -30580), 0, 144u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r3 + -30580), r4);
    r5 = (r31 + r0);
    r6 = (r6 + 1);
    MemoryInline::WriteResolved32(guest_range_0, 128u, (r3 + -30452), r4);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(4));
    r0 = (r0_rot_4 & 4080);
    r6 = (r6 + 1);
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + -30576), r4);
    MemoryInline::WriteResolved32(guest_range_0, 132u, (r3 + -30448), r4);
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + -30572), r4);
    MemoryInline::WriteResolved32(guest_range_0, 136u, (r3 + -30444), r4);
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + -30568), r4);
    MemoryInline::WriteResolved32(guest_range_0, 140u, (r3 + -30440), r4);
    r3 = (r5 + 196608);
    r5 = (r31 + r0);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(4));
    r0 = (r0_rot_5 & 4080);
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + -30580), 0, 144u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r3 + -30580), r4);
    r6 = (r6 + 1);
    MemoryInline::WriteResolved32(guest_range_1, 128u, (r3 + -30452), r4);
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r3 + -30576), r4);
    MemoryInline::WriteResolved32(guest_range_1, 132u, (r3 + -30448), r4);
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r3 + -30572), r4);
    MemoryInline::WriteResolved32(guest_range_1, 136u, (r3 + -30444), r4);
    MemoryInline::WriteResolved32(guest_range_1, 12u, (r3 + -30568), r4);
    MemoryInline::WriteResolved32(guest_range_1, 140u, (r3 + -30440), r4);
    r3 = (r5 + 196608);
    r5 = (r31 + r0);
    guest_range_2 = MemoryInline::ResolveRangeHost((r3 + -30580), 0, 144u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r3 + -30580), r4);
    MemoryInline::WriteResolved32(guest_range_2, 128u, (r3 + -30452), r4);
    MemoryInline::WriteResolved32(guest_range_2, 4u, (r3 + -30576), r4);
    MemoryInline::WriteResolved32(guest_range_2, 132u, (r3 + -30448), r4);
    MemoryInline::WriteResolved32(guest_range_2, 8u, (r3 + -30572), r4);
    MemoryInline::WriteResolved32(guest_range_2, 136u, (r3 + -30444), r4);
    MemoryInline::WriteResolved32(guest_range_2, 12u, (r3 + -30568), r4);
    MemoryInline::WriteResolved32(guest_range_2, 140u, (r3 + -30440), r4);
    r3 = (r5 + 196608);
    guest_range_3 = MemoryInline::ResolveRangeHost((r3 + -30580), 0, 144u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 0u, (r3 + -30580), r4);
    MemoryInline::WriteResolved32(guest_range_3, 128u, (r3 + -30452), r4);
    MemoryInline::WriteResolved32(guest_range_3, 4u, (r3 + -30576), r4);
    MemoryInline::WriteResolved32(guest_range_3, 132u, (r3 + -30448), r4);
    MemoryInline::WriteResolved32(guest_range_3, 8u, (r3 + -30572), r4);
    MemoryInline::WriteResolved32(guest_range_3, 136u, (r3 + -30444), r4);
    MemoryInline::WriteResolved32(guest_range_3, 12u, (r3 + -30568), r4);
    MemoryInline::WriteResolved32(guest_range_3, 140u, (r3 + -30440), r4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80477BBC;
    }
}

loc_80477C80:
{
    r0 = 3;
    r10 = 0;
    r7 = 0;
    ctr = r0;
}

loc_80477C90:
{
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & 1020);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(1));
    r4 = (r4_rot_2 & 510);
    r8 = (r31 + r0);
    r6 = (r8 + 196608);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(4));
    r0 = (r0_rot_8 & 4080);
    r4 = (r4 + 196608);
    MemoryInline::FlatWrite32((r6 + -30180), r7);
    r9 = (r31 + r0);
    r10 = (r10 + 1);
    r5 = (r4 + -30108);
    MemoryInline::FlatWrite32((r6 + -30144), r7);
    r3 = (r9 + 196608);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(2));
    r0 = (r0_rot_9 & 1020);
    r31_addr_2 = (r31 + r5);
    MemoryInline::FlatWrite16(r31_addr_2, static_cast<uint16_t>(r7));
    r8 = (r31 + r0);
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(1));
    r4 = (r4_rot_3 & 510);
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(4));
    r0 = (r0_rot_10 & 4080);
    MemoryInline::FlatWrite32((r3 + -30324), r7);
    r4 = (r4 + 196608);
    r6 = (r8 + 196608);
    r9 = (r31 + r0);
    MemoryInline::FlatWrite32((r3 + -30320), r7);
    r10 = (r10 + 1);
    r5 = (r4 + -30108);
    MemoryInline::FlatWrite16((r3 + -30316), static_cast<uint16_t>(r7));
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(2));
    r0 = (r0_rot_11 & 1020);
    r8 = (r31 + r0);
    r4_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(1));
    r4 = (r4_rot_4 & 510);
    MemoryInline::FlatWrite16((r3 + -30314), static_cast<uint16_t>(r7));
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(4));
    r0 = (r0_rot_12 & 4080);
    r4 = (r4 + 196608);
    r10 = (r10 + 1);
    MemoryInline::FlatWrite16((r3 + -30312), static_cast<uint16_t>(r7));
    MemoryInline::FlatWrite16((r3 + -30310), static_cast<uint16_t>(r7));
    r3 = (r9 + 196608);
    r9 = (r31 + r0);
    MemoryInline::FlatWrite32((r6 + -30180), r7);
    MemoryInline::FlatWrite32((r6 + -30144), r7);
    r6 = (r8 + 196608);
    r31_addr_3 = (r31 + r5);
    MemoryInline::FlatWrite16(r31_addr_3, static_cast<uint16_t>(r7));
    r5 = (r4 + -30108);
    MemoryInline::FlatWrite32((r3 + -30324), r7);
    MemoryInline::FlatWrite32((r3 + -30320), r7);
    MemoryInline::FlatWrite16((r3 + -30316), static_cast<uint16_t>(r7));
    MemoryInline::FlatWrite16((r3 + -30314), static_cast<uint16_t>(r7));
    MemoryInline::FlatWrite16((r3 + -30312), static_cast<uint16_t>(r7));
    MemoryInline::FlatWrite16((r3 + -30310), static_cast<uint16_t>(r7));
    r3 = (r9 + 196608);
    MemoryInline::FlatWrite32((r6 + -30180), r7);
    MemoryInline::FlatWrite32((r6 + -30144), r7);
    r31_addr_4 = (r31 + r5);
    MemoryInline::FlatWrite16(r31_addr_4, static_cast<uint16_t>(r7));
    MemoryInline::FlatWrite32((r3 + -30324), r7);
    MemoryInline::FlatWrite32((r3 + -30320), r7);
    MemoryInline::FlatWrite16((r3 + -30316), static_cast<uint16_t>(r7));
    MemoryInline::FlatWrite16((r3 + -30314), static_cast<uint16_t>(r7));
    MemoryInline::FlatWrite16((r3 + -30312), static_cast<uint16_t>(r7));
    MemoryInline::FlatWrite16((r3 + -30310), static_cast<uint16_t>(r7));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80477C90;
    }
}

loc_80477D78:
{
    r4 = 65536;
    r3 = (r31 + 196608);
    r0 = (r4 + -16);
    MemoryInline::FlatWriteRam16((r3 + -30084), static_cast<uint16_t>(r0));
    r6 = r31;
    r3 = 0;
    r4 = 64;
    r5 = 48;
    ctx->lr = 0x80477D9Cu;
    if constexpr (KnownRegArgsCpuCall<0x80477970u>(&func_80477970)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->ctr = ctr;
        const auto regargs_result_80477970_254A = func_80477970_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80477970_254A);
        r4 = static_cast<uint32_t>(regargs_result_80477970_254A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        ctr = ctx->ctr;
    } else {
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80477970u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        ctr = ctx->ctr;
    }
    r6 = (r31 + 3648);
    r3 = 1;
    r4 = 128;
    r5 = 26;
    ctx->lr = 0x80477DB0u;
    if constexpr (KnownRegArgsCpuCall<0x80477970u>(&func_80477970)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->ctr = ctr;
        const auto regargs_result_80477970_2B38 = func_80477970_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80477970_2B38);
        r4 = static_cast<uint32_t>(regargs_result_80477970_2B38 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        ctr = ctx->ctr;
    } else {
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80477970u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        ctr = ctx->ctr;
    }
    r6 = (r31 + 7288);
    r3 = 2;
    r4 = 660;
    r5 = 45;
    ctx->lr = 0x80477DC4u;
    if constexpr (KnownRegArgsCpuCall<0x80477970u>(&func_80477970)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->ctr = ctr;
        const auto regargs_result_80477970_3126 = func_80477970_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80477970_3126);
        r4 = static_cast<uint32_t>(regargs_result_80477970_3126 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        ctr = ctx->ctr;
    } else {
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80477970u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        ctr = ctx->ctr;
    }
    r6 = (r31 + 65536);
    r3 = 3;
    r4 = 1800;
    r5 = 30;
    r6 = (r6 + -28008);
    ctx->lr = 0x80477DDCu;
    if constexpr (KnownRegArgsCpuCall<0x80477970u>(&func_80477970)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->ctr = ctr;
        const auto regargs_result_80477970_372F = func_80477970_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80477970_372F);
        r4 = static_cast<uint32_t>(regargs_result_80477970_372F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        ctr = ctx->ctr;
    } else {
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80477970u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        ctr = ctx->ctr;
    }
    r6 = (r31 + 65536);
    r3 = 4;
    r4 = 8192;
    r5 = 9;
    r6 = (r6 + 26352);
    ctx->lr = 0x80477DF4u;
    if constexpr (KnownRegArgsCpuCall<0x80477970u>(&func_80477970)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->ctr = ctr;
        const auto regargs_result_80477970_3D36 = func_80477970_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80477970_3D36);
        r4 = static_cast<uint32_t>(regargs_result_80477970_3D36 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        ctr = ctx->ctr;
    } else {
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80477970u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        ctr = ctx->ctr;
    }
    r6 = (r31 + 196608);
    r0 = 0;
    MemoryInline::FlatWriteRam8((r6 + -30082), static_cast<uint8_t>(r0));
    r0 = 1;
    r5 = 2;
    r4 = 3;
    MemoryInline::FlatWriteRam8((r6 + -30081), static_cast<uint8_t>(r0));
    r3 = 4;
    r0 = 5;
    MemoryInline::FlatWriteRam8((r6 + -30080), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r6 + -30079), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r6 + -30078), static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteRam8((r6 + -30073), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80477B90(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80477B90_ra90_0_18_0(ctx, ctx->gpr[4], ctx->gpr[7]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00001892 gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80477B90 func_80477B90 preserves=true fpr_mask=0x00000000
