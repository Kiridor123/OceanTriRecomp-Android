#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8027192C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;

    MKW_GUEST_ENTER(0x8027192Cu);
    goto loc_8027192C;

loc_8027192C:
{
    r4 = 0x805C0000u;
    r5 = (r4 + 2440);
    r3 = (r3 & 65535);
}

loc_8027193C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802719C8;
    }
}

loc_80271940:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8027194C:
{
    r0 = MemoryInline::FlatRead8((r5 + 3));
}

loc_80271954:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(r3))) {
        goto loc_80271960;
    }
}

loc_80271958:
{
    r3 = (r4 & 255);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80271960:
{
    r0 = MemoryInline::FlatRead8((r5 + 5));
}

loc_80271968:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(r3))) {
        goto loc_80271974;
    }
}

loc_8027196C:
{
    r3 = (r4 & 255);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80271974:
{
    r0 = MemoryInline::FlatRead8((r5 + 7));
}

loc_8027197C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(r3))) {
        goto loc_80271988;
    }
}

loc_80271980:
{
    r3 = (r4 & 255);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80271988:
{
    r0 = MemoryInline::FlatRead8((r5 + 9));
}

loc_80271990:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(r3))) {
        goto loc_8027199C;
    }
}

loc_80271994:
{
    r3 = (r4 & 255);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8027199C:
{
    r0 = MemoryInline::FlatRead8((r5 + 11));
}

loc_802719A4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(r3))) {
        goto loc_802719B0;
    }
}

loc_802719A8:
{
    r3 = (r4 & 255);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_802719B0:
{
    r0 = MemoryInline::FlatRead8((r5 + 13));
}

loc_802719B8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(r3))) {
        goto loc_802719C4;
    }
}

loc_802719BC:
{
    r3 = (r4 & 255);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_802719C4:
{
    r5 = (r5 + 16);
}

loc_802719C8:
{
    r4 = MemoryInline::FlatRead16(r5);
}

loc_802719D0:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(65535))) {
        goto loc_8027194C;
    }
}

loc_802719D4:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8027192C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8027192C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8027192C func_8027192C preserves=true fpr_mask=0x00000000
