#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803EF964(CpuContext* ctx);
extern "C" uint32_t func_803EF964_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_803F0AB0_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;
    uint32_t ctr = ctx->ctr;

    goto loc_803F0AB0;

loc_803F0AB0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    ctx->lr = 0x803F0AD0u;
    if constexpr (KnownRegArgsCpuCall<0x803EF964u>(&func_803EF964)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        const auto regargs_result_803EF964_6AA = func_803EF964_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803EF964_6AA;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x803EF964u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
    }
    r0 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r29 + 388), 0, 539u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r29 + 388), r0);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r29 + 392), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r29 + 396), r0);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r29 + 400), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r29 + 404), r0);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r29 + 408), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r29 + 412), r0);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r29 + 416), r0);
    }
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r29 + 420), r0);
    r30 = 0;
    r31 = (r29 + 424);
}

loc_803F0B00:
{
    r3 = r31;
    // inline leaf 0x803F085C (42 guest instruction(s))
    r6 = 0;
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 164u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, r3, r6);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -4852));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 76u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 76u, (r3 + 76), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 80u, (r3 + 80), f0.d);
    }
    MemoryInline::WriteResolved32(guest_range_1, 112u, (r3 + 112), r6);
    MemoryInline::WriteResolved32(guest_range_1, 36u, (r3 + 36), r6);
    MemoryInline::WriteResolved8(guest_range_1, 116u, (r3 + 116), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved32(guest_range_1, 148u, (r3 + 148), r6);
    r4 = 0x80570000u;
    r5 = (r4 + 11248);
    r4 = MemoryInline::FlatRead32(r5);
    r0 = MemoryInline::FlatRead32((r5 + 4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 152u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 152u, (r3 + 152), r4);
        MemoryInline::WriteResolved32(guest_range_1, 156u, (r3 + 156), r0);
    }
    r0 = MemoryInline::FlatRead32((r5 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 160u, (r3 + 160), r0);
    MemoryInline::WriteResolved32(guest_range_1, 40u, (r3 + 40), r6);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 84u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_1, 84u, (r3 + 84), r6);
        MemoryInline::WriteResolved32(guest_range_1, 88u, (r3 + 88), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 92u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_1, 92u, (r3 + 92), r6);
        MemoryInline::WriteResolved32(guest_range_1, 96u, (r3 + 96), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 100u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_1, 100u, (r3 + 100), r6);
        MemoryInline::WriteResolved32(guest_range_1, 104u, (r3 + 104), r6);
    }
    MemoryInline::WriteResolved32(guest_range_1, 108u, (r3 + 108), r6);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r3 + 4), r6);
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r3 + 8), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r3 + 12), r6);
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r3 + 16), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r3 + 20), r6);
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r3 + 24), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r3 + 28), r6);
        MemoryInline::WriteResolved32(guest_range_1, 32u, (r3 + 32), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_1, 44u, (r3 + 44), r6);
        MemoryInline::WriteResolved32(guest_range_1, 48u, (r3 + 48), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 52u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_1, 52u, (r3 + 52), r6);
        MemoryInline::WriteResolved32(guest_range_1, 56u, (r3 + 56), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 60u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_1, 60u, (r3 + 60), r6);
        MemoryInline::WriteResolved32(guest_range_1, 64u, (r3 + 64), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 68u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_1, 68u, (r3 + 68), r6);
        MemoryInline::WriteResolved32(guest_range_1, 72u, (r3 + 72), r6);
    }
    // end of inlined leaf 0x803F085C
    r31 = (r31 + 164);
    r30 = (r30 + 1);
}

loc_803F0B14:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(2))) {
        goto loc_803F0B00;
    }
}

loc_803F0B18:
{
    r0 = -1;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 448u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 448u, (r29 + 836), r0);
        MemoryInline::WriteResolved32(guest_range_0, 452u, (r29 + 840), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 456u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 456u, (r29 + 844), r0);
        MemoryInline::WriteResolved32(guest_range_0, 460u, (r29 + 848), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 464u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 464u, (r29 + 852), r0);
        MemoryInline::WriteResolved32(guest_range_0, 468u, (r29 + 856), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 472u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 472u, (r29 + 860), r0);
        MemoryInline::WriteResolved32(guest_range_0, 476u, (r29 + 864), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 480u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 480u, (r29 + 868), r0);
        MemoryInline::WriteResolved32(guest_range_0, 484u, (r29 + 872), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 488u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 488u, (r29 + 876), r0);
        MemoryInline::WriteResolved32(guest_range_0, 492u, (r29 + 880), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 496u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 496u, (r29 + 884), r0);
        MemoryInline::WriteResolved32(guest_range_0, 500u, (r29 + 888), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 504u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 504u, (r29 + 892), r0);
        MemoryInline::WriteResolved32(guest_range_0, 508u, (r29 + 896), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 512u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 512u, (r29 + 900), r0);
        MemoryInline::WriteResolved32(guest_range_0, 516u, (r29 + 904), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 520u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 520u, (r29 + 908), r0);
        MemoryInline::WriteResolved32(guest_range_0, 524u, (r29 + 912), r0);
    }
    MemoryInline::WriteResolved32(guest_range_0, 528u, (r29 + 916), r0);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -4848));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 532u, (r29 + 920), f0.d);
    r31 = 0;
    MemoryInline::WriteResolved8(guest_range_0, 536u, (r29 + 924), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 537u, (r29 + 925), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 538u, (r29 + 926), static_cast<uint8_t>(r31));
    r3 = (r29 + 928);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 24));
    ctr = r12;
    ctx->lr = 0x803F0B9Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    ctr = ctx->ctr;
    r3 = (r29 + 960);
    r4 = 0;
    r5 = 20;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r29 + 980);
    r4 = 0;
    r5 = 1;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r29 + 984);
    r4 = 0;
    r5 = 296;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r0 = 256;
    MemoryInline::FlatWrite32((r29 + 1280), r0);
    MemoryInline::FlatWrite32((r29 + 1284), r31);
    MemoryInline::FlatWrite32((r29 + 2204), r31);
    MemoryInline::FlatWrite32((r29 + 8808), r31);
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803F0AB0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803F0AB0_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803F0AB0 func_803F0AB0 preserves=true fpr_mask=0x00000000
