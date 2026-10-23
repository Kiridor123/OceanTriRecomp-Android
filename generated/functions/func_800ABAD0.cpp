#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800A9724(CpuContext* ctx);
extern "C" uint32_t func_800A9724_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_800AC148(CpuContext* ctx);
extern "C" uint64_t func_800AC148_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_800ABAD0_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

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
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;

    goto loc_800ABAD0;

loc_800ABAD0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r30 = r4;
    r31 = r5;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r11 = (r4 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_800ABB18:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800ABB30;
    }
}

loc_800ABB1C:
{
    r3 = (r4 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800ABB28:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800ABB30;
    }
}

loc_800ABB2C:
{
    r10 = 0;
}

loc_800ABB30:
{
}

loc_800ABB34:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_800ABB4C;
    }
}

loc_800ABB38:
{
    r3 = (r4 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800ABB44:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800ABB4C;
    }
}

loc_800ABB48:
{
    r9 = 0;
}

loc_800ABB4C:
{
}

loc_800ABB50:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800ABB64;
    }
}

loc_800ABB54:
{
    r0 = (r11 + 1073741824);
}

loc_800ABB5C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800ABB64;
    }
}

loc_800ABB60:
{
    r8 = 0;
}

loc_800ABB64:
{
}

loc_800ABB68:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800ABB80;
    }
}

loc_800ABB6C:
{
    r3 = (r4 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800ABB78:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800ABB80;
    }
}

loc_800ABB7C:
{
    r7 = 0;
}

loc_800ABB80:
{
}

loc_800ABB84:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800ABB9C;
    }
}

loc_800ABB88:
{
    r3 = (r4 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800ABB94:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800ABB9C;
    }
}

loc_800ABB98:
{
    r6 = 0;
}

loc_800ABB9C:
{
}

loc_800ABBA0:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800ABBB8;
    }
}

loc_800ABBA4:
{
    r3 = (r4 & -16384);
    r0 = (r3 + 536870912);
}

loc_800ABBB0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800ABBB8;
    }
}

loc_800ABBB4:
{
    r5 = 0;
}

loc_800ABBB8:
{
}

loc_800ABBBC:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800ABBE0;
    }
}

loc_800ABBC0:
{
    r3 = 0x80590000u;
    r3 = (r3 + 14136);
    r4 = 109;
    r5 = 0x80590000u;
    r5 = (r5 + 14272);
    r6 = r30;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800ABBE0u;
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

loc_800ABBE0:
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

loc_800ABC04:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800ABC1C;
    }
}

loc_800ABC08:
{
    r3 = (r31 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800ABC14:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800ABC1C;
    }
}

loc_800ABC18:
{
    r9 = 0;
}

loc_800ABC1C:
{
}

loc_800ABC20:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800ABC38;
    }
}

loc_800ABC24:
{
    r3 = (r31 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800ABC30:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800ABC38;
    }
}

loc_800ABC34:
{
    r8 = 0;
}

loc_800ABC38:
{
}

loc_800ABC3C:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800ABC50;
    }
}

loc_800ABC40:
{
    r0 = (r10 + 1073741824);
}

loc_800ABC48:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800ABC50;
    }
}

loc_800ABC4C:
{
    r7 = 0;
}

loc_800ABC50:
{
}

loc_800ABC54:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800ABC6C;
    }
}

loc_800ABC58:
{
    r3 = (r31 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800ABC64:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800ABC6C;
    }
}

loc_800ABC68:
{
    r6 = 0;
}

loc_800ABC6C:
{
}

loc_800ABC70:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800ABC88;
    }
}

loc_800ABC74:
{
    r3 = (r31 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800ABC80:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800ABC88;
    }
}

loc_800ABC84:
{
    r5 = 0;
}

loc_800ABC88:
{
}

loc_800ABC8C:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800ABCA4;
    }
}

loc_800ABC90:
{
    r3 = (r31 & -16384);
    r0 = (r3 + 536870912);
}

loc_800ABC9C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800ABCA4;
    }
}

loc_800ABCA0:
{
    r4 = 0;
}

loc_800ABCA4:
{
}

loc_800ABCA8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800ABCCC;
    }
}

loc_800ABCAC:
{
    r3 = 0x80590000u;
    r3 = (r3 + 14136);
    r4 = 110;
    r5 = 0x80590000u;
    r5 = (r5 + 14328);
    r6 = r31;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800ABCCCu;
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

loc_800ABCCC:
{
    r3 = r29;
    // inline leaf 0x800A44B0 (6 guest instruction(s))
    r0 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 12), 0, 96u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 16), r0);
    r0 = 1;
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r3 + 12), r0);
    r3 = 1;
    // end of inlined leaf 0x800A44B0
    r3 = (r29 + 56);
    // inline leaf 0x800A448C (9 guest instruction(s))
    r0 = 0;
    MemoryInline::WriteResolved32(guest_range_0, 44u, r3, r0);
    MemoryInline::WriteResolved16(guest_range_0, 52u, (r3 + 8), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 48u, (r3 + 4), r0);
    MemoryInline::WriteResolved32(guest_range_0, 56u, (r3 + 12), r0);
    MemoryInline::WriteResolved16(guest_range_0, 64u, (r3 + 20), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 60u, (r3 + 16), r0);
    MemoryInline::WriteResolved16(guest_range_0, 68u, (r3 + 24), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x800A448C
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31224));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 76u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 76u, (r29 + 88), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 80u, (r29 + 92), f0.d);
    }
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31220));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 84u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 84u, (r29 + 96), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 88u, (r29 + 100), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 92u, (r29 + 104), f0.d);
    MemoryInline::WriteResolved32(guest_range_0, 20u, (r29 + 32), r30);
    r3 = r30;
    // inline leaf 0x800A33E0 (5 guest instruction(s))
    r4 = MemoryInline::FlatRead32((r3 + 16));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r3 + 16), r0);
    r3 = r0;
    // end of inlined leaf 0x800A33E0
    MemoryInline::WriteResolved32(guest_range_0, 24u, (r29 + 36), r31);
    r0 = 0;
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r29 + 40), r0);
    r3 = r29;
    ctx->lr = 0x800ABD18u;
    if constexpr (KnownRegArgsCpuCall<0x800A9724u>(&func_800A9724)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_800A9724_2B0A = func_800A9724_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800A9724_2B0A;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->cr = cr;
        InvokeDirectCpu<0x800A9724u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    }
    r3 = MemoryInline::FlatRead32((r29 + 36));
    // inline leaf 0x800A48C8 (2 guest instruction(s))
    r3 = (r3 + 8);
    // end of inlined leaf 0x800A48C8
    r31 = r3;
    r4 = 1;
    r5 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r6 = MemoryInline::FlatRead32((r29 + 32));
    r11 = (r6 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_800ABD4C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800ABD64;
    }
}

loc_800ABD50:
{
    r3 = (r6 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800ABD5C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800ABD64;
    }
}

loc_800ABD60:
{
    r10 = 0;
}

loc_800ABD64:
{
}

loc_800ABD68:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_800ABD80;
    }
}

loc_800ABD6C:
{
    r3 = (r6 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800ABD78:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800ABD80;
    }
}

loc_800ABD7C:
{
    r9 = 0;
}

loc_800ABD80:
{
}

loc_800ABD84:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800ABD98;
    }
}

loc_800ABD88:
{
    r0 = (r11 + 1073741824);
}

loc_800ABD90:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800ABD98;
    }
}

loc_800ABD94:
{
    r8 = 0;
}

loc_800ABD98:
{
}

loc_800ABD9C:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800ABDB4;
    }
}

loc_800ABDA0:
{
    r3 = (r6 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800ABDAC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800ABDB4;
    }
}

loc_800ABDB0:
{
    r7 = 0;
}

loc_800ABDB4:
{
}

loc_800ABDB8:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800ABDD0;
    }
}

loc_800ABDBC:
{
    r3 = (r6 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800ABDC8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800ABDD0;
    }
}

loc_800ABDCC:
{
    r5 = 0;
}

loc_800ABDD0:
{
}

loc_800ABDD4:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800ABDEC;
    }
}

loc_800ABDD8:
{
    r3 = (r6 & -16384);
    r0 = (r3 + 536870912);
}

loc_800ABDE4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800ABDEC;
    }
}

loc_800ABDE8:
{
    r4 = 0;
}

loc_800ABDEC:
{
}

loc_800ABDF0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800ABE10;
    }
}

loc_800ABDF4:
{
    r3 = 0x80590000u;
    r3 = (r3 + 14136);
    r4 = 132;
    r5 = 0x80590000u;
    r5 = (r5 + 14384);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800ABE10u;
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

loc_800ABE10:
{
    r4 = 1;
    r5 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r3 = MemoryInline::FlatRead32((r29 + 32));
    r6 = MemoryInline::FlatRead32((r3 + 188));
    r11 = (r6 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_800ABE3C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800ABE54;
    }
}

loc_800ABE40:
{
    r3 = (r6 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800ABE4C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800ABE54;
    }
}

loc_800ABE50:
{
    r10 = 0;
}

loc_800ABE54:
{
}

loc_800ABE58:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_800ABE70;
    }
}

loc_800ABE5C:
{
    r3 = (r6 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800ABE68:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800ABE70;
    }
}

loc_800ABE6C:
{
    r9 = 0;
}

loc_800ABE70:
{
}

loc_800ABE74:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800ABE88;
    }
}

loc_800ABE78:
{
    r0 = (r11 + 1073741824);
}

loc_800ABE80:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800ABE88;
    }
}

loc_800ABE84:
{
    r8 = 0;
}

loc_800ABE88:
{
}

loc_800ABE8C:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800ABEA4;
    }
}

loc_800ABE90:
{
    r3 = (r6 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800ABE9C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800ABEA4;
    }
}

loc_800ABEA0:
{
    r7 = 0;
}

loc_800ABEA4:
{
}

loc_800ABEA8:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800ABEC0;
    }
}

loc_800ABEAC:
{
    r3 = (r6 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800ABEB8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800ABEC0;
    }
}

loc_800ABEBC:
{
    r5 = 0;
}

loc_800ABEC0:
{
}

loc_800ABEC4:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800ABEDC;
    }
}

loc_800ABEC8:
{
    r3 = (r6 & -16384);
    r0 = (r3 + 536870912);
}

loc_800ABED4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800ABEDC;
    }
}

loc_800ABED8:
{
    r4 = 0;
}

loc_800ABEDC:
{
}

loc_800ABEE0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800ABF00;
    }
}

loc_800ABEE4:
{
    r3 = 0x80590000u;
    r3 = (r3 + 14136);
    r4 = 133;
    r5 = 0x80590000u;
    r5 = (r5 + 14444);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800ABF00u;
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

loc_800ABF00:
{
    r4 = 1;
    r5 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r3 = MemoryInline::FlatRead32((r29 + 32));
    r3 = MemoryInline::FlatRead32((r3 + 188));
    r6 = MemoryInline::FlatRead32((r3 + 32));
    r11 = (r6 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_800ABF30:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800ABF48;
    }
}

loc_800ABF34:
{
    r3 = (r6 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800ABF40:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800ABF48;
    }
}

loc_800ABF44:
{
    r10 = 0;
}

loc_800ABF48:
{
}

loc_800ABF4C:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_800ABF64;
    }
}

loc_800ABF50:
{
    r3 = (r6 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800ABF5C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800ABF64;
    }
}

loc_800ABF60:
{
    r9 = 0;
}

loc_800ABF64:
{
}

loc_800ABF68:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800ABF7C;
    }
}

loc_800ABF6C:
{
    r0 = (r11 + 1073741824);
}

loc_800ABF74:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800ABF7C;
    }
}

loc_800ABF78:
{
    r8 = 0;
}

loc_800ABF7C:
{
}

loc_800ABF80:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800ABF98;
    }
}

loc_800ABF84:
{
    r3 = (r6 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800ABF90:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800ABF98;
    }
}

loc_800ABF94:
{
    r7 = 0;
}

loc_800ABF98:
{
}

loc_800ABF9C:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800ABFB4;
    }
}

loc_800ABFA0:
{
    r3 = (r6 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800ABFAC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800ABFB4;
    }
}

loc_800ABFB0:
{
    r5 = 0;
}

loc_800ABFB4:
{
}

loc_800ABFB8:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800ABFD0;
    }
}

loc_800ABFBC:
{
    r3 = (r6 & -16384);
    r0 = (r3 + 536870912);
}

loc_800ABFC8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800ABFD0;
    }
}

loc_800ABFCC:
{
    r4 = 0;
}

loc_800ABFD0:
{
}

loc_800ABFD4:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800ABFF4;
    }
}

loc_800ABFD8:
{
    r3 = 0x80590000u;
    r3 = (r3 + 14136);
    r4 = 134;
    r5 = 0x80590000u;
    r5 = (r5 + 14516);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800ABFF4u;
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

loc_800ABFF4:
{
    r4 = 1;
    r5 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r3 = MemoryInline::FlatRead32((r29 + 32));
    r3 = MemoryInline::FlatRead32((r3 + 188));
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r6 = MemoryInline::FlatRead32((r3 + 8));
    r11 = (r6 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_800AC028:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800AC040;
    }
}

loc_800AC02C:
{
    r3 = (r6 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800AC038:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800AC040;
    }
}

loc_800AC03C:
{
    r10 = 0;
}

loc_800AC040:
{
}

loc_800AC044:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_800AC05C;
    }
}

loc_800AC048:
{
    r3 = (r6 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800AC054:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800AC05C;
    }
}

loc_800AC058:
{
    r9 = 0;
}

loc_800AC05C:
{
}

loc_800AC060:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800AC074;
    }
}

loc_800AC064:
{
    r0 = (r11 + 1073741824);
}

loc_800AC06C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800AC074;
    }
}

loc_800AC070:
{
    r8 = 0;
}

loc_800AC074:
{
}

loc_800AC078:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800AC090;
    }
}

loc_800AC07C:
{
    r3 = (r6 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800AC088:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800AC090;
    }
}

loc_800AC08C:
{
    r7 = 0;
}

loc_800AC090:
{
}

loc_800AC094:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800AC0AC;
    }
}

loc_800AC098:
{
    r3 = (r6 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800AC0A4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800AC0AC;
    }
}

loc_800AC0A8:
{
    r5 = 0;
}

loc_800AC0AC:
{
}

loc_800AC0B0:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800AC0C8;
    }
}

loc_800AC0B4:
{
    r3 = (r6 & -16384);
    r0 = (r3 + 536870912);
}

loc_800AC0C0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800AC0C8;
    }
}

loc_800AC0C4:
{
    r4 = 0;
}

loc_800AC0C8:
{
}

loc_800AC0CC:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800AC0EC;
    }
}

loc_800AC0D0:
{
    r3 = 0x80590000u;
    r3 = (r3 + 14136);
    r4 = 135;
    r5 = 0x80590000u;
    r5 = (r5 + 14600);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800AC0ECu;
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

loc_800AC0EC:
{
    r3 = MemoryInline::FlatRead32((r29 + 32));
    r3 = MemoryInline::FlatRead32((r3 + 188));
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r4 = MemoryInline::FlatRead8((r31 + 320));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 8));
    ctr = r12;
    ctx->lr = 0x800AC110u;
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    MemoryInline::FlatWrite32((r29 + 44), r3);
    r0 = 0;
    MemoryInline::FlatWrite32((r29 + 84), r0);
    r3 = r29;
    r4 = (r31 + 148);
    ctx->lr = 0x800AC128u;
    if constexpr (KnownRegArgsCpuCall<0x800AC148u>(&func_800AC148)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        const auto regargs_result_800AC148_677A = func_800AC148_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_800AC148_677A);
        r4 = static_cast<uint32_t>(regargs_result_800AC148_677A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x800AC148u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
    }
    r3 = 1;
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800ABAD0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800ABAD0_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800ABAD0 func_800ABAD0 preserves=true fpr_mask=0x00000000
