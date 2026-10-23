#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800513DC(CpuContext* ctx);
extern "C" uint64_t func_800513DC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80182CA4_ra38_18_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f3, double arg_f4)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;

    goto loc_80182CA4;

loc_80182CA4:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r29 = r3;
    r30 = r4;
    r31 = r5;
    r3 = (r1 + 20);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    f0.d = MemoryInline::FlatReadFloat32((r2 + -23576));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r1 + 20), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r1 + 24), f0.d);
    }
    f0.d = MemoryInline::FlatReadFloat32((r2 + -23572));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r1 + 28), f0.d);
    r0 = (r30 & 255);
}

loc_80182CEC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80182D18;
    }
}

loc_80182CF0:
{
}

loc_80182CF4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80182D28;
    }
}

loc_80182CF8:
{
}

loc_80182CFC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(10))) {
        goto loc_80182D3C;
    }
}

loc_80182D00:
{
}

loc_80182D04:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(11))) {
        goto loc_80182D50;
    }
}

loc_80182D08:
{
    r3 = 4551;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -23568));
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f0.d);
    goto loc_80182D5C;
}

loc_80182D18:
{
    r3 = 65536;
    r3 = (r3 + -27307);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f0.d);
    goto loc_80182D5C;
}

loc_80182D28:
{
    r3 = 65536;
    r3 = (r3 + -21845);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -23564));
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f0.d);
    goto loc_80182D5C;
}

loc_80182D3C:
{
    r3 = 65536;
    r3 = (r3 + -24576);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -23560));
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f0.d);
    goto loc_80182D5C;
}

loc_80182D50:
{
    r3 = 20025;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -23568));
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f0.d);
}

loc_80182D5C:
{
    r0 = MemoryInline::FlatRead32((r29 + 448));
    r0 = (r0 + r3);
    r4 = (r0 & 65535);
    r3 = (r1 + 20);
    ctx->lr = 0x80182D70u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    InvokeDirectCpu<0x800510C8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    r3 = (r1 + 8);
    r4 = (r29 + 392);
    r5 = (r1 + 20);
    ctx->lr = 0x80182D80u;
    if constexpr (KnownRegArgsCpuCall<0x800513DCu>(&func_800513DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_800513DC_FF4 = func_800513DC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800513DC_FF4);
        r4 = static_cast<uint32_t>(regargs_result_800513DC_FF4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x800513DCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
    }
    r3 = r31;
    r4 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80182CA4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80182CA4_ra38_18_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80182CA4 func_80182CA4 preserves=true fpr_mask=0x00000000
