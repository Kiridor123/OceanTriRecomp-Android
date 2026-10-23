#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80130790(CpuContext* ctx);
extern "C" void func_80130790_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_801B09D0_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r31 = ctx->gpr[31];

    goto loc_801B09D0;

loc_801B09D0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r4 = (r4 & 255);
    r0 = (r4 + -10);
}

loc_801B09F0:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_801B0A58;
    }
}

loc_801B09F4:
{
}

loc_801B09F8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(1))) {
        goto loc_801B0A78;
    }
}

loc_801B09FC:
{
    r0 = (r5 & 255);
}

loc_801B0A04:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(19))) {
        goto loc_801B0A14;
    }
}

loc_801B0A08:
{
}

loc_801B0A0C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(16))) {
        goto loc_801B0A3C;
    }
}

loc_801B0A10:
{
    goto loc_801B0A78;
}

loc_801B0A14:
{
    r0 = MemoryInline::FlatRead8((r3 + 1083));
}

loc_801B0A1C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_801B0A78;
    }
}

loc_801B0A20:
{
    r0 = MemoryInline::FlatRead8((r3 + 1084));
}

loc_801B0A28:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_801B0A78;
    }
}

loc_801B0A2C:
{
    r4 = 4;
    r5 = 0;
    // inline leaf 0x80130790 (13 guest instruction(s))
}

loc_inl0_0x80130790:
{
    r6 = MemoryInline::FlatRead8((r3 + 1083));
    r0 = (r4 & 255);
}

loc_inl0_0x8013079C:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl0_0x801307B0;
    }
}

loc_inl0_0x801307A0:
{
    r6 = MemoryInline::FlatRead8((r3 + 1084));
    r0 = (r5 & 255);
}

loc_inl0_0x801307AC:
{
    if ((static_cast<uint32_t>(r6) == static_cast<uint32_t>(r0))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x801307B0:
{
    MemoryInline::FlatWrite8((r3 + 1083), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 1084), static_cast<uint8_t>(r5));
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 1088), static_cast<uint16_t>(r0));
    goto loc_inl0_cont_80130790;
}

loc_inl0_return:
{
}

loc_inl0_cont_80130790:
{
    // end of inlined leaf 0x80130790
    goto loc_801B0A78;
}

loc_801B0A3C:
{
    r0 = MemoryInline::FlatRead8((r3 + 1083));
}

loc_801B0A44:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_801B0A78;
    }
}

loc_801B0A48:
{
    r4 = 0;
    r5 = 0;
    if constexpr (KnownRegArgsCpuCall<0x80130790u>(&func_80130790)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        func_80130790_ra38_0_0_0(ctx, r3, r4, r5);
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x80130790u>(ctx);
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
    }
    goto loc_801B0A78;
}

loc_801B0A58:
{
    r0 = MemoryInline::FlatRead8((r3 + 817));
}

loc_801B0A60:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_801B0A78;
    }
}

loc_801B0A64:
{
    // inline leaf 0x80133A10 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 2380));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (0 - r3);
    r0 = (r0 & ~r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x80133A10
}

loc_801B0A6C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801B0A78;
    }
}

loc_801B0A70:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 817), static_cast<uint8_t>(r0));
}

loc_801B0A78:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801B09D0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801B09D0_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801B09D0 func_801B09D0 preserves=true fpr_mask=0x00000000
