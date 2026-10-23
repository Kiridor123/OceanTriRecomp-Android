#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80477E60(CpuContext* ctx);
extern "C" uint64_t func_80477E60_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8047ABD0(CpuContext* ctx);
extern "C" uint64_t func_8047ABD0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8047B6F0(CpuContext* ctx);
extern "C" uint64_t func_8047B6F0_ra88_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8047B990(CpuContext* ctx);
extern "C" uint64_t func_8047B990_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_804801A8_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
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
    uint32_t r7 = ctx->gpr[7];
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
    const uint32_t r29_entry = r29;
    const uint32_t r30_entry = r30;
    const uint32_t r31_entry = r31;
    uint32_t ctr = ctx->ctr;

    goto loc_804801A8;

loc_804801A8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r7 = 0x80610000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r7 = (r7 + 14680);
    r31 = 5904;
    r30 = r5;
    r29 = r4;
    r28 = r3;
    r0 = MemoryInline::FlatRead8((r13 + -15848));
    MemoryInline::FlatWriteRam32((r1 + 8), r6);
}

loc_804801E8:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(5))) {
        goto loc_80480264;
    }
}

loc_804801EC:
{
}

loc_804801F0:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(8))) {
        goto loc_80480254;
    }
}

loc_804801F4:
{
    r3 = 0x80610000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r3 + 15916);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x8048020Cu:
        goto loc_8048020C;
        break;
    case 0x80480214u:
        goto loc_80480214;
        break;
    case 0x8048021Cu:
        goto loc_8048021C;
        break;
    case 0x80480224u:
        goto loc_80480224;
        break;
    case 0x8048022Cu:
        goto loc_8048022C;
        break;
    case 0x80480234u:
        goto loc_80480234;
        break;
    case 0x8048023Cu:
        goto loc_8048023C;
        break;
    case 0x80480244u:
        goto loc_80480244;
        break;
    case 0x8048024Cu:
        goto loc_8048024C;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[7] = r7;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_8048020C:
{
    r5 = (r7 + 940);
    goto loc_80480258;
}

loc_80480214:
{
    r5 = (r7 + 960);
    goto loc_80480258;
}

loc_8048021C:
{
    r5 = (r7 + 980);
    goto loc_80480258;
}

loc_80480224:
{
    r5 = (r7 + 1004);
    goto loc_80480258;
}

loc_8048022C:
{
    r5 = (r7 + 1028);
    goto loc_80480258;
}

loc_80480234:
{
    r5 = (r7 + 1052);
    goto loc_80480258;
}

loc_8048023C:
{
    r5 = (r7 + 1076);
    goto loc_80480258;
}

loc_80480244:
{
    r5 = (r7 + 1100);
    goto loc_80480258;
}

loc_8048024C:
{
    r5 = (r7 + 1124);
    goto loc_80480258;
}

loc_80480254:
{
    r5 = (r7 + 1148);
}

loc_80480258:
{
    r4 = (r7 + 1168);
    r3 = 1284;
    ctx->lr = 0x80480264u;
    if constexpr (KnownRegArgsCpuCall<0x8047ABD0u>(&func_8047ABD0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_8047ABD0_15F2 = func_8047ABD0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8047ABD0_15F2);
        r4 = static_cast<uint32_t>(regargs_result_8047ABD0_15F2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8047ABD0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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

loc_80480264:
{
}

loc_80480268:
{
    if ((static_cast<uint32_t>(r29) > static_cast<uint32_t>(8))) {
        goto loc_804803F0;
    }
}

loc_8048026C:
{
    r3 = 0x80610000u;
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r3 = (r3 + 15880);
    r3_addr_4 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_4);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x80480284u:
        goto loc_80480284;
        break;
    case 0x8048028Cu:
        goto loc_8048028C;
        break;
    case 0x804803F0u:
        goto loc_804803F0;
        break;
    case 0x80480294u:
        goto loc_80480294;
        break;
    case 0x804802ACu:
        goto loc_804802AC;
        break;
    case 0x804802A4u:
        goto loc_804802A4;
        break;
    case 0x8048029Cu:
        goto loc_8048029C;
        break;
    case 0x804802B8u:
        goto loc_804802B8;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[7] = r7;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_80480284:
{
    r31 = 5890;
    goto loc_804803F0;
}

loc_8048028C:
{
    r31 = 5891;
    goto loc_804803F0;
}

loc_80480294:
{
    r31 = 5892;
    goto loc_804803F0;
}

loc_8048029C:
{
    r31 = 5894;
    goto loc_804803F0;
}

loc_804802A4:
{
    r31 = 5893;
    goto loc_804803F0;
}

loc_804802AC:
{
    r3 = (r1 + 8);
    ctx->lr = 0x804802B4u;
    if constexpr (KnownRegArgsCpuCall<0x8047B990u>(&func_8047B990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8047B990_2484 = func_8047B990_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8047B990_2484);
        r4 = static_cast<uint32_t>(regargs_result_8047B990_2484 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8047B990u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_804803F0;
}

loc_804802B8:
{
    r4 = 0x80740000u;
    r0 = 2;
    r4 = (r4 + -18168);
    r5 = 0;
    ctr = r0;
}

loc_804802CC:
{
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(5));
    r0 = (r0_rot_6 & 8160);
    r3 = (r4 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 38));
}

loc_804802DC:
{
    if ((static_cast<uint32_t>(r28) != static_cast<uint32_t>(r0))) {
        goto loc_804802EC;
    }
}

loc_804802E0:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 39), static_cast<uint8_t>(r0));
    goto loc_804803F0;
}

loc_804802EC:
{
    r5 = (r5 + 1);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(5));
    r0 = (r0_rot_7 & 8160);
    r3 = (r4 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 38));
}

loc_80480300:
{
    if ((static_cast<uint32_t>(r28) != static_cast<uint32_t>(r0))) {
        goto loc_80480310;
    }
}

loc_80480304:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 39), static_cast<uint8_t>(r0));
    goto loc_804803F0;
}

loc_80480310:
{
    r5 = (r5 + 1);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(5));
    r0 = (r0_rot_8 & 8160);
    r3 = (r4 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 38));
}

loc_80480324:
{
    if ((static_cast<uint32_t>(r28) != static_cast<uint32_t>(r0))) {
        goto loc_80480334;
    }
}

loc_80480328:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 39), static_cast<uint8_t>(r0));
    goto loc_804803F0;
}

loc_80480334:
{
    r5 = (r5 + 1);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(5));
    r0 = (r0_rot_9 & 8160);
    r3 = (r4 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 38));
}

loc_80480348:
{
    if ((static_cast<uint32_t>(r28) != static_cast<uint32_t>(r0))) {
        goto loc_80480358;
    }
}

loc_8048034C:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 39), static_cast<uint8_t>(r0));
    goto loc_804803F0;
}

loc_80480358:
{
    r5 = (r5 + 1);
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(5));
    r0 = (r0_rot_10 & 8160);
    r3 = (r4 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 38));
}

loc_8048036C:
{
    if ((static_cast<uint32_t>(r28) != static_cast<uint32_t>(r0))) {
        goto loc_8048037C;
    }
}

loc_80480370:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 39), static_cast<uint8_t>(r0));
    goto loc_804803F0;
}

loc_8048037C:
{
    r5 = (r5 + 1);
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(5));
    r0 = (r0_rot_11 & 8160);
    r3 = (r4 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 38));
}

loc_80480390:
{
    if ((static_cast<uint32_t>(r28) != static_cast<uint32_t>(r0))) {
        goto loc_804803A0;
    }
}

loc_80480394:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 39), static_cast<uint8_t>(r0));
    goto loc_804803F0;
}

loc_804803A0:
{
    r5 = (r5 + 1);
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(5));
    r0 = (r0_rot_12 & 8160);
    r3 = (r4 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 38));
}

loc_804803B4:
{
    if ((static_cast<uint32_t>(r28) != static_cast<uint32_t>(r0))) {
        goto loc_804803C4;
    }
}

loc_804803B8:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 39), static_cast<uint8_t>(r0));
    goto loc_804803F0;
}

loc_804803C4:
{
    r5 = (r5 + 1);
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(5));
    r0 = (r0_rot_13 & 8160);
    r3 = (r4 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 38));
}

loc_804803D8:
{
    if ((static_cast<uint32_t>(r28) != static_cast<uint32_t>(r0))) {
        goto loc_804803E8;
    }
}

loc_804803DC:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 39), static_cast<uint8_t>(r0));
    goto loc_804803F0;
}

loc_804803E8:
{
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804802CC;
    }
}

loc_804803F0:
{
}

loc_804803F4:
{
    if ((static_cast<uint32_t>(r31) == static_cast<uint32_t>(5904))) {
        goto loc_80480420;
    }
}

loc_804803F8:
{
    r3 = 24;
    ctx->lr = 0x80480400u;
    if constexpr (KnownRegArgsCpuCall<0x80477E60u>(&func_80477E60)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[7] = r7;
        const auto regargs_result_80477E60_3881 = func_80477E60_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80477E60_3881);
        r4 = static_cast<uint32_t>(regargs_result_80477E60_3881 >> 32);
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
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x80477E60u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
}

loc_80480404:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80480420;
    }
}

loc_80480408:
{
    MemoryInline::FlatWriteRam16(r3, static_cast<uint16_t>(r31));
    MemoryInline::FlatWriteRam16((r3 + 6), static_cast<uint16_t>(r28));
    MemoryInline::FlatWriteRam32((r3 + 8), r30);
    r0 = MemoryInline::FlatRead32((r1 + 8));
    MemoryInline::FlatWriteRam32((r3 + 12), r0);
    ctx->lr = 0x80480420u;
    if constexpr (KnownRegArgsCpuCall<0x8047B6F0u>(&func_8047B6F0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8047B6F0_3DF8 = func_8047B6F0_ra88_0_18_0(ctx, r3, r7);
        r3 = static_cast<uint32_t>(regargs_result_8047B6F0_3DF8);
        r4 = static_cast<uint32_t>(regargs_result_8047B6F0_3DF8 >> 32);
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
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x8047B6F0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
}

loc_80480420:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[7] = r7;
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
    ctx->gpr[29] = r29_entry;
    ctx->gpr[30] = r30_entry;
    ctx->gpr[31] = r31_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804801A8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804801A8_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000027FF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804801A8 func_804801A8 preserves=true fpr_mask=0x00000000
