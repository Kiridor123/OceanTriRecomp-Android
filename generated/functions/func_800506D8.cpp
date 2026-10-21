#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800506D8(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];

    MKW_GUEST_ENTER(0x800506D8u);
    goto loc_800506D8;

loc_800506D8:
{
    f1.d = MemoryInline::FlatReadFloat32(r3);
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 12u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r4);
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32(r3, f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r4);
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r4);
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 16));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r4 + 4));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 16), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 20));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r4 + 4));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 20), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 24));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r4 + 4));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 24), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 32));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r4 + 8));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 32), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 36));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r4 + 8));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 36), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 40));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r4 + 8));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 40), f0.d);
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_800506D8_statefree(uint32_t native_r3, uint32_t native_r4, PPC_FPR native_f0, PPC_FPR native_f1)
{

    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = native_r4;
    PPC_FPR cached_f0 = PPC_FPR{};
    PPC_FPR cached_f1 = PPC_FPR{};

    uint8_t* guest_range_0 = nullptr;

    MKW_GUEST_ENTER(0x800506D8u);
    goto loc_800506D8;

loc_800506D8:
{
    cached_f1.d = MemoryInline::FlatReadFloat32(cached_r3);
    guest_range_0 = MemoryInline::ResolveRangeHost(cached_r4, 0, 12u, true, false);
    cached_f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, cached_r4);
    cached_f0.d = PpcFmulsInline(cached_f1.d, cached_f0.d);
    MemoryInline::FlatWriteFloat32(cached_r3, cached_f0.d);
    cached_f1.d = MemoryInline::FlatReadFloat32((cached_r3 + 4));
    cached_f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, cached_r4);
    cached_f0.d = PpcFmulsInline(cached_f1.d, cached_f0.d);
    MemoryInline::FlatWriteFloat32((cached_r3 + 4), cached_f0.d);
    cached_f1.d = MemoryInline::FlatReadFloat32((cached_r3 + 8));
    cached_f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, cached_r4);
    cached_f0.d = PpcFmulsInline(cached_f1.d, cached_f0.d);
    MemoryInline::FlatWriteFloat32((cached_r3 + 8), cached_f0.d);
    cached_f1.d = MemoryInline::FlatReadFloat32((cached_r3 + 16));
    cached_f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (cached_r4 + 4));
    cached_f0.d = PpcFmulsInline(cached_f1.d, cached_f0.d);
    MemoryInline::FlatWriteFloat32((cached_r3 + 16), cached_f0.d);
    cached_f1.d = MemoryInline::FlatReadFloat32((cached_r3 + 20));
    cached_f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (cached_r4 + 4));
    cached_f0.d = PpcFmulsInline(cached_f1.d, cached_f0.d);
    MemoryInline::FlatWriteFloat32((cached_r3 + 20), cached_f0.d);
    cached_f1.d = MemoryInline::FlatReadFloat32((cached_r3 + 24));
    cached_f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (cached_r4 + 4));
    cached_f0.d = PpcFmulsInline(cached_f1.d, cached_f0.d);
    MemoryInline::FlatWriteFloat32((cached_r3 + 24), cached_f0.d);
    cached_f1.d = MemoryInline::FlatReadFloat32((cached_r3 + 32));
    cached_f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (cached_r4 + 8));
    cached_f0.d = PpcFmulsInline(cached_f1.d, cached_f0.d);
    MemoryInline::FlatWriteFloat32((cached_r3 + 32), cached_f0.d);
    cached_f1.d = MemoryInline::FlatReadFloat32((cached_r3 + 36));
    cached_f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (cached_r4 + 8));
    cached_f0.d = PpcFmulsInline(cached_f1.d, cached_f0.d);
    MemoryInline::FlatWriteFloat32((cached_r3 + 36), cached_f0.d);
    cached_f1.d = MemoryInline::FlatReadFloat32((cached_r3 + 40));
    cached_f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (cached_r4 + 8));
    cached_f0.d = PpcFmulsInline(cached_f1.d, cached_f0.d);
    MemoryInline::FlatWriteFloat32((cached_r3 + 40), cached_f0.d);

    return { cached_f0.raw, cached_f1.raw };
}

}
// RECOMP_STATE_FREE_ABI address=0x800506D8 symbol=func_800506D8_statefree gpr_in=0x00000018 gpr_out=0x00000000 fpr_in=0x00000000 fpr_out=0x00000003 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800506D8 func_800506D8 preserves=true fpr_mask=0x00000000


extern "C" double func_800506D8_ra18_0_0_2(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    ctx->gpr[3] = arg_r3;
    ctx->gpr[4] = arg_r4;
    [[clang::noinline]] func_800506D8(ctx);
    return ctx->fpr[1].d;
}
