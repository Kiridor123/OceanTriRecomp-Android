#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800A6ED4(CpuContext* ctx);
extern "C" uint64_t func_800A6ED4_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_800AB340(CpuContext* ctx);
extern "C" uint32_t func_800AB340_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_800AB43C(CpuContext* ctx);
extern "C" uint32_t func_800AB43C_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_800AA804(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_psqx_800AB09C_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r23_rot_0 = 0;
    uint32_t r23_rot_1 = 0;
    uint32_t r23_rot_10 = 0;
    uint32_t r23_rot_11 = 0;
    uint32_t r23_rot_12 = 0;
    uint32_t r23_rot_13 = 0;
    uint32_t r23_rot_14 = 0;
    uint32_t r23_rot_15 = 0;
    uint32_t r23_rot_16 = 0;
    uint32_t r23_rot_17 = 0;
    uint32_t r23_rot_2 = 0;
    uint32_t r23_rot_3 = 0;
    uint32_t r23_rot_4 = 0;
    uint32_t r23_rot_5 = 0;
    uint32_t r23_rot_6 = 0;
    uint32_t r23_rot_7 = 0;
    uint32_t r23_rot_8 = 0;
    uint32_t r23_rot_9 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r4_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

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
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    MKW_GUEST_ENTER(0x800AA804u);
    goto loc_800AA804;

loc_800AA804:
{
    MemoryInline::FlatWriteRam32((r1 + -272), r1);
    r1 = (r1 + -272);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 276), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 256), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 264);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 256);
    // inline leaf 0x80457478 (10 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, false, true);
    // end of inlined leaf 0x80457478
    r24 = r3;
    r31 = r4;
    r30 = r5;
    r29 = r6;
    r28 = r7;
    r27 = r8;
    f31.d = f1.d;
    r25 = r9;
    r26 = r10;
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 200), r0);
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 208), r0);
    r4 = 1;
    r5 = 1;
    r6 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r11 = (r7 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_800AA878:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800AA890;
    }
}

loc_800AA87C:
{
    r3 = (r7 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800AA888:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800AA890;
    }
}

loc_800AA88C:
{
    r10 = 0;
}

loc_800AA890:
{
}

loc_800AA894:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_800AA8AC;
    }
}

loc_800AA898:
{
    r3 = (r7 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800AA8A4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800AA8AC;
    }
}

loc_800AA8A8:
{
    r9 = 0;
}

loc_800AA8AC:
{
}

loc_800AA8B0:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800AA8C4;
    }
}

loc_800AA8B4:
{
    r0 = (r11 + 1073741824);
}

loc_800AA8BC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800AA8C4;
    }
}

loc_800AA8C0:
{
    r8 = 0;
}

loc_800AA8C4:
{
}

loc_800AA8C8:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800AA8E0;
    }
}

loc_800AA8CC:
{
    r3 = (r7 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800AA8D8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800AA8E0;
    }
}

loc_800AA8DC:
{
    r6 = 0;
}

loc_800AA8E0:
{
}

loc_800AA8E4:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800AA8FC;
    }
}

loc_800AA8E8:
{
    r3 = (r7 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800AA8F4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800AA8FC;
    }
}

loc_800AA8F8:
{
    r5 = 0;
}

loc_800AA8FC:
{
}

loc_800AA900:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800AA918;
    }
}

loc_800AA904:
{
    r3 = (r7 & -16384);
    r0 = (r3 + 536870912);
}

loc_800AA910:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800AA918;
    }
}

loc_800AA914:
{
    r4 = 0;
}

loc_800AA918:
{
}

loc_800AA91C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800AA940;
    }
}

loc_800AA920:
{
    r3 = 0x80590000u;
    r3 = (r3 + 13584);
    r4 = 114;
    r5 = 0x80590000u;
    r5 = (r5 + 13652);
    r6 = r28;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800AA940u;
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

loc_800AA940:
{
    r3 = r24;
    // inline leaf 0x800A44B0 (6 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 16), r0);
    r0 = 1;
    MemoryInline::FlatWrite32((r3 + 12), r0);
    r3 = 1;
    // end of inlined leaf 0x800A44B0
    r0 = (r31 & 65535);
}

loc_800AA950:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800AA958;
    }
}

loc_800AA954:
{
    r31 = 1;
}

loc_800AA958:
{
    MemoryInline::FlatWrite32((r24 + 200), r28);
    r3 = r28;
    // inline leaf 0x800A33E0 (5 guest instruction(s))
    r4 = MemoryInline::FlatRead32((r3 + 16));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r3 + 16), r0);
    r3 = r0;
    // end of inlined leaf 0x800A33E0
    r23 = 0;
    MemoryInline::FlatWrite32((r24 + 216), r23);
    MemoryInline::FlatWrite16((r24 + 226), static_cast<uint16_t>(r23));
    // inline leaf 0x800B28DC (3 guest instruction(s))
    r3 = 0x80690000u;
    r3 = (r3 + 27160);
    // end of inlined leaf 0x800B28DC
    r3 = MemoryInline::FlatRead32((r28 + 36));
    // inline leaf 0x800A48C8 (2 guest instruction(s))
    r3 = (r3 + 8);
    // end of inlined leaf 0x800A48C8
    r3 = MemoryInline::FlatRead32((r28 + 36));
    ctx->lr = 0x800AA984u;
    if constexpr (KnownRegArgsCpuCall<0x800AB43Cu>(&func_800AB43C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800AB43C_2001 = func_800AB43C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800AB43C_2001;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x800AB43Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r4 = r3;
    r3 = (r24 + 32);
    r5 = r28;
    ctx->lr = 0x800AA994u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x800AA334u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    mkw_gqr0 = ctx->gqr[0];
    MemoryInline::FlatWriteFloat32((r24 + 196), f31.d);
    MemoryInline::FlatWrite16((r24 + 220), static_cast<uint16_t>(r23));
    r3 = MemoryInline::FlatRead32((r28 + 32));
    r3 = (r3 + 236);
    ctx->lr = 0x800AA9A8u;
    if constexpr (KnownRegArgsCpuCall<0x800A6ED4u>(&func_800A6ED4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_800A6ED4_2639 = func_800A6ED4_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_800A6ED4_2639);
        r4 = static_cast<uint32_t>(regargs_result_800A6ED4_2639 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x800A6ED4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = (r3 & 65535);
    MemoryInline::FlatWrite16((r24 + 222), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r24 + 224), static_cast<uint16_t>(r31));
    r3 = MemoryInline::FlatRead32((r28 + 32));
    r3 = (r3 + 236);
    ctx->lr = 0x800AA9C0u;
    if constexpr (KnownRegArgsCpuCall<0x800A6ED4u>(&func_800A6ED4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_800A6ED4_2A41 = func_800A6ED4_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_800A6ED4_2A41);
        r4 = static_cast<uint32_t>(regargs_result_800A6ED4_2A41 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x800A6ED4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = (r3 & 255);
    MemoryInline::FlatWrite8((r24 + 229), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r28 + 32));
    r3 = (r3 + 236);
    ctx->lr = 0x800AA9D4u;
    if constexpr (KnownRegArgsCpuCall<0x800A6ED4u>(&func_800A6ED4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_800A6ED4_2DFD = func_800A6ED4_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_800A6ED4_2DFD);
        r4 = static_cast<uint32_t>(regargs_result_800A6ED4_2DFD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x800A6ED4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r4 = 0x81020000u;
    r0 = (r4 + 1033);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r3))) >> 32));
    r0 = (r0 + r3);
    r0 = (static_cast<int32_t>(r0) >> 7);
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_0 & 1);
    r0 = (r0 + r4);
    r0 = (r0 * 254);
    r3 = (r3 - r0);
    r0 = (r3 + -126);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::FlatWrite8((r24 + 153), static_cast<uint8_t>(r0));
    r3 = (r24 + 172);
    r4 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r24 + 184);
    r4 = (r24 + 172);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r24 + 160);
    r4 = r29;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r4 = 1;
    r5 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r3 = MemoryInline::FlatRead32((r28 + 32));
    r6 = MemoryInline::FlatRead32((r3 + 188));
    r11 = (r6 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_800AAA54:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800AAA6C;
    }
}

loc_800AAA58:
{
    r3 = (r6 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800AAA64:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800AAA6C;
    }
}

loc_800AAA68:
{
    r10 = 0;
}

loc_800AAA6C:
{
}

loc_800AAA70:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_800AAA88;
    }
}

loc_800AAA74:
{
    r3 = (r6 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800AAA80:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800AAA88;
    }
}

loc_800AAA84:
{
    r9 = 0;
}

loc_800AAA88:
{
}

loc_800AAA8C:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800AAAA0;
    }
}

loc_800AAA90:
{
    r0 = (r11 + 1073741824);
}

loc_800AAA98:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800AAAA0;
    }
}

loc_800AAA9C:
{
    r8 = 0;
}

loc_800AAAA0:
{
}

loc_800AAAA4:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800AAABC;
    }
}

loc_800AAAA8:
{
    r3 = (r6 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800AAAB4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800AAABC;
    }
}

loc_800AAAB8:
{
    r7 = 0;
}

loc_800AAABC:
{
}

loc_800AAAC0:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800AAAD8;
    }
}

loc_800AAAC4:
{
    r3 = (r6 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800AAAD0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800AAAD8;
    }
}

loc_800AAAD4:
{
    r5 = 0;
}

loc_800AAAD8:
{
}

loc_800AAADC:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800AAAF4;
    }
}

loc_800AAAE0:
{
    r3 = (r6 & -16384);
    r0 = (r3 + 536870912);
}

loc_800AAAEC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800AAAF4;
    }
}

loc_800AAAF0:
{
    r4 = 0;
}

loc_800AAAF4:
{
}

loc_800AAAF8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800AAB18;
    }
}

loc_800AAAFC:
{
    r3 = 0x80590000u;
    r3 = (r3 + 13584);
    r4 = 148;
    r5 = 0x80590000u;
    r5 = (r5 + 13704);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800AAB18u;
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

loc_800AAB18:
{
    r3 = MemoryInline::FlatRead32((r28 + 32));
    r3 = MemoryInline::FlatRead32((r3 + 188));
    // inline leaf 0x800AB434 (2 guest instruction(s))
    r3 = (r3 + 136);
    // end of inlined leaf 0x800AB434
    r23 = r3;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -31252));
    f0.d = MemoryInline::FlatReadFloat32(r3);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800AAB34:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800AAB50;
    }
}

loc_800AAB38:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800AAB40:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800AAB50;
    }
}

loc_800AAB44:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800AAB4C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800AABA4;
    }
}

loc_800AAB50:
{
    r3 = (r1 + 152);
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    r3 = MemoryInline::FlatRead32((r28 + 32));
    r4 = (r1 + 152);
    ctx->lr = 0x800AAB64u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x800A9508u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    mkw_gqr0 = ctx->gqr[0];
    r3 = (r1 + 152);
    r4 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80088428u>(ctx);
    r3 = ctx->gpr[3];
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31252));
    MemoryInline::FlatWriteRamFloat32((r1 + 196), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 180), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 164), f0.d);
    r3 = (r1 + 44);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 44);
    r4 = (r1 + 152);
    r5 = r23;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80051560u>(ctx);
    r3 = (r24 + 160);
    r4 = (r1 + 44);
    ctx->lr = 0x800AABA4u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80073FCCu>(ctx);
}

loc_800AABA4:
{
}

loc_800AABA8:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_800AABE8;
    }
}

loc_800AABAC:
{
    r3 = (r24 + 172);
    r4 = r27;
    r5 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80051560u>(ctx);
    r3 = (r1 + 104);
    r4 = r27;
    // inline leaf 0x800A8A04 (25 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost(r4, 0, 48u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
            r0 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r4 + 4));
        }
    }
    guest_range_2 = MemoryInline::ResolveRangeHost(r3, 0, 48u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 0u, r3, r5);
        MemoryInline::WriteResolved32(guest_range_2, 4u, (r3 + 4), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r4 + 8));
            r0 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r4 + 12));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 8u, (r3 + 8), r5);
        MemoryInline::WriteResolved32(guest_range_2, 12u, (r3 + 12), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r4 + 16));
            r0 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r4 + 20));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 16u, (r3 + 16), r5);
        MemoryInline::WriteResolved32(guest_range_2, 20u, (r3 + 20), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r4 + 24));
            r0 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r4 + 28));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 24u, (r3 + 24), r5);
        MemoryInline::WriteResolved32(guest_range_2, 28u, (r3 + 28), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r4 + 32));
            r0 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r4 + 36));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 32u, (r3 + 32), r5);
        MemoryInline::WriteResolved32(guest_range_2, 36u, (r3 + 36), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 40u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r4 + 40));
            r0 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r4 + 44));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 40u, (r3 + 40), r5);
        MemoryInline::WriteResolved32(guest_range_2, 44u, (r3 + 44), r0);
    }
    // end of inlined leaf 0x800A8A04
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31252));
    MemoryInline::FlatWriteRamFloat32((r1 + 148), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 132), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 116), f0.d);
    r3 = (r24 + 160);
    r4 = (r1 + 104);
    r5 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80051560u>(ctx);
}

loc_800AABE8:
{
    r3 = (r1 + 20);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -31296));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -31252));
    f3.d = f2.d;
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    r4 = r3;
    r3 = (r24 + 204);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
}

loc_800AAC0C:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(0))) {
        goto loc_800AB094;
    }
}

loc_800AAC10:
{
}

loc_800AAC14:
{
    if ((static_cast<int32_t>(r25) == static_cast<int32_t>(0))) {
        goto loc_800AB094;
    }
}

loc_800AAC18:
{
    r0 = MemoryInline::FlatRead16(r25);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_800AAC20:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800AAD14;
    }
}

loc_800AAC24:
{
    r3 = (r1 + 32);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 56);
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    r3 = MemoryInline::FlatRead32((r26 + 200));
    r4 = (r1 + 56);
    ctx->lr = 0x800AAC40u;
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
    ctx->cr = cr;
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    mkw_gqr0 = ctx->gqr[0];
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31252));
    MemoryInline::FlatWriteRamFloat32((r1 + 100), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 84), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 68), f0.d);
    r3 = (r1 + 32);
    r4 = (r1 + 56);
    r5 = (r26 + 160);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80051560u>(ctx);
    r3 = MemoryInline::FlatRead32((r24 + 200));
    r4 = (r1 + 56);
    ctx->lr = 0x800AAC6Cu;
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
    ctx->cr = cr;
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    mkw_gqr0 = ctx->gqr[0];
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31252));
    MemoryInline::FlatWriteRamFloat32((r1 + 100), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 84), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 68), f0.d);
    r3 = (r1 + 56);
    r4 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80088428u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r1 + 32);
    r4 = (r1 + 56);
    r5 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80051560u>(ctx);
    r0 = MemoryInline::FlatRead16(r25);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    f3.d = MemoryInline::FlatReadFloat64((r2 + -31240));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 204), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 200));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 32));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r2 + -31248));
    f1.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r24 + 160));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r24 + 160), f0.d);
    MemoryInline::FlatWriteRam32((r1 + 212), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 208));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 36));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f1.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r24 + 164));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r24 + 164), f0.d);
    MemoryInline::FlatWriteRam32((r1 + 204), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 200));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 40));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f1.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r24 + 168));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r24 + 168), f0.d);
}

loc_800AAD14:
{
    r0 = MemoryInline::FlatRead8((r25 + 2));
}

loc_800AAD1C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800AAD78;
    }
}

loc_800AAD20:
{
    r3 = r26;
    // inline leaf 0x800AB410 (9 guest instruction(s))
}

loc_inl12_0x800AB410:
{
    r4 = r3;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 48));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 56));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    r3 = MemoryInline::FlatRead32((r3 + 200));
}

loc_inl12_0x800AB428:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 88));
    f1.d = PpcFmulsInline(f1.d, f0.d);
}

loc_inl12_cont_800AB410:
{
    // end of inlined leaf 0x800AB410
    r0 = MemoryInline::FlatRead8((r25 + 2));
    f2.d = MemoryInline::FlatReadFloat64((r2 + -31280));
    MemoryInline::FlatWriteRam32((r1 + 212), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 208));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31248));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r24 + 48), f0.d);
    r3 = r26;
    ctx->lr = 0x800AAD54u;
    if constexpr (KnownRegArgsCpuCall<0x800AB340u>(&func_800AB340)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_800AB340_7B32 = func_800AB340_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800AB340_7B32;
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
    r0 = MemoryInline::FlatRead8((r25 + 2));
    f2.d = MemoryInline::FlatReadFloat64((r2 + -31280));
    MemoryInline::FlatWriteRam32((r1 + 204), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 200));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31248));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r24 + 52), f0.d);
}

loc_800AAD78:
{
    r0 = MemoryInline::FlatRead8((r25 + 3));
}

loc_800AAD80:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800AAF44;
    }
}

loc_800AAD84:
{
    r0 = MemoryInline::FlatRead32((r2 + -31260));
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r0 = MemoryInline::FlatRead32((r2 + -31256));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r3 = MemoryInline::FlatRead32((r26 + 200));
    r4 = r26;
    r5 = (r1 + 16);
    r6 = (r1 + 12);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x800AE70Cu>(ctx);
    mkw_gqr0 = ctx->gqr[0];
    r30 = 0;
    r29 = r24;
    r31 = 1374420992;
}

loc_800AADB4:
{
    r0 = MemoryInline::FlatRead8((r25 + 8));
}

loc_800AADBC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800AAE74;
    }
}

loc_800AADC0:
{
    r23 = 255;
    r0 = (r0 & 1);
}

loc_800AADCC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800AADF4;
    }
}

loc_800AADD0:
{
    r3 = r26;
    r4 = r30;
    r5 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800AB284u>(ctx);
    r3 = ctx->gpr[3];
    mkw_gqr0 = ctx->gqr[0];
    r3 = (r3 & 255);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r0 = (r0_rot_2 & -256);
    r3 = (r0 - r3);
    r23 = (r3 + 255);
    r23_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(24));
    r23 = (r23_rot_2 & 16777215);
}

loc_800AADF4:
{
    r0 = MemoryInline::FlatRead8((r25 + 8));
    r0 = (r0 & 2);
}

loc_800AAE00:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800AAE24;
    }
}

loc_800AAE04:
{
    r3 = r26;
    r4 = r30;
    r5 = 1;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800AB284u>(ctx);
    r3 = ctx->gpr[3];
    mkw_gqr0 = ctx->gqr[0];
    r0 = (r3 & 255);
    r3 = (r23 * r0);
    r23 = (r3 + 255);
    r23_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(24));
    r23 = (r23_rot_4 & 16777215);
}

loc_800AAE24:
{
    r0 = MemoryInline::FlatRead8((r25 + 8));
    r0 = (r0 & 4);
}

loc_800AAE30:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800AAE58;
    }
}

loc_800AAE34:
{
    r3 = r26;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800AB460u>(ctx);
    r3 = ctx->gpr[3];
    mkw_gqr0 = ctx->gqr[0];
    r0 = (r3 & 255);
    r3 = (r23 * r0);
    r3 = (r3 + 255);
    r0 = MemoryInline::FlatRead8((r1 + 19));
    r3 = (r3 * r0);
    r23 = (r3 + 255);
    r23_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(16));
    r23 = (r23_rot_6 & 65535);
}

loc_800AAE58:
{
    r0 = MemoryInline::FlatRead8((r25 + 3));
    r0 = (r23 * r0);
    r3 = (r31 + -31457);
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r3) * static_cast<uint64_t>(r0)) >> 32));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_4 & 134217727);
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8((r29 + 35), static_cast<uint8_t>(r0));
}

loc_800AAE74:
{
    r0 = MemoryInline::FlatRead8((r25 + 9));
}

loc_800AAE7C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800AAF34;
    }
}

loc_800AAE80:
{
    r23 = 255;
    r0 = (r0 & 1);
}

loc_800AAE8C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800AAEB4;
    }
}

loc_800AAE90:
{
    r3 = r26;
    r4 = r30;
    r5 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800AB284u>(ctx);
    r3 = ctx->gpr[3];
    mkw_gqr0 = ctx->gqr[0];
    r3 = (r3 & 255);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r0 = (r0_rot_6 & -256);
    r3 = (r0 - r3);
    r23 = (r3 + 255);
    r23_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(24));
    r23 = (r23_rot_9 & 16777215);
}

loc_800AAEB4:
{
    r0 = MemoryInline::FlatRead8((r25 + 9));
    r0 = (r0 & 2);
}

loc_800AAEC0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800AAEE4;
    }
}

loc_800AAEC4:
{
    r3 = r26;
    r4 = r30;
    r5 = 1;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800AB284u>(ctx);
    r3 = ctx->gpr[3];
    mkw_gqr0 = ctx->gqr[0];
    r0 = (r3 & 255);
    r3 = (r23 * r0);
    r23 = (r3 + 255);
    r23_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(24));
    r23 = (r23_rot_11 & 16777215);
}

loc_800AAEE4:
{
    r0 = MemoryInline::FlatRead8((r25 + 9));
    r0 = (r0 & 4);
}

loc_800AAEF0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800AAF18;
    }
}

loc_800AAEF4:
{
    r3 = r26;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800AB460u>(ctx);
    r3 = ctx->gpr[3];
    mkw_gqr0 = ctx->gqr[0];
    r0 = (r3 & 255);
    r3 = (r23 * r0);
    r3 = (r3 + 255);
    r0 = MemoryInline::FlatRead8((r1 + 19));
    r3 = (r3 * r0);
    r23 = (r3 + 255);
    r23_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(16));
    r23 = (r23_rot_13 & 65535);
}

loc_800AAF18:
{
    r0 = MemoryInline::FlatRead8((r25 + 3));
    r0 = (r23 * r0);
    r3 = (r31 + -31457);
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r3) * static_cast<uint64_t>(r0)) >> 32));
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_8 & 134217727);
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8((r29 + 39), static_cast<uint8_t>(r0));
}

loc_800AAF34:
{
    r29 = (r29 + 8);
    r30 = (r30 + 1);
}

loc_800AAF40:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(2))) {
        goto loc_800AADB4;
    }
}

loc_800AAF44:
{
    r0 = MemoryInline::FlatRead8((r25 + 4));
}

loc_800AAF4C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800AB000;
    }
}

loc_800AAF50:
{
    r28 = 0;
    r30 = r24;
    r3 = 1374420992;
    r31 = (r3 + -31457);
}

loc_800AAF60:
{
    r27 = 0;
    r29 = r30;
}

loc_800AAF68:
{
    r3 = r26;
    r4 = r28;
    r5 = r27;
    r6 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x800AB0BCu>(ctx);
    mkw_gqr0 = ctx->gqr[0];
    r0 = MemoryInline::FlatRead8((r1 + 8));
    r4 = MemoryInline::FlatRead8((r25 + 4));
    r0 = (r0 * r4);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r31)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 5);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & 1);
    r0 = (r0 + r3);
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8((r29 + 32), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 9));
    r0 = (r0 * r4);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r31)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 5);
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_4 & 1);
    r0 = (r0 + r3);
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8((r29 + 33), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 10));
    r0 = (r0 * r4);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r31)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 5);
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_5 & 1);
    r0 = (r0 + r3);
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8((r29 + 34), static_cast<uint8_t>(r0));
    r29 = (r29 + 4);
    r27 = (r27 + 1);
}

loc_800AAFEC:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(2))) {
        goto loc_800AAF68;
    }
}

loc_800AAFF0:
{
    r30 = (r30 + 8);
    r28 = (r28 + 1);
}

loc_800AAFFC:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(2))) {
        goto loc_800AAF60;
    }
}

loc_800AB000:
{
    r0 = MemoryInline::FlatRead8((r25 + 7));
    r0 = (r0 & 2);
}

loc_800AB00C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800AB094;
    }
}

loc_800AB010:
{
    f1.d = MemoryInline::FlatReadFloat32((r26 + 64));
    r0 = MemoryInline::FlatRead8((r26 + 154));
    f2.d = MemoryInline::FlatReadFloat64((r2 + -31280));
    MemoryInline::FlatWriteRam32((r1 + 212), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 208));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31244));
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    ctx->lr = 0x800AB038u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x800AA764u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    MemoryInline::FlatWrite8((r24 + 154), static_cast<uint8_t>(r3));
    f1.d = MemoryInline::FlatReadFloat32((r26 + 68));
    r0 = MemoryInline::FlatRead8((r26 + 155));
    f2.d = MemoryInline::FlatReadFloat64((r2 + -31280));
    MemoryInline::FlatWriteRam32((r1 + 204), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 200));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31244));
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    ctx->lr = 0x800AB064u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x800AA764u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    MemoryInline::FlatWrite8((r24 + 155), static_cast<uint8_t>(r3));
    f1.d = MemoryInline::FlatReadFloat32((r26 + 72));
    r0 = MemoryInline::FlatRead8((r26 + 156));
    f2.d = MemoryInline::FlatReadFloat64((r2 + -31280));
    MemoryInline::FlatWriteRam32((r1 + 212), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 208));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31244));
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    ctx->lr = 0x800AB090u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x800AA764u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    MemoryInline::FlatWrite8((r24 + 156), static_cast<uint8_t>(r3));
}

loc_800AB094:
{
    r3 = 1;
    r0 = 264;
    addr_psqx_800AB09C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800AB09C_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 256));
    r11 = (r1 + 256);
    // inline leaf 0x804574C4 (10 guest instruction(s))
    guest_range_3 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, true, false);
    // end of inlined leaf 0x804574C4
    r0 = MemoryInline::FlatRead32((r1 + 276));
    ctx->lr = r0;
    r1 = (r1 + 272);
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
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800AA804 func_800AA804 preserves=true fpr_mask=0x00000000
