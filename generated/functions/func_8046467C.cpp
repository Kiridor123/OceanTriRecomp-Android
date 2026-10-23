#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80468848(CpuContext* ctx);
extern "C" uint64_t func_80468848_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);

extern "C" uint64_t func_8046467C_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r13 = ctx->gpr[13];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    PPC_FPR f9 = ctx->fpr[9];
    PPC_FPR f10 = ctx->fpr[10];
    PPC_FPR f11 = ctx->fpr[11];
    PPC_FPR f12 = ctx->fpr[12];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];

    goto loc_8046467C;

loc_8046467C:
{
    MemoryAlias::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryAlias::FlatWriteRam32((r1 + 68), r0);
    MemoryAlias::FlatWriteRamFloat64((r1 + 48), f31.d);
    // psq_store w=0 quant=0 (using MemoryAlias::PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 56);
    MemoryAlias::PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryAlias::FlatWriteRamFloat64((r1 + 32), f30.d);
    // psq_store w=0 quant=0 (using MemoryAlias::PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 40);
    MemoryAlias::PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryAlias::FlatWriteRamFloat64((r1 + 8), f1.d);
    r0 = 1072693248;
    r4 = MemoryAlias::FlatRead32((r1 + 8));
    r3 = (r4 & 2147483647);
}

loc_804646AC:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(r0))) {
        goto loc_804646EC;
    }
}

loc_804646B0:
{
    r0 = MemoryAlias::FlatRead32((r1 + 12));
    r3 = (r3 + -1072693248);
    r0 = (r3 | r0);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804646D8;
    }
}

loc_804646C0:
{
}

loc_804646C4:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_804646D0;
    }
}

loc_804646C8:
{
    f1.d = MemoryAlias::FlatReadFloat64((r2 + -4208));
    goto loc_80464928;
}

loc_804646D0:
{
    f1.d = MemoryAlias::FlatReadFloat64((r2 + -4200));
    goto loc_80464928;
}

loc_804646D8:
{
    r3 = 0x80790000u;
    r0 = 33;
    MemoryAlias::FlatWrite32((r13 + -16408), r0);
    f1.d = MemoryAlias::FlatReadFloat32((r3 + 25016));
    goto loc_80464928;
}

loc_804646EC:
{
    r0 = 1071644672;
}

loc_804646F4:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r0))) {
        goto loc_804647A8;
    }
}

loc_804646F8:
{
    r0 = 1012924416;
}

loc_80464700:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(r0))) {
        goto loc_8046470C;
    }
}

loc_80464704:
{
    f1.d = MemoryAlias::FlatReadFloat64((r2 + -4192));
    goto loc_80464928;
}

loc_8046470C:
{
    f12.d = (f1.d * f1.d);
    guest_range_0 = MemoryAlias::ResolveRangeHost((r2 + -4192), 0, 104u, true, false);
    f0.d = MemoryAlias::ReadResolvedFloat64(guest_range_0, 48u, (r2 + -4144));
    f2.d = MemoryAlias::ReadResolvedFloat64(guest_range_0, 88u, (r2 + -4104));
    f3.d = MemoryAlias::ReadResolvedFloat64(guest_range_0, 40u, (r2 + -4152));
    f10.d = MemoryAlias::ReadResolvedFloat64(guest_range_0, 32u, (r2 + -4160));
    f4.d = (f0.d * f12.d);
    f0.d = MemoryAlias::ReadResolvedFloat64(guest_range_0, 80u, (r2 + -4112));
    f2.d = (f2.d * f12.d);
    f5.d = MemoryAlias::ReadResolvedFloat64(guest_range_0, 72u, (r2 + -4120));
    f9.d = MemoryAlias::ReadResolvedFloat64(guest_range_0, 24u, (r2 + -4168));
    f3.d = (f3.d + f4.d);
    f4.d = MemoryAlias::ReadResolvedFloat64(guest_range_0, 64u, (r2 + -4128));
    f0.d = (f0.d + f2.d);
    f11.d = (f12.d * f3.d);
    f8.d = MemoryAlias::ReadResolvedFloat64(guest_range_0, 16u, (r2 + -4176));
    f3.d = MemoryAlias::ReadResolvedFloat64(guest_range_0, 56u, (r2 + -4136));
    f6.d = (f12.d * f0.d);
    f7.d = MemoryAlias::ReadResolvedFloat64(guest_range_0, 8u, (r2 + -4184));
    f2.d = MemoryAlias::ReadResolvedFloat64(guest_range_0, 96u, (r2 + -4096));
    f10.d = (f10.d + f11.d);
    f0.d = MemoryAlias::ReadResolvedFloat64(guest_range_0, 0u, (r2 + -4192));
    f5.d = (f5.d + f6.d);
    f6.d = (f12.d * f10.d);
    f5.d = (f12.d * f5.d);
    f6.d = (f9.d + f6.d);
    f4.d = (f4.d + f5.d);
    f5.d = (f12.d * f6.d);
    f4.d = (f12.d * f4.d);
    f5.d = (f8.d + f5.d);
    f4.d = (f3.d + f4.d);
    f3.d = (f12.d * f5.d);
    f3.d = (f7.d + f3.d);
    f3.d = (f12.d * f3.d);
    f3.d = (f3.d / f4.d);
    f3.d = (f1.d * f3.d);
    f2.d = (f2.d - f3.d);
    f1.d = (f1.d - f2.d);
    f1.d = (f0.d - f1.d);
    goto loc_80464928;
}

loc_804647A8:
{
}

loc_804647AC:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(0))) {
        goto loc_80464860;
    }
}

loc_804647B0:
{
    guest_range_1 = MemoryAlias::ResolveRangeHost((r2 + -4184), 0, 104u, true, false);
    f11.d = MemoryAlias::ReadResolvedFloat64(guest_range_1, 48u, (r2 + -4136));
    f0.d = MemoryAlias::ReadResolvedFloat64(guest_range_1, 96u, (r2 + -4088));
    f1.d = (f11.d + f1.d);
    f4.d = MemoryAlias::ReadResolvedFloat64(guest_range_1, 40u, (r2 + -4144));
    f9.d = MemoryAlias::ReadResolvedFloat64(guest_range_1, 32u, (r2 + -4152));
    f3.d = MemoryAlias::ReadResolvedFloat64(guest_range_1, 72u, (r2 + -4112));
    f1.d = (f0.d * f1.d);
    f0.d = MemoryAlias::ReadResolvedFloat64(guest_range_1, 80u, (r2 + -4104));
    f8.d = MemoryAlias::ReadResolvedFloat64(guest_range_1, 24u, (r2 + -4160));
    f2.d = MemoryAlias::ReadResolvedFloat64(guest_range_1, 64u, (r2 + -4120));
    f7.d = MemoryAlias::ReadResolvedFloat64(guest_range_1, 16u, (r2 + -4168));
    f10.d = (f4.d * f1.d);
    f6.d = MemoryAlias::ReadResolvedFloat64(guest_range_1, 8u, (r2 + -4176));
    f4.d = (f0.d * f1.d);
    f0.d = MemoryAlias::ReadResolvedFloat64(guest_range_1, 56u, (r2 + -4128));
    f5.d = MemoryAlias::ReadResolvedFloat64(guest_range_1, 0u, (r2 + -4184));
    f9.d = (f9.d + f10.d);
    f3.d = (f3.d + f4.d);
    f4.d = (f1.d * f9.d);
    f3.d = (f1.d * f3.d);
    f4.d = (f8.d + f4.d);
    f2.d = (f2.d + f3.d);
    f3.d = (f1.d * f4.d);
    f2.d = (f1.d * f2.d);
    f3.d = (f7.d + f3.d);
    f0.d = (f0.d + f2.d);
    f2.d = (f1.d * f3.d);
    f0.d = (f1.d * f0.d);
    f2.d = (f6.d + f2.d);
    f30.d = (f11.d + f0.d);
    f0.d = (f1.d * f2.d);
    f0.d = (f5.d + f0.d);
    f31.d = (f1.d * f0.d);
    if constexpr (KnownRegArgsCpuCall<0x80468848u>(&func_80468848)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_80468848_1CDB = func_80468848_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80468848_1CDB);
        r4 = static_cast<uint32_t>(regargs_result_80468848_1CDB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x80468848u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    f4.d = (f31.d / f30.d);
    f3.d = MemoryAlias::FlatReadFloat64((r2 + -4096));
    f2.d = MemoryAlias::FlatReadFloat64((r2 + -4080));
    f0.d = MemoryAlias::FlatReadFloat64((r2 + -4200));
    f4.d = (f4.d * f1.d);
    f3.d = (f4.d - f3.d);
    f1.d = (f1.d + f3.d);
    f1.d = (f2.d * f1.d);
    f1.d = (f0.d - f1.d);
    goto loc_80464928;
}

loc_80464860:
{
    f2.d = MemoryAlias::FlatReadFloat64((r2 + -4136));
    f0.d = MemoryAlias::FlatReadFloat64((r2 + -4088));
    f1.d = (f2.d - f1.d);
    f31.d = (f0.d * f1.d);
    f1.d = f31.d;
    if constexpr (KnownRegArgsCpuCall<0x80468848u>(&func_80468848)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_80468848_22E0 = func_80468848_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80468848_22E0);
        r4 = static_cast<uint32_t>(regargs_result_80468848_22E0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x80468848u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    guest_range_2 = MemoryAlias::ResolveRangeHost((r2 + -4184), 0, 112u, true, false);
    f2.d = MemoryAlias::ReadResolvedFloat64(guest_range_2, 40u, (r2 + -4144));
    r0 = 0;
    MemoryAlias::FlatWriteRamFloat64((r1 + 16), f1.d);
    f4.d = (f2.d * f31.d);
    f0.d = MemoryAlias::ReadResolvedFloat64(guest_range_2, 80u, (r2 + -4104));
    f3.d = MemoryAlias::ReadResolvedFloat64(guest_range_2, 32u, (r2 + -4152));
    f2.d = (f0.d * f31.d);
    f0.d = MemoryAlias::ReadResolvedFloat64(guest_range_2, 72u, (r2 + -4112));
    MemoryAlias::FlatWriteRam32((r1 + 20), r0);
    f3.d = (f3.d + f4.d);
    f11.d = MemoryAlias::FlatReadFloat64((r1 + 16));
    f0.d = (f0.d + f2.d);
    f10.d = (f11.d * f11.d);
    f6.d = MemoryAlias::ReadResolvedFloat64(guest_range_2, 24u, (r2 + -4160));
    f8.d = MemoryAlias::ReadResolvedFloat64(guest_range_2, 16u, (r2 + -4168));
    f2.d = (f31.d * f3.d);
    f4.d = MemoryAlias::ReadResolvedFloat64(guest_range_2, 64u, (r2 + -4120));
    f7.d = MemoryAlias::ReadResolvedFloat64(guest_range_2, 8u, (r2 + -4176));
    f5.d = (f31.d * f0.d);
    f3.d = MemoryAlias::ReadResolvedFloat64(guest_range_2, 56u, (r2 + -4128));
    f0.d = (f6.d + f2.d);
    f6.d = MemoryAlias::ReadResolvedFloat64(guest_range_2, 0u, (r2 + -4184));
    f2.d = MemoryAlias::ReadResolvedFloat64(guest_range_2, 48u, (r2 + -4136));
    f10.d = (f31.d - f10.d);
    f9.d = (f31.d * f0.d);
    f0.d = MemoryAlias::ReadResolvedFloat64(guest_range_2, 104u, (r2 + -4080));
    f4.d = (f4.d + f5.d);
    f5.d = (f8.d + f9.d);
    f4.d = (f31.d * f4.d);
    f5.d = (f31.d * f5.d);
    f3.d = (f3.d + f4.d);
    f8.d = (f1.d + f11.d);
    f4.d = (f7.d + f5.d);
    f3.d = (f31.d * f3.d);
    f4.d = (f31.d * f4.d);
    f3.d = (f2.d + f3.d);
    f5.d = (f10.d / f8.d);
    f2.d = (f6.d + f4.d);
    f2.d = (f31.d * f2.d);
    f2.d = (f2.d / f3.d);
    f1.d = (f2.d * f1.d);
    f1.d = (f5.d + f1.d);
    f1.d = (f11.d + f1.d);
    f1.d = (f0.d * f1.d);
}

loc_80464928:
{
    r0 = MemoryAlias::FlatRead32((r1 + 68));
    // psq_load w=0 quant=0 (using MemoryAlias::PPC_PsqL)
    f31.d = MemoryAlias::FlatReadFloat64((r1 + 48));
    // psq_load w=0 quant=0 (using MemoryAlias::PPC_PsqL)
    f30.d = MemoryAlias::FlatReadFloat64((r1 + 32));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8046467C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8046467C_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xC0001FFF fpr_write=0xC0001FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8046467C func_8046467C preserves=true fpr_mask=0x00000000
