#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803AA9B0(CpuContext* ctx);
extern "C" uint64_t func_803AA9B0_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_803AAA34_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x803AAA34u);
    goto loc_803AAA34;

loc_803AAA34:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r29 = r3;
    r30 = r4;
    r27 = r5;
    r31 = r6;
    r3 = (r5 & 65535);
    // inline leaf 0x8029F740 (10 guest instruction(s))
}

loc_inl1_0x8029F740:
{
    r4 = 0x806B0000u;
    r4 = MemoryInline::FlatRead32((r4 + -4808));
    r0 = (r3 & 65535);
}

loc_inl1_0x8029F750:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(747))) {
        goto loc_inl1_0x8029F758;
    }
}

loc_inl1_0x8029F754:
{
    r3 = 0;
}

loc_inl1_0x8029F758:
{
    r0 = (r3 & 65535);
    r0 = (r0 * 20);
    r3 = (r4 + r0);
}

loc_inl1_cont_8029F740:
{
    // end of inlined leaf 0x8029F740
    r28 = r3;
}

loc_803AAA68:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_803AAA74;
    }
}

loc_803AAA6C:
{
    r3 = 1;
    goto loc_803AABCC;
}

loc_803AAA74:
{
    r3 = r29;
    r4 = (r27 & 65535);
    if constexpr (KnownRegArgsCpuCall<0x803AA9B0u>(&func_803AA9B0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803AA9B0_86C = func_803AA9B0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_803AA9B0_86C);
        r4 = static_cast<uint32_t>(regargs_result_803AA9B0_86C >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803AA9B0u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
}

loc_803AAA88:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803AAB24;
    }
}

loc_803AAA8C:
{
    r3 = 5;
    r6 = r29;
    r5 = 0;
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
    r0 = 5;
    ctr = r0;
}

loc_803AAAA4:
{
    r0 = MemoryInline::FlatRead16(r6);
}

loc_803AAAAC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803AAACC;
    }
}

loc_803AAAB0:
{
}

loc_803AAAB4:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_803AAACC;
    }
}

loc_803AAAB8:
{
    MemoryInline::FlatWrite16(r6, static_cast<uint16_t>(r27));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r31)));
    MemoryInline::FlatWrite8((r6 + 2), static_cast<uint8_t>(r0));
    r3 = 0;
    goto loc_803AAAD8;
}

loc_803AAACC:
{
    r5 = (r5 + 1);
    r6 = (r6 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803AAAA4;
    }
}

loc_803AAAD8:
{
}

loc_803AAADC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(5))) {
        goto loc_803AABCC;
    }
}

loc_803AAAE0:
{
    r0 = MemoryInline::FlatRead8(r30);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r4 = (r29 + r0);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r27));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r31)));
    MemoryInline::FlatWrite8((r4 + 2), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead8(r30);
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
    r0 = (r0 & 255);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_803AAB14:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(5))) {
        goto loc_803AABCC;
    }
}

loc_803AAB18:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
    goto loc_803AABCC;
}

loc_803AAB24:
{
    r5 = 0;
    r4 = (r27 & 65535);
    r0 = 5;
    ctr = r0;
}

loc_803AAB34:
{
    r0 = MemoryInline::FlatRead16(r29);
}

loc_803AAB3C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r4))) {
        goto loc_803AABC0;
    }
}

loc_803AAB40:
{
    r0 = MemoryInline::FlatRead8((r28 + 3));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
}

loc_803AAB50:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_803AAB70;
    }
}

loc_803AAB54:
{
    r0 = MemoryInline::FlatRead8((r29 + 2));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_803AAB60:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r4))) {
        goto loc_803AAB70;
    }
}

loc_803AAB64:
{
    MemoryInline::FlatWrite8((r29 + 2), static_cast<uint8_t>(r4));
    r3 = 3;
    goto loc_803AABCC;
}

loc_803AAB70:
{
    r3 = MemoryInline::FlatRead8((r29 + 2));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r31)));
    r0 = (r3 + r0);
    MemoryInline::FlatWrite8((r29 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r29 + 2));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_803AAB8C:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_803AABA4;
    }
}

loc_803AAB90:
{
    r0 = 0;
    MemoryInline::FlatWrite16(r29, static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite8((r29 + 2), static_cast<uint8_t>(r0));
    r3 = 4;
    goto loc_803AABCC;
}

loc_803AABA4:
{
}

loc_803AABA8:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(r4))) {
        goto loc_803AABB8;
    }
}

loc_803AABAC:
{
    MemoryInline::FlatWrite8((r29 + 2), static_cast<uint8_t>(r4));
    r3 = 2;
    goto loc_803AABCC;
}

loc_803AABB8:
{
    r3 = 1;
    goto loc_803AABCC;
}

loc_803AABC0:
{
    r5 = (r5 + 1);
    r29 = (r29 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803AAB34;
    }
}

loc_803AABCC:
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
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803AAA34(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803AAA34_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000087B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803AAA34 func_803AAA34 preserves=true fpr_mask=0x00000000
