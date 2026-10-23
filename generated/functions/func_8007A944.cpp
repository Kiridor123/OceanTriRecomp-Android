#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_8007A944(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

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
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;

    goto loc_8007A944;

loc_8007A944:
{
    MemoryInline::FlatWriteRam32((r1 + -320), r1);
    r1 = (r1 + -320);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 324), r0);
    r28 = r3;
    r29 = r4;
    r30 = r5;
    r31 = r7;
    r9 = (r6 & 65535);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r9));
    r6 = (r8 & 65535);
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r6));
    MemoryInline::FlatWrite32((r3 + 4), r4);
    MemoryInline::FlatWrite32((r3 + 8), r5);
    MemoryInline::FlatWrite32((r3 + 12), r7);
    r0 = 0;
}

loc_8007A994:
{
    if ((static_cast<uint32_t>(r9) > static_cast<uint32_t>(128))) {
        goto loc_8007A9A4;
    }
}

loc_8007A998:
{
}

loc_8007A99C:
{
    if ((static_cast<uint32_t>(r6) > static_cast<uint32_t>(128))) {
        goto loc_8007A9A4;
    }
}

loc_8007A9A0:
{
    r0 = 1;
}

loc_8007A9A4:
{
}

loc_8007A9A8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8007A9C8;
    }
}

loc_8007A9AC:
{
    r3 = 0x80590000u;
    r3 = (r3 + -3264);
    r4 = 308;
    r5 = 0x80590000u;
    r5 = (r5 + -3248);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8007A9C8u;
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
}

loc_8007A9C8:
{
    r3 = 0;
    r0 = MemoryInline::FlatRead16(r28);
}

loc_8007A9D4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8007A9E8;
    }
}

loc_8007A9D8:
{
    r0 = MemoryInline::FlatRead16((r28 + 2));
}

loc_8007A9E0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8007A9E8;
    }
}

loc_8007A9E4:
{
    r3 = 1;
}

loc_8007A9E8:
{
}

loc_8007A9EC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8007AA0C;
    }
}

loc_8007A9F0:
{
    r3 = 0x80590000u;
    r3 = (r3 + -3264);
    r4 = 309;
    r5 = 0x80590000u;
    r5 = (r5 + -3144);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8007AA0Cu;
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
}

loc_8007AA0C:
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

loc_8007AA30:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8007AA48;
    }
}

loc_8007AA34:
{
    r3 = (r29 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_8007AA40:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8007AA48;
    }
}

loc_8007AA44:
{
    r9 = 0;
}

loc_8007AA48:
{
}

loc_8007AA4C:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8007AA64;
    }
}

loc_8007AA50:
{
    r3 = (r29 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_8007AA5C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8007AA64;
    }
}

loc_8007AA60:
{
    r8 = 0;
}

loc_8007AA64:
{
}

loc_8007AA68:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8007AA7C;
    }
}

loc_8007AA6C:
{
    r0 = (r10 + 1073741824);
}

loc_8007AA74:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8007AA7C;
    }
}

loc_8007AA78:
{
    r7 = 0;
}

loc_8007AA7C:
{
}

loc_8007AA80:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8007AA98;
    }
}

loc_8007AA84:
{
    r3 = (r29 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_8007AA90:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8007AA98;
    }
}

loc_8007AA94:
{
    r6 = 0;
}

loc_8007AA98:
{
}

loc_8007AA9C:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8007AAB4;
    }
}

loc_8007AAA0:
{
    r3 = (r29 & -134217728);
    r0 = (r3 + 805306368);
}

loc_8007AAAC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8007AAB4;
    }
}

loc_8007AAB0:
{
    r5 = 0;
}

loc_8007AAB4:
{
}

loc_8007AAB8:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8007AAD0;
    }
}

loc_8007AABC:
{
    r3 = (r29 & -16384);
    r0 = (r3 + 536870912);
}

loc_8007AAC8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8007AAD0;
    }
}

loc_8007AACC:
{
    r4 = 0;
}

loc_8007AAD0:
{
}

loc_8007AAD4:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8007AAF8;
    }
}

loc_8007AAD8:
{
    r3 = 0x80590000u;
    r3 = (r3 + -3264);
    r4 = 311;
    r5 = 0x80590000u;
    r5 = (r5 + -3088);
    r6 = r29;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8007AAF8u;
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
}

loc_8007AAF8:
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

loc_8007AB1C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8007AB34;
    }
}

loc_8007AB20:
{
    r3 = (r30 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_8007AB2C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8007AB34;
    }
}

loc_8007AB30:
{
    r9 = 0;
}

loc_8007AB34:
{
}

loc_8007AB38:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8007AB50;
    }
}

loc_8007AB3C:
{
    r3 = (r30 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_8007AB48:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8007AB50;
    }
}

loc_8007AB4C:
{
    r8 = 0;
}

loc_8007AB50:
{
}

loc_8007AB54:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8007AB68;
    }
}

loc_8007AB58:
{
    r0 = (r10 + 1073741824);
}

loc_8007AB60:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8007AB68;
    }
}

loc_8007AB64:
{
    r7 = 0;
}

loc_8007AB68:
{
}

loc_8007AB6C:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8007AB84;
    }
}

loc_8007AB70:
{
    r3 = (r30 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_8007AB7C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8007AB84;
    }
}

loc_8007AB80:
{
    r6 = 0;
}

loc_8007AB84:
{
}

loc_8007AB88:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8007ABA0;
    }
}

loc_8007AB8C:
{
    r3 = (r30 & -134217728);
    r0 = (r3 + 805306368);
}

loc_8007AB98:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8007ABA0;
    }
}

loc_8007AB9C:
{
    r5 = 0;
}

loc_8007ABA0:
{
}

loc_8007ABA4:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8007ABBC;
    }
}

loc_8007ABA8:
{
    r3 = (r30 & -16384);
    r0 = (r3 + 536870912);
}

loc_8007ABB4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8007ABBC;
    }
}

loc_8007ABB8:
{
    r4 = 0;
}

loc_8007ABBC:
{
}

loc_8007ABC0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8007ABE4;
    }
}

loc_8007ABC4:
{
    r3 = 0x80590000u;
    r3 = (r3 + -3264);
    r4 = 312;
    r5 = 0x80590000u;
    r5 = (r5 + -3024);
    r6 = r30;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8007ABE4u;
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
}

loc_8007ABE4:
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

loc_8007AC08:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8007AC20;
    }
}

loc_8007AC0C:
{
    r3 = (r31 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_8007AC18:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8007AC20;
    }
}

loc_8007AC1C:
{
    r9 = 0;
}

loc_8007AC20:
{
}

loc_8007AC24:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8007AC3C;
    }
}

loc_8007AC28:
{
    r3 = (r31 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_8007AC34:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8007AC3C;
    }
}

loc_8007AC38:
{
    r8 = 0;
}

loc_8007AC3C:
{
}

loc_8007AC40:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8007AC54;
    }
}

loc_8007AC44:
{
    r0 = (r10 + 1073741824);
}

loc_8007AC4C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8007AC54;
    }
}

loc_8007AC50:
{
    r7 = 0;
}

loc_8007AC54:
{
}

loc_8007AC58:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8007AC70;
    }
}

loc_8007AC5C:
{
    r3 = (r31 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_8007AC68:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8007AC70;
    }
}

loc_8007AC6C:
{
    r6 = 0;
}

loc_8007AC70:
{
}

loc_8007AC74:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8007AC8C;
    }
}

loc_8007AC78:
{
    r3 = (r31 & -134217728);
    r0 = (r3 + 805306368);
}

loc_8007AC84:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8007AC8C;
    }
}

loc_8007AC88:
{
    r5 = 0;
}

loc_8007AC8C:
{
}

loc_8007AC90:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8007ACA8;
    }
}

loc_8007AC94:
{
    r3 = (r31 & -16384);
    r0 = (r3 + 536870912);
}

loc_8007ACA0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8007ACA8;
    }
}

loc_8007ACA4:
{
    r4 = 0;
}

loc_8007ACA8:
{
}

loc_8007ACAC:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8007ACD0;
    }
}

loc_8007ACB0:
{
    r3 = 0x80590000u;
    r3 = (r3 + -3264);
    r4 = 313;
    r5 = 0x80590000u;
    r5 = (r5 + -2960);
    r6 = r31;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8007ACD0u;
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
}

loc_8007ACD0:
{
    r5 = 0;
    r4 = 0;
    r3 = -1;
    goto loc_8007AD14;
}

loc_8007ACE0:
{
    r0 = MemoryInline::FlatRead32((r28 + 12));
    r6 = (r0 + r4);
    guest_range_0 = MemoryInline::ResolveRangeHost(r6, 0, 9u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 8u, (r6 + 8), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 0u, r6, static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r6 + 1), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r6 + 2), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r6 + 3), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r6 + 4), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r6 + 5), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r6 + 6), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r6 + 7), static_cast<uint8_t>(r3));
    r4 = (r4 + 12);
    r5 = (r5 + 1);
}

loc_8007AD14:
{
    r0 = MemoryInline::FlatRead16((r28 + 2));
}

loc_8007AD1C:
{
    if ((static_cast<uint32_t>(r5) < static_cast<uint32_t>(r0))) {
        goto loc_8007ACE0;
    }
}

loc_8007AD20:
{
    r0 = 0;
    r3 = MemoryInline::FlatRead32((r28 + 12));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r0 = 2;
    r3 = MemoryInline::FlatRead32((r28 + 12));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = -1;
    r3 = MemoryInline::FlatRead32((r28 + 12));
    MemoryInline::FlatWrite8((r3 + 8), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r2 + -31840));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = (r1 + 228);
    // inline leaf 0x8007AF80 (3 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWriteRam32(r3, r0);
    // end of inlined leaf 0x8007AF80
    r3 = (r1 + 160);
    // inline leaf 0x8007AF80 (3 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWriteRam32(r3, r0);
    // end of inlined leaf 0x8007AF80
    r3 = (r1 + 92);
    // inline leaf 0x8007AF80 (3 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWriteRam32(r3, r0);
    // end of inlined leaf 0x8007AF80
    r3 = (r1 + 24);
    // inline leaf 0x8007AF80 (3 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWriteRam32(r3, r0);
    // end of inlined leaf 0x8007AF80
    r3 = (r1 + 228);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8007A5C8u>(ctx);
    r3 = (r1 + 160);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8007A5C8u>(ctx);
    r3 = (r1 + 92);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8007A5C8u>(ctx);
    r3 = (r1 + 24);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8007A5C8u>(ctx);
    r29 = MemoryInline::FlatRead32((r2 + -31844));
    MemoryInline::FlatWriteRam32((r1 + 16), r29);
    r3 = (r1 + 228);
    r4 = (r1 + 16);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8007A5DCu>(ctx);
    r3 = (r1 + 228);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -31836));
    f2.d = f1.d;
    f3.d = f1.d;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    InvokeDirectCpu<0x8007A60Cu>(ctx);
    r3 = (r1 + 228);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -31856));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -31832));
    f3.d = f1.d;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    InvokeDirectCpu<0x8007A648u>(ctx);
    r3 = (r1 + 228);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -31828));
    r4 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x8007A688u>(ctx);
    r3 = (r1 + 228);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -31824));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -31848));
    r4 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x8007A708u>(ctx);
    r3 = (r1 + 228);
    // inline leaf 0x80064C38 (4 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r3);
    r0 = (r0 | 4);
    MemoryInline::FlatWriteRam32(r3, r0);
    // end of inlined leaf 0x80064C38
    MemoryInline::FlatWriteRam32((r1 + 12), r29);
    r3 = (r1 + 160);
    r4 = (r1 + 12);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8007A5DCu>(ctx);
    r3 = (r1 + 160);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -31836));
    f2.d = f1.d;
    f3.d = f1.d;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    InvokeDirectCpu<0x8007A60Cu>(ctx);
    r3 = (r1 + 160);
    // inline leaf 0x80064C38 (4 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r3);
    r0 = (r0 | 4);
    MemoryInline::FlatWriteRam32(r3, r0);
    // end of inlined leaf 0x80064C38
    MemoryInline::FlatWriteRam32((r1 + 8), r29);
    r3 = (r1 + 92);
    r4 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8007A5DCu>(ctx);
    r3 = (r1 + 92);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -31836));
    f2.d = f1.d;
    f3.d = f1.d;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    InvokeDirectCpu<0x8007A60Cu>(ctx);
    r3 = (r1 + 92);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -31856));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -31832));
    f3.d = f1.d;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    InvokeDirectCpu<0x8007A788u>(ctx);
    r3 = (r1 + 92);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -31820));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x8007A7CCu>(ctx);
    r3 = (r1 + 92);
    // inline leaf 0x80064C38 (4 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r3);
    r0 = (r0 | 4);
    MemoryInline::FlatWriteRam32(r3, r0);
    // end of inlined leaf 0x80064C38
    r3 = (r1 + 24);
    // inline leaf 0x80065208 (4 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r3);
    r0 = (r0 & -5);
    MemoryInline::FlatWriteRam32(r3, r0);
    // end of inlined leaf 0x80065208
    r0 = MemoryInline::FlatRead16(r28);
}

loc_8007AE7C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8007AE98;
    }
}

loc_8007AE80:
{
    r3 = MemoryInline::FlatRead32((r28 + 4));
    r4 = (r1 + 228);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8007A57Cu>(ctx);
    r3 = MemoryInline::FlatRead32((r28 + 8));
    r4 = (r1 + 20);
    // inline leaf 0x8007AF5C (9 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 2));
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8007AF5C
}

loc_8007AE98:
{
    r0 = MemoryInline::FlatRead16(r28);
}

loc_8007AEA0:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_8007AEC4;
    }
}

loc_8007AEA4:
{
    r3 = MemoryInline::FlatRead32((r28 + 4));
    r3 = (r3 + 68);
    r4 = (r1 + 160);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8007A57Cu>(ctx);
    r3 = MemoryInline::FlatRead32((r28 + 8));
    r3 = (r3 + 4);
    r4 = (r1 + 20);
    // inline leaf 0x8007AF5C (9 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 2));
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8007AF5C
}

loc_8007AEC4:
{
    r0 = MemoryInline::FlatRead16(r28);
}

loc_8007AECC:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_8007AEF0;
    }
}

loc_8007AED0:
{
    r3 = MemoryInline::FlatRead32((r28 + 4));
    r3 = (r3 + 136);
    r4 = (r1 + 92);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8007A57Cu>(ctx);
    r3 = MemoryInline::FlatRead32((r28 + 8));
    r3 = (r3 + 8);
    r4 = (r1 + 20);
    // inline leaf 0x8007AF5C (9 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 2));
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8007AF5C
}

loc_8007AEF0:
{
    r31 = 3;
    r29 = 204;
    r30 = 12;
    goto loc_8007AF2C;
}

loc_8007AF00:
{
    r0 = MemoryInline::FlatRead32((r28 + 4));
    r3 = (r0 + r29);
    r4 = (r1 + 24);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8007A57Cu>(ctx);
    r0 = MemoryInline::FlatRead32((r28 + 8));
    r3 = (r0 + r30);
    r4 = (r1 + 20);
    // inline leaf 0x8007AF5C (9 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 2));
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8007AF5C
    r29 = (r29 + 68);
    r30 = (r30 + 4);
    r31 = (r31 + 1);
}

loc_8007AF2C:
{
    r0 = MemoryInline::FlatRead16(r28);
}

loc_8007AF34:
{
    if ((static_cast<uint32_t>(r31) < static_cast<uint32_t>(r0))) {
        goto loc_8007AF00;
    }
}

loc_8007AF38:
{
    r3 = r28;
    r0 = MemoryInline::FlatRead32((r1 + 324));
    ctx->lr = r0;
    r1 = (r1 + 320);
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
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000007FF gpr_write=0x000007FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x0000000E fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8007A944 func_8007A944 preserves=true fpr_mask=0x00000000
