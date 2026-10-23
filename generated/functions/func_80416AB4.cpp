#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80456C40(CpuContext* ctx);
extern "C" uint64_t func_80456C40_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_80416AB4_ra38_1e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4)
{
    uint32_t cr0_0 = 0;
    uint32_t r28_rot_0 = 0;
    uint32_t r28_rot_1 = 0;
    uint32_t r28_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;

    goto loc_80416AB4;

loc_80416AB4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = r3;
    r31 = r4;
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWrite32((r3 + 11548), r0);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite32((r3 + 11552), r0);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWrite32((r3 + 11556), r0);
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 11584), static_cast<uint8_t>(r0));
    r28 = MemoryInline::FlatRead32((r4 + 12));
}

loc_80416B00:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_80416B44;
    }
}

loc_80416B04:
{
    r3 = r28;
    if constexpr (KnownRegArgsCpuCall<0x80456C40u>(&func_80456C40)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80456C40_759 = func_80456C40_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80456C40_759);
        r4 = static_cast<uint32_t>(regargs_result_80456C40_759 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80456C40u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_80416B10:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(17))) {
        goto loc_80416B24;
    }
}

loc_80416B14:
{
    r3 = r28;
    if constexpr (KnownRegArgsCpuCall<0x80456C40u>(&func_80456C40)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80456C40_A78 = func_80456C40_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80456C40_A78);
        r4 = static_cast<uint32_t>(regargs_result_80456C40_A78 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80456C40u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r29 = r3;
    goto loc_80416B28;
}

loc_80416B24:
{
    r29 = 16;
}

loc_80416B28:
{
    r3 = (r30 + 11584);
    r4 = r28;
    r5 = r29;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r0 = 0;
    r3 = (r30 + r29);
    MemoryInline::FlatWrite8((r3 + 11584), static_cast<uint8_t>(r0));
}

loc_80416B44:
{
    r0 = (r30 + 11584);
    MemoryInline::FlatWrite32((r30 + 11560), r0);
    r0 = MemoryInline::FlatRead32((r31 + 16));
    MemoryInline::FlatWrite32((r30 + 11564), r0);
    r0 = MemoryInline::FlatRead32((r31 + 20));
    MemoryInline::FlatWrite32((r30 + 11568), r0);
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 11601), static_cast<uint8_t>(r0));
    r28 = MemoryInline::FlatRead32((r31 + 24));
}

loc_80416B6C:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_80416BB0;
    }
}

loc_80416B70:
{
    r3 = r28;
    if constexpr (KnownRegArgsCpuCall<0x80456C40u>(&func_80456C40)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80456C40_10E5 = func_80456C40_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80456C40_10E5);
        r4 = static_cast<uint32_t>(regargs_result_80456C40_10E5 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80456C40u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_80416B7C:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(17))) {
        goto loc_80416B90;
    }
}

loc_80416B80:
{
    r3 = r28;
    if constexpr (KnownRegArgsCpuCall<0x80456C40u>(&func_80456C40)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80456C40_1407 = func_80456C40_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80456C40_1407);
        r4 = static_cast<uint32_t>(regargs_result_80456C40_1407 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80456C40u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r29 = r3;
    goto loc_80416B94;
}

loc_80416B90:
{
    r29 = 16;
}

loc_80416B94:
{
    r3 = (r30 + 11601);
    r4 = r28;
    r5 = r29;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r0 = 0;
    r3 = (r30 + r29);
    MemoryInline::FlatWrite8((r3 + 11601), static_cast<uint8_t>(r0));
}

loc_80416BB0:
{
    r0 = (r30 + 11601);
    MemoryInline::FlatWrite32((r30 + 11572), r0);
    r0 = 0;
    MemoryInline::FlatWrite16((r30 + 11618), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r31 + 28));
}

loc_80416BC8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80416C18;
    }
}

loc_80416BCC:
{
    r5 = 0;
    r3 = r4;
    goto loc_80416BE0;
}

loc_80416BD8:
{
    r3 = (r3 + 2);
    r5 = (r5 + 1);
}

loc_80416BE0:
{
    r0 = MemoryInline::FlatRead16(r3);
}

loc_80416BE8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80416BD8;
    }
}

loc_80416BEC:
{
}

loc_80416BF0:
{
    r0 = 25;
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(26))) {
        goto loc_80416BFC;
    }
}

loc_80416BF8:
{
    r0 = r5;
}

loc_80416BFC:
{
    r28_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r28 = (r28_rot_1 & -2);
    r3 = (r30 + 11618);
    r5 = r28;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r0 = 0;
    r3 = (r30 + r28);
    MemoryInline::FlatWrite16((r3 + 11618), static_cast<uint16_t>(r0));
}

loc_80416C18:
{
    r0 = (r30 + 11618);
    MemoryInline::FlatWrite32((r30 + 11576), r0);
    r0 = MemoryInline::FlatRead32((r31 + 32));
    MemoryInline::FlatWrite32((r30 + 11580), r0);
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80416AB4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80416AB4_ra38_1e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80416AB4 func_80416AB4 preserves=true fpr_mask=0x00000000
