#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80457360(CpuContext* ctx);
extern "C" uint32_t func_80457360_ra8_1e_8_0(CpuContext*, uint32_t, double, double, double, double);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_8009CE20(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_psqx_8009D604_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
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
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_8009CE20;

loc_8009CE20:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -80), 0, 88u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 84u, (r1 + 84), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_1, 64u, (r1 + 64), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 64);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r26 = r3;
    r27 = r4;
    r28 = r5;
    r29 = r6;
    r30 = r7;
    r31 = r8;
    r0 = 1127219200;
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r1 + 8), r0);
    r0 = 1127219200;
    MemoryInline::WriteResolved32(guest_range_1, 16u, (r1 + 16), r0);
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r11 = (r4 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_8009CE88:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009CEA0;
    }
}

loc_8009CE8C:
{
    r3 = (r4 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_8009CE98:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009CEA0;
    }
}

loc_8009CE9C:
{
    r10 = 0;
}

loc_8009CEA0:
{
}

loc_8009CEA4:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_8009CEBC;
    }
}

loc_8009CEA8:
{
    r3 = (r4 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_8009CEB4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009CEBC;
    }
}

loc_8009CEB8:
{
    r9 = 0;
}

loc_8009CEBC:
{
}

loc_8009CEC0:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8009CED4;
    }
}

loc_8009CEC4:
{
    r0 = (r11 + 1073741824);
}

loc_8009CECC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009CED4;
    }
}

loc_8009CED0:
{
    r8 = 0;
}

loc_8009CED4:
{
}

loc_8009CED8:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8009CEF0;
    }
}

loc_8009CEDC:
{
    r3 = (r4 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_8009CEE8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009CEF0;
    }
}

loc_8009CEEC:
{
    r7 = 0;
}

loc_8009CEF0:
{
}

loc_8009CEF4:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8009CF0C;
    }
}

loc_8009CEF8:
{
    r3 = (r4 & -134217728);
    r0 = (r3 + 805306368);
}

loc_8009CF04:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009CF0C;
    }
}

loc_8009CF08:
{
    r6 = 0;
}

loc_8009CF0C:
{
}

loc_8009CF10:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8009CF28;
    }
}

loc_8009CF14:
{
    r3 = (r4 & -16384);
    r0 = (r3 + 536870912);
}

loc_8009CF20:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009CF28;
    }
}

loc_8009CF24:
{
    r5 = 0;
}

loc_8009CF28:
{
}

loc_8009CF2C:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8009CF50;
    }
}

loc_8009CF30:
{
    r3 = 0x80590000u;
    r3 = (r3 + 9768);
    r4 = 135;
    r5 = 0x80590000u;
    r5 = (r5 + 9788);
    r6 = r27;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8009CF50u;
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

loc_8009CF50:
{
    r4 = 1;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = (r29 & -16777216);
    r0 = (r10 + -2147483648);
}

loc_8009CF74:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009CF8C;
    }
}

loc_8009CF78:
{
    r3 = (r29 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_8009CF84:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009CF8C;
    }
}

loc_8009CF88:
{
    r9 = 0;
}

loc_8009CF8C:
{
}

loc_8009CF90:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8009CFA8;
    }
}

loc_8009CF94:
{
    r3 = (r29 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_8009CFA0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009CFA8;
    }
}

loc_8009CFA4:
{
    r8 = 0;
}

loc_8009CFA8:
{
}

loc_8009CFAC:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8009CFC0;
    }
}

loc_8009CFB0:
{
    r0 = (r10 + 1073741824);
}

loc_8009CFB8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009CFC0;
    }
}

loc_8009CFBC:
{
    r7 = 0;
}

loc_8009CFC0:
{
}

loc_8009CFC4:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8009CFDC;
    }
}

loc_8009CFC8:
{
    r3 = (r29 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_8009CFD4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009CFDC;
    }
}

loc_8009CFD8:
{
    r6 = 0;
}

loc_8009CFDC:
{
}

loc_8009CFE0:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8009CFF8;
    }
}

loc_8009CFE4:
{
    r3 = (r29 & -134217728);
    r0 = (r3 + 805306368);
}

loc_8009CFF0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009CFF8;
    }
}

loc_8009CFF4:
{
    r5 = 0;
}

loc_8009CFF8:
{
}

loc_8009CFFC:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8009D014;
    }
}

loc_8009D000:
{
    r3 = (r29 & -16384);
    r0 = (r3 + 536870912);
}

loc_8009D00C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009D014;
    }
}

loc_8009D010:
{
    r4 = 0;
}

loc_8009D014:
{
}

loc_8009D018:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8009D03C;
    }
}

loc_8009D01C:
{
    r3 = 0x80590000u;
    r3 = (r3 + 9768);
    r4 = 136;
    r5 = 0x80590000u;
    r5 = (r5 + 9844);
    r6 = r29;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8009D03Cu;
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

loc_8009D03C:
{
    r4 = 1;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = (r30 & -16777216);
    r0 = (r10 + -2147483648);
}

loc_8009D060:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009D078;
    }
}

loc_8009D064:
{
    r3 = (r30 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_8009D070:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009D078;
    }
}

loc_8009D074:
{
    r9 = 0;
}

loc_8009D078:
{
}

loc_8009D07C:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8009D094;
    }
}

loc_8009D080:
{
    r3 = (r30 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_8009D08C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009D094;
    }
}

loc_8009D090:
{
    r8 = 0;
}

loc_8009D094:
{
}

loc_8009D098:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8009D0AC;
    }
}

loc_8009D09C:
{
    r0 = (r10 + 1073741824);
}

loc_8009D0A4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009D0AC;
    }
}

loc_8009D0A8:
{
    r7 = 0;
}

loc_8009D0AC:
{
}

loc_8009D0B0:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8009D0C8;
    }
}

loc_8009D0B4:
{
    r3 = (r30 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_8009D0C0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009D0C8;
    }
}

loc_8009D0C4:
{
    r6 = 0;
}

loc_8009D0C8:
{
}

loc_8009D0CC:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8009D0E4;
    }
}

loc_8009D0D0:
{
    r3 = (r30 & -134217728);
    r0 = (r3 + 805306368);
}

loc_8009D0DC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009D0E4;
    }
}

loc_8009D0E0:
{
    r5 = 0;
}

loc_8009D0E4:
{
}

loc_8009D0E8:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8009D100;
    }
}

loc_8009D0EC:
{
    r3 = (r30 & -16384);
    r0 = (r3 + 536870912);
}

loc_8009D0F8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009D100;
    }
}

loc_8009D0FC:
{
    r4 = 0;
}

loc_8009D100:
{
}

loc_8009D104:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8009D128;
    }
}

loc_8009D108:
{
    r3 = 0x80590000u;
    r3 = (r3 + 9768);
    r4 = 137;
    r5 = 0x80590000u;
    r5 = (r5 + 9896);
    r6 = r30;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8009D128u;
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

loc_8009D128:
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

loc_8009D14C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009D164;
    }
}

loc_8009D150:
{
    r3 = (r31 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_8009D15C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009D164;
    }
}

loc_8009D160:
{
    r9 = 0;
}

loc_8009D164:
{
}

loc_8009D168:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8009D180;
    }
}

loc_8009D16C:
{
    r3 = (r31 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_8009D178:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009D180;
    }
}

loc_8009D17C:
{
    r8 = 0;
}

loc_8009D180:
{
}

loc_8009D184:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8009D198;
    }
}

loc_8009D188:
{
    r0 = (r10 + 1073741824);
}

loc_8009D190:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009D198;
    }
}

loc_8009D194:
{
    r7 = 0;
}

loc_8009D198:
{
}

loc_8009D19C:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8009D1B4;
    }
}

loc_8009D1A0:
{
    r3 = (r31 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_8009D1AC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009D1B4;
    }
}

loc_8009D1B0:
{
    r6 = 0;
}

loc_8009D1B4:
{
}

loc_8009D1B8:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8009D1D0;
    }
}

loc_8009D1BC:
{
    r3 = (r31 & -134217728);
    r0 = (r3 + 805306368);
}

loc_8009D1C8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009D1D0;
    }
}

loc_8009D1CC:
{
    r5 = 0;
}

loc_8009D1D0:
{
}

loc_8009D1D4:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8009D1EC;
    }
}

loc_8009D1D8:
{
    r3 = (r31 & -16384);
    r0 = (r3 + 536870912);
}

loc_8009D1E4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009D1EC;
    }
}

loc_8009D1E8:
{
    r4 = 0;
}

loc_8009D1EC:
{
}

loc_8009D1F0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8009D214;
    }
}

loc_8009D1F4:
{
    r3 = 0x80590000u;
    r3 = (r3 + 9768);
    r4 = 138;
    r5 = 0x80590000u;
    r5 = (r5 + 9952);
    r6 = r31;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8009D214u;
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

loc_8009D214:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r31, r0);
    guest_range_0 = MemoryInline::ResolveRangeHost((r27 + 4), 0, 6u, true, false);
    r5 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r27 + 8));
}

loc_8009D224:
{
    if ((static_cast<uint32_t>(r5) > static_cast<uint32_t>(1))) {
        goto loc_8009D23C;
    }
}

loc_8009D228:
{
    MemoryInline::FlatWrite16(r29, static_cast<uint16_t>(r0));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31464));
    MemoryInline::FlatWriteFloat32(r30, f0.d);
    MemoryInline::FlatWrite32(r31, r28);
    goto loc_8009D600;
}

loc_8009D23C:
{
    r4 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r27 + 4));
    r0 = (r4 & 32);
}

loc_8009D248:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8009D354;
    }
}

loc_8009D24C:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r27 + 5));
}

loc_8009D254:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_8009D354;
    }
}

loc_8009D258:
{
    r0 = (r4 & 128);
}

loc_8009D260:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8009D2A0;
    }
}

loc_8009D264:
{
    r0 = (r5 + -1);
}

loc_8009D26C:
{
    if ((static_cast<uint32_t>(r28) < static_cast<uint32_t>(r0))) {
        goto loc_8009D27C;
    }
}

loc_8009D270:
{
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16(r29, static_cast<uint16_t>(r0));
    goto loc_8009D284;
}

loc_8009D27C:
{
    r0 = (r28 & 65535);
    MemoryInline::FlatWrite16(r29, static_cast<uint16_t>(r0));
}

loc_8009D284:
{
    r0 = MemoryInline::FlatRead16(r29);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -31456));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteFloat32(r30, f0.d);
    goto loc_8009D600;
}

loc_8009D2A0:
{
}

loc_8009D2A4:
{
    if ((static_cast<uint32_t>(r26) != static_cast<uint32_t>(1))) {
        goto loc_8009D2C8;
    }
}

loc_8009D2A8:
{
    r0 = (r5 + -1);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -31448));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteFloat32(r30, f0.d);
    goto loc_8009D33C;
}

loc_8009D2C8:
{
    f4.d = MemoryInline::FlatReadFloat64((r2 + -31456));
    MemoryInline::FlatWriteRam32((r1 + 12), r28);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    r0 = (r5 + -1);
    f2.d = MemoryInline::FlatReadFloat64((r2 + -31448));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    r0 = (r26 + -1);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f1.d = PpcFmulsInline(f3.d, f0.d);
    MemoryInline::FlatWriteFloat32(r30, f1.d);
    r3 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r27 + 8));
    r0 = (r3 + -1);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8009D328:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8009D33C;
    }
}

loc_8009D32C:
{
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    MemoryInline::FlatWriteFloat32(r30, f0.d);
}

loc_8009D33C:
{
    f0.d = MemoryInline::FlatReadFloat32(r30);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword0;
    MemoryInline::FlatWrite16(r29, static_cast<uint16_t>(r0));
    goto loc_8009D600;
}

loc_8009D354:
{
    r0 = (r4 & 128);
}

loc_8009D35C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8009D494;
    }
}

loc_8009D360:
{
    r0 = (r5 + -1);
    r4 = PPC_Divwu(static_cast<uint32_t>(r28), static_cast<uint32_t>(r0));
    MemoryInline::FlatWrite32(r31, r4);
    r3 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r27 + 4));
    r0 = (r3 & 64);
}

loc_8009D378:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8009D3D4;
    }
}

loc_8009D37C:
{
    r0 = (r3 & 32);
}

loc_8009D384:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8009D3B8;
    }
}

loc_8009D388:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r27 + 5));
}

loc_8009D390:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r0))) {
        goto loc_8009D3B8;
    }
}

loc_8009D394:
{
    r3 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r27 + 8));
    r0 = (r3 + -1);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16(r29, static_cast<uint16_t>(r0));
    r3 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r27 + 5));
    r0 = (r3 + -1);
    r0 = (r0 & 255);
    MemoryInline::FlatWrite32(r31, r0);
    goto loc_8009D478;
}

loc_8009D3B8:
{
    r3 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r27 + 8));
    r0 = (r3 + -1);
    r0 = (r4 * r0);
    r0 = (r28 - r0);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16(r29, static_cast<uint16_t>(r0));
    goto loc_8009D478;
}

loc_8009D3D4:
{
    r0 = (r3 & 32);
}

loc_8009D3DC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8009D434;
    }
}

loc_8009D3E0:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r27 + 5));
}

loc_8009D3E8:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r0))) {
        goto loc_8009D434;
    }
}

loc_8009D3EC:
{
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    r0 = (r0 & 1);
    r0 = (r0 ^ r3);
    r0 = (r0 - r3);
}

loc_8009D400:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8009D410;
    }
}

loc_8009D404:
{
    r0 = 0;
    MemoryInline::FlatWrite16(r29, static_cast<uint16_t>(r0));
    goto loc_8009D420;
}

loc_8009D410:
{
    r3 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r27 + 8));
    r0 = (r3 + -1);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16(r29, static_cast<uint16_t>(r0));
}

loc_8009D420:
{
    r3 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r27 + 5));
    r0 = (r3 + -1);
    r0 = (r0 & 255);
    MemoryInline::FlatWrite32(r31, r0);
    goto loc_8009D478;
}

loc_8009D434:
{
    r0 = (r4 & 1);
}

loc_8009D43C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8009D45C;
    }
}

loc_8009D440:
{
    r3 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r27 + 8));
    r0 = (r3 + -1);
    r0 = (r4 * r0);
    r0 = (r28 - r0);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16(r29, static_cast<uint16_t>(r0));
    goto loc_8009D478;
}

loc_8009D45C:
{
    r3 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r27 + 8));
    r3 = (r3 + -1);
    r0 = (r4 + 1);
    r0 = (r3 * r0);
    r0 = (r0 - r28);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16(r29, static_cast<uint16_t>(r0));
}

loc_8009D478:
{
    r0 = MemoryInline::FlatRead16(r29);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -31456));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteFloat32(r30, f0.d);
    goto loc_8009D600;
}

loc_8009D494:
{
    r3 = (r26 + -1);
}

loc_8009D49C:
{
    if ((static_cast<uint32_t>(r28) < static_cast<uint32_t>(r3))) {
        goto loc_8009D50C;
    }
}

loc_8009D4A0:
{
    r0 = (r4 & 64);
}

loc_8009D4A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8009D4C8;
    }
}

loc_8009D4AC:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r27 + 5));
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & 1);
    r0 = (r0 & 1);
    r0 = (r0 ^ r3);
    r0 = (r0 - r3);
}

loc_8009D4C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8009D4D8;
    }
}

loc_8009D4C8:
{
    r0 = (r5 + -1);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16(r29, static_cast<uint16_t>(r0));
    goto loc_8009D4E0;
}

loc_8009D4D8:
{
    r0 = 0;
    MemoryInline::FlatWrite16(r29, static_cast<uint16_t>(r0));
}

loc_8009D4E0:
{
    r0 = MemoryInline::FlatRead16(r29);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -31456));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteFloat32(r30, f0.d);
    r3 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r27 + 5));
    r0 = (r3 + -1);
    r0 = (r0 & 255);
    MemoryInline::FlatWrite32(r31, r0);
    goto loc_8009D600;
}

loc_8009D50C:
{
    r4 = (r5 + -1);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r27 + 5));
    f4.d = MemoryInline::FlatReadFloat64((r2 + -31456));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    f2.d = MemoryInline::FlatReadFloat64((r2 + -31448));
    r0 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f31.d = PpcFmulsInline(f3.d, f0.d);
    MemoryInline::FlatWriteRam32((r1 + 12), r28);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    f1.d = PpcFmulsInline(f0.d, f31.d);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    if constexpr (KnownRegArgsCpuCall<0x80457360u>(&func_80457360)) {
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80457360_69F6 = func_80457360_ra8_1e_8_0(ctx, r3, f1.d, f2.d, f3.d, f4.d);
        r3 = regargs_result_80457360_69F6;
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80457360u>(ctx);
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    }
    MemoryInline::FlatWrite32(r31, r3);
    r4 = MemoryInline::FlatRead16((r27 + 8));
    r4 = (r4 + -1);
    f2.d = MemoryInline::FlatReadFloat64((r2 + -31456));
    MemoryInline::FlatWriteRam32((r1 + 12), r28);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f1.d = PpcFmulsInline(f0.d, f31.d);
    r0 = (r3 * r4);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    r0 = MemoryInline::FlatRead8((r27 + 4));
    r0 = (r0 & 64);
}

loc_8009D5B0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8009D5BC;
    }
}

loc_8009D5B4:
{
    MemoryInline::FlatWriteFloat32(r30, f2.d);
    goto loc_8009D5EC;
}

loc_8009D5BC:
{
    r0 = (r3 & 1);
}

loc_8009D5C4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8009D5D0;
    }
}

loc_8009D5C8:
{
    MemoryInline::FlatWriteFloat32(r30, f2.d);
    goto loc_8009D5EC;
}

loc_8009D5D0:
{
    f1.d = MemoryInline::FlatReadFloat64((r2 + -31448));
    r0 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    MemoryInline::FlatWriteFloat32(r30, f0.d);
}

loc_8009D5EC:
{
    f0.d = MemoryInline::FlatReadFloat32(r30);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword1;
    MemoryInline::FlatWrite16(r29, static_cast<uint16_t>(r0));
}

loc_8009D600:
{
    r0 = 72;
    addr_psqx_8009D604_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8009D604_loc_0));
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 40), 0, 48u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 24u, (r1 + 64));
    r11 = (r1 + 64);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::ReadResolved32(guest_range_2, 44u, (r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000FFF gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x8000001F fpr_write=0x8000001F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8009CE20 func_8009CE20 preserves=true fpr_mask=0x00000000
