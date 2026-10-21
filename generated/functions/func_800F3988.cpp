#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80144644(CpuContext* ctx);
extern "C" uint64_t func_80144644_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_803B53F4(CpuContext* ctx);
extern "C" uint32_t func_803B53F4_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_800F3988_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r29_addr_0 = 0;
    uint32_t r29_addr_1 = 0;
    uint32_t r29_addr_2 = 0;
    uint32_t r29_addr_3 = 0;
    uint8_t* guest_range_0 = nullptr;

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

    MKW_GUEST_ENTER(0x800F3988u);
    goto loc_800F3988;

loc_800F3988:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r27 = r3;
    r30 = r5;
    r31 = r6;
    r29 = 0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r1 + 12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r1 + 8), r29);
    }
    r3 = (r4 & 65535);
    r4 = (r1 + 12);
    r5 = (r1 + 8);
    ctx->lr = 0x800F39C4u;
    if constexpr (KnownRegArgsCpuCall<0x80144644u>(&func_80144644)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80144644_820 = func_80144644_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80144644_820);
        r4 = static_cast<uint32_t>(regargs_result_80144644_820 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80144644u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r28 = r3;
    MemoryInline::FlatWrite32(r30, r29);
    MemoryInline::FlatWrite32(r31, r29);
    r3 = 0;
    ctx->lr = 0x800F39D8u;
    if constexpr (KnownRegArgsCpuCall<0x803B53F4u>(&func_803B53F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_803B53F4_BB0 = func_803B53F4_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803B53F4_BB0;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803B53F4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_800F39DC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_800F39F4;
    }
}

loc_800F39E0:
{
    r0 = 98;
    MemoryInline::FlatWrite32(r30, r0);
    r0 = 2;
    MemoryInline::FlatWrite32(r31, r0);
    goto loc_800F3AF4;
}

loc_800F39F4:
{
    // inline leaf 0x802AFCD8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3013));
    // end of inlined leaf 0x802AFCD8
    r0 = (r3 & 255);
    r3 = 0x805A0000u;
    r29 = (r3 + -17880);
    r29_addr_1 = (r29 + r0);
    r0 = MemoryInline::FlatRead8(r29_addr_1);
}

loc_800F3A0C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(85))) {
        goto loc_800F3A20;
    }
}

loc_800F3A10:
{
    MemoryInline::FlatWrite32(r30, r0);
    r0 = 2;
    MemoryInline::FlatWrite32(r31, r0);
    goto loc_800F3AF4;
}

loc_800F3A20:
{
    r0 = (r27 & 255);
}

loc_800F3A28:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(12))) {
        goto loc_800F3A50;
    }
}

loc_800F3A2C:
{
}

loc_800F3A30:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(14))) {
        goto loc_800F3A50;
    }
}

loc_800F3A34:
{
}

loc_800F3A38:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(7))) {
        goto loc_800F3A64;
    }
}

loc_800F3A3C:
{
}

loc_800F3A40:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(24))) {
        goto loc_800F3A78;
    }
}

loc_800F3A44:
{
}

loc_800F3A48:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(20))) {
        goto loc_800F3A8C;
    }
}

loc_800F3A4C:
{
    goto loc_800F3ADC;
}

loc_800F3A50:
{
    r0 = 90;
    MemoryInline::FlatWrite32(r30, r0);
    r0 = 1;
    MemoryInline::FlatWrite32(r31, r0);
    goto loc_800F3AF4;
}

loc_800F3A64:
{
    r0 = 91;
    MemoryInline::FlatWrite32(r30, r0);
    r0 = 3;
    MemoryInline::FlatWrite32(r31, r0);
    goto loc_800F3AF4;
}

loc_800F3A78:
{
    r0 = 97;
    MemoryInline::FlatWrite32(r30, r0);
    r0 = 3;
    MemoryInline::FlatWrite32(r31, r0);
    goto loc_800F3AF4;
}

loc_800F3A8C:
{
    r4 = 1;
    r0 = (r28 & 255);
}

loc_800F3A98:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800F3AAC;
    }
}

loc_800F3A9C:
{
    r3 = MemoryInline::FlatRead32((r1 + 12));
}

loc_800F3AA4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800F3AAC;
    }
}

loc_800F3AA8:
{
    r4 = MemoryInline::FlatRead8((r3 + 481));
}

loc_800F3AAC:
{
    r0 = (r4 + 255);
    r0 = (r0 & 255);
}

loc_800F3AB8:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_800F3AC8;
    }
}

loc_800F3ABC:
{
    r0 = 92;
    MemoryInline::FlatWrite32(r30, r0);
    goto loc_800F3AD0;
}

loc_800F3AC8:
{
    r0 = 93;
    MemoryInline::FlatWrite32(r30, r0);
}

loc_800F3AD0:
{
    r0 = 3;
    MemoryInline::FlatWrite32(r31, r0);
    goto loc_800F3AF4;
}

loc_800F3ADC:
{
    // inline leaf 0x802AFCD8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3013));
    // end of inlined leaf 0x802AFCD8
    r0 = (r3 & 255);
    r29_addr_2 = (r29 + r0);
    r0 = MemoryInline::FlatRead8(r29_addr_2);
    MemoryInline::FlatWrite32(r30, r0);
    r0 = 2;
    MemoryInline::FlatWrite32(r31, r0);
}

loc_800F3AF4:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800F3988(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800F3988_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000083B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800F3988 func_800F3988 preserves=true fpr_mask=0x00000000
