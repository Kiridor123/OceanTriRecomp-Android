#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80140744_ra18_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;

    goto loc_80140744;

loc_80140744:
{
    r0 = (r3 & 255);
}

loc_8014074C:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(109))) {
        goto loc_801407C4;
    }
}

loc_80140750:
{
    r3 = 0x805A0000u;
    r3 = (r3 + 7408);
    r3_addr_0 = (r3 + r0);
    r3 = MemoryInline::FlatRead8(r3_addr_0);
    r0 = (r3 & 128);
}

loc_80140764:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_80140768:
{
    r0 = (r4 & 255);
}

loc_80140770:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80140780;
    }
}

loc_80140774:
{
}

loc_80140778:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8014078C;
    }
}

loc_8014077C:
{
    goto loc_801407BC;
}

loc_80140780:
{
    r3 = (r3 + 1);
    r3 = (r3 & 15);
    ctx->gpr[0] = r0;
    return r3;
}

loc_8014078C:
{
    r0 = (r3 & 48);
}

loc_80140794:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(160))) {
        goto loc_801407A4;
    }
}

loc_80140798:
{
}

loc_8014079C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(176))) {
        goto loc_801407AC;
    }
}

loc_801407A0:
{
    goto loc_801407B4;
}

loc_801407A4:
{
    r3 = 4;
    ctx->gpr[0] = r0;
    return r3;
}

loc_801407AC:
{
    r3 = 5;
    ctx->gpr[0] = r0;
    return r3;
}

loc_801407B4:
{
    r3 = 2;
    ctx->gpr[0] = r0;
    return r3;
}

loc_801407BC:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    return r3;
}

loc_801407C4:
{
    r3 = 255;
    ctx->gpr[0] = r0;
    return r3;
}

loc_return:
{
    ctx->gpr[0] = r0;
    return r3;
}

}

extern "C" void func_80140744(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80140744_ra18_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80140744 func_80140744 preserves=true fpr_mask=0x00000000
