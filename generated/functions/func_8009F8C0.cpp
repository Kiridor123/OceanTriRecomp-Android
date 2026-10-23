#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8009EF58(CpuContext* ctx);
extern "C" uint64_t func_8009EF58_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_8009F8C0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_psqx_800A01E4_loc_0 = 0;
    uint32_t addr_psqx_800A01F0_loc_0 = 0;
    uint32_t addr_psqx_800A01FC_loc_0 = 0;
    uint32_t addr_psqx_800A0208_loc_0 = 0;
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
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r29_rot_0 = 0;
    uint32_t r29_rot_1 = 0;
    uint32_t r29_rot_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
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
    uint8_t* guest_range_2 = nullptr;

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
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_8009F8C0;

loc_8009F8C0:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + -192), 0, 200u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + -192), r1);
    r1 = (r1 + -192);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_2, 196u, (r1 + 196), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_2, 176u, (r1 + 176), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 184);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 160u, (r1 + 160), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 168);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 144u, (r1 + 144), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 152);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 128u, (r1 + 128), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 136);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    r11 = (r1 + 128);
    // inline leaf 0x80457470 (12 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -44), 0, 44u, false, true);
    // end of inlined leaf 0x80457470
    r25 = r3;
    r31 = r4;
    r24 = r5;
    r22 = r6;
    r23 = r7;
    r0 = 1127219200;
    MemoryInline::WriteResolved32(guest_range_2, 64u, (r1 + 64), r0);
    r0 = 1127219200;
    MemoryInline::WriteResolved32(guest_range_2, 72u, (r1 + 72), r0);
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r11 = (r3 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_8009F93C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009F954;
    }
}

loc_8009F940:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 2130706432);
}

loc_8009F94C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009F954;
    }
}

loc_8009F950:
{
    r10 = 0;
}

loc_8009F954:
{
}

loc_8009F958:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_8009F970;
    }
}

loc_8009F95C:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 1879048192);
}

loc_8009F968:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009F970;
    }
}

loc_8009F96C:
{
    r9 = 0;
}

loc_8009F970:
{
}

loc_8009F974:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8009F988;
    }
}

loc_8009F978:
{
    r0 = (r11 + 1073741824);
}

loc_8009F980:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009F988;
    }
}

loc_8009F984:
{
    r8 = 0;
}

loc_8009F988:
{
}

loc_8009F98C:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8009F9A4;
    }
}

loc_8009F990:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 1056964608);
}

loc_8009F99C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009F9A4;
    }
}

loc_8009F9A0:
{
    r7 = 0;
}

loc_8009F9A4:
{
}

loc_8009F9A8:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8009F9C0;
    }
}

loc_8009F9AC:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 805306368);
}

loc_8009F9B8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009F9C0;
    }
}

loc_8009F9BC:
{
    r6 = 0;
}

loc_8009F9C0:
{
}

loc_8009F9C4:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8009F9DC;
    }
}

loc_8009F9C8:
{
    r3 = (r3 & -16384);
    r0 = (r3 + 536870912);
}

loc_8009F9D4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009F9DC;
    }
}

loc_8009F9D8:
{
    r5 = 0;
}

loc_8009F9DC:
{
}

loc_8009F9E0:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8009FA04;
    }
}

loc_8009F9E4:
{
    r3 = 0x80590000u;
    r3 = (r3 + 9768);
    r4 = 1048;
    r5 = 0x80590000u;
    r5 = (r5 + 10060);
    r6 = r25;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8009FA04u;
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

loc_8009FA04:
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

loc_8009FA28:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009FA40;
    }
}

loc_8009FA2C:
{
    r3 = (r31 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_8009FA38:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009FA40;
    }
}

loc_8009FA3C:
{
    r9 = 0;
}

loc_8009FA40:
{
}

loc_8009FA44:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8009FA5C;
    }
}

loc_8009FA48:
{
    r3 = (r31 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_8009FA54:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009FA5C;
    }
}

loc_8009FA58:
{
    r8 = 0;
}

loc_8009FA5C:
{
}

loc_8009FA60:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8009FA74;
    }
}

loc_8009FA64:
{
    r0 = (r10 + 1073741824);
}

loc_8009FA6C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009FA74;
    }
}

loc_8009FA70:
{
    r7 = 0;
}

loc_8009FA74:
{
}

loc_8009FA78:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8009FA90;
    }
}

loc_8009FA7C:
{
    r3 = (r31 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_8009FA88:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009FA90;
    }
}

loc_8009FA8C:
{
    r6 = 0;
}

loc_8009FA90:
{
}

loc_8009FA94:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8009FAAC;
    }
}

loc_8009FA98:
{
    r3 = (r31 & -134217728);
    r0 = (r3 + 805306368);
}

loc_8009FAA4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009FAAC;
    }
}

loc_8009FAA8:
{
    r5 = 0;
}

loc_8009FAAC:
{
}

loc_8009FAB0:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8009FAC8;
    }
}

loc_8009FAB4:
{
    r3 = (r31 & -16384);
    r0 = (r3 + 536870912);
}

loc_8009FAC0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009FAC8;
    }
}

loc_8009FAC4:
{
    r4 = 0;
}

loc_8009FAC8:
{
}

loc_8009FACC:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8009FAF0;
    }
}

loc_8009FAD0:
{
    r3 = 0x80590000u;
    r3 = (r3 + 9768);
    r4 = 1049;
    r5 = 0x80590000u;
    r5 = (r5 + 10116);
    r6 = r31;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8009FAF0u;
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

loc_8009FAF0:
{
    r0 = MemoryInline::FlatRead8(r25);
}

loc_8009FAF8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(171))) {
        goto loc_8009FB14;
    }
}

loc_8009FAFC:
{
    r3 = r25;
    r4 = r31;
    r5 = r24;
    r6 = r23;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x800A2D54u>(ctx);
    mkw_gqr0 = ctx->gqr[0];
    goto loc_800A01E0;
}

loc_8009FB14:
{
    r28 = MemoryInline::FlatRead8((r25 + 3));
    r3 = r25;
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
    r3 = r23;
    r4 = MemoryInline::FlatRead32((r1 + 56));
    r5 = r24;
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
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead8(r3_addr_1);
    // end of inlined leaf 0x8009F8AC
    r30 = r3;
    r3 = r28;
    // inline leaf 0x8009F898 (5 guest instruction(s))
    r0 = (r3 & 255);
    r3 = 0x80590000u;
    r3 = (r3 + 9256);
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead8(r3_addr_2);
    // end of inlined leaf 0x8009F898
    r0 = (r3 & 255);
}

loc_8009FB74:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800A01E0;
    }
}

loc_8009FB78:
{
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r3 = (r3_rot_1 & -4);
    r27 = (r3 + 12);
    r29_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r29 = (r29_rot_1 & -8);
    r3 = MemoryInline::FlatRead32((r1 + 52));
    r26 = (r3 + 4);
    r3 = MemoryInline::FlatRead16(r3);
    r0 = (r3 + -1);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = (r1 + 24);
    r4 = (r1 + 16);
    r5 = (r1 + 20);
    r6 = (r1 + 18);
    r7 = MemoryInline::FlatRead16((r1 + 22));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 36));
    r8 = r26;
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

loc_8009FBC8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8009FD00;
    }
}

loc_8009FBCC:
{
    r0 = MemoryInline::FlatRead32((r1 + 24));
    r0 = (r0 * r27);
    r21 = (r26 + r0);
    r21 = (r21 + 12);
    r0 = MemoryInline::FlatRead8((r21 + -10));
}

loc_8009FBE4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8009FC24;
    }
}

loc_8009FBE8:
{
    r4 = 1;
    r0 = (r30 & 255);
    goto loc_8009FC18;
}

loc_8009FBF4:
{
    r3 = (r28 & r4);
}

loc_8009FBFC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8009FC0C;
    }
}

loc_8009FC00:
{
    f0.d = MemoryInline::FlatReadFloat32(r21);
    r21 = (r21 + 4);
    MemoryInline::FlatWriteFloat32(r31, f0.d);
}

loc_8009FC0C:
{
    r31 = (r31 + 4);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & -2);
    r4 = (r3 & 65535);
}

loc_8009FC18:
{
}

loc_8009FC1C:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(r0))) {
        goto loc_8009FBF4;
    }
}

loc_8009FC20:
{
    goto loc_800A01E0;
}

loc_8009FC24:
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
        const auto regargs_result_8009EF58_3FF3 = func_8009EF58_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8009EF58_3FF3);
        r4 = static_cast<uint32_t>(regargs_result_8009EF58_3FF3 >> 32);
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

loc_8009FC4C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8009FC64;
    }
}

loc_8009FC50:
{
    r4 = MemoryInline::FlatRead32((r1 + 48));
    r0 = (r23 * r29);
    r4 = (r4 + r0);
    r21 = (r4 + 4);
    goto loc_8009FC8C;
}

loc_8009FC64:
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
    r21 = (r4 + 4);
    // inline leaf 0x8009EF40 (6 guest instruction(s))
    r4 = 196608;
    r0 = (r4 + 17405);
    r3 = (r3 * r0);
    r3 = (r3 + 2555904);
    r3 = (r3 + -24893);
    // end of inlined leaf 0x8009EF40
}

loc_8009FC8C:
{
    r23 = 1;
    f30.d = MemoryInline::FlatReadFloat64((r2 + -31456));
    r22 = (r30 & 255);
    goto loc_8009FCF4;
}

loc_8009FC9C:
{
    r0 = (r28 & r23);
}

loc_8009FCA4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8009FCE8;
    }
}

loc_8009FCA8:
{
    f2.d = MemoryInline::FlatReadFloat32(r21);
    f1.d = MemoryInline::FlatReadFloat32((r21 + 4));
    r21 = (r21 + 8);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0 = (r0_rot_2 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 64));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f30.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteFloat32(r31, f0.d);
    r4 = MemoryInline::FlatRead32((r1 + 56));
    r0 = MemoryInline::FlatRead8((r4 + 4));
    r0 = (r0 & 4);
}

loc_8009FCE0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8009FCE8;
    }
}

loc_8009FCE4:
{
    // inline leaf 0x8009EF40 (6 guest instruction(s))
    r4 = 196608;
    r0 = (r4 + 17405);
    r3 = (r3 * r0);
    r3 = (r3 + 2555904);
    r3 = (r3 + -24893);
    // end of inlined leaf 0x8009EF40
}

loc_8009FCE8:
{
    r31 = (r31 + 4);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & -2);
    r23 = (r0 & 65535);
}

loc_8009FCF4:
{
}

loc_8009FCF8:
{
    if ((static_cast<int32_t>(r23) <= static_cast<int32_t>(r22))) {
        goto loc_8009FC9C;
    }
}

loc_8009FCFC:
{
    goto loc_800A01E0;
}

loc_8009FD00:
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
    r3 = (r26 + r0);
    r25 = (r3 + 12);
    r0 = (r4 + 1);
    r0 = (r0 * r27);
    r26 = (r26 + r0);
    r26 = (r26 + 12);
    r27 = (r3 + 4);
    r3 = MemoryInline::FlatRead8((r25 + -10));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_1 & 1);
    r3 = MemoryInline::FlatRead8((r26 + -10));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_5 & 1);
}

loc_8009FD9C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8009FDFC;
    }
}

loc_8009FDA0:
{
}

loc_8009FDA4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8009FDFC;
    }
}

loc_8009FDA8:
{
    r21 = 1;
    r22 = (r30 & 255);
    goto loc_8009FDF0;
}

loc_8009FDB4:
{
    r0 = (r28 & r21);
}

loc_8009FDBC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8009FDE0;
    }
}

loc_8009FDC0:
{
    f1.d = f31.d;
    f2.d = MemoryInline::FlatReadFloat32(r25);
    f3.d = MemoryInline::FlatReadFloat32(r26);
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
    r26 = (r26 + 4);
}

loc_8009FDE0:
{
    r27 = (r27 + 1);
    r31 = (r31 + 4);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r21), static_cast<uint32_t>(1));
    r0 = (r0_rot_7 & -2);
    r21 = (r0 & 65535);
}

loc_8009FDF0:
{
}

loc_8009FDF4:
{
    if ((static_cast<int32_t>(r21) <= static_cast<int32_t>(r22))) {
        goto loc_8009FDB4;
    }
}

loc_8009FDF8:
{
    goto loc_800A01E0;
}

loc_8009FDFC:
{
}

loc_8009FE00:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8009FF14;
    }
}

loc_8009FE04:
{
}

loc_8009FE08:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8009FF14;
    }
}

loc_8009FE0C:
{
    r21 = MemoryInline::FlatRead16(r25);
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
        const auto regargs_result_8009EF58_5D57 = func_8009EF58_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8009EF58_5D57);
        r4 = static_cast<uint32_t>(regargs_result_8009EF58_5D57 >> 32);
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
    r24 = r3;
    r0 = MemoryInline::FlatRead8((r25 + -10));
    r0 = (r0 & 2);
}

loc_8009FE38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8009FE50;
    }
}

loc_8009FE3C:
{
    r3 = MemoryInline::FlatRead32((r1 + 48));
    r0 = (r21 * r29);
    r3 = (r3 + r0);
    r21 = (r3 + 4);
    goto loc_8009FE7C;
}

loc_8009FE50:
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
    r21 = (r4 + 4);
    // inline leaf 0x8009EF40 (6 guest instruction(s))
    r4 = 196608;
    r0 = (r4 + 17405);
    r3 = (r3 * r0);
    r3 = (r3 + 2555904);
    r3 = (r3 + -24893);
    // end of inlined leaf 0x8009EF40
    r24 = r3;
}

loc_8009FE7C:
{
    r23 = 1;
    f30.d = MemoryInline::FlatReadFloat64((r2 + -31456));
    r22 = (r30 & 255);
    goto loc_8009FF08;
}

loc_8009FE8C:
{
    r0 = (r28 & r23);
}

loc_8009FE94:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8009FEF8;
    }
}

loc_8009FE98:
{
    f2.d = MemoryInline::FlatReadFloat32(r21);
    f1.d = MemoryInline::FlatReadFloat32((r21 + 4));
    r21 = (r21 + 8);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r24), static_cast<uint32_t>(16));
    r0 = (r0_rot_9 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 76), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 72));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f30.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f29.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    r3 = MemoryInline::FlatRead32((r1 + 56));
    r0 = MemoryInline::FlatRead8((r3 + 4));
    r0 = (r0 & 4);
}

loc_8009FECC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8009FEDC;
    }
}

loc_8009FED0:
{
    r3 = r24;
    // inline leaf 0x8009EF40 (6 guest instruction(s))
    r4 = 196608;
    r0 = (r4 + 17405);
    r3 = (r3 * r0);
    r3 = (r3 + 2555904);
    r3 = (r3 + -24893);
    // end of inlined leaf 0x8009EF40
    r24 = r3;
}

loc_8009FEDC:
{
    f1.d = f31.d;
    f2.d = f29.d;
    f3.d = MemoryInline::FlatReadFloat32(r26);
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
    r26 = (r26 + 4);
}

loc_8009FEF8:
{
    r27 = (r27 + 1);
    r31 = (r31 + 4);
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(1));
    r0 = (r0_rot_11 & -2);
    r23 = (r0 & 65535);
}

loc_8009FF08:
{
}

loc_8009FF0C:
{
    if ((static_cast<int32_t>(r23) <= static_cast<int32_t>(r22))) {
        goto loc_8009FE8C;
    }
}

loc_8009FF10:
{
    goto loc_800A01E0;
}

loc_8009FF14:
{
}

loc_8009FF18:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800A002C;
    }
}

loc_8009FF1C:
{
}

loc_8009FF20:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800A002C;
    }
}

loc_8009FF24:
{
    r21 = MemoryInline::FlatRead16(r26);
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
        const auto regargs_result_8009EF58_6FD0 = func_8009EF58_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8009EF58_6FD0);
        r4 = static_cast<uint32_t>(regargs_result_8009EF58_6FD0 >> 32);
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
    r24 = r3;
    r0 = MemoryInline::FlatRead8((r26 + -10));
    r0 = (r0 & 2);
}

loc_8009FF50:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8009FF68;
    }
}

loc_8009FF54:
{
    r3 = MemoryInline::FlatRead32((r1 + 48));
    r0 = (r21 * r29);
    r3 = (r3 + r0);
    r21 = (r3 + 4);
    goto loc_8009FF94;
}

loc_8009FF68:
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
    r21 = (r4 + 4);
    // inline leaf 0x8009EF40 (6 guest instruction(s))
    r4 = 196608;
    r0 = (r4 + 17405);
    r3 = (r3 * r0);
    r3 = (r3 + 2555904);
    r3 = (r3 + -24893);
    // end of inlined leaf 0x8009EF40
    r24 = r3;
}

loc_8009FF94:
{
    r23 = 1;
    f30.d = MemoryInline::FlatReadFloat64((r2 + -31456));
    r22 = (r30 & 255);
    goto loc_800A0020;
}

loc_8009FFA4:
{
    r0 = (r28 & r23);
}

loc_8009FFAC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800A0010;
    }
}

loc_8009FFB0:
{
    f2.d = MemoryInline::FlatReadFloat32(r21);
    f1.d = MemoryInline::FlatReadFloat32((r21 + 4));
    r21 = (r21 + 8);
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r24), static_cast<uint32_t>(16));
    r0 = (r0_rot_13 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 64));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f30.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f29.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    r3 = MemoryInline::FlatRead32((r1 + 56));
    r0 = MemoryInline::FlatRead8((r3 + 4));
    r0 = (r0 & 4);
}

loc_8009FFE4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8009FFF4;
    }
}

loc_8009FFE8:
{
    r3 = r24;
    // inline leaf 0x8009EF40 (6 guest instruction(s))
    r4 = 196608;
    r0 = (r4 + 17405);
    r3 = (r3 * r0);
    r3 = (r3 + 2555904);
    r3 = (r3 + -24893);
    // end of inlined leaf 0x8009EF40
    r24 = r3;
}

loc_8009FFF4:
{
    f1.d = f31.d;
    f2.d = MemoryInline::FlatReadFloat32(r25);
    f3.d = f29.d;
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

loc_800A0010:
{
    r27 = (r27 + 1);
    r31 = (r31 + 4);
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(1));
    r0 = (r0_rot_15 & -2);
    r23 = (r0 & 65535);
}

loc_800A0020:
{
}

loc_800A0024:
{
    if ((static_cast<int32_t>(r23) <= static_cast<int32_t>(r22))) {
        goto loc_8009FFA4;
    }
}

loc_800A0028:
{
    goto loc_800A01E0;
}

loc_800A002C:
{
    r21 = MemoryInline::FlatRead16(r25);
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
        const auto regargs_result_8009EF58_8125 = func_8009EF58_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8009EF58_8125);
        r4 = static_cast<uint32_t>(regargs_result_8009EF58_8125 >> 32);
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
    r24 = r3;
    r0 = MemoryInline::FlatRead8((r25 + -10));
    r0 = (r0 & 2);
}

loc_800A0058:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800A0070;
    }
}

loc_800A005C:
{
    r3 = MemoryInline::FlatRead32((r1 + 48));
    r0 = (r21 * r29);
    r3 = (r3 + r0);
    r25 = (r3 + 4);
    goto loc_800A009C;
}

loc_800A0070:
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
    r25 = (r4 + 4);
    // inline leaf 0x8009EF40 (6 guest instruction(s))
    r4 = 196608;
    r0 = (r4 + 17405);
    r3 = (r3 * r0);
    r3 = (r3 + 2555904);
    r3 = (r3 + -24893);
    // end of inlined leaf 0x8009EF40
    r24 = r3;
}

loc_800A009C:
{
    r21 = MemoryInline::FlatRead16(r26);
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
        const auto regargs_result_8009EF58_89E0 = func_8009EF58_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8009EF58_89E0);
        r4 = static_cast<uint32_t>(regargs_result_8009EF58_89E0 >> 32);
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
    r0 = MemoryInline::FlatRead8((r26 + -10));
    r0 = (r0 & 2);
}

loc_800A00C8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800A00E0;
    }
}

loc_800A00CC:
{
    r3 = MemoryInline::FlatRead32((r1 + 48));
    r0 = (r21 * r29);
    r3 = (r3 + r0);
    r26 = (r3 + 4);
    goto loc_800A010C;
}

loc_800A00E0:
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
    r26 = (r4 + 4);
    // inline leaf 0x8009EF40 (6 guest instruction(s))
    r4 = 196608;
    r0 = (r4 + 17405);
    r3 = (r3 * r0);
    r3 = (r3 + 2555904);
    r3 = (r3 + -24893);
    // end of inlined leaf 0x8009EF40
    r23 = r3;
}

loc_800A010C:
{
    r29 = 1;
    f30.d = MemoryInline::FlatReadFloat64((r2 + -31456));
    r22 = (r30 & 255);
    goto loc_800A01D8;
}

loc_800A011C:
{
    r0 = (r28 & r29);
}

loc_800A0124:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800A01C8;
    }
}

loc_800A0128:
{
    f2.d = MemoryInline::FlatReadFloat32(r25);
    f1.d = MemoryInline::FlatReadFloat32((r25 + 4));
    r25 = (r25 + 8);
    r0_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r24), static_cast<uint32_t>(16));
    r0 = (r0_rot_17 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 76), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 72));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f30.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f29.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    r3 = MemoryInline::FlatRead32((r1 + 56));
    r0 = MemoryInline::FlatRead8((r3 + 4));
    r0 = (r0 & 4);
}

loc_800A015C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800A016C;
    }
}

loc_800A0160:
{
    r3 = r24;
    // inline leaf 0x8009EF40 (6 guest instruction(s))
    r4 = 196608;
    r0 = (r4 + 17405);
    r3 = (r3 * r0);
    r3 = (r3 + 2555904);
    r3 = (r3 + -24893);
    // end of inlined leaf 0x8009EF40
    r24 = r3;
}

loc_800A016C:
{
    f2.d = MemoryInline::FlatReadFloat32(r26);
    f1.d = MemoryInline::FlatReadFloat32((r26 + 4));
    r26 = (r26 + 8);
    r0_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(16));
    r0 = (r0_rot_18 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 64));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f30.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f28.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    r3 = MemoryInline::FlatRead32((r1 + 56));
    r0 = MemoryInline::FlatRead8((r3 + 4));
    r0 = (r0 & 4);
}

loc_800A01A0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800A01B0;
    }
}

loc_800A01A4:
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

loc_800A01B0:
{
    f1.d = f31.d;
    f2.d = f29.d;
    f3.d = f28.d;
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

loc_800A01C8:
{
    r27 = (r27 + 1);
    r31 = (r31 + 4);
    r0_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(1));
    r0 = (r0_rot_20 & -2);
    r29 = (r0 & 65535);
}

loc_800A01D8:
{
}

loc_800A01DC:
{
    if ((static_cast<int32_t>(r29) <= static_cast<int32_t>(r22))) {
        goto loc_800A011C;
    }
}

loc_800A01E0:
{
    r0 = 184;
    addr_psqx_800A01E4_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800A01E4_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 176));
    r0 = 168;
    addr_psqx_800A01F0_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800A01F0_loc_0));
    f30.d = MemoryInline::FlatReadFloat64((r1 + 160));
    r0 = 152;
    addr_psqx_800A01FC_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f29, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800A01FC_loc_0));
    f29.d = MemoryInline::FlatReadFloat64((r1 + 144));
    r0 = 136;
    addr_psqx_800A0208_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f28, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800A0208_loc_0));
    f28.d = MemoryInline::FlatReadFloat64((r1 + 128));
    r11 = (r1 + 128);
    // inline leaf 0x804574BC (12 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -44), 0, 44u, true, false);
    // end of inlined leaf 0x804574BC
    r0 = MemoryInline::FlatRead32((r1 + 196));
    ctx->lr = r0;
    r1 = (r1 + 192);
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
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000FFF gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0xF000000F fpr_write=0xF000000F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8009F8C0 func_8009F8C0 preserves=true fpr_mask=0x00000000
