#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804F56D0(CpuContext* ctx);
extern "C" uint64_t func_804F56D0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_804F6910_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r10_addr_0 = 0;
    uint32_t r11_rot_0 = 0;
    uint32_t r7_addr_0 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;

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
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;

    MKW_GUEST_ENTER(0x804F6910u);
    goto loc_804F6910;

loc_804F6910:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r7 = 0x80760000u;
    r8_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r8 = (r8_rot_0 & 1020);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r7 = (r7 + -10352);
    MemoryInline::FlatWriteRam32((r1 + 8), r5);
    r7_addr_0 = (r7 + r8);
    r8 = MemoryInline::FlatRead32(r7_addr_0);
    guest_range_0 = MemoryInline::ResolveRangeHost((r4 + 1), 0, 5u, true, false);
    r6 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r4 + 2));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r4 + 1));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(8));
    r0_mrot_0 = (r0_rot_0 & 65280);
    r0_mdest_0 = (r0 & -65281);
    r0 = (r0_mdest_0 | r0_mrot_0);
    r0 = (r0 & 40735);
}

loc_804F6940:
{
    MemoryInline::FlatWrite16(r5, static_cast<uint16_t>(r0));
    r5 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead8((r8 + 2241));
    MemoryInline::FlatWrite8((r5 + 40), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r8 + 2232));
}

loc_804F6958:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(2))) {
        goto loc_804F696C;
    }
}

loc_804F695C:
{
    r5 = MemoryInline::FlatRead32((r1 + 8));
    r0 = 0;
    MemoryInline::FlatWrite8((r5 + 41), static_cast<uint8_t>(r0));
    goto loc_804F6978;
}

loc_804F696C:
{
    r5 = MemoryInline::FlatRead32((r1 + 8));
    r0 = -4;
    MemoryInline::FlatWrite8((r5 + 41), static_cast<uint8_t>(r0));
}

loc_804F6978:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r4 + 1));
    r10 = 0x80760000u;
    r11_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r11 = (r11_rot_0 & 1020);
    r6 = (r4 + 6);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(25));
    r0 = (r0_rot_1 & 1);
    MemoryInline::FlatWrite32((r8 + 2120), r0);
    r10 = (r10 + -10352);
    r7 = 12;
    r5 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r4 + 3));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r4 + 1));
    r9_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r9 = (r9_rot_0 & -4);
    r10_addr_0 = (r10 + r11);
    r5 = MemoryInline::FlatRead32(r10_addr_0);
    r9 = (static_cast<int32_t>(static_cast<int16_t>(r9)));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_2 & 3);
    r9 = (r9 & -4);
    r11 = MemoryInline::FlatRead16((r5 + 2164));
    r11 = (r11 << 16);
    r11 = (static_cast<int32_t>(r11) >> 16);
    r10 = (static_cast<int32_t>(static_cast<int16_t>(r9)));
    r9 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r10 | r0);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r0 - r11);
    MemoryInline::FlatWrite16((r9 + 2), static_cast<uint16_t>(r0));
    r9 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r4 + 4));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r4 + 2));
    r9_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(2));
    r9 = (r9_rot_1 & -4);
    r11 = MemoryInline::FlatRead16((r5 + 2166));
    r11 = (r11 << 16);
    r11 = (static_cast<int32_t>(r11) >> 16);
    r9 = (static_cast<int32_t>(static_cast<int16_t>(r9)));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(28));
    r0 = (r0_rot_3 & 2);
    r10 = (r9 & -4);
    r9 = MemoryInline::FlatRead32((r1 + 8));
    r10 = (static_cast<int32_t>(static_cast<int16_t>(r10)));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r10 | r0);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r0 - r11);
    MemoryInline::FlatWrite16((r9 + 4), static_cast<uint16_t>(r0));
    r9 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r4 + 5));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r4 + 2));
    r4 = (r1 + 8);
    r9_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(2));
    r9 = (r9_rot_2 & -4);
    r10 = MemoryInline::FlatRead16((r5 + 2168));
    r10 = (r10 << 16);
    r10 = (static_cast<int32_t>(r10) >> 16);
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r9)));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_4 & 2);
    r9 = (r5 & -4);
    r5 = MemoryInline::FlatRead32((r1 + 8));
    r9 = (static_cast<int32_t>(static_cast<int16_t>(r9)));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r9 | r0);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r0 - r10);
    MemoryInline::FlatWrite16((r5 + 6), static_cast<uint16_t>(r0));
    r5 = MemoryInline::FlatRead8((r8 + 2251));
    ctx->lr = 0x804F6A4Cu;
    if constexpr (KnownRegArgsCpuCall<0x804F56D0u>(&func_804F56D0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        const auto regargs_result_804F56D0_1A48 = func_804F56D0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804F56D0_1A48);
        r4 = static_cast<uint32_t>(regargs_result_804F56D0_1A48 >> 32);
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
        InvokeDirectCpu<0x804F56D0u>(ctx);
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
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
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

extern "C" void func_804F6910(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804F6910_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000113F gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFF8003FF fpr_write=0xFF8003FF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804F6910 func_804F6910 preserves=true fpr_mask=0x00000000
