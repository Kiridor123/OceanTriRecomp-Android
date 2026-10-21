#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800A38F0(CpuContext* ctx);
extern "C" uint64_t func_800A38F0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80502154(CpuContext* ctx);
extern "C" uint32_t func_80502154_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_800A3B84_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x800A3B84u);
    goto loc_800A3B84;

loc_800A3B84:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
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

loc_800A3BC4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A3BDC;
    }
}

loc_800A3BC8:
{
    r3 = (r4 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800A3BD4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A3BDC;
    }
}

loc_800A3BD8:
{
    r10 = 0;
}

loc_800A3BDC:
{
}

loc_800A3BE0:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_800A3BF8;
    }
}

loc_800A3BE4:
{
    r3 = (r4 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800A3BF0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A3BF8;
    }
}

loc_800A3BF4:
{
    r9 = 0;
}

loc_800A3BF8:
{
}

loc_800A3BFC:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800A3C10;
    }
}

loc_800A3C00:
{
    r0 = (r11 + 1073741824);
}

loc_800A3C08:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A3C10;
    }
}

loc_800A3C0C:
{
    r8 = 0;
}

loc_800A3C10:
{
}

loc_800A3C14:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800A3C2C;
    }
}

loc_800A3C18:
{
    r3 = (r4 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800A3C24:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A3C2C;
    }
}

loc_800A3C28:
{
    r7 = 0;
}

loc_800A3C2C:
{
}

loc_800A3C30:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800A3C48;
    }
}

loc_800A3C34:
{
    r3 = (r4 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800A3C40:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A3C48;
    }
}

loc_800A3C44:
{
    r6 = 0;
}

loc_800A3C48:
{
}

loc_800A3C4C:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800A3C64;
    }
}

loc_800A3C50:
{
    r3 = (r4 & -16384);
    r0 = (r3 + 536870912);
}

loc_800A3C5C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A3C64;
    }
}

loc_800A3C60:
{
    r5 = 0;
}

loc_800A3C64:
{
}

loc_800A3C68:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800A3C8C;
    }
}

loc_800A3C6C:
{
    r3 = 0x80590000u;
    r3 = (r3 + 11104);
    r4 = 49;
    r5 = 0x80590000u;
    r5 = (r5 + 11124);
    r6 = r30;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800A3C8Cu;
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

loc_800A3C8C:
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

loc_800A3CB0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A3CC8;
    }
}

loc_800A3CB4:
{
    r3 = (r31 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800A3CC0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A3CC8;
    }
}

loc_800A3CC4:
{
    r9 = 0;
}

loc_800A3CC8:
{
}

loc_800A3CCC:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800A3CE4;
    }
}

loc_800A3CD0:
{
    r3 = (r31 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800A3CDC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A3CE4;
    }
}

loc_800A3CE0:
{
    r8 = 0;
}

loc_800A3CE4:
{
}

loc_800A3CE8:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800A3CFC;
    }
}

loc_800A3CEC:
{
    r0 = (r10 + 1073741824);
}

loc_800A3CF4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A3CFC;
    }
}

loc_800A3CF8:
{
    r7 = 0;
}

loc_800A3CFC:
{
}

loc_800A3D00:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800A3D18;
    }
}

loc_800A3D04:
{
    r3 = (r31 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800A3D10:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A3D18;
    }
}

loc_800A3D14:
{
    r6 = 0;
}

loc_800A3D18:
{
}

loc_800A3D1C:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800A3D34;
    }
}

loc_800A3D20:
{
    r3 = (r31 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800A3D2C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A3D34;
    }
}

loc_800A3D30:
{
    r5 = 0;
}

loc_800A3D34:
{
}

loc_800A3D38:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800A3D50;
    }
}

loc_800A3D3C:
{
    r3 = (r31 & -16384);
    r0 = (r3 + 536870912);
}

loc_800A3D48:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A3D50;
    }
}

loc_800A3D4C:
{
    r4 = 0;
}

loc_800A3D50:
{
}

loc_800A3D54:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800A3D78;
    }
}

loc_800A3D58:
{
    r3 = 0x80590000u;
    r3 = (r3 + 11104);
    r4 = 50;
    r5 = 0x80590000u;
    r5 = (r5 + 11176);
    r6 = r31;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800A3D78u;
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

loc_800A3D78:
{
    r3 = r30;
    ctx->lr = 0x800A3D80u;
    if constexpr (KnownRegArgsCpuCall<0x800A38F0u>(&func_800A38F0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_800A38F0_1E9E = func_800A38F0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800A38F0_1E9E);
        r4 = static_cast<uint32_t>(regargs_result_800A38F0_1E9E >> 32);
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
        InvokeDirectCpu<0x800A38F0u>(ctx);
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
    r30 = r3;
    r4 = 0;
    goto loc_800A3D9C;
}

loc_800A3D8C:
{
    r3 = MemoryInline::FlatRead8((r3 + 137));
    r0 = MemoryInline::FlatRead8((r31 + 137));
}

loc_800A3D98:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(r0))) {
        goto loc_800A3DB0;
    }
}

loc_800A3D9C:
{
    r3 = r30;
    // inline leaf 0x80502300 (7 guest instruction(s))
}

loc_inl0_0x80502300:
{
}

loc_inl0_0x80502304:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x80502310;
    }
}

loc_inl0_0x80502308:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    goto loc_inl0_cont_80502300;
}

loc_inl0_0x80502310:
{
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r4_addr_2 = (r4 + r0);
    r3 = MemoryInline::FlatRead32(r4_addr_2);
}

loc_inl0_cont_80502300:
{
    // end of inlined leaf 0x80502300
    r4 = r3;
}

loc_800A3DAC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800A3D8C;
    }
}

loc_800A3DB0:
{
    r3 = r30;
    // inline leaf 0x805022E0 (8 guest instruction(s))
}

loc_inl1_0x805022E0:
{
}

loc_inl1_0x805022E4:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x805022F0;
    }
}

loc_inl1_0x805022E8:
{
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_inl1_cont_805022E0;
}

loc_inl1_0x805022F0:
{
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl1_cont_805022E0:
{
    // end of inlined leaf 0x805022E0
    r4 = r3;
    r3 = r30;
    r5 = r31;
    if constexpr (KnownRegArgsCpuCall<0x80502154u>(&func_80502154)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_80502154_2A14 = func_80502154_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_80502154_2A14;
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        InvokeDirectCpu<0x80502154u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800A3B84(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800A3B84_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000FFB gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800A3B84 func_800A3B84 preserves=true fpr_mask=0x00000000
