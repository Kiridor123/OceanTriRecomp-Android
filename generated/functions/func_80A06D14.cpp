#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802AB080(CpuContext* ctx);
extern "C" uint64_t func_802AB080_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);

extern "C" void func_80A06D14(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];

    goto loc_80A06D14;

loc_80A06D14:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = MemoryInline::FlatRead32((r3 + 256));
    r0 = MemoryInline::FlatRead32((r3 + 16));
}

loc_80A06D38:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(59))) {
        goto loc_80A06D48;
    }
}

loc_80A06D3C:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r0));
    goto loc_80A06DDC;
}

loc_80A06D48:
{
}

loc_80A06D4C:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(49))) {
        goto loc_80A06DDC;
    }
}

loc_80A06D50:
{
    r0 = MemoryInline::FlatRead8((r31 + 13));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80A06D5C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80A06DDC;
    }
}

loc_80A06D60:
{
    r4 = MemoryInline::FlatRead8((r31 + 12));
    r0 = (r4 + -1);
    MemoryInline::FlatWrite8((r31 + 12), static_cast<uint8_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80A06D74:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_80A06DDC;
    }
}

loc_80A06D78:
{
    r4 = 0x80A30000u;
    r4 = (r4 + -6592);
    r0 = MemoryInline::FlatRead8((r3 + 2));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_1 & -8);
    r4 = (r4 + r0);
    r6 = MemoryInline::FlatRead32((r4 + 4));
}

loc_80A06D94:
{
    if ((static_cast<int32_t>(r6) < static_cast<int32_t>(0))) {
        goto loc_80A06DB4;
    }
}

loc_80A06D98:
{
    r4 = 0x80A30000u;
    r4 = (r4 + -6780);
    r5 = 0x80A30000u;
    r5 = (r5 + -6808);
    r7 = 2;
    r8 = 8;
    ctx->lr = 0x80A06DB4u;
    if constexpr (KnownRegArgsCpuCall<0x802AB080u>(&func_802AB080)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_802AB080_BA2 = func_802AB080_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_802AB080_BA2);
        r4 = static_cast<uint32_t>(regargs_result_802AB080_BA2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x802AB080u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    }
}

loc_80A06DB4:
{
    r3 = MemoryInline::FlatRead8((r31 + 13));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite8((r31 + 13), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r30 + 2));
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_1 & -2);
    r3 = 0x80A30000u;
    r0 = (r3 + -6536);
    r3 = (r4 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 1));
    MemoryInline::FlatWrite8((r31 + 12), static_cast<uint8_t>(r0));
}

loc_80A06DDC:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000001FF gpr_write=0x000009FB gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80A06D14 func_80A06D14 preserves=true fpr_mask=0x00000000
