#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8055FD64(CpuContext* ctx);
extern "C" uint64_t func_8055FD64_ra58_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8053F144_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
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
    uint32_t r21_addr_0 = 0;
    uint32_t r21_addr_1 = 0;
    uint32_t r21_addr_2 = 0;
    uint32_t r21_addr_3 = 0;
    uint32_t r21_addr_4 = 0;
    uint32_t r21_addr_5 = 0;
    uint32_t r21_addr_6 = 0;
    uint32_t r22_addr_0 = 0;
    uint32_t r22_addr_1 = 0;
    uint32_t r22_addr_2 = 0;
    uint32_t r22_addr_3 = 0;
    uint32_t r22_addr_4 = 0;
    uint32_t r22_addr_5 = 0;
    uint32_t r22_addr_6 = 0;
    uint32_t r22_addr_7 = 0;
    uint32_t r23_addr_0 = 0;
    uint32_t r23_addr_1 = 0;
    uint32_t r23_addr_2 = 0;
    uint32_t r23_addr_3 = 0;
    uint32_t r23_addr_4 = 0;
    uint32_t r23_addr_5 = 0;
    uint32_t r28_addr_0 = 0;
    uint32_t r28_addr_1 = 0;
    uint32_t r28_addr_2 = 0;
    uint32_t r28_addr_3 = 0;
    uint32_t r28_addr_4 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
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
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
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
    const uint32_t r20_entry = r20;
    const uint32_t r21_entry = r21;
    const uint32_t r22_entry = r22;
    const uint32_t r23_entry = r23;
    const uint32_t r24_entry = r24;
    const uint32_t r25_entry = r25;
    const uint32_t r26_entry = r26;
    const uint32_t r27_entry = r27;
    const uint32_t r28_entry = r28;
    const uint32_t r29_entry = r29;
    const uint32_t r30_entry = r30;
    const uint32_t r31_entry = r31;
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x8053F144u);
    goto loc_8053F144;

loc_8053F144:
{
    MemoryInline::FlatWriteRam32((r1 + -128), r1);
    r1 = (r1 + -128);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 132), r0);
    r11 = (r1 + 128);
    // inline leaf 0x8045746C (13 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -48), 0, 48u, false, true);
    // end of inlined leaf 0x8045746C
    r0 = MemoryInline::FlatRead8((r3 + 28));
    r29 = 0x80580000u;
    r24 = r3;
    r25 = r4;
}

loc_8053F16C:
{
    r29 = (r29 + -19616);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8053F934;
    }
}

loc_8053F174:
{
}

loc_8053F178:
{
    r27 = MemoryInline::FlatRead32(r5);
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(4))) {
        goto loc_8053F818;
    }
}

loc_8053F180:
{
    r28 = MemoryInline::FlatRead8((r5 + 4));
    r22 = (r29 + 0);
    r23 = 0;
}

loc_8053F18C:
{
    r0 = (r23 & 65535);
    r4 = r27;
    r21 = (r0 * 24);
    r3 = (r22 + r21);
    ctx->lr = 0x8053F1A0u;
    if constexpr (KnownRegArgsCpuCall<0x8055FD64u>(&func_8055FD64)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_8055FD64_12C1 = func_8055FD64_ra58_0_18_0(ctx, r3, r4, r6);
        r3 = static_cast<uint32_t>(regargs_result_8055FD64_12C1);
        r4 = static_cast<uint32_t>(regargs_result_8055FD64_12C1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x8055FD64u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_8053F1A4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8053F1B4;
    }
}

loc_8053F1A8:
{
    r3 = (r22 + r21);
    r0 = MemoryInline::FlatRead32((r3 + 20));
    goto loc_8053F1C4;
}

loc_8053F1B4:
{
    r23 = (r23 + 1);
}

loc_8053F1BC:
{
    if ((static_cast<uint32_t>(r23) < static_cast<uint32_t>(12))) {
        goto loc_8053F18C;
    }
}

loc_8053F1C0:
{
    r0 = 33;
}

loc_8053F1C4:
{
}

loc_8053F1C8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(33))) {
        goto loc_8053F2F0;
    }
}

loc_8053F1CC:
{
}

loc_8053F1D0:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(23))) {
        goto loc_8053F818;
    }
}

loc_8053F1D4:
{
    r3 = 0x80650000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r3 + 1912);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x8053F1ECu:
        goto loc_8053F1EC;
        break;
    case 0x8053F20Cu:
        goto loc_8053F20C;
        break;
    case 0x8053F818u:
        goto loc_8053F818;
        break;
    case 0x8053F29Cu:
        goto loc_8053F29C;
        break;
    case 0x8053F2B4u:
        goto loc_8053F2B4;
        break;
    case 0x8053F264u:
        goto loc_8053F264;
        break;
    case 0x8053F280u:
        goto loc_8053F280;
        break;
    case 0x8053F22Cu:
        goto loc_8053F22C;
        break;
    case 0x8053F248u:
        goto loc_8053F248;
        break;
    case 0x8053F2CCu:
        goto loc_8053F2CC;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[20] = r20;
        ctx->gpr[21] = r21;
        ctx->gpr[22] = r22;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_8053F1EC:
{
    r12 = MemoryInline::FlatRead32(r24);
    r3 = r24;
    r4 = 7;
    r5 = 0;
    r12 = MemoryInline::FlatRead32((r12 + 24));
    ctr = r12;
    ctx->lr = 0x8053F208u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8053F818;
}

loc_8053F20C:
{
    r12 = MemoryInline::FlatRead32(r24);
    r3 = r24;
    r4 = 1;
    r5 = 0;
    r12 = MemoryInline::FlatRead32((r12 + 24));
    ctr = r12;
    ctx->lr = 0x8053F228u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8053F818;
}

loc_8053F22C:
{
    r12 = MemoryInline::FlatRead32(r24);
    r3 = r24;
    r4 = 0;
    r12 = MemoryInline::FlatRead32((r12 + 88));
    ctr = r12;
    ctx->lr = 0x8053F244u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8053F818;
}

loc_8053F248:
{
    r12 = MemoryInline::FlatRead32(r24);
    r3 = r24;
    r4 = 1;
    r12 = MemoryInline::FlatRead32((r12 + 88));
    ctr = r12;
    ctx->lr = 0x8053F260u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8053F818;
}

loc_8053F264:
{
    r12 = MemoryInline::FlatRead32(r24);
    r3 = r24;
    r4 = 2;
    r12 = MemoryInline::FlatRead32((r12 + 88));
    ctr = r12;
    ctx->lr = 0x8053F27Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8053F818;
}

loc_8053F280:
{
    r12 = MemoryInline::FlatRead32(r24);
    r3 = r24;
    r4 = 3;
    r12 = MemoryInline::FlatRead32((r12 + 88));
    ctr = r12;
    ctx->lr = 0x8053F298u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8053F818;
}

loc_8053F29C:
{
    r12 = MemoryInline::FlatRead32(r24);
    r3 = r24;
    r12 = MemoryInline::FlatRead32((r12 + 108));
    ctr = r12;
    ctx->lr = 0x8053F2B0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8053F818;
}

loc_8053F2B4:
{
    r12 = MemoryInline::FlatRead32(r24);
    r3 = r24;
    r12 = MemoryInline::FlatRead32((r12 + 112));
    ctr = r12;
    ctx->lr = 0x8053F2C8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8053F818;
}

loc_8053F2CC:
{
    r12 = MemoryInline::FlatRead32(r24);
    r3 = r24;
    r0 = MemoryInline::FlatRead8((r24 + 31));
    r12 = MemoryInline::FlatRead32((r12 + 116));
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r4 = (r4_rot_1 & 134217727);
    ctr = r12;
    ctx->lr = 0x8053F2ECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8053F818;
}

loc_8053F2F0:
{
    r12 = MemoryInline::FlatRead32(r24);
    r3 = r24;
    r12 = MemoryInline::FlatRead32((r12 + 120));
    ctr = r12;
    ctx->lr = 0x8053F304u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8053F308:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8053F31C;
    }
}

loc_8053F30C:
{
    r0 = MemoryInline::FlatRead32((r24 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_8053F314:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8053F31C;
    }
}

loc_8053F318:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8053F620;
    }
}

loc_8053F31C:
{
    r0 = MemoryInline::FlatRead32((r24 + 36));
}

loc_8053F324:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8053F42C;
    }
}

loc_8053F328:
{
    r12 = MemoryInline::FlatRead32(r24);
    r3 = r24;
    r20 = MemoryInline::FlatRead32((r24 + 24));
    r12 = MemoryInline::FlatRead32((r12 + 44));
    ctr = r12;
    ctx->lr = 0x8053F340u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8053F344:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8053F364;
    }
}

loc_8053F348:
{
}

loc_8053F34C:
{
    if ((static_cast<int32_t>(r20) != static_cast<int32_t>(2))) {
        goto loc_8053F364;
    }
}

loc_8053F350:
{
    r0 = MemoryInline::FlatRead8((r24 + 31));
}

loc_8053F358:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8053F390;
    }
}

loc_8053F35C:
{
    r20 = 4;
    goto loc_8053F390;
}

loc_8053F364:
{
    r3 = MemoryInline::FlatRead32((r24 + 40));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r20), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead16((r3 + 40));
}

loc_8053F37C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8053F390;
    }
}

loc_8053F380:
{
    r0 = MemoryInline::FlatRead8((r24 + 31));
}

loc_8053F388:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8053F390;
    }
}

loc_8053F38C:
{
    r20 = 1;
}

loc_8053F390:
{
    r3 = MemoryInline::FlatRead32((r24 + 40));
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r20), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & -4);
    r22 = 0;
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r23 = MemoryInline::FlatRead32(r3);
}

loc_8053F3A8:
{
    r0 = (r22 & 65535);
    r4 = r27;
    r21 = (r0 * 52);
    r23_addr_2 = (r23 + r21);
    r3 = MemoryInline::FlatRead32(r23_addr_2);
    ctx->lr = 0x8053F3BCu;
    if constexpr (KnownRegArgsCpuCall<0x8055FD64u>(&func_8055FD64)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_8055FD64_49DC = func_8055FD64_ra58_0_18_0(ctx, r3, r4, r6);
        r3 = static_cast<uint32_t>(regargs_result_8055FD64_49DC);
        r4 = static_cast<uint32_t>(regargs_result_8055FD64_49DC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x8055FD64u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_8053F3C0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8053F3CC;
    }
}

loc_8053F3C4:
{
    r0 = (r23 + r21);
    goto loc_8053F3DC;
}

loc_8053F3CC:
{
    r22 = (r22 + 1);
}

loc_8053F3D4:
{
    if ((static_cast<uint32_t>(r22) < static_cast<uint32_t>(12))) {
        goto loc_8053F3A8;
    }
}

loc_8053F3D8:
{
    r0 = 0;
}

loc_8053F3DC:
{
}

loc_8053F3E0:
{
    MemoryInline::FlatWrite32((r24 + 36), r0);
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_8053F420;
    }
}

loc_8053F3E8:
{
    r0 = 15;
    MemoryInline::FlatWrite32((r24 + 20), r0);
    goto loc_8053F400;
}

loc_8053F3F4:
{
    r3 = MemoryInline::FlatRead32((r24 + 20));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r24 + 20), r0);
}

loc_8053F400:
{
    r0 = MemoryInline::FlatRead32((r24 + 20));
    r3 = MemoryInline::FlatRead32((r24 + 36));
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_10 & -2);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead16((r3 + 20));
}

loc_8053F418:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8053F3F4;
    }
}

loc_8053F41C:
{
    goto loc_8053F4C8;
}

loc_8053F420:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r24 + 20), r0);
    goto loc_8053F4C8;
}

loc_8053F42C:
{
}

loc_8053F430:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_8053F444;
    }
}

loc_8053F434:
{
    r3 = MemoryInline::FlatRead32((r24 + 20));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r24 + 20), r0);
    goto loc_8053F450;
}

loc_8053F444:
{
    r3 = MemoryInline::FlatRead32((r24 + 20));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r24 + 20), r0);
}

loc_8053F450:
{
    r0 = MemoryInline::FlatRead32((r24 + 20));
}

loc_8053F458:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(16))) {
        goto loc_8053F468;
    }
}

loc_8053F45C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r24 + 20), r0);
    goto loc_8053F4A4;
}

loc_8053F468:
{
}

loc_8053F46C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_8053F4A4;
    }
}

loc_8053F470:
{
    r0 = 15;
    MemoryInline::FlatWrite32((r24 + 20), r0);
    goto loc_8053F488;
}

loc_8053F47C:
{
    r3 = MemoryInline::FlatRead32((r24 + 20));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r24 + 20), r0);
}

loc_8053F488:
{
    r0 = MemoryInline::FlatRead32((r24 + 20));
    r3 = MemoryInline::FlatRead32((r24 + 36));
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_12 & -2);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead16((r3 + 20));
}

loc_8053F4A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8053F47C;
    }
}

loc_8053F4A4:
{
    r0 = MemoryInline::FlatRead32((r24 + 20));
    r3 = MemoryInline::FlatRead32((r24 + 36));
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_14 & -2);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead16((r3 + 20));
}

loc_8053F4BC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8053F4C8;
    }
}

loc_8053F4C0:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r24 + 20), r0);
}

loc_8053F4C8:
{
    r0 = MemoryInline::FlatRead32((r24 + 36));
}

loc_8053F4D0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8053F818;
    }
}

loc_8053F4D4:
{
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 64), r0);
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    MemoryInline::FlatWriteRam32((r1 + 72), r0);
    MemoryInline::FlatWriteRam32((r1 + 76), r0);
    r0 = MemoryInline::FlatRead32((r24 + 20));
    r3 = MemoryInline::FlatRead32((r24 + 36));
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_16 & -2);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead16((r3 + 20));
    MemoryInline::FlatWriteRam16((r1 + 64), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r24 + 36));
    MemoryInline::FlatWriteRam32((r1 + 72), r0);
    r0 = MemoryInline::FlatRead32((r24 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_8053F510:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8053F518;
    }
}

loc_8053F514:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8053F53C;
    }
}

loc_8053F518:
{
    r3 = MemoryInline::FlatRead32((r24 + 36));
    r0 = MemoryInline::FlatRead16((r3 + 22));
}

loc_8053F524:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(48))) {
        goto loc_8053F53C;
    }
}

loc_8053F528:
{
    r0 = MemoryInline::FlatRead16((r3 + 20));
}

loc_8053F530:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(32))) {
        goto loc_8053F53C;
    }
}

loc_8053F534:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r1 + 68), static_cast<uint8_t>(r0));
}

loc_8053F53C:
{
    r3 = MemoryInline::FlatRead32((r24 + 36));
    r0 = MemoryInline::FlatRead16((r3 + 22));
}

loc_8053F548:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8053F598;
    }
}

loc_8053F54C:
{
    r0 = MemoryInline::FlatRead8((r24 + 30));
}

loc_8053F554:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8053F56C;
    }
}

loc_8053F558:
{
    r0 = MemoryInline::FlatRead16((r1 + 64));
}

loc_8053F560:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(42))) {
        goto loc_8053F56C;
    }
}

loc_8053F564:
{
    r0 = 46;
    MemoryInline::FlatWriteRam16((r1 + 64), static_cast<uint16_t>(r0));
}

loc_8053F56C:
{
    r12 = MemoryInline::FlatRead32(r24);
    r3 = r24;
    r5 = (r1 + 64);
    r4 = 5;
    r12 = MemoryInline::FlatRead32((r12 + 24));
    ctr = r12;
    ctx->lr = 0x8053F588u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 0;
    MemoryInline::FlatWrite32((r24 + 20), r0);
    MemoryInline::FlatWrite32((r24 + 36), r0);
    goto loc_8053F818;
}

loc_8053F598:
{
    r12 = MemoryInline::FlatRead32(r24);
    r3 = r24;
    r12 = MemoryInline::FlatRead32((r12 + 44));
    ctr = r12;
    ctx->lr = 0x8053F5ACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8053F5B0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8053F600;
    }
}

loc_8053F5B4:
{
    r0 = MemoryInline::FlatRead16((r1 + 64));
}

loc_8053F5BC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(32))) {
        goto loc_8053F600;
    }
}

loc_8053F5C0:
{
    r12 = MemoryInline::FlatRead32(r24);
    r3 = r24;
    r12 = MemoryInline::FlatRead32((r12 + 64));
    ctr = r12;
    ctx->lr = 0x8053F5D4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8053F5D8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(4))) {
        goto loc_8053F600;
    }
}

loc_8053F5DC:
{
    r12 = MemoryInline::FlatRead32(r24);
    r3 = r24;
    r12 = MemoryInline::FlatRead32((r12 + 64));
    ctr = r12;
    ctx->lr = 0x8053F5F0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8053F5F4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(2))) {
        goto loc_8053F600;
    }
}

loc_8053F5F8:
{
    r0 = 12288;
    MemoryInline::FlatWriteRam16((r1 + 64), static_cast<uint16_t>(r0));
}

loc_8053F600:
{
    r12 = MemoryInline::FlatRead32(r24);
    r3 = r24;
    r5 = (r1 + 64);
    r4 = 3;
    r12 = MemoryInline::FlatRead32((r12 + 24));
    ctr = r12;
    ctx->lr = 0x8053F61Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8053F818;
}

loc_8053F620:
{
    r3 = 0x80580000u;
    r31 = (r29 + 1232);
    r28 = MemoryInline::FlatRead32((r3 + -13884));
    r26 = 0;
    r30 = 0;
    r23 = 1;
}

loc_8053F638:
{
    r0 = (r26 & 65535);
    r4 = r27;
    r0 = (r0 * 52);
    r28_addr_2 = (r28 + r0);
    r3 = MemoryInline::FlatRead32(r28_addr_2);
    r21 = (r28 + r0);
    ctx->lr = 0x8053F650u;
    if constexpr (KnownRegArgsCpuCall<0x8055FD64u>(&func_8055FD64)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_8055FD64_76C9 = func_8055FD64_ra58_0_18_0(ctx, r3, r4, r6);
        r3 = static_cast<uint32_t>(regargs_result_8055FD64_76C9);
        r4 = static_cast<uint32_t>(regargs_result_8055FD64_76C9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x8055FD64u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_8053F654:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8053F80C;
    }
}

loc_8053F658:
{
    r22 = MemoryInline::FlatRead16((r21 + 20));
    r3 = r24;
    r5 = (r1 + 8);
    r4 = 32;
    MemoryInline::FlatWriteRam32((r1 + 48), r30);
    MemoryInline::FlatWriteRam32((r1 + 52), r30);
    MemoryInline::FlatWriteRam32((r1 + 56), r30);
    MemoryInline::FlatWriteRam32((r1 + 60), r30);
    MemoryInline::FlatWriteRam16((r1 + 48), static_cast<uint16_t>(r22));
    r0 = MemoryInline::FlatRead32((r24 + 24));
    MemoryInline::FlatWriteRam16((r1 + 50), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r24 + 36));
    MemoryInline::FlatWriteRam32((r1 + 56), r0);
    r12 = MemoryInline::FlatRead32(r24);
    r12 = MemoryInline::FlatRead32((r12 + 24));
    ctr = r12;
    ctx->lr = 0x8053F69Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8053F6A0:
{
    if ((static_cast<uint32_t>(r22) != static_cast<uint32_t>(48))) {
        goto loc_8053F724;
    }
}

loc_8053F6A4:
{
    r0 = MemoryInline::FlatRead8((r1 + 8));
}

loc_8053F6AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8053F6CC;
    }
}

loc_8053F6B0:
{
    r12 = MemoryInline::FlatRead32(r24);
    r3 = r24;
    r4 = 6;
    r5 = 0;
    r12 = MemoryInline::FlatRead32((r12 + 24));
    ctr = r12;
    ctx->lr = 0x8053F6CCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8053F6CC:
{
    r8 = MemoryInline::FlatRead32((r29 + 1232));
    r3 = r24;
    r7 = MemoryInline::FlatRead32((r31 + 4));
    r5 = (r1 + 32);
    r6 = MemoryInline::FlatRead32((r31 + 8));
    r4 = 5;
    r0 = MemoryInline::FlatRead32((r31 + 12));
    MemoryInline::FlatWriteRam32((r1 + 32), r8);
    MemoryInline::FlatWriteRam32((r1 + 36), r7);
    MemoryInline::FlatWriteRam32((r1 + 40), r6);
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    r0 = MemoryInline::FlatRead32((r24 + 24));
    MemoryInline::FlatWriteRam16((r1 + 34), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r24 + 36));
    MemoryInline::FlatWriteRam32((r1 + 40), r0);
    r12 = MemoryInline::FlatRead32(r24);
    r12 = MemoryInline::FlatRead32((r12 + 24));
    ctr = r12;
    ctx->lr = 0x8053F718u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    MemoryInline::FlatWrite32((r24 + 20), r30);
    MemoryInline::FlatWrite32((r24 + 36), r30);
    goto loc_8053F80C;
}

loc_8053F724:
{
    r0 = MemoryInline::FlatRead32((r24 + 24));
    r22 = 0;
    r3 = MemoryInline::FlatRead32((r24 + 40));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r21 = MemoryInline::FlatRead32(r3);
}

loc_8053F740:
{
    r0 = (r22 & 65535);
    r4 = r27;
    r20 = (r0 * 52);
    r21_addr_3 = (r21 + r20);
    r3 = MemoryInline::FlatRead32(r21_addr_3);
    ctx->lr = 0x8053F754u;
    if constexpr (KnownRegArgsCpuCall<0x8055FD64u>(&func_8055FD64)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_8055FD64_8C04 = func_8055FD64_ra58_0_18_0(ctx, r3, r4, r6);
        r3 = static_cast<uint32_t>(regargs_result_8055FD64_8C04);
        r4 = static_cast<uint32_t>(regargs_result_8055FD64_8C04 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x8055FD64u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_8053F758:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8053F764;
    }
}

loc_8053F75C:
{
    r0 = (r21 + r20);
    goto loc_8053F774;
}

loc_8053F764:
{
    r22 = (r22 + 1);
}

loc_8053F76C:
{
    if ((static_cast<uint32_t>(r22) < static_cast<uint32_t>(12))) {
        goto loc_8053F740;
    }
}

loc_8053F770:
{
    r0 = 0;
}

loc_8053F774:
{
    MemoryInline::FlatWriteRam32((r1 + 56), r0);
    r0 = MemoryInline::FlatRead32((r24 + 24));
    r3 = MemoryInline::FlatRead32((r24 + 40));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead16((r3 + 40));
}

loc_8053F794:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8053F7F0;
    }
}

loc_8053F798:
{
    r0 = MemoryInline::FlatRead8((r24 + 32));
}

loc_8053F7A0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8053F7F0;
    }
}

loc_8053F7A4:
{
    MemoryInline::FlatWriteRam16((r1 + 50), static_cast<uint16_t>(r23));
    r21 = 0;
    r3 = MemoryInline::FlatRead32((r24 + 40));
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r22 = MemoryInline::FlatRead32(r3);
}

loc_8053F7B8:
{
    r0 = (r21 & 65535);
    r4 = r27;
    r20 = (r0 * 52);
    r22_addr_3 = (r22 + r20);
    r3 = MemoryInline::FlatRead32(r22_addr_3);
    ctx->lr = 0x8053F7CCu;
    if constexpr (KnownRegArgsCpuCall<0x8055FD64u>(&func_8055FD64)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_8055FD64_95AA = func_8055FD64_ra58_0_18_0(ctx, r3, r4, r6);
        r3 = static_cast<uint32_t>(regargs_result_8055FD64_95AA);
        r4 = static_cast<uint32_t>(regargs_result_8055FD64_95AA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x8055FD64u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_8053F7D0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8053F7DC;
    }
}

loc_8053F7D4:
{
    r0 = (r22 + r20);
    goto loc_8053F7EC;
}

loc_8053F7DC:
{
    r21 = (r21 + 1);
}

loc_8053F7E4:
{
    if ((static_cast<uint32_t>(r21) < static_cast<uint32_t>(12))) {
        goto loc_8053F7B8;
    }
}

loc_8053F7E8:
{
    r0 = 0;
}

loc_8053F7EC:
{
    MemoryInline::FlatWriteRam32((r1 + 56), r0);
}

loc_8053F7F0:
{
    r12 = MemoryInline::FlatRead32(r24);
    r3 = r24;
    r5 = (r1 + 48);
    r4 = 5;
    r12 = MemoryInline::FlatRead32((r12 + 24));
    ctr = r12;
    ctx->lr = 0x8053F80Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8053F80C:
{
    r26 = (r26 + 1);
}

loc_8053F814:
{
    if ((static_cast<uint32_t>(r26) < static_cast<uint32_t>(12))) {
        goto loc_8053F638;
    }
}

loc_8053F818:
{
}

loc_8053F81C:
{
    if ((static_cast<uint32_t>(r25) != static_cast<uint32_t>(1))) {
        goto loc_8053F934;
    }
}

loc_8053F820:
{
    r3 = MemoryInline::FlatRead32((r24 + 36));
}

loc_8053F828:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8053F934;
    }
}

loc_8053F82C:
{
    r4 = MemoryInline::FlatRead32(r3);
    r3 = r27;
    ctx->lr = 0x8053F838u;
    if constexpr (KnownRegArgsCpuCall<0x8055FD64u>(&func_8055FD64)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_8055FD64_A078 = func_8055FD64_ra58_0_18_0(ctx, r3, r4, r6);
        r3 = static_cast<uint32_t>(regargs_result_8055FD64_A078);
        r4 = static_cast<uint32_t>(regargs_result_8055FD64_A078 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x8055FD64u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_8053F83C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8053F934;
    }
}

loc_8053F840:
{
    r0 = MemoryInline::FlatRead32((r24 + 20));
    r3 = MemoryInline::FlatRead32((r24 + 36));
    r0_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_18 & -2);
    r3 = (r3 + r0);
    r20 = MemoryInline::FlatRead16((r3 + 20));
}

loc_8053F858:
{
    if ((static_cast<uint32_t>(r20) == static_cast<uint32_t>(12443))) {
        goto loc_8053F928;
    }
}

loc_8053F85C:
{
}

loc_8053F860:
{
    if ((static_cast<uint32_t>(r20) == static_cast<uint32_t>(12444))) {
        goto loc_8053F928;
    }
}

loc_8053F864:
{
    r12 = MemoryInline::FlatRead32(r24);
    r3 = r24;
    r12 = MemoryInline::FlatRead32((r12 + 44));
    ctr = r12;
    ctx->lr = 0x8053F878u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8053F87C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8053F8C4;
    }
}

loc_8053F880:
{
}

loc_8053F884:
{
    if ((static_cast<uint32_t>(r20) != static_cast<uint32_t>(32))) {
        goto loc_8053F8C4;
    }
}

loc_8053F888:
{
    r12 = MemoryInline::FlatRead32(r24);
    r3 = r24;
    r12 = MemoryInline::FlatRead32((r12 + 64));
    ctr = r12;
    ctx->lr = 0x8053F89Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8053F8A0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(4))) {
        goto loc_8053F8C4;
    }
}

loc_8053F8A4:
{
    r12 = MemoryInline::FlatRead32(r24);
    r3 = r24;
    r12 = MemoryInline::FlatRead32((r12 + 64));
    ctr = r12;
    ctx->lr = 0x8053F8B8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8053F8BC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(2))) {
        goto loc_8053F8C4;
    }
}

loc_8053F8C0:
{
    r20 = 12288;
}

loc_8053F8C4:
{
    r0 = MemoryInline::FlatRead32((r29 + 1248));
    r4 = (r29 + 1248);
    r5 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r3 = MemoryInline::FlatRead32((r4 + 8));
    r0 = MemoryInline::FlatRead32((r4 + 12));
    MemoryInline::FlatWriteRam32((r1 + 20), r5);
    MemoryInline::FlatWriteRam32((r1 + 24), r3);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r20));
    r0 = MemoryInline::FlatRead32((r24 + 36));
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    r0 = MemoryInline::FlatRead32((r24 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_8053F8FC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8053F904;
    }
}

loc_8053F900:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8053F90C;
    }
}

loc_8053F904:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r1 + 20), static_cast<uint8_t>(r0));
}

loc_8053F90C:
{
    r12 = MemoryInline::FlatRead32(r24);
    r3 = r24;
    r5 = (r1 + 16);
    r4 = 5;
    r12 = MemoryInline::FlatRead32((r12 + 24));
    ctr = r12;
    ctx->lr = 0x8053F928u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8053F928:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r24 + 20), r0);
    MemoryInline::FlatWrite32((r24 + 36), r0);
}

loc_8053F934:
{
    r11 = (r1 + 128);
    // inline leaf 0x804574B8 (13 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -48), 0, 48u, true, false);
    // end of inlined leaf 0x804574B8
    r0 = MemoryInline::FlatRead32((r1 + 132));
    ctx->lr = r0;
    r1 = (r1 + 128);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->gpr[20] = r20_entry;
    ctx->gpr[21] = r21_entry;
    ctx->gpr[22] = r22_entry;
    ctx->gpr[23] = r23_entry;
    ctx->gpr[24] = r24_entry;
    ctx->gpr[25] = r25_entry;
    ctx->gpr[26] = r26_entry;
    ctx->gpr[27] = r27_entry;
    ctx->gpr[28] = r28_entry;
    ctx->gpr[29] = r29_entry;
    ctx->gpr[30] = r30_entry;
    ctx->gpr[31] = r31_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8053F144(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8053F144_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8053F144 func_8053F144 preserves=true fpr_mask=0x00000000
