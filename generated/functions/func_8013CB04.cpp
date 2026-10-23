#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80128C5C(CpuContext* ctx);
extern "C" uint64_t func_80128C5C_ra38_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_8012A6BC(CpuContext* ctx);
extern "C" uint64_t func_8012A6BC_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8012B3E4(CpuContext* ctx);
extern "C" uint64_t func_8012B3E4_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8013ABD8(CpuContext* ctx);
extern "C" uint64_t func_8013ABD8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8013CB04_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;

    goto loc_8013CB04;

loc_8013CB04:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 2457), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r3 + 2468), r0);
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWrite8((r3 + 2456), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    r5 = (r4 + 2);
    MemoryInline::FlatWrite8((r3 + 2458), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead8((r3 + 2396));
    MemoryInline::FlatWrite8((r3 + 2460), static_cast<uint8_t>(r4));
    r0 = MemoryInline::FlatRead8((r3 + 2397));
    MemoryInline::FlatWrite8((r3 + 2461), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r3 + 2464), r5);
    // inline leaf 0x8013A8E8 (12 guest instruction(s))
}

loc_inl0_0x8013A8E8:
{
    r3 = MemoryInline::FlatRead32((r3 + 2388));
}

loc_inl0_0x8013A8F0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x8013A8FC;
    }
}

loc_inl0_0x8013A8F4:
{
    r3 = 0;
    goto loc_inl0_cont_8013A8E8;
}

loc_inl0_0x8013A8FC:
{
    r0 = (r4 & 255);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
}

loc_inl0_cont_8013A8E8:
{
    // end of inlined leaf 0x8013A8E8
}

loc_8013CB54:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8013CBE4;
    }
}

loc_8013CB58:
{
    r3 = r31;
    r4 = 8;
    r5 = MemoryInline::FlatRead8((r31 + 2456));
    r6 = 255;
    ctx->lr = 0x8013CB6Cu;
    if constexpr (KnownRegArgsCpuCall<0x8012B3E4u>(&func_8012B3E4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8012B3E4_F74 = func_8012B3E4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8012B3E4_F74);
        r4 = static_cast<uint32_t>(regargs_result_8012B3E4_F74 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8012B3E4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r5 = MemoryInline::FlatRead32((r31 + 2468));
    r3 = r31;
    r4 = 2;
}

loc_8013CB7C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8013CB98;
    }
}

loc_8013CB80:
{
    r5 = MemoryInline::FlatRead32((r5 + 4));
    r0 = MemoryInline::FlatRead8((r31 + 898));
    r0 = (r0 * 12);
    r5 = (r5 + r0);
    r5 = MemoryInline::FlatRead8((r5 + 8));
    goto loc_8013CB9C;
}

loc_8013CB98:
{
    r5 = 0;
}

loc_8013CB9C:
{
    r5 = (r5 & 255);
    ctx->lr = 0x8013CBA4u;
    if constexpr (KnownRegArgsCpuCall<0x8013ABD8u>(&func_8013ABD8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8013ABD8_179F = func_8013ABD8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8013ABD8_179F);
        r4 = static_cast<uint32_t>(regargs_result_8013ABD8_179F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8013ABD8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_8013CBA8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8013CBE4;
    }
}

loc_8013CBAC:
{
    r3 = r31;
    r4 = 0;
    ctx->lr = 0x8013CBB8u;
    if constexpr (KnownRegArgsCpuCall<0x80128C5Cu>(&func_80128C5C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80128C5C_1B59 = func_80128C5C_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_80128C5C_1B59);
        r4 = static_cast<uint32_t>(regargs_result_80128C5C_1B59 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x80128C5Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    r3 = MemoryInline::FlatRead32((r31 + 2468));
}

loc_8013CBC0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8013CBE4;
    }
}

loc_8013CBC4:
{
    r3 = MemoryInline::FlatRead8(r3);
    r0 = (r3 + -252);
}

loc_8013CBD0:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(3))) {
        goto loc_8013CC34;
    }
}

loc_8013CBD4:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 505), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r31 + 506), static_cast<uint8_t>(r0));
    goto loc_8013CC34;
}

loc_8013CBE4:
{
    r3 = r31;
    r4 = 3;
    r5 = MemoryInline::FlatRead8((r31 + 2396));
    // inline leaf 0x80140B5C (6 guest instruction(s))
}

loc_inl1_0x80140B5C:
{
    r6 = r3;
    r3 = (r4 & 255);
    r4 = r5;
    r5 = MemoryInline::FlatRead8((r6 + 3));
}

loc_inl1_0x80140B70:
{
}

loc_inl1_cont_80140B5C:
{
    // end of inlined leaf 0x80140B5C
    r3 = r31;
    r4 = 0;
    r5 = MemoryInline::FlatRead8((r31 + 3));
    // inline leaf 0x80140B74 (4 guest instruction(s))
}

loc_inl2_0x80140B74:
{
    r3 = (r4 & 255);
    r4 = r5;
}

loc_inl2_0x80140B80:
{
}

loc_inl2_cont_80140B74:
{
    // end of inlined leaf 0x80140B74
    r0 = MemoryInline::FlatRead8((r31 + 2551));
}

loc_8013CC0C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_8013CC1C;
    }
}

loc_8013CC10:
{
    r3 = r31;
    r4 = 0;
    ctx->lr = 0x8013CC1Cu;
    if constexpr (KnownRegArgsCpuCall<0x8012A6BCu>(&func_8012A6BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8012A6BC_261C = func_8012A6BC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8012A6BC_261C);
        r4 = static_cast<uint32_t>(regargs_result_8012A6BC_261C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8012A6BCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
}

loc_8013CC1C:
{
    r0 = MemoryInline::FlatRead8((r31 + 2460));
    MemoryInline::FlatWrite8((r31 + 2396), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r31 + 2461));
    MemoryInline::FlatWrite8((r31 + 2397), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r31 + 2464));
    MemoryInline::FlatWrite32((r31 + 2392), r0);
}

loc_8013CC34:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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

extern "C" void func_8013CB04(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8013CB04_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xE0003FFF fpr_write=0xE0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8013CB04 func_8013CB04 preserves=true fpr_mask=0x00000000
