#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8045B200(CpuContext* ctx);
extern "C" uint64_t func_8045B200_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8045B7B0(CpuContext* ctx);
extern "C" uint64_t func_8045B7B0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8045B85C_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r6_mdest_0 = 0;
    uint32_t r6_mdest_1 = 0;
    uint32_t r6_mdest_2 = 0;
    uint32_t r6_mdest_3 = 0;
    uint32_t r6_mrot_0 = 0;
    uint32_t r6_mrot_1 = 0;
    uint32_t r6_mrot_2 = 0;
    uint32_t r6_mrot_3 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    uint32_t ctr = ctx->ctr;

    goto loc_8045B85C;

loc_8045B85C:
{
    MemoryAlias::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryAlias::FlatWriteRam32((r1 + 36), r0);
    r31 = r5;
    r30 = r3;
    MemoryAlias::FlatWriteRam32((r1 + 8), r4);
    r0 = MemoryAlias::FlatRead32((r3 + 4));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(10));
    r0 = (r0_rot_0 & 7);
}

loc_8045B888:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8045B898;
    }
}

loc_8045B88C:
{
    r0 = MemoryAlias::FlatRead8((r3 + 10));
}

loc_8045B894:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8045B8A8;
    }
}

loc_8045B898:
{
    r0 = 40;
    MemoryAlias::FlatWrite32((r13 + -16408), r0);
    r3 = -1;
    goto loc_8045BA08;
}

loc_8045B8A8:
{
    r0 = MemoryAlias::FlatRead32((r3 + 8));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_1 & 7);
}

loc_8045B8B4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8045B8E8;
    }
}

loc_8045B8B8:
{
    r4 = 0;
    ctx->lr = 0x8045B8C0u;
    if constexpr (KnownRegArgsCpuCall<0x8045B200u>(&func_8045B200)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_8045B200_D9E = func_8045B200_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8045B200_D9E);
        r4 = static_cast<uint32_t>(regargs_result_8045B200_D9E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[12] = r12;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8045B200u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
}

loc_8045B8C4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8045B8E8;
    }
}

loc_8045B8C8:
{
    r4 = 0;
    MemoryAlias::FlatWrite32((r30 + 40), r4);
    r0 = 1;
    r3 = -1;
    MemoryAlias::FlatWrite8((r30 + 10), static_cast<uint8_t>(r0));
    r0 = 40;
    MemoryAlias::FlatWrite32((r13 + -16408), r0);
    goto loc_8045BA08;
}

loc_8045B8E8:
{
}

loc_8045B8EC:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(1))) {
        goto loc_8045B908;
    }
}

loc_8045B8F0:
{
    r3 = r30;
    r31 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8045B7B0u>(&func_8045B7B0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        const auto regargs_result_8045B7B0_16D6 = func_8045B7B0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8045B7B0_16D6);
        r4 = static_cast<uint32_t>(regargs_result_8045B7B0_16D6 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8045B7B0u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        ctr = ctx->ctr;
    }
    r0 = MemoryAlias::FlatRead32((r1 + 8));
    r0 = (r0 + r3);
    MemoryAlias::FlatWriteRam32((r1 + 8), r0);
}

loc_8045B908:
{
}

loc_8045B90C:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(2))) {
        goto loc_8045B98C;
    }
}

loc_8045B910:
{
    r0 = MemoryAlias::FlatRead32((r30 + 4));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
    r0 = (r0_rot_2 & 7);
}

loc_8045B91C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(3))) {
        goto loc_8045B98C;
    }
}

loc_8045B920:
{
    r6 = MemoryAlias::FlatRead32((r30 + 8));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(3));
    r3 = (r3_rot_1 & 7);
    r0 = (r3 + -2);
}

loc_8045B930:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_8045B98C;
    }
}

loc_8045B934:
{
    r0 = MemoryAlias::FlatRead32((r1 + 8));
    r5 = MemoryAlias::FlatRead32((r30 + 24));
}

loc_8045B940:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r5))) {
        goto loc_8045B950;
    }
}

loc_8045B944:
{
    r3 = MemoryAlias::FlatRead32((r30 + 52));
}

loc_8045B94C:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r3))) {
        goto loc_8045B960;
    }
}

loc_8045B950:
{
    r0 = MemoryAlias::FlatRead32((r30 + 8));
    r0 = (r0 & 536870911);
    MemoryAlias::FlatWrite32((r30 + 8), r0);
    goto loc_8045B998;
}

loc_8045B960:
{
    r4 = MemoryAlias::FlatRead32((r30 + 28));
    r3 = (r0 - r3);
    r0 = 2;
    r3 = (r4 + r3);
    MemoryAlias::FlatWrite32((r30 + 36), r3);
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r6_mrot_1 = (r6_rot_1 & -536870912);
    r6_mdest_1 = (r6 & 536870911);
    r6 = (r6_mdest_1 | r6_mrot_1);
    r0 = MemoryAlias::FlatRead32((r1 + 8));
    r0 = (r5 - r0);
    MemoryAlias::FlatWrite32((r30 + 40), r0);
    MemoryAlias::FlatWrite32((r30 + 8), r6);
    goto loc_8045B998;
}

loc_8045B98C:
{
    r0 = MemoryAlias::FlatRead32((r30 + 8));
    r0 = (r0 & 536870911);
    MemoryAlias::FlatWrite32((r30 + 8), r0);
}

loc_8045B998:
{
    r0 = MemoryAlias::FlatRead32((r30 + 8));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_5 & 7);
}

loc_8045B9A0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8045BA04;
    }
}

loc_8045B9A4:
{
    r12 = MemoryAlias::FlatRead32((r30 + 56));
}

loc_8045B9AC:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_8045B9F0;
    }
}

loc_8045B9B0:
{
    r5 = r31;
    r4 = (r1 + 8);
    r3 = MemoryAlias::FlatRead32(r30);
    r6 = MemoryAlias::FlatRead32((r30 + 72));
    ctr = r12;
    ctx->lr = 0x8045B9C8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    ctr = ctx->ctr;
}

loc_8045B9CC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8045B9F0;
    }
}

loc_8045B9D0:
{
    r4 = 0;
    MemoryAlias::FlatWrite32((r30 + 40), r4);
    r0 = 1;
    r3 = -1;
    MemoryAlias::FlatWrite8((r30 + 10), static_cast<uint8_t>(r0));
    r0 = 40;
    MemoryAlias::FlatWrite32((r13 + -16408), r0);
    goto loc_8045BA08;
}

loc_8045B9F0:
{
    r3 = 0;
    MemoryAlias::FlatWrite8((r30 + 9), static_cast<uint8_t>(r3));
    r0 = MemoryAlias::FlatRead32((r1 + 8));
    MemoryAlias::FlatWrite32((r30 + 24), r0);
    MemoryAlias::FlatWrite32((r30 + 40), r3);
}

loc_8045BA04:
{
    r3 = 0;
}

loc_8045BA08:
{
    r0 = MemoryAlias::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8045B85C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8045B85C_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8045B85C func_8045B85C preserves=true fpr_mask=0x00000000
