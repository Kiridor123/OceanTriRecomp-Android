#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8027F180(CpuContext* ctx);
extern "C" uint32_t func_8027F180_ra28_0_8_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_8027F628_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x8027F628u);
    goto loc_8027F628;

loc_8027F628:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r27 = r3;
    r28 = r4;
    r29 = r5;
    r0 = 0;
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r4 + 2), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r4 + 4), static_cast<uint16_t>(r0));
    ctx->lr = 0x8027F65Cu;
    if constexpr (KnownRegArgsCpuCall<0x8027F180u>(&func_8027F180)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_8027F180_5D6 = func_8027F180_ra28_0_8_0(ctx, r3, r5);
        r3 = regargs_result_8027F180_5D6;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8027F180u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r30 = (r3 & 255);
    r31 = 0;
    goto loc_8027F6B8;
}

loc_8027F668:
{
    r3 = MemoryInline::FlatRead16((r27 + 6));
}

loc_8027F670:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8027F6B0;
    }
}

loc_8027F674:
{
}

loc_8027F678:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_8027F6A8;
    }
}

loc_8027F67C:
{
    // inline leaf 0x8029F718 (10 guest instruction(s))
}

loc_inl1_0x8029F718:
{
    r0 = (r3 & 65535);
}

loc_inl1_0x8029F720:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(132))) {
        goto loc_inl1_0x8029F728;
    }
}

loc_inl1_0x8029F724:
{
    r3 = 0;
}

loc_inl1_0x8029F728:
{
    r0 = (r3 & 65535);
    r4 = (r0 * 12);
    r3 = 0x805E0000u;
    r0 = (r3 + -14472);
    r3 = (r0 + r4);
}

loc_inl1_cont_8029F718:
{
    // end of inlined leaf 0x8029F718
    r4 = 0;
    goto loc_8027F698;
}

loc_8027F688:
{
    r0 = MemoryInline::FlatRead16((r27 + 6));
    MemoryInline::FlatWrite16(r28, static_cast<uint16_t>(r0));
    r28 = (r28 + 2);
    r4 = (r4 + 1);
}

loc_8027F698:
{
    r0 = MemoryInline::FlatRead8(r3);
}

loc_8027F6A0:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_8027F688;
    }
}

loc_8027F6A4:
{
    goto loc_8027F6B0;
}

loc_8027F6A8:
{
    MemoryInline::FlatWrite16(r28, static_cast<uint16_t>(r3));
    r28 = (r28 + 2);
}

loc_8027F6B0:
{
    r27 = (r27 + 2);
    r31 = (r31 + 1);
}

loc_8027F6B8:
{
}

loc_8027F6BC:
{
    if ((static_cast<int32_t>(r31) < static_cast<int32_t>(r30))) {
        goto loc_8027F668;
    }
}

loc_8027F6C0:
{
    r11 = (r1 + 32);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8027F628(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8027F628_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000083B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8027F628 func_8027F628 preserves=true fpr_mask=0x00000000
