#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800ED33C(CpuContext* ctx);
extern "C" uint64_t func_800ED33C_ra38_1c_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);

extern "C" uint64_t func_800EC9A8_ra38_1c_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f2, double arg_f3, double arg_f4)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r4_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;

    goto loc_800EC9A8;

loc_800EC9A8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r28 = r3;
    r29 = r4;
    r30 = r5;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800E4A58u>(ctx);
    r3 = ctx->gpr[3];
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800EDB88u>(ctx);
    r3 = ctx->gpr[3];
    r31 = r3;
    r0 = MemoryInline::FlatRead8((r29 + 4));
    r6 = (r0 & 1);
    r5 = MemoryInline::FlatRead8((r29 + 6));
    r0 = MemoryInline::FlatRead8((r29 + 7));
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r4 = (r4_rot_0 & -256);
}

loc_800EC9F4:
{
    r0 = 255;
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800ECA00;
    }
}

loc_800EC9FC:
{
    r0 = r30;
}

loc_800ECA00:
{
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r3 = (r3_rot_0 & -16777216);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(16));
    r0 = (r0_rot_0 & -65536);
    r0 = (r3 | r0);
    r0 = (r4 | r0);
    r30 = (r5 | r0);
    goto loc_800ECA4C;
}

loc_800ECA18:
{
    r0 = MemoryInline::FlatRead8((r31 + 25));
}

loc_800ECA20:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_800ECA40;
    }
}

loc_800ECA24:
{
    r0 = MemoryInline::FlatRead32((r31 + 20));
}

loc_800ECA2C:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(r0))) {
        goto loc_800ECA40;
    }
}

loc_800ECA30:
{
    r3 = r28;
    r4 = r31;
    r5 = r29;
    ctx->lr = 0x800ECA40u;
    if constexpr (KnownRegArgsCpuCall<0x800ED33Cu>(&func_800ED33C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800ED33C_B38 = func_800ED33C_ra38_1c_18_0(ctx, r3, r4, r5, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_800ED33C_B38);
        r4 = static_cast<uint32_t>(regargs_result_800ED33C_B38 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x800ED33Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
}

loc_800ECA40:
{
    r3 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800E61B0u>(ctx);
    r3 = ctx->gpr[3];
    r31 = r3;
}

loc_800ECA4C:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800E4A58u>(ctx);
    r3 = ctx->gpr[3];
    r4 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800E6164u>(ctx);
    r3 = ctx->gpr[3];
}

loc_800ECA5C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_800ECA18;
    }
}

loc_800ECA60:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800EC9A8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800EC9A8_ra38_1c_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007F gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x0000001C fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0xC1 cr_write=0xC1 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800EC9A8 func_800EC9A8 preserves=true fpr_mask=0x00000000
