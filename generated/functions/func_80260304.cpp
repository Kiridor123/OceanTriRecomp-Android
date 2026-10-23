#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802602AC(CpuContext* ctx);
extern "C" void func_802602AC_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8026A294(CpuContext* ctx);
extern "C" uint64_t func_8026A294_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_8026A2A0(CpuContext* ctx);
extern "C" uint32_t func_8026A2A0_ra18_2_8_0(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_8027A3A4(CpuContext* ctx);
extern "C" uint32_t func_8027A3A4_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" MkwStateFreeResult2 func_8026A2A0_statefree(uint32_t, uint32_t, PPC_FPR);
extern "C" void func_8026A2A0_statefree_v0(uint32_t, uint32_t, PPC_FPR);

extern "C" void func_80260304(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_psqx_802607C0_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t stackword8 = 0;
    uint32_t stackword9 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_80260304;

loc_80260304:
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
    r11 = (r1 + 48);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r27 = r3;
    r29 = 4004;
    r28 = 1820;
    r4 = MemoryInline::FlatRead8((r3 + 10));
    r5 = MemoryInline::FlatRead16((r3 + 12));
    r0 = MemoryInline::FlatRead8((r3 + 24));
}

loc_8026033C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80260358;
    }
}

loc_80260340:
{
}

loc_80260344:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(1))) {
        goto loc_80260358;
    }
}

loc_80260348:
{
}

loc_8026034C:
{
    if ((static_cast<uint32_t>(r5) > static_cast<uint32_t>(1))) {
        goto loc_80260358;
    }
}

loc_80260350:
{
    r29 = 2548;
    goto loc_80260428;
}

loc_80260358:
{
    r3 = r27;
    r4 = 1;
    r5 = 1;
    // inline leaf 0x8026FECC (12 guest instruction(s))
}

loc_inl1_0x8026FECC:
{
    r6 = MemoryInline::FlatRead8((r3 + 10));
    r0 = (r4 & 255);
}

loc_inl1_0x8026FED8:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl1_0x8026FEF4;
    }
}

loc_inl1_0x8026FEDC:
{
    r3 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r5 & 65535);
}

loc_inl1_0x8026FEE8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl1_0x8026FEF4;
    }
}

loc_inl1_0x8026FEEC:
{
    r3 = 1;
    goto loc_inl1_cont_8026FECC;
}

loc_inl1_0x8026FEF4:
{
    r3 = 0;
}

loc_inl1_cont_8026FECC:
{
    // end of inlined leaf 0x8026FECC
}

loc_8026036C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_80260388;
    }
}

loc_80260370:
{
    r3 = r27;
    r4 = 1;
    r5 = 5;
    // inline leaf 0x8026FECC (12 guest instruction(s))
}

loc_inl2_0x8026FECC:
{
    r6 = MemoryInline::FlatRead8((r3 + 10));
    r0 = (r4 & 255);
}

loc_inl2_0x8026FED8:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl2_0x8026FEF4;
    }
}

loc_inl2_0x8026FEDC:
{
    r3 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r5 & 65535);
}

loc_inl2_0x8026FEE8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl2_0x8026FEF4;
    }
}

loc_inl2_0x8026FEEC:
{
    r3 = 1;
    goto loc_inl2_cont_8026FECC;
}

loc_inl2_0x8026FEF4:
{
    r3 = 0;
}

loc_inl2_cont_8026FECC:
{
    // end of inlined leaf 0x8026FECC
}

loc_80260384:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80260390;
    }
}

loc_80260388:
{
    r29 = 1820;
    goto loc_80260428;
}

loc_80260390:
{
    r3 = r27;
    r4 = 1;
    r5 = 2;
    // inline leaf 0x8026FECC (12 guest instruction(s))
}

loc_inl3_0x8026FECC:
{
    r6 = MemoryInline::FlatRead8((r3 + 10));
    r0 = (r4 & 255);
}

loc_inl3_0x8026FED8:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl3_0x8026FEF4;
    }
}

loc_inl3_0x8026FEDC:
{
    r3 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r5 & 65535);
}

loc_inl3_0x8026FEE8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl3_0x8026FEF4;
    }
}

loc_inl3_0x8026FEEC:
{
    r3 = 1;
    goto loc_inl3_cont_8026FECC;
}

loc_inl3_0x8026FEF4:
{
    r3 = 0;
}

loc_inl3_cont_8026FECC:
{
    // end of inlined leaf 0x8026FECC
}

loc_802603A4:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_802603C0;
    }
}

loc_802603A8:
{
    r3 = r27;
    r4 = 1;
    r5 = 14;
    // inline leaf 0x8026FECC (12 guest instruction(s))
}

loc_inl4_0x8026FECC:
{
    r6 = MemoryInline::FlatRead8((r3 + 10));
    r0 = (r4 & 255);
}

loc_inl4_0x8026FED8:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl4_0x8026FEF4;
    }
}

loc_inl4_0x8026FEDC:
{
    r3 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r5 & 65535);
}

loc_inl4_0x8026FEE8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl4_0x8026FEF4;
    }
}

loc_inl4_0x8026FEEC:
{
    r3 = 1;
    goto loc_inl4_cont_8026FECC;
}

loc_inl4_0x8026FEF4:
{
    r3 = 0;
}

loc_inl4_cont_8026FECC:
{
    // end of inlined leaf 0x8026FECC
}

loc_802603BC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802603C8;
    }
}

loc_802603C0:
{
    r29 = 1456;
    goto loc_80260428;
}

loc_802603C8:
{
    r0 = MemoryInline::FlatRead8((r27 + 9));
}

loc_802603D0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_8026040C;
    }
}

loc_802603D4:
{
    r3 = r27;
    r4 = 192;
    // inline leaf 0x8026FEFC (10 guest instruction(s))
}

loc_inl5_0x8026FEFC:
{
    r0 = (r4 & -2147483648);
}

loc_inl5_0x8026FF04:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl5_0x8026FF14;
    }
}

loc_inl5_0x8026FF08:
{
    r0 = MemoryInline::FlatRead32((r3 + 860));
    r3 = (r0 & r4);
    goto loc_inl5_cont_8026FEFC;
}

loc_inl5_0x8026FF14:
{
    r3 = MemoryInline::FlatRead32((r3 + 864));
    r0 = (r4 & 2147483647);
    r3 = (r3 & r0);
}

loc_inl5_cont_8026FEFC:
{
    // end of inlined leaf 0x8026FEFC
}

loc_802603E4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80260404;
    }
}

loc_802603E8:
{
    r0 = MemoryInline::FlatRead8((r27 + 24));
}

loc_802603F0:
{
    r29 = 1092;
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802603FC;
    }
}

loc_802603F8:
{
    r29 = 1820;
}

loc_802603FC:
{
    r28 = 364;
    goto loc_80260428;
}

loc_80260404:
{
    r29 = 1820;
    goto loc_80260428;
}

loc_8026040C:
{
    r3 = r27;
    r4 = 1;
    r5 = 4;
    // inline leaf 0x8026FECC (12 guest instruction(s))
}

loc_inl6_0x8026FECC:
{
    r6 = MemoryInline::FlatRead8((r3 + 10));
    r0 = (r4 & 255);
}

loc_inl6_0x8026FED8:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl6_0x8026FEF4;
    }
}

loc_inl6_0x8026FEDC:
{
    r3 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r5 & 65535);
}

loc_inl6_0x8026FEE8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl6_0x8026FEF4;
    }
}

loc_inl6_0x8026FEEC:
{
    r3 = 1;
    goto loc_inl6_cont_8026FECC;
}

loc_inl6_0x8026FEF4:
{
    r3 = 0;
}

loc_inl6_cont_8026FECC:
{
    // end of inlined leaf 0x8026FECC
}

loc_80260420:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80260428;
    }
}

loc_80260424:
{
    r29 = 0;
}

loc_80260428:
{
    r3 = r27;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8026FE38u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80260434:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80260464;
    }
}

loc_80260438:
{
    r3 = r27;
    r4 = 0;
    r5 = 22;
    // inline leaf 0x8026FECC (12 guest instruction(s))
}

loc_inl7_0x8026FECC:
{
    r6 = MemoryInline::FlatRead8((r3 + 10));
    r0 = (r4 & 255);
}

loc_inl7_0x8026FED8:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl7_0x8026FEF4;
    }
}

loc_inl7_0x8026FEDC:
{
    r3 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r5 & 65535);
}

loc_inl7_0x8026FEE8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl7_0x8026FEF4;
    }
}

loc_inl7_0x8026FEEC:
{
    r3 = 1;
    goto loc_inl7_cont_8026FECC;
}

loc_inl7_0x8026FEF4:
{
    r3 = 0;
}

loc_inl7_cont_8026FECC:
{
    // end of inlined leaf 0x8026FECC
}

loc_8026044C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80260464;
    }
}

loc_80260450:
{
    r3 = r27;
    ctx->lr = 0x80260458u;
    if constexpr (KnownRegArgsCpuCall<0x8027A3A4u>(&func_8027A3A4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_8027A3A4_2B3E = func_8027A3A4_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8027A3A4_2B3E;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x8027A3A4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_8026045C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80260464;
    }
}

loc_80260460:
{
    r28 = 0;
}

loc_80260464:
{
    r3 = MemoryInline::FlatRead32((r27 + 88));
    r0 = MemoryInline::FlatRead32((r27 + 168));
    r0 = (r0 - r3);
    r26 = (r0 & 65535);
    r3 = r27;
    // inline leaf 0x8026A36C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 316));
    r3 = MemoryInline::FlatRead16((r3 + 84));
    // end of inlined leaf 0x8026A36C
    r31 = r3;
    r0 = (r3 & 65535);
}

loc_80260488:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_80260498;
    }
}

loc_8026048C:
{
}

loc_80260490:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_802604A0;
    }
}

loc_80260494:
{
    goto loc_802604A8;
}

loc_80260498:
{
    r4 = 128;
    goto loc_802604AC;
}

loc_802604A0:
{
    r4 = 160;
    goto loc_802604AC;
}

loc_802604A8:
{
    r4 = 0;
}

loc_802604AC:
{
    r0 = (r26 + r29);
    r3 = (r0 & 65535);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & -2);
}

loc_802604BC:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r0))) {
        goto loc_80260574;
    }
}

loc_802604C0:
{
    r0 = MemoryInline::FlatRead32((r27 + 168));
    MemoryInline::FlatWrite32((r27 + 88), r0);
    r3 = MemoryInline::FlatRead16((r27 + 176));
    r0 = (r3 + 768);
}

loc_802604D4:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(1536))) {
        goto loc_802604E4;
    }
}

loc_802604D8:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r27 + 176), static_cast<uint16_t>(r0));
    goto loc_802604FC;
}

loc_802604E4:
{
}

loc_802604E8:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(32768))) {
        goto loc_802604F8;
    }
}

loc_802604EC:
{
    r0 = (r3 + -768);
    MemoryInline::FlatWrite16((r27 + 176), static_cast<uint16_t>(r0));
    goto loc_802604FC;
}

loc_802604F8:
{
    MemoryInline::FlatWrite16((r27 + 176), static_cast<uint16_t>(r0));
}

loc_802604FC:
{
    r0 = (r26 + 256);
    r0 = (r0 & 65535);
}

loc_80260508:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(512))) {
        goto loc_80260544;
    }
}

loc_8026050C:
{
    r0 = MemoryInline::FlatRead16((r27 + 1608));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80260514:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8026052C;
    }
}

loc_80260518:
{
    r3 = r27;
    r4 = 1;
    r5 = -5;
    if constexpr (KnownRegArgsCpuCall<0x802602ACu>(&func_802602AC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        func_802602AC_ra38_0_0_0(ctx, r3, r4, r5);
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x802602ACu>(ctx);
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    goto loc_802605D8;
}

loc_8026052C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_802605D8;
    }
}

loc_80260530:
{
    r3 = r27;
    r4 = 1;
    r5 = 5;
    if constexpr (KnownRegArgsCpuCall<0x802602ACu>(&func_802602AC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        func_802602AC_ra38_0_0_0(ctx, r3, r4, r5);
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x802602ACu>(ctx);
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    goto loc_802605D8;
}

loc_80260544:
{
}

loc_80260548:
{
    if ((static_cast<uint32_t>(r26) >= static_cast<uint32_t>(32768))) {
        goto loc_80260560;
    }
}

loc_8026054C:
{
    r3 = r27;
    r4 = 0;
    r5 = -10;
    if constexpr (KnownRegArgsCpuCall<0x802602ACu>(&func_802602AC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        func_802602AC_ra38_0_0_0(ctx, r3, r4, r5);
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x802602ACu>(ctx);
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    goto loc_802605D8;
}

loc_80260560:
{
    r3 = r27;
    r4 = 0;
    r5 = 10;
    if constexpr (KnownRegArgsCpuCall<0x802602ACu>(&func_802602AC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        func_802602AC_ra38_0_0_0(ctx, r3, r4, r5);
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x802602ACu>(ctx);
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    goto loc_802605D8;
}

loc_80260574:
{
}

loc_80260578:
{
    if ((static_cast<uint32_t>(r26) >= static_cast<uint32_t>(32768))) {
        goto loc_802605AC;
    }
}

loc_8026057C:
{
    r0 = MemoryInline::FlatRead32((r27 + 88));
    r0 = (r0 + r29);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite32((r27 + 88), r0);
    r0 = MemoryInline::FlatRead16((r27 + 176));
    r0 = (r0 - r4);
    MemoryInline::FlatWrite16((r27 + 176), static_cast<uint16_t>(r0));
    r3 = r27;
    r4 = 0;
    r5 = -10;
    if constexpr (KnownRegArgsCpuCall<0x802602ACu>(&func_802602AC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        func_802602AC_ra38_0_0_0(ctx, r3, r4, r5);
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x802602ACu>(ctx);
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    goto loc_802605D8;
}

loc_802605AC:
{
    r0 = MemoryInline::FlatRead32((r27 + 88));
    r0 = (r0 - r29);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite32((r27 + 88), r0);
    r0 = MemoryInline::FlatRead16((r27 + 176));
    r0 = (r0 + r4);
    MemoryInline::FlatWrite16((r27 + 176), static_cast<uint16_t>(r0));
    r3 = r27;
    r4 = 0;
    r5 = 10;
    if constexpr (KnownRegArgsCpuCall<0x802602ACu>(&func_802602AC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        func_802602AC_ra38_0_0_0(ctx, r3, r4, r5);
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x802602ACu>(ctx);
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
}

loc_802605D8:
{
    r4 = MemoryInline::FlatRead16((r27 + 176));
    r3 = (r4 + 65536);
    r0 = (r3 + -2560);
    r0 = (r0 & 65535);
}

loc_802605EC:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(60416))) {
        goto loc_80260610;
    }
}

loc_802605F0:
{
}

loc_802605F4:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(32768))) {
        goto loc_80260608;
    }
}

loc_802605F8:
{
    r3 = 65536;
    r0 = (r3 + -2560);
    MemoryInline::FlatWrite16((r27 + 176), static_cast<uint16_t>(r0));
    goto loc_80260610;
}

loc_80260608:
{
    r0 = 2560;
    MemoryInline::FlatWrite16((r27 + 176), static_cast<uint16_t>(r0));
}

loc_80260610:
{
    r4 = MemoryInline::FlatRead32((r27 + 84));
    r5 = MemoryInline::FlatRead32((r27 + 172));
    r0 = (r5 - r4);
    r6 = (r0 & 65535);
    r0 = (r6 + r28);
    r3 = (r0 & 65535);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
}

loc_80260630:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r0))) {
        goto loc_8026063C;
    }
}

loc_80260634:
{
    MemoryInline::FlatWrite32((r27 + 84), r5);
    goto loc_80260660;
}

loc_8026063C:
{
}

loc_80260640:
{
    if ((static_cast<uint32_t>(r6) >= static_cast<uint32_t>(32768))) {
        goto loc_80260654;
    }
}

loc_80260644:
{
    r0 = (r4 + r28);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite32((r27 + 84), r0);
    goto loc_80260660;
}

loc_80260654:
{
    r0 = (r4 - r28);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite32((r27 + 84), r0);
}

loc_80260660:
{
    r3 = (r31 & 65535);
    r0 = (r3 + -119);
}

loc_8026066C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_80260680;
    }
}

loc_80260670:
{
}

loc_80260674:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(101))) {
        goto loc_80260680;
    }
}

loc_80260678:
{
}

loc_8026067C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(115))) {
        goto loc_802607BC;
    }
}

loc_80260680:
{
    r0 = MemoryInline::FlatRead16((r27 + 1608));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80260688:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_802606B0;
    }
}

loc_8026068C:
{
    r3 = r27;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -15512));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8026A2A0u) && KnownTranslatedCpuCall<0x8026A2A0u>::kAvailable && !KnownTranslatedCpuCall<0x8026A2A0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8026A2A0u>()) {
        func_8026A2A0_statefree_v0(r3, r4, f1);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8026A2A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = r27;
    r4 = 1;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -15520));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8026A2A0u) && KnownTranslatedCpuCall<0x8026A2A0u>::kAvailable && !KnownTranslatedCpuCall<0x8026A2A0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8026A2A0u>()) {
        const auto state_free_result_8026A2A0_5D49 = func_8026A2A0_statefree(r3, r4, f1);
        r0 = static_cast<uint32_t>(state_free_result_8026A2A0_5D49[0]);
        r3 = static_cast<uint32_t>(state_free_result_8026A2A0_5D49[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8026A2A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    goto loc_802607BC;
}

loc_802606B0:
{
    f1.d = MemoryInline::FlatReadFloat64((r2 + -15384));
    r0 = (r0 ^ -2147483648);
    stackword8 = r0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r0 = 1127219200;
    stackword9 = r0;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword9), static_cast<uint32_t>(stackword8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15060));
    f31.d = PpcFmulsInline(f0.d, f1.d);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80260720;
    }
}

loc_802606D8:
{
    r0 = (r31 & 65535);
}

loc_802606E0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(101))) {
        goto loc_80260700;
    }
}

loc_802606E4:
{
}

loc_802606E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(115))) {
        goto loc_80260708;
    }
}

loc_802606EC:
{
}

loc_802606F0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(119))) {
        goto loc_80260710;
    }
}

loc_802606F4:
{
}

loc_802606F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(120))) {
        goto loc_80260718;
    }
}

loc_802606FC:
{
    goto loc_8026076C;
}

loc_80260700:
{
    r30 = 111;
    goto loc_8026076C;
}

loc_80260708:
{
    r30 = 127;
    goto loc_8026076C;
}

loc_80260710:
{
    r30 = 133;
    goto loc_8026076C;
}

loc_80260718:
{
    r30 = 129;
    goto loc_8026076C;
}

loc_80260720:
{
    r0 = (r31 & 65535);
}

loc_80260728:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(101))) {
        goto loc_80260748;
    }
}

loc_8026072C:
{
}

loc_80260730:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(115))) {
        goto loc_80260750;
    }
}

loc_80260734:
{
}

loc_80260738:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(119))) {
        goto loc_80260758;
    }
}

loc_8026073C:
{
}

loc_80260740:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(120))) {
        goto loc_80260760;
    }
}

loc_80260744:
{
    goto loc_80260764;
}

loc_80260748:
{
    r30 = 125;
    goto loc_80260764;
}

loc_80260750:
{
    r30 = 128;
    goto loc_80260764;
}

loc_80260758:
{
    r30 = 134;
    goto loc_80260764;
}

loc_80260760:
{
    r30 = 130;
}

loc_80260764:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15440));
    f31.d = PpcFmulsInline(f31.d, f0.d);
}

loc_8026076C:
{
    r3 = r27;
    // inline leaf 0x8026A3B0 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 316));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 120));
    // end of inlined leaf 0x8026A3B0
    f0.d = PPC_Fctiwz(f1.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 8), f0.d);
    r0 = fctiwzword0;
    r7 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r3 = r27;
    r4 = 1;
    r5 = r30;
    r6 = 0;
    ctx->lr = 0x80260798u;
    if constexpr (KnownRegArgsCpuCall<0x8026A294u>(&func_8026A294)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_8026A294_6F47 = func_8026A294_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8026A294_6F47);
        r4 = static_cast<uint32_t>(regargs_result_8026A294_6F47 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8026A294u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
    r3 = r27;
    r4 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15512));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8026A2A0u) && KnownTranslatedCpuCall<0x8026A2A0u>::kAvailable && !KnownTranslatedCpuCall<0x8026A2A0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8026A2A0u>()) {
        func_8026A2A0_statefree_v0(r3, r4, f1);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8026A2A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = r27;
    r4 = 1;
    f1.d = f31.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8026A2A0u) && KnownTranslatedCpuCall<0x8026A2A0u>::kAvailable && !KnownTranslatedCpuCall<0x8026A2A0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8026A2A0u>()) {
        const auto state_free_result_8026A2A0_7C51 = func_8026A2A0_statefree(r3, r4, f1);
        r0 = static_cast<uint32_t>(state_free_result_8026A2A0_7C51[0]);
        r3 = static_cast<uint32_t>(state_free_result_8026A2A0_7C51[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8026A2A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_802607BC:
{
    r0 = 56;
    addr_psqx_802607C0_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_802607C0_loc_0));
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 24), 0, 48u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 24u, (r1 + 48));
    r11 = (r1 + 48);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000038FF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xF0003FFB fpr_write=0xF0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80260304 func_80260304 preserves=true fpr_mask=0x00000000
