#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8009EF58(CpuContext* ctx);
extern "C" uint64_t func_8009EF58_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_800A035C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_psqx_800A0D3C_loc_0 = 0;
    uint32_t addr_psqx_800A0D48_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_16 = 0;
    uint32_t r0_rot_17 = 0;
    uint32_t r0_rot_18 = 0;
    uint32_t r0_rot_19 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_20 = 0;
    uint32_t r0_rot_21 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r22_addr_0 = 0;
    uint32_t r22_addr_1 = 0;
    uint32_t r22_addr_2 = 0;
    uint32_t r24_addr_0 = 0;
    uint32_t r24_addr_1 = 0;
    uint32_t r24_addr_2 = 0;
    uint32_t r24_addr_3 = 0;
    uint32_t r25_addr_0 = 0;
    uint32_t r25_addr_1 = 0;
    uint32_t r25_addr_2 = 0;
    uint32_t r25_addr_3 = 0;
    uint32_t r26_rot_0 = 0;
    uint32_t r26_rot_1 = 0;
    uint32_t r26_rot_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_10 = 0;
    uint32_t r5_rot_11 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_rot_5 = 0;
    uint32_t r5_rot_6 = 0;
    uint32_t r5_rot_7 = 0;
    uint32_t r5_rot_8 = 0;
    uint32_t r5_rot_9 = 0;
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
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
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
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_800A035C;

loc_800A035C:
{
    MemoryInline::FlatWriteRam32((r1 + -160), r1);
    r1 = (r1 + -160);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 164), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 144), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 152);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 128), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 136);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    r11 = (r1 + 128);
    // inline leaf 0x80457470 (12 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -44), 0, 44u, false, true);
    // end of inlined leaf 0x80457470
    r24 = r3;
    r31 = r4;
    r23 = r5;
    r22 = r6;
    r21 = r7;
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 64), r0);
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 72), r0);
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r11 = (r3 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_800A03C8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A03E0;
    }
}

loc_800A03CC:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 2130706432);
}

loc_800A03D8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A03E0;
    }
}

loc_800A03DC:
{
    r10 = 0;
}

loc_800A03E0:
{
}

loc_800A03E4:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_800A03FC;
    }
}

loc_800A03E8:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 1879048192);
}

loc_800A03F4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A03FC;
    }
}

loc_800A03F8:
{
    r9 = 0;
}

loc_800A03FC:
{
}

loc_800A0400:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800A0414;
    }
}

loc_800A0404:
{
    r0 = (r11 + 1073741824);
}

loc_800A040C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A0414;
    }
}

loc_800A0410:
{
    r8 = 0;
}

loc_800A0414:
{
}

loc_800A0418:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800A0430;
    }
}

loc_800A041C:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 1056964608);
}

loc_800A0428:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A0430;
    }
}

loc_800A042C:
{
    r7 = 0;
}

loc_800A0430:
{
}

loc_800A0434:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800A044C;
    }
}

loc_800A0438:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 805306368);
}

loc_800A0444:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A044C;
    }
}

loc_800A0448:
{
    r6 = 0;
}

loc_800A044C:
{
}

loc_800A0450:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800A0468;
    }
}

loc_800A0454:
{
    r3 = (r3 & -16384);
    r0 = (r3 + 536870912);
}

loc_800A0460:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A0468;
    }
}

loc_800A0464:
{
    r5 = 0;
}

loc_800A0468:
{
}

loc_800A046C:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800A0490;
    }
}

loc_800A0470:
{
    r3 = 0x80590000u;
    r3 = (r3 + 9768);
    r4 = 1306;
    r5 = 0x80590000u;
    r5 = (r5 + 10060);
    r6 = r24;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800A0490u;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_800A0490:
{
    r4 = 1;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = (r31 & -16777216);
    r0 = (r10 + -2147483648);
}

loc_800A04B4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A04CC;
    }
}

loc_800A04B8:
{
    r3 = (r31 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800A04C4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A04CC;
    }
}

loc_800A04C8:
{
    r9 = 0;
}

loc_800A04CC:
{
}

loc_800A04D0:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800A04E8;
    }
}

loc_800A04D4:
{
    r3 = (r31 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800A04E0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A04E8;
    }
}

loc_800A04E4:
{
    r8 = 0;
}

loc_800A04E8:
{
}

loc_800A04EC:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800A0500;
    }
}

loc_800A04F0:
{
    r0 = (r10 + 1073741824);
}

loc_800A04F8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A0500;
    }
}

loc_800A04FC:
{
    r7 = 0;
}

loc_800A0500:
{
}

loc_800A0504:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800A051C;
    }
}

loc_800A0508:
{
    r3 = (r31 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800A0514:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A051C;
    }
}

loc_800A0518:
{
    r6 = 0;
}

loc_800A051C:
{
}

loc_800A0520:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800A0538;
    }
}

loc_800A0524:
{
    r3 = (r31 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800A0530:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A0538;
    }
}

loc_800A0534:
{
    r5 = 0;
}

loc_800A0538:
{
}

loc_800A053C:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800A0554;
    }
}

loc_800A0540:
{
    r3 = (r31 & -16384);
    r0 = (r3 + 536870912);
}

loc_800A054C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A0554;
    }
}

loc_800A0550:
{
    r4 = 0;
}

loc_800A0554:
{
}

loc_800A0558:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800A057C;
    }
}

loc_800A055C:
{
    r3 = 0x80590000u;
    r3 = (r3 + 9768);
    r4 = 1307;
    r5 = 0x80590000u;
    r5 = (r5 + 10116);
    r6 = r31;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800A057Cu;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_800A057C:
{
    r28 = MemoryInline::FlatRead8((r24 + 3));
    r3 = r24;
    r4 = (r1 + 56);
    r5 = (r1 + 52);
    r6 = (r1 + 48);
    r7 = (r1 + 44);
    r8 = (r1 + 40);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    InvokeDirectCpu<0x8009F290u>(ctx);
    mkw_gqr0 = ctx->gqr[0];
    r3 = r21;
    r4 = MemoryInline::FlatRead32((r1 + 56));
    r5 = r23;
    r6 = (r1 + 22);
    r7 = (r1 + 36);
    r8 = (r1 + 32);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    InvokeDirectCpu<0x8009CE20u>(ctx);
    mkw_gqr0 = ctx->gqr[0];
    r0 = MemoryInline::FlatRead32((r1 + 32));
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    r3 = r28;
    // inline leaf 0x8009F8AC (5 guest instruction(s))
    r0 = (r3 & 255);
    r3 = 0x80590000u;
    r3 = (r3 + 9512);
    r3_addr_0 = (r3 + r0);
    r3 = MemoryInline::FlatRead8(r3_addr_0);
    // end of inlined leaf 0x8009F8AC
    r30 = r3;
    r3 = r28;
    // inline leaf 0x8009F898 (5 guest instruction(s))
    r0 = (r3 & 255);
    r3 = 0x80590000u;
    r3 = (r3 + 9256);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead8(r3_addr_1);
    // end of inlined leaf 0x8009F898
    r0 = (r3 & 255);
}

loc_800A05DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800A0D38;
    }
}

loc_800A05E0:
{
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r3 = (r3_rot_1 & -4);
    r27 = (r3 + 12);
    r26_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r26 = (r26_rot_1 & -8);
    r29 = (r26 + 4);
    r3 = MemoryInline::FlatRead32((r1 + 52));
    r25 = (r3 + 4);
    r3 = MemoryInline::FlatRead16(r3);
    r0 = (r3 + -1);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = (r1 + 24);
    r4 = (r1 + 16);
    r5 = (r1 + 20);
    r6 = (r1 + 18);
    r7 = MemoryInline::FlatRead16((r1 + 22));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 36));
    r8 = r25;
    r9 = r27;
    r10 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x8009EFECu>(ctx);
    mkw_gqr0 = ctx->gqr[0];
    r0 = MemoryInline::FlatRead8((r1 + 16));
}

loc_800A0634:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800A079C;
    }
}

loc_800A0638:
{
    r0 = MemoryInline::FlatRead32((r1 + 24));
    r0 = (r0 * r27);
    r21 = (r25 + r0);
    r21 = (r21 + 12);
    r0 = MemoryInline::FlatRead8((r21 + -10));
}

loc_800A0650:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800A0690;
    }
}

loc_800A0654:
{
    r4 = 1;
    r0 = (r30 & 255);
    goto loc_800A0684;
}

loc_800A0660:
{
    r3 = (r28 & r4);
}

loc_800A0668:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800A0678;
    }
}

loc_800A066C:
{
    f0.d = MemoryInline::FlatReadFloat32(r21);
    r21 = (r21 + 4);
    MemoryInline::FlatWriteFloat32(r31, f0.d);
}

loc_800A0678:
{
    r31 = (r31 + 4);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & -2);
    r4 = (r3 & 65535);
}

loc_800A0684:
{
}

loc_800A0688:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(r0))) {
        goto loc_800A0660;
    }
}

loc_800A068C:
{
    goto loc_800A0D38;
}

loc_800A0690:
{
    r23 = MemoryInline::FlatRead16(r21);
    r3 = (r22 & 65535);
    r4 = MemoryInline::FlatRead32((r1 + 56));
    r4 = MemoryInline::FlatRead16((r4 + 6));
    r5 = r23;
    r6 = MemoryInline::FlatRead32((r1 + 32));
    if constexpr (KnownRegArgsCpuCall<0x8009EF58u>(&func_8009EF58)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_8009EF58_3B72 = func_8009EF58_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8009EF58_3B72);
        r4 = static_cast<uint32_t>(regargs_result_8009EF58_3B72 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x8009EF58u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r0 = MemoryInline::FlatRead8((r21 + -10));
    r0 = (r0 & 2);
}

loc_800A06B8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800A06D0;
    }
}

loc_800A06BC:
{
    r4 = MemoryInline::FlatRead32((r1 + 48));
    r0 = (r23 * r29);
    r4 = (r4 + r0);
    r22 = (r4 + 4);
    goto loc_800A06F8;
}

loc_800A06D0:
{
    r6 = MemoryInline::FlatRead32((r1 + 44));
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r5 = (r5_rot_1 & 65535);
    r4 = MemoryInline::FlatRead16(r6);
    r0 = PPC_Divwu(static_cast<uint32_t>(r5), static_cast<uint32_t>(r4));
    r0 = (r0 * r4);
    r0 = (r5 - r0);
    r0 = (r29 * r0);
    r4 = (r6 + r0);
    r22 = (r4 + 4);
    // inline leaf 0x8009EF40 (6 guest instruction(s))
    r4 = 196608;
    r0 = (r4 + 17405);
    r3 = (r3 * r0);
    r3 = (r3 + 2555904);
    r3 = (r3 + -24893);
    // end of inlined leaf 0x8009EF40
}

loc_800A06F8:
{
    r23 = 0;
    r22_addr_1 = (r22 + r26);
    r0 = MemoryInline::FlatRead8(r22_addr_1);
}

loc_800A0704:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800A071C;
    }
}

loc_800A0708:
{
    r0 = (r3 & 65536);
}

loc_800A0710:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800A0718;
    }
}

loc_800A0714:
{
    r23 = 1;
}

loc_800A0718:
{
    // inline leaf 0x8009EF40 (6 guest instruction(s))
    r4 = 196608;
    r0 = (r4 + 17405);
    r3 = (r3 * r0);
    r3 = (r3 + 2555904);
    r3 = (r3 + -24893);
    // end of inlined leaf 0x8009EF40
}

loc_800A071C:
{
    r24 = 1;
    f30.d = MemoryInline::FlatReadFloat64((r2 + -31456));
    r21 = (r30 & 255);
    goto loc_800A0790;
}

loc_800A072C:
{
    r0 = (r28 & r24);
}

loc_800A0734:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800A076C;
    }
}

loc_800A0738:
{
    f2.d = MemoryInline::FlatReadFloat32(r22);
    f1.d = MemoryInline::FlatReadFloat32((r22 + 4));
    r22 = (r22 + 8);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0 = (r0_rot_2 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 64));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f30.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
}

loc_800A0760:
{
    if ((static_cast<int32_t>(r23) == static_cast<int32_t>(0))) {
        goto loc_800A0768;
    }
}

loc_800A0764:
{
    f0.d = (-(f0.d));
}

loc_800A0768:
{
    MemoryInline::FlatWriteFloat32(r31, f0.d);
}

loc_800A076C:
{
    r31 = (r31 + 4);
    r4 = MemoryInline::FlatRead32((r1 + 56));
    r0 = MemoryInline::FlatRead8((r4 + 4));
    r0 = (r0 & 4);
}

loc_800A0780:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800A0788;
    }
}

loc_800A0784:
{
    // inline leaf 0x8009EF40 (6 guest instruction(s))
    r4 = 196608;
    r0 = (r4 + 17405);
    r3 = (r3 * r0);
    r3 = (r3 + 2555904);
    r3 = (r3 + -24893);
    // end of inlined leaf 0x8009EF40
}

loc_800A0788:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r24), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & -2);
    r24 = (r0 & 65535);
}

loc_800A0790:
{
}

loc_800A0794:
{
    if ((static_cast<int32_t>(r24) <= static_cast<int32_t>(r21))) {
        goto loc_800A072C;
    }
}

loc_800A0798:
{
    goto loc_800A0D38;
}

loc_800A079C:
{
    r3 = MemoryInline::FlatRead32((r1 + 56));
    r4 = MemoryInline::FlatRead32((r1 + 52));
    r5 = MemoryInline::FlatRead32((r1 + 24));
    r6 = (r1 + 32);
    r7 = (r1 + 28);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x8009EAB0u>(ctx);
    mkw_gqr0 = ctx->gqr[0];
    r3 = MemoryInline::FlatRead16((r1 + 20));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -31456));
    MemoryInline::FlatWriteRam32((r1 + 76), r3);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 72));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 36));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r0 = MemoryInline::FlatRead16((r1 + 18));
    r0 = (r0 - r3);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -31448));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 64));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f0.d));
    r4 = MemoryInline::FlatRead32((r1 + 24));
    r0 = (r4 * r27);
    r3 = (r25 + r0);
    r24 = (r3 + 12);
    r0 = (r4 + 1);
    r0 = (r0 * r27);
    r25 = (r25 + r0);
    r25 = (r25 + 12);
    r27 = (r3 + 4);
    r3 = MemoryInline::FlatRead8((r24 + -10));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_1 & 1);
    r3 = MemoryInline::FlatRead8((r25 + -10));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_5 & 1);
}

loc_800A0838:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800A0898;
    }
}

loc_800A083C:
{
}

loc_800A0840:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800A0898;
    }
}

loc_800A0844:
{
    r22 = 1;
    r21 = (r30 & 255);
    goto loc_800A088C;
}

loc_800A0850:
{
    r0 = (r28 & r22);
}

loc_800A0858:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800A087C;
    }
}

loc_800A085C:
{
    f1.d = f31.d;
    f2.d = MemoryInline::FlatReadFloat32(r24);
    f3.d = MemoryInline::FlatReadFloat32(r25);
    r3 = MemoryInline::FlatRead8(r27);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    InvokeDirectCpu<0x800A0228u>(ctx);
    f1 = ctx->fpr[1];
    mkw_gqr0 = ctx->gqr[0];
    MemoryInline::FlatWriteFloat32(r31, f1.d);
    r24 = (r24 + 4);
    r25 = (r25 + 4);
}

loc_800A087C:
{
    r27 = (r27 + 1);
    r31 = (r31 + 4);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r22), static_cast<uint32_t>(1));
    r0 = (r0_rot_7 & -2);
    r22 = (r0 & 65535);
}

loc_800A088C:
{
}

loc_800A0890:
{
    if ((static_cast<int32_t>(r22) <= static_cast<int32_t>(r21))) {
        goto loc_800A0850;
    }
}

loc_800A0894:
{
    goto loc_800A0D38;
}

loc_800A0898:
{
}

loc_800A089C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_800A09E4;
    }
}

loc_800A08A0:
{
}

loc_800A08A4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800A09E4;
    }
}

loc_800A08A8:
{
    r21 = MemoryInline::FlatRead16(r24);
    r3 = (r22 & 65535);
    r4 = MemoryInline::FlatRead32((r1 + 56));
    r4 = MemoryInline::FlatRead16((r4 + 6));
    r5 = r21;
    r6 = MemoryInline::FlatRead32((r1 + 32));
    if constexpr (KnownRegArgsCpuCall<0x8009EF58u>(&func_8009EF58)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_8009EF58_5C56 = func_8009EF58_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8009EF58_5C56);
        r4 = static_cast<uint32_t>(regargs_result_8009EF58_5C56 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x8009EF58u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r23 = r3;
    r0 = MemoryInline::FlatRead8((r24 + -10));
    r0 = (r0 & 2);
}

loc_800A08D4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800A08EC;
    }
}

loc_800A08D8:
{
    r3 = MemoryInline::FlatRead32((r1 + 48));
    r0 = (r21 * r29);
    r3 = (r3 + r0);
    r24 = (r3 + 4);
    goto loc_800A0918;
}

loc_800A08EC:
{
    r6 = MemoryInline::FlatRead32((r1 + 44));
    r5_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r5 = (r5_rot_3 & 65535);
    r4 = MemoryInline::FlatRead16(r6);
    r0 = PPC_Divwu(static_cast<uint32_t>(r5), static_cast<uint32_t>(r4));
    r0 = (r0 * r4);
    r0 = (r5 - r0);
    r0 = (r29 * r0);
    r4 = (r6 + r0);
    r24 = (r4 + 4);
    // inline leaf 0x8009EF40 (6 guest instruction(s))
    r4 = 196608;
    r0 = (r4 + 17405);
    r3 = (r3 * r0);
    r3 = (r3 + 2555904);
    r3 = (r3 + -24893);
    // end of inlined leaf 0x8009EF40
    r23 = r3;
}

loc_800A0918:
{
    r29 = 0;
    r24_addr_1 = (r24 + r26);
    r0 = MemoryInline::FlatRead8(r24_addr_1);
}

loc_800A0924:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800A0944;
    }
}

loc_800A0928:
{
    r0 = (r23 & 65536);
}

loc_800A0930:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800A0938;
    }
}

loc_800A0934:
{
    r29 = 1;
}

loc_800A0938:
{
    r3 = r23;
    // inline leaf 0x8009EF40 (6 guest instruction(s))
    r4 = 196608;
    r0 = (r4 + 17405);
    r3 = (r3 * r0);
    r3 = (r3 + 2555904);
    r3 = (r3 + -24893);
    // end of inlined leaf 0x8009EF40
    r23 = r3;
}

loc_800A0944:
{
    r22 = 1;
    f30.d = MemoryInline::FlatReadFloat64((r2 + -31456));
    r21 = (r30 & 255);
    goto loc_800A09D8;
}

loc_800A0954:
{
    r0 = (r28 & r22);
}

loc_800A095C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800A09A8;
    }
}

loc_800A0960:
{
    f2.d = MemoryInline::FlatReadFloat32(r24);
    f1.d = MemoryInline::FlatReadFloat32((r24 + 4));
    r24 = (r24 + 8);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(16));
    r0 = (r0_rot_9 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 76), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 72));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f30.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
}

loc_800A0988:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_800A0990;
    }
}

loc_800A098C:
{
    f2.d = (-(f2.d));
}

loc_800A0990:
{
    f1.d = f31.d;
    f3.d = MemoryInline::FlatReadFloat32(r25);
    r3 = MemoryInline::FlatRead8(r27);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    InvokeDirectCpu<0x800A0228u>(ctx);
    f1 = ctx->fpr[1];
    mkw_gqr0 = ctx->gqr[0];
    MemoryInline::FlatWriteFloat32(r31, f1.d);
    r25 = (r25 + 4);
}

loc_800A09A8:
{
    r27 = (r27 + 1);
    r31 = (r31 + 4);
    r3 = MemoryInline::FlatRead32((r1 + 56));
    r0 = MemoryInline::FlatRead8((r3 + 4));
    r0 = (r0 & 4);
}

loc_800A09C0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800A09D0;
    }
}

loc_800A09C4:
{
    r3 = r23;
    // inline leaf 0x8009EF40 (6 guest instruction(s))
    r4 = 196608;
    r0 = (r4 + 17405);
    r3 = (r3 * r0);
    r3 = (r3 + 2555904);
    r3 = (r3 + -24893);
    // end of inlined leaf 0x8009EF40
    r23 = r3;
}

loc_800A09D0:
{
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r22), static_cast<uint32_t>(1));
    r0 = (r0_rot_11 & -2);
    r22 = (r0 & 65535);
}

loc_800A09D8:
{
}

loc_800A09DC:
{
    if ((static_cast<int32_t>(r22) <= static_cast<int32_t>(r21))) {
        goto loc_800A0954;
    }
}

loc_800A09E0:
{
    goto loc_800A0D38;
}

loc_800A09E4:
{
}

loc_800A09E8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800A0B30;
    }
}

loc_800A09EC:
{
}

loc_800A09F0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800A0B30;
    }
}

loc_800A09F4:
{
    r21 = MemoryInline::FlatRead16(r25);
    r3 = (r22 & 65535);
    r4 = MemoryInline::FlatRead32((r1 + 56));
    r4 = MemoryInline::FlatRead16((r4 + 6));
    r5 = r21;
    r6 = MemoryInline::FlatRead32((r1 + 28));
    if constexpr (KnownRegArgsCpuCall<0x8009EF58u>(&func_8009EF58)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_8009EF58_7243 = func_8009EF58_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8009EF58_7243);
        r4 = static_cast<uint32_t>(regargs_result_8009EF58_7243 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x8009EF58u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r23 = r3;
    r0 = MemoryInline::FlatRead8((r25 + -10));
    r0 = (r0 & 2);
}

loc_800A0A20:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800A0A38;
    }
}

loc_800A0A24:
{
    r3 = MemoryInline::FlatRead32((r1 + 48));
    r0 = (r21 * r29);
    r3 = (r3 + r0);
    r25 = (r3 + 4);
    goto loc_800A0A64;
}

loc_800A0A38:
{
    r6 = MemoryInline::FlatRead32((r1 + 44));
    r5_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r5 = (r5_rot_5 & 65535);
    r4 = MemoryInline::FlatRead16(r6);
    r0 = PPC_Divwu(static_cast<uint32_t>(r5), static_cast<uint32_t>(r4));
    r0 = (r0 * r4);
    r0 = (r5 - r0);
    r0 = (r29 * r0);
    r4 = (r6 + r0);
    r25 = (r4 + 4);
    // inline leaf 0x8009EF40 (6 guest instruction(s))
    r4 = 196608;
    r0 = (r4 + 17405);
    r3 = (r3 * r0);
    r3 = (r3 + 2555904);
    r3 = (r3 + -24893);
    // end of inlined leaf 0x8009EF40
    r23 = r3;
}

loc_800A0A64:
{
    r29 = 0;
    r25_addr_1 = (r25 + r26);
    r0 = MemoryInline::FlatRead8(r25_addr_1);
}

loc_800A0A70:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800A0A90;
    }
}

loc_800A0A74:
{
    r0 = (r23 & 65536);
}

loc_800A0A7C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800A0A84;
    }
}

loc_800A0A80:
{
    r29 = 1;
}

loc_800A0A84:
{
    r3 = r23;
    // inline leaf 0x8009EF40 (6 guest instruction(s))
    r4 = 196608;
    r0 = (r4 + 17405);
    r3 = (r3 * r0);
    r3 = (r3 + 2555904);
    r3 = (r3 + -24893);
    // end of inlined leaf 0x8009EF40
    r23 = r3;
}

loc_800A0A90:
{
    r22 = 1;
    f30.d = MemoryInline::FlatReadFloat64((r2 + -31456));
    r21 = (r30 & 255);
    goto loc_800A0B24;
}

loc_800A0AA0:
{
    r0 = (r28 & r22);
}

loc_800A0AA8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800A0AF4;
    }
}

loc_800A0AAC:
{
    f2.d = MemoryInline::FlatReadFloat32(r25);
    f1.d = MemoryInline::FlatReadFloat32((r25 + 4));
    r25 = (r25 + 8);
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(16));
    r0 = (r0_rot_13 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 64));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f30.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
}

loc_800A0AD4:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_800A0ADC;
    }
}

loc_800A0AD8:
{
    f3.d = (-(f3.d));
}

loc_800A0ADC:
{
    f1.d = f31.d;
    f2.d = MemoryInline::FlatReadFloat32(r24);
    r3 = MemoryInline::FlatRead8(r27);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    InvokeDirectCpu<0x800A0228u>(ctx);
    f1 = ctx->fpr[1];
    mkw_gqr0 = ctx->gqr[0];
    MemoryInline::FlatWriteFloat32(r31, f1.d);
    r24 = (r24 + 4);
}

loc_800A0AF4:
{
    r27 = (r27 + 1);
    r31 = (r31 + 4);
    r3 = MemoryInline::FlatRead32((r1 + 56));
    r0 = MemoryInline::FlatRead8((r3 + 4));
    r0 = (r0 & 4);
}

loc_800A0B0C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800A0B1C;
    }
}

loc_800A0B10:
{
    r3 = r23;
    // inline leaf 0x8009EF40 (6 guest instruction(s))
    r4 = 196608;
    r0 = (r4 + 17405);
    r3 = (r3 * r0);
    r3 = (r3 + 2555904);
    r3 = (r3 + -24893);
    // end of inlined leaf 0x8009EF40
    r23 = r3;
}

loc_800A0B1C:
{
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r22), static_cast<uint32_t>(1));
    r0 = (r0_rot_15 & -2);
    r22 = (r0 & 65535);
}

loc_800A0B24:
{
}

loc_800A0B28:
{
    if ((static_cast<int32_t>(r22) <= static_cast<int32_t>(r21))) {
        goto loc_800A0AA0;
    }
}

loc_800A0B2C:
{
    goto loc_800A0D38;
}

loc_800A0B30:
{
    r21 = MemoryInline::FlatRead16(r24);
    r3 = (r22 & 65535);
    r4 = MemoryInline::FlatRead32((r1 + 56));
    r4 = MemoryInline::FlatRead16((r4 + 6));
    r5 = r21;
    r6 = MemoryInline::FlatRead32((r1 + 32));
    if constexpr (KnownRegArgsCpuCall<0x8009EF58u>(&func_8009EF58)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_8009EF58_870C = func_8009EF58_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8009EF58_870C);
        r4 = static_cast<uint32_t>(regargs_result_8009EF58_870C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x8009EF58u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r23 = r3;
    r0 = MemoryInline::FlatRead8((r24 + -10));
    r0 = (r0 & 2);
}

loc_800A0B5C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800A0B74;
    }
}

loc_800A0B60:
{
    r3 = MemoryInline::FlatRead32((r1 + 48));
    r0 = (r21 * r29);
    r3 = (r3 + r0);
    r24 = (r3 + 4);
    goto loc_800A0BA0;
}

loc_800A0B74:
{
    r6 = MemoryInline::FlatRead32((r1 + 44));
    r5_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r5 = (r5_rot_7 & 65535);
    r4 = MemoryInline::FlatRead16(r6);
    r0 = PPC_Divwu(static_cast<uint32_t>(r5), static_cast<uint32_t>(r4));
    r0 = (r0 * r4);
    r0 = (r5 - r0);
    r0 = (r29 * r0);
    r4 = (r6 + r0);
    r24 = (r4 + 4);
    // inline leaf 0x8009EF40 (6 guest instruction(s))
    r4 = 196608;
    r0 = (r4 + 17405);
    r3 = (r3 * r0);
    r3 = (r3 + 2555904);
    r3 = (r3 + -24893);
    // end of inlined leaf 0x8009EF40
    r23 = r3;
}

loc_800A0BA0:
{
    r21 = MemoryInline::FlatRead16(r25);
    r3 = (r22 & 65535);
    r4 = MemoryInline::FlatRead32((r1 + 56));
    r4 = MemoryInline::FlatRead16((r4 + 6));
    r5 = r21;
    r6 = MemoryInline::FlatRead32((r1 + 28));
    if constexpr (KnownRegArgsCpuCall<0x8009EF58u>(&func_8009EF58)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_8009EF58_8FC7 = func_8009EF58_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8009EF58_8FC7);
        r4 = static_cast<uint32_t>(regargs_result_8009EF58_8FC7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x8009EF58u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r22 = r3;
    r0 = MemoryInline::FlatRead8((r25 + -10));
    r0 = (r0 & 2);
}

loc_800A0BCC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800A0BE4;
    }
}

loc_800A0BD0:
{
    r3 = MemoryInline::FlatRead32((r1 + 48));
    r0 = (r21 * r29);
    r3 = (r3 + r0);
    r25 = (r3 + 4);
    goto loc_800A0C10;
}

loc_800A0BE4:
{
    r6 = MemoryInline::FlatRead32((r1 + 44));
    r5_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r5 = (r5_rot_9 & 65535);
    r4 = MemoryInline::FlatRead16(r6);
    r0 = PPC_Divwu(static_cast<uint32_t>(r5), static_cast<uint32_t>(r4));
    r0 = (r0 * r4);
    r0 = (r5 - r0);
    r0 = (r29 * r0);
    r4 = (r6 + r0);
    r25 = (r4 + 4);
    // inline leaf 0x8009EF40 (6 guest instruction(s))
    r4 = 196608;
    r0 = (r4 + 17405);
    r3 = (r3 * r0);
    r3 = (r3 + 2555904);
    r3 = (r3 + -24893);
    // end of inlined leaf 0x8009EF40
    r22 = r3;
}

loc_800A0C10:
{
    r29 = 0;
    r24_addr_2 = (r24 + r26);
    r0 = MemoryInline::FlatRead8(r24_addr_2);
}

loc_800A0C1C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800A0C3C;
    }
}

loc_800A0C20:
{
    r0 = (r23 & 65536);
}

loc_800A0C28:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800A0C30;
    }
}

loc_800A0C2C:
{
    r29 = 1;
}

loc_800A0C30:
{
    r3 = r23;
    // inline leaf 0x8009EF40 (6 guest instruction(s))
    r4 = 196608;
    r0 = (r4 + 17405);
    r3 = (r3 * r0);
    r3 = (r3 + 2555904);
    r3 = (r3 + -24893);
    // end of inlined leaf 0x8009EF40
    r23 = r3;
}

loc_800A0C3C:
{
    r21 = 0;
    r25_addr_2 = (r25 + r26);
    r0 = MemoryInline::FlatRead8(r25_addr_2);
}

loc_800A0C48:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800A0C68;
    }
}

loc_800A0C4C:
{
    r0 = (r22 & 65536);
}

loc_800A0C54:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800A0C5C;
    }
}

loc_800A0C58:
{
    r21 = 1;
}

loc_800A0C5C:
{
    r3 = r22;
    // inline leaf 0x8009EF40 (6 guest instruction(s))
    r4 = 196608;
    r0 = (r4 + 17405);
    r3 = (r3 * r0);
    r3 = (r3 + 2555904);
    r3 = (r3 + -24893);
    // end of inlined leaf 0x8009EF40
    r22 = r3;
}

loc_800A0C68:
{
    r26 = 1;
    f30.d = MemoryInline::FlatReadFloat64((r2 + -31456));
    r30 = (r30 & 255);
    goto loc_800A0D30;
}

loc_800A0C78:
{
    r0 = (r28 & r26);
}

loc_800A0C80:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800A0CF4;
    }
}

loc_800A0C84:
{
    f2.d = MemoryInline::FlatReadFloat32(r24);
    f1.d = MemoryInline::FlatReadFloat32((r24 + 4));
    r24 = (r24 + 8);
    r0_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(16));
    r0 = (r0_rot_17 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 76), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 72));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f30.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
}

loc_800A0CAC:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_800A0CB4;
    }
}

loc_800A0CB0:
{
    f2.d = (-(f2.d));
}

loc_800A0CB4:
{
    f3.d = MemoryInline::FlatReadFloat32(r25);
    f1.d = MemoryInline::FlatReadFloat32((r25 + 4));
    r25 = (r25 + 8);
    r0_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r22), static_cast<uint32_t>(16));
    r0 = (r0_rot_18 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 64));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f30.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
}

loc_800A0CDC:
{
    if ((static_cast<int32_t>(r21) == static_cast<int32_t>(0))) {
        goto loc_800A0CE4;
    }
}

loc_800A0CE0:
{
    f3.d = (-(f3.d));
}

loc_800A0CE4:
{
    f1.d = f31.d;
    r3 = MemoryInline::FlatRead8(r27);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    InvokeDirectCpu<0x800A0228u>(ctx);
    f1 = ctx->fpr[1];
    mkw_gqr0 = ctx->gqr[0];
    MemoryInline::FlatWriteFloat32(r31, f1.d);
}

loc_800A0CF4:
{
    r27 = (r27 + 1);
    r31 = (r31 + 4);
    r3 = MemoryInline::FlatRead32((r1 + 56));
    r0 = MemoryInline::FlatRead8((r3 + 4));
    r0 = (r0 & 4);
}

loc_800A0D0C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800A0D28;
    }
}

loc_800A0D10:
{
    r3 = r23;
    // inline leaf 0x8009EF40 (6 guest instruction(s))
    r4 = 196608;
    r0 = (r4 + 17405);
    r3 = (r3 * r0);
    r3 = (r3 + 2555904);
    r3 = (r3 + -24893);
    // end of inlined leaf 0x8009EF40
    r23 = r3;
    r3 = r22;
    // inline leaf 0x8009EF40 (6 guest instruction(s))
    r4 = 196608;
    r0 = (r4 + 17405);
    r3 = (r3 * r0);
    r3 = (r3 + 2555904);
    r3 = (r3 + -24893);
    // end of inlined leaf 0x8009EF40
    r22 = r3;
}

loc_800A0D28:
{
    r0_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(1));
    r0 = (r0_rot_20 & -2);
    r26 = (r0 & 65535);
}

loc_800A0D30:
{
}

loc_800A0D34:
{
    if ((static_cast<int32_t>(r26) <= static_cast<int32_t>(r30))) {
        goto loc_800A0C78;
    }
}

loc_800A0D38:
{
    r0 = 152;
    addr_psqx_800A0D3C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800A0D3C_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 144));
    r0 = 136;
    addr_psqx_800A0D48_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800A0D48_loc_0));
    f30.d = MemoryInline::FlatReadFloat64((r1 + 128));
    r11 = (r1 + 128);
    // inline leaf 0x804574BC (12 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -44), 0, 44u, true, false);
    // end of inlined leaf 0x804574BC
    r0 = MemoryInline::FlatRead32((r1 + 164));
    ctx->lr = r0;
    r1 = (r1 + 160);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000FFF gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0xC000000F fpr_write=0xC000000F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800A035C func_800A035C preserves=true fpr_mask=0x00000000
