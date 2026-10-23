#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8027714C(CpuContext* ctx);
extern "C" uint32_t func_8027714C_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80277204_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80277204;

loc_80277204:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = r4;
    r0 = MemoryInline::FlatRead8((r3 + 9));
}

loc_80277228:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(3))) {
        goto loc_80277280;
    }
}

loc_8027722C:
{
    r0 = MemoryInline::FlatRead8((r3 + 2));
}

loc_80277234:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(8))) {
        goto loc_8027725C;
    }
}

loc_80277238:
{
    // inline leaf 0x80331168 (10 guest instruction(s))
}

loc_inl0_0x80331168:
{
    r0 = MemoryInline::FlatRead8((r3 + 2));
}

loc_inl0_0x80331170:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(8))) {
        goto loc_inl0_0x80331188;
    }
}

loc_inl0_0x80331174:
{
    r0 = MemoryInline::FlatRead8((r3 + 1478));
}

loc_inl0_0x8033117C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x80331188;
    }
}

loc_inl0_0x80331180:
{
    r3 = 1;
    goto loc_inl0_cont_80331168;
}

loc_inl0_0x80331188:
{
    r3 = 0;
}

loc_inl0_cont_80331168:
{
    // end of inlined leaf 0x80331168
}

loc_80277240:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8027725C;
    }
}

loc_80277244:
{
    r3 = r30;
    r4 = 0x805E0000u;
    r4 = (r4 + 10760);
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
    if constexpr (KnownRegArgsCpuCall<0x8027714Cu>(&func_8027714C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027714C_9E8 = func_8027714C_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8027714C_9E8;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8027714Cu>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_802772D0;
}

loc_8027725C:
{
    r3 = r30;
    r0 = MemoryInline::FlatRead8((r30 + 2));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r4 = 0x805C0000u;
    r4 = (r4 + -1016);
    r4_addr_1 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_1);
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
    if constexpr (KnownRegArgsCpuCall<0x8027714Cu>(&func_8027714C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027714C_DD1 = func_8027714C_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8027714C_DD1;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8027714Cu>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_802772D0;
}

loc_80277280:
{
    r0 = MemoryInline::FlatRead8((r3 + 2));
}

loc_80277288:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(8))) {
        goto loc_802772B0;
    }
}

loc_8027728C:
{
    // inline leaf 0x80331168 (10 guest instruction(s))
}

loc_inl1_0x80331168:
{
    r0 = MemoryInline::FlatRead8((r3 + 2));
}

loc_inl1_0x80331170:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(8))) {
        goto loc_inl1_0x80331188;
    }
}

loc_inl1_0x80331174:
{
    r0 = MemoryInline::FlatRead8((r3 + 1478));
}

loc_inl1_0x8033117C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x80331188;
    }
}

loc_inl1_0x80331180:
{
    r3 = 1;
    goto loc_inl1_cont_80331168;
}

loc_inl1_0x80331188:
{
    r3 = 0;
}

loc_inl1_cont_80331168:
{
    // end of inlined leaf 0x80331168
}

loc_80277294:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802772B0;
    }
}

loc_80277298:
{
    r3 = r30;
    r4 = 0x805E0000u;
    r4 = (r4 + 11664);
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
    if constexpr (KnownRegArgsCpuCall<0x8027714Cu>(&func_8027714C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027714C_14CD = func_8027714C_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8027714C_14CD;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8027714Cu>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_802772D0;
}

loc_802772B0:
{
    r3 = r30;
    r0 = MemoryInline::FlatRead8((r30 + 2));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r4 = 0x805C0000u;
    r4 = (r4 + -980);
    r4_addr_2 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_2);
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
    if constexpr (KnownRegArgsCpuCall<0x8027714Cu>(&func_8027714C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027714C_18B7 = func_8027714C_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8027714C_18B7;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8027714Cu>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_802772D0:
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

extern "C" void func_80277204(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80277204_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80277204 func_80277204 preserves=true fpr_mask=0x00000000
