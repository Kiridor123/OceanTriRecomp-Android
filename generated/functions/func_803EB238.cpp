#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803DED30(CpuContext* ctx);
extern "C" uint64_t func_803DED30_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803DFD90(CpuContext* ctx);
extern "C" uint64_t func_803DFD90_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803EABEC(CpuContext* ctx);
extern "C" uint32_t func_803EABEC_ra70_1fe_10_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803EAC64(CpuContext* ctx);
extern "C" uint64_t func_803EAC64_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_803EAEA4(CpuContext* ctx);
extern "C" uint64_t func_803EAEA4_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803EED04(CpuContext* ctx);
extern "C" uint64_t func_803EED04_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80417150(CpuContext* ctx);
extern "C" uint32_t func_80417150_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_803EB238_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
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
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;

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
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    const uint32_t r28_entry = r28;
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x803EB238u);
    goto loc_803EB238;

loc_803EB238:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r28 = r5;
    ctx->lr = 0x803EB260u;
    if constexpr (KnownRegArgsCpuCall<0x803EAEA4u>(&func_803EAEA4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[28] = r28;
        ctx->ctr = ctr;
        const auto regargs_result_803EAEA4_DDD = func_803EAEA4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803EAEA4_DDD);
        r4 = static_cast<uint32_t>(regargs_result_803EAEA4_DDD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r13 = ctx->gpr[13];
        r28 = ctx->gpr[28];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[28] = r28;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803EAEA4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r13 = ctx->gpr[13];
        r28 = ctx->gpr[28];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    r31 = r3;
}

loc_803EB268:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(0))) {
        goto loc_803EB4AC;
    }
}

loc_803EB26C:
{
    r4 = MemoryInline::FlatRead32((r29 + 13672));
    r0 = (r4 + -1);
    MemoryInline::FlatWrite32((r29 + 13672), r0);
    r0 = (r3 * 56);
    r3 = (r29 + r0);
    r30 = (r3 + 13676);
}

loc_803EB288:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_803EB2A0;
    }
}

loc_803EB28C:
{
    r3 = r28;
    r4 = r30;
    ctx->lr = 0x803EB298u;
    if constexpr (KnownRegArgsCpuCall<0x803DFD90u>(&func_803DFD90)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        const auto regargs_result_803DFD90_16D0 = func_803DFD90_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803DFD90_16D0);
        r4 = static_cast<uint32_t>(regargs_result_803DFD90_16D0 >> 32);
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
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803DFD90u>(ctx);
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
        ctr = ctx->ctr;
    }
    r0 = 0;
    MemoryInline::FlatWrite8((r28 + 53), static_cast<uint8_t>(r0));
}

loc_803EB2A0:
{
    r4 = MemoryInline::FlatRead32((r29 + 1080));
}

loc_803EB2A8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_803EB2F4;
    }
}

loc_803EB2AC:
{
    r3 = (r29 + 65536);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(4));
    r0 = (r0_rot_1 & -16);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + -15952));
}

loc_803EB2C0:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_803EB2F4;
    }
}

loc_803EB2C4:
{
    r0 = MemoryInline::FlatRead8((r29 + 1088));
}

loc_803EB2CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803EB2EC;
    }
}

loc_803EB2D0:
{
    r3 = r29;
    r5 = MemoryInline::FlatRead32((r29 + 1084));
    r6 = 0;
    ctx->lr = 0x803EB2E0u;
    if constexpr (KnownRegArgsCpuCall<0x803EED04u>(&func_803EED04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        const auto regargs_result_803EED04_20C0 = func_803EED04_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803EED04_20C0);
        r4 = static_cast<uint32_t>(regargs_result_803EED04_20C0 >> 32);
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
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803EED04u>(ctx);
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
        ctr = ctx->ctr;
    }
    r0 = 0;
    MemoryInline::FlatWrite8((r29 + 1088), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r29 + 1084), r0);
}

loc_803EB2EC:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r29 + 1080), r0);
}

loc_803EB2F4:
{
    r4 = MemoryInline::FlatRead32((r29 + 1084));
}

loc_803EB2FC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_803EB320;
    }
}

loc_803EB300:
{
    r3 = (r29 + 65536);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(4));
    r0 = (r0_rot_3 & -16);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + -15952));
}

loc_803EB314:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_803EB320;
    }
}

loc_803EB318:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r29 + 1084), r0);
}

loc_803EB320:
{
    r6 = 0;
    r5 = (r29 + r31);
    r4 = 0;
    r0 = 2;
    ctr = r0;
}

loc_803EB334:
{
    r3 = (r5 + 65536);
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + -14352), 0, 701u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r3 + -14352), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 100u, (r3 + -14252), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 200u, (r3 + -14152), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 300u, (r3 + -14052), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 400u, (r3 + -13952), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 500u, (r3 + -13852), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 600u, (r3 + -13752), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 700u, (r3 + -13652), static_cast<uint8_t>(r4));
    r5 = (r5 + 800);
    r3 = (r5 + 65536);
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + -14352), 0, 701u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r3 + -14352), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 100u, (r3 + -14252), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 200u, (r3 + -14152), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 300u, (r3 + -14052), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 400u, (r3 + -13952), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 500u, (r3 + -13852), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 600u, (r3 + -13752), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 700u, (r3 + -13652), static_cast<uint8_t>(r4));
    r5 = (r5 + 800);
    r3 = (r5 + 65536);
    guest_range_2 = MemoryInline::ResolveRangeHost((r3 + -14352), 0, 701u, false, true);
    MemoryInline::WriteResolved8(guest_range_2, 0u, (r3 + -14352), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_2, 100u, (r3 + -14252), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_2, 200u, (r3 + -14152), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_2, 300u, (r3 + -14052), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_2, 400u, (r3 + -13952), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_2, 500u, (r3 + -13852), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_2, 600u, (r3 + -13752), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_2, 700u, (r3 + -13652), static_cast<uint8_t>(r4));
    r5 = (r5 + 800);
    r3 = (r5 + 65536);
    guest_range_3 = MemoryInline::ResolveRangeHost((r3 + -14352), 0, 701u, false, true);
    MemoryInline::WriteResolved8(guest_range_3, 0u, (r3 + -14352), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_3, 100u, (r3 + -14252), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_3, 200u, (r3 + -14152), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_3, 300u, (r3 + -14052), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_3, 400u, (r3 + -13952), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_3, 500u, (r3 + -13852), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_3, 600u, (r3 + -13752), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_3, 700u, (r3 + -13652), static_cast<uint8_t>(r4));
    r5 = (r5 + 800);
    r3 = (r5 + 65536);
    guest_range_4 = MemoryInline::ResolveRangeHost((r3 + -14352), 0, 701u, false, true);
    MemoryInline::WriteResolved8(guest_range_4, 0u, (r3 + -14352), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_4, 100u, (r3 + -14252), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_4, 200u, (r3 + -14152), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_4, 300u, (r3 + -14052), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_4, 400u, (r3 + -13952), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_4, 500u, (r3 + -13852), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_4, 600u, (r3 + -13752), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_4, 700u, (r3 + -13652), static_cast<uint8_t>(r4));
    r5 = (r5 + 800);
    r3 = (r5 + 65536);
    guest_range_5 = MemoryInline::ResolveRangeHost((r3 + -14352), 0, 701u, false, true);
    MemoryInline::WriteResolved8(guest_range_5, 0u, (r3 + -14352), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_5, 100u, (r3 + -14252), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_5, 200u, (r3 + -14152), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_5, 300u, (r3 + -14052), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_5, 400u, (r3 + -13952), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_5, 500u, (r3 + -13852), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_5, 600u, (r3 + -13752), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_5, 700u, (r3 + -13652), static_cast<uint8_t>(r4));
    r5 = (r5 + 800);
    r6 = (r6 + 48);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803EB334;
    }
}

loc_803EB42C:
{
    r3 = (r29 + 65536);
    r0 = (r6 * 100);
    r3 = (r3 + r0);
    r3 = (r3 + -14352);
    r0 = 0;
    r3_addr_1 = (r3 + r31);
    MemoryInline::FlatWrite8(r3_addr_1, static_cast<uint8_t>(r0));
    r3 = (r3 + r31);
    MemoryInline::FlatWrite8((r3 + 100), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 200), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 300), static_cast<uint8_t>(r0));
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A358 (7 guest instruction(s))
}

loc_inl1_0x8041A358:
{
}

loc_inl1_0x8041A35C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x8041A36C;
    }
}

loc_inl1_0x8041A360:
{
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    goto loc_inl1_cont_8041A358;
}

loc_inl1_0x8041A36C:
{
    r3 = 0;
}

loc_inl1_cont_8041A358:
{
    // end of inlined leaf 0x8041A358
}

loc_803EB464:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803EB488;
    }
}

loc_803EB468:
{
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A358 (7 guest instruction(s))
}

loc_inl3_0x8041A358:
{
}

loc_inl3_0x8041A35C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl3_0x8041A36C;
    }
}

loc_inl3_0x8041A360:
{
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & -4);
    r3_addr_4 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_4);
    goto loc_inl3_cont_8041A358;
}

loc_inl3_0x8041A36C:
{
    r3 = 0;
}

loc_inl3_cont_8041A358:
{
    // end of inlined leaf 0x8041A358
    r0 = (r29 + 65536);
    r4 = (r0 + r31);
    r4 = MemoryInline::FlatRead8((r4 + -4352));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    ctx->lr = 0x803EB488u;
    if constexpr (KnownRegArgsCpuCall<0x803DED30u>(&func_803DED30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        const auto regargs_result_803DED30_48BD = func_803DED30_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803DED30_48BD);
        r4 = static_cast<uint32_t>(regargs_result_803DED30_48BD >> 32);
        r0 = ctx->gpr[0];
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
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803DED30u>(ctx);
        r0 = ctx->gpr[0];
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
        ctr = ctx->ctr;
    }
}

loc_803EB488:
{
    r3 = r29;
    r4 = r30;
    ctx->lr = 0x803EB494u;
    if constexpr (KnownRegArgsCpuCall<0x803EABECu>(&func_803EABEC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->ctr = ctr;
        const auto regargs_result_803EABEC_4F2F = func_803EABEC_ra70_1fe_10_0(ctx, r4, r5, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r4 = regargs_result_803EABEC_4F2F;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
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
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803EABECu>(ctx);
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
        ctr = ctx->ctr;
    }
    r3 = r29;
    r4 = r31;
    ctx->lr = 0x803EB4A0u;
    if constexpr (KnownRegArgsCpuCall<0x803EAC64u>(&func_803EAC64)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_803EAC64_5565 = func_803EAC64_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803EAC64_5565);
        r4 = static_cast<uint32_t>(regargs_result_803EAC64_5565 >> 32);
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
        InvokeDirectCpu<0x803EAC64u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    // inline leaf 0x800E8A3C (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16732));
    // end of inlined leaf 0x800E8A3C
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r31)));
    if constexpr (KnownRegArgsCpuCall<0x80417150u>(&func_80417150)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80417150_5970 = func_80417150_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_80417150_5970;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80417150u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
}

loc_803EB4AC:
{
    r3 = r31;
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
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
    ctx->ctr = ctr;
    ctx->gpr[28] = r28_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803EB238(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803EB238_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x0FFFFFFF gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803EB238 func_803EB238 preserves=true fpr_mask=0x00000000
