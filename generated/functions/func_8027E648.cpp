#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8027ED7C(CpuContext* ctx);
extern "C" uint64_t func_8027ED7C_ra8_0_18_0(CpuContext*, uint32_t);

extern "C" uint64_t func_8027E648_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r5_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8027E648;

loc_8027E648:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = MemoryInline::FlatRead8((r3 + 1));
    ctx->lr = 0x8027E660u;
    if constexpr (KnownRegArgsCpuCall<0x8027ED7Cu>(&func_8027ED7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027ED7C_54F = func_8027ED7C_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8027ED7C_54F);
        r4 = static_cast<uint32_t>(regargs_result_8027ED7C_54F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8027ED7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r4 = MemoryInline::FlatRead8((r3 + 3));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(3));
    r0 = (r0_rot_0 & -8);
    r4 = (r0 - r4);
    r0 = (r4 + 1);
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r5 = (r5_rot_0 & -2);
    r4 = 0x805C0000u;
    r0 = (r4 + 1192);
    r6 = (r0 + r5);
    r7 = 0;
    r8 = 0;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8027E690:
{
    if (((cr & 0x04000000u) == 0)) {
        goto loc_8027E74C;
    }
}

loc_8027E694:
{
    r4 = (r31 + -8);
}

loc_8027E69C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(8))) {
        goto loc_8027E720;
    }
}

loc_8027E6A0:
{
    r5 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_8027E6B4;
    }
}

loc_8027E6A8:
{
}

loc_8027E6AC:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(32766))) {
        goto loc_8027E6B4;
    }
}

loc_8027E6B0:
{
    r5 = 1;
}

loc_8027E6B4:
{
}

loc_8027E6B8:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8027E720;
    }
}

loc_8027E6BC:
{
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    r0 = (r4 + 7);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
    ctr = r0;
}

loc_8027E6D0:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_8027E720;
    }
}

loc_8027E6D4:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r6, 0, 16u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, r6);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r7 = (r7 + r0);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 2u, (r6 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r7 = (r7 + r0);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r6 + 4));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r7 = (r7 + r0);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 6u, (r6 + 6));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r7 = (r7 + r0);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 8u, (r6 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r7 = (r7 + r0);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 10u, (r6 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r7 = (r7 + r0);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 12u, (r6 + 12));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r7 = (r7 + r0);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 14u, (r6 + 14));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r7 = (r7 + r0);
    r6 = (r6 + 16);
    r8 = (r8 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8027E6D4;
    }
}

loc_8027E720:
{
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r8)));
    r0 = (r4 - r5);
    ctr = r0;
}

loc_8027E734:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(r4))) {
        goto loc_8027E74C;
    }
}

loc_8027E738:
{
    r0 = MemoryInline::FlatRead16(r6);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r7 = (r7 + r0);
    r8 = (r8 + 1);
    r6 = (r6 + 2);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8027E738;
    }
}

loc_8027E74C:
{
    r0 = MemoryInline::FlatRead16((r3 + 4));
    r0 = (r0 + r7);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8027E648(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8027E648_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000001FB gpr_write=0x000001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8027E648 func_8027E648 preserves=true fpr_mask=0x00000000
