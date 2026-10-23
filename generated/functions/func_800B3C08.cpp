#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800AD128(CpuContext* ctx);
extern "C" uint64_t func_800AD128_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_800B3C08(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;

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
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;

    goto loc_800B3C08;

loc_800B3C08:
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

loc_800B3C50:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B3C68;
    }
}

loc_800B3C54:
{
    r3 = (r4 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800B3C60:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B3C68;
    }
}

loc_800B3C64:
{
    r10 = 0;
}

loc_800B3C68:
{
}

loc_800B3C6C:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_800B3C84;
    }
}

loc_800B3C70:
{
    r3 = (r4 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800B3C7C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B3C84;
    }
}

loc_800B3C80:
{
    r9 = 0;
}

loc_800B3C84:
{
}

loc_800B3C88:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800B3C9C;
    }
}

loc_800B3C8C:
{
    r0 = (r11 + 1073741824);
}

loc_800B3C94:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B3C9C;
    }
}

loc_800B3C98:
{
    r8 = 0;
}

loc_800B3C9C:
{
}

loc_800B3CA0:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800B3CB8;
    }
}

loc_800B3CA4:
{
    r3 = (r4 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800B3CB0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B3CB8;
    }
}

loc_800B3CB4:
{
    r7 = 0;
}

loc_800B3CB8:
{
}

loc_800B3CBC:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800B3CD4;
    }
}

loc_800B3CC0:
{
    r3 = (r4 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800B3CCC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B3CD4;
    }
}

loc_800B3CD0:
{
    r6 = 0;
}

loc_800B3CD4:
{
}

loc_800B3CD8:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800B3CF0;
    }
}

loc_800B3CDC:
{
    r3 = (r4 & -16384);
    r0 = (r3 + 536870912);
}

loc_800B3CE8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B3CF0;
    }
}

loc_800B3CEC:
{
    r5 = 0;
}

loc_800B3CF0:
{
}

loc_800B3CF4:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800B3D18;
    }
}

loc_800B3CF8:
{
    r3 = 0x80590000u;
    r3 = (r3 + 15952);
    r4 = 514;
    r5 = 0x80590000u;
    r5 = (r5 + 16392);
    r6 = r30;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800B3D18u;
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

loc_800B3D18:
{
    r0 = MemoryInline::FlatRead8(r30);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_800B3D24:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800B3D30;
    }
}

loc_800B3D28:
{
    r3 = 0;
    goto loc_800B3D94;
}

loc_800B3D30:
{
}

loc_800B3D34:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_800B3D50;
    }
}

loc_800B3D38:
{
    r3 = r31;
    r4 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800B3440u>(ctx);
    r3 = ctx->gpr[3];
}

loc_800B3D48:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800B3D50;
    }
}

loc_800B3D4C:
{
    goto loc_800B3D94;
}

loc_800B3D50:
{
    r3 = (r29 + 16);
    if constexpr (KnownRegArgsCpuCall<0x800AD128u>(&func_800AD128)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_800AD128_15AB = func_800AD128_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_800AD128_15AB);
        r4 = static_cast<uint32_t>(regargs_result_800AD128_15AB >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x800AD128u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r31 = r3;
    goto loc_800B3D88;
}

loc_800B3D60:
{
    r3 = r31;
    r4 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800B3440u>(ctx);
    r3 = ctx->gpr[3];
}

loc_800B3D70:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800B3D78;
    }
}

loc_800B3D74:
{
    goto loc_800B3D94;
}

loc_800B3D78:
{
    r3 = (r29 + 16);
    r4 = r31;
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
    r31 = r3;
}

loc_800B3D88:
{
}

loc_800B3D8C:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_800B3D60;
    }
}

loc_800B3D90:
{
    r3 = 0;
}

loc_800B3D94:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
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
// RECOMP_REGISTRATION base 0x800B3C08 func_800B3C08 preserves=true fpr_mask=0x00000000
