#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802BF70C(CpuContext* ctx);
extern "C" uint64_t func_802BF70C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_802BFA64_ra38_6_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2)
{
    uint32_t addr_psqx_802BFB18_loc_0 = 0;
    uint32_t addr_psqx_802BFB24_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_802BFA64;

loc_802BFA64:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -64), 0, 72u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 68u, (r1 + 68), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 48u, (r1 + 48), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 32u, (r1 + 32), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 40);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r27 = r3;
    r28 = r4;
    r29 = r5;
    f30.d = f1.d;
    f31.d = f2.d;
    r3 = 0x806C0000u;
    r30 = (r3 + -6272);
    r3 = r30;
    if constexpr (KnownRegArgsCpuCall<0x802BF70Cu>(&func_802BF70C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802BF70C_9AA = func_802BF70C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802BF70C_9AA);
        r4 = static_cast<uint32_t>(regargs_result_802BF70C_9AA >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802BF70Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r31 = r3;
}

loc_802BFAB4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802BFAC0;
    }
}

loc_802BFAB8:
{
    r3 = 0;
    goto loc_802BFB14;
}

loc_802BFAC0:
{
    r4 = MemoryInline::FlatRead16((r30 + 324));
    r0 = (r4 + 1);
    MemoryInline::FlatWriteRam16((r30 + 324), static_cast<uint16_t>(r0));
    r0 = 1;
    MemoryInline::FlatWriteRam8(r3, static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam16((r3 + 2), static_cast<uint16_t>(r27));
    r3 = (r3 + 4);
    r4 = r28;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r31 + 16);
    r4 = r29;
    // inline leaf 0x8004C554 (9 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWriteRam8(r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 2));
    MemoryInline::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    MemoryInline::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8004C554
    MemoryInline::FlatWriteRamFloat32((r31 + 20), f30.d);
    MemoryInline::FlatWriteRamFloat32((r31 + 24), f31.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13460));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    f0.d = PpcFmulsInline(f31.d, f30.d);
    f0.d = PpcFmulsInline(f30.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    MemoryInline::FlatWriteRamFloat32((r31 + 28), f0.d);
    r3 = 1;
}

loc_802BFB14:
{
    r0 = 56;
    addr_psqx_802BFB18_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_802BFB18_loc_0));
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 12), 0, 60u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 36u, (r1 + 48));
    r0 = 40;
    addr_psqx_802BFB24_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_802BFB24_loc_0));
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 20u, (r1 + 32));
    r11 = (r1 + 32);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::ReadResolved32(guest_range_1, 56u, (r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802BFA64(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802BFA64_ra38_6_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003F gpr_write=0x0000083B gpr_return=0x00000018 fpr_read=0xC0000007 fpr_write=0xC0000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802BFA64 func_802BFA64 preserves=true fpr_mask=0x00000000
