#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800905B8(CpuContext* ctx);
extern "C" uint64_t func_800905B8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80090F00_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;

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
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x80090F00u);
    goto loc_80090F00;

loc_80090F00:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r30 = r4;
    // inline leaf 0x80065928 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x80065928
}

loc_80090F28:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80090F48;
    }
}

loc_80090F2C:
{
    r3 = 0x80590000u;
    r3 = (r3 + 3776);
    r4 = 241;
    r5 = 0x80590000u;
    r5 = (r5 + 3800);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80090F48u;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
}

loc_80090F48:
{
    r3 = r29;
    // inline leaf 0x80065914 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80065914
    r31 = r3;
    r0 = MemoryInline::FlatRead16((r3 + 66));
}

loc_80090F5C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(r30))) {
        goto loc_80090F74;
    }
}

loc_80090F60:
{
    r3 = (r1 + 12);
    r4 = 0;
    ctx->lr = 0x80090F6Cu;
    if constexpr (KnownRegArgsCpuCall<0x800905B8u>(&func_800905B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_800905B8_B34 = func_800905B8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800905B8_B34);
        r4 = static_cast<uint32_t>(regargs_result_800905B8_B34 >> 32);
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
        InvokeDirectCpu<0x800905B8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_800910A8;
}

loc_80090F74:
{
    r3 = r29;
    // inline leaf 0x80065914 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80065914
    r4 = r3;
    r3 = r29;
    r4 = MemoryInline::FlatRead32((r4 + 32));
    // inline leaf 0x800910C4 (7 guest instruction(s))
}

loc_inl3_0x800910C4:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_inl3_0x800910CC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl3_0x800910D8;
    }
}

loc_inl3_0x800910D0:
{
    r3 = (r0 + r4);
    goto loc_inl3_cont_800910C4;
}

loc_inl3_0x800910D8:
{
    r3 = 0;
}

loc_inl3_cont_800910C4:
{
    // end of inlined leaf 0x800910C4
    r6 = r3;
    r0 = (r30 * 40);
    r30 = (r3 + r0);
    r5 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r11 = 1;
    r12 = (r3 & -16777216);
    r0 = (r12 + -2147483648);
}

loc_80090FBC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80090FD4;
    }
}

loc_80090FC0:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 2130706432);
}

loc_80090FCC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80090FD4;
    }
}

loc_80090FD0:
{
    r11 = 0;
}

loc_80090FD4:
{
}

loc_80090FD8:
{
    if ((static_cast<int32_t>(r11) != static_cast<int32_t>(0))) {
        goto loc_80090FF0;
    }
}

loc_80090FDC:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 1879048192);
}

loc_80090FE8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80090FF0;
    }
}

loc_80090FEC:
{
    r10 = 0;
}

loc_80090FF0:
{
}

loc_80090FF4:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_80091008;
    }
}

loc_80090FF8:
{
    r0 = (r12 + 1073741824);
}

loc_80091000:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80091008;
    }
}

loc_80091004:
{
    r9 = 0;
}

loc_80091008:
{
}

loc_8009100C:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_80091024;
    }
}

loc_80091010:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 1056964608);
}

loc_8009101C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80091024;
    }
}

loc_80091020:
{
    r8 = 0;
}

loc_80091024:
{
}

loc_80091028:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_80091040;
    }
}

loc_8009102C:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 805306368);
}

loc_80091038:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80091040;
    }
}

loc_8009103C:
{
    r7 = 0;
}

loc_80091040:
{
}

loc_80091044:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8009105C;
    }
}

loc_80091048:
{
    r3 = (r3 & -16384);
    r0 = (r3 + 536870912);
}

loc_80091054:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009105C;
    }
}

loc_80091058:
{
    r5 = 0;
}

loc_8009105C:
{
}

loc_80091060:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_80091080;
    }
}

loc_80091064:
{
    r3 = 0x80590000u;
    r3 = (r3 + 3776);
    r4 = 251;
    r5 = 0x80590000u;
    r5 = (r5 + 3832);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80091080u;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
}

loc_80091080:
{
    r3 = (r1 + 8);
    r4 = MemoryInline::FlatRead32((r30 + 12));
    r0 = MemoryInline::FlatRead16((r31 + 66));
}

loc_80091090:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r0))) {
        goto loc_8009109C;
    }
}

loc_80091094:
{
    r4 = r30;
    goto loc_800910A0;
}

loc_8009109C:
{
    r4 = 0;
}

loc_800910A0:
{
    ctx->lr = 0x800910A4u;
    if constexpr (KnownRegArgsCpuCall<0x800905B8u>(&func_800905B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_800905B8_1EBA = func_800905B8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800905B8_1EBA);
        r4 = static_cast<uint32_t>(regargs_result_800905B8_1EBA >> 32);
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
        InvokeDirectCpu<0x800905B8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r3 = MemoryInline::FlatRead32(r3);
}

loc_800910A8:
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

extern "C" void func_80090F00(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80090F00_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00001FFB gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80090F00 func_80090F00 preserves=true fpr_mask=0x00000000
