#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80410974_ra70_1fe_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r4, uint32_t arg_r5, uint32_t arg_r6, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r21 = ctx->gpr[21];
    uint32_t r22 = ctx->gpr[22];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->gpr[6] = arg_r6;
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x80410974u);
    goto loc_80410974;

loc_80410974:
{
    r0 = MemoryInline::FlatRead8((r24 + 3));
}

loc_8041097C:
{
    if ((static_cast<int32_t>(r27) >= static_cast<int32_t>(r0))) {
        goto loc_8041098C;
    }
}

loc_80410980:
{
    r0 = MemoryInline::FlatRead32((r24 + 4));
    r29 = (r0 + r30);
    goto loc_80410990;
}

loc_8041098C:
{
    r29 = (r1 + 32);
}

loc_80410990:
{
    r3 = r23;
    r4 = r29;
    // inline leaf 0x803FBB68 (7 guest instruction(s))
    r5 = MemoryInline::FlatRead32((r3 + 24756));
    r0 = MemoryInline::FlatRead8(r5);
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead32((r3 + 24756));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r3 + 24756), r0);
    // end of inlined leaf 0x803FBB68
    r3 = r23;
    r4 = (r29 + 1);
    // inline leaf 0x803FBB68 (7 guest instruction(s))
    r5 = MemoryInline::FlatRead32((r3 + 24756));
    r0 = MemoryInline::FlatRead8(r5);
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead32((r3 + 24756));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r3 + 24756), r0);
    // end of inlined leaf 0x803FBB68
    r0 = MemoryInline::FlatRead8((r29 + 1));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(9));
}

loc_804109B0:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80410B2C;
    }
}

loc_804109B4:
{
    r3 = (r31 + 10472);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3_addr_0 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_0);
    ctr = r3;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectJump(ctr, ctx);
    return ctx->gpr[4];
    return ctx->gpr[4];
}

loc_80410B2C:
{
    r30 = (r30 + 16);
    r27 = (r27 + 1);
    r0 = MemoryInline::FlatRead8((r24 + 2));
}

loc_80410B3C:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(r0))) {
        goto loc_80410974;
    }
}

loc_80410B40:
{
    r11 = (r1 + 96);
    {
        uint8_t* const guest_thunk_stack = MemoryInline::ResolveRangeHost((r11 + -44), 0, 44u, true, false);
        r21 = MemoryInline::ReadResolved32(guest_thunk_stack, 0u, (r11 + -44));
        r22 = MemoryInline::ReadResolved32(guest_thunk_stack, 4u, (r11 + -40));
        r23 = MemoryInline::ReadResolved32(guest_thunk_stack, 8u, (r11 + -36));
        r24 = MemoryInline::ReadResolved32(guest_thunk_stack, 12u, (r11 + -32));
        r25 = MemoryInline::ReadResolved32(guest_thunk_stack, 16u, (r11 + -28));
        r26 = MemoryInline::ReadResolved32(guest_thunk_stack, 20u, (r11 + -24));
        r27 = MemoryInline::ReadResolved32(guest_thunk_stack, 24u, (r11 + -20));
        r28 = MemoryInline::ReadResolved32(guest_thunk_stack, 28u, (r11 + -16));
        r29 = MemoryInline::ReadResolved32(guest_thunk_stack, 32u, (r11 + -12));
        r30 = MemoryInline::ReadResolved32(guest_thunk_stack, 36u, (r11 + -8));
        r31 = MemoryInline::ReadResolved32(guest_thunk_stack, 40u, (r11 + -4));
    }
    r0 = MemoryInline::FlatRead32((r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return r4;
}

}

extern "C" void func_80410974(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80410974_ra70_1fe_10_0(ctx, ctx->gpr[4], ctx->gpr[5], ctx->gpr[6], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0xC9803FF7 gpr_write=0xFFE01FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80410974 func_80410974 preserves=true fpr_mask=0x00000000
