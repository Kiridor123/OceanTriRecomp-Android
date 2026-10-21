#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8005001C(CpuContext* ctx);
extern "C" double func_8005001C_ra18_0_0_2(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8005D130(CpuContext* ctx);
extern "C" uint64_t func_8005D130_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8005D188(CpuContext* ctx);
extern "C" uint64_t func_8005D188_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80097E48(CpuContext* ctx);
extern "C" uint64_t func_80097E48_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800E0C00(CpuContext* ctx);
extern "C" uint64_t func_800E0C00_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80223AD4(CpuContext* ctx);
extern "C" uint64_t func_80223AD4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_802ABF64_ra38_e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
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
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;

    MKW_GUEST_ENTER(0x802ABF64u);
    goto loc_802ABF64;

loc_802ABF64:
{
    MemoryInline::FlatWriteRam32((r1 + -160), r1);
    r1 = (r1 + -160);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 164), r0);
    r11 = (r1 + 160);
    // inline leaf 0x8045745C (17 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -64), 0, 64u, false, true);
    // end of inlined leaf 0x8045745C
    r31 = r3;
    r21 = r4;
    r3 = (r1 + 24);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 40);
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    r3 = (r1 + 20);
    r4 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8005D210u>(ctx);
    r3 = (r1 + 16);
    r4 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8005D210u>(ctx);
    r0 = (r21 & 255);
}

loc_802ABFB0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_802ABFC0;
    }
}

loc_802ABFB4:
{
}

loc_802ABFB8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_802AC020;
    }
}

loc_802ABFBC:
{
    goto loc_802AC234;
}

loc_802ABFC0:
{
    r3 = 0x805D0000u;
    r19 = (r3 + -3880);
    r16 = (r31 + 1652);
    r3 = r16;
    r4 = 0;
    r5 = 576;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = r31;
    r4 = (r21 & 255);
    // inline leaf 0x8026956C (17 guest instruction(s))
}

loc_inl3_0x8026956C:
{
}

loc_inl3_0x80269570:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_inl3_0x8026957C;
    }
}

loc_inl3_0x80269574:
{
    r3 = -1;
    goto loc_inl3_cont_8026956C;
}

loc_inl3_0x8026957C:
{
    r5 = MemoryInline::FlatRead32((r13 + -17144));
}

loc_inl3_0x80269584:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_inl3_0x80269590;
    }
}

loc_inl3_0x80269588:
{
    r3 = -1;
    goto loc_inl3_cont_8026956C;
}

loc_inl3_0x80269590:
{
    r5 = MemoryInline::FlatRead32((r5 + 16));
    r0 = MemoryInline::FlatRead8((r3 + 8));
    r0 = (r0 * 332);
    r5 = (r5 + r0);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r3 = (r5 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 156));
}

loc_inl3_cont_8026956C:
{
    // end of inlined leaf 0x8026956C
    r5 = r3;
    r3 = MemoryInline::FlatRead8((r31 + 20));
    r4 = (r21 & 255);
    ctx->lr = 0x802ABFF8u;
    if constexpr (KnownRegArgsCpuCall<0x80223AD4u>(&func_80223AD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80223AD4_150D = func_80223AD4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80223AD4_150D);
        r4 = static_cast<uint32_t>(regargs_result_80223AD4_150D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80223AD4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (r3 & 255);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_6 & -2);
    r3 = 0x805D0000u;
    r4 = (r3 + -4092);
    r3 = (r4 + r0);
    r17 = MemoryInline::FlatRead8((r3 + 1));
    r17 = (static_cast<int32_t>(static_cast<int8_t>(r17)));
    r4_addr_2 = (r4 + r0);
    r18 = MemoryInline::FlatRead8(r4_addr_2);
    r18 = (static_cast<int32_t>(static_cast<int8_t>(r18)));
    goto loc_802AC084;
}

loc_802AC020:
{
    r3 = 0x805D0000u;
    r19 = (r3 + -3808);
    r16 = (r31 + 2228);
    r3 = r16;
    r4 = 0;
    r5 = 576;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = r31;
    r4 = (r21 & 255);
    // inline leaf 0x8026956C (17 guest instruction(s))
}

loc_inl4_0x8026956C:
{
}

loc_inl4_0x80269570:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_inl4_0x8026957C;
    }
}

loc_inl4_0x80269574:
{
    r3 = -1;
    goto loc_inl4_cont_8026956C;
}

loc_inl4_0x8026957C:
{
    r5 = MemoryInline::FlatRead32((r13 + -17144));
}

loc_inl4_0x80269584:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_inl4_0x80269590;
    }
}

loc_inl4_0x80269588:
{
    r3 = -1;
    goto loc_inl4_cont_8026956C;
}

loc_inl4_0x80269590:
{
    r5 = MemoryInline::FlatRead32((r5 + 16));
    r0 = MemoryInline::FlatRead8((r3 + 8));
    r0 = (r0 * 332);
    r5 = (r5 + r0);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r5 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 156));
}

loc_inl4_cont_8026956C:
{
    // end of inlined leaf 0x8026956C
    r5 = r3;
    r3 = MemoryInline::FlatRead8((r31 + 20));
    r4 = (r21 & 255);
    ctx->lr = 0x802AC058u;
    if constexpr (KnownRegArgsCpuCall<0x80223AD4u>(&func_80223AD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80223AD4_1F02 = func_80223AD4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80223AD4_1F02);
        r4 = static_cast<uint32_t>(regargs_result_80223AD4_1F02 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80223AD4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (r3 & 255);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & -2);
    r3 = 0x805D0000u;
    r4 = (r3 + -4080);
    r3 = (r4 + r0);
    r17 = MemoryInline::FlatRead8((r3 + 1));
    r17 = (static_cast<int32_t>(static_cast<int8_t>(r17)));
    r4_addr_1 = (r4 + r0);
    r18 = MemoryInline::FlatRead8(r4_addr_1);
    r18 = (static_cast<int32_t>(static_cast<int8_t>(r18)));
}

loc_802AC084:
{
    r20 = 0;
    r0 = (r17 * 14);
    r27 = (r19 + r0);
    r3 = 0x805D0000u;
    r26 = (r3 + -4616);
    r0 = (r21 & 255);
    r25 = (r0 * 356);
    r29 = 0;
    r3 = 0x805D0000u;
    r30 = (r3 + -4600);
    r28 = 1;
    goto loc_802AC22C;
}

loc_802AC0B4:
{
    guest_range_2 = MemoryInline::ResolveRangeHost(r16, 0, 12u, false, true);
    MemoryInline::WriteResolved8(guest_range_2, 0u, r16, static_cast<uint8_t>(r28));
    MemoryInline::WriteResolved8(guest_range_2, 3u, (r16 + 3), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_2, 6u, (r16 + 6), static_cast<uint8_t>(r29));
    r0 = (r17 + r20);
    r0 = (r0 & 255);
    MemoryInline::WriteResolved8(guest_range_2, 5u, (r16 + 5), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8(r27);
    MemoryInline::WriteResolved8(guest_range_2, 1u, (r16 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r27 + 2));
    MemoryInline::WriteResolved32(guest_range_2, 8u, (r16 + 8), r0);
    r0 = MemoryInline::FlatRead16((r27 + 12));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 & 255);
    MemoryInline::WriteResolved8(guest_range_2, 4u, (r16 + 4), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r27 + 1));
    MemoryInline::WriteResolved8(guest_range_2, 2u, (r16 + 2), static_cast<uint8_t>(r0));
    r19 = 0;
    r24 = r16;
    r23 = r27;
    r22 = (r16 + 84);
    r21 = (r16 + 60);
    goto loc_802AC190;
}

loc_802AC108:
{
    r0 = MemoryInline::FlatRead32((r31 + 316));
    r3 = (r0 + r25);
    r3 = (r3 + 280);
    r4 = MemoryInline::FlatRead32(r26);
    ctx->lr = 0x802AC11Cu;
    if constexpr (KnownRegArgsCpuCall<0x80097E48u>(&func_80097E48)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80097E48_29DE = func_80097E48_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80097E48_29DE);
        r4 = static_cast<uint32_t>(regargs_result_80097E48_29DE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80097E48u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    r3 = (r1 + 20);
    r4 = (r1 + 12);
    ctx->lr = 0x802AC12Cu;
    if constexpr (KnownRegArgsCpuCall<0x8005D130u>(&func_8005D130)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8005D130_2D44 = func_8005D130_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8005D130_2D44);
        r4 = static_cast<uint32_t>(regargs_result_8005D130_2D44 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8005D130u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r3 = (r1 + 20);
    // inline leaf 0x8005AB50 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & 1);
    // end of inlined leaf 0x8005AB50
}

loc_802AC138:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802AC14C;
    }
}

loc_802AC13C:
{
    r3 = (r1 + 20);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8005D0B4u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWrite32((r24 + 16), r3);
    goto loc_802AC150;
}

loc_802AC14C:
{
    MemoryInline::FlatWrite32((r24 + 16), r29);
}

loc_802AC150:
{
    r3 = r22;
    r0 = MemoryInline::FlatRead16((r23 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 * 12);
    r4 = (r30 + r0);
    if constexpr (KnownRegArgsCpuCall<0x8005001Cu>(&func_8005001C)) {
        ctx->gpr[1] = r1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        const auto regargs_result_8005001C_3371 = func_8005001C_ra18_0_0_2(ctx, r3, r4);
        f1.d = regargs_result_8005001C_3371;
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x8005001Cu>(ctx);
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    r3 = r21;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -13968));
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r26 = (r26 + 4);
    r24 = (r24 + 4);
    r23 = (r23 + 2);
    r22 = (r22 + 12);
    r21 = (r21 + 12);
    r19 = (r19 + 1);
}

loc_802AC190:
{
    r0 = MemoryInline::FlatRead32((r16 + 8));
}

loc_802AC198:
{
    if ((static_cast<uint32_t>(r19) < static_cast<uint32_t>(r0))) {
        goto loc_802AC108;
    }
}

loc_802AC19C:
{
    r21 = 0;
    r19 = (r16 + 24);
    goto loc_802AC1C4;
}

loc_802AC1A8:
{
    r3 = r19;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -13968));
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r19 = (r19 + 12);
    r21 = (r21 + 1);
}

loc_802AC1C4:
{
    r3 = MemoryInline::FlatRead32((r16 + 8));
    r0 = (r3 + 1);
}

loc_802AC1D0:
{
    if ((static_cast<uint32_t>(r21) < static_cast<uint32_t>(r0))) {
        goto loc_802AC1A8;
    }
}

loc_802AC1D4:
{
    r5 = MemoryInline::FlatRead32((r16 + 16));
}

loc_802AC1DC:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_802AC21C;
    }
}

loc_802AC1E0:
{
    r0 = MemoryInline::FlatRead32((r31 + 316));
    r3 = (r0 + r25);
    r3 = (r3 + 4);
    r4 = (r1 + 20);
    ctx->lr = 0x802AC1F4u;
    if constexpr (KnownRegArgsCpuCall<0x800E0C00u>(&func_800E0C00)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800E0C00_3C66 = func_800E0C00_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800E0C00_3C66);
        r4 = static_cast<uint32_t>(regargs_result_800E0C00_3C66 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x800E0C00u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = (r1 + 20);
    ctx->lr = 0x802AC1FCu;
    if constexpr (KnownRegArgsCpuCall<0x8005D188u>(&func_8005D188)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8005D188_3F87 = func_8005D188_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8005D188_3F87);
        r4 = static_cast<uint32_t>(regargs_result_8005D188_3F87 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8005D188u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    r3 = (r1 + 16);
    r4 = (r1 + 8);
    ctx->lr = 0x802AC20Cu;
    if constexpr (KnownRegArgsCpuCall<0x8005D130u>(&func_8005D130)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8005D130_42EB = func_8005D130_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8005D130_42EB);
        r4 = static_cast<uint32_t>(regargs_result_8005D130_42EB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8005D130u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r3 = (r1 + 16);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8005D0B4u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWrite32((r16 + 12), r3);
    goto loc_802AC220;
}

loc_802AC21C:
{
    MemoryInline::FlatWrite32((r16 + 12), r29);
}

loc_802AC220:
{
    r27 = (r27 + 14);
    r20 = (r20 + 1);
    r16 = (r16 + 144);
}

loc_802AC22C:
{
}

loc_802AC230:
{
    if ((static_cast<int32_t>(r20) < static_cast<int32_t>(r18))) {
        goto loc_802AC0B4;
    }
}

loc_802AC234:
{
    r11 = (r1 + 160);
    // inline leaf 0x804574A8 (17 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -64), 0, 64u, true, false);
    // end of inlined leaf 0x804574A8
    r0 = MemoryInline::FlatRead32((r1 + 164));
    ctx->lr = r0;
    r1 = (r1 + 160);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802ABF64(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802ABF64_ra38_e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000021FF gpr_write=0x000009FB gpr_return=0x00000018 fpr_read=0x0000000E fpr_write=0x0000000E fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802ABF64 func_802ABF64 preserves=true fpr_mask=0x00000000
