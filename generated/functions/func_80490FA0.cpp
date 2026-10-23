#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8047B230(CpuContext* ctx);
extern "C" uint64_t func_8047B230_ra48_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8049162C(CpuContext* ctx);
extern "C" uint64_t func_8049162C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_80490FA0_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t cr6_0 = 0;
    uint32_t r30_addr_0 = 0;
    uint32_t r30_addr_1 = 0;
    uint32_t r30_addr_2 = 0;
    uint32_t r30_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
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

    goto loc_80490FA0;

loc_80490FA0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r30 = 0x80740000u;
    r27 = r3;
    r30 = (r30 + -6152);
    r0 = MemoryInline::FlatRead8((r30 + 1024));
    SetCRResident(cr, xer, 6, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80490FC8:
{
    if (((cr & 0x00000020u) == 0)) {
        goto loc_80490FD4;
    }
}

loc_80490FCC:
{
    r3 = 1;
    goto loc_80491050;
}

loc_80490FD4:
{
    SetCRResident(cr, xer, 1, static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
}

loc_80490FD8:
{
    if (((cr & 0x04000000u) != 0)) {
        goto loc_80490FF0;
    }
}

loc_80490FDC:
{
    r28 = (r3 * 52);
    r30_addr_1 = (r30 + r28);
    r0 = MemoryInline::FlatRead8(r30_addr_1);
    r29 = (r30 + r28);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80490FEC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80490FF8;
    }
}

loc_80490FF0:
{
    r3 = 5;
    goto loc_80491050;
}

loc_80490FF8:
{
    if (((cr & 0x00000020u) != 0)) {
        goto loc_8049102C;
    }
}

loc_80490FFC:
{
    if (((cr & 0x04000000u) != 0)) {
        goto loc_8049102C;
    }
}

loc_80491000:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8049102C;
    }
}

loc_80491004:
{
    r31 = 1;
    r3 = (r29 + 28);
    MemoryInline::FlatWrite8((r29 + 12), static_cast<uint8_t>(r31));
    if constexpr (KnownRegArgsCpuCall<0x8047B230u>(&func_8047B230)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_8047B230_D7A = func_8047B230_ra48_0_18_0(ctx, r3, r6);
        r3 = static_cast<uint32_t>(regargs_result_8047B230_D7A);
        r4 = static_cast<uint32_t>(regargs_result_8047B230_D7A >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x8047B230u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r0 = MemoryInline::FlatRead8((r29 + 10));
}

loc_8049101C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8049102C;
    }
}

loc_80491020:
{
    MemoryInline::FlatWrite8((r29 + 12), static_cast<uint8_t>(r31));
    r3 = r27;
    ctx->lr = 0x8049102Cu;
    if constexpr (KnownRegArgsCpuCall<0x8049162Cu>(&func_8049162C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_8049162C_1229 = func_8049162C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8049162C_1229);
        r4 = static_cast<uint32_t>(regargs_result_8049162C_1229 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        InvokeDirectCpu<0x8049162Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
}

loc_8049102C:
{
    r0 = 0;
    r3 = 0x80740000u;
    r3 = (r3 + -6152);
    MemoryInline::FlatWrite8(r29, static_cast<uint8_t>(r0));
    r4 = (r3 + r28);
    MemoryInline::FlatWrite8((r4 + 16), static_cast<uint8_t>(r0));
    r3 = 0;
    MemoryInline::FlatWrite16((r4 + 22), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r4 + 20), static_cast<uint16_t>(r0));
}

loc_80491050:
{
    r11 = (r1 + 32);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
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

extern "C" void func_80490FA0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80490FA0_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80490FA0 func_80490FA0 preserves=true fpr_mask=0x00000000
