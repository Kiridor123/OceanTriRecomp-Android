#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804AB200(CpuContext* ctx);
extern "C" uint64_t func_804AB200_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_80434F34_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;

    MKW_GUEST_ENTER(0x80434F34u);
    goto loc_80434F34;

loc_80434F34:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = 0x806D0000u;
    r30 = (r3 + 27520);
    r0 = MemoryInline::FlatRead32((r30 + 176));
}

loc_80434F58:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80434FE0;
    }
}

loc_80434F5C:
{
    r31 = 0;
    MemoryInline::FlatWriteRam8((r30 + 180), static_cast<uint8_t>(r31));
    r0 = MemoryInline::FlatRead32((r30 + 192));
}

loc_80434F6C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80434F7C;
    }
}

loc_80434F70:
{
    r3 = (r30 + 32);
    ctx->lr = 0x80434F78u;
    if constexpr (KnownRegArgsCpuCall<0x804AB200u>(&func_804AB200)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_804AB200_7B8 = func_804AB200_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804AB200_7B8);
        r4 = static_cast<uint32_t>(regargs_result_804AB200_7B8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x804AB200u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    MemoryInline::FlatWriteRam32((r30 + 192), r31);
}

loc_80434F7C:
{
    r3 = 0x806D0000u;
    r4 = (r3 + 27520);
    r3 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r4 + 184), 0, 164u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r4 + 220), r3);
    MemoryInline::WriteResolved32(guest_range_0, 48u, (r4 + 232), r3);
    MemoryInline::WriteResolved32(guest_range_0, 60u, (r4 + 244), r3);
    MemoryInline::WriteResolved32(guest_range_0, 72u, (r4 + 256), r3);
    MemoryInline::WriteResolved32(guest_range_0, 84u, (r4 + 268), r3);
    MemoryInline::WriteResolved32(guest_range_0, 96u, (r4 + 280), r3);
    MemoryInline::WriteResolved32(guest_range_0, 108u, (r4 + 292), r3);
    MemoryInline::WriteResolved32(guest_range_0, 120u, (r4 + 304), r3);
    MemoryInline::WriteResolved32(guest_range_0, 132u, (r4 + 316), r3);
    MemoryInline::WriteResolved32(guest_range_0, 144u, (r4 + 328), r3);
    r0 = -1;
    MemoryInline::WriteResolved32(guest_range_0, 160u, (r4 + 344), r0);
    r0 = MemoryInline::FlatRead32((r4 + 132));
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r4 + 184), r0);
    r0 = MemoryInline::FlatRead32((r4 + 116));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r4 + 204), r0);
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r4 + 200), r3);
    }
    MemoryInline::WriteResolved32(guest_range_0, 24u, (r4 + 208), r3);
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r4 + 188), r3);
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r4 + 196), r3);
    r3 = 1;
    goto loc_80434FE4;
}

loc_80434FE0:
{
    r3 = 0;
}

loc_80434FE4:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80434F34(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80434F34_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x1FFFFFFF gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80434F34 func_80434F34 preserves=true fpr_mask=0x00000000
