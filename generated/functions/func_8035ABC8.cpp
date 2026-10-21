#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8035ABC8_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r13 = ctx->gpr[13];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x8035ABC8u);
    goto loc_8035ABC8;

loc_8035ABC8:
{
    r3 = MemoryInline::FlatRead32((r13 + -16960));
}

loc_8035ABD0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8035ABDC;
    }
}

loc_8035ABD4:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8035ABDC:
{
    r3 = (r3 + 12);
    r4 = 0;
    r0 = 2;
    ctr = r0;
}

loc_8035ABEC:
{
    r0 = MemoryInline::FlatRead8(r3);
}

loc_8035ABF4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_8035ABF8:
{
    r3 = (r3 + 188);
    r0 = MemoryInline::FlatRead8(r3);
}

loc_8035AC04:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_8035AC08:
{
    r3 = (r3 + 188);
    r0 = MemoryInline::FlatRead8(r3);
}

loc_8035AC14:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_8035AC18:
{
    r3 = (r3 + 188);
    r0 = MemoryInline::FlatRead8(r3);
}

loc_8035AC24:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_8035AC28:
{
    r3 = (r3 + 188);
    r0 = MemoryInline::FlatRead8(r3);
}

loc_8035AC34:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_8035AC38:
{
    r3 = (r3 + 188);
    r0 = MemoryInline::FlatRead8(r3);
}

loc_8035AC44:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_8035AC48:
{
    r3 = (r3 + 188);
    r0 = MemoryInline::FlatRead8(r3);
}

loc_8035AC54:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_8035AC58:
{
    r3 = (r3 + 188);
    r0 = MemoryInline::FlatRead8(r3);
}

loc_8035AC64:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_8035AC68:
{
    r3 = (r3 + 188);
    r4 = (r4 + 7);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8035ABEC;
    }
}

loc_8035AC74:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8035ABC8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8035ABC8_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002019 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8035ABC8 func_8035ABC8 preserves=true fpr_mask=0x00000000
