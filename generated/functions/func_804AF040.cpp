#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_804AF040_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_804AF040;

loc_804AF040:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
}

loc_804AF04C:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = r5;
    r30 = r4;
    r29 = r3;
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_804AF0EC;
    }
}

loc_804AF06C:
{
    r5 = (r30 + -1);
    r4 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
}

loc_804AF07C:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(1))) {
        goto loc_804AF094;
    }
}

loc_804AF080:
{
}

loc_804AF084:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(2))) {
        goto loc_804AF0C4;
    }
}

loc_804AF088:
{
}

loc_804AF08C:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(3))) {
        goto loc_804AF0D8;
    }
}

loc_804AF090:
{
    goto loc_804AF120;
}

loc_804AF094:
{
    r3 = (r29 + r30);
    r0 = 13;
    MemoryInline::FlatWrite8((r3 + -1), static_cast<uint8_t>(r0));
    r5 = (r30 + -1);
    r4 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r5 = 10;
    r4 = (r29 + r0);
    r3 = 2;
    MemoryInline::FlatWrite8((r4 + -1), static_cast<uint8_t>(r5));
    goto loc_804AF124;
}

loc_804AF0C4:
{
    r3 = (r29 + r30);
    r0 = 13;
    MemoryInline::FlatWrite8((r3 + -1), static_cast<uint8_t>(r0));
    r3 = 1;
    goto loc_804AF124;
}

loc_804AF0D8:
{
    r3 = (r29 + r30);
    r0 = 10;
    MemoryInline::FlatWrite8((r3 + -1), static_cast<uint8_t>(r0));
    r3 = 1;
    goto loc_804AF124;
}

loc_804AF0EC:
{
}

loc_804AF0F0:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(1))) {
        goto loc_804AF108;
    }
}

loc_804AF0F4:
{
}

loc_804AF0F8:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(2))) {
        goto loc_804AF110;
    }
}

loc_804AF0FC:
{
}

loc_804AF100:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(3))) {
        goto loc_804AF118;
    }
}

loc_804AF104:
{
    goto loc_804AF120;
}

loc_804AF108:
{
    r3 = 2;
    goto loc_804AF124;
}

loc_804AF110:
{
    r3 = 1;
    goto loc_804AF124;
}

loc_804AF118:
{
    r3 = 1;
    goto loc_804AF124;
}

loc_804AF120:
{
    r3 = 0;
}

loc_804AF124:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804AF040(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804AF040_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804AF040 func_804AF040 preserves=true fpr_mask=0x00000000
