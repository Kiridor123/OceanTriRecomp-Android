#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800A8A6C(CpuContext* ctx);
extern "C" uint32_t func_800A8A6C_ra8_0_10_0(CpuContext*, uint32_t);
extern "C" void func_800A9A18(CpuContext* ctx);
extern "C" uint64_t func_800A9A18_ra38_fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double);
extern "C" void func_800AA014(CpuContext* ctx);
extern "C" uint64_t func_800AA014_ra38_e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_800CD5E8_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_psqx_800CDB04_loc_0 = 0;
    uint32_t addr_psqx_800CDB10_loc_0 = 0;
    uint32_t addr_psqx_800CDB1C_loc_0 = 0;
    uint32_t addr_psqx_800CDB28_loc_0 = 0;
    uint32_t addr_psqx_800CDB34_loc_0 = 0;
    uint32_t addr_psqx_800CDB40_loc_0 = 0;
    uint32_t addr_psqx_800CDB4C_loc_0 = 0;
    uint32_t addr_psqx_800CDB58_loc_0 = 0;
    uint32_t addr_psqx_800CDB64_loc_0 = 0;
    uint32_t addr_psqx_800CDB70_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t r1_psq_tmp_5 = 0;
    uint32_t r1_psq_tmp_6 = 0;
    uint32_t r1_psq_tmp_7 = 0;
    uint32_t r1_psq_tmp_8 = 0;
    uint32_t r1_psq_tmp_9 = 0;
    uint32_t stackword16 = 0;
    uint32_t stackword17 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
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
    ctx->fpr[8].d = arg_f8;
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    MKW_GUEST_ENTER(0x800CD5E8u);
    goto loc_800CD5E8;

loc_800CD5E8:
{
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + -288), 0, 296u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 0u, (r1 + -288), r1);
    r1 = (r1 + -288);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_3, 292u, (r1 + 292), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_3, 272u, (r1 + 272), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 280);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 256u, (r1 + 256), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 264);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 240u, (r1 + 240), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 248);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 224u, (r1 + 224), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 232);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 208u, (r1 + 208), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 216);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 192u, (r1 + 192), f26.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_5 = (r1 + 200);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_5, PPC_PsFromScalarInline(f26.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 176u, (r1 + 176), f25.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_6 = (r1 + 184);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_6, PPC_PsFromScalarInline(f25.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 160u, (r1 + 160), f24.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_7 = (r1 + 168);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_7, PPC_PsFromScalarInline(f24.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 144u, (r1 + 144), f23.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_8 = (r1 + 152);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_8, PPC_PsFromScalarInline(f23.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 128u, (r1 + 128), f22.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_9 = (r1 + 136);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_9, PPC_PsFromScalarInline(f22.d));
    r11 = (r1 + 128);
    // inline leaf 0x8045747C (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    // end of inlined leaf 0x8045747C
    r25 = r3;
    r26 = r4;
    r27 = r5;
    r28 = r6;
    r31 = r8;
    r29 = r9;
    f26.d = f1.d;
    r30 = r10;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r11 = (r4 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_800CD690:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CD6A8;
    }
}

loc_800CD694:
{
    r3 = (r4 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800CD6A0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CD6A8;
    }
}

loc_800CD6A4:
{
    r10 = 0;
}

loc_800CD6A8:
{
}

loc_800CD6AC:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_800CD6C4;
    }
}

loc_800CD6B0:
{
    r3 = (r4 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800CD6BC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CD6C4;
    }
}

loc_800CD6C0:
{
    r9 = 0;
}

loc_800CD6C4:
{
}

loc_800CD6C8:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800CD6DC;
    }
}

loc_800CD6CC:
{
    r0 = (r11 + 1073741824);
}

loc_800CD6D4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CD6DC;
    }
}

loc_800CD6D8:
{
    r8 = 0;
}

loc_800CD6DC:
{
}

loc_800CD6E0:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800CD6F8;
    }
}

loc_800CD6E4:
{
    r3 = (r4 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800CD6F0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CD6F8;
    }
}

loc_800CD6F4:
{
    r7 = 0;
}

loc_800CD6F8:
{
}

loc_800CD6FC:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800CD714;
    }
}

loc_800CD700:
{
    r3 = (r4 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800CD70C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CD714;
    }
}

loc_800CD710:
{
    r6 = 0;
}

loc_800CD714:
{
}

loc_800CD718:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800CD730;
    }
}

loc_800CD71C:
{
    r3 = (r4 & -16384);
    r0 = (r3 + 536870912);
}

loc_800CD728:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CD730;
    }
}

loc_800CD72C:
{
    r5 = 0;
}

loc_800CD730:
{
}

loc_800CD734:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800CD758;
    }
}

loc_800CD738:
{
    r3 = 0x80590000u;
    r3 = (r3 + 22360);
    r4 = 42;
    r5 = 0x80590000u;
    r5 = (r5 + 22376);
    r6 = r26;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800CD758u;
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

loc_800CD758:
{
    r4 = 1;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = (r27 & -16777216);
    r0 = (r10 + -2147483648);
}

loc_800CD77C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CD794;
    }
}

loc_800CD780:
{
    r3 = (r27 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800CD78C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CD794;
    }
}

loc_800CD790:
{
    r9 = 0;
}

loc_800CD794:
{
}

loc_800CD798:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800CD7B0;
    }
}

loc_800CD79C:
{
    r3 = (r27 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800CD7A8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CD7B0;
    }
}

loc_800CD7AC:
{
    r8 = 0;
}

loc_800CD7B0:
{
}

loc_800CD7B4:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800CD7C8;
    }
}

loc_800CD7B8:
{
    r0 = (r10 + 1073741824);
}

loc_800CD7C0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CD7C8;
    }
}

loc_800CD7C4:
{
    r7 = 0;
}

loc_800CD7C8:
{
}

loc_800CD7CC:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800CD7E4;
    }
}

loc_800CD7D0:
{
    r3 = (r27 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800CD7DC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CD7E4;
    }
}

loc_800CD7E0:
{
    r6 = 0;
}

loc_800CD7E4:
{
}

loc_800CD7E8:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800CD800;
    }
}

loc_800CD7EC:
{
    r3 = (r27 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800CD7F8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CD800;
    }
}

loc_800CD7FC:
{
    r5 = 0;
}

loc_800CD800:
{
}

loc_800CD804:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800CD81C;
    }
}

loc_800CD808:
{
    r3 = (r27 & -16384);
    r0 = (r3 + 536870912);
}

loc_800CD814:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CD81C;
    }
}

loc_800CD818:
{
    r4 = 0;
}

loc_800CD81C:
{
}

loc_800CD820:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800CD844;
    }
}

loc_800CD824:
{
    r3 = 0x80590000u;
    r3 = (r3 + 22360);
    r4 = 43;
    r5 = 0x80590000u;
    r5 = (r5 + 22428);
    r6 = r27;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800CD844u;
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

loc_800CD844:
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

loc_800CD868:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CD880;
    }
}

loc_800CD86C:
{
    r3 = (r31 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800CD878:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CD880;
    }
}

loc_800CD87C:
{
    r9 = 0;
}

loc_800CD880:
{
}

loc_800CD884:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800CD89C;
    }
}

loc_800CD888:
{
    r3 = (r31 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800CD894:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CD89C;
    }
}

loc_800CD898:
{
    r8 = 0;
}

loc_800CD89C:
{
}

loc_800CD8A0:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800CD8B4;
    }
}

loc_800CD8A4:
{
    r0 = (r10 + 1073741824);
}

loc_800CD8AC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CD8B4;
    }
}

loc_800CD8B0:
{
    r7 = 0;
}

loc_800CD8B4:
{
}

loc_800CD8B8:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800CD8D0;
    }
}

loc_800CD8BC:
{
    r3 = (r31 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800CD8C8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CD8D0;
    }
}

loc_800CD8CC:
{
    r6 = 0;
}

loc_800CD8D0:
{
}

loc_800CD8D4:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800CD8EC;
    }
}

loc_800CD8D8:
{
    r3 = (r31 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800CD8E4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CD8EC;
    }
}

loc_800CD8E8:
{
    r5 = 0;
}

loc_800CD8EC:
{
}

loc_800CD8F0:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800CD908;
    }
}

loc_800CD8F4:
{
    r3 = (r31 & -16384);
    r0 = (r3 + 536870912);
}

loc_800CD900:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CD908;
    }
}

loc_800CD904:
{
    r4 = 0;
}

loc_800CD908:
{
}

loc_800CD90C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800CD930;
    }
}

loc_800CD910:
{
    r3 = 0x80590000u;
    r3 = (r3 + 22360);
    r4 = 44;
    r5 = 0x80590000u;
    r5 = (r5 + 22480);
    r6 = r31;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800CD930u;
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

loc_800CD930:
{
}

loc_800CD934:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(1))) {
        goto loc_800CDB00;
    }
}

loc_800CD938:
{
    r31 = 0;
    guest_range_1 = MemoryInline::ResolveRangeHost((r2 + -30624), 0, 40u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 4u);
        if (resolved_pair.valid) {
            f27.d = PpcBitCastToFloatInline(resolved_pair.first);
            f28.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f27.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r2 + -30620));
            f28.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r2 + -30616));
        }
    }
    f29.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -30624));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 12u);
        if (resolved_pair.valid) {
            f30.d = PpcBitCastToFloatInline(resolved_pair.second);
            f31.d = PpcBitCastToFloatInline(resolved_pair.first);
        } else {
            f30.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r2 + -30608));
            f31.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r2 + -30612));
        }
    }
    f22.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 20u, (r2 + -30604));
    f23.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 32u, (r2 + -30592));
    r24 = 1127219200;
    f24.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 24u, (r2 + -30600));
    goto loc_800CDAF8;
}

loc_800CD964:
{
    r3 = (r1 + 68);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -30624));
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    r3 = (r1 + 56);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r26 + 236);
    ctx->lr = 0x800CD988u;
    if constexpr (KnownRegArgsCpuCall<0x800A8A6Cu>(&func_800A8A6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800A8A6C_45D6 = func_800A8A6C_ra8_0_10_0(ctx, r3);
        r4 = regargs_result_800A8A6C_45D6;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800A8A6Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    f0.d = PpcFmulsInline(f27.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f28.d));
    SetCRFloatResident(cr, 0, f1.d, f29.d);
}

loc_800CD994:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800CD9AC;
    }
}

loc_800CD99C:
{
    f0.d = PpcFmulsInline(f30.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f31.d + f0.d));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    goto loc_800CD9B8;
}

loc_800CD9AC:
{
    f0.d = PpcFmulsInline(f30.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f31.d - f0.d));
    f0.d = PpcFmulsInline(f0.d, f1.d);
}

loc_800CD9B8:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 56), f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f28.d - f0.d));
    ctx->gpr[1] = r1;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80050C24u>(ctx);
    f1 = ctx->fpr[1];
    mkw_gqr0 = ctx->gqr[0];
    f25.d = f1.d;
    r3 = (r26 + 236);
    ctx->lr = 0x800CD9D8u;
    if constexpr (KnownRegArgsCpuCall<0x800A8A6Cu>(&func_800A8A6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800A8A6C_4DE2 = func_800A8A6C_ra8_0_10_0(ctx, r3);
        r4 = regargs_result_800A8A6C_4DE2;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800A8A6Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    f0.d = PpcFmulsInline(f22.d, f1.d);
    f1.d = PpcFmulsInline(f27.d, f0.d);
    r3 = (r1 + 64);
    r4 = (r1 + 60);
    ctx->lr = 0x800CD9ECu;
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
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8009C7C4u>(ctx);
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
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    cr = ctx->cr;
    ctr = ctx->ctr;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 60));
    f0.d = PpcFmulsInline(f0.d, f25.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 60), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 64));
    f3.d = PpcFmulsInline(f0.d, f25.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 64), f3.d);
    r3 = (r1 + 44);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 56));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -30624));
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    r3 = (r1 + 44);
    r4 = r3;
    ctx->lr = 0x800CDA20u;
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
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8009C4E8u>(ctx);
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
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    cr = ctx->cr;
    ctr = ctx->ctr;
    mkw_gqr0 = ctx->gqr[0];
    r3 = (r1 + 32);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = r25;
    r4 = (r1 + 32);
    r5 = r26;
    r6 = (r1 + 68);
    r7 = (r1 + 56);
    r8 = r7;
    r9 = (r1 + 44);
    ctx->lr = 0x800CDA48u;
    if constexpr (KnownRegArgsCpuCall<0x800A9A18u>(&func_800A9A18)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_800A9A18_5E5C = func_800A9A18_ra38_fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d);
        r3 = static_cast<uint32_t>(regargs_result_800A9A18_5E5C);
        r4 = static_cast<uint32_t>(regargs_result_800A9A18_5E5C >> 32);
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
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
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
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x800A9A18u>(ctx);
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
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r3 = MemoryInline::FlatRead32((r1 + 32));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r0 = MemoryInline::FlatRead32((r1 + 40));
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r3 = MemoryInline::FlatRead32((r1 + 68));
    r0 = MemoryInline::FlatRead32((r1 + 72));
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    r0 = MemoryInline::FlatRead32((r1 + 76));
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    r3 = (r26 + 236);
    ctx->lr = 0x800CDA80u;
    if constexpr (KnownRegArgsCpuCall<0x800A8A6Cu>(&func_800A8A6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800A8A6C_69DB = func_800A8A6C_ra8_0_10_0(ctx, r3);
        r4 = regargs_result_800A8A6C_69DB;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800A8A6Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r0 = MemoryInline::FlatRead8((r26 + 103));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 ^ -2147483648);
    stackword16 = r0;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    stackword17 = r24;
    MemoryInline::FlatWriteRam32((r1 + 80), r24);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword17), static_cast<uint32_t>(stackword16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f23.d));
    f0.d = PpcFmulsInline(f24.d, f0.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f25.d = static_cast<double>(PpcForceSingleValueInline(f28.d + f0.d));
    r3 = r25;
    r4 = (r29 & 65535);
    f1.d = f26.d;
    r5 = r26;
    ctx->lr = 0x800CDABCu;
    if constexpr (KnownRegArgsCpuCall<0x800AA014u>(&func_800AA014)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_800AA014_7099 = func_800AA014_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_800AA014_7099);
        r4 = static_cast<uint32_t>(regargs_result_800AA014_7099 >> 32);
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
        f31 = ctx->fpr[31];
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
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x800AA014u>(ctx);
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r0 = r3;
    r3 = r27;
    r4 = (r0 & 65535);
    r5 = (r1 + 20);
    r6 = (r1 + 8);
    r7 = r30;
    f1.d = f25.d;
    r8 = (r26 + 252);
    r9 = MemoryInline::FlatRead32((r26 + 248));
    r10 = MemoryInline::FlatRead16((r26 + 232));
    if (r3 >= 0x80000000u) {
        r12 = MemoryInline::FlatRead32((r3 + 28));
        if (r12 >= 0x80000000u) {
            r12 = MemoryInline::FlatRead32((r12 + 20));
            if (r12 >= 0x80000000u) {
                ctr = r12;
                ctx->lr = 0x800CDAF4u;
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
                ctx->fpr[5] = f5;
                ctx->fpr[6] = f6;
                ctx->fpr[7] = f7;
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
                f5 = ctx->fpr[5];
                f6 = ctx->fpr[6];
                f7 = ctx->fpr[7];
                cr = ctx->cr;
                ctr = ctx->ctr;
                mkw_gqr0 = ctx->gqr[0];
            }
        }
    }
    r31 = (r31 + 1);
}

loc_800CDAF8:
{
}

loc_800CDAFC:
{
    if ((static_cast<int32_t>(r31) < static_cast<int32_t>(r28))) {
        goto loc_800CD964;
    }
}

loc_800CDB00:
{
    r0 = 280;
    addr_psqx_800CDB04_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800CDB04_loc_0));
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + 128), 0, 168u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 144u, (r1 + 272));
    r0 = 264;
    addr_psqx_800CDB10_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800CDB10_loc_0));
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 128u, (r1 + 256));
    r0 = 248;
    addr_psqx_800CDB1C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f29, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800CDB1C_loc_0));
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 112u, (r1 + 240));
    r0 = 232;
    addr_psqx_800CDB28_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f28, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800CDB28_loc_0));
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 96u, (r1 + 224));
    r0 = 216;
    addr_psqx_800CDB34_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f27, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800CDB34_loc_0));
    f27.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 80u, (r1 + 208));
    r0 = 200;
    addr_psqx_800CDB40_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f26, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800CDB40_loc_0));
    f26.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 64u, (r1 + 192));
    r0 = 184;
    addr_psqx_800CDB4C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f25, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800CDB4C_loc_0));
    f25.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 48u, (r1 + 176));
    r0 = 168;
    addr_psqx_800CDB58_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f24, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800CDB58_loc_0));
    f24.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 32u, (r1 + 160));
    r0 = 152;
    addr_psqx_800CDB64_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f23, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800CDB64_loc_0));
    f23.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 16u, (r1 + 144));
    r0 = 136;
    addr_psqx_800CDB70_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f22, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800CDB70_loc_0));
    f22.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 0u, (r1 + 128));
    r11 = (r1 + 128);
    // inline leaf 0x804574C8 (9 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, true, false);
    // end of inlined leaf 0x804574C8
    r0 = MemoryInline::ReadResolved32(guest_range_4, 164u, (r1 + 292));
    ctx->lr = r0;
    r1 = (r1 + 288);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
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
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
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
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800CD5E8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800CD5E8_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFFC0FFFF fpr_write=0xFFC0FFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800CD5E8 func_800CD5E8 preserves=true fpr_mask=0x00000000
