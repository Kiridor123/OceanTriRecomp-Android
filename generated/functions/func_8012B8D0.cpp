#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8012B8D0_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];

    MKW_GUEST_ENTER(0x8012B8D0u);
    goto loc_8012B8D0;

loc_8012B8D0:
{
    r6 = 0;
    r5 = 0;
    r4 = 1;
    r0 = MemoryInline::FlatRead32((r3 + 1064));
}

loc_8012B8E4:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(20000))) {
        goto loc_8012B8F4;
    }
}

loc_8012B8E8:
{
    r0 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r5));
    r0 = (r0 & 255);
    r6 = (r0 & 255);
}

loc_8012B8F4:
{
    r5 = 1;
    r0 = MemoryInline::FlatRead32((r3 + 1068));
}

loc_8012B900:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(20000))) {
        goto loc_8012B914;
    }
}

loc_8012B904:
{
    r0 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r5));
    r0 = (r0 & 255);
    r0 = (r6 | r0);
    r6 = (r0 & 255);
}

loc_8012B914:
{
    r5 = 2;
    r0 = MemoryInline::FlatRead32((r3 + 1072));
}

loc_8012B920:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(20000))) {
        goto loc_8012B934;
    }
}

loc_8012B924:
{
    r0 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r5));
    r0 = (r0 & 255);
    r0 = (r6 | r0);
    r6 = (r0 & 255);
}

loc_8012B934:
{
    r5 = 3;
    r0 = MemoryInline::FlatRead32((r3 + 1076));
}

loc_8012B940:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(20000))) {
        goto loc_8012B954;
    }
}

loc_8012B944:
{
    r0 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r5));
    r0 = (r0 & 255);
    r0 = (r6 | r0);
    r6 = (r0 & 255);
}

loc_8012B954:
{
    r3 = r6;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8012B8D0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8012B8D0_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8012B8D0 func_8012B8D0 preserves=true fpr_mask=0x00000000
