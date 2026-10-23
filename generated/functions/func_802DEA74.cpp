#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802DEA04(CpuContext* ctx);
extern "C" uint64_t func_802DEA04_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_802DEA74_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_802DEA74;

loc_802DEA74:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = r3;
    r30 = (r3 + 24);
    r0 = MemoryInline::FlatRead8((r3 + 292));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = MemoryInline::FlatRead8((r3 + 295));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r4 * r0);
    r29 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r28 = 1;
    r4 = r29;
    // inline leaf 0x802DE99C (10 guest instruction(s))
}

loc_inl0_0x802DE99C:
{
    r0 = MemoryInline::FlatRead8((r3 + 301));
}

loc_inl0_0x802DE9A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x802DE9BC;
    }
}

loc_inl0_0x802DE9A8:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
}

loc_inl0_0x802DE9B0:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(24))) {
        goto loc_inl0_0x802DE9BC;
    }
}

loc_inl0_0x802DE9B4:
{
    r3 = 1;
    goto loc_inl0_cont_802DE99C;
}

loc_inl0_0x802DE9BC:
{
    r3 = 0;
}

loc_inl0_cont_802DE99C:
{
    // end of inlined leaf 0x802DE99C
}

loc_802DEAC0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802DEAD4;
    }
}

loc_802DEAC4:
{
    r29 = (r29 + -24);
    r3 = r31;
    ctx->lr = 0x802DEAD0u;
    if constexpr (KnownRegArgsCpuCall<0x802DEA04u>(&func_802DEA04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802DEA04_8B8 = func_802DEA04_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802DEA04_8B8);
        r4 = static_cast<uint32_t>(regargs_result_802DEA04_8B8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802DEA04u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r28 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_802DEAD4:
{
    r4 = 0;
    r3 = 0;
    goto loc_802DEAF8;
}

loc_802DEAE0:
{
    MemoryInline::FlatWrite8((r30 + 2), static_cast<uint8_t>(r28));
    MemoryInline::FlatWrite8((r30 + 1), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite16((r30 + 6), static_cast<uint16_t>(r29));
    r4 = (r4 + 1);
    r30 = (r30 + 24);
    r29 = (r29 + 1);
}

loc_802DEAF8:
{
    r0 = MemoryInline::FlatRead8((r31 + 295));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_802DEB04:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_802DEAE0;
    }
}

loc_802DEB08:
{
    r0 = MemoryInline::FlatRead8((r31 + 4));
}

loc_802DEB10:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(4))) {
        goto loc_802DEB2C;
    }
}

loc_802DEB14:
{
    r4 = 1;
    r0 = MemoryInline::FlatRead8((r31 + 294));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 24);
    r3 = (r31 + r0);
    MemoryInline::FlatWrite8((r3 + 25), static_cast<uint8_t>(r4));
}

loc_802DEB2C:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802DEA74(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802DEA74_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802DEA74 func_802DEA74 preserves=true fpr_mask=0x00000000
