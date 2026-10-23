#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8012F61C(CpuContext* ctx);
extern "C" uint64_t func_8012F61C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_80139088_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;

    goto loc_80139088;

loc_80139088:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    // inline leaf 0x80131E18 (3 guest instruction(s))
    r0 = 1;
    MemoryInline::FlatWrite16((r3 + 2072), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x80131E18
    r3 = r31;
    // inline leaf 0x80131E58 (3 guest instruction(s))
    r0 = 1;
    MemoryInline::FlatWrite16((r3 + 2242), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x80131E58
    r3 = MemoryInline::FlatRead8((r31 + 5));
}

loc_801390B0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801390C0;
    }
}

loc_801390B4:
{
}

loc_801390B8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_801390F8;
    }
}

loc_801390BC:
{
    goto loc_8013914C;
}

loc_801390C0:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r31 + 5), static_cast<uint8_t>(r0));
    r3 = r31;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -28000));
    r4 = 0;
    // inline leaf 0x8012FD28 (8 guest instruction(s))
}

loc_inl2_0x8012FD28:
{
    MemoryInline::FlatWriteFloat32((r3 + 472), f1.d);
    MemoryInline::FlatWrite16((r3 + 476), static_cast<uint16_t>(r4));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
}

loc_inl2_0x8012FD38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x8012FD3C:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 468), f0.d);
    goto loc_inl2_cont_8012FD28;
}

loc_inl2_return:
{
}

loc_inl2_cont_8012FD28:
{
    // end of inlined leaf 0x8012FD28
    r3 = r31;
    r4 = 1;
    r5 = 0;
    r6 = 0;
    ctx->lr = 0x801390ECu;
    if constexpr (KnownRegArgsCpuCall<0x8012F61Cu>(&func_8012F61C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        const auto regargs_result_8012F61C_CA1 = func_8012F61C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F61C_CA1);
        r4 = static_cast<uint32_t>(regargs_result_8012F61C_CA1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8012F61Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 1), static_cast<uint8_t>(r0));
    goto loc_8013914C;
}

loc_801390F8:
{
    r0 = MemoryInline::FlatRead16((r31 + 24));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80139100:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_8013914C;
    }
}

loc_80139104:
{
    r3 = r31;
    // inline leaf 0x8012D204 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 501));
    // end of inlined leaf 0x8012D204
}

loc_80139110:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8013914C;
    }
}

loc_80139114:
{
    r0 = MemoryInline::FlatRead8((r31 + 487));
}

loc_8013911C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80139144;
    }
}

loc_80139120:
{
    r0 = MemoryInline::FlatRead8((r31 + 12));
}

loc_80139128:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_80139138;
    }
}

loc_8013912C:
{
    r0 = 4;
    MemoryInline::FlatWrite8((r31 + 23), static_cast<uint8_t>(r0));
    goto loc_8013914C;
}

loc_80139138:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 23), static_cast<uint8_t>(r0));
    goto loc_8013914C;
}

loc_80139144:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r31 + 23), static_cast<uint8_t>(r0));
}

loc_8013914C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80139088(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80139088_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003F7F gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xF0003FFF fpr_write=0xF0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80139088 func_80139088 preserves=true fpr_mask=0x00000000
