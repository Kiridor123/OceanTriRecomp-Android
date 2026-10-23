#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80478000(CpuContext* ctx);
extern "C" uint64_t func_80478000_ra58_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804780F0(CpuContext* ctx);
extern "C" uint64_t func_804780F0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80493DD4(CpuContext* ctx);
extern "C" uint64_t func_80493DD4_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_80493150_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_stbux_80493354_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r28_rot_0 = 0;
    uint32_t r28_rot_1 = 0;
    uint32_t r28_rot_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
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
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80493150;

loc_80493150:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r11 = (r1 + 80);
    // inline leaf 0x80457460 (16 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -60), 0, 60u, false, true);
    // end of inlined leaf 0x80457460
    r0 = (r3 * 52);
    r3 = 0x80740000u;
    r17 = r4;
    r3 = (r3 + -6152);
    r27 = (r3 + r0);
    r18 = r7;
    r0 = MemoryInline::FlatRead8((r27 + 17));
    r19 = r8;
    r21 = 0;
    r20 = 0;
    r0 = (r0 & 32);
}

loc_80493190:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804931AC;
    }
}

loc_80493194:
{
}

loc_80493198:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_804931A4;
    }
}

loc_8049319C:
{
    r3 = r19;
    ctx->lr = 0x804931A4u;
    if constexpr (KnownRegArgsCpuCall<0x804780F0u>(&func_804780F0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_804780F0_DF1 = func_804780F0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804780F0_DF1);
        r4 = static_cast<uint32_t>(regargs_result_804780F0_DF1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x804780F0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
}

loc_804931A4:
{
    r3 = 8;
    goto loc_804933D4;
}

loc_804931AC:
{
}

loc_804931B0:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(4))) {
        goto loc_804931C0;
    }
}

loc_804931B4:
{
}

loc_804931B8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(1))) {
        goto loc_804931CC;
    }
}

loc_804931BC:
{
    goto loc_804931E4;
}

loc_804931C0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(10));
}

loc_804931C4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804931D8;
    }
}

loc_804931C8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804931E4;
    }
}

loc_804931CC:
{
    r23 = MemoryInline::FlatRead16((r27 + 20));
    r22 = 2;
    goto loc_804931EC;
}

loc_804931D8:
{
    r23 = MemoryInline::FlatRead16((r27 + 22));
    r22 = 2;
    goto loc_804931EC;
}

loc_804931E4:
{
    r3 = 5;
    goto loc_804933D4;
}

loc_804931EC:
{
}

loc_804931F0:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(9))) {
        goto loc_804931FC;
    }
}

loc_804931F4:
{
    r21 = 1;
    goto loc_80493210;
}

loc_804931FC:
{
}

loc_80493200:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(4))) {
        goto loc_80493210;
    }
}

loc_80493204:
{
    r0 = (r5 & 8);
}

loc_80493208:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80493210;
    }
}

loc_8049320C:
{
    r21 = 2;
}

loc_80493210:
{
    r30 = (r5 & 15);
    r29 = (r6 & 255);
    r28_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(24));
    r28 = (r28_rot_1 & 255);
    r31 = 9;
}

loc_80493220:
{
}

loc_80493224:
{
    if ((static_cast<int32_t>(r19) == static_cast<int32_t>(0))) {
        goto loc_80493230;
    }
}

loc_80493228:
{
}

loc_8049322C:
{
    if ((static_cast<int32_t>(r20) == static_cast<int32_t>(0))) {
        goto loc_80493264;
    }
}

loc_80493230:
{
    r3 = r22;
    ctx->lr = 0x80493238u;
    if constexpr (KnownRegArgsCpuCall<0x80478000u>(&func_80478000)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_80478000_19A6 = func_80478000_ra58_0_18_0(ctx, r3, r4, r6);
        r3 = static_cast<uint32_t>(regargs_result_80478000_19A6);
        r4 = static_cast<uint32_t>(regargs_result_80478000_19A6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80478000u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
}

loc_8049323C:
{
    r26 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8049324C;
    }
}

loc_80493244:
{
    r3 = 3;
    goto loc_804933D4;
}

loc_8049324C:
{
    MemoryInline::FlatWrite16((r3 + 4), static_cast<uint16_t>(r31));
    r4 = 0;
    r24 = 0;
    r25 = 0;
    r20 = 0;
    goto loc_804932C8;
}

loc_80493264:
{
    r3 = MemoryInline::FlatRead16((r27 + 24));
    r24 = MemoryInline::FlatRead16((r19 + 2));
    r0 = (r3 + -1);
}

loc_80493274:
{
    if ((static_cast<int32_t>(r24) <= static_cast<int32_t>(r0))) {
        goto loc_804932B0;
    }
}

loc_80493278:
{
    r3 = r22;
    ctx->lr = 0x80493280u;
    if constexpr (KnownRegArgsCpuCall<0x80478000u>(&func_80478000)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_80478000_2050 = func_80478000_ra58_0_18_0(ctx, r3, r4, r6);
        r3 = static_cast<uint32_t>(regargs_result_80478000_2050);
        r4 = static_cast<uint32_t>(regargs_result_80478000_2050 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80478000u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
}

loc_80493284:
{
    r26 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80493294;
    }
}

loc_8049328C:
{
    r3 = 3;
    goto loc_804933D4;
}

loc_80493294:
{
    MemoryInline::FlatWrite16((r3 + 4), static_cast<uint16_t>(r31));
    r4 = 1;
    r3 = MemoryInline::FlatRead16((r27 + 24));
    r24 = MemoryInline::FlatRead16((r19 + 2));
    r0 = (r3 + -1);
    r25 = (r0 & 65535);
    goto loc_804932C8;
}

loc_804932B0:
{
    r3 = MemoryInline::FlatRead16((r19 + 4));
    r26 = r19;
    r25 = r24;
    r4 = 0;
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r19 + 4), static_cast<uint16_t>(r0));
}

loc_804932C8:
{
    r3 = MemoryInline::FlatRead16((r26 + 4));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r17), static_cast<uint32_t>(4));
    r0 = (r0_rot_2 & 4080);
}

loc_804932D4:
{
    r3 = (r26 + r3);
    r0 = (r0 | r30);
    MemoryInline::FlatWrite8((r3 + 8), static_cast<uint8_t>(r0));
    r3 = (r3 + 9);
    if ((static_cast<uint32_t>(r17) != static_cast<uint32_t>(4))) {
        goto loc_804932FC;
    }
}

loc_804932E8:
{
}

loc_804932EC:
{
    if ((static_cast<int32_t>(r18) == static_cast<int32_t>(0))) {
        goto loc_804932FC;
    }
}

loc_804932F0:
{
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r18));
    r25 = 1;
    r24 = 1;
}

loc_804932FC:
{
}

loc_80493300:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80493334;
    }
}

loc_80493304:
{
    r0 = MemoryInline::FlatRead16((r19 + 4));
    r5 = (r25 & 65535);
    r4 = (r19 + r0);
    r4 = (r4 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r3 = MemoryInline::FlatRead16((r19 + 4));
    r0 = MemoryInline::FlatRead16((r19 + 2));
    r3 = (r3 + r25);
    r0 = (r0 - r25);
    MemoryInline::FlatWrite16((r19 + 4), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r19 + 2), static_cast<uint16_t>(r0));
    goto loc_8049335C;
}

loc_80493334:
{
}

loc_80493338:
{
    if ((static_cast<uint32_t>(r21) != static_cast<uint32_t>(1))) {
        goto loc_80493348;
    }
}

loc_8049333C:
{
    r0 = (r25 & 65535);
    r3_addr_2 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_2, static_cast<uint8_t>(r29));
    goto loc_8049335C;
}

loc_80493348:
{
}

loc_8049334C:
{
    if ((static_cast<uint32_t>(r21) != static_cast<uint32_t>(2))) {
        goto loc_8049335C;
    }
}

loc_80493350:
{
    r0 = (r25 & 65535);
    addr_stbux_80493354_loc_0 = (r3 + r0);
    MemoryInline::FlatWrite8(addr_stbux_80493354_loc_0, static_cast<uint8_t>(r29));
    r3 = addr_stbux_80493354_loc_0;
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r28));
}

loc_8049335C:
{
    r3 = (r25 + r21);
    r24 = (r24 - r25);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r26 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r27 + 17));
    r0 = (r0 & 32);
}

loc_80493374:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8049338C;
    }
}

loc_80493378:
{
    r3 = r23;
    r4 = r26;
    ctx->lr = 0x80493384u;
    if constexpr (KnownRegArgsCpuCall<0x80493DD4u>(&func_80493DD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_80493DD4_3128 = func_80493DD4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80493DD4_3128);
        r4 = static_cast<uint32_t>(regargs_result_80493DD4_3128 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x80493DD4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r0 = (r3 & 255);
}

loc_80493388:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80493394;
    }
}

loc_8049338C:
{
    r3 = 8;
    goto loc_804933D4;
}

loc_80493394:
{
    r0 = (r24 & 65535);
}

loc_80493398:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804933A4;
    }
}

loc_8049339C:
{
    r17 = 11;
    goto loc_804933C0;
}

loc_804933A4:
{
    r3 = MemoryInline::FlatRead16((r27 + 24));
    r4 = (r25 & 65535);
    r0 = (r3 + -1);
}

loc_804933B4:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(r0))) {
        goto loc_804933C0;
    }
}

loc_804933B8:
{
    r17 = 11;
    r20 = 1;
}

loc_804933C0:
{
    r0 = (r24 & 65535);
}

loc_804933C4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80493220;
    }
}

loc_804933C8:
{
}

loc_804933CC:
{
    if ((static_cast<int32_t>(r20) != static_cast<int32_t>(0))) {
        goto loc_80493220;
    }
}

loc_804933D0:
{
    r3 = 0;
}

loc_804933D4:
{
    r11 = (r1 + 80);
    // inline leaf 0x804574AC (16 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -60), 0, 60u, true, false);
    // end of inlined leaf 0x804574AC
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80493150(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80493150_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80493150 func_80493150 preserves=true fpr_mask=0x00000000
