#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8041A5E4(CpuContext* ctx);
extern "C" uint32_t func_8041A5E4_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_80453AD0_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80453AD0;

loc_80453AD0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = MemoryInline::FlatRead32((r13 + -16440));
}

loc_80453AE8:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_80453AF4;
    }
}

loc_80453AEC:
{
    r3 = 255;
    goto loc_80453B9C;
}

loc_80453AF4:
{
}

loc_80453AF8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(4))) {
        goto loc_80453B40;
    }
}

loc_80453AFC:
{
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A5E4 (8 guest instruction(s))
}

loc_inl1_0x8041A5E4:
{
}

loc_inl1_0x8041A5E8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x8041A5FC;
    }
}

loc_inl1_0x8041A5EC:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    goto loc_inl1_cont_8041A5E4;
}

loc_inl1_0x8041A5FC:
{
    r3 = 0;
}

loc_inl1_cont_8041A5E4:
{
    // end of inlined leaf 0x8041A5E4
}

loc_80453B0C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80453B38;
    }
}

loc_80453B10:
{
    r0 = MemoryInline::FlatRead32((r31 + 100));
}

loc_80453B18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_80453B38;
    }
}

loc_80453B1C:
{
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A5E4 (8 guest instruction(s))
}

loc_inl3_0x8041A5E4:
{
}

loc_inl3_0x8041A5E8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl3_0x8041A5FC;
    }
}

loc_inl3_0x8041A5EC:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    goto loc_inl3_cont_8041A5E4;
}

loc_inl3_0x8041A5FC:
{
    r3 = 0;
}

loc_inl3_cont_8041A5E4:
{
    // end of inlined leaf 0x8041A5E4
    r3 = (r3 + 65536);
    r0 = MemoryInline::FlatRead32((r3 + -4048));
    r3 = (r0 & 255);
    goto loc_80453B9C;
}

loc_80453B38:
{
    r3 = 0;
    goto loc_80453B9C;
}

loc_80453B40:
{
}

loc_80453B44:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(5))) {
        goto loc_80453B8C;
    }
}

loc_80453B48:
{
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8041A5E4u>(&func_8041A5E4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8041A5E4_F04 = func_8041A5E4_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8041A5E4_F04;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8041A5E4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
}

loc_80453B58:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80453B84;
    }
}

loc_80453B5C:
{
    r0 = MemoryInline::FlatRead32((r31 + 100));
}

loc_80453B64:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_80453B84;
    }
}

loc_80453B68:
{
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8041A5E4u>(&func_8041A5E4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8041A5E4_12FA = func_8041A5E4_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8041A5E4_12FA;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8041A5E4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
    r3 = (r3 + 65536);
    r0 = MemoryInline::FlatRead32((r3 + -4044));
    r3 = (r0 & 255);
    goto loc_80453B9C;
}

loc_80453B84:
{
    r3 = 0;
    goto loc_80453B9C;
}

loc_80453B8C:
{
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r3 = (r31 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 25104));
    r3 = (r0 & 255);
}

loc_80453B9C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80453AD0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80453AD0_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000201B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80453AD0 func_80453AD0 preserves=true fpr_mask=0x00000000
