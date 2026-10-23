#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8027E3A8(CpuContext* ctx);
extern "C" uint64_t func_8027E3A8_ra28_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8027ED7C(CpuContext* ctx);
extern "C" uint64_t func_8027ED7C_ra8_0_18_0(CpuContext*, uint32_t);

extern "C" uint32_t func_8027F180_ra28_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = arg_r5;
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8027F180;

loc_8027F180:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
}

loc_8027F190:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8027F19C;
    }
}

loc_8027F194:
{
    r3 = 0;
    goto loc_8027F20C;
}

loc_8027F19C:
{
    r0 = MemoryInline::FlatRead8(r3);
}

loc_8027F1A4:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(11))) {
        goto loc_8027F1C0;
    }
}

loc_8027F1A8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(6));
}

loc_8027F1AC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8027F1F8;
    }
}

loc_8027F1B0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8027F1D4;
    }
}

loc_8027F1B4:
{
}

loc_8027F1B8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1))) {
        goto loc_8027F1EC;
    }
}

loc_8027F1BC:
{
    goto loc_8027F1FC;
}

loc_8027F1C0:
{
}

loc_8027F1C4:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(16))) {
        goto loc_8027F1FC;
    }
}

loc_8027F1C8:
{
}

loc_8027F1CC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(14))) {
        goto loc_8027F1D4;
    }
}

loc_8027F1D0:
{
    goto loc_8027F1E0;
}

loc_8027F1D4:
{
    ctx->lr = 0x8027F1D8u;
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
    r3 = MemoryInline::FlatRead8((r3 + 18));
    goto loc_8027F1FC;
}

loc_8027F1E0:
{
    ctx->lr = 0x8027F1E4u;
    if constexpr (KnownRegArgsCpuCall<0x8027ED7Cu>(&func_8027ED7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027ED7C_AA2 = func_8027ED7C_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8027ED7C_AA2);
        r4 = static_cast<uint32_t>(regargs_result_8027ED7C_AA2 >> 32);
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
    r3 = MemoryInline::FlatRead8((r3 + 17));
    goto loc_8027F1FC;
}

loc_8027F1EC:
{
    ctx->lr = 0x8027F1F0u;
    if constexpr (KnownRegArgsCpuCall<0x8027E3A8u>(&func_8027E3A8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8027E3A8_DDD = func_8027E3A8_ra28_0_18_0(ctx, r3, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027E3A8_DDD);
        r4 = static_cast<uint32_t>(regargs_result_8027E3A8_DDD >> 32);
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
    r3 = MemoryInline::FlatRead8((r3 + 13));
    goto loc_8027F1FC;
}

loc_8027F1F8:
{
    r3 = MemoryInline::FlatRead8((r3 + 1));
}

loc_8027F1FC:
{
    r0 = (r3 & 255);
}

loc_8027F204:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(3))) {
        goto loc_8027F20C;
    }
}

loc_8027F208:
{
    r3 = 0;
}

loc_8027F20C:
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

extern "C" void func_8027F180(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8027F180_ra28_0_8_0(ctx, ctx->gpr[3], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8027F180 func_8027F180 preserves=true fpr_mask=0x00000000
