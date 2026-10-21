#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80086904(CpuContext* ctx);
extern "C" uint64_t func_80086904_ra8_0_18_0(CpuContext*, uint32_t);

extern "C" uint64_t func_8009AD48_ra18_6_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, double arg_f1, double arg_f2)
{
    uint32_t addr_psqx_8009B0A4_loc_0 = 0;
    uint32_t addr_psqx_8009B0B0_loc_0 = 0;
    uint32_t addr_psqx_8009B0BC_loc_0 = 0;
    uint32_t addr_psqx_8009B0C8_loc_0 = 0;
    uint32_t addr_psqx_8009B0D4_loc_0 = 0;
    uint32_t addr_psqx_8009B0E0_loc_0 = 0;
    uint32_t addr_psqx_8009B0EC_loc_0 = 0;
    uint32_t addr_psqx_8009B0F8_loc_0 = 0;
    uint32_t addr_psqx_8009B104_loc_0 = 0;
    uint32_t addr_psqx_8009B110_loc_0 = 0;
    uint32_t addr_psqx_8009B11C_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t fctiwzword3 = 0;
    uint32_t fctiwzword4 = 0;
    uint32_t fctiwzword5 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_10 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t r1_psq_tmp_5 = 0;
    uint32_t r1_psq_tmp_6 = 0;
    uint32_t r1_psq_tmp_7 = 0;
    uint32_t r1_psq_tmp_8 = 0;
    uint32_t r1_psq_tmp_9 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f21 = ctx->fpr[21];
    PPC_FPR f22 = ctx->fpr[22];
    PPC_FPR f23 = ctx->fpr[23];
    PPC_FPR f24 = ctx->fpr[24];
    PPC_FPR f25 = ctx->fpr[25];
    PPC_FPR f26 = ctx->fpr[26];
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    MKW_GUEST_ENTER(0x8009AD48u);
    goto loc_8009AD48;

loc_8009AD48:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -240), 0, 248u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -240), r1);
    r1 = (r1 + -240);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 244u, (r1 + 244), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 224u, (r1 + 224), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 232);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 208u, (r1 + 208), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 216);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 192u, (r1 + 192), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 200);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 176u, (r1 + 176), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 184);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 160u, (r1 + 160), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 168);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 144u, (r1 + 144), f26.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_5 = (r1 + 152);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_5, PPC_PsFromScalarInline(f26.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 128u, (r1 + 128), f25.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_6 = (r1 + 136);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_6, PPC_PsFromScalarInline(f25.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 112u, (r1 + 112), f24.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_7 = (r1 + 120);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_7, PPC_PsFromScalarInline(f24.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 96u, (r1 + 96), f23.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_8 = (r1 + 104);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_8, PPC_PsFromScalarInline(f23.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 80u, (r1 + 80), f22.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_9 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_9, PPC_PsFromScalarInline(f22.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 64u, (r1 + 64), f21.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_10 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_10, PPC_PsFromScalarInline(f21.d));
    r30 = r3;
    r31 = 0;
    f28.d = MemoryInline::FlatReadFloat32(r4);
    f27.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f31.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f26.d = MemoryInline::FlatReadFloat32((r4 + 16));
    f30.d = MemoryInline::FlatReadFloat32((r4 + 20));
    f29.d = MemoryInline::FlatReadFloat32((r4 + 24));
    f1.d = f28.d;
    // inline leaf 0x80052270 (2 guest instruction(s))
    f1.d = std::fabs(f1.d);
    // end of inlined leaf 0x80052270
    f25.d = f1.d;
    f1.d = f27.d;
    // inline leaf 0x80052270 (2 guest instruction(s))
    f1.d = std::fabs(f1.d);
    // end of inlined leaf 0x80052270
    f24.d = f1.d;
    f1.d = f31.d;
    // inline leaf 0x80052270 (2 guest instruction(s))
    f1.d = std::fabs(f1.d);
    // end of inlined leaf 0x80052270
    f23.d = f1.d;
    f1.d = f26.d;
    // inline leaf 0x80052270 (2 guest instruction(s))
    f1.d = std::fabs(f1.d);
    // end of inlined leaf 0x80052270
    f22.d = f1.d;
    f1.d = f30.d;
    // inline leaf 0x80052270 (2 guest instruction(s))
    f1.d = std::fabs(f1.d);
    // end of inlined leaf 0x80052270
    f21.d = f1.d;
    f1.d = f29.d;
    // inline leaf 0x80052270 (2 guest instruction(s))
    f1.d = std::fabs(f1.d);
    // end of inlined leaf 0x80052270
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31556));
    SetCRFloatResident(cr, 0, f25.d, f0.d);
}

loc_8009AE20:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8009AE64;
    }
}

loc_8009AE28:
{
    SetCRFloatResident(cr, 0, f24.d, f0.d);
}

loc_8009AE2C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8009AE64;
    }
}

loc_8009AE34:
{
    SetCRFloatResident(cr, 0, f23.d, f0.d);
}

loc_8009AE38:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8009AE64;
    }
}

loc_8009AE40:
{
    SetCRFloatResident(cr, 0, f22.d, f0.d);
}

loc_8009AE44:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8009AE64;
    }
}

loc_8009AE4C:
{
    SetCRFloatResident(cr, 0, f21.d, f0.d);
}

loc_8009AE50:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8009AE64;
    }
}

loc_8009AE58:
{
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8009AE5C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8009AEF8;
    }
}

loc_8009AE64:
{
    f2.d = MemoryInline::FlatReadFloat32((r2 + -31552));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31556));
}

loc_8009AE6C:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r31)));
}

loc_8009AE74:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(46))) {
        goto loc_8009AFA0;
    }
}

loc_8009AE78:
{
    r31 = (r31 + 1);
    f28.d = PpcFmulsInline(f28.d, f2.d);
    f27.d = PpcFmulsInline(f27.d, f2.d);
    f31.d = PpcFmulsInline(f31.d, f2.d);
    f26.d = PpcFmulsInline(f26.d, f2.d);
    f30.d = PpcFmulsInline(f30.d, f2.d);
    f29.d = PpcFmulsInline(f29.d, f2.d);
    f25.d = PpcFmulsInline(f25.d, f2.d);
    f24.d = PpcFmulsInline(f24.d, f2.d);
    f23.d = PpcFmulsInline(f23.d, f2.d);
    f22.d = PpcFmulsInline(f22.d, f2.d);
    f21.d = PpcFmulsInline(f21.d, f2.d);
    f1.d = PpcFmulsInline(f1.d, f2.d);
    SetCRFloatResident(cr, 0, f25.d, f0.d);
}

loc_8009AEB0:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8009AE6C;
    }
}

loc_8009AEB8:
{
    SetCRFloatResident(cr, 0, f24.d, f0.d);
}

loc_8009AEBC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8009AE6C;
    }
}

loc_8009AEC4:
{
    SetCRFloatResident(cr, 0, f23.d, f0.d);
}

loc_8009AEC8:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8009AE6C;
    }
}

loc_8009AED0:
{
    SetCRFloatResident(cr, 0, f22.d, f0.d);
}

loc_8009AED4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8009AE6C;
    }
}

loc_8009AEDC:
{
    SetCRFloatResident(cr, 0, f21.d, f0.d);
}

loc_8009AEE0:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8009AE6C;
    }
}

loc_8009AEE8:
{
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8009AEEC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8009AE6C;
    }
}

loc_8009AEF4:
{
    goto loc_8009AFA0;
}

loc_8009AEF8:
{
    f2.d = MemoryInline::FlatReadFloat32((r2 + -31552));
    SetCRFloatResident(cr, 0, f25.d, f2.d);
}

loc_8009AF00:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8009AFA0;
    }
}

loc_8009AF04:
{
    SetCRFloatResident(cr, 0, f24.d, f2.d);
}

loc_8009AF08:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8009AFA0;
    }
}

loc_8009AF0C:
{
    SetCRFloatResident(cr, 0, f23.d, f2.d);
}

loc_8009AF10:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8009AFA0;
    }
}

loc_8009AF14:
{
    SetCRFloatResident(cr, 0, f22.d, f2.d);
}

loc_8009AF18:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8009AFA0;
    }
}

loc_8009AF1C:
{
    SetCRFloatResident(cr, 0, f21.d, f2.d);
}

loc_8009AF20:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8009AFA0;
    }
}

loc_8009AF24:
{
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_8009AF28:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8009AFA0;
    }
}

loc_8009AF2C:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31548));
}

loc_8009AF30:
{
    r31 = (r31 + -1);
    f28.d = PpcFmulsInline(f28.d, f0.d);
    f27.d = PpcFmulsInline(f27.d, f0.d);
    f31.d = PpcFmulsInline(f31.d, f0.d);
    f26.d = PpcFmulsInline(f26.d, f0.d);
    f30.d = PpcFmulsInline(f30.d, f0.d);
    f29.d = PpcFmulsInline(f29.d, f0.d);
    f25.d = PpcFmulsInline(f25.d, f0.d);
    f24.d = PpcFmulsInline(f24.d, f0.d);
    f23.d = PpcFmulsInline(f23.d, f0.d);
    f22.d = PpcFmulsInline(f22.d, f0.d);
    f21.d = PpcFmulsInline(f21.d, f0.d);
    f1.d = PpcFmulsInline(f1.d, f0.d);
    SetCRFloatResident(cr, 0, f25.d, f2.d);
}

loc_8009AF68:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8009AFA0;
    }
}

loc_8009AF6C:
{
    SetCRFloatResident(cr, 0, f24.d, f2.d);
}

loc_8009AF70:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8009AFA0;
    }
}

loc_8009AF74:
{
    SetCRFloatResident(cr, 0, f23.d, f2.d);
}

loc_8009AF78:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8009AFA0;
    }
}

loc_8009AF7C:
{
    SetCRFloatResident(cr, 0, f22.d, f2.d);
}

loc_8009AF80:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8009AFA0;
    }
}

loc_8009AF84:
{
    SetCRFloatResident(cr, 0, f21.d, f2.d);
}

loc_8009AF88:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8009AFA0;
    }
}

loc_8009AF8C:
{
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_8009AF90:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8009AFA0;
    }
}

loc_8009AF94:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r31)));
}

loc_8009AF9C:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(-17))) {
        goto loc_8009AF30;
    }
}

loc_8009AFA0:
{
    r31 = (r31 + 17);
    r0 = (r30 + 6);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r3 = (r3_rot_0 & -16777216);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r31)));
    r0 = (r0 & 3);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(22));
    r0 = (r0_rot_0 & -4194304);
    r4 = (r3 | r0);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -31544));
    f0.d = PpcFmulsInline(f1.d, f28.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 8), f0.d);
    r0 = fctiwzword0;
    r3 = (r0 & 2047);
    f0.d = PpcFmulsInline(f1.d, f26.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 16), f0.d);
    r0 = fctiwzword1;
    r0 = (r0 & 2047);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(11));
    r0 = (r0_rot_1 & -2048);
    r0 = (r3 | r0);
    r3 = (r4 | r0);
    ctx->lr = 0x8009AFF8u;
    if constexpr (KnownRegArgsCpuCall<0x80086904u>(&func_80086904)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80086904_3ABC = func_80086904_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_80086904_3ABC);
        r4 = static_cast<uint32_t>(regargs_result_80086904_3ABC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80086904u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (r30 + 7);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r3 = (r3_rot_1 & -16777216);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r31)));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r0 = (r0_rot_2 & 3);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(22));
    r0 = (r0_rot_3 & -4194304);
    r4 = (r3 | r0);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -31544));
    f0.d = PpcFmulsInline(f1.d, f27.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword2 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f0.d);
    r0 = fctiwzword2;
    r3 = (r0 & 2047);
    f0.d = PpcFmulsInline(f1.d, f30.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword3 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f0.d);
    r0 = fctiwzword3;
    r0 = (r0 & 2047);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(11));
    r0 = (r0_rot_4 & -2048);
    r0 = (r3 | r0);
    r3 = (r4 | r0);
    ctx->lr = 0x8009B04Cu;
    if constexpr (KnownRegArgsCpuCall<0x80086904u>(&func_80086904)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80086904_41B3 = func_80086904_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_80086904_41B3);
        r4 = static_cast<uint32_t>(regargs_result_80086904_41B3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80086904u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (r30 + 8);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r3 = (r3_rot_2 & -16777216);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r31)));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(28));
    r0 = (r0_rot_5 & 3);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(22));
    r0 = (r0_rot_6 & -4194304);
    r4 = (r3 | r0);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -31544));
    f0.d = PpcFmulsInline(f1.d, f31.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword4 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 40), f0.d);
    r0 = fctiwzword4;
    r3 = (r0 & 2047);
    f0.d = PpcFmulsInline(f1.d, f29.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword5 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f0.d);
    r0 = fctiwzword5;
    r0 = (r0 & 2047);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(11));
    r0 = (r0_rot_7 & -2048);
    r0 = (r3 | r0);
    r3 = (r4 | r0);
    ctx->lr = 0x8009B0A0u;
    if constexpr (KnownRegArgsCpuCall<0x80086904u>(&func_80086904)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80086904_48AA = func_80086904_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_80086904_48AA);
        r4 = static_cast<uint32_t>(regargs_result_80086904_48AA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80086904u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = 232;
    addr_psqx_8009B0A4_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8009B0A4_loc_0));
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 56), 0, 192u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 168u, (r1 + 224));
    r0 = 216;
    addr_psqx_8009B0B0_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8009B0B0_loc_0));
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 152u, (r1 + 208));
    r0 = 200;
    addr_psqx_8009B0BC_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f29, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8009B0BC_loc_0));
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 136u, (r1 + 192));
    r0 = 184;
    addr_psqx_8009B0C8_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f28, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8009B0C8_loc_0));
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 120u, (r1 + 176));
    r0 = 168;
    addr_psqx_8009B0D4_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f27, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8009B0D4_loc_0));
    f27.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 104u, (r1 + 160));
    r0 = 152;
    addr_psqx_8009B0E0_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f26, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8009B0E0_loc_0));
    f26.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 88u, (r1 + 144));
    r0 = 136;
    addr_psqx_8009B0EC_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f25, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8009B0EC_loc_0));
    f25.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 72u, (r1 + 128));
    r0 = 120;
    addr_psqx_8009B0F8_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f24, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8009B0F8_loc_0));
    f24.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 56u, (r1 + 112));
    r0 = 104;
    addr_psqx_8009B104_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f23, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8009B104_loc_0));
    f23.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 40u, (r1 + 96));
    r0 = 88;
    addr_psqx_8009B110_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f22, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8009B110_loc_0));
    f22.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 24u, (r1 + 80));
    r0 = 72;
    addr_psqx_8009B11C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f21, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8009B11C_loc_0));
    f21.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 8u, (r1 + 64));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 188u, (r1 + 244));
    ctx->lr = r0;
    r1 = (r1 + 240);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[21] = f21;
    ctx->fpr[22] = f22;
    ctx->fpr[23] = f23;
    ctx->fpr[24] = f24;
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8009AD48(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8009AD48_ra18_6_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->fpr[1].d, ctx->fpr[2].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001F gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0xFFE00007 fpr_write=0xFFE00007 fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8009AD48 func_8009AD48 preserves=true fpr_mask=0x00000000
