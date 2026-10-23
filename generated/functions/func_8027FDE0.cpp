#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8027E3A8(CpuContext* ctx);
extern "C" uint64_t func_8027E3A8_ra28_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8027ED7C(CpuContext* ctx);
extern "C" uint64_t func_8027ED7C_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_8027FD44(CpuContext* ctx);
extern "C" uint64_t func_8027FD44_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint32_t func_8027FDE0_ra28_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = arg_r5;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8027FDE0;

loc_8027FDE0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = 0;
}

loc_8027FE00:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8027FE0C;
    }
}

loc_8027FE04:
{
    r3 = 0;
    goto loc_8027FE9C;
}

loc_8027FE0C:
{
    r0 = MemoryInline::FlatRead8(r3);
}

loc_8027FE14:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(11))) {
        goto loc_8027FE30;
    }
}

loc_8027FE18:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(6));
}

loc_8027FE1C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8027FE90;
    }
}

loc_8027FE20:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8027FE44;
    }
}

loc_8027FE24:
{
}

loc_8027FE28:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1))) {
        goto loc_8027FE60;
    }
}

loc_8027FE2C:
{
    goto loc_8027FE98;
}

loc_8027FE30:
{
}

loc_8027FE34:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(16))) {
        goto loc_8027FE98;
    }
}

loc_8027FE38:
{
}

loc_8027FE3C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(14))) {
        goto loc_8027FE44;
    }
}

loc_8027FE40:
{
    goto loc_8027FE54;
}

loc_8027FE44:
{
    r3 = r30;
    ctx->lr = 0x8027FE4Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8027ED10u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    r31 = MemoryInline::FlatRead8((r3 + 2));
    goto loc_8027FE98;
}

loc_8027FE54:
{
    ctx->lr = 0x8027FE58u;
    if constexpr (KnownRegArgsCpuCall<0x8027ED7Cu>(&func_8027ED7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027ED7C_B9E = func_8027ED7C_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8027ED7C_B9E);
        r4 = static_cast<uint32_t>(regargs_result_8027ED7C_B9E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8027ED7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r31 = MemoryInline::FlatRead8((r3 + 2));
    goto loc_8027FE98;
}

loc_8027FE60:
{
    ctx->lr = 0x8027FE64u;
    if constexpr (KnownRegArgsCpuCall<0x8027E3A8u>(&func_8027E3A8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8027E3A8_ED9 = func_8027E3A8_ra28_0_18_0(ctx, r3, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027E3A8_ED9);
        r4 = static_cast<uint32_t>(regargs_result_8027E3A8_ED9 >> 32);
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
        InvokeDirectCpu<0x8027E3A8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r31 = MemoryInline::FlatRead8((r3 + 7));
    r3 = r30;
    ctx->lr = 0x8027FE70u;
    if constexpr (KnownRegArgsCpuCall<0x8027FD44u>(&func_8027FD44)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8027FD44_128F = func_8027FD44_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027FD44_128F);
        r4 = static_cast<uint32_t>(regargs_result_8027FD44_128F >> 32);
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
        InvokeDirectCpu<0x8027FD44u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
}

loc_8027FE74:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8027FE98;
    }
}

loc_8027FE78:
{
    r31 = (r31 + 3);
    r0 = (r31 & 255);
}

loc_8027FE84:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(6))) {
        goto loc_8027FE98;
    }
}

loc_8027FE88:
{
    r31 = 6;
    goto loc_8027FE98;
}

loc_8027FE90:
{
    ctx->lr = 0x8027FE94u;
    if constexpr (KnownRegArgsCpuCall<0x8027E3A8u>(&func_8027E3A8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8027E3A8_17A3 = func_8027E3A8_ra28_0_18_0(ctx, r3, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027E3A8_17A3);
        r4 = static_cast<uint32_t>(regargs_result_8027E3A8_17A3 >> 32);
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
        InvokeDirectCpu<0x8027E3A8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r31 = MemoryInline::FlatRead8((r3 + 7));
}

loc_8027FE98:
{
    r3 = r31;
}

loc_8027FE9C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return r3;
}

}

extern "C" void func_8027FDE0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8027FDE0_ra28_0_8_0(ctx, ctx->gpr[3], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8027FDE0 func_8027FDE0 preserves=true fpr_mask=0x00000000
