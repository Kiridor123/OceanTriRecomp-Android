#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_800458BC_ra38_1e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4)
{
    uint32_t cr0_0 = 0;
    uint32_t stackword1 = 0;
    uint32_t stackword2 = 0;
    uint32_t stackword3 = 0;
    uint32_t stackword4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;

    goto loc_800458BC;

loc_800458BC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r8 = (r3 + 276);
    r5 = -1;
    f4.d = MemoryInline::FlatReadFloat64((r2 + -32688));
    r7 = 1127219200;
    f3.d = MemoryInline::FlatReadFloat32((r2 + -32600));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -32596));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -32592));
    r6 = 0;
    r0 = (r3 + 240);
}

loc_800458E4:
{
    r3 = MemoryInline::FlatRead16((r4 + 4));
}

loc_800458EC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80045944;
    }
}

loc_800458F0:
{
    r3 = MemoryInline::FlatRead16(r4);
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r3 = (r3 ^ -2147483648);
    stackword1 = r3;
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    stackword2 = r7;
    MemoryInline::FlatWriteRam32((r1 + 8), r7);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword2), static_cast<uint32_t>(stackword1));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    f0.d = PpcFmulsInline(f3.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    MemoryInline::FlatWriteFloat32(r8, f0.d);
    r3 = MemoryInline::FlatRead16((r4 + 2));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r3 = (r3 ^ -2147483648);
    stackword3 = r3;
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    stackword4 = r7;
    MemoryInline::FlatWriteRam32((r1 + 16), r7);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword4), static_cast<uint32_t>(stackword3));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    f0.d = PpcFmulsInline(f3.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteFloat32((r8 + 4), f0.d);
    MemoryInline::FlatWrite8((r8 + 8), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r8 + 9), static_cast<uint8_t>(r6));
    goto loc_80045948;
}

loc_80045944:
{
    MemoryInline::FlatWrite8((r8 + 8), static_cast<uint8_t>(r5));
}

loc_80045948:
{
    r4 = (r4 + -8);
    r8 = (r8 + -12);
}

loc_80045954:
{
    if ((static_cast<uint32_t>(r8) >= static_cast<uint32_t>(r0))) {
        goto loc_800458E4;
    }
}

loc_80045958:
{
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800458BC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800458BC_ra38_1e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000001FF gpr_write=0x000001FB gpr_return=0x00000018 fpr_read=0x0000001F fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800458BC func_800458BC preserves=true fpr_mask=0x00000000
