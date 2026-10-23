#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800517A4(CpuContext* ctx);
extern "C" uint64_t func_800517A4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_800518F8_ra38_e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3)
{
    uint32_t addr_psqx_80051BA0_loc_0 = 0;
    uint32_t addr_psqx_80051BAC_loc_0 = 0;
    uint32_t addr_psqx_80051BB8_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_800518F8;

loc_800518F8:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -128), 0, 136u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -128), r1);
    r1 = (r1 + -128);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 132u, (r1 + 132), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 112u, (r1 + 112), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 120);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 96u, (r1 + 96), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 104);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 80u, (r1 + 80), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    r28 = r3;
    r29 = r4;
    r30 = r5;
    f30.d = f1.d;
    f31.d = f2.d;
    r31 = r6;
    r3 = (r1 + 44);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 32);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 20);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 8);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    f0.d = MemoryInline::FlatReadFloat32(r29);
    f1.d = PpcFmulsInline(f0.d, f30.d);
    f0.d = MemoryInline::FlatReadFloat32(r30);
    f0.d = PpcFmulsInline(f0.d, f31.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r1 + 32), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 16));
    f1.d = PpcFmulsInline(f0.d, f30.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 16));
    f0.d = PpcFmulsInline(f0.d, f31.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r1 + 36), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 32));
    f1.d = PpcFmulsInline(f0.d, f30.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 32));
    f0.d = PpcFmulsInline(f0.d, f31.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r1 + 40), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 4));
    f1.d = PpcFmulsInline(f0.d, f30.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 4));
    f0.d = PpcFmulsInline(f0.d, f31.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r1 + 44), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 20));
    f1.d = PpcFmulsInline(f0.d, f30.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 20));
    f0.d = PpcFmulsInline(f0.d, f31.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 48u, (r1 + 48), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 36));
    f1.d = PpcFmulsInline(f0.d, f30.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 36));
    f0.d = PpcFmulsInline(f0.d, f31.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 52u, (r1 + 52), f0.d);
    r3 = r28;
    r4 = (r1 + 32);
    r5 = (r1 + 44);
    ctx->lr = 0x80051A04u;
    if constexpr (KnownRegArgsCpuCall<0x800517A4u>(&func_800517A4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        const auto regargs_result_800517A4_14E4 = func_800517A4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800517A4_14E4);
        r4 = static_cast<uint32_t>(regargs_result_800517A4_14E4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
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
        InvokeDirectCpu<0x800517A4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    r0 = (r31 & 255);
}

loc_80051A0C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80051B54;
    }
}

loc_80051A10:
{
    r3 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32(r29);
    f2.d = MemoryInline::FlatReadFloat32((r29 + 16));
    f3.d = MemoryInline::FlatReadFloat32((r29 + 32));
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = (r1 + 8);
    ctx->lr = 0x80051A2Cu;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80050F88u>(ctx);
    f1 = ctx->fpr[1];
    f29.d = f1.d;
    r3 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32(r30);
    f2.d = MemoryInline::FlatReadFloat32((r30 + 16));
    f3.d = MemoryInline::FlatReadFloat32((r30 + 32));
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = (r1 + 8);
    ctx->lr = 0x80051A4Cu;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80050F88u>(ctx);
    f1 = ctx->fpr[1];
    f2.d = PpcFmulsInline(f29.d, f30.d);
    f0.d = PpcFmulsInline(f1.d, f31.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f0.d = MemoryInline::FlatReadFloat32(r28);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32(r28, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 16));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r28 + 16), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 32));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r28 + 32), f0.d);
    r3 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r29 + 4));
    f2.d = MemoryInline::FlatReadFloat32((r29 + 20));
    f3.d = MemoryInline::FlatReadFloat32((r29 + 36));
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = (r1 + 8);
    ctx->lr = 0x80051A98u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80050F88u>(ctx);
    f1 = ctx->fpr[1];
    f29.d = f1.d;
    r3 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 4));
    f2.d = MemoryInline::FlatReadFloat32((r30 + 20));
    f3.d = MemoryInline::FlatReadFloat32((r30 + 36));
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = (r1 + 8);
    ctx->lr = 0x80051AB8u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80050F88u>(ctx);
    f1 = ctx->fpr[1];
    f2.d = PpcFmulsInline(f29.d, f30.d);
    f0.d = PpcFmulsInline(f1.d, f31.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 4));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r28 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 20));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r28 + 20), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 36));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r28 + 36), f0.d);
    r3 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r29 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r29 + 24));
    f3.d = MemoryInline::FlatReadFloat32((r29 + 40));
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = (r1 + 8);
    ctx->lr = 0x80051B04u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80050F88u>(ctx);
    f1 = ctx->fpr[1];
    f29.d = f1.d;
    r3 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r30 + 24));
    f3.d = MemoryInline::FlatReadFloat32((r30 + 40));
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = (r1 + 8);
    ctx->lr = 0x80051B24u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80050F88u>(ctx);
    f1 = ctx->fpr[1];
    f2.d = PpcFmulsInline(f29.d, f30.d);
    f0.d = PpcFmulsInline(f1.d, f31.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 8));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r28 + 8), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 24));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r28 + 24), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 40));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r28 + 40), f0.d);
}

loc_80051B54:
{
    f0.d = MemoryInline::FlatReadFloat32((r29 + 12));
    f1.d = PpcFmulsInline(f0.d, f30.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 12));
    f0.d = PpcFmulsInline(f0.d, f31.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r28 + 12), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 28));
    f1.d = PpcFmulsInline(f0.d, f30.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 28));
    f0.d = PpcFmulsInline(f0.d, f31.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r28 + 28), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 44));
    f1.d = PpcFmulsInline(f0.d, f30.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 44));
    f0.d = PpcFmulsInline(f0.d, f31.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r28 + 44), f0.d);
    r0 = 120;
    addr_psqx_80051BA0_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80051BA0_loc_0));
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 64), 0, 72u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 48u, (r1 + 112));
    r0 = 104;
    addr_psqx_80051BAC_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80051BAC_loc_0));
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 32u, (r1 + 96));
    r0 = 88;
    addr_psqx_80051BB8_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f29, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80051BB8_loc_0));
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 16u, (r1 + 80));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 68u, (r1 + 132));
    ctx->lr = r0;
    r1 = (r1 + 128);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800518F8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800518F8_ra38_e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007E gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0xE000000F fpr_write=0xE00007FF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800518F8 func_800518F8 preserves=true fpr_mask=0x00000000
