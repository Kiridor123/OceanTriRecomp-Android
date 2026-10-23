#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8006F4EC(CpuContext* ctx);
extern "C" uint64_t func_8006F4EC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8006F520(CpuContext* ctx);
extern "C" uint64_t func_8006F520_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800786B4(CpuContext* ctx);
extern "C" uint32_t func_800786B4_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8007892C(CpuContext* ctx);
extern "C" uint32_t func_8007892C_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80078A94(CpuContext* ctx);
extern "C" uint64_t func_80078A94_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8007B8DC(CpuContext* ctx);
extern "C" uint64_t func_8007B8DC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8007BA6C(CpuContext* ctx);
extern "C" uint32_t func_8007BA6C_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_800948D4(CpuContext* ctx);
extern "C" uint64_t func_800948D4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800D5758(CpuContext* ctx);
extern "C" uint64_t func_800D5758_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8022315C(CpuContext* ctx);
extern "C" uint64_t func_8022315C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80223210(CpuContext* ctx);
extern "C" uint64_t func_80223210_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80223608(CpuContext* ctx);
extern "C" uint64_t func_80223608_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80223B40(CpuContext* ctx);
extern "C" uint64_t func_80223B40_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80223C30(CpuContext* ctx);
extern "C" uint64_t func_80223C30_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80223D50(CpuContext* ctx);
extern "C" uint64_t func_80223D50_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80223F54(CpuContext* ctx);
extern "C" uint64_t func_80223F54_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8022431C(CpuContext* ctx);
extern "C" uint64_t func_8022431C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80268550(CpuContext* ctx);
extern "C" uint64_t func_80268550_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80268668(CpuContext* ctx);
extern "C" uint64_t func_80268668_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80268750(CpuContext* ctx);
extern "C" uint64_t func_80268750_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_802ABF64(CpuContext* ctx);
extern "C" uint64_t func_802ABF64_ra38_e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);
extern "C" void func_8045FBD4(CpuContext* ctx);
extern "C" uint32_t func_8045FBD4_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" MkwStateFreeResult2 func_8007BA6C_statefree(uint32_t, uint32_t, uint32_t, uint32_t);

extern "C" void func_80268914(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lhax_80268AEC_loc_0 = 0;
    uint32_t addr_lhax_80268B00_loc_0 = 0;
    uint32_t addr_lhax_80268C2C_loc_0 = 0;
    uint32_t addr_lhax_80268C50_loc_0 = 0;
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
    uint32_t r19_rot_0 = 0;
    uint32_t r19_rot_1 = 0;
    uint32_t r19_rot_2 = 0;
    uint32_t r21_rot_0 = 0;
    uint32_t r21_rot_1 = 0;
    uint32_t r21_rot_2 = 0;
    uint32_t r21_rot_3 = 0;
    uint32_t r24_addr_0 = 0;
    uint32_t r28_rot_0 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
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
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    const uint32_t r19_entry = r19;
    const uint32_t r20_entry = r20;
    const uint32_t r21_entry = r21;
    const uint32_t r22_entry = r22;
    const uint32_t r23_entry = r23;
    const uint32_t r24_entry = r24;
    const uint32_t r25_entry = r25;
    const uint32_t r26_entry = r26;
    const uint32_t r27_entry = r27;
    const uint32_t r28_entry = r28;

    goto loc_80268914;

loc_80268914:
{
    MemoryInline::FlatWriteRam32((r1 + -352), r1);
    r1 = (r1 + -352);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 356), r0);
    r11 = (r1 + 352);
    // inline leaf 0x80457468 (14 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -52), 0, 52u, false, true);
    // end of inlined leaf 0x80457468
    r23 = r3;
    r24 = r4;
    r25 = r5;
    r3 = (r1 + 24);
    r4 = 0;
    ctx->lr = 0x80268940u;
    if constexpr (KnownRegArgsCpuCall<0x8007B8DCu>(&func_8007B8DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8007B8DC_1A32 = func_8007B8DC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8007B8DC_1A32);
        r4 = static_cast<uint32_t>(regargs_result_8007B8DC_1A32 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8007B8DCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = (r1 + 20);
    r4 = 0;
    ctx->lr = 0x8026894Cu;
    if constexpr (KnownRegArgsCpuCall<0x80078A94u>(&func_80078A94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80078A94_1D78 = func_80078A94_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80078A94_1D78);
        r4 = static_cast<uint32_t>(regargs_result_80078A94_1D78 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80078A94u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = (r1 + 16);
    r4 = 0;
    ctx->lr = 0x80268958u;
    if constexpr (KnownRegArgsCpuCall<0x8006F520u>(&func_8006F520)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8006F520_20BE = func_8006F520_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8006F520_20BE);
        r4 = static_cast<uint32_t>(regargs_result_8006F520_20BE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8006F520u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = (r25 & 255);
    r28_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r28 = (r28_rot_0 & -4);
    r29 = (r24 + r28);
    r0 = 0;
    MemoryInline::FlatWrite32((r29 + 288), r0);
    r27 = MemoryInline::FlatRead32((r23 + 316));
}

loc_80268974:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(7))) {
        goto loc_80268988;
    }
}

loc_80268978:
{
    r0 = (r3 * 356);
    r3 = (r27 + r0);
    r26 = (r3 + 4);
    goto loc_80268998;
}

loc_80268988:
{
    r0 = (r3 + -7);
    r0 = (r0 * 356);
    r3 = (r27 + r0);
    r26 = (r3 + 2580);
}

loc_80268998:
{
    r30 = (r24 + r28);
    r0 = MemoryInline::FlatRead32((r30 + 156));
}

loc_802689A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-1))) {
        goto loc_80268A20;
    }
}

loc_802689A8:
{
    r3 = r24;
    r4 = r26;
    r5 = (r25 & 255);
    ctx->lr = 0x802689B8u;
    if constexpr (KnownRegArgsCpuCall<0x80268750u>(&func_80268750)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[19] = r19;
        ctx->gpr[20] = r20;
        ctx->gpr[21] = r21;
        ctx->gpr[22] = r22;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        const auto regargs_result_80268750_2944 = func_80268750_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80268750_2944);
        r4 = static_cast<uint32_t>(regargs_result_80268750_2944 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        r19 = ctx->gpr[19];
        r20 = ctx->gpr[20];
        r21 = ctx->gpr[21];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
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
        ctx->gpr[19] = r19;
        ctx->gpr[20] = r20;
        ctx->gpr[21] = r21;
        ctx->gpr[22] = r22;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        InvokeDirectCpu<0x80268750u>(ctx);
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
        r13 = ctx->gpr[13];
        r19 = ctx->gpr[19];
        r20 = ctx->gpr[20];
        r21 = ctx->gpr[21];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r21 = -1;
    r3 = r30;
    MemoryInline::FlatWrite32((r3 + 200), r21);
    MemoryInline::FlatWrite32((r3 + 244), r21);
    r0 = (r25 & 255);
}

loc_802689D0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(7))) {
        goto loc_80268A20;
    }
}

loc_802689D4:
{
    r0 = MemoryInline::FlatRead32((r24 + 188));
}

loc_802689DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-1))) {
        goto loc_802689F8;
    }
}

loc_802689E0:
{
    r3 = r24;
    r4 = (r27 + 2936);
    r5 = 8;
    ctx->lr = 0x802689F0u;
    if constexpr (KnownRegArgsCpuCall<0x80268750u>(&func_80268750)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[19] = r19;
        ctx->gpr[20] = r20;
        ctx->gpr[21] = r21;
        ctx->gpr[22] = r22;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        const auto regargs_result_80268750_37C9 = func_80268750_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80268750_37C9);
        r4 = static_cast<uint32_t>(regargs_result_80268750_37C9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        r19 = ctx->gpr[19];
        r20 = ctx->gpr[20];
        r21 = ctx->gpr[21];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
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
        ctx->gpr[19] = r19;
        ctx->gpr[20] = r20;
        ctx->gpr[21] = r21;
        ctx->gpr[22] = r22;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        InvokeDirectCpu<0x80268750u>(ctx);
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
        r13 = ctx->gpr[13];
        r19 = ctx->gpr[19];
        r20 = ctx->gpr[20];
        r21 = ctx->gpr[21];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    MemoryInline::FlatWrite32((r24 + 232), r21);
    MemoryInline::FlatWrite32((r24 + 276), r21);
}

loc_802689F8:
{
    r0 = MemoryInline::FlatRead32((r24 + 192));
}

loc_80268A00:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-1))) {
        goto loc_80268A20;
    }
}

loc_80268A04:
{
    r3 = r24;
    r4 = (r27 + 3292);
    r5 = 9;
    ctx->lr = 0x80268A14u;
    if constexpr (KnownRegArgsCpuCall<0x80268750u>(&func_80268750)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[19] = r19;
        ctx->gpr[20] = r20;
        ctx->gpr[21] = r21;
        ctx->gpr[22] = r22;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        const auto regargs_result_80268750_459D = func_80268750_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80268750_459D);
        r4 = static_cast<uint32_t>(regargs_result_80268750_459D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        r19 = ctx->gpr[19];
        r20 = ctx->gpr[20];
        r21 = ctx->gpr[21];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
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
        ctx->gpr[19] = r19;
        ctx->gpr[20] = r20;
        ctx->gpr[21] = r21;
        ctx->gpr[22] = r22;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        InvokeDirectCpu<0x80268750u>(ctx);
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
        r13 = ctx->gpr[13];
        r19 = ctx->gpr[19];
        r20 = ctx->gpr[20];
        r21 = ctx->gpr[21];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r0 = -1;
    MemoryInline::FlatWrite32((r24 + 236), r0);
    MemoryInline::FlatWrite32((r24 + 280), r0);
}

loc_80268A20:
{
    r31 = (r24 + r28);
    r0 = MemoryInline::FlatRead32((r31 + 24));
}

loc_80268A2C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-1))) {
        goto loc_80268A88;
    }
}

loc_80268A30:
{
    r0 = -1;
    MemoryInline::FlatWrite32((r30 + 156), r0);
    MemoryInline::FlatWrite32((r31 + 200), r0);
    MemoryInline::FlatWrite32((r31 + 244), r0);
    r4 = (r25 & 255);
}

loc_80268A48:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(7))) {
        goto loc_80268A68;
    }
}

loc_80268A4C:
{
    r3 = r27;
    ctx->lr = 0x80268A54u;
    if constexpr (KnownRegArgsCpuCall<0x8022315Cu>(&func_8022315C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_8022315C_532A = func_8022315C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8022315C_532A);
        r4 = static_cast<uint32_t>(regargs_result_8022315C_532A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x8022315Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
    }
    r4 = 0;
    r0 = (r25 & 255);
    r3 = (r27 + r0);
    MemoryInline::FlatWrite8((r3 + 2496), static_cast<uint8_t>(r4));
    goto loc_80268CBC;
}

loc_80268A68:
{
    r21 = (r4 + -7);
    r3 = r27;
    r4 = r21;
    ctx->lr = 0x80268A78u;
    if constexpr (KnownRegArgsCpuCall<0x80223210u>(&func_80223210)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80223210_5809 = func_80223210_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80223210_5809);
        r4 = static_cast<uint32_t>(regargs_result_80223210_5809 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80223210u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
    }
    r0 = 0;
    r3 = (r27 + r21);
    MemoryInline::FlatWrite8((r3 + 2503), static_cast<uint8_t>(r0));
    goto loc_80268CBC;
}

loc_80268A88:
{
    r3 = MemoryInline::FlatRead32((r13 + -17144));
    r0 = MemoryInline::FlatRead8((r23 + 8));
    r0 = (r0 * 44);
    r0 = (r3 + r0);
    r3 = (r0 + r28);
    r0 = MemoryInline::FlatRead32((r3 + 28));
    MemoryInline::FlatWrite32((r31 + 200), r0);
    r0 = MemoryInline::FlatRead32((r31 + 24));
    MemoryInline::FlatWrite32((r30 + 156), r0);
    r3 = (r25 & 255);
}

loc_80268AB4:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(7))) {
        goto loc_80268BA0;
    }
}

loc_80268AB8:
{
    r3 = MemoryInline::FlatRead32((r31 + 68));
    // inline leaf 0x800D5168 (13 guest instruction(s))
}

loc_inl1_0x800D5168:
{
}

loc_inl1_0x800D516C:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_inl1_0x800D5178;
    }
}

loc_inl1_0x800D5170:
{
    r3 = 0;
    goto loc_inl1_cont_800D5168;
}

loc_inl1_0x800D5178:
{
}

loc_inl1_0x800D517C:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(1024))) {
        goto loc_inl1_0x800D5188;
    }
}

loc_inl1_0x800D5180:
{
    r3 = 0;
    goto loc_inl1_cont_800D5168;
}

loc_inl1_0x800D5188:
{
    r4 = MemoryInline::FlatRead32((r13 + -17584));
    r0 = (r3 * 76);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 12400));
}

loc_inl1_cont_800D5168:
{
    // end of inlined leaf 0x800D5168
    r19 = r3;
    r3 = MemoryInline::FlatRead32((r31 + 200));
    // inline leaf 0x800D5168 (13 guest instruction(s))
}

loc_inl2_0x800D5168:
{
}

loc_inl2_0x800D516C:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_inl2_0x800D5178;
    }
}

loc_inl2_0x800D5170:
{
    r3 = 0;
    goto loc_inl2_cont_800D5168;
}

loc_inl2_0x800D5178:
{
}

loc_inl2_0x800D517C:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(1024))) {
        goto loc_inl2_0x800D5188;
    }
}

loc_inl2_0x800D5180:
{
    r3 = 0;
    goto loc_inl2_cont_800D5168;
}

loc_inl2_0x800D5188:
{
    r4 = MemoryInline::FlatRead32((r13 + -17584));
    r0 = (r3 * 76);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 12400));
}

loc_inl2_cont_800D5168:
{
    // end of inlined leaf 0x800D5168
    r20 = r3;
}

loc_80268AD4:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r19))) {
        goto loc_80268B0C;
    }
}

loc_80268AD8:
{
    r0 = (r25 & 255);
    r21_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r21 = (r21_rot_1 & -2);
    r4 = 0x805C0000u;
    r22 = (r4 + 26136);
    r4 = r19;
    addr_lhax_80268AEC_loc_0 = (r22 + r21);
    r0 = MemoryInline::FlatRead16(addr_lhax_80268AEC_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r5 = (r0 * 10240);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r3 = r19;
    r4 = 0;
    addr_lhax_80268B00_loc_0 = (r22 + r21);
    r0 = MemoryInline::FlatRead16(addr_lhax_80268B00_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r5 = (r0 * 10240);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80268B0C:
{
    r3 = MemoryInline::FlatRead8((r23 + 20));
    r4 = (r25 & 255);
    r5 = MemoryInline::FlatRead32((r31 + 24));
    ctx->lr = 0x80268B1Cu;
    if constexpr (KnownRegArgsCpuCall<0x80268550u>(&func_80268550)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        const auto regargs_result_80268550_69DB = func_80268550_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80268550_69DB);
        r4 = static_cast<uint32_t>(regargs_result_80268550_69DB >> 32);
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
        InvokeDirectCpu<0x80268550u>(ctx);
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
    r4 = r3;
    r3 = (r1 + 32);
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_8045FBD4_712B = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_712B;
        r0 = ctx->gpr[0];
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
        InvokeDirectCpu<0x8045FBD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
    r3 = (r1 + 32);
    r4 = r20;
    ctx->lr = 0x80268B34u;
    if constexpr (KnownRegArgsCpuCall<0x800D5758u>(&func_800D5758)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_800D5758_7506 = func_800D5758_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800D5758_7506);
        r4 = static_cast<uint32_t>(regargs_result_800D5758_7506 >> 32);
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
        InvokeDirectCpu<0x800D5758u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
    r4 = (r24 + r28);
    MemoryInline::FlatWrite32((r4 + 244), r3);
    r3 = r27;
    r4 = (r25 & 255);
    ctx->lr = 0x80268B48u;
    if constexpr (KnownRegArgsCpuCall<0x80223D50u>(&func_80223D50)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        const auto regargs_result_80223D50_7A30 = func_80223D50_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80223D50_7A30);
        r4 = static_cast<uint32_t>(regargs_result_80223D50_7A30 >> 32);
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
        InvokeDirectCpu<0x80223D50u>(ctx);
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
    r3 = MemoryInline::FlatRead32((r26 + 268));
}

loc_80268B50:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80268B5C;
    }
}

loc_80268B54:
{
    r0 = 4;
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
}

loc_80268B5C:
{
    r4 = (r25 & 255);
    r3 = (r27 + r4);
    r0 = (r3 + 2496);
    MemoryInline::FlatWrite32((r29 + 288), r0);
}

loc_80268B70:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(4))) {
        goto loc_80268CBC;
    }
}

loc_80268B74:
{
    r0 = MemoryInline::FlatRead32((r24 + 180));
}

loc_80268B7C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-1))) {
        goto loc_80268B88;
    }
}

loc_80268B80:
{
    r3 = r27;
    ctx->lr = 0x80268B88u;
    if constexpr (KnownRegArgsCpuCall<0x80223C30u>(&func_80223C30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        const auto regargs_result_80223C30_849F = func_80223C30_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80223C30_849F);
        r4 = static_cast<uint32_t>(regargs_result_80223C30_849F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x80223C30u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
    }
}

loc_80268B88:
{
    r0 = MemoryInline::FlatRead32((r24 + 176));
}

loc_80268B90:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-1))) {
        goto loc_80268CBC;
    }
}

loc_80268B94:
{
    r3 = r27;
    ctx->lr = 0x80268B9Cu;
    if constexpr (KnownRegArgsCpuCall<0x80223B40u>(&func_80223B40)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        const auto regargs_result_80223B40_8A66 = func_80223B40_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80223B40_8A66);
        r4 = static_cast<uint32_t>(regargs_result_80223B40_8A66 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x80223B40u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
    }
    goto loc_80268CBC;
}

loc_80268BA0:
{
    r0 = MemoryInline::FlatRead32((r31 + 24));
    r0 = (r0 & -16777216);
    r19_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r19 = (r19_rot_1 & 255);
    r3 = (r3 + -7);
    r0 = (r19 + -4);
}

loc_80268BB8:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_80268BF8;
    }
}

loc_80268BBC:
{
}

loc_80268BC0:
{
    if ((static_cast<int32_t>(r19) == static_cast<int32_t>(1))) {
        goto loc_80268BD0;
    }
}

loc_80268BC4:
{
}

loc_80268BC8:
{
    if ((static_cast<int32_t>(r19) == static_cast<int32_t>(3))) {
        goto loc_80268BE4;
    }
}

loc_80268BCC:
{
    goto loc_80268C08;
}

loc_80268BD0:
{
}

loc_80268BD4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80268BDC;
    }
}

loc_80268BD8:
{
    goto loc_80268C08;
}

loc_80268BDC:
{
    r19 = 9;
    goto loc_80268C08;
}

loc_80268BE4:
{
}

loc_80268BE8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80268BF0;
    }
}

loc_80268BEC:
{
    goto loc_80268C08;
}

loc_80268BF0:
{
    r19 = 10;
    goto loc_80268C08;
}

loc_80268BF8:
{
}

loc_80268BFC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80268C04;
    }
}

loc_80268C00:
{
    goto loc_80268C08;
}

loc_80268C04:
{
    r19 = (r3 + 10);
}

loc_80268C08:
{
    r3 = (r24 + r28);
    r3 = MemoryInline::FlatRead32((r3 + 68));
    // inline leaf 0x800D5168 (13 guest instruction(s))
}

loc_inl3_0x800D5168:
{
}

loc_inl3_0x800D516C:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_inl3_0x800D5178;
    }
}

loc_inl3_0x800D5170:
{
    r3 = 0;
    goto loc_inl3_cont_800D5168;
}

loc_inl3_0x800D5178:
{
}

loc_inl3_0x800D517C:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(1024))) {
        goto loc_inl3_0x800D5188;
    }
}

loc_inl3_0x800D5180:
{
    r3 = 0;
    goto loc_inl3_cont_800D5168;
}

loc_inl3_0x800D5188:
{
    r4 = MemoryInline::FlatRead32((r13 + -17584));
    r0 = (r3 * 76);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 12400));
}

loc_inl3_cont_800D5168:
{
    // end of inlined leaf 0x800D5168
    r22 = r3;
    r3 = MemoryInline::FlatRead32((r31 + 200));
    // inline leaf 0x800D5168 (13 guest instruction(s))
}

loc_inl4_0x800D5168:
{
}

loc_inl4_0x800D516C:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_inl4_0x800D5178;
    }
}

loc_inl4_0x800D5170:
{
    r3 = 0;
    goto loc_inl4_cont_800D5168;
}

loc_inl4_0x800D5178:
{
}

loc_inl4_0x800D517C:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(1024))) {
        goto loc_inl4_0x800D5188;
    }
}

loc_inl4_0x800D5180:
{
    r3 = 0;
    goto loc_inl4_cont_800D5168;
}

loc_inl4_0x800D5188:
{
    r4 = MemoryInline::FlatRead32((r13 + -17584));
    r0 = (r3 * 76);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 12400));
}

loc_inl4_cont_800D5168:
{
    // end of inlined leaf 0x800D5168
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r19), static_cast<uint32_t>(1));
    r6 = (r6_rot_1 & -2);
    r4 = 0x805C0000u;
    r4 = (r4 + 26180);
    addr_lhax_80268C2C_loc_0 = (r4 + r6);
    r0 = MemoryInline::FlatRead16(addr_lhax_80268C2C_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 * 20480);
    r4 = (r22 + r0);
    r21 = (r3 + r0);
}

loc_80268C40:
{
    if ((static_cast<uint32_t>(r21) == static_cast<uint32_t>(r4))) {
        goto loc_80268C5C;
    }
}

loc_80268C44:
{
    r3 = r21;
    r5 = 0x805C0000u;
    r5 = (r5 + 26152);
    addr_lhax_80268C50_loc_0 = (r5 + r6);
    r0 = MemoryInline::FlatRead16(addr_lhax_80268C50_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r5 = (r0 * 20480);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80268C5C:
{
    r3 = (r25 & 255);
    r4 = MemoryInline::FlatRead32((r31 + 24));
    ctx->lr = 0x80268C68u;
    if constexpr (KnownRegArgsCpuCall<0x80268668u>(&func_80268668)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        const auto regargs_result_80268668_A04C = func_80268668_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80268668_A04C);
        r4 = static_cast<uint32_t>(regargs_result_80268668_A04C >> 32);
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
        InvokeDirectCpu<0x80268668u>(ctx);
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
    r4 = r3;
    r3 = (r1 + 32);
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_8045FBD4_A79C = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_A79C;
        r0 = ctx->gpr[0];
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
        InvokeDirectCpu<0x8045FBD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
    r3 = (r1 + 32);
    r4 = r21;
    ctx->lr = 0x80268C80u;
    if constexpr (KnownRegArgsCpuCall<0x800D5758u>(&func_800D5758)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_800D5758_AB77 = func_800D5758_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800D5758_AB77);
        r4 = static_cast<uint32_t>(regargs_result_800D5758_AB77 >> 32);
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
        InvokeDirectCpu<0x800D5758u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
    r4 = (r24 + r28);
    MemoryInline::FlatWrite32((r4 + 244), r3);
    r5 = (r25 & 255);
    r21 = (r5 + -7);
    r3 = r27;
    r4 = (r21 & 255);
    ctx->lr = 0x80268C9Cu;
    if constexpr (KnownRegArgsCpuCall<0x80223F54u>(&func_80223F54)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        const auto regargs_result_80223F54_B0CE = func_80223F54_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80223F54_B0CE);
        r4 = static_cast<uint32_t>(regargs_result_80223F54_B0CE >> 32);
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
        InvokeDirectCpu<0x80223F54u>(ctx);
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
    r3 = MemoryInline::FlatRead32((r26 + 268));
}

loc_80268CA4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80268CB0;
    }
}

loc_80268CA8:
{
    r0 = 4;
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
}

loc_80268CB0:
{
    r3 = (r27 + r21);
    r0 = (r3 + 2503);
    MemoryInline::FlatWrite32((r29 + 288), r0);
}

loc_80268CBC:
{
    r0 = (r25 & 255);
}

loc_80268CC4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80268CD0;
    }
}

loc_80268CC8:
{
}

loc_80268CCC:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_80268CEC;
    }
}

loc_80268CD0:
{
    r0 = (r25 & 255);
    r3 = (r24 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 11));
}

loc_80268CE0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80268CEC;
    }
}

loc_80268CE4:
{
    r3 = r27;
    ctx->lr = 0x80268CECu;
    if constexpr (KnownRegArgsCpuCall<0x8022431Cu>(&func_8022431C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        const auto regargs_result_8022431C_BC48 = func_8022431C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8022431C_BC48);
        r4 = static_cast<uint32_t>(regargs_result_8022431C_BC48 >> 32);
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
        InvokeDirectCpu<0x8022431Cu>(ctx);
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

loc_80268CEC:
{
    r4 = (r25 & 255);
    r0 = (r4 + -4);
}

loc_80268CF8:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_80268D04;
    }
}

loc_80268CFC:
{
    r3 = r23;
    ctx->lr = 0x80268D04u;
    if constexpr (KnownRegArgsCpuCall<0x802ABF64u>(&func_802ABF64)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        const auto regargs_result_802ABF64_C494 = func_802ABF64_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_802ABF64_C494);
        r4 = static_cast<uint32_t>(regargs_result_802ABF64_C494 >> 32);
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
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x802ABF64u>(ctx);
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
    }
}

loc_80268D04:
{
    r5 = 0;
    r4 = (r25 & 255);
    r3 = (r24 + r4);
    MemoryInline::FlatWrite8((r3 + 11), static_cast<uint8_t>(r5));
    r0 = -1;
    MemoryInline::FlatWrite32((r31 + 24), r0);
    r3 = (r24 + r28);
    MemoryInline::FlatWrite32((r3 + 68), r0);
    MemoryInline::FlatWrite32((r3 + 112), r0);
    r0 = 8;
    r24_addr_0 = (r24 + r4);
    MemoryInline::FlatWrite8(r24_addr_0, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r13 + -17144));
    r3 = (r0 + r28);
    MemoryInline::FlatWrite32((r3 + 512), r5);
}

loc_80268D40:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(7))) {
        goto loc_80268E84;
    }
}

loc_80268D44:
{
}

loc_80268D48:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(5))) {
        goto loc_80268E84;
    }
}

loc_80268D4C:
{
    r0 = MemoryInline::FlatRead32((r30 + 156));
}

loc_80268D54:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-1))) {
        goto loc_80268E84;
    }
}

loc_80268D58:
{
}

loc_80268D5C:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(6))) {
        goto loc_80268D78;
    }
}

loc_80268D60:
{
    r3 = MemoryInline::FlatRead8((r23 + 8));
    r4 = 0;
    // inline leaf 0x800474D4 (14 guest instruction(s))
}

loc_inl5_0x800474D4:
{
    r5 = 0x80670000u;
    r5 = (r5 + -18072);
}

loc_inl5_0x800474E0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl5_0x800474F8;
    }
}

loc_inl5_0x800474E4:
{
    r0 = (r3 & 255);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r5 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 1120));
    goto loc_inl5_cont_800474D4;
}

loc_inl5_0x800474F8:
{
    r0 = (r3 & 255);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = (r5 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 1160));
}

loc_inl5_cont_800474D4:
{
    // end of inlined leaf 0x800474D4
    r22 = r3;
    r21 = 128;
    goto loc_80268D8C;
}

loc_80268D78:
{
    r3 = MemoryInline::FlatRead8((r23 + 8));
    r4 = 1;
    // inline leaf 0x800474D4 (14 guest instruction(s))
}

loc_inl6_0x800474D4:
{
    r5 = 0x80670000u;
    r5 = (r5 + -18072);
}

loc_inl6_0x800474E0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl6_0x800474F8;
    }
}

loc_inl6_0x800474E4:
{
    r0 = (r3 & 255);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r3 = (r5 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 1120));
    goto loc_inl6_cont_800474D4;
}

loc_inl6_0x800474F8:
{
    r0 = (r3 & 255);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r3 = (r5 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 1160));
}

loc_inl6_cont_800474D4:
{
    // end of inlined leaf 0x800474D4
    r22 = r3;
    r21 = 128;
}

loc_80268D8C:
{
}

loc_80268D90:
{
    if ((static_cast<int32_t>(r22) == static_cast<int32_t>(0))) {
        goto loc_80268E84;
    }
}

loc_80268D94:
{
    r3 = (r1 + 24);
    r0 = (r25 & 255);
    r0 = (r0 * 356);
    r4 = (r27 + r0);
    r4 = (r4 + 280);
    ctx->lr = 0x80268DACu;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8007BA6Cu) && KnownTranslatedCpuCall<0x8007BA6Cu>::kAvailable && !KnownTranslatedCpuCall<0x8007BA6Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8007BA6Cu>()) {
        const auto state_free_result_8007BA6C_D786 = func_8007BA6C_statefree(r1, r3, r4, 0x80268DACu);
        r0 = static_cast<uint32_t>(state_free_result_8007BA6C_D786[0]);
        r1 = static_cast<uint32_t>(state_free_result_8007BA6C_D786[1]);
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
        InvokeDirectCpu<0x8007BA6Cu>(ctx);
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
        r13 = ctx->gpr[13];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r3 = (r1 + 24);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800988CCu>(ctx);
    r3 = ctx->gpr[3];
    r23 = r3;
    r19 = 0;
    goto loc_80268E7C;
}

loc_80268DC0:
{
    r3 = (r1 + 24);
    r4 = r19;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80098864u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    r3 = (r1 + 20);
    r4 = (r1 + 12);
    ctx->lr = 0x80268DDCu;
    if constexpr (KnownRegArgsCpuCall<0x8007892Cu>(&func_8007892C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8007892C_DE7B = func_8007892C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8007892C_DE7B;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8007892Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = (r1 + 20);
    ctx->lr = 0x80268DE4u;
    if constexpr (KnownRegArgsCpuCall<0x80223608u>(&func_80223608)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_80223608_E119 = func_80223608_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80223608_E119);
        r4 = static_cast<uint32_t>(regargs_result_80223608_E119 >> 32);
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
        InvokeDirectCpu<0x80223608u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
}

loc_80268DE8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80268E78;
    }
}

loc_80268DEC:
{
    r0 = (r25 & 255);
}

loc_80268DF4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(6))) {
        goto loc_80268E0C;
    }
}

loc_80268DF8:
{
    r4 = (r13 + -27884);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8045FD04u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80268E04:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80268E1C;
    }
}

loc_80268E08:
{
    goto loc_80268E78;
}

loc_80268E0C:
{
    r4 = (r13 + -28052);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8045FD04u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80268E18:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80268E78;
    }
}

loc_80268E1C:
{
    r3 = (r1 + 20);
    ctx->lr = 0x80268E24u;
    if constexpr (KnownRegArgsCpuCall<0x8006F4ECu>(&func_8006F4EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_8006F4EC_E8FA = func_8006F4EC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8006F4EC_E8FA);
        r4 = static_cast<uint32_t>(regargs_result_8006F4EC_E8FA >> 32);
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
        InvokeDirectCpu<0x8006F4ECu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    r3 = (r1 + 16);
    r4 = (r1 + 8);
    ctx->lr = 0x80268E34u;
    if constexpr (KnownRegArgsCpuCall<0x800786B4u>(&func_800786B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800786B4_ED1A = func_800786B4_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_800786B4_ED1A;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800786B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r20 = 0;
}

loc_80268E38:
{
    r3 = (r1 + 16);
    r4 = r20;
    ctx->lr = 0x80268E44u;
    if constexpr (KnownRegArgsCpuCall<0x800948D4u>(&func_800948D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800948D4_EFB6 = func_800948D4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800948D4_EFB6);
        r4 = static_cast<uint32_t>(regargs_result_800948D4_EFB6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x800948D4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_80268E48:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80268E6C;
    }
}

loc_80268E4C:
{
    r4 = r22;
    r5 = r21;
    r6 = r5;
    r7 = 6;
    r8 = 0;
    r9 = 0;
    r10 = 0;
    ctx->lr = 0x80268E6Cu;
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
    InvokeDirectCpu<0x804B86A0u>(ctx);
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
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
}

loc_80268E6C:
{
    r20 = (r20 + 1);
}

loc_80268E74:
{
    if ((static_cast<uint32_t>(r20) < static_cast<uint32_t>(8))) {
        goto loc_80268E38;
    }
}

loc_80268E78:
{
    r19 = (r19 + 1);
}

loc_80268E7C:
{
}

loc_80268E80:
{
    if ((static_cast<uint32_t>(r19) < static_cast<uint32_t>(r23))) {
        goto loc_80268DC0;
    }
}

loc_80268E84:
{
    r11 = (r1 + 352);
    // inline leaf 0x804574B4 (14 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -52), 0, 52u, true, false);
    // end of inlined leaf 0x804574B4
    r0 = MemoryInline::FlatRead32((r1 + 356));
    ctx->lr = r0;
    r1 = (r1 + 352);
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
    ctx->gpr[19] = r19_entry;
    ctx->gpr[20] = r20_entry;
    ctx->gpr[21] = r21_entry;
    ctx->gpr[22] = r22_entry;
    ctx->gpr[23] = r23_entry;
    ctx->gpr[24] = r24_entry;
    ctx->gpr[25] = r25_entry;
    ctx->gpr[26] = r26_entry;
    ctx->gpr[27] = r27_entry;
    ctx->gpr[28] = r28_entry;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x0007FFFF gpr_return=0x00000018 fpr_read=0xF0003FFF fpr_write=0xF0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80268914 func_80268914 preserves=true fpr_mask=0x00000000
