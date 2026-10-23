#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800AB340(CpuContext* ctx);
extern "C" uint32_t func_800AB340_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_800AB3EC(CpuContext* ctx);
extern "C" uint32_t func_800AB3EC_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_800BE99C(CpuContext* ctx);
extern "C" double func_800BE99C_ra18_1e_0_2(CpuContext*, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_800BEA64(CpuContext* ctx);
extern "C" uint64_t func_800BEA64_ra38_6_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_800BE424(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_psqx_800BE94C_loc_0 = 0;
    uint32_t addr_psqx_800BE958_loc_0 = 0;
    uint32_t addr_psqx_800BE964_loc_0 = 0;
    uint32_t addr_psqx_800BE970_loc_0 = 0;
    uint32_t addr_psqx_800BE97C_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t r25_rot_0 = 0;
    uint32_t stackword12 = 0;
    uint32_t stackword13 = 0;
    uint32_t stackword14 = 0;
    uint32_t stackword15 = 0;
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
    uint32_t r12 = ctx->gpr[12];
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
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_800BE424;

loc_800BE424:
{
    MemoryHw::FlatWriteRam32((r1 + -336), r1);
    r1 = (r1 + -336);
    r0 = ctx->lr;
    MemoryHw::FlatWriteRam32((r1 + 340), r0);
    MemoryHw::FlatWriteRamFloat64((r1 + 320), f31.d);
    // psq_store w=0 quant=0 (using MemoryHw::PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 328);
    MemoryHw::PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryHw::FlatWriteRamFloat64((r1 + 304), f30.d);
    // psq_store w=0 quant=0 (using MemoryHw::PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 312);
    MemoryHw::PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryHw::FlatWriteRamFloat64((r1 + 288), f29.d);
    // psq_store w=0 quant=0 (using MemoryHw::PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 296);
    MemoryHw::PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryHw::FlatWriteRamFloat64((r1 + 272), f28.d);
    // psq_store w=0 quant=0 (using MemoryHw::PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 280);
    MemoryHw::PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryHw::FlatWriteRamFloat64((r1 + 256), f27.d);
    // psq_store w=0 quant=0 (using MemoryHw::PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 264);
    MemoryHw::PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    r11 = (r1 + 256);
    // inline leaf 0x80457474 (11 guest instruction(s))
    guest_range_0 = MemoryHw::ResolveRangeHost((r11 + -40), 0, 40u, false, true);
    // end of inlined leaf 0x80457474
    r28 = r3;
    r29 = r4;
    r30 = r5;
    r4 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r11 = (r5 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_800BE490:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BE4A8;
    }
}

loc_800BE494:
{
    r3 = (r5 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800BE4A0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BE4A8;
    }
}

loc_800BE4A4:
{
    r10 = 0;
}

loc_800BE4A8:
{
}

loc_800BE4AC:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_800BE4C4;
    }
}

loc_800BE4B0:
{
    r3 = (r5 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800BE4BC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BE4C4;
    }
}

loc_800BE4C0:
{
    r9 = 0;
}

loc_800BE4C4:
{
}

loc_800BE4C8:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800BE4DC;
    }
}

loc_800BE4CC:
{
    r0 = (r11 + 1073741824);
}

loc_800BE4D4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BE4DC;
    }
}

loc_800BE4D8:
{
    r8 = 0;
}

loc_800BE4DC:
{
}

loc_800BE4E0:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800BE4F8;
    }
}

loc_800BE4E4:
{
    r3 = (r5 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800BE4F0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BE4F8;
    }
}

loc_800BE4F4:
{
    r7 = 0;
}

loc_800BE4F8:
{
}

loc_800BE4FC:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800BE514;
    }
}

loc_800BE500:
{
    r3 = (r5 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800BE50C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BE514;
    }
}

loc_800BE510:
{
    r6 = 0;
}

loc_800BE514:
{
}

loc_800BE518:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800BE530;
    }
}

loc_800BE51C:
{
    r3 = (r5 & -16384);
    r0 = (r3 + 536870912);
}

loc_800BE528:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BE530;
    }
}

loc_800BE52C:
{
    r4 = 0;
}

loc_800BE530:
{
}

loc_800BE534:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800BE558;
    }
}

loc_800BE538:
{
    r3 = 0x80590000u;
    r3 = (r3 + 18872);
    r4 = 200;
    r5 = 0x80590000u;
    r5 = (r5 + 18944);
    r6 = r30;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800BE558u;
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

loc_800BE558:
{
    r3 = r28;
    r4 = r29;
    r5 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800BED90u>(ctx);
    mkw_gqr0 = ctx->gqr[0];
    r4 = 1;
    r5 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r6 = MemoryHw::FlatRead32((r30 + 36));
    r11 = (r6 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_800BE590:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BE5A8;
    }
}

loc_800BE594:
{
    r3 = (r6 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800BE5A0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BE5A8;
    }
}

loc_800BE5A4:
{
    r10 = 0;
}

loc_800BE5A8:
{
}

loc_800BE5AC:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_800BE5C4;
    }
}

loc_800BE5B0:
{
    r3 = (r6 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800BE5BC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BE5C4;
    }
}

loc_800BE5C0:
{
    r9 = 0;
}

loc_800BE5C4:
{
}

loc_800BE5C8:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800BE5DC;
    }
}

loc_800BE5CC:
{
    r0 = (r11 + 1073741824);
}

loc_800BE5D4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BE5DC;
    }
}

loc_800BE5D8:
{
    r8 = 0;
}

loc_800BE5DC:
{
}

loc_800BE5E0:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800BE5F8;
    }
}

loc_800BE5E4:
{
    r3 = (r6 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800BE5F0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BE5F8;
    }
}

loc_800BE5F4:
{
    r7 = 0;
}

loc_800BE5F8:
{
}

loc_800BE5FC:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800BE614;
    }
}

loc_800BE600:
{
    r3 = (r6 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800BE60C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BE614;
    }
}

loc_800BE610:
{
    r5 = 0;
}

loc_800BE614:
{
}

loc_800BE618:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800BE630;
    }
}

loc_800BE61C:
{
    r3 = (r6 & -16384);
    r0 = (r3 + 536870912);
}

loc_800BE628:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BE630;
    }
}

loc_800BE62C:
{
    r4 = 0;
}

loc_800BE630:
{
}

loc_800BE634:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800BE654;
    }
}

loc_800BE638:
{
    r3 = 0x80590000u;
    r3 = (r3 + 18872);
    r4 = 204;
    r5 = 0x80590000u;
    r5 = (r5 + 18996);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800BE654u;
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

loc_800BE654:
{
    r3 = MemoryHw::FlatRead32((r30 + 36));
    ctx->lr = 0x800BE65Cu;
    if constexpr (KnownRegArgsCpuCall<0x800AB3ECu>(&func_800AB3EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800AB3EC_2BE2 = func_800AB3EC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800AB3EC_2BE2;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x800AB3ECu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r31 = r3;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r11 = (r3 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_800BE684:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BE69C;
    }
}

loc_800BE688:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 2130706432);
}

loc_800BE694:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BE69C;
    }
}

loc_800BE698:
{
    r10 = 0;
}

loc_800BE69C:
{
}

loc_800BE6A0:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_800BE6B8;
    }
}

loc_800BE6A4:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 1879048192);
}

loc_800BE6B0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BE6B8;
    }
}

loc_800BE6B4:
{
    r9 = 0;
}

loc_800BE6B8:
{
}

loc_800BE6BC:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800BE6D0;
    }
}

loc_800BE6C0:
{
    r0 = (r11 + 1073741824);
}

loc_800BE6C8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BE6D0;
    }
}

loc_800BE6CC:
{
    r8 = 0;
}

loc_800BE6D0:
{
}

loc_800BE6D4:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800BE6EC;
    }
}

loc_800BE6D8:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 1056964608);
}

loc_800BE6E4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BE6EC;
    }
}

loc_800BE6E8:
{
    r7 = 0;
}

loc_800BE6EC:
{
}

loc_800BE6F0:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800BE708;
    }
}

loc_800BE6F4:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 805306368);
}

loc_800BE700:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BE708;
    }
}

loc_800BE704:
{
    r6 = 0;
}

loc_800BE708:
{
}

loc_800BE70C:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800BE724;
    }
}

loc_800BE710:
{
    r3 = (r3 & -16384);
    r0 = (r3 + 536870912);
}

loc_800BE71C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BE724;
    }
}

loc_800BE720:
{
    r5 = 0;
}

loc_800BE724:
{
}

loc_800BE728:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800BE74C;
    }
}

loc_800BE72C:
{
    r3 = 0x80590000u;
    r3 = (r3 + 18872);
    r4 = 206;
    r5 = 0x80590000u;
    r5 = (r5 + 19056);
    r6 = r31;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800BE74Cu;
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

loc_800BE74C:
{
    r3 = MemoryHw::FlatRead8((r28 + 208));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r25_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r25 = (r25_rot_0 & 1);
    r3 = (r1 + 152);
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    r3 = r30;
    r4 = (r1 + 152);
    ctx->lr = 0x800BE770u;
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
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800AE3C4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    mkw_gqr0 = ctx->gqr[0];
    r3 = (r1 + 104);
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    r3 = r29;
    r4 = (r1 + 104);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800B7E14u>(ctx);
    r3 = ctx->gpr[3];
    mkw_gqr0 = ctx->gqr[0];
    r3 = (r1 + 104);
    r4 = r3;
    r5 = (r1 + 152);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80071120u>(ctx);
    r3 = (r1 + 104);
    // inline leaf 0x8005056C (1 guest instruction(s))
    // end of inlined leaf 0x8005056C
    r4 = 0;
    ctx->lr = 0x800BE7A4u;
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
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x804BAB90u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r0 = MemoryHw::FlatRead8((r31 + 169));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    f2.d = MemoryHw::FlatReadFloat64((r2 + -30984));
    r0 = (r0 ^ -2147483648);
    stackword12 = r0;
    MemoryHw::FlatWriteRam32((r1 + 204), r0);
    r3 = 1127219200;
    stackword13 = r3;
    MemoryHw::FlatWriteRam32((r1 + 200), r3);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword13), static_cast<uint32_t>(stackword12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f1.d = MemoryHw::FlatReadFloat32((r2 + -30992));
    f30.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    r0 = MemoryHw::FlatRead8((r31 + 170));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 ^ -2147483648);
    stackword14 = r0;
    MemoryHw::FlatWriteRam32((r1 + 212), r0);
    stackword15 = r3;
    MemoryHw::FlatWriteRam32((r1 + 208), r3);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword15), static_cast<uint32_t>(stackword14));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f29.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    r3 = r28;
    r0 = MemoryHw::FlatRead16(r31);
    r4 = (r0 & 2048);
    r12 = MemoryHw::FlatRead32(r3);
    r12 = MemoryHw::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x800BE80Cu;
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
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    mkw_gqr0 = ctx->gqr[0];
    r26 = r3;
    r3 = r28;
    r0 = MemoryHw::FlatRead16(r31);
    r4 = (r0 & 2048);
    r12 = MemoryHw::FlatRead32(r3);
    r12 = MemoryHw::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x800BE82Cu;
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
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    mkw_gqr0 = ctx->gqr[0];
    r24 = r3;
    r23 = 1;
    r3 = r30;
    r12 = r26;
    ctr = r12;
    ctx->lr = 0x800BE844u;
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
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    mkw_gqr0 = ctx->gqr[0];
    r22 = r3;
    r26 = 0x80570000u;
    r27 = 0x80570000u;
    f31.d = MemoryHw::FlatReadFloat32((r2 + -30988));
    goto loc_800BE940;
}

loc_800BE858:
{
    r3 = r22;
    // inline leaf 0x800AB410 (9 guest instruction(s))
}

loc_inl4_0x800AB410:
{
    r4 = r3;
    f1.d = MemoryHw::FlatReadFloat32((r3 + 48));
    f0.d = MemoryHw::FlatReadFloat32((r3 + 56));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    r3 = MemoryHw::FlatRead32((r3 + 200));
}

loc_inl4_0x800AB428:
{
    f0.d = MemoryHw::FlatReadFloat32((r3 + 88));
    f1.d = PpcFmulsInline(f1.d, f0.d);
}

loc_inl4_cont_800AB410:
{
    // end of inlined leaf 0x800AB410
    f28.d = f1.d;
    SetCRFloatResident(cr, 0, f1.d, f31.d);
}

loc_800BE868:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800BE928;
    }
}

loc_800BE86C:
{
    r3 = r22;
    ctx->lr = 0x800BE874u;
    if constexpr (KnownRegArgsCpuCall<0x800AB340u>(&func_800AB340)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_800AB340_5B7A = func_800AB340_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800AB340_5B7A;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x800AB340u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    f27.d = f1.d;
    SetCRFloatResident(cr, 0, f1.d, f31.d);
}

loc_800BE87C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800BE928;
    }
}

loc_800BE880:
{
    r3 = r28;
    r4 = r22;
    r5 = r31;
    r6 = r29;
    r7 = r23;
    r8 = 0;
    ctx->lr = 0x800BE89Cu;
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
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800C694Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    mkw_gqr0 = ctx->gqr[0];
    r23 = 0;
    r3 = (r1 + 56);
    r4 = r22;
    r5 = MemoryHw::FlatRead8((r31 + 175));
    ctx->lr = 0x800BE8B0u;
    if constexpr (KnownRegArgsCpuCall<0x800BEA64u>(&func_800BEA64)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        const auto regargs_result_800BEA64_6518 = func_800BEA64_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_800BEA64_6518);
        r4 = static_cast<uint32_t>(regargs_result_800BEA64_6518 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    } else {
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
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        InvokeDirectCpu<0x800BEA64u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r3 = (r1 + 8);
    f1.d = f30.d;
    f2.d = f29.d;
    f3.d = f28.d;
    f4.d = f27.d;
    r4 = (r1 + 56);
    ctx->lr = 0x800BE8CCu;
    if constexpr (KnownRegArgsCpuCall<0x800BE99Cu>(&func_800BE99C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_800BE99C_6CC1 = func_800BE99C_ra18_1e_0_2(ctx, r3, r4, f1.d, f2.d, f3.d, f4.d);
        f1.d = regargs_result_800BE99C_6CC1;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
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
        InvokeDirectCpu<0x800BE99Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    f1.d = MemoryHw::FlatReadFloat32((r1 + 20));
    f0.d = MemoryHw::FlatReadFloat32((r22 + 172));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryHw::FlatWriteRamFloat32((r1 + 20), f0.d);
    f1.d = MemoryHw::FlatReadFloat32((r1 + 36));
    f0.d = MemoryHw::FlatReadFloat32((r22 + 176));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryHw::FlatWriteRamFloat32((r1 + 36), f0.d);
    f1.d = MemoryHw::FlatReadFloat32((r1 + 52));
    f0.d = MemoryHw::FlatReadFloat32((r22 + 180));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryHw::FlatWriteRamFloat32((r1 + 52), f0.d);
    r3 = (r1 + 8);
    r4 = (r26 + -112);
    r5 = r25;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800BE1B8u>(ctx);
    mkw_gqr0 = ctx->gqr[0];
    r0 = MemoryHw::FlatRead8((r31 + 173));
}

loc_800BE914:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_800BE928;
    }
}

loc_800BE918:
{
    r3 = (r1 + 8);
    r4 = (r27 + -64);
    r5 = r25;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800BE1B8u>(ctx);
    mkw_gqr0 = ctx->gqr[0];
}

loc_800BE928:
{
    r3 = r30;
    r4 = r22;
    r12 = r24;
    ctr = r12;
    ctx->lr = 0x800BE93Cu;
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
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    mkw_gqr0 = ctx->gqr[0];
    r22 = r3;
}

loc_800BE940:
{
}

loc_800BE944:
{
    if ((static_cast<int32_t>(r22) != static_cast<int32_t>(0))) {
        goto loc_800BE858;
    }
}

loc_800BE948:
{
    r0 = 328;
    addr_psqx_800BE94C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, MemoryHw::PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800BE94C_loc_0));
    f31.d = MemoryHw::FlatReadFloat64((r1 + 320));
    r0 = 312;
    addr_psqx_800BE958_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, MemoryHw::PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800BE958_loc_0));
    f30.d = MemoryHw::FlatReadFloat64((r1 + 304));
    r0 = 296;
    addr_psqx_800BE964_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f29, MemoryHw::PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800BE964_loc_0));
    f29.d = MemoryHw::FlatReadFloat64((r1 + 288));
    r0 = 280;
    addr_psqx_800BE970_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f28, MemoryHw::PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800BE970_loc_0));
    f28.d = MemoryHw::FlatReadFloat64((r1 + 272));
    r0 = 264;
    addr_psqx_800BE97C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f27, MemoryHw::PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800BE97C_loc_0));
    f27.d = MemoryHw::FlatReadFloat64((r1 + 256));
    r11 = (r1 + 256);
    // inline leaf 0x804574C0 (11 guest instruction(s))
    guest_range_1 = MemoryHw::ResolveRangeHost((r11 + -40), 0, 40u, true, false);
    // end of inlined leaf 0x804574C0
    r0 = MemoryHw::FlatRead32((r1 + 340));
    ctx->lr = r0;
    r1 = (r1 + 336);
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
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xF8003FFF fpr_write=0xF8003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800BE424 func_800BE424 preserves=true fpr_mask=0x00000000
