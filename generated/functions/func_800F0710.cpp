#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800CEB14(CpuContext* ctx);
extern "C" uint64_t func_800CEB14_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8045E54C(CpuContext* ctx);
extern "C" uint64_t func_8045E54C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_800F0710_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r22_addr_0 = 0;
    uint32_t r22_addr_1 = 0;
    uint32_t r22_addr_2 = 0;
    uint32_t r22_addr_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r7_addr_0 = 0;
    uint32_t r7_addr_1 = 0;
    uint32_t r7_addr_2 = 0;
    uint32_t r8_addr_0 = 0;
    uint32_t r8_addr_1 = 0;
    uint32_t r8_addr_10 = 0;
    uint32_t r8_addr_11 = 0;
    uint32_t r8_addr_12 = 0;
    uint32_t r8_addr_13 = 0;
    uint32_t r8_addr_14 = 0;
    uint32_t r8_addr_15 = 0;
    uint32_t r8_addr_16 = 0;
    uint32_t r8_addr_2 = 0;
    uint32_t r8_addr_3 = 0;
    uint32_t r8_addr_4 = 0;
    uint32_t r8_addr_5 = 0;
    uint32_t r8_addr_6 = 0;
    uint32_t r8_addr_7 = 0;
    uint32_t r8_addr_8 = 0;
    uint32_t r8_addr_9 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
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
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x800F0710u);
    goto loc_800F0710;

loc_800F0710:
{
    MemoryInline::FlatWriteRam32((r1 + -208), r1);
    r1 = (r1 + -208);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 212), r0);
    r11 = (r1 + 208);
    // inline leaf 0x8045746C (13 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -48), 0, 48u, false, true);
    // end of inlined leaf 0x8045746C
    r6 = 0;
    r5 = 0;
    r0 = 255;
    r3 = 2;
    ctr = r3;
}

loc_800F0738:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r13 + -17396), 0, 4u, true, false);
    r8 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r13 + -17396));
    r3 = (r6 + 65536);
    r7 = (r3 + -26908);
    r8_addr_2 = (r8 + r7);
    MemoryInline::FlatWrite8(r8_addr_2, static_cast<uint8_t>(r5));
    r8 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r13 + -17396));
    r7 = (r3 + -26907);
    r8_addr_3 = (r8 + r7);
    MemoryInline::FlatWrite8(r8_addr_3, static_cast<uint8_t>(r0));
    r8 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r13 + -17396));
    r7 = (r3 + -26906);
    r8_addr_4 = (r8 + r7);
    MemoryInline::FlatWrite8(r8_addr_4, static_cast<uint8_t>(r5));
    r8 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r13 + -17396));
    r7 = (r3 + -26905);
    r8_addr_5 = (r8 + r7);
    MemoryInline::FlatWrite8(r8_addr_5, static_cast<uint8_t>(r0));
    r8 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r13 + -17396));
    r7 = (r3 + -26904);
    r8_addr_6 = (r8 + r7);
    MemoryInline::FlatWrite8(r8_addr_6, static_cast<uint8_t>(r5));
    r8 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r13 + -17396));
    r7 = (r3 + -26903);
    r8_addr_7 = (r8 + r7);
    MemoryInline::FlatWrite8(r8_addr_7, static_cast<uint8_t>(r0));
    r8 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r13 + -17396));
    r7 = (r3 + -26902);
    r8_addr_8 = (r8 + r7);
    MemoryInline::FlatWrite8(r8_addr_8, static_cast<uint8_t>(r5));
    r8 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r13 + -17396));
    r7 = (r3 + -26901);
    r8_addr_9 = (r8 + r7);
    MemoryInline::FlatWrite8(r8_addr_9, static_cast<uint8_t>(r0));
    r8 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r13 + -17396));
    r7 = (r3 + -26900);
    r8_addr_10 = (r8 + r7);
    MemoryInline::FlatWrite8(r8_addr_10, static_cast<uint8_t>(r5));
    r8 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r13 + -17396));
    r7 = (r3 + -26899);
    r8_addr_11 = (r8 + r7);
    MemoryInline::FlatWrite8(r8_addr_11, static_cast<uint8_t>(r0));
    r8 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r13 + -17396));
    r7 = (r3 + -26898);
    r8_addr_12 = (r8 + r7);
    MemoryInline::FlatWrite8(r8_addr_12, static_cast<uint8_t>(r5));
    r8 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r13 + -17396));
    r7 = (r3 + -26897);
    r8_addr_13 = (r8 + r7);
    MemoryInline::FlatWrite8(r8_addr_13, static_cast<uint8_t>(r0));
    r8 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r13 + -17396));
    r7 = (r3 + -26896);
    r8_addr_14 = (r8 + r7);
    MemoryInline::FlatWrite8(r8_addr_14, static_cast<uint8_t>(r5));
    r8 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r13 + -17396));
    r7 = (r3 + -26895);
    r8_addr_15 = (r8 + r7);
    MemoryInline::FlatWrite8(r8_addr_15, static_cast<uint8_t>(r0));
    r8 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r13 + -17396));
    r7 = (r3 + -26894);
    r8_addr_16 = (r8 + r7);
    MemoryInline::FlatWrite8(r8_addr_16, static_cast<uint8_t>(r5));
    r7 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r13 + -17396));
    r3 = (r3 + -26893);
    r7_addr_2 = (r7 + r3);
    MemoryInline::FlatWrite8(r7_addr_2, static_cast<uint8_t>(r0));
    r6 = (r6 + 16);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800F0738;
    }
}

loc_800F0804:
{
    r0 = (r4 & 255);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3 = 0x80590000u;
    r3 = (r3 + 32700);
    r3_addr_0 = (r3 + r0);
    r27 = MemoryInline::FlatRead32(r3_addr_0);
}

loc_800F081C:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_800F092C;
    }
}

loc_800F0820:
{
    r28 = 0;
    r29 = 4;
    r31 = 0;
    r30 = 16;
    r20 = 1;
    r21 = 0x805A0000u;
    r3 = 0x805A0000u;
    r22 = (r3 + -28512);
    r23 = 0x800F0000u;
    r24 = 0;
    r25 = 0x805A0000u;
}

loc_800F084C:
{
    r4 = MemoryInline::FlatRead8(r27);
}

loc_800F0854:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(255))) {
        goto loc_800F092C;
    }
}

loc_800F0858:
{
    r26 = MemoryInline::FlatRead8((r27 + 1));
    r27 = (r27 + 2);
    r3 = MemoryInline::FlatRead32((r13 + -17396));
    r5 = (r31 + 65536);
    r0 = (r5 + -26908);
    r3_addr_2 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_2, static_cast<uint8_t>(r4));
    r4 = (r29 & 255);
    r3 = MemoryInline::FlatRead32((r13 + -17396));
    r0 = (r5 + -26907);
    r3_addr_3 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_3, static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam32((r1 + 12), r29);
    MemoryInline::FlatWriteRam32((r1 + 16), r29);
    r3 = r29;
    // inline leaf 0x800F0474 (14 guest instruction(s))
    r5 = 0;
    r4 = MemoryInline::FlatRead32((r13 + -17396));
    r0 = (r4 + 65536);
    r4 = (r0 + r3);
    MemoryInline::FlatWrite8((r4 + -26764), static_cast<uint8_t>(r5));
    r4 = MemoryInline::FlatRead32((r13 + -17396));
    r0 = (r4 + 65536);
    r4 = (r0 + r3);
    MemoryInline::FlatWrite8((r4 + -26957), static_cast<uint8_t>(r5));
    r4 = MemoryInline::FlatRead32((r13 + -17396));
    r0 = (r4 + 65536);
    r3 = (r0 + r3);
    MemoryInline::FlatWrite8((r3 + -27006), static_cast<uint8_t>(r5));
    // end of inlined leaf 0x800F0474
    r3 = MemoryInline::FlatRead32((r13 + -17396));
    r4 = (r3 + 65536);
    r3 = MemoryInline::FlatRead8((r4 + -26709));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r4 + -26709), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam32((r1 + 8), r20);
    r3 = (r1 + 24);
    r4 = (r21 + -26664);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r22_addr_2 = (r22 + r0);
    r5 = MemoryInline::FlatRead32(r22_addr_2);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800F08C0u;
    if constexpr (KnownRegArgsCpuCall<0x8045E54Cu>(&func_8045E54C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8045E54C_2507 = func_8045E54C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8045E54C_2507);
        r4 = static_cast<uint32_t>(regargs_result_8045E54C_2507 >> 32);
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
        ctr = ctx->ctr;
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8045E54Cu>(ctx);
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
        ctr = ctx->ctr;
    }
    r0 = MemoryInline::FlatRead32((r13 + -17396));
    r5 = (r0 + r30);
    r3 = (r1 + 24);
    r4 = MemoryInline::FlatRead32((r5 + 16));
    r5 = MemoryInline::FlatRead32((r5 + 212));
    r6 = (r23 + 660);
    r7 = 3;
    r8 = (r1 + 8);
    ctx->lr = 0x800F08E4u;
    if constexpr (KnownRegArgsCpuCall<0x800CEB14u>(&func_800CEB14)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_800CEB14_2E04 = func_800CEB14_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800CEB14_2E04);
        r4 = static_cast<uint32_t>(regargs_result_800CEB14_2E04 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800CEB14u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    MemoryInline::FlatWriteRam32((r1 + 8), r24);
    r0 = MemoryInline::FlatRead32((r13 + -17396));
    r5 = (r0 + r30);
    r3 = (r25 + -26472);
    r4 = MemoryInline::FlatRead32((r5 + 408));
    r5 = MemoryInline::FlatRead32((r5 + 604));
    r6 = (r23 + 660);
    r7 = 3;
    r8 = (r1 + 8);
    ctx->lr = 0x800F090Cu;
    if constexpr (KnownRegArgsCpuCall<0x800CEB14u>(&func_800CEB14)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_800CEB14_3496 = func_800CEB14_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800CEB14_3496);
        r4 = static_cast<uint32_t>(regargs_result_800CEB14_3496 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800CEB14u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r31 = (r31 + 2);
    r28 = (r28 + 1);
}

loc_800F0918:
{
    if ((static_cast<int32_t>(r28) >= static_cast<int32_t>(16))) {
        goto loc_800F092C;
    }
}

loc_800F091C:
{
    r30 = (r30 + 4);
    r29 = (r29 + 1);
}

loc_800F0928:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(20))) {
        goto loc_800F084C;
    }
}

loc_800F092C:
{
    r11 = (r1 + 208);
    // inline leaf 0x804574B8 (13 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -48), 0, 48u, true, false);
    // end of inlined leaf 0x804574B8
    r0 = MemoryInline::FlatRead32((r1 + 212));
    ctx->lr = r0;
    r1 = (r1 + 208);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800F0710(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800F0710_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000027FF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800F0710 func_800F0710 preserves=true fpr_mask=0x00000000
