#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80442270_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t ctr = ctx->ctr;

    goto loc_80442270;

loc_80442270:
{
    r3 = 0x806E0000u;
    r3 = (r3 + -30960);
    r4 = MemoryInline::FlatRead32((r3 + 84));
    r5 = 0;
    r4 = (r4 + 8);
    r0 = 2047;
    ctr = r0;
}

loc_8044228C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 8u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, r4);
    r5 = (r5 + r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r4 + 1));
    r5 = (r5 + r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r4 + 2));
    r5 = (r5 + r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r4 + 3));
    r5 = (r5 + r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r4 + 4));
    r5 = (r5 + r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r4 + 5));
    r5 = (r5 + r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r4 + 6));
    r5 = (r5 + r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r4 + 7));
    r5 = (r5 + r0);
    r4 = (r4 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8044228C;
    }
}

loc_804422D4:
{
    r4 = MemoryInline::FlatRead32((r3 + 84));
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_804422E0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r5))) {
        goto loc_804422EC;
    }
}

loc_804422E4:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804422EC:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_804422F4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80442334;
    }
}

loc_804422F8:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
}

loc_80442300:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(4))) {
        goto loc_8044230C;
    }
}

loc_80442304:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8044230C:
{
    r0 = MemoryInline::FlatRead32((r4 + 24));
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    MemoryInline::FlatWriteRam32((r3 + 2184), r0);
    r0 = MemoryInline::FlatRead32((r4 + 28));
    MemoryInline::FlatWriteRam32((r3 + 2188), r0);
    r0 = MemoryInline::FlatRead8((r4 + 22));
    MemoryInline::FlatWriteRam8((r3 + 2320), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 23));
    MemoryInline::FlatWriteRam8((r3 + 2321), static_cast<uint8_t>(r0));
}

loc_80442334:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80442270(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80442270_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80442270 func_80442270 preserves=true fpr_mask=0x00000000
