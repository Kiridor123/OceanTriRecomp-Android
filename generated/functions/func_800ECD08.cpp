#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800ED2AC(CpuContext* ctx);
extern "C" uint64_t func_800ED2AC_ra30_1c_18_0(CpuContext*, uint32_t, uint32_t, double, double, double);

extern "C" uint64_t func_800ECD08_ra38_1c_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f2, double arg_f3, double arg_f4)
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

    goto loc_800ECD08;

loc_800ECD08:
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

loc_800ECD54:
{
    r0 = 255;
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800ECD60;
    }
}

loc_800ECD5C:
{
    r0 = r30;
}

loc_800ECD60:
{
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r3 = (r3_rot_0 & -16777216);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(16));
    r0 = (r0_rot_0 & -65536);
    r0 = (r3 | r0);
    r0 = (r4 | r0);
    r30 = (r5 | r0);
    goto loc_800ECDAC;
}

loc_800ECD78:
{
    r0 = MemoryInline::FlatRead8((r31 + 25));
}

loc_800ECD80:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_800ECDA0;
    }
}

loc_800ECD84:
{
    r0 = MemoryInline::FlatRead32((r31 + 20));
}

loc_800ECD8C:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(r0))) {
        goto loc_800ECDA0;
    }
}

loc_800ECD90:
{
    r3 = r28;
    r4 = r31;
    r5 = MemoryInline::FlatRead32((r29 + 28));
    ctx->lr = 0x800ECDA0u;
    if constexpr (KnownRegArgsCpuCall<0x800ED2ACu>(&func_800ED2AC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800ED2AC_B4F = func_800ED2AC_ra30_1c_18_0(ctx, r4, r5, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_800ED2AC_B4F);
        r4 = static_cast<uint32_t>(regargs_result_800ED2AC_B4F >> 32);
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
        InvokeDirectCpu<0x800ED2ACu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
}

loc_800ECDA0:
{
    r3 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800E61B0u>(ctx);
    r3 = ctx->gpr[3];
    r31 = r3;
}

loc_800ECDAC:
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

loc_800ECDBC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_800ECD78;
    }
}

loc_800ECDC0:
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

extern "C" void func_800ECD08(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800ECD08_ra38_1c_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007F gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x0000001C fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0xC1 cr_write=0xC1 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800ECD08 func_800ECD08 preserves=true fpr_mask=0x00000000
