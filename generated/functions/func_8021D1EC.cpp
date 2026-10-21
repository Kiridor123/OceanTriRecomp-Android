#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8021D1EC_ra18_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;

    MKW_GUEST_ENTER(0x8021D1ECu);
    goto loc_8021D1EC;

loc_8021D1EC:
{
}

loc_8021D1F0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_8021D1F4:
{
    r0 = MemoryInline::FlatRead8((r3 + 2));
}

loc_8021D1FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(9))) {
        goto loc_8021D20C;
    }
}

loc_8021D200:
{
}

loc_8021D204:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(15))) {
        goto loc_8021D220;
    }
}

loc_8021D208:
{
    ctx->gpr[0] = r0;
    return r4;
}

loc_8021D20C:
{
    r0 = (r4 & 65535);
}

loc_8021D214:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(184))) {
        goto loc_return;
    }
}

loc_8021D218:
{
    r4 = 2;
    // inline leaf 0x801FF660 (4 guest instruction(s))
}

loc_inl0_0x801FF660:
{
}

loc_inl0_0x801FF664:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x801FF668:
{
    MemoryInline::FlatWrite8((r3 + 597), static_cast<uint8_t>(r4));
    goto loc_inl0_cont_801FF660;
}

loc_inl0_return:
{
}

loc_inl0_cont_801FF660:
{
    // end of inlined leaf 0x801FF660
    ctx->gpr[0] = r0;
    return r4;
}

loc_8021D220:
{
    r0 = (r4 & 65535);
}

loc_8021D228:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(208))) {
        goto loc_return;
    }
}

loc_8021D22C:
{
    r4 = 0;
    // inline leaf 0x801FF660 (4 guest instruction(s))
}

loc_inl1_0x801FF660:
{
}

loc_inl1_0x801FF664:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x801FF668:
{
    MemoryInline::FlatWrite8((r3 + 597), static_cast<uint8_t>(r4));
    goto loc_inl1_cont_801FF660;
}

loc_inl1_return:
{
}

loc_inl1_cont_801FF660:
{
    // end of inlined leaf 0x801FF660
    ctx->gpr[0] = r0;
    return r4;
}

loc_return:
{
    ctx->gpr[0] = r0;
    return r4;
}

}

extern "C" void func_8021D1EC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8021D1EC_ra18_0_10_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8021D1EC func_8021D1EC preserves=true fpr_mask=0x00000000
