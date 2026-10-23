#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804C67B0(CpuContext* ctx);
extern "C" double func_804C67B0_ra18_36_0_2(CpuContext*, uint32_t, uint32_t, double, double, double, double);

extern "C" void func_80053EDC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_psqx_80054000_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f31 = ctx->fpr[31];

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_80053EDC;

loc_80053EDC:
{
    MemoryInline::FlatWriteRam32((r1 + -144), r1);
    r1 = (r1 + -144);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 148), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 128), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 136);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r29 = r3;
    r31 = r4;
    r30 = r5;
    r3 = (r5 & 65535);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80050218u>(ctx);
    f1 = ctx->fpr[1];
    f31.d = f1.d;
    r3 = (r30 & 65535);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x800502B0u>(ctx);
    f1 = ctx->fpr[1];
    r3 = (r1 + 56);
    r4 = 122;
    f2.d = f31.d;
    if constexpr (KnownRegArgsCpuCall<0x804C67B0u>(&func_804C67B0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[3] = f3;
        const auto regargs_result_804C67B0_86A = func_804C67B0_ra18_36_0_2(ctx, r3, r4, f1.d, f2.d, f4.d, f5.d);
        f1.d = regargs_result_804C67B0_86A;
        r0 = ctx->gpr[0];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x804C67B0u>(ctx);
        r0 = ctx->gpr[0];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
    }
    f0.d = MemoryInline::FlatReadFloat32((r1 + 56));
    f1.d = MemoryInline::FlatReadFloat32(r31);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 56), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 72));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 72), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 60));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 60), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 76));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 76), f0.d);
    f1.d = MemoryInline::FlatReadFloat32(r29);
    MemoryInline::FlatWriteRamFloat32((r1 + 68), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 4));
    MemoryInline::FlatWriteRamFloat32((r1 + 84), f0.d);
    r3 = (r1 + 8);
    f1.d = (-(f1.d));
    f2.d = (-(f0.d));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -32424));
    // inline leaf 0x804C6990 (13 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r2 + -2084));
    f4.d = MemoryInline::FlatReadFloat32((r2 + -2088));
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 48u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r3 + 12), f1.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r3 + 28), f2.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_0 = (r3 + 4);
    PPC_PsqStStackInline<0u, 0u>(ctx, r3_psq_tmp_0, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_1 = (r3 + 32);
    PPC_PsqStStackInline<0u, 0u>(ctx, r3_psq_tmp_1, PPC_PsFromScalarInline(f0.d));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f4.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r3 + 16), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r3 + 20), f4.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r3 + 24), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f4.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f3.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r3 + 40), f4.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r3 + 44), f3.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, r3, f4.d);
    // end of inlined leaf 0x804C6990
    r3 = (r1 + 56);
    r4 = (r1 + 8);
    r5 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x804C6300u>(ctx);
    r30 = 0x80670000u;
    r0 = MemoryInline::FlatRead32((r30 + -12896));
    r0 = (r0 & 4);
}

loc_80053FA8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80053FD8;
    }
}

loc_80053FAC:
{
    r30 = (r30 + -12896);
    r3 = (r30 + 116);
    // inline leaf 0x8005056C (1 guest instruction(s))
    // end of inlined leaf 0x8005056C
    r31 = r3;
    r3 = (r30 + 116);
    // inline leaf 0x8005056C (1 guest instruction(s))
    // end of inlined leaf 0x8005056C
    r4 = r3;
    r3 = (r1 + 56);
    r5 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x804C6300u>(ctx);
    goto loc_80053FFC;
}

loc_80053FD8:
{
    r3 = (r30 + -12896);
    r3 = (r3 + 116);
    // inline leaf 0x8005056C (1 guest instruction(s))
    // end of inlined leaf 0x8005056C
    r4 = r3;
    r3 = (r1 + 56);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x804C62C0u>(ctx);
    r0 = MemoryInline::FlatRead32((r30 + -12896));
    r0 = (r0 | 4);
    MemoryInline::FlatWriteRam32((r30 + -12896), r0);
}

loc_80053FFC:
{
    r0 = 136;
    addr_psqx_80054000_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80054000_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 128));
    r0 = MemoryInline::FlatRead32((r1 + 148));
    ctx->lr = r0;
    r1 = (r1 + 144);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000003F gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x80000033 fpr_write=0x8000003F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80053EDC func_80053EDC preserves=true fpr_mask=0x00000000
