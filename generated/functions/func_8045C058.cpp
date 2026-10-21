#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8045C058_ra18_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, double arg_f1)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    PPC_FPR f1; f1.d = arg_f1;

    MKW_GUEST_ENTER(0x8045C058u);
    goto loc_8045C058;

loc_8045C058:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f1.d);
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r4 = (r3 & 2139095040);
    r0 = (r4 + -2139095040);
}

loc_8045C070:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8045C080;
    }
}

loc_8045C074:
{
}

loc_8045C078:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8045C098;
    }
}

loc_8045C07C:
{
    goto loc_8045C0AC;
}

loc_8045C080:
{
    r3 = (r3 & 8388607);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3 = (static_cast<int32_t>(r0) >> 31);
    r3 = (r3 + 2);
    goto loc_8045C0B0;
}

loc_8045C098:
{
    r0 = (r3 & 8388607);
}

loc_8045C09C:
{
    r3 = 3;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8045C0B0;
    }
}

loc_8045C0A4:
{
    r3 = 5;
    goto loc_8045C0B0;
}

loc_8045C0AC:
{
    r3 = 4;
}

loc_8045C0B0:
{
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8045C058(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8045C058_ra18_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000002 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8045C058 func_8045C058 preserves=true fpr_mask=0x00000000
