#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80478000(CpuContext* ctx);
extern "C" uint64_t func_80478000_ra58_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8047ABB0(CpuContext* ctx);
extern "C" uint64_t func_8047ABB0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80493DD4(CpuContext* ctx);
extern "C" uint64_t func_80493DD4_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804A0934(CpuContext* ctx);
extern "C" uint64_t func_804A0934_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804A4554(CpuContext* ctx);
extern "C" uint64_t func_804A4554_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804A4690(CpuContext* ctx);
extern "C" uint64_t func_804A4690_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_804A3538_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
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
    uint32_t r0_rot_9 = 0;
    uint32_t r12_rot_0 = 0;
    uint32_t r12_rot_1 = 0;
    uint32_t r12_rot_2 = 0;
    uint32_t r12_rot_3 = 0;
    uint32_t r12_rot_4 = 0;
    uint32_t r12_rot_5 = 0;
    uint32_t r12_rot_6 = 0;
    uint32_t r14_addr_0 = 0;
    uint32_t r14_addr_1 = 0;
    uint32_t r14_addr_2 = 0;
    uint32_t r14_addr_3 = 0;
    uint32_t r15_rot_0 = 0;
    uint32_t r15_rot_1 = 0;
    uint32_t r15_rot_2 = 0;
    uint32_t r15_rot_3 = 0;
    uint32_t r15_rot_4 = 0;
    uint32_t r15_rot_5 = 0;
    uint32_t r16_rot_0 = 0;
    uint32_t r16_rot_1 = 0;
    uint32_t r16_rot_2 = 0;
    uint32_t r16_rot_3 = 0;
    uint32_t r16_rot_4 = 0;
    uint32_t r16_rot_5 = 0;
    uint32_t r17_addr_0 = 0;
    uint32_t r17_addr_1 = 0;
    uint32_t r17_addr_2 = 0;
    uint32_t r17_addr_3 = 0;
    uint32_t r17_addr_4 = 0;
    uint32_t r17_addr_5 = 0;
    uint32_t r17_rot_0 = 0;
    uint32_t r17_rot_1 = 0;
    uint32_t r17_rot_2 = 0;
    uint32_t r17_rot_3 = 0;
    uint32_t r17_rot_4 = 0;
    uint32_t r17_rot_5 = 0;
    uint32_t r18_rot_0 = 0;
    uint32_t r18_rot_1 = 0;
    uint32_t r18_rot_2 = 0;
    uint32_t r18_rot_3 = 0;
    uint32_t r18_rot_4 = 0;
    uint32_t r18_rot_5 = 0;
    uint32_t r18_rot_6 = 0;
    uint32_t r19_rot_0 = 0;
    uint32_t r19_rot_1 = 0;
    uint32_t r19_rot_2 = 0;
    uint32_t r19_rot_3 = 0;
    uint32_t r19_rot_4 = 0;
    uint32_t r19_rot_5 = 0;
    uint32_t r20_rot_0 = 0;
    uint32_t r20_rot_1 = 0;
    uint32_t r20_rot_2 = 0;
    uint32_t r20_rot_3 = 0;
    uint32_t r20_rot_4 = 0;
    uint32_t r20_rot_5 = 0;
    uint32_t r21_rot_0 = 0;
    uint32_t r21_rot_1 = 0;
    uint32_t r21_rot_2 = 0;
    uint32_t r21_rot_3 = 0;
    uint32_t r21_rot_4 = 0;
    uint32_t r21_rot_5 = 0;
    uint32_t r21_rot_6 = 0;
    uint32_t r22_rot_0 = 0;
    uint32_t r22_rot_1 = 0;
    uint32_t r22_rot_2 = 0;
    uint32_t r22_rot_3 = 0;
    uint32_t r22_rot_4 = 0;
    uint32_t r22_rot_5 = 0;
    uint32_t r23_rot_0 = 0;
    uint32_t r23_rot_1 = 0;
    uint32_t r23_rot_2 = 0;
    uint32_t r23_rot_3 = 0;
    uint32_t r23_rot_4 = 0;
    uint32_t r23_rot_5 = 0;
    uint32_t r24_rot_0 = 0;
    uint32_t r24_rot_1 = 0;
    uint32_t r24_rot_2 = 0;
    uint32_t r24_rot_3 = 0;
    uint32_t r24_rot_4 = 0;
    uint32_t r24_rot_5 = 0;
    uint32_t r25_rot_0 = 0;
    uint32_t r25_rot_1 = 0;
    uint32_t r25_rot_2 = 0;
    uint32_t r25_rot_3 = 0;
    uint32_t r25_rot_4 = 0;
    uint32_t r25_rot_5 = 0;
    uint32_t r26_rot_0 = 0;
    uint32_t r26_rot_1 = 0;
    uint32_t r26_rot_2 = 0;
    uint32_t r26_rot_3 = 0;
    uint32_t r26_rot_4 = 0;
    uint32_t r26_rot_5 = 0;
    uint32_t r27_rot_0 = 0;
    uint32_t r27_rot_1 = 0;
    uint32_t r27_rot_2 = 0;
    uint32_t r27_rot_3 = 0;
    uint32_t r27_rot_4 = 0;
    uint32_t r27_rot_5 = 0;
    uint32_t r27_rot_6 = 0;
    uint32_t r28_rot_0 = 0;
    uint32_t r28_rot_1 = 0;
    uint32_t r28_rot_2 = 0;
    uint32_t r28_rot_3 = 0;
    uint32_t r28_rot_4 = 0;
    uint32_t r28_rot_5 = 0;
    uint32_t r29_rot_0 = 0;
    uint32_t r29_rot_1 = 0;
    uint32_t r29_rot_2 = 0;
    uint32_t r29_rot_3 = 0;
    uint32_t r29_rot_4 = 0;
    uint32_t r29_rot_5 = 0;
    uint32_t r3_addze_src_0 = 0;
    uint32_t r3_addze_src_1 = 0;
    uint32_t r3_addze_src_2 = 0;
    uint32_t r3_ca_0 = 0;
    uint32_t r3_ca_1 = 0;
    uint32_t r3_ca_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_10 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r4_rot_6 = 0;
    uint32_t r4_rot_7 = 0;
    uint32_t r4_rot_8 = 0;
    uint32_t r4_rot_9 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r5_addr_4 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_rot_5 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r6_rot_5 = 0;
    uint32_t r6_rot_6 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint32_t r7_rot_5 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
    uint32_t r9_rot_3 = 0;
    uint32_t r9_rot_4 = 0;
    uint32_t r9_rot_5 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;

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
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x804A3538u);
    goto loc_804A3538;

loc_804A3538:
{
    MemoryInline::FlatWriteRam32((r1 + -464), r1);
    r1 = (r1 + -464);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 468), r0);
    r11 = (r1 + 464);
    // inline leaf 0x80457454 (19 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, false, true);
    // end of inlined leaf 0x80457454
    r0 = 0;
    r30 = r3;
    MemoryInline::FlatWriteRam8((r1 + 380), static_cast<uint8_t>(r0));
    r17 = r4;
    r4 = r5;
    r3 = r6;
    r5 = (r1 + 88);
    r19 = 0;
    if constexpr (KnownRegArgsCpuCall<0x804A4690u>(&func_804A4690)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->xer = xer;
        const auto regargs_result_804A4690_215A = func_804A4690_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804A4690_215A);
        r4 = static_cast<uint32_t>(regargs_result_804A4690_215A >> 32);
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
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
        ctx->xer = xer;
        InvokeDirectCpu<0x804A4690u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        xer = ctx->xer;
    }
}

loc_804A3574:
{
    r15 = r3;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804A3588;
    }
}

loc_804A357C:
{
    r0 = MemoryInline::FlatRead16((r1 + 88));
}

loc_804A3584:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804A35A0;
    }
}

loc_804A3588:
{
    r3 = r30;
    r4 = r17;
    r5 = 3;
    r6 = 0;
    ctx->lr = 0x804A359Cu;
    if constexpr (KnownRegArgsCpuCall<0x804A4554u>(&func_804A4554)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->xer = xer;
        const auto regargs_result_804A4554_287B = func_804A4554_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804A4554_287B);
        r4 = static_cast<uint32_t>(regargs_result_804A4554_287B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
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
        ctx->gpr[12] = r12;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->xer = xer;
        InvokeDirectCpu<0x804A4554u>(ctx);
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
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        xer = ctx->xer;
    }
    goto loc_804A3930;
}

loc_804A35A0:
{
    r4 = MemoryInline::FlatRead8(r3);
    r0 = MemoryInline::FlatRead8((r3 + 1));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r3 = (r3_rot_0 & -256);
    r0 = (r3 + r0);
    r18 = (r0 & 65535);
}

loc_804A35B8:
{
    if ((static_cast<uint32_t>(r18) <= static_cast<uint32_t>(20))) {
        goto loc_804A35C0;
    }
}

loc_804A35BC:
{
    r18 = 20;
}

loc_804A35C0:
{
    r14 = (r1 + 8);
    r16 = 0;
    goto loc_804A35F4;
}

loc_804A35CC:
{
    r3 = r19;
    r4 = (r1 + 88);
    ctx->lr = 0x804A35D8u;
    if constexpr (KnownRegArgsCpuCall<0x804A0934u>(&func_804A0934)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->xer = xer;
        const auto regargs_result_804A0934_33AD = func_804A0934_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804A0934_33AD);
        r4 = static_cast<uint32_t>(regargs_result_804A0934_33AD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
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
        ctx->gpr[12] = r12;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->xer = xer;
        InvokeDirectCpu<0x804A0934u>(ctx);
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
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        xer = ctx->xer;
    }
}

loc_804A35DC:
{
    r19 = r3;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804A3600;
    }
}

loc_804A35E4:
{
    r3 = MemoryInline::FlatRead32(r3);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r16), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & 262140);
    r16 = (r16 + 1);
    r14_addr_2 = (r14 + r0);
    MemoryInline::FlatWrite32(r14_addr_2, r3);
}

loc_804A35F4:
{
    r0 = (r16 & 65535);
}

loc_804A35FC:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r18))) {
        goto loc_804A35CC;
    }
}

loc_804A3600:
{
    r0 = MemoryInline::FlatRead8((r15 + 2));
}

loc_804A3608:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804A3674;
    }
}

loc_804A360C:
{
}

loc_804A3610:
{
    r3 = (r15 + 3);
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_804A3630;
    }
}

loc_804A3618:
{
    r3 = r30;
    r4 = r17;
    r5 = 5;
    r6 = 0;
    ctx->lr = 0x804A362Cu;
    if constexpr (KnownRegArgsCpuCall<0x804A4554u>(&func_804A4554)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->xer = xer;
        const auto regargs_result_804A4554_3FAB = func_804A4554_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804A4554_3FAB);
        r4 = static_cast<uint32_t>(regargs_result_804A4554_3FAB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
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
        ctx->gpr[12] = r12;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->xer = xer;
        InvokeDirectCpu<0x804A4554u>(ctx);
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
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        xer = ctx->xer;
    }
    goto loc_804A3930;
}

loc_804A3630:
{
    r0 = MemoryInline::FlatRead8(r3);
    r3 = MemoryInline::FlatRead8((r3 + 1));
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r4 = (r4_rot_1 & -256);
    r0 = MemoryInline::FlatRead16((r30 + 1142));
    r3 = (r4 + r3);
    r31 = (r3 & 65535);
}

loc_804A364C:
{
    if ((static_cast<uint32_t>(r31) == static_cast<uint32_t>(r0))) {
        goto loc_804A3668;
    }
}

loc_804A3650:
{
    r3 = r30;
    r4 = r17;
    r5 = 5;
    r6 = 0;
    ctx->lr = 0x804A3664u;
    if constexpr (KnownRegArgsCpuCall<0x804A4554u>(&func_804A4554)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->xer = xer;
        const auto regargs_result_804A4554_4AB4 = func_804A4554_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804A4554_4AB4);
        r4 = static_cast<uint32_t>(regargs_result_804A4554_4AB4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
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
        ctx->gpr[12] = r12;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->xer = xer;
        InvokeDirectCpu<0x804A4554u>(ctx);
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
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        xer = ctx->xer;
    }
    goto loc_804A3930;
}

loc_804A3668:
{
    r0 = (r16 - r31);
    r4 = (r0 & 65535);
    goto loc_804A367C;
}

loc_804A3674:
{
    r4 = r16;
    r31 = 0;
}

loc_804A367C:
{
    r3 = MemoryInline::FlatRead16((r30 + 32));
    r0 = (r4 & 65535);
    r3 = (r3 + -12);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r3);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(2) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r3 = (static_cast<int32_t>(r3) >> 2);
    r3_addze_src_1 = r3;
    r3_ca_1 = (xer >> 29) & 1u;
    r3 = (r3_addze_src_1 + r3_ca_1);
    r15 = (r3 & 65535);
}

loc_804A3698:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(r15))) {
        goto loc_804A36A4;
    }
}

loc_804A369C:
{
    r15 = r4;
    goto loc_804A36B8;
}

loc_804A36A4:
{
    r3 = MemoryInline::FlatRead16((r30 + 1142));
    r0 = 1;
    MemoryInline::FlatWriteRam8((r1 + 380), static_cast<uint8_t>(r0));
    r0 = (r3 + r15);
    MemoryInline::FlatWrite16((r30 + 1142), static_cast<uint16_t>(r0));
}

loc_804A36B8:
{
    r3 = 2;
    ctx->lr = 0x804A36C0u;
    if constexpr (KnownRegArgsCpuCall<0x80478000u>(&func_80478000)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[7] = r7;
        ctx->xer = xer;
        const auto regargs_result_80478000_588D = func_80478000_ra58_0_18_0(ctx, r3, r4, r6);
        r3 = static_cast<uint32_t>(regargs_result_80478000_588D);
        r4 = static_cast<uint32_t>(regargs_result_80478000_588D >> 32);
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
        ctx->xer = xer;
        InvokeDirectCpu<0x80478000u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
}

loc_804A36C4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804A36F0;
    }
}

loc_804A36C8:
{
    r3 = 0x80740000u;
    r3 = (r3 + -2048);
    r0 = MemoryInline::FlatRead8((r3 + 17968));
}

loc_804A36D8:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(1))) {
        goto loc_804A3930;
    }
}

loc_804A36DC:
{
    r4 = 0x80620000u;
    r3 = 655360;
    r4 = (r4 + -29556);
    ctx->lr = 0x804A36ECu;
    if constexpr (KnownRegArgsCpuCall<0x8047ABB0u>(&func_8047ABB0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->xer = xer;
        const auto regargs_result_8047ABB0_5ECF = func_8047ABB0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8047ABB0_5ECF);
        r4 = static_cast<uint32_t>(regargs_result_8047ABB0_5ECF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
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
        ctx->gpr[12] = r12;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->xer = xer;
        InvokeDirectCpu<0x8047ABB0u>(ctx);
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
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        xer = ctx->xer;
    }
    goto loc_804A3930;
}

loc_804A36F0:
{
    r0 = 9;
    r14 = (r3 + 17);
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 2), 0, 24u, false, true);
    MemoryInline::WriteResolved16(guest_range_1, 2u, (r3 + 4), static_cast<uint16_t>(r0));
    r4 = 3;
    r0 = (r15 & 65535);
    r11 = (r14 + 3);
    MemoryInline::WriteResolved8(guest_range_1, 15u, (r3 + 17), static_cast<uint8_t>(r4));
    r10 = (r31 + r0);
    r5 = (static_cast<int32_t>(r17) >> 8);
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r16), static_cast<uint32_t>(24));
    r4 = (r4_rot_3 & 255);
    MemoryInline::WriteResolved8(guest_range_1, 16u, (r3 + 18), static_cast<uint8_t>(r5));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r15), static_cast<uint32_t>(24));
    r0 = (r0_rot_3 & 255);
}

loc_804A3724:
{
    MemoryInline::WriteResolved8(guest_range_1, 17u, (r3 + 19), static_cast<uint8_t>(r17));
    MemoryInline::WriteResolved8(guest_range_1, 20u, (r3 + 22), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 21u, (r3 + 23), static_cast<uint8_t>(r16));
    MemoryInline::WriteResolved8(guest_range_1, 22u, (r3 + 24), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam32((r1 + 384), r11);
    r11 = (r11 + 6);
    MemoryInline::WriteResolved8(guest_range_1, 23u, (r3 + 25), static_cast<uint8_t>(r15));
    if ((static_cast<int32_t>(r31) >= static_cast<int32_t>(r10))) {
        goto loc_804A38C4;
    }
}

loc_804A3744:
{
    r5 = (r10 & 65535);
    r0 = (r10 + -8);
    r4 = (r5 - r31);
    r4 = (r4 & 65535);
}

loc_804A3758:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(8))) {
        goto loc_804A3884;
    }
}

loc_804A375C:
{
}

loc_804A3760:
{
    if ((static_cast<uint32_t>(r31) > static_cast<uint32_t>(r5))) {
        goto loc_804A3884;
    }
}

loc_804A3764:
{
    goto loc_804A3878;
}

loc_804A3768:
{
    r4_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(2));
    r4 = (r4_rot_5 & 262140);
    r17 = (r1 + 8);
    r17_addr_2 = (r17 + r4);
    guest_range_3 = MemoryInline::ResolveRangeHost(r17_addr_2, 0, 32u, true, false);
    r8 = MemoryInline::ReadResolved32(guest_range_3, 0u, r17_addr_2);
    r17 = r17_addr_2;
    r31 = (r31 + 8);
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(8));
    r5 = (r5_rot_2 & 255);
    r24 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r17 + 4));
    guest_range_4 = MemoryInline::ResolveRangeHost(r11, 0, 32u, false, true);
    MemoryInline::WriteResolved8(guest_range_4, 0u, r11, static_cast<uint8_t>(r5));
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(16));
    r6 = (r6_rot_2 & 255);
    r4 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r17 + 8));
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(24));
    r7 = (r7_rot_2 & 255);
    MemoryInline::WriteResolved8(guest_range_4, 1u, (r11 + 1), static_cast<uint8_t>(r6));
    r9_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r24), static_cast<uint32_t>(8));
    r9 = (r9_rot_2 & 255);
    r6 = MemoryInline::ReadResolved32(guest_range_3, 16u, (r17 + 16));
    r18_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r24), static_cast<uint32_t>(16));
    r18 = (r18_rot_2 & 255);
    MemoryInline::WriteResolved8(guest_range_4, 2u, (r11 + 2), static_cast<uint8_t>(r7));
    r21_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r24), static_cast<uint32_t>(24));
    r21 = (r21_rot_2 & 255);
    r7 = MemoryInline::ReadResolved32(guest_range_3, 20u, (r17 + 20));
    r27_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r27 = (r27_rot_2 & 255);
    MemoryInline::WriteResolved8(guest_range_4, 3u, (r11 + 3), static_cast<uint8_t>(r8));
    r12_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(16));
    r12 = (r12_rot_2 & 255);
    r8 = MemoryInline::ReadResolved32(guest_range_3, 24u, (r17 + 24));
    r15_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(24));
    r15 = (r15_rot_2 & 255);
    MemoryInline::WriteResolved8(guest_range_4, 4u, (r11 + 4), static_cast<uint8_t>(r9));
    r19_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(8));
    r19 = (r19_rot_2 & 255);
    r9 = MemoryInline::ReadResolved32(guest_range_3, 28u, (r17 + 28));
    r20_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(16));
    r20 = (r20_rot_2 & 255);
    MemoryInline::WriteResolved8(guest_range_4, 5u, (r11 + 5), static_cast<uint8_t>(r18));
    r22_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(8));
    r22 = (r22_rot_2 & 255);
    r5 = MemoryInline::ReadResolved32(guest_range_3, 12u, (r17 + 12));
    r23_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(16));
    r23 = (r23_rot_2 & 255);
    MemoryInline::WriteResolved8(guest_range_4, 6u, (r11 + 6), static_cast<uint8_t>(r21));
    r21_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(24));
    r21 = (r21_rot_3 & 255);
    r16_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(8));
    r16 = (r16_rot_2 & 255);
    r17_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(16));
    r17 = (r17_rot_2 & 255);
    MemoryInline::WriteResolved8(guest_range_4, 7u, (r11 + 7), static_cast<uint8_t>(r24));
    r18_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(24));
    r18 = (r18_rot_3 & 255);
    r24_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(24));
    r24 = (r24_rot_2 & 255);
    r25_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(8));
    r25 = (r25_rot_2 & 255);
    MemoryInline::WriteResolved8(guest_range_4, 8u, (r11 + 8), static_cast<uint8_t>(r27));
    r26_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(16));
    r26 = (r26_rot_2 & 255);
    r27_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(24));
    r27 = (r27_rot_3 & 255);
    r28_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(8));
    r28 = (r28_rot_2 & 255);
    MemoryInline::WriteResolved8(guest_range_4, 9u, (r11 + 9), static_cast<uint8_t>(r12));
    r29_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(16));
    r29 = (r29_rot_2 & 255);
    r12_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(24));
    r12 = (r12_rot_3 & 255);
    MemoryInline::WriteResolved8(guest_range_4, 10u, (r11 + 10), static_cast<uint8_t>(r15));
    MemoryInline::WriteResolved8(guest_range_4, 11u, (r11 + 11), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_4, 12u, (r11 + 12), static_cast<uint8_t>(r16));
    MemoryInline::WriteResolved8(guest_range_4, 13u, (r11 + 13), static_cast<uint8_t>(r17));
    MemoryInline::WriteResolved8(guest_range_4, 14u, (r11 + 14), static_cast<uint8_t>(r18));
    MemoryInline::WriteResolved8(guest_range_4, 15u, (r11 + 15), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_4, 16u, (r11 + 16), static_cast<uint8_t>(r19));
    MemoryInline::WriteResolved8(guest_range_4, 17u, (r11 + 17), static_cast<uint8_t>(r20));
    MemoryInline::WriteResolved8(guest_range_4, 18u, (r11 + 18), static_cast<uint8_t>(r21));
    MemoryInline::WriteResolved8(guest_range_4, 19u, (r11 + 19), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_4, 20u, (r11 + 20), static_cast<uint8_t>(r22));
    MemoryInline::WriteResolved8(guest_range_4, 21u, (r11 + 21), static_cast<uint8_t>(r23));
    MemoryInline::WriteResolved8(guest_range_4, 22u, (r11 + 22), static_cast<uint8_t>(r24));
    MemoryInline::WriteResolved8(guest_range_4, 23u, (r11 + 23), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_4, 24u, (r11 + 24), static_cast<uint8_t>(r25));
    MemoryInline::WriteResolved8(guest_range_4, 25u, (r11 + 25), static_cast<uint8_t>(r26));
    MemoryInline::WriteResolved8(guest_range_4, 26u, (r11 + 26), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_4, 27u, (r11 + 27), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_4, 28u, (r11 + 28), static_cast<uint8_t>(r28));
    MemoryInline::WriteResolved8(guest_range_4, 29u, (r11 + 29), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_4, 30u, (r11 + 30), static_cast<uint8_t>(r12));
    MemoryInline::WriteResolved8(guest_range_4, 31u, (r11 + 31), static_cast<uint8_t>(r9));
    r11 = (r11 + 32);
}

loc_804A3878:
{
    r4 = (r31 & 65535);
}

loc_804A3880:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_804A3768;
    }
}

loc_804A3884:
{
    r5 = (r1 + 8);
    goto loc_804A38B8;
}

loc_804A388C:
{
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & 262140);
    r31 = (r31 + 1);
    r5_addr_2 = (r5 + r0);
    r6 = MemoryInline::FlatRead32(r5_addr_2);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(8));
    r0 = (r0_rot_6 & 255);
    r4_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(16));
    r4 = (r4_rot_8 & 255);
    MemoryInline::FlatWrite8(r11, static_cast<uint8_t>(r0));
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(24));
    r0 = (r0_rot_7 & 255);
    MemoryInline::FlatWrite8((r11 + 1), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r11 + 2), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r11 + 3), static_cast<uint8_t>(r6));
    r11 = (r11 + 4);
}

loc_804A38B8:
{
    r0 = (r31 & 65535);
}

loc_804A38C0:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r10))) {
        goto loc_804A388C;
    }
}

loc_804A38C4:
{
    r0 = MemoryInline::FlatRead8((r1 + 380));
}

loc_804A38CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804A38F4;
    }
}

loc_804A38D0:
{
    r0 = 2;
    MemoryInline::FlatWrite8(r11, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 1142));
    r0 = (static_cast<int32_t>(r0) >> 8);
    MemoryInline::FlatWrite8((r11 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 1142));
    MemoryInline::FlatWrite8((r11 + 2), static_cast<uint8_t>(r0));
    r11 = (r11 + 3);
    goto loc_804A3900;
}

loc_804A38F4:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r11, static_cast<uint8_t>(r0));
    r11 = (r11 + 1);
}

loc_804A3900:
{
    r0 = MemoryInline::FlatRead32((r1 + 384));
    r5 = MemoryInline::FlatRead32((r1 + 384));
    r4 = (r11 - r0);
    r0 = (r11 - r14);
    r7 = (r4 + -2);
    r6_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(24));
    r6 = (r6_rot_5 & 255);
    r4 = r3;
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r5 + 1), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved16(guest_range_1, 0u, (r3 + 2), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead16((r30 + 34));
    ctx->lr = 0x804A3930u;
    if constexpr (KnownRegArgsCpuCall<0x80493DD4u>(&func_80493DD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->xer = xer;
        const auto regargs_result_80493DD4_92DE = func_80493DD4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80493DD4_92DE);
        r4 = static_cast<uint32_t>(regargs_result_80493DD4_92DE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
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
        ctx->gpr[12] = r12;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->xer = xer;
        InvokeDirectCpu<0x80493DD4u>(ctx);
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
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        xer = ctx->xer;
    }
}

loc_804A3930:
{
    r11 = (r1 + 464);
    // inline leaf 0x804574A0 (19 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, true, false);
    // end of inlined leaf 0x804574A0
    r0 = MemoryInline::FlatRead32((r1 + 468));
    ctx->lr = r0;
    r1 = (r1 + 464);
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
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->xer = xer;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804A3538(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804A3538_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804A3538 func_804A3538 preserves=true fpr_mask=0x00000000
