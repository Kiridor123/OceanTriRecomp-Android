#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8055C6B8(CpuContext* ctx);
extern "C" uint64_t func_8055C6B8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_8053D044_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mdest_3 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_mrot_3 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
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

    goto loc_8053D044;

loc_8053D044:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = r3;
    r3 = (r3 + 76);
    ctx->lr = 0x8053D06Cu;
    if constexpr (KnownRegArgsCpuCall<0x8055C6B8u>(&func_8055C6B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_8055C6B8_878 = func_8055C6B8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8055C6B8_878);
        r4 = static_cast<uint32_t>(regargs_result_8055C6B8_878 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
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
        InvokeDirectCpu<0x8055C6B8u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
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
    r0 = MemoryInline::FlatRead8((r13 + -16600));
    r31 = r3;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8053D0A4;
    }
}

loc_8053D07C:
{
    r3 = (r13 + -16596);
    // inline leaf 0x8056FA08 (4 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r3);
    r0 = (r0 & -225);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8056FA08
    r4 = 0x80570000u;
    r5 = 0x80790000u;
    r4 = (r4 + -1512);
    r3 = (r13 + -16596);
    r5 = (r5 + 9888);
    // inline leaf 0x80456D24 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r13 + -16424));
    MemoryInline::FlatWriteRam32(r5, r0);
    MemoryInline::FlatWriteRam32((r5 + 4), r4);
    MemoryInline::FlatWriteRam32((r5 + 8), r3);
    MemoryInline::FlatWrite32((r13 + -16424), r5);
    // end of inlined leaf 0x80456D24
    r0 = 1;
    MemoryInline::FlatWrite8((r13 + -16600), static_cast<uint8_t>(r0));
}

loc_8053D0A4:
{
    r0 = MemoryInline::FlatRead8((r13 + -16596));
    r28 = (r13 + -16596);
    r29 = 0;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(26));
    r0 = (r0_rot_0 & 1);
}

loc_8053D0B4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8053D0C4;
    }
}

loc_8053D0B8:
{
    r0 = MemoryInline::FlatRead8(r28);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_1 & 1);
}

loc_8053D0C0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8053D0C8;
    }
}

loc_8053D0C4:
{
    r29 = 1;
}

loc_8053D0C8:
{
    r0 = MemoryInline::FlatRead8(r28);
    r3 = 0x80790000u;
    r3 = (r3 + 12836);
    r4 = 0;
    r0 = (r0 & -33);
    r5 = 0;
    MemoryInline::FlatWrite8(r28, static_cast<uint8_t>(r0));
    // inline leaf 0x8056CDCC (3 guest instruction(s))
    MemoryInline::FlatWriteRam32((r3 + 56), r4);
    MemoryInline::FlatWriteRam32((r3 + 60), r5);
    // end of inlined leaf 0x8056CDCC
}

loc_8053D0EC:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8053D184;
    }
}

loc_8053D0F0:
{
    r3 = MemoryInline::FlatRead8(r28);
    r4 = 0;
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(26));
    r0 = (r0_rot_4 & 1);
}

loc_8053D0FC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8053D108;
    }
}

loc_8053D100:
{
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(27));
    r0 = (r0_rot_5 & 1);
}

loc_8053D104:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8053D10C;
    }
}

loc_8053D108:
{
    r4 = 1;
}

loc_8053D10C:
{
}

loc_8053D110:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8053D184;
    }
}

loc_8053D114:
{
    r0 = MemoryInline::FlatRead32((r30 + 40));
    r5 = MemoryInline::FlatRead32((r30 + 40));
    r4 = (r0 & -16);
    r4 = (r4 & -129);
    r0 = (r5 & -16);
}

loc_8053D12C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r4))) {
        goto loc_8053D158;
    }
}

loc_8053D130:
{
    r3 = MemoryInline::FlatRead32((r30 + 60));
    r0 = (r4 & -16);
    r0_mrot_1 = (r5 & 15);
    r0_mdest_1 = (r0 & -16);
    r0 = (r0_mdest_1 | r0_mrot_1);
}

loc_8053D140:
{
    MemoryInline::FlatWrite32((r30 + 40), r0);
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8053D158;
    }
}

loc_8053D148:
{
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 104));
    ctr = r12;
    ctx->lr = 0x8053D158u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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

loc_8053D158:
{
    r0 = MemoryInline::FlatRead8((r30 + 296));
}

loc_8053D160:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8053D184;
    }
}

loc_8053D164:
{
    r0 = 0;
    r3 = MemoryInline::FlatRead32((r30 + 292));
    MemoryInline::FlatWrite8((r30 + 296), static_cast<uint8_t>(r0));
    r4 = 5;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x8053D184u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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

loc_8053D184:
{
    r3 = r31;
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
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

extern "C" void func_8053D044(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8053D044_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8053D044 func_8053D044 preserves=true fpr_mask=0x00000000
