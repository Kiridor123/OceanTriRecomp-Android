#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8046884C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r5_addr_4 = 0;
    uint32_t r5_addr_5 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x8046884Cu);
    goto loc_8046884C;

loc_8046884C:
{
    r5 = 0x80610000u;
    r5 = (r5 + -2448);
    r6 = MemoryInline::FlatRead32((r5 + 56));
}

loc_80468858:
{
    r0 = MemoryInline::FlatRead8(r3);
    r5 = 1;
    r3 = (r3 + 1);
    r7 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8046886C:
{
    if ((static_cast<uint32_t>(r7) > static_cast<uint32_t>(255))) {
        goto loc_80468874;
    }
}

loc_80468870:
{
    r5 = 0;
}

loc_80468874:
{
}

loc_80468878:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80468880;
    }
}

loc_8046887C:
{
    goto loc_80468888;
}

loc_80468880:
{
    r5 = MemoryInline::FlatRead32((r6 + 16));
    r5_addr_2 = (r5 + r7);
    r7 = MemoryInline::FlatRead8(r5_addr_2);
}

loc_80468888:
{
    r0 = MemoryInline::FlatRead8(r4);
    r7 = (static_cast<int32_t>(static_cast<int8_t>(r7)));
    r5 = 1;
    r4 = (r4 + 1);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_804688A0:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(255))) {
        goto loc_804688A8;
    }
}

loc_804688A4:
{
    r5 = 0;
}

loc_804688A8:
{
}

loc_804688AC:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_804688B4;
    }
}

loc_804688B0:
{
    goto loc_804688BC;
}

loc_804688B4:
{
    r5 = MemoryInline::FlatRead32((r6 + 16));
    r5_addr_4 = (r5 + r0);
    r0 = MemoryInline::FlatRead8(r5_addr_4);
}

loc_804688BC:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(r0));
}

loc_804688C4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804688D0;
    }
}

loc_804688C8:
{
    r3 = -1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804688D0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_804688DC;
    }
}

loc_804688D4:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804688DC:
{
}

loc_804688E0:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_80468858;
    }
}

loc_804688E4:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8046884C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8046884C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x000000F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8046884C func_8046884C preserves=true fpr_mask=0x00000000
