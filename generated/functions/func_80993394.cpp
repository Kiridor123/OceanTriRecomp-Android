#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80048E90(CpuContext* ctx);
extern "C" uint64_t func_80048E90_ra38_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);

extern "C" void func_80993394(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t fctiwzword3 = 0;
    uint32_t fctiwzword4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];

    MKW_GUEST_ENTER(0x80993394u);
    goto loc_80993394;

loc_80993394:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r3 = (r1 + 8);
    // inline leaf 0x80040354 (7 guest instruction(s))
    r4 = 0x80660000u;
    r4 = (r4 + -19268);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f0.d);
    // end of inlined leaf 0x80040354
    r4 = 0;
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r4));
    MemoryInline::FlatWriteRam16((r1 + 18), static_cast<uint16_t>(r4));
    MemoryInline::FlatWriteRam16((r1 + 24), static_cast<uint16_t>(r4));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f0.d = PPC_Fctiwz(f3.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 40), f0.d);
    r0 = fctiwzword0;
    MemoryInline::FlatWriteRam16((r1 + 20), static_cast<uint16_t>(r0));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = PPC_Fctiwz(f2.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f0.d);
    r0 = fctiwzword1;
    MemoryInline::FlatWriteRam16((r1 + 22), static_cast<uint16_t>(r0));
    r0 = -1;
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    r3 = 0x809A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + -11804));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    r3 = 0x809A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + -11800));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword2 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 56), f0.d);
    r0 = fctiwzword2;
    MemoryInline::FlatWriteRam16((r1 + 32), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam16((r1 + 34), static_cast<uint16_t>(r4));
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r3 = 0x809A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + -11796));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f1.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword3 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 64), f0.d);
    r0 = fctiwzword3;
    r0 = (r4 + r0);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWriteRam16((r1 + 36), static_cast<uint16_t>(r0));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword4 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 72), f0.d);
    r0 = fctiwzword4;
    MemoryInline::FlatWriteRam16((r1 + 38), static_cast<uint16_t>(r0));
    r3 = 8;
    r4 = (r1 + 16);
    r5 = 0;
    ctx->lr = 0x80993460u;
    if constexpr (KnownRegArgsCpuCall<0x80048E90u>(&func_80048E90)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_80048E90_EF6 = func_80048E90_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_80048E90_EF6);
        r4 = static_cast<uint32_t>(regargs_result_80048E90_EF6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x80048E90u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FC6 gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00000010 fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0x23 cr_write=0x23 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80993394 func_80993394 preserves=true fpr_mask=0x00000000
