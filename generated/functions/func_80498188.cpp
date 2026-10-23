#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8047ABB0(CpuContext* ctx);
extern "C" uint64_t func_8047ABB0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80495DA4(CpuContext* ctx);
extern "C" uint64_t func_80495DA4_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80497A74(CpuContext* ctx);
extern "C" uint64_t func_80497A74_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80498188_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
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
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;

    goto loc_80498188;

loc_80498188:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r5 = 0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r4;
    r30 = r3;
    r0 = MemoryInline::FlatRead8((r4 + 2));
}

loc_804981B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804981B8;
    }
}

loc_804981B4:
{
    r5 = 4;
}

loc_804981B8:
{
    r0 = MemoryInline::FlatRead8((r4 + 32));
}

loc_804981C0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804981CC;
    }
}

loc_804981C4:
{
    r0 = (r5 + 4);
    r5 = (r0 & 65535);
}

loc_804981CC:
{
    r0 = MemoryInline::FlatRead8((r4 + 6));
}

loc_804981D4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804981E0;
    }
}

loc_804981D8:
{
    r0 = (r5 + 24);
    r5 = (r0 & 65535);
}

loc_804981E0:
{
    r0 = MemoryInline::FlatRead8((r4 + 36));
}

loc_804981E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804981F4;
    }
}

loc_804981EC:
{
    r0 = (r5 + 11);
    r5 = (r0 & 65535);
}

loc_804981F4:
{
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r0 = (r5 + 6);
    r6 = MemoryInline::FlatRead8((r30 + 54));
    r4 = (r0 & 65535);
    r3 = MemoryInline::FlatRead16((r3 + 40));
    r5 = 5;
    ctx->lr = 0x80498210u;
    if constexpr (KnownRegArgsCpuCall<0x80497A74u>(&func_80497A74)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80497A74_E7C = func_80497A74_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80497A74_E7C);
        r4 = static_cast<uint32_t>(regargs_result_80497A74_E7C >> 32);
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
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x80497A74u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_80498214:
{
    r5 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80498244;
    }
}

loc_8049821C:
{
    r3 = 0x80740000u;
    r0 = MemoryInline::FlatRead8((r3 + -5120));
}

loc_80498228:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(2))) {
        goto loc_80498468;
    }
}

loc_8049822C:
{
    r3 = 524288;
    r4 = 0x80610000u;
    r3 = (r3 + 1);
    r4 = (r4 + 30964);
    ctx->lr = 0x80498240u;
    if constexpr (KnownRegArgsCpuCall<0x8047ABB0u>(&func_8047ABB0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8047ABB0_13DB = func_8047ABB0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8047ABB0_13DB);
        r4 = static_cast<uint32_t>(regargs_result_8047ABB0_13DB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8047ABB0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_80498468;
}

loc_80498244:
{
    r6 = MemoryInline::FlatRead16((r30 + 22));
    r0 = 0;
    r4 = (r3 + 26);
    MemoryInline::FlatWrite8((r3 + 20), static_cast<uint8_t>(r6));
    r6 = MemoryInline::FlatRead16((r30 + 22));
    r6 = (static_cast<int32_t>(r6) >> 8);
    MemoryInline::FlatWrite8((r3 + 21), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r3 + 22), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 23), static_cast<uint8_t>(r0));
    guest_range_0 = MemoryInline::ResolveRangeHost(r31, 0, 48u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, r31);
    MemoryInline::FlatWrite8((r3 + 24), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, r31);
    r0 = (static_cast<int32_t>(r0) >> 8);
    MemoryInline::FlatWrite8((r3 + 25), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r31 + 2));
}

loc_80498284:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804982B0;
    }
}

loc_80498288:
{
    r3 = 1;
    r0 = 2;
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r4 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r31 + 4));
    MemoryInline::FlatWrite8((r4 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r31 + 4));
    r0 = (static_cast<int32_t>(r0) >> 8);
    MemoryInline::FlatWrite8((r4 + 3), static_cast<uint8_t>(r0));
    r4 = (r4 + 4);
}

loc_804982B0:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 32u, (r31 + 32));
}

loc_804982B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804982E0;
    }
}

loc_804982BC:
{
    r0 = 2;
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r4 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 34u, (r31 + 34));
    MemoryInline::FlatWrite8((r4 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 34u, (r31 + 34));
    r0 = (static_cast<int32_t>(r0) >> 8);
    MemoryInline::FlatWrite8((r4 + 3), static_cast<uint8_t>(r0));
    r4 = (r4 + 4);
}

loc_804982E0:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r31 + 6));
}

loc_804982E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804983EC;
    }
}

loc_804982EC:
{
    r3 = 3;
    r0 = 22;
    guest_range_1 = MemoryInline::ResolveRangeHost(r4, 0, 24u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, r4, static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r4 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 8u, (r31 + 8));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r4 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 9u, (r31 + 9));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r4 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r31 + 12));
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r4 + 4), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r31 + 12));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r0 = (r0_rot_1 & 255);
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r4 + 5), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r31 + 12));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_2 & 255);
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r4 + 6), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r31 + 12));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_3 & 255);
    MemoryInline::WriteResolved8(guest_range_1, 7u, (r4 + 7), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r31 + 16));
    MemoryInline::WriteResolved8(guest_range_1, 8u, (r4 + 8), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r31 + 16));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r0 = (r0_rot_4 & 255);
    MemoryInline::WriteResolved8(guest_range_1, 9u, (r4 + 9), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r31 + 16));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_5 & 255);
    MemoryInline::WriteResolved8(guest_range_1, 10u, (r4 + 10), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r31 + 16));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_6 & 255);
    MemoryInline::WriteResolved8(guest_range_1, 11u, (r4 + 11), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r31 + 20));
    MemoryInline::WriteResolved8(guest_range_1, 12u, (r4 + 12), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r31 + 20));
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r0 = (r0_rot_7 & 255);
    MemoryInline::WriteResolved8(guest_range_1, 13u, (r4 + 13), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r31 + 20));
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_8 & 255);
    MemoryInline::WriteResolved8(guest_range_1, 14u, (r4 + 14), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r31 + 20));
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_9 & 255);
    MemoryInline::WriteResolved8(guest_range_1, 15u, (r4 + 15), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r31 + 24));
    MemoryInline::WriteResolved8(guest_range_1, 16u, (r4 + 16), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r31 + 24));
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r0 = (r0_rot_10 & 255);
    MemoryInline::WriteResolved8(guest_range_1, 17u, (r4 + 17), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r31 + 24));
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_11 & 255);
    MemoryInline::WriteResolved8(guest_range_1, 18u, (r4 + 18), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r31 + 24));
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_12 & 255);
    MemoryInline::WriteResolved8(guest_range_1, 19u, (r4 + 19), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r31 + 28));
    MemoryInline::WriteResolved8(guest_range_1, 20u, (r4 + 20), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r31 + 28));
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r0 = (r0_rot_13 & 255);
    MemoryInline::WriteResolved8(guest_range_1, 21u, (r4 + 21), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r31 + 28));
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_14 & 255);
    MemoryInline::WriteResolved8(guest_range_1, 22u, (r4 + 22), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r31 + 28));
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_15 & 255);
    MemoryInline::WriteResolved8(guest_range_1, 23u, (r4 + 23), static_cast<uint8_t>(r0));
    r4 = (r4 + 24);
}

loc_804983EC:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 36u, (r31 + 36));
}

loc_804983F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8049845C;
    }
}

loc_804983F8:
{
    r3 = 4;
    r0 = 9;
    guest_range_2 = MemoryInline::ResolveRangeHost(r4, 0, 11u, false, true);
    MemoryInline::WriteResolved8(guest_range_2, 0u, r4, static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_2, 1u, (r4 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 38u, (r31 + 38));
    MemoryInline::WriteResolved8(guest_range_2, 2u, (r4 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 39u, (r31 + 39));
    MemoryInline::WriteResolved8(guest_range_2, 3u, (r4 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 40u, (r31 + 40));
    MemoryInline::WriteResolved8(guest_range_2, 4u, (r4 + 4), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 42u, (r31 + 42));
    MemoryInline::WriteResolved8(guest_range_2, 5u, (r4 + 5), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 42u, (r31 + 42));
    r0 = (static_cast<int32_t>(r0) >> 8);
    MemoryInline::WriteResolved8(guest_range_2, 6u, (r4 + 6), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 44u, (r31 + 44));
    MemoryInline::WriteResolved8(guest_range_2, 7u, (r4 + 7), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 44u, (r31 + 44));
    r0 = (static_cast<int32_t>(r0) >> 8);
    MemoryInline::WriteResolved8(guest_range_2, 8u, (r4 + 8), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 46u, (r31 + 46));
    MemoryInline::WriteResolved8(guest_range_2, 9u, (r4 + 9), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 46u, (r31 + 46));
    r0 = (static_cast<int32_t>(r0) >> 8);
    MemoryInline::WriteResolved8(guest_range_2, 10u, (r4 + 10), static_cast<uint8_t>(r0));
}

loc_8049845C:
{
    r3 = MemoryInline::FlatRead32((r30 + 16));
    r4 = 0;
    ctx->lr = 0x80498468u;
    if constexpr (KnownRegArgsCpuCall<0x80495DA4u>(&func_80495DA4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80495DA4_4297 = func_80495DA4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80495DA4_4297);
        r4 = static_cast<uint32_t>(regargs_result_80495DA4_4297 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80495DA4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
}

loc_80498468:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80498188(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80498188_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80498188 func_80498188 preserves=true fpr_mask=0x00000000
