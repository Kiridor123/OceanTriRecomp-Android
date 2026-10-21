#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803A880C(CpuContext* ctx);
extern "C" uint32_t func_803A880C_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_803A8E08_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
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

    MKW_GUEST_ENTER(0x803A8E08u);
    goto loc_803A8E08;

loc_803A8E08:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    ctx->lr = 0x803A8E18u;
    if constexpr (KnownRegArgsCpuCall<0x803A880Cu>(&func_803A880C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_803A880C_48A = func_803A880C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803A880C_48A;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803A880Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_803A8E1C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803A8F38;
    }
}

loc_803A8E20:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 90), static_cast<uint16_t>(r0));
    r5 = MemoryInline::FlatRead16((r3 + 90));
    r4 = MemoryInline::FlatRead16((r3 + 108));
    r0 = MemoryInline::FlatRead16((r3 + 110));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_1 & -256);
    r0 = (r0 & 65535);
    r0 = (r4 + r0);
    r0 = (r0 & 65535);
    r0 = (r5 + r0);
    MemoryInline::FlatWrite16((r3 + 90), static_cast<uint16_t>(r0));
    r5 = MemoryInline::FlatRead16((r3 + 90));
    r4 = MemoryInline::FlatRead16((r3 + 112));
    r0 = MemoryInline::FlatRead16((r3 + 114));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_2 & -256);
    r0 = (r0 & 65535);
    r0 = (r4 + r0);
    r0 = (r0 & 65535);
    r0 = (r5 + r0);
    MemoryInline::FlatWrite16((r3 + 90), static_cast<uint16_t>(r0));
    r5 = MemoryInline::FlatRead16((r3 + 90));
    r4 = MemoryInline::FlatRead16((r3 + 116));
    r0 = MemoryInline::FlatRead16((r3 + 118));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_3 & -256);
    r0 = (r0 & 65535);
    r0 = (r4 + r0);
    r0 = (r0 & 65535);
    r0 = (r5 + r0);
    MemoryInline::FlatWrite16((r3 + 90), static_cast<uint16_t>(r0));
    r5 = MemoryInline::FlatRead16((r3 + 90));
    r4 = MemoryInline::FlatRead16((r3 + 120));
    r0 = MemoryInline::FlatRead16((r3 + 122));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_4 & -256);
    r0 = (r0 & 65535);
    r0 = (r4 + r0);
    r0 = (r0 & 65535);
    r0 = (r5 + r0);
    MemoryInline::FlatWrite16((r3 + 90), static_cast<uint16_t>(r0));
    r5 = MemoryInline::FlatRead16((r3 + 90));
    r4 = MemoryInline::FlatRead16((r3 + 124));
    r0 = MemoryInline::FlatRead16((r3 + 126));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_5 & -256);
    r0 = (r0 & 65535);
    r0 = (r4 + r0);
    r0 = (r0 & 65535);
    r0 = (r5 + r0);
    MemoryInline::FlatWrite16((r3 + 90), static_cast<uint16_t>(r0));
    r5 = MemoryInline::FlatRead16((r3 + 90));
    r4 = MemoryInline::FlatRead16((r3 + 128));
    r0 = MemoryInline::FlatRead16((r3 + 130));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_6 & -256);
    r0 = (r0 & 65535);
    r0 = (r4 + r0);
    r0 = (r0 & 65535);
    r0 = (r5 + r0);
    MemoryInline::FlatWrite16((r3 + 90), static_cast<uint16_t>(r0));
    r5 = MemoryInline::FlatRead16((r3 + 90));
    r4 = MemoryInline::FlatRead16((r3 + 132));
    r0 = MemoryInline::FlatRead16((r3 + 134));
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_7 & -256);
    r0 = (r0 & 65535);
    r0 = (r4 + r0);
    r0 = (r0 & 65535);
    r0 = (r5 + r0);
    MemoryInline::FlatWrite16((r3 + 90), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 90));
}

loc_803A8F2C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803A8F38;
    }
}

loc_803A8F30:
{
    r0 = 451;
    MemoryInline::FlatWrite16((r3 + 90), static_cast<uint16_t>(r0));
}

loc_803A8F38:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803A8E08(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803A8E08_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803A8E08 func_803A8E08 preserves=true fpr_mask=0x00000000
