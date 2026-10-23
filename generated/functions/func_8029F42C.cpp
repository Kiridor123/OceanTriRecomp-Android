#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8029F42C_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
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

    goto loc_8029F42C;

loc_8029F42C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r8 = 1;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 5), 0, 59u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r3 + 5), static_cast<uint8_t>(r8));
    r0 = 0;
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r3 + 6), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r3 + 7), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved32(guest_range_0, 11u, (r3 + 16), r6);
    MemoryInline::WriteResolved16(guest_range_0, 5u, (r3 + 10), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 7u, (r3 + 12), r4);
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r3 + 9), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 15u, (r3 + 20), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 58u, (r3 + 63), static_cast<uint8_t>(r7));
    r0 = (r5 & 255);
}

loc_8029F474:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8029F4A4;
    }
}

loc_8029F478:
{
}

loc_8029F47C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8029F4B4;
    }
}

loc_8029F480:
{
}

loc_8029F484:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8029F4C8;
    }
}

loc_8029F488:
{
}

loc_8029F48C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_8029F4DC;
    }
}

loc_8029F490:
{
}

loc_8029F494:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_8029F4F0;
    }
}

loc_8029F498:
{
}

loc_8029F49C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_8029F504;
    }
}

loc_8029F4A0:
{
    goto loc_8029F514;
}

loc_8029F4A4:
{
    r0 = MemoryInline::FlatRead8((r6 + 22));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r3 + 8), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r3 + 9), static_cast<uint8_t>(r8));
    goto loc_8029F514;
}

loc_8029F4B4:
{
    r0 = MemoryInline::FlatRead8((r6 + 481));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r3 + 8), static_cast<uint8_t>(r0));
    r0 = 2;
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r3 + 9), static_cast<uint8_t>(r0));
    goto loc_8029F514;
}

loc_8029F4C8:
{
    r0 = MemoryInline::FlatRead8((r6 + 8));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r3 + 8), static_cast<uint8_t>(r0));
    r0 = 8;
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r3 + 9), static_cast<uint8_t>(r0));
    goto loc_8029F514;
}

loc_8029F4DC:
{
    r0 = MemoryInline::FlatRead8((r6 + 420));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r3 + 8), static_cast<uint8_t>(r0));
    r0 = 4;
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r3 + 9), static_cast<uint8_t>(r0));
    goto loc_8029F514;
}

loc_8029F4F0:
{
    // inline leaf 0x802AFCE8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3014));
    // end of inlined leaf 0x802AFCE8
    MemoryInline::FlatWrite8((r31 + 8), static_cast<uint8_t>(r3));
    r0 = 16;
    MemoryInline::FlatWrite8((r31 + 9), static_cast<uint8_t>(r0));
    goto loc_8029F514;
}

loc_8029F504:
{
    // inline leaf 0x802AFCE8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3014));
    // end of inlined leaf 0x802AFCE8
    MemoryInline::FlatWrite8((r31 + 8), static_cast<uint8_t>(r3));
    r0 = 32;
    MemoryInline::FlatWrite8((r31 + 9), static_cast<uint8_t>(r0));
}

loc_8029F514:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[8] = r8;
    return r3;
}

}

extern "C" void func_8029F42C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8029F42C_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x000001FB gpr_write=0x0000010B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8029F42C func_8029F42C preserves=true fpr_mask=0x00000000
