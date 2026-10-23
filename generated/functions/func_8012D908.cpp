#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8012D908_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;

    goto loc_8012D908;

loc_8012D908:
{
    r0 = MemoryInline::FlatRead8((r3 + 485));
}

loc_8012D910:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(10))) {
        goto loc_8012D92C;
    }
}

loc_8012D914:
{
    r3 = MemoryInline::FlatRead8((r3 + 486));
    r0 = (r3 + -195);
}

loc_8012D920:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(15))) {
        goto loc_8012D92C;
    }
}

loc_8012D924:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    return r3;
}

loc_8012D92C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    return r3;
}

}

extern "C" void func_8012D908(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8012D908_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000009 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8012D908 func_8012D908 preserves=true fpr_mask=0x00000000
