#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800AB3EC(CpuContext* ctx);
extern "C" uint32_t func_800AB3EC_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_800C4994_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

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
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;

    goto loc_800C4994;

loc_800C4994:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
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

loc_800C49CC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C49E4;
    }
}

loc_800C49D0:
{
    r3 = (r4 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800C49DC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C49E4;
    }
}

loc_800C49E0:
{
    r10 = 0;
}

loc_800C49E4:
{
}

loc_800C49E8:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_800C4A00;
    }
}

loc_800C49EC:
{
    r3 = (r4 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800C49F8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C4A00;
    }
}

loc_800C49FC:
{
    r9 = 0;
}

loc_800C4A00:
{
}

loc_800C4A04:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800C4A18;
    }
}

loc_800C4A08:
{
    r0 = (r11 + 1073741824);
}

loc_800C4A10:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C4A18;
    }
}

loc_800C4A14:
{
    r8 = 0;
}

loc_800C4A18:
{
}

loc_800C4A1C:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800C4A34;
    }
}

loc_800C4A20:
{
    r3 = (r4 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800C4A2C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C4A34;
    }
}

loc_800C4A30:
{
    r7 = 0;
}

loc_800C4A34:
{
}

loc_800C4A38:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800C4A50;
    }
}

loc_800C4A3C:
{
    r3 = (r4 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800C4A48:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C4A50;
    }
}

loc_800C4A4C:
{
    r6 = 0;
}

loc_800C4A50:
{
}

loc_800C4A54:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800C4A6C;
    }
}

loc_800C4A58:
{
    r3 = (r4 & -16384);
    r0 = (r3 + 536870912);
}

loc_800C4A64:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C4A6C;
    }
}

loc_800C4A68:
{
    r5 = 0;
}

loc_800C4A6C:
{
}

loc_800C4A70:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800C4A94;
    }
}

loc_800C4A74:
{
    r3 = 0x80590000u;
    r3 = (r3 + 19616);
    r4 = 1226;
    r5 = 0x80590000u;
    r5 = (r5 + 20008);
    r6 = r31;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800C4A94u;
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

loc_800C4A94:
{
    r4 = 1;
    r5 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r6 = MemoryInline::FlatRead32((r31 + 36));
    r11 = (r6 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_800C4ABC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C4AD4;
    }
}

loc_800C4AC0:
{
    r3 = (r6 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800C4ACC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C4AD4;
    }
}

loc_800C4AD0:
{
    r10 = 0;
}

loc_800C4AD4:
{
}

loc_800C4AD8:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_800C4AF0;
    }
}

loc_800C4ADC:
{
    r3 = (r6 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800C4AE8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C4AF0;
    }
}

loc_800C4AEC:
{
    r9 = 0;
}

loc_800C4AF0:
{
}

loc_800C4AF4:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800C4B08;
    }
}

loc_800C4AF8:
{
    r0 = (r11 + 1073741824);
}

loc_800C4B00:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C4B08;
    }
}

loc_800C4B04:
{
    r8 = 0;
}

loc_800C4B08:
{
}

loc_800C4B0C:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800C4B24;
    }
}

loc_800C4B10:
{
    r3 = (r6 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800C4B1C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C4B24;
    }
}

loc_800C4B20:
{
    r7 = 0;
}

loc_800C4B24:
{
}

loc_800C4B28:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800C4B40;
    }
}

loc_800C4B2C:
{
    r3 = (r6 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800C4B38:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C4B40;
    }
}

loc_800C4B3C:
{
    r5 = 0;
}

loc_800C4B40:
{
}

loc_800C4B44:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800C4B5C;
    }
}

loc_800C4B48:
{
    r3 = (r6 & -16384);
    r0 = (r3 + 536870912);
}

loc_800C4B54:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C4B5C;
    }
}

loc_800C4B58:
{
    r4 = 0;
}

loc_800C4B5C:
{
}

loc_800C4B60:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800C4B80;
    }
}

loc_800C4B64:
{
    r3 = 0x80590000u;
    r3 = (r3 + 19616);
    r4 = 1227;
    r5 = 0x80590000u;
    r5 = (r5 + 20060);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800C4B80u;
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

loc_800C4B80:
{
    r3 = MemoryInline::FlatRead32((r31 + 36));
    ctx->lr = 0x800C4B88u;
    if constexpr (KnownRegArgsCpuCall<0x800AB3ECu>(&func_800AB3EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800AB3EC_1EA1 = func_800AB3EC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800AB3EC_1EA1;
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

loc_800C4BB0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C4BC8;
    }
}

loc_800C4BB4:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 2130706432);
}

loc_800C4BC0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C4BC8;
    }
}

loc_800C4BC4:
{
    r10 = 0;
}

loc_800C4BC8:
{
}

loc_800C4BCC:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_800C4BE4;
    }
}

loc_800C4BD0:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 1879048192);
}

loc_800C4BDC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C4BE4;
    }
}

loc_800C4BE0:
{
    r9 = 0;
}

loc_800C4BE4:
{
}

loc_800C4BE8:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800C4BFC;
    }
}

loc_800C4BEC:
{
    r0 = (r11 + 1073741824);
}

loc_800C4BF4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C4BFC;
    }
}

loc_800C4BF8:
{
    r8 = 0;
}

loc_800C4BFC:
{
}

loc_800C4C00:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800C4C18;
    }
}

loc_800C4C04:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 1056964608);
}

loc_800C4C10:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C4C18;
    }
}

loc_800C4C14:
{
    r7 = 0;
}

loc_800C4C18:
{
}

loc_800C4C1C:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800C4C34;
    }
}

loc_800C4C20:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 805306368);
}

loc_800C4C2C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C4C34;
    }
}

loc_800C4C30:
{
    r6 = 0;
}

loc_800C4C34:
{
}

loc_800C4C38:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800C4C50;
    }
}

loc_800C4C3C:
{
    r3 = (r3 & -16384);
    r0 = (r3 + 536870912);
}

loc_800C4C48:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C4C50;
    }
}

loc_800C4C4C:
{
    r5 = 0;
}

loc_800C4C50:
{
}

loc_800C4C54:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800C4C78;
    }
}

loc_800C4C58:
{
    r3 = 0x80590000u;
    r3 = (r3 + 19616);
    r4 = 1230;
    r5 = 0x80590000u;
    r5 = (r5 + 20120);
    r6 = r31;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800C4C78u;
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

loc_800C4C78:
{
    r0 = MemoryInline::FlatRead8((r31 + 174));
}

loc_800C4C80:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800C4CB8;
    }
}

loc_800C4C84:
{
}

loc_800C4C88:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_800C4CC4;
    }
}

loc_800C4C8C:
{
}

loc_800C4C90:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_800C4CD0;
    }
}

loc_800C4C94:
{
}

loc_800C4C98:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_800C4CDC;
    }
}

loc_800C4C9C:
{
}

loc_800C4CA0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_800C4CE8;
    }
}

loc_800C4CA4:
{
}

loc_800C4CA8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(7))) {
        goto loc_800C4CE8;
    }
}

loc_800C4CAC:
{
}

loc_800C4CB0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_800C4CF4;
    }
}

loc_800C4CB4:
{
    goto loc_800C4D34;
}

loc_800C4CB8:
{
    r3 = 0x800C0000u;
    r3 = (r3 + -30576);
    goto loc_800C4D3C;
}

loc_800C4CC4:
{
    r3 = 0x800C0000u;
    r3 = (r3 + -30668);
    goto loc_800C4D3C;
}

loc_800C4CD0:
{
    r3 = 0x800C0000u;
    r3 = (r3 + -30676);
    goto loc_800C4D3C;
}

loc_800C4CDC:
{
    r3 = 0x800C0000u;
    r3 = (r3 + 20140);
    goto loc_800C4D3C;
}

loc_800C4CE8:
{
    r3 = 0x800C0000u;
    r3 = (r3 + -30740);
    goto loc_800C4D3C;
}

loc_800C4CF4:
{
    r0 = MemoryInline::FlatRead8((r31 + 178));
    r0 = (r0 & 7);
}

loc_800C4D00:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_800C4D10;
    }
}

loc_800C4D04:
{
}

loc_800C4D08:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_800C4D1C;
    }
}

loc_800C4D0C:
{
    goto loc_800C4D28;
}

loc_800C4D10:
{
    r3 = 0x800C0000u;
    r3 = (r3 + 22024);
    goto loc_800C4D3C;
}

loc_800C4D1C:
{
    r3 = 0x800C0000u;
    r3 = (r3 + 23048);
    goto loc_800C4D3C;
}

loc_800C4D28:
{
    r3 = 0x800C0000u;
    r3 = (r3 + 21000);
    goto loc_800C4D3C;
}

loc_800C4D34:
{
    r3 = 0x800C0000u;
    r3 = (r3 + -30576);
}

loc_800C4D3C:
{
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

extern "C" void func_800C4994(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800C4994_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000FFB gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800C4994 func_800C4994 preserves=true fpr_mask=0x00000000
