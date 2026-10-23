#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" double func_804C6CE0_ra8_1fe_0_2(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    double leaf_stack_saved_f31_entry = 0.0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    PPC_FPR f9 = ctx->fpr[9];
    PPC_FPR f10 = ctx->fpr[10];
    PPC_FPR f11 = ctx->fpr[11];
    PPC_FPR f12 = ctx->fpr[12];
    PPC_FPR f13 = ctx->fpr[13];
    PPC_FPR f31 = ctx->fpr[31];

    goto loc_804C6CE0;

loc_804C6CE0:
{
    leaf_stack_saved_f31_entry = f31.d;
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    f0.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f3.d));
    f10.d = MemoryInline::FlatReadFloat32((r2 + -2084));
    f12.d = MemoryInline::FlatReadFloat32((r2 + -2088));
    f9.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f11.d = MemoryInline::FlatReadFloat32((r2 + -2072));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    f13.d = static_cast<double>(PpcForceSingleValueInline(f12.d / f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -2068));
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 48u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r3 + 40), f0.d);
    f31.d = MemoryInline::FlatReadFloat32((r1 + 40));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r3 + 4), f10.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r3 + 12), f10.d);
    f4.d = PpcFmulsInline(f11.d, f5.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r3 + 16), f10.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    f1.d = PpcFmulsInline(f13.d, f3.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r3 + 28), f10.d);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f12.d / f9.d));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f10.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f10.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r3 + 32), f10.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r3 + 36), f10.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r3 + 44), f10.d);
    f2.d = PpcFmulsInline(f6.d, f1.d);
    f0.d = PpcFmulsInline(f5.d, f0.d);
    f3.d = PpcFmulsInline(f4.d, f13.d);
    f1.d = PpcFmulsInline(f4.d, f5.d);
    f0.d = PpcFmulsInline(f7.d, f0.d);
    f3.d = PpcFmulsInline(f6.d, f3.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f8.d));
    f1.d = PpcFmulsInline(f7.d, f1.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, r3, f3.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r3 + 8), f2.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r3 + 20), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r3 + 24), f0.d);
    }
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = leaf_stack_saved_f31_entry;
    r1 = (r1 + 32);
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[13] = f13;
    ctx->fpr[31] = f31;
    return f1.d;
}

}

extern "C" void func_804C6CE0(CpuContext* MKW_RESTRICT ctx)
{
    double result;
    [[clang::noinline]] result = func_804C6CE0_ra8_1fe_0_2(ctx, ctx->gpr[3], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->fpr[1].d = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000E gpr_write=0x00000002 gpr_return=0x00000000 fpr_read=0x800001FE fpr_write=0x80003E3F fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804C6CE0 func_804C6CE0 preserves=true fpr_mask=0x00000000
