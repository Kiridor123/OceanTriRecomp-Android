#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80272B14(CpuContext* ctx);
extern "C" uint64_t func_80272B14_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_802768CC(CpuContext* ctx);
extern "C" uint32_t func_802768CC_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_80276BBC_ra18_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, double arg_f1)
{
    uint32_t addr_psqx_80276D2C_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t stackword4 = 0;
    uint32_t stackword5 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f31 = ctx->fpr[31];

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_80276BBC;

loc_80276BBC:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 40);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r30 = r3;
    r31 = r4;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8026FE38u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80276BE8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80276D28;
    }
}

loc_80276BEC:
{
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -14848));
    r0 = (r3 ^ -2147483648);
    stackword4 = r0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r0 = 1127219200;
    stackword5 = r0;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword5), static_cast<uint32_t>(stackword4));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
}

loc_80276C10:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_80276D10;
    }
}

loc_80276C14:
{
    r3 = r30;
    r4 = 185;
    ctx->lr = 0x80276C20u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80276C24:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80276C54;
    }
}

loc_80276C28:
{
    r3 = r30;
    r4 = 4;
    if constexpr (KnownRegArgsCpuCall<0x80272B14u>(&func_80272B14)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80272B14_B60 = func_80272B14_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80272B14_B60);
        r4 = static_cast<uint32_t>(regargs_result_80272B14_B60 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80272B14u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_80276C38:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80276C48;
    }
}

loc_80276C3C:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14872));
    f31.d = PpcFmulsInline(f31.d, f0.d);
    goto loc_80276D10;
}

loc_80276C48:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14868));
    f31.d = PpcFmulsInline(f31.d, f0.d);
    goto loc_80276D10;
}

loc_80276C54:
{
    r3 = r30;
    r4 = 186;
    ctx->lr = 0x80276C60u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80276C64:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80276C74;
    }
}

loc_80276C68:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14872));
    f31.d = PpcFmulsInline(f31.d, f0.d);
    goto loc_80276D10;
}

loc_80276C74:
{
    r3 = r30;
    r4 = 187;
    ctx->lr = 0x80276C80u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80276C84:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80276CB4;
    }
}

loc_80276C88:
{
    r3 = r30;
    r4 = 4;
    if constexpr (KnownRegArgsCpuCall<0x80272B14u>(&func_80272B14)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80272B14_12EA = func_80272B14_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80272B14_12EA);
        r4 = static_cast<uint32_t>(regargs_result_80272B14_12EA >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80272B14u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_80276C98:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80276CA8;
    }
}

loc_80276C9C:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14864));
    f31.d = PpcFmulsInline(f31.d, f0.d);
    goto loc_80276D10;
}

loc_80276CA8:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14860));
    f31.d = PpcFmulsInline(f31.d, f0.d);
    goto loc_80276D10;
}

loc_80276CB4:
{
    r3 = r30;
    r4 = 188;
    ctx->lr = 0x80276CC0u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80276CC4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80276CF4;
    }
}

loc_80276CC8:
{
    r3 = r30;
    r4 = 4;
    if constexpr (KnownRegArgsCpuCall<0x80272B14u>(&func_80272B14)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80272B14_1891 = func_80272B14_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80272B14_1891);
        r4 = static_cast<uint32_t>(regargs_result_80272B14_1891 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80272B14u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_80276CD8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80276CE8;
    }
}

loc_80276CDC:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14856));
    f31.d = PpcFmulsInline(f31.d, f0.d);
    goto loc_80276D10;
}

loc_80276CE8:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14852));
    f31.d = PpcFmulsInline(f31.d, f0.d);
    goto loc_80276D10;
}

loc_80276CF4:
{
    r3 = r30;
    r4 = 4;
    if constexpr (KnownRegArgsCpuCall<0x80272B14u>(&func_80272B14)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80272B14_1CE5 = func_80272B14_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80272B14_1CE5);
        r4 = static_cast<uint32_t>(regargs_result_80272B14_1CE5 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80272B14u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_80276D04:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80276D10;
    }
}

loc_80276D08:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14868));
    f31.d = PpcFmulsInline(f31.d, f0.d);
}

loc_80276D10:
{
    r3 = r30;
    f0.d = PPC_Fctiwz(f31.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 8), f0.d);
    r4 = fctiwzword0;
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    ctx->lr = 0x80276D28u;
    if constexpr (KnownRegArgsCpuCall<0x802768CCu>(&func_802768CC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802768CC_2176 = func_802768CC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_802768CC_2176;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802768CCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_80276D28:
{
    r0 = 40;
    addr_psqx_80276D2C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80276D2C_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 32));
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80276BBC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80276BBC_ra18_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001F gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x80000003 fpr_write=0x80000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80276BBC func_80276BBC preserves=true fpr_mask=0x00000000
