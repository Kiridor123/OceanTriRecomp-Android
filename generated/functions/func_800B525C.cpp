#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800B52EC(CpuContext* ctx);
extern "C" uint32_t func_800B52EC_ra0_6_8_0(CpuContext*, double, double);
extern "C" void func_800B5310(CpuContext* ctx);
extern "C" uint32_t func_800B5310_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_800B52EC_statefree(PPC_FPR, PPC_FPR);

extern "C" uint32_t func_800B525C_ra38_6_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2)
{
    uint32_t addr_psqx_800B52CC_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f31 = ctx->fpr[31];

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_800B525C;

loc_800B525C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 16), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 24);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r30 = r4;
    f31.d = f1.d;
    r31 = r5;
    // inline leaf 0x800B5310 (9 guest instruction(s))
}

loc_inl0_0x800B5310:
{
    f1.d = MemoryInline::FlatReadFloat32(r3);
    f2.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f3.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl0_0x800B5320:
{
    r3 = -872349696;
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f3.d));
}

loc_inl0_cont_800B5310:
{
    // end of inlined leaf 0x800B5310
    r3 = r31;
    // inline leaf 0x800B52FC (5 guest instruction(s))
    r3 = (r3 & 1);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x800B52FC
}

loc_800B5294:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800B52A4;
    }
}

loc_800B5298:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -31100));
    f2.d = f31.d;
    // inline leaf 0x800B52EC (4 guest instruction(s))
    r3 = -872349696;
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    // end of inlined leaf 0x800B52EC
}

loc_800B52A4:
{
    r3 = r30;
    if constexpr (KnownRegArgsCpuCall<0x800B5310u>(&func_800B5310)) {
        ctx->gpr[1] = r1;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        const auto regargs_result_800B5310_C33 = func_800B5310_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800B5310_C33;
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x800B5310u>(ctx);
        r3 = ctx->gpr[3];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    r3 = r31;
    // inline leaf 0x800B52FC (5 guest instruction(s))
    r3 = (r3 & 1);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x800B52FC
}

loc_800B52B8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800B52C8;
    }
}

loc_800B52BC:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -31088));
    f2.d = f31.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800B52ECu) && KnownTranslatedCpuCall<0x800B52ECu>::kAvailable && !KnownTranslatedCpuCall<0x800B52ECu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800B52ECu>()) {
        const auto state_free_result_800B52EC_112A = func_800B52EC_statefree(f1, f2);
        r3 = static_cast<uint32_t>(state_free_result_800B52EC_112A);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[31] = f31;
        InvokeDirectCpu<0x800B52ECu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f31 = ctx->fpr[31];
    }
}

loc_800B52C8:
{
    r0 = 24;
    addr_psqx_800B52CC_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800B52CC_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 16));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    return r3;
}

}

extern "C" void func_800B525C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_800B525C_ra38_6_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000003E gpr_write=0x0000000B gpr_return=0x00000008 fpr_read=0x80000006 fpr_write=0x8000000E fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800B525C func_800B525C preserves=true fpr_mask=0x00000000
