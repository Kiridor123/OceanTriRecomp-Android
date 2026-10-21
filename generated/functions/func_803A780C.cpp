#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_803A780C_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;

    MKW_GUEST_ENTER(0x803A780Cu);
    goto loc_803A780C;

loc_803A780C:
{
    r4 = 0x806B0000u;
    r4 = (r4 + -12348);
    r4 = (r4 + 204);
    r0 = (r3 & 255);
    r3 = MemoryInline::FlatRead8(r4);
}

loc_803A7824:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803A783C;
    }
}

loc_803A7828:
{
    r3 = MemoryInline::FlatRead8((r4 + 2));
}

loc_803A7830:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_803A783C;
    }
}

loc_803A7834:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_803A783C:
{
    r4 = (r4 + 12);
    r3 = MemoryInline::FlatRead8(r4);
}

loc_803A7848:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803A7860;
    }
}

loc_803A784C:
{
    r3 = MemoryInline::FlatRead8((r4 + 2));
}

loc_803A7854:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_803A7860;
    }
}

loc_803A7858:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_803A7860:
{
    r4 = (r4 + 12);
    r3 = MemoryInline::FlatRead8(r4);
}

loc_803A786C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803A7884;
    }
}

loc_803A7870:
{
    r3 = MemoryInline::FlatRead8((r4 + 2));
}

loc_803A7878:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_803A7884;
    }
}

loc_803A787C:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_803A7884:
{
    r4 = (r4 + 12);
    r3 = MemoryInline::FlatRead8(r4);
}

loc_803A7890:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803A78A8;
    }
}

loc_803A7894:
{
    r3 = MemoryInline::FlatRead8((r4 + 2));
}

loc_803A789C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_803A78A8;
    }
}

loc_803A78A0:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_803A78A8:
{
    r4 = (r4 + 12);
    r3 = MemoryInline::FlatRead8(r4);
}

loc_803A78B4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803A78CC;
    }
}

loc_803A78B8:
{
    r3 = MemoryInline::FlatRead8((r4 + 2));
}

loc_803A78C0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_803A78CC;
    }
}

loc_803A78C4:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_803A78CC:
{
    r4 = (r4 + 12);
    r3 = MemoryInline::FlatRead8(r4);
}

loc_803A78D8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803A78F0;
    }
}

loc_803A78DC:
{
    r3 = MemoryInline::FlatRead8((r4 + 2));
}

loc_803A78E4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_803A78F0;
    }
}

loc_803A78E8:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_803A78F0:
{
    r4 = (r4 + 12);
    r3 = MemoryInline::FlatRead8(r4);
}

loc_803A78FC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803A7914;
    }
}

loc_803A7900:
{
    r3 = MemoryInline::FlatRead8((r4 + 2));
}

loc_803A7908:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_803A7914;
    }
}

loc_803A790C:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_803A7914:
{
    r4 = (r4 + 12);
    r3 = MemoryInline::FlatRead8(r4);
}

loc_803A7920:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803A7938;
    }
}

loc_803A7924:
{
    r3 = MemoryInline::FlatRead8((r4 + 2));
}

loc_803A792C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_803A7938;
    }
}

loc_803A7930:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_803A7938:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803A780C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803A780C_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803A780C func_803A780C preserves=true fpr_mask=0x00000000
