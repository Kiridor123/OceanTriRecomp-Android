#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800E8090(CpuContext* ctx);
extern "C" uint64_t func_800E8090_ra8_0_18_0(CpuContext*, uint32_t);

extern "C" uint32_t func_800DFDB4_ra10_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = arg_r4;
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x800DFDB4u);
    goto loc_800DFDB4;

loc_800DFDB4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = MemoryInline::FlatRead32((r13 + -17576));
    r3 = (r3 + 196608);
    r0 = (r4 & 255);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3 = (r3 + r0);
    r31 = MemoryInline::FlatRead32((r3 + -27932));
}

loc_800DFDE0:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_800DFDEC;
    }
}

loc_800DFDE4:
{
    r3 = 0;
    goto loc_800DFE1C;
}

loc_800DFDEC:
{
    r0 = MemoryInline::FlatRead8(r31);
}

loc_800DFDF4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800DFE00;
    }
}

loc_800DFDF8:
{
    r3 = 0;
    goto loc_800DFE1C;
}

loc_800DFE00:
{
    r3 = MemoryInline::FlatRead32((r31 + 60));
    ctx->lr = 0x800DFE08u;
    if constexpr (KnownRegArgsCpuCall<0x800E8090u>(&func_800E8090)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800E8090_68D = func_800E8090_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_800E8090_68D);
        r4 = static_cast<uint32_t>(regargs_result_800E8090_68D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800E8090u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_800DFE0C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800DFE18;
    }
}

loc_800DFE10:
{
    r3 = r31;
    goto loc_800DFE1C;
}

loc_800DFE18:
{
    r3 = 0;
}

loc_800DFE1C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    return r4;
}

}

extern "C" void func_800DFDB4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_800DFDB4_ra10_0_10_0(ctx, ctx->gpr[4]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00002013 gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800DFDB4 func_800DFDB4 preserves=true fpr_mask=0x00000000
