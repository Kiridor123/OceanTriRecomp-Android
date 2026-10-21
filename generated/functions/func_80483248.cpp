#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80483248_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x80483248u);
    goto loc_80483248;

loc_80483248:
{
    r4 = 0x80740000u;
    r0 = 4;
    r4 = (r4 + -17608);
    r5 = 0;
    r4 = (r4 + 7984);
    ctr = r0;
}

loc_80483260:
{
    r0 = MemoryInline::FlatRead8((r4 + 118));
    r0 = (r0 & 128);
}

loc_80483268:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80483280;
    }
}

loc_8048326C:
{
    r0 = MemoryInline::FlatRead16((r4 + 24));
}

loc_80483274:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_80483280;
    }
}

loc_80483278:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80483280:
{
    r0 = MemoryInline::FlatRead8((r4 + 254));
    r4 = (r4 + 136);
    r0 = (r0 & 128);
}

loc_8048328C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804832A4;
    }
}

loc_80483290:
{
    r0 = MemoryInline::FlatRead16((r4 + 24));
}

loc_80483298:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_804832A4;
    }
}

loc_8048329C:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804832A4:
{
    r0 = MemoryInline::FlatRead8((r4 + 254));
    r4 = (r4 + 136);
    r0 = (r0 & 128);
}

loc_804832B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804832C8;
    }
}

loc_804832B4:
{
    r0 = MemoryInline::FlatRead16((r4 + 24));
}

loc_804832BC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_804832C8;
    }
}

loc_804832C0:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804832C8:
{
    r0 = MemoryInline::FlatRead8((r4 + 254));
    r4 = (r4 + 136);
    r0 = (r0 & 128);
}

loc_804832D4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804832EC;
    }
}

loc_804832D8:
{
    r0 = MemoryInline::FlatRead16((r4 + 24));
}

loc_804832E0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_804832EC;
    }
}

loc_804832E4:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804832EC:
{
    r5 = (r5 + 3);
    r4 = (r4 + 136);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80483260;
    }
}

loc_804832F8:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80483248(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80483248_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80483248 func_80483248 preserves=true fpr_mask=0x00000000
