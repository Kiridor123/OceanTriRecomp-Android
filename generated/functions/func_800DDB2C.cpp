#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800D8EBC(CpuContext* ctx);
extern "C" uint32_t func_800D8EBC_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_800DDB2C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

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
    PPC_FPR f0 = ctx->fpr[0];

    goto loc_800DDB2C;

loc_800DDB2C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r28 = r4;
    r30 = MemoryInline::FlatRead32((r3 + 2812));
}

loc_800DDB54:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_800DDC48;
    }
}

loc_800DDB58:
{
    r29 = 0;
    r0 = (r5 & 255);
}

loc_800DDB64:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800DDBA0;
    }
}

loc_800DDB68:
{
    r0 = (r6 & 255);
}

loc_800DDB70:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800DDB88;
    }
}

loc_800DDB74:
{
}

loc_800DDB78:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_800DDB90;
    }
}

loc_800DDB7C:
{
}

loc_800DDB80:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_800DDB98;
    }
}

loc_800DDB84:
{
    goto loc_800DDBD4;
}

loc_800DDB88:
{
    r29 = 12;
    goto loc_800DDBD4;
}

loc_800DDB90:
{
    r29 = 13;
    goto loc_800DDBD4;
}

loc_800DDB98:
{
    r29 = 14;
    goto loc_800DDBD4;
}

loc_800DDBA0:
{
    r0 = (r6 & 255);
}

loc_800DDBA8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800DDBC0;
    }
}

loc_800DDBAC:
{
}

loc_800DDBB0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_800DDBC8;
    }
}

loc_800DDBB4:
{
}

loc_800DDBB8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_800DDBD0;
    }
}

loc_800DDBBC:
{
    goto loc_800DDBD4;
}

loc_800DDBC0:
{
    r29 = 32;
    goto loc_800DDBD4;
}

loc_800DDBC8:
{
    r29 = 33;
    goto loc_800DDBD4;
}

loc_800DDBD0:
{
    r29 = 34;
}

loc_800DDBD4:
{
}

loc_800DDBD8:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_800DDC48;
    }
}

loc_800DDBDC:
{
    r3 = r30;
    r4 = r29;
    if constexpr (KnownRegArgsCpuCall<0x800D8EBCu>(&func_800D8EBC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800D8EBC_BBB = func_800D8EBC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800D8EBC_BBB;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x800D8EBCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
    r31 = r3;
}

loc_800DDBF0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800DDC48;
    }
}

loc_800DDBF4:
{
    r0 = 3;
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = 2;
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r30 + 12));
    MemoryInline::FlatWrite32((r3 + 40), r0);
    MemoryInline::FlatWrite32((r3 + 44), r29);
    r0 = -1;
    MemoryInline::FlatWrite32((r3 + 48), r0);
    MemoryInline::FlatWrite32((r3 + 52), r0);
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 56), r0);
    r3 = (r3 + 4);
    r4 = r28;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 4));
    MemoryInline::FlatWriteFloat32((r31 + 16), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 8));
    MemoryInline::FlatWriteFloat32((r31 + 20), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 12));
    MemoryInline::FlatWriteFloat32((r31 + 24), f0.d);
}

loc_800DDC48:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800DDB2C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800DDB2C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000001 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800DDB2C func_800DDB2C preserves=true fpr_mask=0x00000000
