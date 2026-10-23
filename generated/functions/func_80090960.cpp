#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80090108(CpuContext* ctx);
extern "C" uint64_t func_80090108_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80090960_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
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

    goto loc_80090960;

loc_80090960:
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

loc_80090988:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800909A8;
    }
}

loc_8009098C:
{
    r3 = 0x80590000u;
    r3 = (r3 + 3776);
    r4 = 122;
    r5 = 0x80590000u;
    r5 = (r5 + 3800);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800909A8u;
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

loc_800909A8:
{
    r3 = r29;
    // inline leaf 0x80065914 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80065914
    r31 = r3;
    r0 = MemoryInline::FlatRead16((r3 + 60));
}

loc_800909BC:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(r30))) {
        goto loc_800909D4;
    }
}

loc_800909C0:
{
    r3 = (r1 + 12);
    r4 = 0;
    ctx->lr = 0x800909CCu;
    if constexpr (KnownRegArgsCpuCall<0x80090108u>(&func_80090108)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80090108_B7C = func_80090108_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80090108_B7C);
        r4 = static_cast<uint32_t>(regargs_result_80090108_B7C >> 32);
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
        InvokeDirectCpu<0x80090108u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_80090B08;
}

loc_800909D4:
{
    r3 = r29;
    // inline leaf 0x80065914 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80065914
    r4 = r3;
    r3 = r29;
    r4 = MemoryInline::FlatRead32((r4 + 20));
    // inline leaf 0x80090B24 (7 guest instruction(s))
}

loc_inl3_0x80090B24:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_inl3_0x80090B2C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl3_0x80090B38;
    }
}

loc_inl3_0x80090B30:
{
    r3 = (r0 + r4);
    goto loc_inl3_cont_80090B24;
}

loc_inl3_0x80090B38:
{
    r3 = 0;
}

loc_inl3_cont_80090B24:
{
    // end of inlined leaf 0x80090B24
    r6 = r3;
    r0 = (r30 * 76);
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

loc_80090A1C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80090A34;
    }
}

loc_80090A20:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 2130706432);
}

loc_80090A2C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80090A34;
    }
}

loc_80090A30:
{
    r11 = 0;
}

loc_80090A34:
{
}

loc_80090A38:
{
    if ((static_cast<int32_t>(r11) != static_cast<int32_t>(0))) {
        goto loc_80090A50;
    }
}

loc_80090A3C:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 1879048192);
}

loc_80090A48:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80090A50;
    }
}

loc_80090A4C:
{
    r10 = 0;
}

loc_80090A50:
{
}

loc_80090A54:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_80090A68;
    }
}

loc_80090A58:
{
    r0 = (r12 + 1073741824);
}

loc_80090A60:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80090A68;
    }
}

loc_80090A64:
{
    r9 = 0;
}

loc_80090A68:
{
}

loc_80090A6C:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_80090A84;
    }
}

loc_80090A70:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 1056964608);
}

loc_80090A7C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80090A84;
    }
}

loc_80090A80:
{
    r8 = 0;
}

loc_80090A84:
{
}

loc_80090A88:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_80090AA0;
    }
}

loc_80090A8C:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 805306368);
}

loc_80090A98:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80090AA0;
    }
}

loc_80090A9C:
{
    r7 = 0;
}

loc_80090AA0:
{
}

loc_80090AA4:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_80090ABC;
    }
}

loc_80090AA8:
{
    r3 = (r3 & -16384);
    r0 = (r3 + 536870912);
}

loc_80090AB4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80090ABC;
    }
}

loc_80090AB8:
{
    r5 = 0;
}

loc_80090ABC:
{
}

loc_80090AC0:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_80090AE0;
    }
}

loc_80090AC4:
{
    r3 = 0x80590000u;
    r3 = (r3 + 3776);
    r4 = 132;
    r5 = 0x80590000u;
    r5 = (r5 + 3832);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80090AE0u;
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

loc_80090AE0:
{
    r3 = (r1 + 8);
    r4 = MemoryInline::FlatRead32((r30 + 12));
    r0 = MemoryInline::FlatRead16((r31 + 60));
}

loc_80090AF0:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r0))) {
        goto loc_80090AFC;
    }
}

loc_80090AF4:
{
    r4 = r30;
    goto loc_80090B00;
}

loc_80090AFC:
{
    r4 = 0;
}

loc_80090B00:
{
    ctx->lr = 0x80090B04u;
    if constexpr (KnownRegArgsCpuCall<0x80090108u>(&func_80090108)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80090108_2038 = func_80090108_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80090108_2038);
        r4 = static_cast<uint32_t>(regargs_result_80090108_2038 >> 32);
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
        InvokeDirectCpu<0x80090108u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r3 = MemoryInline::FlatRead32(r3);
}

loc_80090B08:
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

extern "C" void func_80090960(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80090960_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00001FFB gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80090960 func_80090960 preserves=true fpr_mask=0x00000000
