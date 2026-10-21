#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8027E97C(CpuContext* ctx);
extern "C" uint64_t func_8027E97C_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_8004AB48_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x8004AB48u);
    goto loc_8004AB48;

loc_8004AB48:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r3 = 6;
    ctx->lr = 0x8004AB64u;
    if constexpr (KnownRegArgsCpuCall<0x8027E97Cu>(&func_8027E97C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8027E97C_499 = func_8027E97C_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8027E97C_499);
        r4 = static_cast<uint32_t>(regargs_result_8027E97C_499 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x8027E97Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r0 = MemoryInline::FlatRead8(r31);
}

loc_8004AB6C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(6))) {
        goto loc_8004ABC4;
    }
}

loc_8004AB70:
{
    r0 = MemoryInline::FlatRead16((r31 + 2));
}

loc_8004AB78:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r3))) {
        goto loc_8004ABC4;
    }
}

loc_8004AB7C:
{
    r4 = MemoryInline::FlatRead8((r31 + 1));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(3));
}

loc_8004AB84:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8004ABC4;
    }
}

loc_8004AB88:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8004ABDC;
    }
}

loc_8004AB8C:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r3 = (r31 + r0);
    r0 = MemoryInline::FlatRead16((r3 + 6));
}

loc_8004AB9C:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(206))) {
        goto loc_8004ABC4;
    }
}

loc_8004ABA0:
{
    r0 = (r4 + 1);
    r0 = (r0 & 65535);
}

loc_8004ABAC:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(3))) {
        goto loc_8004ABDC;
    }
}

loc_8004ABB0:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    r3 = (r31 + r0);
    r0 = MemoryInline::FlatRead16((r3 + 6));
}

loc_8004ABC0:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(206))) {
        goto loc_8004ABDC;
    }
}

loc_8004ABC4:
{
    r3 = r31;
    r4 = 0;
    r5 = 12;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r0 = 6;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
}

loc_8004ABDC:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8004AB48(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8004AB48_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8004AB48 func_8004AB48 preserves=true fpr_mask=0x00000000
