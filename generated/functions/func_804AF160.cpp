#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804AEF00(CpuContext* ctx);
extern "C" uint64_t func_804AEF00_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804AF040(CpuContext* ctx);
extern "C" uint64_t func_804AF040_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804AF840(CpuContext* ctx);
extern "C" uint32_t func_804AF840_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_804AF160_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r7_rot_0 = 0;
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

    goto loc_804AF160;

loc_804AF160:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x80457474 (11 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, false, true);
    // end of inlined leaf 0x80457474
    r24 = r5;
    r25 = r6;
    r5 = (0 - r3);
    r6 = -1;
    r9 = 1;
    r0 = (0 - r24);
    MemoryInline::FlatWriteRam32((r1 + 20), r6);
    r5 = (r5 | r3);
    r22 = r3;
    r0 = (r0 | r24);
    MemoryInline::FlatWriteRam32((r1 + 16), r6);
    r26 = r7;
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    r23 = r4;
    MemoryInline::FlatWriteRam32((r1 + 12), r9);
    r8 = r25;
    r5 = (r1 + 16);
    r6 = (r1 + 12);
    MemoryInline::FlatWriteRam32((r1 + 8), r9);
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r7 = (r7_rot_0 & 1);
    r9 = (r1 + 20);
    r10 = (r1 + 8);
    r31 = 0;
    r30 = 0;
    ctx->lr = 0x804AF1D8u;
    if constexpr (KnownRegArgsCpuCall<0x804AEF00u>(&func_804AEF00)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        const auto regargs_result_804AEF00_F30 = func_804AEF00_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804AEF00_F30);
        r4 = static_cast<uint32_t>(regargs_result_804AEF00_F30 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x804AEF00u>(ctx);
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

loc_804AF1DC:
{
    r29 = r3;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804AF1E8;
    }
}

loc_804AF1E4:
{
    goto loc_804AF44C;
}

loc_804AF1E8:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
}

loc_804AF1F0:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_804AF200;
    }
}

loc_804AF1F4:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
}

loc_804AF1FC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804AF40C;
    }
}

loc_804AF200:
{
    r0 = MemoryInline::FlatRead16(r24);
}

loc_804AF208:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65279))) {
        goto loc_804AF218;
    }
}

loc_804AF20C:
{
    r31 = 1;
    r24 = (r24 + 2);
    goto loc_804AF40C;
}

loc_804AF218:
{
}

loc_804AF21C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65534))) {
        goto loc_804AF40C;
    }
}

loc_804AF220:
{
}

loc_804AF224:
{
    if ((static_cast<int32_t>(r23) == static_cast<int32_t>(0))) {
        goto loc_804AF230;
    }
}

loc_804AF228:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r23, r0);
}

loc_804AF230:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r25, r0);
    r3 = -4;
    goto loc_804AF44C;
}

loc_804AF244:
{
    r0 = MemoryInline::FlatRead32((r1 + 16));
}

loc_804AF24C:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(r0))) {
        goto loc_804AF264;
    }
}

loc_804AF250:
{
    r0 = MemoryInline::FlatRead32((r1 + 12));
}

loc_804AF258:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804AF264;
    }
}

loc_804AF25C:
{
    r29 = -1;
    goto loc_804AF430;
}

loc_804AF264:
{
}

loc_804AF268:
{
    if ((static_cast<int32_t>(r26) <= static_cast<int32_t>(0))) {
        goto loc_804AF310;
    }
}

loc_804AF26C:
{
    r0 = (r3 - r31);
    r3 = r28;
}

loc_804AF278:
{
    r4 = 0;
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(1))) {
        goto loc_804AF28C;
    }
}

loc_804AF280:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
}

loc_804AF288:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804AF290;
    }
}

loc_804AF28C:
{
    r4 = 1;
}

loc_804AF290:
{
}

loc_804AF294:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_804AF2A0;
    }
}

loc_804AF298:
{
    r4 = MemoryInline::FlatRead16((r24 + 2));
    goto loc_804AF2A4;
}

loc_804AF2A0:
{
    r4 = 0;
}

loc_804AF2A4:
{
    // inline leaf 0x804AF000 (13 guest instruction(s))
}

loc_inl1_0x804AF000:
{
}

loc_inl1_0x804AF004:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(10))) {
        goto loc_inl1_0x804AF010;
    }
}

loc_inl1_0x804AF008:
{
    r3 = 1;
    goto loc_inl1_cont_804AF000;
}

loc_inl1_0x804AF010:
{
}

loc_inl1_0x804AF014:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(13))) {
        goto loc_inl1_0x804AF02C;
    }
}

loc_inl1_0x804AF018:
{
    r0 = (r4 + -10);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_2 & 134217727);
    r3 = (r3 + 1);
    goto loc_inl1_cont_804AF000;
}

loc_inl1_0x804AF02C:
{
    r3 = 0;
}

loc_inl1_cont_804AF000:
{
    // end of inlined leaf 0x804AF000
}

loc_804AF2AC:
{
    r27 = r3;
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_804AF310;
    }
}

loc_804AF2B4:
{
    r6 = MemoryInline::FlatRead32((r1 + 12));
    r3 = r22;
    r5 = r26;
    r4 = 1;
    ctx->lr = 0x804AF2C8u;
    if constexpr (KnownRegArgsCpuCall<0x804AF040u>(&func_804AF040)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_804AF040_2602 = func_804AF040_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804AF040_2602);
        r4 = static_cast<uint32_t>(regargs_result_804AF040_2602 >> 32);
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
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x804AF040u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r0 = MemoryInline::FlatRead32((r1 + 16));
    r0 = (r0 - r30);
}

loc_804AF2D4:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r3))) {
        goto loc_804AF2EC;
    }
}

loc_804AF2D8:
{
    r0 = MemoryInline::FlatRead32((r1 + 12));
}

loc_804AF2E0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804AF2EC;
    }
}

loc_804AF2E4:
{
    r29 = -1;
    goto loc_804AF430;
}

loc_804AF2EC:
{
    r0 = MemoryInline::FlatRead32((r1 + 12));
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(1));
    r4 = (r4_rot_2 & -2);
    r24 = (r24 + r4);
    r31 = (r31 + r27);
}

loc_804AF300:
{
    r30 = (r30 + r3);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804AF40C;
    }
}

loc_804AF308:
{
    r22 = (r22 + r3);
    goto loc_804AF40C;
}

loc_804AF310:
{
}

loc_804AF314:
{
    if ((static_cast<uint32_t>(r28) >= static_cast<uint32_t>(128))) {
        goto loc_804AF33C;
    }
}

loc_804AF318:
{
    r0 = MemoryInline::FlatRead32((r1 + 12));
}

loc_804AF320:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804AF32C;
    }
}

loc_804AF324:
{
    MemoryInline::FlatWrite8(r22, static_cast<uint8_t>(r28));
    r22 = (r22 + 1);
}

loc_804AF32C:
{
    r30 = (r30 + 1);
    r24 = (r24 + 2);
    r31 = (r31 + 1);
    goto loc_804AF40C;
}

loc_804AF33C:
{
}

loc_804AF340:
{
    if ((static_cast<uint32_t>(r28) >= static_cast<uint32_t>(2048))) {
        goto loc_804AF350;
    }
}

loc_804AF344:
{
    r28 = 1;
    r27 = 2;
    goto loc_804AF370;
}

loc_804AF350:
{
    r0 = (r28 & 63488);
}

loc_804AF358:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(55296))) {
        goto loc_804AF368;
    }
}

loc_804AF35C:
{
    r28 = 1;
    r27 = 3;
    goto loc_804AF370;
}

loc_804AF368:
{
    r28 = 2;
    r27 = 4;
}

loc_804AF370:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r0 = (r0 - r31);
}

loc_804AF37C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r28))) {
        goto loc_804AF38C;
    }
}

loc_804AF380:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
}

loc_804AF388:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804AF430;
    }
}

loc_804AF38C:
{
    r0 = MemoryInline::FlatRead32((r1 + 12));
}

loc_804AF394:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804AF3FC;
    }
}

loc_804AF398:
{
    r0 = MemoryInline::FlatRead32((r1 + 16));
    r0 = (r0 - r30);
}

loc_804AF3A4:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r27))) {
        goto loc_804AF3B0;
    }
}

loc_804AF3A8:
{
    r29 = -1;
    goto loc_804AF430;
}

loc_804AF3B0:
{
}

loc_804AF3B4:
{
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(1))) {
        goto loc_804AF3C0;
    }
}

loc_804AF3B8:
{
    r5 = MemoryInline::FlatRead16(r24);
    goto loc_804AF3EC;
}

loc_804AF3C0:
{
}

loc_804AF3C4:
{
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(2))) {
        goto loc_804AF3E8;
    }
}

loc_804AF3C8:
{
    r3 = MemoryInline::FlatRead16(r24);
    r0 = MemoryInline::FlatRead16((r24 + 2));
    r3 = (r3 + -65536);
    r3 = (r3 + 10304);
    r0 = (r0 & 1007);
}

loc_804AF3DC:
{
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(10));
    r3 = (r3_rot_5 & -1024);
    r5 = (r3 + r0);
    goto loc_804AF3EC;
}

loc_804AF3E8:
{
    r5 = 0;
}

loc_804AF3EC:
{
    r3 = r22;
    r4 = r27;
    if constexpr (KnownRegArgsCpuCall<0x804AF840u>(&func_804AF840)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        const auto regargs_result_804AF840_38DD = func_804AF840_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_804AF840_38DD;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
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
        InvokeDirectCpu<0x804AF840u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
    }
    r22 = (r22 + r27);
}

loc_804AF3FC:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    r31 = (r31 + r28);
    r24 = (r24 + r0);
    r30 = (r30 + r27);
}

loc_804AF40C:
{
    r28 = MemoryInline::FlatRead16(r24);
}

loc_804AF414:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_804AF430;
    }
}

loc_804AF418:
{
    r3 = MemoryInline::FlatRead32((r1 + 20));
}

loc_804AF420:
{
    if ((static_cast<int32_t>(r31) < static_cast<int32_t>(r3))) {
        goto loc_804AF244;
    }
}

loc_804AF424:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
}

loc_804AF42C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804AF244;
    }
}

loc_804AF430:
{
}

loc_804AF434:
{
    if ((static_cast<int32_t>(r25) == static_cast<int32_t>(0))) {
        goto loc_804AF43C;
    }
}

loc_804AF438:
{
    MemoryInline::FlatWrite32(r25, r31);
}

loc_804AF43C:
{
}

loc_804AF440:
{
    if ((static_cast<int32_t>(r23) == static_cast<int32_t>(0))) {
        goto loc_804AF448;
    }
}

loc_804AF444:
{
    MemoryInline::FlatWrite32(r23, r30);
}

loc_804AF448:
{
    r3 = r29;
}

loc_804AF44C:
{
    r11 = (r1 + 64);
    // inline leaf 0x804574C0 (11 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, true, false);
    // end of inlined leaf 0x804574C0
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
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

extern "C" void func_804AF160(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804AF160_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804AF160 func_804AF160 preserves=true fpr_mask=0x00000000
