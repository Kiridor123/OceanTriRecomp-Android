#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8046AE0C(CpuContext* ctx);
extern "C" uint64_t func_8046AE0C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8046B074(CpuContext* ctx);
extern "C" uint64_t func_8046B074_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8046C7C4_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;

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
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8046C7C4;

loc_8046C7C4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
}

loc_8046C7D0:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = r6;
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(96))) {
        goto loc_8046C7E8;
    }
}

loc_8046C7E0:
{
    r3 = 1793;
    goto loc_8046C914;
}

loc_8046C7E8:
{
    r12 = 0x80610000u;
}

loc_8046C7F0:
{
    r12 = (r12 + 208);
    r0 = 0;
    r8 = MemoryInline::FlatRead32((r12 + 12));
    r11 = MemoryInline::FlatRead32(r12);
    r10 = MemoryInline::FlatRead32((r12 + 4));
    r9 = MemoryInline::FlatRead32((r12 + 8));
    MemoryInline::FlatWriteRam8((r12 + 13), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam32((r1 + 8), r11);
    MemoryInline::FlatWriteRam32((r1 + 12), r10);
    MemoryInline::FlatWriteRam32((r1 + 16), r9);
    MemoryInline::FlatWriteRam32((r1 + 20), r8);
    MemoryInline::FlatWrite32(r6, r0);
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(r4))) {
        goto loc_8046C8D0;
    }
}

loc_8046C824:
{
    r4 = (r4 - r3);
    r8 = 0x80700000u;
    r9 = (r4 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_8046C834:
{
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(2));
    r7 = (r7_rot_1 & -4);
    r8 = (r8 + -27328);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    MemoryInline::FlatWrite32(r6, r7);
    r3 = (r8 + r0);
    r4 = (r3 + 424);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8046C860;
    }
}

loc_8046C850:
{
    r3 = r5;
    r5 = r9;
    ctx->lr = 0x8046C85Cu;
    if constexpr (KnownRegArgsCpuCall<0x8046AE0Cu>(&func_8046AE0C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        const auto regargs_result_8046AE0C_D6C = func_8046AE0C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8046AE0C_D6C);
        r4 = static_cast<uint32_t>(regargs_result_8046AE0C_D6C >> 32);
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
        cr = ctx->cr;
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
        ctx->cr = cr;
        InvokeDirectCpu<0x8046AE0Cu>(ctx);
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
        cr = ctx->cr;
        xer = ctx->xer;
    }
    goto loc_8046C8D0;
}

loc_8046C860:
{
    r0 = (r8 + 492);
}

loc_8046C868:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(r0))) {
        goto loc_8046C88C;
    }
}

loc_8046C86C:
{
    r3 = (r4 + r7);
    r0 = (r8 + 488);
    r3 = (r3 + -4);
}

loc_8046C87C:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_8046C88C;
    }
}

loc_8046C880:
{
    r3 = 0x80700000u;
    r0 = 1;
    MemoryInline::FlatWriteRam8((r3 + -27704), static_cast<uint8_t>(r0));
}

loc_8046C88C:
{
    r3 = 0x80700000u;
    r3 = (r3 + -27328);
    r6 = (r3 + 632);
}

loc_8046C89C:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(r6))) {
        goto loc_8046C8C4;
    }
}

loc_8046C8A0:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = (r4 + r0);
    r0 = (r3 + -4);
}

loc_8046C8B0:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r6))) {
        goto loc_8046C8C4;
    }
}

loc_8046C8B4:
{
    r3 = 0x80700000u;
    r0 = 1;
    r3 = (r3 + -27704);
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r0));
}

loc_8046C8C4:
{
    r3 = r5;
    r5 = r9;
    ctx->lr = 0x8046C8D0u;
    if constexpr (KnownRegArgsCpuCall<0x8046B074u>(&func_8046B074)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        const auto regargs_result_8046B074_191D = func_8046B074_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8046B074_191D);
        r4 = static_cast<uint32_t>(regargs_result_8046B074_191D >> 32);
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
        cr = ctx->cr;
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
        ctx->cr = cr;
        InvokeDirectCpu<0x8046B074u>(ctx);
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
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_8046C8D0:
{
    r4 = 0x80610000u;
    r4 = (r4 + 208);
    r0 = MemoryInline::FlatRead8((r4 + 13));
}

loc_8046C8E0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8046C8F0;
    }
}

loc_8046C8E4:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r31, r0);
    r3 = 1794;
}

loc_8046C8F0:
{
    r6 = MemoryInline::FlatRead32((r1 + 8));
    r7 = 0x80610000u;
    MemoryInline::FlatWriteRam32((r7 + 208), r6);
    r7 = (r7 + 208);
    r5 = MemoryInline::FlatRead32((r1 + 12));
    r4 = MemoryInline::FlatRead32((r1 + 16));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    MemoryInline::FlatWriteRam32((r7 + 4), r5);
    MemoryInline::FlatWriteRam32((r7 + 8), r4);
    MemoryInline::FlatWriteRam32((r7 + 12), r0);
}

loc_8046C914:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
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
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8046C7C4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8046C7C4_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFB gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8046C7C4 func_8046C7C4 preserves=true fpr_mask=0x00000000
