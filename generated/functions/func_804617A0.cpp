#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804574EC(CpuContext* ctx);
extern "C" uint64_t func_804574EC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_804617A0_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_ca_0 = 0;
    uint32_t r0_ca_1 = 0;
    uint32_t r0_ca_2 = 0;
    uint32_t r0_ca_3 = 0;
    uint32_t r0_not_0 = 0;
    uint32_t r0_not_1 = 0;
    uint32_t r0_not_2 = 0;
    uint32_t r0_not_3 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r25_ca_0 = 0;
    uint32_t r25_ca_1 = 0;
    uint32_t r25_ca_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_10 = 0;
    uint32_t r3_addr_11 = 0;
    uint32_t r3_addr_12 = 0;
    uint32_t r3_addr_13 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;
    uint32_t r3_ca_0 = 0;
    uint32_t r3_ca_1 = 0;
    uint32_t r3_ca_2 = 0;
    uint32_t r3_ca_3 = 0;
    uint32_t r3_not_0 = 0;
    uint32_t r3_not_1 = 0;
    uint32_t r3_not_2 = 0;
    uint32_t r3_not_3 = 0;
    uint32_t r4_ca_0 = 0;
    uint32_t r4_ca_1 = 0;
    uint32_t r4_ca_2 = 0;
    uint32_t r4_not_0 = 0;
    uint32_t r4_not_1 = 0;
    uint32_t r4_not_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r14 = ctx->gpr[14];
    uint32_t r15 = ctx->gpr[15];
    uint32_t r16 = ctx->gpr[16];
    uint32_t r17 = ctx->gpr[17];
    uint32_t r18 = ctx->gpr[18];
    uint32_t r19 = ctx->gpr[19];
    uint32_t r20 = ctx->gpr[20];
    uint32_t r21 = ctx->gpr[21];
    uint32_t r22 = ctx->gpr[22];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x804617A0u);
    goto loc_804617A0;

loc_804617A0:
{
    MemoryInline::FlatWriteRam32((r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
}

loc_804617AC:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 96u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 92u, (r1 + 100), r0);
    r27 = 0;
    r15 = r3;
    r16 = r4;
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + 8), r7);
    r17 = r5;
    r18 = r6;
    r19 = r8;
    r20 = r9;
    r28 = 1;
    r26 = 0;
    r24 = 0;
    r25 = 0;
    r22 = 0;
    r23 = 0;
    MemoryInline::FlatWrite32(r9, r27);
    MemoryInline::FlatWrite32(r8, r27);
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(0))) {
        goto loc_80461810;
    }
}

loc_804617F8:
{
}

loc_804617FC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_80461810;
    }
}

loc_80461800:
{
}

loc_80461804:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(36))) {
        goto loc_80461810;
    }
}

loc_80461808:
{
}

loc_8046180C:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(1))) {
        goto loc_80461818;
    }
}

loc_80461810:
{
    r28 = 64;
    goto loc_80461838;
}

loc_80461818:
{
    r12 = r17;
    r3 = r18;
    r4 = 0;
    r5 = 0;
    ctr = r12;
    r27 = 1;
    ctx->lr = 0x80461834u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r21 = r3;
}

loc_80461838:
{
}

loc_8046183C:
{
    if ((static_cast<int32_t>(r15) == static_cast<int32_t>(0))) {
        goto loc_8046185C;
    }
}

loc_80461840:
{
    r6 = r15;
    r5 = (static_cast<int32_t>(r15) >> 31);
    r3 = -1;
    r4 = -1;
    if constexpr (KnownRegArgsCpuCall<0x804574ECu>(&func_804574EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_804574EC_156F = func_804574EC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804574EC_156F);
        r4 = static_cast<uint32_t>(regargs_result_804574EC_156F >> 32);
        r0 = ctx->gpr[0];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x804574ECu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r22 = r4;
    r23 = r3;
}

loc_8046185C:
{
    r3 = 0x80610000u;
    r30 = 1;
    r14 = 0;
    r31 = -1;
    r29 = (r3 + -2448);
    goto loc_80461BD0;
}

loc_80461874:
{
}

loc_80461878:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(1))) {
        goto loc_804618A0;
    }
}

loc_8046187C:
{
}

loc_80461880:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(2))) {
        goto loc_80461960;
    }
}

loc_80461884:
{
}

loc_80461888:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(4))) {
        goto loc_804619A8;
    }
}

loc_8046188C:
{
}

loc_80461890:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(8))) {
        goto loc_804619F8;
    }
}

loc_80461894:
{
}

loc_80461898:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(16))) {
        goto loc_804619F8;
    }
}

loc_8046189C:
{
    goto loc_80461BD0;
}

loc_804618A0:
{
}

loc_804618A4:
{
    r0 = 1;
    if ((static_cast<uint32_t>(r21) > static_cast<uint32_t>(255))) {
        goto loc_804618B0;
    }
}

loc_804618AC:
{
    r0 = 0;
}

loc_804618B0:
{
}

loc_804618B4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804618C0;
    }
}

loc_804618B8:
{
    r0 = 0;
    goto loc_804618D4;
}

loc_804618C0:
{
    r3 = MemoryInline::FlatRead32((r29 + 56));
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r21), static_cast<uint32_t>(1));
    r0 = (r0_rot_7 & -2);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3_addr_12 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_12);
    r0 = (r0 & 256);
}

loc_804618D4:
{
}

loc_804618D8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80461900;
    }
}

loc_804618DC:
{
    r12 = r17;
    r3 = r18;
    r4 = 0;
    r5 = 0;
    ctr = r12;
    ctx->lr = 0x804618F4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r21 = r3;
    r26 = (r26 + 1);
    goto loc_80461BD0;
}

loc_80461900:
{
}

loc_80461904:
{
    if ((static_cast<int32_t>(r21) != static_cast<int32_t>(43))) {
        goto loc_8046192C;
    }
}

loc_80461908:
{
    r12 = r17;
    r3 = r18;
    r4 = 0;
    r5 = 0;
    ctr = r12;
    r27 = (r27 + 1);
    ctx->lr = 0x80461924u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r21 = r3;
    goto loc_80461958;
}

loc_8046192C:
{
}

loc_80461930:
{
    if ((static_cast<int32_t>(r21) != static_cast<int32_t>(45))) {
        goto loc_80461958;
    }
}

loc_80461934:
{
    r12 = r17;
    r3 = r18;
    r4 = 0;
    r5 = 0;
    ctr = r12;
    r27 = (r27 + 1);
    ctx->lr = 0x80461950u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r21 = r3;
    MemoryInline::FlatWrite32(r19, r30);
}

loc_80461958:
{
    r28 = 2;
    goto loc_80461BD0;
}

loc_80461960:
{
}

loc_80461964:
{
    if ((static_cast<int32_t>(r15) == static_cast<int32_t>(0))) {
        goto loc_80461970;
    }
}

loc_80461968:
{
}

loc_8046196C:
{
    if ((static_cast<int32_t>(r15) != static_cast<int32_t>(16))) {
        goto loc_804619A0;
    }
}

loc_80461970:
{
}

loc_80461974:
{
    if ((static_cast<int32_t>(r21) != static_cast<int32_t>(48))) {
        goto loc_804619A0;
    }
}

loc_80461978:
{
    r12 = r17;
    r3 = r18;
    r28 = 4;
    r4 = 0;
    r5 = 0;
    ctr = r12;
    r27 = (r27 + 1);
    ctx->lr = 0x80461998u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r21 = r3;
    goto loc_80461BD0;
}

loc_804619A0:
{
    r28 = 8;
    goto loc_80461BD0;
}

loc_804619A8:
{
}

loc_804619AC:
{
    if ((static_cast<int32_t>(r21) == static_cast<int32_t>(88))) {
        goto loc_804619B8;
    }
}

loc_804619B0:
{
}

loc_804619B4:
{
    if ((static_cast<int32_t>(r21) != static_cast<int32_t>(120))) {
        goto loc_804619E4;
    }
}

loc_804619B8:
{
    r12 = r17;
    r3 = r18;
    r15 = 16;
    r28 = 8;
    r4 = 0;
    r5 = 0;
    ctr = r12;
    r27 = (r27 + 1);
    ctx->lr = 0x804619DCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r21 = r3;
    goto loc_80461BD0;
}

loc_804619E4:
{
}

loc_804619E8:
{
    if ((static_cast<int32_t>(r15) != static_cast<int32_t>(0))) {
        goto loc_804619F0;
    }
}

loc_804619EC:
{
    r15 = 8;
}

loc_804619F0:
{
    r28 = 16;
    goto loc_80461BD0;
}

loc_804619F8:
{
}

loc_804619FC:
{
    if ((static_cast<int32_t>(r15) != static_cast<int32_t>(0))) {
        goto loc_80461A04;
    }
}

loc_80461A00:
{
    r15 = 10;
}

loc_80461A04:
{
    r0 = (static_cast<int32_t>(r14) >> 31);
    r0 = (r23 ^ r0);
    r0 = (r22 | r0);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80461A30;
    }
}

loc_80461A14:
{
    r6 = r15;
    r5 = (static_cast<int32_t>(r15) >> 31);
    r3 = -1;
    r4 = -1;
    if constexpr (KnownRegArgsCpuCall<0x804574ECu>(&func_804574EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_804574EC_3597 = func_804574EC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804574EC_3597);
        r4 = static_cast<uint32_t>(regargs_result_804574EC_3597 >> 32);
        r0 = ctx->gpr[0];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x804574ECu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r22 = r4;
    r23 = r3;
}

loc_80461A30:
{
}

loc_80461A34:
{
    r0 = 1;
    if ((static_cast<uint32_t>(r21) > static_cast<uint32_t>(255))) {
        goto loc_80461A40;
    }
}

loc_80461A3C:
{
    r0 = 0;
}

loc_80461A40:
{
}

loc_80461A44:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80461A50;
    }
}

loc_80461A48:
{
    r0 = 0;
    goto loc_80461A64;
}

loc_80461A50:
{
    r3 = MemoryInline::FlatRead32((r29 + 56));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r21), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3_addr_2 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_2);
    r0 = (r0 & 8);
}

loc_80461A64:
{
}

loc_80461A68:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80461A90;
    }
}

loc_80461A6C:
{
    r21 = (r21 + -48);
}

loc_80461A74:
{
    if ((static_cast<int32_t>(r21) < static_cast<int32_t>(r15))) {
        goto loc_80461B48;
    }
}

loc_80461A78:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(16));
}

loc_80461A7C:
{
    r28 = 64;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80461A88;
    }
}

loc_80461A84:
{
    r28 = 32;
}

loc_80461A88:
{
    r21 = (r21 + 48);
    goto loc_80461BD0;
}

loc_80461A90:
{
}

loc_80461A94:
{
    r0 = 1;
    if ((static_cast<uint32_t>(r21) > static_cast<uint32_t>(255))) {
        goto loc_80461AA0;
    }
}

loc_80461A9C:
{
    r0 = 0;
}

loc_80461AA0:
{
}

loc_80461AA4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80461AB0;
    }
}

loc_80461AA8:
{
    r0 = 0;
    goto loc_80461AC4;
}

loc_80461AB0:
{
    r3 = MemoryInline::FlatRead32((r29 + 56));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r21), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & -2);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3_addr_4 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_4);
    r0 = (r0 & 1);
}

loc_80461AC4:
{
}

loc_80461AC8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80461B04;
    }
}

loc_80461ACC:
{
}

loc_80461AD0:
{
    r0 = 1;
    if ((static_cast<uint32_t>(r21) > static_cast<uint32_t>(255))) {
        goto loc_80461ADC;
    }
}

loc_80461AD8:
{
    r0 = 0;
}

loc_80461ADC:
{
}

loc_80461AE0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80461AEC;
    }
}

loc_80461AE4:
{
    r3 = r21;
    goto loc_80461AF8;
}

loc_80461AEC:
{
    r3 = MemoryInline::FlatRead32((r29 + 56));
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3_addr_6 = (r3 + r21);
    r3 = MemoryInline::FlatRead8(r3_addr_6);
}

loc_80461AF8:
{
    r0 = (r3 + -55);
}

loc_80461B00:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r15))) {
        goto loc_80461B1C;
    }
}

loc_80461B04:
{
}

loc_80461B08:
{
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(16))) {
        goto loc_80461B14;
    }
}

loc_80461B0C:
{
    r28 = 32;
    goto loc_80461BD0;
}

loc_80461B14:
{
    r28 = 64;
    goto loc_80461BD0;
}

loc_80461B1C:
{
}

loc_80461B20:
{
    r0 = 1;
    if ((static_cast<uint32_t>(r21) > static_cast<uint32_t>(255))) {
        goto loc_80461B2C;
    }
}

loc_80461B28:
{
    r0 = 0;
}

loc_80461B2C:
{
}

loc_80461B30:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80461B38;
    }
}

loc_80461B34:
{
    goto loc_80461B44;
}

loc_80461B38:
{
    r3 = MemoryInline::FlatRead32((r29 + 56));
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3_addr_8 = (r3 + r21);
    r21 = MemoryInline::FlatRead8(r3_addr_8);
}

loc_80461B44:
{
    r21 = (r21 + -55);
}

loc_80461B48:
{
    r0 = (r22 - r24);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r22) >= static_cast<uint32_t>(r24) ? 1u : 0u) << 29);
    r0_not_2 = ~(r25);
    r0_ca_2 = (xer >> 29) & 1u;
    r0 = (r0_not_2 + r23);
    r0 = (r0 + r0_ca_2);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0_not_2)) + static_cast<uint64_t>(static_cast<uint32_t>(r23)) + (static_cast<uint64_t>(static_cast<uint32_t>(r0_ca_2)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r0_not_3 = ~(r22);
    r0_ca_3 = (xer >> 29) & 1u;
    r0 = (r0_not_3 + r22);
    r0 = (r0 + r0_ca_3);
    r0 = (0 - r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80461B60;
    }
}

loc_80461B5C:
{
    MemoryInline::FlatWrite32(r20, r30);
}

loc_80461B60:
{
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r24) * static_cast<uint64_t>(r15)) >> 32));
    r5 = (static_cast<int32_t>(r15) >> 31);
    r6 = (static_cast<int32_t>(r21) >> 31);
    r4 = (r25 * r15);
    r4 = (r3 + r4);
    r3 = (r24 * r5);
    r0 = (r24 * r15);
    r7 = (r4 + r3);
    r5 = (r31 - r0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r31) >= static_cast<uint32_t>(r0) ? 1u : 0u) << 29);
    r4_not_2 = ~(r7);
    r4_ca_2 = (xer >> 29) & 1u;
    r4 = (r4_not_2 + r31);
    r4 = (r4 + r4_ca_2);
    r3 = (r5 - r21);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r21) ? 1u : 0u) << 29);
    r3_not_2 = ~(r6);
    r3_ca_2 = (xer >> 29) & 1u;
    r3 = (r3_not_2 + r4);
    r3 = (r3 + r3_ca_2);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r3_not_2)) + static_cast<uint64_t>(static_cast<uint32_t>(r4)) + (static_cast<uint64_t>(static_cast<uint32_t>(r3_ca_2)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r3_not_3 = ~(r5);
    r3_ca_3 = (xer >> 29) & 1u;
    r3 = (r3_not_3 + r5);
    r3 = (r3 + r3_ca_3);
    r3 = (0 - r3);
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80461BA0;
    }
}

loc_80461B9C:
{
    MemoryInline::FlatWrite32(r20, r30);
}

loc_80461BA0:
{
    r4 = (static_cast<int32_t>(r21) >> 31);
    r12 = r17;
    r24 = (r0 + r21);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0)) + static_cast<uint64_t>(static_cast<uint32_t>(r21)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r3 = r18;
    r25_ca_2 = (xer >> 29) & 1u;
    r25 = (r7 + r4);
    r25 = (r25 + r25_ca_2);
    r28 = 16;
    r4 = 0;
    r5 = 0;
    ctr = r12;
    r27 = (r27 + 1);
    ctx->lr = 0x80461BCCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r21 = r3;
}

loc_80461BD0:
{
}

loc_80461BD4:
{
    if ((static_cast<int32_t>(r27) > static_cast<int32_t>(r16))) {
        goto loc_80461BE8;
    }
}

loc_80461BD8:
{
}

loc_80461BDC:
{
    if ((static_cast<int32_t>(r21) == static_cast<int32_t>(-1))) {
        goto loc_80461BE8;
    }
}

loc_80461BE0:
{
    r0 = (r28 & 96);
}

loc_80461BE4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80461874;
    }
}

loc_80461BE8:
{
    r0 = (r28 & 52);
}

loc_80461BEC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80461C04;
    }
}

loc_80461BF0:
{
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r24 = 0;
    r25 = 0;
    MemoryInline::FlatWrite32(r3, r24);
    goto loc_80461C14;
}

loc_80461C04:
{
    r3 = (r27 + r26);
    r0 = (r3 + -1);
    r3 = MemoryInline::FlatRead32((r1 + 8));
    MemoryInline::FlatWrite32(r3, r0);
}

loc_80461C14:
{
    r12 = r17;
    r3 = r18;
    r4 = r21;
    r5 = 1;
    ctr = r12;
    ctx->lr = 0x80461C2Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = r24;
    r3 = r25;
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 24), 0, 80u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 76u, (r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804617A0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804617A0_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804617A0 func_804617A0 preserves=true fpr_mask=0x00000000
