#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80458BD4_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t addr_psqx_80458BEC_loc_0 = 0;
    uint32_t addr_psqx_80458BF8_loc_0 = 0;
    uint32_t addr_psqx_80458C04_loc_0 = 0;
    uint32_t addr_psqx_80458C10_loc_0 = 0;
    uint32_t addr_psqx_80458C1C_loc_0 = 0;
    uint32_t addr_psqx_80458C28_loc_0 = 0;
    uint32_t addr_psqx_80458C34_loc_0 = 0;
    uint32_t addr_psqx_80458C40_loc_0 = 0;
    uint32_t addr_psqx_80458C4C_loc_0 = 0;
    uint32_t addr_psqx_80458C58_loc_0 = 0;
    uint32_t addr_psqx_80458C64_loc_0 = 0;
    uint32_t addr_psqx_80458C70_loc_0 = 0;
    uint32_t addr_psqx_80458C7C_loc_0 = 0;
    uint32_t addr_psqx_80458C88_loc_0 = 0;
    uint32_t addr_psqx_80458C94_loc_0 = 0;
    uint32_t addr_psqx_80458CA0_loc_0 = 0;
    uint32_t addr_psqx_80458CAC_loc_0 = 0;
    uint32_t addr_psqx_80458CB8_loc_0 = 0;
    uint32_t r0_mtcrf_preserve_0 = 0;
    uint32_t r0_mtcrf_src_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r14 = ctx->gpr[14];
    uint32_t r15 = ctx->gpr[15];
    uint32_t r16 = ctx->gpr[16];
    uint32_t r17 = ctx->gpr[17];
    uint32_t r18 = ctx->gpr[18];
    uint32_t r19 = ctx->gpr[19];
    uint32_t r20 = ctx->gpr[20];
    uint32_t r21 = ctx->gpr[21];
    uint32_t r22 = ctx->gpr[22];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f14 = ctx->fpr[14];
    PPC_FPR f15 = ctx->fpr[15];
    PPC_FPR f16 = ctx->fpr[16];
    PPC_FPR f17 = ctx->fpr[17];
    PPC_FPR f18 = ctx->fpr[18];
    PPC_FPR f19 = ctx->fpr[19];
    PPC_FPR f20 = ctx->fpr[20];
    PPC_FPR f21 = ctx->fpr[21];
    PPC_FPR f22 = ctx->fpr[22];
    PPC_FPR f23 = ctx->fpr[23];
    PPC_FPR f24 = ctx->fpr[24];
    PPC_FPR f25 = ctx->fpr[25];
    PPC_FPR f26 = ctx->fpr[26];
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_80458BD4;

loc_80458BD4:
{
    r8 = r5;
    r2 = r4;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 224), 0, 432u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 416u, (r3 + 640));
    r0_mtcrf_src_0 = (r0 & -1);
    r0_mtcrf_preserve_0 = (cr & 0);
    cr = (r0_mtcrf_preserve_0 | r0_mtcrf_src_0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 340u);
        if (resolved_pair.valid) {
            r13 = resolved_pair.first;
            r14 = resolved_pair.second;
        } else {
            r13 = MemoryInline::ReadResolved32(guest_range_0, 340u, (r3 + 564));
            r14 = MemoryInline::ReadResolved32(guest_range_0, 344u, (r3 + 568));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 348u);
        if (resolved_pair.valid) {
            r15 = resolved_pair.first;
            r16 = resolved_pair.second;
        } else {
            r15 = MemoryInline::ReadResolved32(guest_range_0, 348u, (r3 + 572));
            r16 = MemoryInline::ReadResolved32(guest_range_0, 352u, (r3 + 576));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 356u);
        if (resolved_pair.valid) {
            r17 = resolved_pair.first;
            r18 = resolved_pair.second;
        } else {
            r17 = MemoryInline::ReadResolved32(guest_range_0, 356u, (r3 + 580));
            r18 = MemoryInline::ReadResolved32(guest_range_0, 360u, (r3 + 584));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 364u);
        if (resolved_pair.valid) {
            r19 = resolved_pair.first;
            r20 = resolved_pair.second;
        } else {
            r19 = MemoryInline::ReadResolved32(guest_range_0, 364u, (r3 + 588));
            r20 = MemoryInline::ReadResolved32(guest_range_0, 368u, (r3 + 592));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 372u);
        if (resolved_pair.valid) {
            r21 = resolved_pair.first;
            r22 = resolved_pair.second;
        } else {
            r21 = MemoryInline::ReadResolved32(guest_range_0, 372u, (r3 + 596));
            r22 = MemoryInline::ReadResolved32(guest_range_0, 376u, (r3 + 600));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 380u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_0, 380u, (r3 + 604));
            r24 = MemoryInline::ReadResolved32(guest_range_0, 384u, (r3 + 608));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 388u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_0, 388u, (r3 + 612));
            r26 = MemoryInline::ReadResolved32(guest_range_0, 392u, (r3 + 616));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 396u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_0, 396u, (r3 + 620));
            r28 = MemoryInline::ReadResolved32(guest_range_0, 400u, (r3 + 624));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 404u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_0, 404u, (r3 + 628));
            r30 = MemoryInline::ReadResolved32(guest_range_0, 408u, (r3 + 632));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_0, 412u, (r3 + 636));
    r7 = (r3 + 232);
    addr_psqx_80458BEC_loc_0 = r7;
    PpcSetPairedFprInline(f14, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80458BEC_loc_0));
    f14.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 0u, (r3 + 224));
    r7 = (r3 + 248);
    addr_psqx_80458BF8_loc_0 = r7;
    PpcSetPairedFprInline(f15, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80458BF8_loc_0));
    f15.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 16u, (r3 + 240));
    r7 = (r3 + 264);
    addr_psqx_80458C04_loc_0 = r7;
    PpcSetPairedFprInline(f16, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80458C04_loc_0));
    f16.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 32u, (r3 + 256));
    r7 = (r3 + 280);
    addr_psqx_80458C10_loc_0 = r7;
    PpcSetPairedFprInline(f17, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80458C10_loc_0));
    f17.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 48u, (r3 + 272));
    r7 = (r3 + 296);
    addr_psqx_80458C1C_loc_0 = r7;
    PpcSetPairedFprInline(f18, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80458C1C_loc_0));
    f18.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 64u, (r3 + 288));
    r7 = (r3 + 312);
    addr_psqx_80458C28_loc_0 = r7;
    PpcSetPairedFprInline(f19, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80458C28_loc_0));
    f19.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 80u, (r3 + 304));
    r7 = (r3 + 328);
    addr_psqx_80458C34_loc_0 = r7;
    PpcSetPairedFprInline(f20, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80458C34_loc_0));
    f20.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 96u, (r3 + 320));
    r7 = (r3 + 344);
    addr_psqx_80458C40_loc_0 = r7;
    PpcSetPairedFprInline(f21, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80458C40_loc_0));
    f21.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 112u, (r3 + 336));
    r7 = (r3 + 360);
    addr_psqx_80458C4C_loc_0 = r7;
    PpcSetPairedFprInline(f22, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80458C4C_loc_0));
    f22.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 128u, (r3 + 352));
    r7 = (r3 + 376);
    addr_psqx_80458C58_loc_0 = r7;
    PpcSetPairedFprInline(f23, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80458C58_loc_0));
    f23.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 144u, (r3 + 368));
    r7 = (r3 + 392);
    addr_psqx_80458C64_loc_0 = r7;
    PpcSetPairedFprInline(f24, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80458C64_loc_0));
    f24.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 160u, (r3 + 384));
    r7 = (r3 + 408);
    addr_psqx_80458C70_loc_0 = r7;
    PpcSetPairedFprInline(f25, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80458C70_loc_0));
    f25.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 176u, (r3 + 400));
    r7 = (r3 + 424);
    addr_psqx_80458C7C_loc_0 = r7;
    PpcSetPairedFprInline(f26, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80458C7C_loc_0));
    f26.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 192u, (r3 + 416));
    r7 = (r3 + 440);
    addr_psqx_80458C88_loc_0 = r7;
    PpcSetPairedFprInline(f27, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80458C88_loc_0));
    f27.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 208u, (r3 + 432));
    r7 = (r3 + 456);
    addr_psqx_80458C94_loc_0 = r7;
    PpcSetPairedFprInline(f28, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80458C94_loc_0));
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 224u, (r3 + 448));
    r7 = (r3 + 472);
    addr_psqx_80458CA0_loc_0 = r7;
    PpcSetPairedFprInline(f29, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80458CA0_loc_0));
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 240u, (r3 + 464));
    r7 = (r3 + 488);
    addr_psqx_80458CAC_loc_0 = r7;
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80458CAC_loc_0));
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 256u, (r3 + 480));
    r7 = (r3 + 504);
    addr_psqx_80458CB8_loc_0 = r7;
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80458CB8_loc_0));
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 272u, (r3 + 496));
    ctx->lr = r8;
    r1 = MemoryInline::ReadResolved32(guest_range_0, 428u, (r3 + 652));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 420u, (r3 + 644));
    r3 = MemoryInline::FlatRead32(r3);
    MemoryInline::FlatWriteRam32(r1, r3);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[2] = r2;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[13] = r13;
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[14] = f14;
    ctx->fpr[15] = f15;
    ctx->fpr[16] = f16;
    ctx->fpr[17] = f17;
    ctx->fpr[18] = f18;
    ctx->fpr[19] = f19;
    ctx->fpr[20] = f20;
    ctx->fpr[21] = f21;
    ctx->fpr[22] = f22;
    ctx->fpr[23] = f23;
    ctx->fpr[24] = f24;
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return r3;
}

}

extern "C" void func_80458BD4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80458BD4_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0xFFFFE18F gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0xFFFFC000 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80458BD4 func_80458BD4 preserves=false fpr_mask=0xFFFFC000
