#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8005001C(CpuContext* ctx);
extern "C" double func_8005001C_ra18_0_0_2(CpuContext*, uint32_t, uint32_t);
extern "C" void func_803A8844(CpuContext* ctx);
extern "C" uint32_t func_803A8844_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_803A88BC(CpuContext* ctx);
extern "C" uint32_t func_803A88BC_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_803A8FC4(CpuContext* ctx);
extern "C" uint32_t func_803A8FC4_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_802B4B20_ra38_1f0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    ctx->fpr[4].d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;
    uint32_t ctr = ctx->ctr;

    goto loc_802B4B20;

loc_802B4B20:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r30 = r3;
    r3 = (r1 + 8);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r31 = 0;
    // inline leaf 0x802AFCD8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3013));
    // end of inlined leaf 0x802AFCD8
    r0 = (r3 & 255);
}

loc_802B4B58:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_802B4B6C;
    }
}

loc_802B4B5C:
{
}

loc_802B4B60:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(16))) {
        goto loc_802B4B6C;
    }
}

loc_802B4B64:
{
}

loc_802B4B68:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(10))) {
        goto loc_802B4CA0;
    }
}

loc_802B4B6C:
{
    ctx->lr = 0x802B4B70u;
    if constexpr (KnownRegArgsCpuCall<0x803A88BCu>(&func_803A88BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_803A88BC_A7B = func_803A88BC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803A88BC_A7B;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803A88BCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r29 = r3;
    ctx->lr = 0x802B4B78u;
    if constexpr (KnownRegArgsCpuCall<0x803A8844u>(&func_803A8844)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_803A8844_D27 = func_803A8844_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803A8844_D27;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803A8844u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r29 = (r29 - r3);
    r3 = 458162176;
    r0 = (r3 + -32331);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r29))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 5);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    r0 = (r0 + r3);
    r28 = (r0 & 65535);
    r3 = 0;
    ctx->lr = 0x802B4BA0u;
    if constexpr (KnownRegArgsCpuCall<0x803A8FC4u>(&func_803A8FC4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_803A8FC4_116B = func_803A8FC4_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803A8FC4_116B;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803A8FC4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (r3 & 255);
    r28 = (r28 + r0);
    r3 = MemoryInline::FlatRead16((r30 + 12252));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r3 = MH3_TickLoad(r3, 2150321064);
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r30 + 12252), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_802B4BBC:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_802B4CA0;
    }
}

loc_802B4BC0:
{
    r0 = (r29 & 64);
}

loc_802B4BC8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(64))) {
        goto loc_802B4C98;
    }
}

loc_802B4BCC:
{
    r0 = (r29 & 48);
}

loc_802B4BD4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802B4C8C;
    }
}

loc_802B4BD8:
{
    ctx->lr = 0x802B4BDCu;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x803C4878u>(ctx);
    r3 = ctx->gpr[3];
}

loc_802B4BE0:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_802B4CA0;
    }
}

loc_802B4BE4:
{
    r3 = 0x805D0000u;
    r29 = (r3 + 504);
    goto loc_802B4C10;
}

loc_802B4BF0:
{
    // inline leaf 0x802AFCD8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3013));
    // end of inlined leaf 0x802AFCD8
    r3 = (r3 & 255);
    r0 = MemoryInline::FlatRead8(r29);
}

loc_802B4C00:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_802B4C0C;
    }
}

loc_802B4C04:
{
    r31 = MemoryInline::FlatRead32((r29 + 4));
    goto loc_802B4C1C;
}

loc_802B4C0C:
{
    r29 = (r29 + 8);
}

loc_802B4C10:
{
    r0 = MemoryInline::FlatRead8(r29);
}

loc_802B4C18:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(255))) {
        goto loc_802B4BF0;
    }
}

loc_802B4C1C:
{
}

loc_802B4C20:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_802B4C28;
    }
}

loc_802B4C24:
{
    goto loc_802B4CA0;
}

loc_802B4C28:
{
    r29 = (r28 & 65535);
    goto loc_802B4C74;
}

loc_802B4C30:
{
    r4 = MemoryInline::FlatRead32((r31 + 4));
    r3 = MemoryInline::FlatRead8((r31 + 1));
    r0 = PPC_Divw(static_cast<int32_t>(r29), static_cast<int32_t>(r3));
    r0 = (r0 * r3);
    r0 = (r29 - r0);
    r0 = (r0 * 12);
    r4 = (r4 + r0);
    r3 = (r1 + 8);
    if constexpr (KnownRegArgsCpuCall<0x8005001Cu>(&func_8005001C)) {
        ctx->gpr[1] = r1;
        const auto regargs_result_8005001C_1D76 = func_8005001C_ra18_0_0_2(ctx, r3, r4);
        f1.d = regargs_result_8005001C_1D76;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x8005001Cu>(ctx);
        f1 = ctx->fpr[1];
    }
    r3 = (r1 + 8);
    r4 = MemoryInline::FlatRead8(r31);
    r5 = 140;
    r6 = MemoryInline::FlatRead32((r13 + -17088));
    r12 = MemoryInline::FlatRead32((r6 + 128));
    ctr = r12;
    ctx->lr = 0x802B4C70u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    f1 = ctx->fpr[1];
    ctr = ctx->ctr;
    r31 = (r31 + 8);
}

loc_802B4C74:
{
    r0 = MemoryInline::FlatRead8(r31);
}

loc_802B4C7C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(255))) {
        goto loc_802B4C30;
    }
}

loc_802B4C80:
{
    r0 = 300;
    MemoryInline::FlatWrite16((r30 + 12252), static_cast<uint16_t>(r0));
    goto loc_802B4CA0;
}

loc_802B4C8C:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r30 + 12252), static_cast<uint16_t>(r0));
    goto loc_802B4CA0;
}

loc_802B4C98:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r30 + 12252), static_cast<uint16_t>(r0));
}

loc_802B4CA0:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802B4B20(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802B4B20_ra38_1f0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FF1 fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802B4B20 func_802B4B20 preserves=true fpr_mask=0x00000000
