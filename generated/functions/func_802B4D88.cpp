#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802B4D34(CpuContext* ctx);
extern "C" uint32_t func_802B4D34_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_802B4D88_ra18_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, double arg_f1)
{
    uint32_t addr_lfsx_802B4DD0_loc_0 = 0;
    uint32_t addr_lfsx_802B4DF8_loc_0 = 0;
    uint32_t addr_lfsx_802B4E20_loc_0 = 0;
    uint32_t addr_lfsx_802B4E44_loc_0 = 0;
    uint32_t addr_lfsx_802B4E6C_loc_0 = 0;
    uint32_t addr_psqx_802B4EA0_loc_0 = 0;
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
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_802B4D88;

loc_802B4D88:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 16), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 24);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r31 = r3;
    f31.d = f1.d;
    ctx->lr = 0x802B4DACu;
    if constexpr (KnownRegArgsCpuCall<0x802B4D34u>(&func_802B4D34)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_802B4D34_859 = func_802B4D34_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_802B4D34_859;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->cr = cr;
        InvokeDirectCpu<0x802B4D34u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    }
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3_addr_0 = (r3 + r0);
    r0 = MemoryInline::FlatRead32(r3_addr_0);
}

loc_802B4DC0:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(4))) {
        goto loc_802B4DD8;
    }
}

loc_802B4DC4:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = 0x805D0000u;
    r3 = (r3 + 536);
    addr_lfsx_802B4DD0_loc_0 = (r3 + r0);
    f1.d = MemoryInline::FlatReadFloat32(addr_lfsx_802B4DD0_loc_0);
    goto loc_802B4E74;
}

loc_802B4DD8:
{
}

loc_802B4DDC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(5))) {
        goto loc_802B4E2C;
    }
}

loc_802B4DE0:
{
}

loc_802B4DE4:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(7))) {
        goto loc_802B4E04;
    }
}

loc_802B4DE8:
{
    r0 = MemoryInline::FlatRead32(r3);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3 = 0x805D0000u;
    r3 = (r3 + 536);
    addr_lfsx_802B4DF8_loc_0 = (r3 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_802B4DF8_loc_0);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    goto loc_802B4E74;
}

loc_802B4E04:
{
    r0 = (r4 + 1);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r3_addr_1 = (r3 + r0);
    r0 = MemoryInline::FlatRead32(r3_addr_1);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r3 = 0x805D0000u;
    r3 = (r3 + 536);
    addr_lfsx_802B4E20_loc_0 = (r3 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_802B4E20_loc_0);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    goto loc_802B4E74;
}

loc_802B4E2C:
{
}

loc_802B4E30:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_802B4E50;
    }
}

loc_802B4E34:
{
    r0 = MemoryInline::FlatRead32((r3 + 28));
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & -4);
    r3 = 0x805D0000u;
    r3 = (r3 + 536);
    addr_lfsx_802B4E44_loc_0 = (r3 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_802B4E44_loc_0);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f31.d + f0.d));
    goto loc_802B4E74;
}

loc_802B4E50:
{
    r0 = (r4 + -1);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & -4);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_9 & -4);
    r3_addr_2 = (r3 + r0);
    r0 = MemoryInline::FlatRead32(r3_addr_2);
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_10 & -4);
    r3 = 0x805D0000u;
    r3 = (r3 + 536);
    addr_lfsx_802B4E6C_loc_0 = (r3 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_802B4E6C_loc_0);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f31.d + f0.d));
}

loc_802B4E74:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13912));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_802B4E7C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_802B4E8C;
    }
}

loc_802B4E80:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13880));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    goto loc_802B4E9C;
}

loc_802B4E8C:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13880));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_802B4E94:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_802B4E9C;
    }
}

loc_802B4E98:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
}

loc_802B4E9C:
{
    r0 = 24;
    addr_psqx_802B4EA0_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_802B4EA0_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 16));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802B4D88(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802B4D88_ra18_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001F gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x80000003 fpr_write=0x80000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802B4D88 func_802B4D88 preserves=true fpr_mask=0x00000000
