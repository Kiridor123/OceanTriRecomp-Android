#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80398264_ra38_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;

    goto loc_80398264;

loc_80398264:
{
    r5 = 0;
    MemoryInline::FlatWrite16((r3 + 12324), static_cast<uint16_t>(r5));
    r4 = MemoryInline::FlatRead16((r3 + 12340));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite16((r3 + 12340), static_cast<uint16_t>(r0));
    r0 = (r0 & 65535);
}

loc_80398280:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(40))) {
        goto loc_80398288;
    }
}

loc_80398284:
{
    MemoryInline::FlatWrite16((r3 + 12340), static_cast<uint16_t>(r5));
}

loc_80398288:
{
    r4 = MemoryInline::FlatRead16((r3 + 12342));
}

loc_80398290:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(65535))) {
        goto loc_return;
    }
}

loc_80398294:
{
    r0 = (r4 + 1);
    MemoryInline::FlatWrite16((r3 + 12342), static_cast<uint16_t>(r0));
    r0 = (r0 & 65535);
}

loc_803982A4:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(12))) {
        goto loc_return;
    }
}

loc_803982A8:
{
    r4 = 65536;
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 12342), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return r4;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return r4;
}

}

extern "C" void func_80398264(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80398264_ra38_0_10_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000031 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80398264 func_80398264 preserves=true fpr_mask=0x00000000
