#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800A52B4(CpuContext* ctx);
extern "C" uint64_t func_800A52B4_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_800B3DE8(CpuContext* ctx);
extern "C" uint64_t func_800B3DE8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80502274(CpuContext* ctx);
extern "C" uint32_t func_80502274_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_800B48FC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;

    goto loc_800B48FC;

loc_800B48FC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = r4;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r11 = (r4 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_800B493C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B4954;
    }
}

loc_800B4940:
{
    r3 = (r4 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800B494C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B4954;
    }
}

loc_800B4950:
{
    r10 = 0;
}

loc_800B4954:
{
}

loc_800B4958:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_800B4970;
    }
}

loc_800B495C:
{
    r3 = (r4 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800B4968:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B4970;
    }
}

loc_800B496C:
{
    r9 = 0;
}

loc_800B4970:
{
}

loc_800B4974:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800B4988;
    }
}

loc_800B4978:
{
    r0 = (r11 + 1073741824);
}

loc_800B4980:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B4988;
    }
}

loc_800B4984:
{
    r8 = 0;
}

loc_800B4988:
{
}

loc_800B498C:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800B49A4;
    }
}

loc_800B4990:
{
    r3 = (r4 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800B499C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B49A4;
    }
}

loc_800B49A0:
{
    r7 = 0;
}

loc_800B49A4:
{
}

loc_800B49A8:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800B49C0;
    }
}

loc_800B49AC:
{
    r3 = (r4 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800B49B8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B49C0;
    }
}

loc_800B49BC:
{
    r6 = 0;
}

loc_800B49C0:
{
}

loc_800B49C4:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800B49DC;
    }
}

loc_800B49C8:
{
    r3 = (r4 & -16384);
    r0 = (r3 + 536870912);
}

loc_800B49D4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B49DC;
    }
}

loc_800B49D8:
{
    r5 = 0;
}

loc_800B49DC:
{
}

loc_800B49E0:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800B4A04;
    }
}

loc_800B49E4:
{
    r3 = 0x80590000u;
    r3 = (r3 + 15952);
    r4 = 881;
    r5 = 0x80590000u;
    r5 = (r5 + 16752);
    r6 = r31;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800B4A04u;
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

loc_800B4A04:
{
    r3 = (r30 + 16);
    if constexpr (KnownRegArgsCpuCall<0x800A52B4u>(&func_800A52B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_800A52B4_12D7 = func_800A52B4_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_800A52B4_12D7);
        r4 = static_cast<uint32_t>(regargs_result_800A52B4_12D7 >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x800A52B4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r4 = r3;
    goto loc_800B4A54;
}

loc_800B4A14:
{
}

loc_800B4A18:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r31))) {
        goto loc_800B4A48;
    }
}

loc_800B4A1C:
{
    r3 = (r30 + 16);
    r4 = r31;
    if constexpr (KnownRegArgsCpuCall<0x80502274u>(&func_80502274)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_80502274_16BF = func_80502274_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_80502274_16BF;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
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
        InvokeDirectCpu<0x80502274u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r3 = r30;
    r4 = r31;
    ctx->lr = 0x800B4A34u;
    if constexpr (KnownRegArgsCpuCall<0x800B3DE8u>(&func_800B3DE8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_800B3DE8_1AA3 = func_800B3DE8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800B3DE8_1AA3);
        r4 = static_cast<uint32_t>(regargs_result_800B3DE8_1AA3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
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
        ctx->cr = cr;
        InvokeDirectCpu<0x800B3DE8u>(ctx);
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
        cr = ctx->cr;
    }
    r0 = MemoryInline::FlatRead32((r30 + 28));
    r0 = (r0 - r3);
    MemoryInline::FlatWrite32((r30 + 28), r0);
    r3 = 1;
    goto loc_800B4A60;
}

loc_800B4A48:
{
    r3 = (r30 + 16);
    // inline leaf 0x805022E0 (8 guest instruction(s))
}

loc_inl0_0x805022E0:
{
}

loc_inl0_0x805022E4:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x805022F0;
    }
}

loc_inl0_0x805022E8:
{
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_inl0_cont_805022E0;
}

loc_inl0_0x805022F0:
{
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl0_cont_805022E0:
{
    // end of inlined leaf 0x805022E0
    r4 = r3;
}

loc_800B4A54:
{
}

loc_800B4A58:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800B4A14;
    }
}

loc_800B4A5C:
{
    r3 = 0;
}

loc_800B4A60:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
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
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000FFB gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800B48FC func_800B48FC preserves=true fpr_mask=0x00000000
