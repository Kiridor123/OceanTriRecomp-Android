#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80528920(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r13 = ctx->gpr[13];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x80528920u);
    goto loc_80528920;

loc_80528920:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r13 + -13344), 0, 4u, true, false);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -13344));
    r3 = 0;
    r0 = 4;
    MemoryInline::FlatWrite32((r4 + 15048), r3);
    r4 = (r4 + 11840);
    ctr = r0;
}

loc_80528938:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -13344));
    r0 = MemoryInline::FlatRead32((r3 + 15048));
    guest_range_1 = MemoryInline::ResolveRangeHost(r4, 0, 704u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, r4, r0);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -13344));
    MemoryInline::FlatWrite32((r3 + 15048), r4);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -13344));
    r0 = MemoryInline::FlatRead32((r3 + 15048));
    MemoryInline::WriteResolved32(guest_range_1, 100u, (r4 + 100), r0);
    r4 = (r4 + 100);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -13344));
    MemoryInline::FlatWrite32((r3 + 15048), r4);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -13344));
    r0 = MemoryInline::FlatRead32((r3 + 15048));
    MemoryInline::WriteResolved32(guest_range_1, 200u, (r4 + 100), r0);
    r4 = (r4 + 100);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -13344));
    MemoryInline::FlatWrite32((r3 + 15048), r4);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -13344));
    r0 = MemoryInline::FlatRead32((r3 + 15048));
    MemoryInline::WriteResolved32(guest_range_1, 300u, (r4 + 100), r0);
    r4 = (r4 + 100);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -13344));
    MemoryInline::FlatWrite32((r3 + 15048), r4);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -13344));
    r0 = MemoryInline::FlatRead32((r3 + 15048));
    MemoryInline::WriteResolved32(guest_range_1, 400u, (r4 + 100), r0);
    r4 = (r4 + 100);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -13344));
    MemoryInline::FlatWrite32((r3 + 15048), r4);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -13344));
    r0 = MemoryInline::FlatRead32((r3 + 15048));
    MemoryInline::WriteResolved32(guest_range_1, 500u, (r4 + 100), r0);
    r4 = (r4 + 100);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -13344));
    MemoryInline::FlatWrite32((r3 + 15048), r4);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -13344));
    r0 = MemoryInline::FlatRead32((r3 + 15048));
    MemoryInline::WriteResolved32(guest_range_1, 600u, (r4 + 100), r0);
    r4 = (r4 + 100);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -13344));
    MemoryInline::FlatWrite32((r3 + 15048), r4);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -13344));
    r0 = MemoryInline::FlatRead32((r3 + 15048));
    MemoryInline::WriteResolved32(guest_range_1, 700u, (r4 + 100), r0);
    r4 = (r4 + 100);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -13344));
    MemoryInline::FlatWrite32((r3 + 15048), r4);
    r4 = (r4 + 100);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80528938;
    }
}

loc_805289E0:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->ctr = ctr;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE uint64_t func_80528920_statefree(uint32_t native_r13, uint32_t native_ctr)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = 0;
    uint32_t cached_r4 = 0;
    uint32_t cached_r13 = native_r13;

    uint32_t cached_ctr = native_ctr;

    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    MKW_GUEST_ENTER(0x80528920u);
    goto loc_80528920;

loc_80528920:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((cached_r13 + -13344), 0, 4u, true, false);
    cached_r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (cached_r13 + -13344));
    cached_r3 = 0;
    cached_r0 = 4;
    MemoryInline::FlatWrite32((cached_r4 + 15048), cached_r3);
    cached_r4 = (cached_r4 + 11840);
    cached_ctr = cached_r0;
}

loc_80528938:
{
    cached_r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (cached_r13 + -13344));
    cached_r0 = MemoryInline::FlatRead32((cached_r3 + 15048));
    guest_range_1 = MemoryInline::ResolveRangeHost(cached_r4, 0, 704u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, cached_r4, cached_r0);
    cached_r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (cached_r13 + -13344));
    MemoryInline::FlatWrite32((cached_r3 + 15048), cached_r4);
    cached_r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (cached_r13 + -13344));
    cached_r0 = MemoryInline::FlatRead32((cached_r3 + 15048));
    MemoryInline::WriteResolved32(guest_range_1, 100u, (cached_r4 + 100), cached_r0);
    cached_r4 = (cached_r4 + 100);
    cached_r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (cached_r13 + -13344));
    MemoryInline::FlatWrite32((cached_r3 + 15048), cached_r4);
    cached_r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (cached_r13 + -13344));
    cached_r0 = MemoryInline::FlatRead32((cached_r3 + 15048));
    MemoryInline::WriteResolved32(guest_range_1, 200u, (cached_r4 + 100), cached_r0);
    cached_r4 = (cached_r4 + 100);
    cached_r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (cached_r13 + -13344));
    MemoryInline::FlatWrite32((cached_r3 + 15048), cached_r4);
    cached_r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (cached_r13 + -13344));
    cached_r0 = MemoryInline::FlatRead32((cached_r3 + 15048));
    MemoryInline::WriteResolved32(guest_range_1, 300u, (cached_r4 + 100), cached_r0);
    cached_r4 = (cached_r4 + 100);
    cached_r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (cached_r13 + -13344));
    MemoryInline::FlatWrite32((cached_r3 + 15048), cached_r4);
    cached_r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (cached_r13 + -13344));
    cached_r0 = MemoryInline::FlatRead32((cached_r3 + 15048));
    MemoryInline::WriteResolved32(guest_range_1, 400u, (cached_r4 + 100), cached_r0);
    cached_r4 = (cached_r4 + 100);
    cached_r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (cached_r13 + -13344));
    MemoryInline::FlatWrite32((cached_r3 + 15048), cached_r4);
    cached_r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (cached_r13 + -13344));
    cached_r0 = MemoryInline::FlatRead32((cached_r3 + 15048));
    MemoryInline::WriteResolved32(guest_range_1, 500u, (cached_r4 + 100), cached_r0);
    cached_r4 = (cached_r4 + 100);
    cached_r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (cached_r13 + -13344));
    MemoryInline::FlatWrite32((cached_r3 + 15048), cached_r4);
    cached_r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (cached_r13 + -13344));
    cached_r0 = MemoryInline::FlatRead32((cached_r3 + 15048));
    MemoryInline::WriteResolved32(guest_range_1, 600u, (cached_r4 + 100), cached_r0);
    cached_r4 = (cached_r4 + 100);
    cached_r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (cached_r13 + -13344));
    MemoryInline::FlatWrite32((cached_r3 + 15048), cached_r4);
    cached_r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (cached_r13 + -13344));
    cached_r0 = MemoryInline::FlatRead32((cached_r3 + 15048));
    MemoryInline::WriteResolved32(guest_range_1, 700u, (cached_r4 + 100), cached_r0);
    cached_r4 = (cached_r4 + 100);
    cached_r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (cached_r13 + -13344));
    MemoryInline::FlatWrite32((cached_r3 + 15048), cached_r4);
    cached_r4 = (cached_r4 + 100);
    cached_ctr = (cached_ctr + -1);
    if ((cached_ctr != 0)) {
        goto loc_80528938;
    }
}

loc_805289E0:
{

return static_cast<uint64_t>(cached_ctr);
}


    return static_cast<uint64_t>(cached_ctr);
}
// RECOMP_STATE_FREE_ABI address=0x80528920 symbol=func_80528920_statefree gpr_in=0x00002000 gpr_out=0x00000000 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00002000 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80528920 func_80528920 preserves=true fpr_mask=0x00000000


extern "C" uint64_t func_80528920_ra0_0_18_0(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_80528920(ctx);
    return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
}
