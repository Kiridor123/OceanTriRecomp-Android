#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803A7E80(CpuContext* ctx);
extern "C" uint32_t func_803A7E80_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_8028EFE0_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    goto loc_8028EFE0;

loc_8028EFE0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r3 = 0;
    // inline leaf 0x800CFAF4 (16 guest instruction(s))
}

loc_inl0_0x800CFAF4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl0_0x800CFB04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x800CFB10;
    }
}

loc_inl0_0x800CFB08:
{
    r3 = 0;
    goto loc_inl0_cont_800CFAF4;
}

loc_inl0_0x800CFB10:
{
    r0 = (r3 & 255);
}

loc_inl0_0x800CFB18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl0_0x800CFB24;
    }
}

loc_inl0_0x800CFB1C:
{
    r3 = 0;
    goto loc_inl0_cont_800CFAF4;
}

loc_inl0_0x800CFB24:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl0_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    r31 = r3;
}

loc_8028F008:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8028F014;
    }
}

loc_8028F00C:
{
    r3 = 0;
    goto loc_8028F100;
}

loc_8028F014:
{
}

loc_8028F018:
{
    if ((static_cast<uint32_t>(r30) >= static_cast<uint32_t>(32))) {
        goto loc_8028F09C;
    }
}

loc_8028F01C:
{
    r3 = (r3 + 8820);
    r0 = MemoryInline::FlatRead32(r3);
}

loc_8028F028:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r30))) {
        goto loc_8028F030;
    }
}

loc_8028F02C:
{
    goto loc_8028F100;
}

loc_8028F030:
{
    r3 = (r3 + 16);
    r0 = MemoryInline::FlatRead32(r3);
}

loc_8028F03C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r30))) {
        goto loc_8028F044;
    }
}

loc_8028F040:
{
    goto loc_8028F100;
}

loc_8028F044:
{
    r3 = (r3 + 16);
    r0 = MemoryInline::FlatRead32(r3);
}

loc_8028F050:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r30))) {
        goto loc_8028F058;
    }
}

loc_8028F054:
{
    goto loc_8028F100;
}

loc_8028F058:
{
    r3 = (r3 + 16);
    r0 = MemoryInline::FlatRead32(r3);
}

loc_8028F064:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r30))) {
        goto loc_8028F06C;
    }
}

loc_8028F068:
{
    goto loc_8028F100;
}

loc_8028F06C:
{
    r3 = (r3 + 16);
    r0 = MemoryInline::FlatRead32(r3);
}

loc_8028F078:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r30))) {
        goto loc_8028F080;
    }
}

loc_8028F07C:
{
    goto loc_8028F100;
}

loc_8028F080:
{
    r3 = (r3 + 16);
    r0 = MemoryInline::FlatRead32(r3);
}

loc_8028F08C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r30))) {
        goto loc_8028F094;
    }
}

loc_8028F090:
{
    goto loc_8028F100;
}

loc_8028F094:
{
    r3 = 0;
    goto loc_8028F100;
}

loc_8028F09C:
{
    ctx->lr = 0x8028F0A0u;
    if constexpr (KnownRegArgsCpuCall<0x803A7E80u>(&func_803A7E80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_803A7E80_1009 = func_803A7E80_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803A7E80_1009;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803A7E80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(11));
    r0 = (r0_rot_3 & -2048);
    r4 = (r31 + r0);
    r4 = (r4 + 340);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r3 = (r31 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 8532));
    ctr = r0;
}

loc_8028F0C0:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_8028F0E0;
    }
}

loc_8028F0C4:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_8028F0CC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r30))) {
        goto loc_8028F0D8;
    }
}

loc_8028F0D0:
{
    r3 = r4;
    goto loc_8028F100;
}

loc_8028F0D8:
{
    r4 = (r4 + 16);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8028F0C4;
    }
}

loc_8028F0E0:
{
    r3 = MemoryInline::FlatRead32((r31 + 8792));
}

loc_8028F0E8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8028F0FC;
    }
}

loc_8028F0EC:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_8028F0F4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r30))) {
        goto loc_8028F0FC;
    }
}

loc_8028F0F8:
{
    goto loc_8028F100;
}

loc_8028F0FC:
{
    r3 = 0;
}

loc_8028F100:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8028EFE0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8028EFE0_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8028EFE0 func_8028EFE0 preserves=true fpr_mask=0x00000000
