#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800500A8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t stackword1 = 0;
    uint32_t stackword2 = 0;
    uint32_t stackword3 = 0;
    uint32_t stackword4 = 0;
    uint32_t stackword5 = 0;
    uint32_t stackword6 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];

    MKW_GUEST_ENTER(0x800500A8u);
    goto loc_800500A8;

loc_800500A8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = MemoryInline::FlatRead32(r3);
    r0 = (r0 & 65535);
    f3.d = MemoryInline::FlatReadFloat64((r2 + -32472));
    stackword1 = r0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r5 = 1127219200;
    stackword2 = r5;
    MemoryInline::FlatWriteRam32((r1 + 8), r5);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword2), static_cast<uint32_t>(stackword1));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -32480));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -32476));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    MemoryInline::FlatWriteFloat32(r4, f0.d);
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r0 & 65535);
    stackword3 = r0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    stackword4 = r5;
    MemoryInline::FlatWriteRam32((r1 + 16), r5);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword4), static_cast<uint32_t>(stackword3));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    MemoryInline::FlatWriteFloat32((r4 + 4), f0.d);
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r0 & 65535);
    stackword5 = r0;
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    stackword6 = r5;
    MemoryInline::FlatWriteRam32((r1 + 24), r5);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword6), static_cast<uint32_t>(stackword5));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    MemoryInline::FlatWriteFloat32((r4 + 8), f0.d);
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_800500A8_statefree(uint32_t native_r1, uint32_t native_r2, uint32_t native_r3, uint32_t native_r4)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r1 = native_r1;
    uint32_t cached_r2 = native_r2;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = native_r4;
    uint32_t cached_r5 = 0;
    PPC_FPR cached_f0 = PPC_FPR{};
    PPC_FPR cached_f1 = PPC_FPR{};
    PPC_FPR cached_f2 = PPC_FPR{};
    PPC_FPR cached_f3 = PPC_FPR{};

    uint32_t stackword1 = 0;
    uint32_t stackword2 = 0;
    uint32_t stackword3 = 0;
    uint32_t stackword4 = 0;
    uint32_t stackword5 = 0;
    uint32_t stackword6 = 0;

    MKW_GUEST_ENTER(0x800500A8u);
    goto loc_800500A8;

loc_800500A8:
{
    MemoryInline::FlatWriteRam32((cached_r1 + -32), cached_r1);
    cached_r1 = (cached_r1 + -32);
    cached_r0 = MemoryInline::FlatRead32(cached_r3);
    cached_r0 = (cached_r0 & 65535);
    cached_f3.d = MemoryInline::FlatReadFloat64((cached_r2 + -32472));
    stackword1 = cached_r0;
    MemoryInline::FlatWriteRam32((cached_r1 + 12), cached_r0);
    cached_r5 = 1127219200;
    stackword2 = cached_r5;
    MemoryInline::FlatWriteRam32((cached_r1 + 8), cached_r5);
    cached_f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword2), static_cast<uint32_t>(stackword1));
    cached_f0.d = static_cast<double>(PpcForceSingleValueInline(cached_f0.d - cached_f3.d));
    cached_f2.d = MemoryInline::FlatReadFloat32((cached_r2 + -32480));
    cached_f0.d = PpcFmulsInline(cached_f2.d, cached_f0.d);
    cached_f1.d = MemoryInline::FlatReadFloat32((cached_r2 + -32476));
    cached_f0.d = static_cast<double>(PpcForceSingleValueInline(cached_f0.d / cached_f1.d));
    MemoryInline::FlatWriteFloat32(cached_r4, cached_f0.d);
    cached_r0 = MemoryInline::FlatRead32((cached_r3 + 4));
    cached_r0 = (cached_r0 & 65535);
    stackword3 = cached_r0;
    MemoryInline::FlatWriteRam32((cached_r1 + 20), cached_r0);
    stackword4 = cached_r5;
    MemoryInline::FlatWriteRam32((cached_r1 + 16), cached_r5);
    cached_f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword4), static_cast<uint32_t>(stackword3));
    cached_f0.d = static_cast<double>(PpcForceSingleValueInline(cached_f0.d - cached_f3.d));
    cached_f0.d = PpcFmulsInline(cached_f2.d, cached_f0.d);
    cached_f0.d = static_cast<double>(PpcForceSingleValueInline(cached_f0.d / cached_f1.d));
    MemoryInline::FlatWriteFloat32((cached_r4 + 4), cached_f0.d);
    cached_r0 = MemoryInline::FlatRead32((cached_r3 + 8));
    cached_r0 = (cached_r0 & 65535);
    stackword5 = cached_r0;
    MemoryInline::FlatWriteRam32((cached_r1 + 28), cached_r0);
    stackword6 = cached_r5;
    MemoryInline::FlatWriteRam32((cached_r1 + 24), cached_r5);
    cached_f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword6), static_cast<uint32_t>(stackword5));
    cached_f0.d = static_cast<double>(PpcForceSingleValueInline(cached_f0.d - cached_f3.d));
    cached_f0.d = PpcFmulsInline(cached_f2.d, cached_f0.d);
    cached_f0.d = static_cast<double>(PpcForceSingleValueInline(cached_f0.d / cached_f1.d));
    MemoryInline::FlatWriteFloat32((cached_r4 + 8), cached_f0.d);
    cached_r1 = (cached_r1 + 32);



    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r1) };
}

}
// RECOMP_STATE_FREE_ABI address=0x800500A8 symbol=func_800500A8_statefree gpr_in=0x0000001E gpr_out=0x00000003 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x0000001E gpr_write=0x00000023 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800500A8 func_800500A8 preserves=true fpr_mask=0x00000000


extern "C" double func_800500A8_ra18_0_0_2(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    ctx->gpr[3] = arg_r3;
    ctx->gpr[4] = arg_r4;
    [[clang::noinline]] func_800500A8(ctx);
    return ctx->fpr[1].d;
}
