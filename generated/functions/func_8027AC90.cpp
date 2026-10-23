#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80272B14(CpuContext* ctx);
extern "C" uint64_t func_80272B14_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" void func_8027AC90(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_psqx_8027AE6C_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t stackword4 = 0;
    uint32_t stackword5 = 0;
    uint32_t stackword6 = 0;
    uint32_t stackword7 = 0;
    uint32_t stackword8 = 0;
    uint32_t stackword9 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_8027AC90;

loc_8027AC90:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r31 = r3;
    r30 = r5;
    r0 = (r4 & 255);
}

loc_8027ACBC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(255))) {
        goto loc_8027ACFC;
    }
}

loc_8027ACC0:
{
    r5 = MemoryInline::FlatRead8((r3 + 2));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & -2);
    r4 = 0x805C0000u;
    r4 = (r4 + 1932);
    r4_addr_0 = (r4 + r0);
    r0 = MemoryInline::FlatRead8(r4_addr_0);
    MemoryInline::FlatWrite8((r3 + 1384), static_cast<uint8_t>(r0));
}

loc_8027ACDC:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(7))) {
        goto loc_8027AD00;
    }
}

loc_8027ACE0:
{
    r4 = 0x80000000u;
    // inline leaf 0x80279118 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 984));
    r3 = (r0 & r4);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x80279118
}

loc_8027ACEC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8027AD00;
    }
}

loc_8027ACF0:
{
    r0 = 113;
    MemoryInline::FlatWrite8((r31 + 1384), static_cast<uint8_t>(r0));
    goto loc_8027AD00;
}

loc_8027ACFC:
{
    MemoryInline::FlatWrite8((r3 + 1384), static_cast<uint8_t>(r4));
}

loc_8027AD00:
{
    r0 = (r30 & 255);
}

loc_8027AD08:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(255))) {
        goto loc_8027AD2C;
    }
}

loc_8027AD0C:
{
    r0 = MemoryInline::FlatRead8((r31 + 2));
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_0 & -2);
    r3 = 0x805C0000u;
    r0 = (r3 + 1932);
    r3 = (r4 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 1));
    MemoryInline::FlatWrite8((r31 + 1385), static_cast<uint8_t>(r0));
    goto loc_8027AD30;
}

loc_8027AD2C:
{
    MemoryInline::FlatWrite8((r31 + 1385), static_cast<uint8_t>(r30));
}

loc_8027AD30:
{
    r0 = MemoryInline::FlatRead8((r31 + 1106));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r3 + 100);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -14848));
    r0 = (r0 ^ -2147483648);
    stackword4 = r0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r0 = 1127219200;
    stackword5 = r0;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword5), static_cast<uint32_t>(stackword4));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14800));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    r3 = r31;
    r4 = 38;
    if constexpr (KnownRegArgsCpuCall<0x80272B14u>(&func_80272B14)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80272B14_12E0 = func_80272B14_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80272B14_12E0);
        r4 = static_cast<uint32_t>(regargs_result_80272B14_12E0 >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80272B14u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_8027AD70:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8027AE10;
    }
}

loc_8027AD74:
{
    r4 = MemoryInline::FlatRead8((r31 + 1093));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8027AD7C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8027AE10;
    }
}

loc_8027AD80:
{
    r5 = 0;
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8027AE10;
    }
}

loc_8027AD88:
{
    r3 = (r4 + -8);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
}

loc_8027AD94:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(8))) {
        goto loc_8027ADF0;
    }
}

loc_8027AD98:
{
    r4 = 0;
}

loc_8027ADA0:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_8027ADB0;
    }
}

loc_8027ADA4:
{
}

loc_8027ADA8:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(32766))) {
        goto loc_8027ADB0;
    }
}

loc_8027ADAC:
{
    r4 = 1;
}

loc_8027ADB0:
{
}

loc_8027ADB4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8027ADF0;
    }
}

loc_8027ADB8:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14836));
    goto loc_8027ADE4;
}

loc_8027ADC0:
{
    f31.d = PpcFmulsInline(f31.d, f0.d);
    f31.d = PpcFmulsInline(f31.d, f0.d);
    f31.d = PpcFmulsInline(f31.d, f0.d);
    f31.d = PpcFmulsInline(f31.d, f0.d);
    f31.d = PpcFmulsInline(f31.d, f0.d);
    f31.d = PpcFmulsInline(f31.d, f0.d);
    f31.d = PpcFmulsInline(f31.d, f0.d);
    f31.d = PpcFmulsInline(f31.d, f0.d);
    r5 = (r5 + 8);
}

loc_8027ADE4:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
}

loc_8027ADEC:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r3))) {
        goto loc_8027ADC0;
    }
}

loc_8027ADF0:
{
    r3 = MemoryInline::FlatRead8((r31 + 1093));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14836));
    goto loc_8027AE04;
}

loc_8027ADFC:
{
    f31.d = PpcFmulsInline(f31.d, f0.d);
    r5 = (r5 + 1);
}

loc_8027AE04:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
}

loc_8027AE0C:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r3))) {
        goto loc_8027ADFC;
    }
}

loc_8027AE10:
{
    r0 = MemoryInline::FlatRead8((r31 + 1384));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -14824));
    stackword6 = r0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r3 = 1127219200;
    stackword7 = r3;
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword7), static_cast<uint32_t>(stackword6));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f0.d, f31.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword0;
    MemoryInline::FlatWrite8((r31 + 1384), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r31 + 1385));
    stackword8 = r0;
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    stackword9 = r3;
    MemoryInline::FlatWriteRam32((r1 + 24), r3);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword9), static_cast<uint32_t>(stackword8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f0.d, f31.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword1;
    MemoryInline::FlatWrite8((r31 + 1385), static_cast<uint8_t>(r0));
    r0 = 56;
    addr_psqx_8027AE6C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8027AE6C_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 48));
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000003F gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x80000001 fpr_write=0x80000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8027AC90 func_8027AC90 preserves=true fpr_mask=0x00000000
