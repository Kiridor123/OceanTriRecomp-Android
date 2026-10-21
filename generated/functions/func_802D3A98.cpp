#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802D76A4(CpuContext* ctx);
extern "C" uint64_t func_802D76A4_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_802D3A98_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x802D3A98u);
    goto loc_802D3A98;

loc_802D3A98:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = r4;
    r4 = 23;
    if constexpr (KnownRegArgsCpuCall<0x802D76A4u>(&func_802D76A4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802D76A4_3FF = func_802D76A4_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802D76A4_3FF);
        r4 = static_cast<uint32_t>(regargs_result_802D76A4_3FF >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802D76A4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_802D3AC0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802D3AD4;
    }
}

loc_802D3AC4:
{
    r0 = MemoryInline::FlatRead16((r30 + 848));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 + r31);
    MemoryInline::FlatWrite16((r30 + 848), static_cast<uint16_t>(r0));
    goto loc_802D3AF4;
}

loc_802D3AD4:
{
    r4 = MemoryInline::FlatRead16((r30 + 848));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
    r0 = (r0 + r3);
    r0 = (static_cast<int32_t>(r0) >> 1);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r4 + r0);
    MemoryInline::FlatWrite16((r30 + 848), static_cast<uint16_t>(r0));
}

loc_802D3AF4:
{
    r3 = r30;
    // inline leaf 0x802D9D78 (7 guest instruction(s))
}

loc_inl0_0x802D9D78:
{
    r3 = MemoryInline::FlatRead8((r3 + 1056));
    r0 = (r3 + -4);
}

loc_inl0_0x802D9D84:
{
    r3 = 75;
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x802D9D8C:
{
    r3 = 150;
    goto loc_inl0_cont_802D9D78;
}

loc_inl0_return:
{
}

loc_inl0_cont_802D9D78:
{
    // end of inlined leaf 0x802D9D78
    r4 = MemoryInline::FlatRead16((r30 + 848));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
}

loc_802D3B08:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(r0))) {
        goto loc_802D3B10;
    }
}

loc_802D3B0C:
{
    MemoryInline::FlatWrite16((r30 + 848), static_cast<uint16_t>(r3));
}

loc_802D3B10:
{
    r0 = MemoryInline::FlatRead16((r30 + 848));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_802D3B18:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_802D3B24;
    }
}

loc_802D3B1C:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r30 + 848), static_cast<uint16_t>(r0));
}

loc_802D3B24:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802D3A98(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802D3A98_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802D3A98 func_802D3A98 preserves=true fpr_mask=0x00000000
