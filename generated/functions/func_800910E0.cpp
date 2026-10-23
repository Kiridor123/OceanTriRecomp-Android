#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8009078C(CpuContext* ctx);
extern "C" uint64_t func_8009078C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_800910E0_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
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

    goto loc_800910E0;

loc_800910E0:
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

loc_80091108:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80091128;
    }
}

loc_8009110C:
{
    r3 = 0x80590000u;
    r3 = (r3 + 3776);
    r4 = 281;
    r5 = 0x80590000u;
    r5 = (r5 + 3800);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80091128u;
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

loc_80091128:
{
    r3 = r29;
    // inline leaf 0x80065914 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80065914
    r31 = r3;
    r0 = MemoryInline::FlatRead16((r3 + 68));
}

loc_8009113C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(r30))) {
        goto loc_80091154;
    }
}

loc_80091140:
{
    r3 = (r1 + 12);
    r4 = 0;
    ctx->lr = 0x8009114Cu;
    if constexpr (KnownRegArgsCpuCall<0x8009078Cu>(&func_8009078C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8009078C_B7C = func_8009078C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8009078C_B7C);
        r4 = static_cast<uint32_t>(regargs_result_8009078C_B7C >> 32);
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
        InvokeDirectCpu<0x8009078Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_80091288;
}

loc_80091154:
{
    r3 = r29;
    // inline leaf 0x80065914 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80065914
    r4 = r3;
    r3 = r29;
    r4 = MemoryInline::FlatRead32((r4 + 36));
    // inline leaf 0x800912A4 (7 guest instruction(s))
}

loc_inl3_0x800912A4:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_inl3_0x800912AC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl3_0x800912B8;
    }
}

loc_inl3_0x800912B0:
{
    r3 = (r0 + r4);
    goto loc_inl3_cont_800912A4;
}

loc_inl3_0x800912B8:
{
    r3 = 0;
}

loc_inl3_cont_800912A4:
{
    // end of inlined leaf 0x800912A4
    r6 = r3;
    r0 = (r30 * 92);
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

loc_8009119C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800911B4;
    }
}

loc_800911A0:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 2130706432);
}

loc_800911AC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800911B4;
    }
}

loc_800911B0:
{
    r11 = 0;
}

loc_800911B4:
{
}

loc_800911B8:
{
    if ((static_cast<int32_t>(r11) != static_cast<int32_t>(0))) {
        goto loc_800911D0;
    }
}

loc_800911BC:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 1879048192);
}

loc_800911C8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800911D0;
    }
}

loc_800911CC:
{
    r10 = 0;
}

loc_800911D0:
{
}

loc_800911D4:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_800911E8;
    }
}

loc_800911D8:
{
    r0 = (r12 + 1073741824);
}

loc_800911E0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800911E8;
    }
}

loc_800911E4:
{
    r9 = 0;
}

loc_800911E8:
{
}

loc_800911EC:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_80091204;
    }
}

loc_800911F0:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 1056964608);
}

loc_800911FC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80091204;
    }
}

loc_80091200:
{
    r8 = 0;
}

loc_80091204:
{
}

loc_80091208:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_80091220;
    }
}

loc_8009120C:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 805306368);
}

loc_80091218:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80091220;
    }
}

loc_8009121C:
{
    r7 = 0;
}

loc_80091220:
{
}

loc_80091224:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8009123C;
    }
}

loc_80091228:
{
    r3 = (r3 & -16384);
    r0 = (r3 + 536870912);
}

loc_80091234:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009123C;
    }
}

loc_80091238:
{
    r5 = 0;
}

loc_8009123C:
{
}

loc_80091240:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_80091260;
    }
}

loc_80091244:
{
    r3 = 0x80590000u;
    r3 = (r3 + 3776);
    r4 = 291;
    r5 = 0x80590000u;
    r5 = (r5 + 3832);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80091260u;
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

loc_80091260:
{
    r3 = (r1 + 8);
    r4 = MemoryInline::FlatRead32((r30 + 12));
    r0 = MemoryInline::FlatRead16((r31 + 68));
}

loc_80091270:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r0))) {
        goto loc_8009127C;
    }
}

loc_80091274:
{
    r4 = r30;
    goto loc_80091280;
}

loc_8009127C:
{
    r4 = 0;
}

loc_80091280:
{
    ctx->lr = 0x80091284u;
    if constexpr (KnownRegArgsCpuCall<0x8009078Cu>(&func_8009078C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8009078C_2038 = func_8009078C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8009078C_2038);
        r4 = static_cast<uint32_t>(regargs_result_8009078C_2038 >> 32);
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
        InvokeDirectCpu<0x8009078Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r3 = MemoryInline::FlatRead32(r3);
}

loc_80091288:
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

extern "C" void func_800910E0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800910E0_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00001FFB gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800910E0 func_800910E0 preserves=true fpr_mask=0x00000000
