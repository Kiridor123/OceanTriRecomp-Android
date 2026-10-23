#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80522CE8(CpuContext* ctx);
extern "C" uint64_t func_80522CE8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_805232B4_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r30_rot_0 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_805232B4;

loc_805232B4:
{
    MemoryHw::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryHw::FlatWriteRam32((r1 + 36), r0);
    r31 = -855638016;
    r29 = r4;
    r4 = 4;
    r28 = r5;
    r5 = 1;
    MemoryHw::FlatWriteRam32((r1 + 8), r3);
    r3 = (r1 + 8);
    r0 = MemoryHw::FlatRead32((r31 + 26664));
    r0 = (r0 & 1029);
}

loc_805232F4:
{
    r0 = (r0 | 192);
    MemoryHw::FlatWrite32((r31 + 26664), r0);
    ctx->lr = 0x80523300u;
    if constexpr (KnownRegArgsCpuCall<0x80522CE8u>(&func_80522CE8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80522CE8_5E3 = func_80522CE8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80522CE8_5E3);
        r4 = static_cast<uint32_t>(regargs_result_80522CE8_5E3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80522CE8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r3));
    r30_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r30 = (r30_rot_0 & 134217727);
}

loc_80523308:
{
    r0 = MemoryHw::FlatRead32((r31 + 26676));
    r0 = (r0 & 1);
}

loc_80523310:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80523308;
    }
}

loc_80523314:
{
    r31 = -855638016;
    goto loc_80523354;
}

loc_8052331C:
{
    r3 = (r1 + 12);
    r4 = 4;
    r5 = 0;
    ctx->lr = 0x8052332Cu;
    if constexpr (KnownRegArgsCpuCall<0x80522CE8u>(&func_80522CE8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80522CE8_B1D = func_80522CE8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80522CE8_B1D);
        r4 = static_cast<uint32_t>(regargs_result_80522CE8_B1D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80522CE8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r3));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_2 & 134217727);
    r30 = (r30 | r0);
}

loc_80523338:
{
    r0 = MemoryHw::FlatRead32((r31 + 26676));
    r0 = (r0 & 1);
}

loc_80523340:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80523338;
    }
}

loc_80523344:
{
    r0 = MemoryHw::FlatRead32((r1 + 12));
    r28 = (r28 + -4);
    MemoryHw::FlatWrite32(r29, r0);
    r29 = (r29 + 4);
}

loc_80523354:
{
}

loc_80523358:
{
    if ((static_cast<int32_t>(r28) > static_cast<int32_t>(0))) {
        goto loc_8052331C;
    }
}

loc_8052335C:
{
    r4 = -855638016;
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r30));
    r5 = MemoryHw::FlatRead32((r4 + 26664));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_0 & 134217727);
    r0 = (r5 & 1029);
}

loc_80523370:
{
    MemoryHw::FlatWrite32((r4 + 26664), r0);
    r0 = MemoryHw::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_805232B4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_805232B4_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00001FFB gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x805232B4 func_805232B4 preserves=true fpr_mask=0x00000000
