#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8047ABD0(CpuContext* ctx);
extern "C" uint64_t func_8047ABD0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8047ABF0(CpuContext* ctx);
extern "C" uint64_t func_8047ABF0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_80492BC0_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r5_addr_4 = 0;
    uint32_t r5_addr_5 = 0;
    uint32_t r5_addr_6 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
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

    MKW_GUEST_ENTER(0x80492BC0u);
    goto loc_80492BC0;

loc_80492BC0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r5 = 0x80740000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = 4;
    r5 = (r5 + -6152);
    r31 = 0;
    r30 = r4;
    r4 = 0;
    ctr = r0;
}

loc_80492BF0:
{
    r0 = (r4 & 255);
    r0 = (r0 * 52);
    r6 = (r5 + r0);
    r5_addr_2 = (r5 + r0);
    r0 = MemoryInline::FlatRead8(r5_addr_2);
}

loc_80492C04:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80492C2C;
    }
}

loc_80492C08:
{
    r0 = MemoryInline::FlatRead8((r6 + 16));
}

loc_80492C10:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80492C2C;
    }
}

loc_80492C14:
{
    r0 = MemoryInline::FlatRead16((r6 + 20));
}

loc_80492C1C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80492CF4;
    }
}

loc_80492C20:
{
    r0 = MemoryInline::FlatRead16((r6 + 22));
}

loc_80492C28:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80492CF4;
    }
}

loc_80492C2C:
{
    r4 = (r4 + 1);
    r0 = (r4 & 255);
    r0 = (r0 * 52);
    r6 = (r5 + r0);
    r5_addr_3 = (r5 + r0);
    r0 = MemoryInline::FlatRead8(r5_addr_3);
}

loc_80492C44:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80492C6C;
    }
}

loc_80492C48:
{
    r0 = MemoryInline::FlatRead8((r6 + 16));
}

loc_80492C50:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80492C6C;
    }
}

loc_80492C54:
{
    r0 = MemoryInline::FlatRead16((r6 + 20));
}

loc_80492C5C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80492CF4;
    }
}

loc_80492C60:
{
    r0 = MemoryInline::FlatRead16((r6 + 22));
}

loc_80492C68:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80492CF4;
    }
}

loc_80492C6C:
{
    r4 = (r4 + 1);
    r0 = (r4 & 255);
    r0 = (r0 * 52);
    r6 = (r5 + r0);
    r5_addr_4 = (r5 + r0);
    r0 = MemoryInline::FlatRead8(r5_addr_4);
}

loc_80492C84:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80492CAC;
    }
}

loc_80492C88:
{
    r0 = MemoryInline::FlatRead8((r6 + 16));
}

loc_80492C90:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80492CAC;
    }
}

loc_80492C94:
{
    r0 = MemoryInline::FlatRead16((r6 + 20));
}

loc_80492C9C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80492CF4;
    }
}

loc_80492CA0:
{
    r0 = MemoryInline::FlatRead16((r6 + 22));
}

loc_80492CA8:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80492CF4;
    }
}

loc_80492CAC:
{
    r4 = (r4 + 1);
    r0 = (r4 & 255);
    r0 = (r0 * 52);
    r6 = (r5 + r0);
    r5_addr_5 = (r5 + r0);
    r0 = MemoryInline::FlatRead8(r5_addr_5);
}

loc_80492CC4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80492CEC;
    }
}

loc_80492CC8:
{
    r0 = MemoryInline::FlatRead8((r6 + 16));
}

loc_80492CD0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80492CEC;
    }
}

loc_80492CD4:
{
    r0 = MemoryInline::FlatRead16((r6 + 20));
}

loc_80492CDC:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80492CF4;
    }
}

loc_80492CE0:
{
    r0 = MemoryInline::FlatRead16((r6 + 22));
}

loc_80492CE8:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80492CF4;
    }
}

loc_80492CEC:
{
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80492BF0;
    }
}

loc_80492CF4:
{
    r0 = (r4 & 255);
}

loc_80492CFC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(16))) {
        goto loc_80492D14;
    }
}

loc_80492D00:
{
    r0 = (r0 * 52);
    r4 = 0x80740000u;
    r4 = (r4 + -6152);
    r31 = (r4 + r0);
    r31 = (r31 + 16);
}

loc_80492D14:
{
}

loc_80492D18:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_80492D4C;
    }
}

loc_80492D1C:
{
    r4 = 0x80740000u;
    r4 = (r4 + -6152);
    r0 = MemoryInline::FlatRead8((r4 + 1025));
}

loc_80492D2C:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(2))) {
        goto loc_80492DA0;
    }
}

loc_80492D30:
{
    r4 = 0x80610000u;
    r6 = 1966080;
    r5 = r3;
    r3 = (r6 + 1);
    r4 = (r4 + 25344);
    ctx->lr = 0x80492D48u;
    if constexpr (KnownRegArgsCpuCall<0x8047ABD0u>(&func_8047ABD0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_8047ABD0_18A9 = func_8047ABD0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8047ABD0_18A9);
        r4 = static_cast<uint32_t>(regargs_result_8047ABD0_18A9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8047ABD0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
    goto loc_80492DA0;
}

loc_80492D4C:
{
    r4 = 0x80740000u;
    r4 = (r4 + -6152);
    r0 = MemoryInline::FlatRead8((r4 + 1025));
}

loc_80492D5C:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(4))) {
        goto loc_80492D7C;
    }
}

loc_80492D60:
{
    r4 = 0x80610000u;
    r7 = 1966080;
    r5 = r3;
    r6 = r30;
    r3 = (r7 + 3);
    r4 = (r4 + 25400);
    ctx->lr = 0x80492D7Cu;
    if constexpr (KnownRegArgsCpuCall<0x8047ABF0u>(&func_8047ABF0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_8047ABF0_2104 = func_8047ABF0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8047ABF0_2104);
        r4 = static_cast<uint32_t>(regargs_result_8047ABF0_2104 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8047ABF0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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

loc_80492D7C:
{
}

loc_80492D80:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_80492D94;
    }
}

loc_80492D84:
{
    r0 = MemoryInline::FlatRead8((r31 + 1));
    r0 = (r0 | 32);
    MemoryInline::FlatWrite8((r31 + 1), static_cast<uint8_t>(r0));
    goto loc_80492DA0;
}

loc_80492D94:
{
    r0 = MemoryInline::FlatRead8((r31 + 1));
    r0 = (r0 & -33);
    MemoryInline::FlatWrite8((r31 + 1), static_cast<uint8_t>(r0));
}

loc_80492DA0:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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

extern "C" void func_80492BC0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80492BC0_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000027FF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80492BC0 func_80492BC0 preserves=true fpr_mask=0x00000000
