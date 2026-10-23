#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804CBE80(CpuContext* ctx);
extern "C" uint64_t func_804CBE80_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804D5400(CpuContext* ctx);
extern "C" uint64_t func_804D5400_ra0_0_18_0(CpuContext*);
extern "C" void func_804DE0A0(CpuContext* ctx);
extern "C" uint64_t func_804DE0A0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804DE9C0(CpuContext* ctx);
extern "C" uint64_t func_804DE9C0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804DEF30(CpuContext* ctx);
extern "C" uint64_t func_804DEF30_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804E92D0(CpuContext* ctx);
extern "C" uint64_t func_804E92D0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_804DE3A0_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r10_rot_1 = 0;
    uint32_t r10_rot_2 = 0;
    uint32_t r10_rot_3 = 0;
    uint32_t r17_addr_0 = 0;
    uint32_t r17_addr_1 = 0;
    uint32_t r17_addr_2 = 0;
    uint32_t r17_addr_3 = 0;
    uint32_t r18_rot_0 = 0;
    uint32_t r18_rot_1 = 0;
    uint32_t r18_rot_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_subfc_sub_0 = 0;
    uint32_t r3_subfc_sub_1 = 0;
    uint32_t r3_subfc_sub_2 = 0;
    uint32_t r3_subfc_sub_3 = 0;
    uint32_t r3_subfc_sub_4 = 0;
    uint32_t r3_subfc_sub_5 = 0;
    uint32_t r5_ca_0 = 0;
    uint32_t r5_ca_1 = 0;
    uint32_t r5_ca_2 = 0;
    uint32_t r5_ca_3 = 0;
    uint32_t r5_ca_4 = 0;
    uint32_t r5_ca_5 = 0;
    uint32_t r5_ca_6 = 0;
    uint32_t r5_not_0 = 0;
    uint32_t r5_not_1 = 0;
    uint32_t r5_not_2 = 0;
    uint32_t r5_not_3 = 0;
    uint32_t r5_not_4 = 0;
    uint32_t r5_not_5 = 0;
    uint32_t r5_not_6 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
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
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
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
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_804DE3A0;

loc_804DE3A0:
{
    MemoryHw::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryHw::FlatWriteRam32((r1 + 84), r0);
    r11 = (r1 + 80);
    // inline leaf 0x80457460 (16 guest instruction(s))
    guest_range_0 = MemoryHw::ResolveRangeHost((r11 + -60), 0, 60u, false, true);
    // end of inlined leaf 0x80457460
    r5 = -855638016;
    r27 = 0x80760000u;
    r21 = MemoryHw::FlatRead32((r5 + 25652));
    r30 = r3;
    r31 = r4;
    r27 = (r27 + -25912);
    r3 = (r21 & -1073741824);
    r0 = (r3 + 1073741824);
}

loc_804DE3D8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(0))) {
        goto loc_804DE57C;
    }
}

loc_804DE3DC:
{
    r17 = 0x80630000u;
    r22 = MemoryHw::FlatRead32((r17 + -22368));
    ctx->lr = 0x804DE3E8u;
    if constexpr (KnownRegArgsCpuCall<0x804DE0A0u>(&func_804DE0A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_804DE0A0_1506 = func_804DE0A0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804DE0A0_1506);
        r4 = static_cast<uint32_t>(regargs_result_804DE0A0_1506 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x804DE0A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r4 = (r17 + -22368);
    r0 = 0;
    r24 = MemoryHw::FlatRead32((r4 + 16));
    r23 = r3;
    r28 = r22;
    r17 = (r27 + 0);
    MemoryHw::FlatWriteRam32((r4 + 16), r0);
    r26 = 0;
}

loc_804DE408:
{
    r28 = (r28 + 1);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(30));
    r0 = (r0_rot_2 & -1073741824);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    r0 = (r0 - r3);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -1);
    r28 = (r0 + r3);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(5));
    r0 = (r0_rot_4 & -32);
    r29 = (r17 + r0);
    r17_addr_2 = (r17 + r0);
    r0 = MemoryHw::FlatRead32(r17_addr_2);
}

loc_804DE430:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-1))) {
        goto loc_804DE49C;
    }
}

loc_804DE434:
{
    ctx->lr = 0x804DE438u;
    if constexpr (KnownRegArgsCpuCall<0x804D5400u>(&func_804D5400)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_804D5400_1E41 = func_804D5400_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_804D5400_1E41);
        r4 = static_cast<uint32_t>(regargs_result_804D5400_1E41 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x804D5400u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r5 = MemoryHw::FlatRead32((r29 + 24));
    r0 = (r3 ^ -2147483648);
    r3 = MemoryHw::FlatRead32((r29 + 28));
    r5 = (r5 ^ -2147483648);
    r3_subfc_sub_2 = r3;
    r3 = (r4 - r3_subfc_sub_2);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r3_subfc_sub_2) ? 1u : 0u) << 29);
    r5_not_2 = ~(r5);
    r5_ca_2 = (xer >> 29) & 1u;
    r5 = (r5_not_2 + r0);
    r5 = (r5 + r5_ca_2);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5_not_2)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r5_ca_2)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r5_not_3 = ~(r0);
    r5_ca_3 = (xer >> 29) & 1u;
    r5 = (r5_not_3 + r0);
    r5 = (r5 + r5_ca_3);
    r5 = (0 - r5);
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_804DE49C;
    }
}

loc_804DE45C:
{
    r3 = MemoryHw::FlatRead32(r29);
    r4 = MemoryHw::FlatRead32((r29 + 4));
    r5 = MemoryHw::FlatRead32((r29 + 8));
    r6 = MemoryHw::FlatRead32((r29 + 12));
    r7 = MemoryHw::FlatRead32((r29 + 16));
    r8 = MemoryHw::FlatRead32((r29 + 20));
    ctx->lr = 0x804DE478u;
    if constexpr (KnownRegArgsCpuCall<0x804DE9C0u>(&func_804DE9C0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_804DE9C0_27BE = func_804DE9C0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804DE9C0_27BE);
        r4 = static_cast<uint32_t>(regargs_result_804DE9C0_27BE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x804DE9C0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_804DE47C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804DE4A8;
    }
}

loc_804DE480:
{
    r3 = (r28 * 48);
    r0 = (r27 + 192);
    r3 = (r0 + r3);
    ctx->lr = 0x804DE490u;
    if constexpr (KnownRegArgsCpuCall<0x804CBE80u>(&func_804CBE80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->xer = xer;
        const auto regargs_result_804CBE80_2E52 = func_804CBE80_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804CBE80_2E52);
        r4 = static_cast<uint32_t>(regargs_result_804CBE80_2E52 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->xer = xer;
        InvokeDirectCpu<0x804CBE80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        xer = ctx->xer;
    }
    r0 = -1;
    MemoryHw::FlatWrite32(r29, r0);
    goto loc_804DE4A8;
}

loc_804DE49C:
{
    r26 = (r26 + 1);
}

loc_804DE4A4:
{
    if ((static_cast<int32_t>(r26) < static_cast<int32_t>(4))) {
        goto loc_804DE408;
    }
}

loc_804DE4A8:
{
}

loc_804DE4AC:
{
    if ((static_cast<int32_t>(r24) == static_cast<int32_t>(0))) {
        goto loc_804DE4C8;
    }
}

loc_804DE4B0:
{
    r12 = r24;
    r3 = r22;
    r4 = r23;
    r5 = r31;
    ctr = r12;
    ctx->lr = 0x804DE4C8u;
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
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_804DE4C8:
{
    r5 = -855638016;
    r3 = 0x80630000u;
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r22), static_cast<uint32_t>(3));
    r0 = (r0_rot_5 & -8);
    r4 = 251658240;
    r4 = PPC_Sraw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
    r6 = MemoryHw::FlatRead32((r5 + 25656));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r22), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r3 = (r3 + -22344);
    r6 = (r6 & r4);
    MemoryHw::FlatWrite32((r5 + 25656), r6);
    r6 = (r3 + r0);
    r3_addr_1 = (r3 + r0);
    r0 = MemoryHw::FlatRead32(r3_addr_1);
}

loc_804DE4FC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(128))) {
        goto loc_804DE57C;
    }
}

loc_804DE500:
{
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r22), static_cast<uint32_t>(5));
    r0 = (r0_rot_7 & -32);
    r3 = (r27 + 0);
    r3_addr_2 = (r3 + r0);
    r0 = MemoryHw::FlatRead32(r3_addr_2);
    r4 = 0;
}

loc_804DE514:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-1))) {
        goto loc_804DE528;
    }
}

loc_804DE518:
{
    r3 = 0x80630000u;
    r0 = MemoryHw::FlatRead32((r3 + -22368));
}

loc_804DE524:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(r22))) {
        goto loc_804DE52C;
    }
}

loc_804DE528:
{
    r4 = 1;
}

loc_804DE52C:
{
}

loc_804DE530:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_804DE57C;
    }
}

loc_804DE534:
{
    r4 = 0x80000000u;
    r8 = 0x804E0000u;
    r0 = MemoryHw::FlatRead32((r4 + 248));
    r3 = 1125908480;
    r4 = (r3 + -8573);
    r8 = (r8 + -3936);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r0 = (r0_rot_8 & 1073741823);
    r3 = r22;
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r4) * static_cast<uint64_t>(r0)) >> 32));
    r4 = (r13 + -14768);
    r5 = 1;
    r7 = 3;
    r9 = 0;
    r10_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r10 = (r10_rot_1 & 131071);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(23));
    r0 = (r0_rot_9 & 8388544);
    r0 = (r0 + r10);
    r10_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r10 = (r10_rot_2 & 536870911);
    ctx->lr = 0x804DE57Cu;
    if constexpr (KnownRegArgsCpuCall<0x804DEF30u>(&func_804DEF30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_804DEF30_4197 = func_804DEF30_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804DEF30_4197);
        r4 = static_cast<uint32_t>(regargs_result_804DEF30_4197 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x804DEF30u>(ctx);
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
        r11 = ctx->gpr[11];
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_804DE57C:
{
    r3 = (r21 & 402653184);
    r0 = (r3 + -402653184);
}

loc_804DE588:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(0))) {
        goto loc_804DE774;
    }
}

loc_804DE58C:
{
    ctx->lr = 0x804DE590u;
    if constexpr (KnownRegArgsCpuCall<0x804E92D0u>(&func_804E92D0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->xer = xer;
        const auto regargs_result_804E92D0_4893 = func_804E92D0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804E92D0_4893);
        r4 = static_cast<uint32_t>(regargs_result_804E92D0_4893 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->xer = xer;
        InvokeDirectCpu<0x804E92D0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
    r4 = 0x80630000u;
    r25 = 0x80630000u;
    r4 = (r4 + -22368);
    r28 = -855638016;
    r0 = MemoryHw::FlatRead32((r4 + 4));
    r19 = (r3 + 1);
    r25 = (r25 + -22344);
    r24 = (r28 + 25600);
    r18_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r18 = (r18_rot_1 & 1023);
    r23 = (r27 + 384);
    r22 = (r27 + 416);
    r21 = (r27 + 432);
    r20 = 0;
    r29 = 8;
    r17 = 1;
}

loc_804DE5CC:
{
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_5 & 1);
    // end of inlined leaf 0x804D12F0
    r0 = (3 - r20);
    r26 = MemoryHw::FlatRead32((r28 + 25656));
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_12 & -8);
    r26 = PPC_Srw(static_cast<uint32_t>(r26), static_cast<uint32_t>(r0));
    r0 = (r26 & 8);
}

loc_804DE5E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804DE5F8;
    }
}

loc_804DE5E8:
{
    r0 = MemoryHw::FlatRead32(r25);
    r0 = (r0 & 128);
}

loc_804DE5F0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804DE5F8;
    }
}

loc_804DE5F4:
{
    MemoryHw::FlatWrite32(r25, r29);
}

loc_804DE5F8:
{
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl2_0x804D1330:
{
}

loc_inl2_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl2_0x804D1344;
    }
}

loc_inl2_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl2_0x804D1348;
}

loc_inl2_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl2_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_6 & 1);
}

loc_inl2_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
    r0 = (r26 & 32);
}

loc_804DE600:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804DE620;
    }
}

loc_804DE604:
{
    r0 = MemoryHw::FlatRead32((r24 + 4));
    r3 = 1;
    MemoryHw::FlatWrite32(r23, r0);
    r0 = MemoryHw::FlatRead32((r24 + 8));
    MemoryHw::FlatWrite32((r23 + 4), r0);
    MemoryHw::FlatWrite32(r22, r17);
    goto loc_804DE624;
}

loc_804DE620:
{
    r3 = 0;
}

loc_804DE624:
{
}

loc_804DE628:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804DE630;
    }
}

loc_804DE62C:
{
    MemoryHw::FlatWrite32(r21, r19);
}

loc_804DE630:
{
    r20 = (r20 + 1);
    r24 = (r24 + 12);
}

loc_804DE63C:
{
    r23 = (r23 + 8);
    r22 = (r22 + 4);
    r21 = (r21 + 4);
    r25 = (r25 + 4);
    if ((static_cast<int32_t>(r20) < static_cast<int32_t>(4))) {
        goto loc_804DE5CC;
    }
}

loc_804DE650:
{
    r4 = 0x80630000u;
    r3 = 0x80000000u;
    r4 = (r4 + -22368);
    r0 = 24;
    r5 = MemoryHw::FlatRead32((r4 + 4));
    r0 = PPC_Srw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r4 = (r27 + 432);
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r18), static_cast<uint32_t>(31));
    r6 = (r6_rot_1 & 2147483647);
    r0 = (r5 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804DE698;
    }
}

loc_804DE678:
{
    r0 = MemoryHw::FlatRead32(r4);
}

loc_804DE680:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804DE774;
    }
}

loc_804DE684:
{
    r0 = MemoryHw::FlatRead32(r4);
    r0 = (r6 + r0);
}

loc_804DE690:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r19))) {
        goto loc_804DE698;
    }
}

loc_804DE694:
{
    goto loc_804DE774;
}

loc_804DE698:
{
    r0 = 25;
    r0 = PPC_Srw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804DE6C8;
    }
}

loc_804DE6A8:
{
    r0 = MemoryHw::FlatRead32((r4 + 4));
}

loc_804DE6B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804DE774;
    }
}

loc_804DE6B4:
{
    r0 = MemoryHw::FlatRead32((r4 + 4));
    r0 = (r6 + r0);
}

loc_804DE6C0:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r19))) {
        goto loc_804DE6C8;
    }
}

loc_804DE6C4:
{
    goto loc_804DE774;
}

loc_804DE6C8:
{
    r0 = 26;
    r0 = PPC_Srw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804DE6F8;
    }
}

loc_804DE6D8:
{
    r0 = MemoryHw::FlatRead32((r4 + 8));
}

loc_804DE6E0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804DE774;
    }
}

loc_804DE6E4:
{
    r0 = MemoryHw::FlatRead32((r4 + 8));
    r0 = (r6 + r0);
}

loc_804DE6F0:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r19))) {
        goto loc_804DE6F8;
    }
}

loc_804DE6F4:
{
    goto loc_804DE774;
}

loc_804DE6F8:
{
    r0 = 27;
    r0 = PPC_Srw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804DE728;
    }
}

loc_804DE708:
{
    r0 = MemoryHw::FlatRead32((r4 + 12));
}

loc_804DE710:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804DE774;
    }
}

loc_804DE714:
{
    r0 = MemoryHw::FlatRead32((r4 + 12));
    r0 = (r6 + r0);
}

loc_804DE720:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r19))) {
        goto loc_804DE728;
    }
}

loc_804DE724:
{
    goto loc_804DE774;
}

loc_804DE728:
{
    r3 = (r27 + 432);
    r0 = 0;
    MemoryHw::FlatWriteRam32(r3, r0);
    r17 = (r27 + 448);
    r18 = 0;
    MemoryHw::FlatWriteRam32((r3 + 4), r0);
    MemoryHw::FlatWriteRam32((r3 + 8), r0);
    MemoryHw::FlatWriteRam32((r3 + 12), r0);
}

loc_804DE748:
{
    r12 = MemoryHw::FlatRead32(r17);
}

loc_804DE750:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_804DE764;
    }
}

loc_804DE754:
{
    r3 = r30;
    r4 = r31;
    ctr = r12;
    ctx->lr = 0x804DE764u;
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
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_804DE764:
{
    r18 = (r18 + 1);
    r17 = (r17 + 4);
}

loc_804DE770:
{
    if ((static_cast<int32_t>(r18) < static_cast<int32_t>(4))) {
        goto loc_804DE748;
    }
}

loc_804DE774:
{
    r11 = (r1 + 80);
    // inline leaf 0x804574AC (16 guest instruction(s))
    guest_range_1 = MemoryHw::ResolveRangeHost((r11 + -60), 0, 60u, true, false);
    // end of inlined leaf 0x804574AC
    r0 = MemoryHw::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804DE3A0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804DE3A0_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804DE3A0 func_804DE3A0 preserves=true fpr_mask=0x00000000
