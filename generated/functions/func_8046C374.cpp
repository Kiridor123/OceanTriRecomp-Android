#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8046C374_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_subfic_ra_0 = 0;
    uint32_t r0_subfic_ra_1 = 0;
    uint32_t r0_subfic_ra_2 = 0;
    uint32_t r0_subfic_ra_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x8046C374u);
    goto loc_8046C374;

loc_8046C374:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r29 = r3;
    r30 = r4;
    r26 = r5;
    r27 = r6;
    r28 = r7;
    // inline leaf 0x8046C26C (2 guest instruction(s))
    r3 = ctx->msr;
    // end of inlined leaf 0x8046C26C
    r31 = r3;
    r25 = 255;
    goto loc_8046C41C;
}

loc_8046C3A8:
{
    r3 = r28;
    // inline leaf 0x8046C274 (2 guest instruction(s))
    ctx->msr = r3;
    // end of inlined leaf 0x8046C274
    r3 = (r30 & -4);
    r0 = (r30 - r3);
    r3 = MemoryInline::FlatRead32(r3);
    r0_subfic_ra_2 = r0;
    r0 = (3 - r0_subfic_ra_2);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_2 & -8);
    r0 = PPC_Srw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r24 = (r0 & 255);
    // sync @ 0x8046C3CC (no-op)
    r3 = r27;
    // inline leaf 0x8046C274 (2 guest instruction(s))
    ctx->msr = r3;
    // end of inlined leaf 0x8046C274
    r6 = (r29 & -4);
    r0 = (r29 - r6);
    r5 = MemoryInline::FlatRead32(r6);
    r3 = (3 - r0);
    r0_subfic_ra_3 = r0;
    r0 = (3 - r0_subfic_ra_3);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r3 = (r3_rot_2 & -8);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_3 & -8);
    r4 = PPC_Slw(static_cast<uint32_t>(r25), static_cast<uint32_t>(r3));
    r0 = PPC_Slw(static_cast<uint32_t>(r24), static_cast<uint32_t>(r0));
    r3 = (r5 & ~r4);
    r0 = (r4 & r0);
    r0 = (r3 | r0);
    MemoryInline::FlatWrite32(r6, r0);
    // sync @ 0x8046C40C (no-op)
    r30 = (r30 + 1);
    r29 = (r29 + 1);
    r26 = (r26 + -1);
}

loc_8046C41C:
{
}

loc_8046C420:
{
    if ((static_cast<int32_t>(r26) != static_cast<int32_t>(0))) {
        goto loc_8046C3A8;
    }
}

loc_8046C424:
{
    r3 = r31;
    // inline leaf 0x8046C274 (2 guest instruction(s))
    ctx->msr = r3;
    // end of inlined leaf 0x8046C274
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 16), 0, 40u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8046C374(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8046C374_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000000FA gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8046C374 func_8046C374 preserves=true fpr_mask=0x00000000
