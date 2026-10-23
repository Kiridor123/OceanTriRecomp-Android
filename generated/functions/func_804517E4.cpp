#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_804517E4_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;

    goto loc_804517E4;

loc_804517E4:
{
    r4 = MemoryInline::FlatRead8(r3);
}

loc_804517EC:
{
    if ((static_cast<int32_t>(r4) > static_cast<int32_t>(127))) {
        goto loc_804517F8;
    }
}

loc_804517F0:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804517F8:
{
    r0 = (r4 + -192);
}

loc_80451800:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(31))) {
        goto loc_80451834;
    }
}

loc_80451804:
{
    r3 = MemoryInline::FlatRead8((r3 + 1));
}

loc_8045180C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80451818;
    }
}

loc_80451810:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80451818:
{
    r0 = (r3 + -128);
}

loc_80451820:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(63))) {
        goto loc_8045182C;
    }
}

loc_80451824:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8045182C:
{
    r3 = 2;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80451834:
{
    r0 = (r4 + -224);
}

loc_8045183C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(15))) {
        goto loc_80451898;
    }
}

loc_80451840:
{
    r4 = MemoryInline::FlatRead8((r3 + 1));
}

loc_80451848:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80451854;
    }
}

loc_8045184C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80451854:
{
    r0 = (r4 + -128);
}

loc_8045185C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(63))) {
        goto loc_80451868;
    }
}

loc_80451860:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80451868:
{
    r3 = MemoryInline::FlatRead8((r3 + 3));
}

loc_80451870:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8045187C;
    }
}

loc_80451874:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8045187C:
{
    r0 = (r3 + -128);
}

loc_80451884:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(63))) {
        goto loc_80451890;
    }
}

loc_80451888:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80451890:
{
    r3 = 3;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80451898:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804517E4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804517E4_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804517E4 func_804517E4 preserves=true fpr_mask=0x00000000
