#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8012D934(CpuContext* ctx);
extern "C" uint64_t func_8012D934_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8012F368(CpuContext* ctx);
extern "C" uint64_t func_8012F368_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_8011ED9C_ra38_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1)
{
    uint32_t addr_psqx_8011EEC0_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t stackword6 = 0;
    uint32_t stackword7 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f31 = ctx->fpr[31];

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    MKW_GUEST_ENTER(0x8011ED9Cu);
    goto loc_8011ED9C;

loc_8011ED9C:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r28 = r3;
    r29 = r4;
    r30 = r5;
    r31 = r6;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
}

loc_8011EDD8:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_8011EEB8;
    }
}

loc_8011EDDC:
{
    f31.d = MemoryInline::FlatReadFloat32((r3 + 1976));
    r4 = 1;
    ctx->lr = 0x8011EDE8u;
    if constexpr (KnownRegArgsCpuCall<0x8012F368u>(&func_8012F368)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8012F368_89F = func_8012F368_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8012F368_89F);
        r4 = static_cast<uint32_t>(regargs_result_8012F368_89F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8012F368u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_8011EDEC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8011EE28;
    }
}

loc_8011EDF0:
{
    r0 = MemoryInline::FlatRead32((r28 + 2044));
    r0 = (r0 & r31);
}

loc_8011EDFC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8011EE28;
    }
}

loc_8011EE00:
{
    r0 = (r30 & 255);
}

loc_8011EE08:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8011EE18;
    }
}

loc_8011EE0C:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28288));
    f31.d = PpcFmulsInline(f31.d, f0.d);
    goto loc_8011EE20;
}

loc_8011EE18:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28284));
    f31.d = PpcFmulsInline(f31.d, f0.d);
}

loc_8011EE20:
{
    MemoryInline::FlatWrite32((r28 + 2044), r31);
    goto loc_8011EE78;
}

loc_8011EE28:
{
    r3 = r28;
    ctx->lr = 0x8011EE30u;
    if constexpr (KnownRegArgsCpuCall<0x8012D934u>(&func_8012D934)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8012D934_EB8 = func_8012D934_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8012D934_EB8);
        r4 = static_cast<uint32_t>(regargs_result_8012D934_EB8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8012D934u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_8011EE34:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8011EE44;
    }
}

loc_8011EE38:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28280));
    f31.d = PpcFmulsInline(f31.d, f0.d);
    goto loc_8011EE78;
}

loc_8011EE44:
{
    r3 = r28;
    r4 = 4;
    // inline leaf 0x80132330 (7 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2382));
    r0 = (r4 & 255);
    r3 = (r3 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x80132330
}

loc_8011EE54:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8011EE78;
    }
}

loc_8011EE58:
{
    r0 = MemoryInline::FlatRead8((r28 + 1992));
}

loc_8011EE60:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(20))) {
        goto loc_8011EE70;
    }
}

loc_8011EE64:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28280));
    f31.d = PpcFmulsInline(f31.d, f0.d);
    goto loc_8011EE78;
}

loc_8011EE70:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28276));
    f31.d = PpcFmulsInline(f31.d, f0.d);
}

loc_8011EE78:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r29)));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -28304));
    r0 = (r0 ^ -2147483648);
    stackword6 = r0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r0 = 1127219200;
    stackword7 = r0;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword7), static_cast<uint32_t>(stackword6));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f0.d, f31.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r29 = fctiwzword0;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r29)));
}

loc_8011EEB0:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_8011EEB8;
    }
}

loc_8011EEB4:
{
    r29 = 1;
}

loc_8011EEB8:
{
    r3 = r29;
    r0 = 56;
    addr_psqx_8011EEC0_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8011EEC0_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 48));
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8011ED9C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8011ED9C_ra38_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007F gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x80000003 fpr_write=0x80000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8011ED9C func_8011ED9C preserves=true fpr_mask=0x00000000
