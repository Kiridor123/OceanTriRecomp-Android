#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8021B1D4_ra70_1fe_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r4, uint32_t arg_r5, uint32_t arg_r6, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
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

    goto loc_8021B1D4;

loc_8021B1D4:
{
    r3 = r29;
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r30)));
    // inline leaf 0x8021ACF0 (16 guest instruction(s))
}

loc_inl0_0x8021ACF0:
{
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
}

loc_inl0_0x8021ACF8:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(12))) {
        goto loc_inl0_0x8021AD14;
    }
}

loc_inl0_0x8021ACFC:
{
    r3 = MemoryInline::FlatRead16((r3 + 16632));
    r0 = 1;
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r5));
    r0 = (r3 & r0);
    r3 = (r0 & 65535);
    goto loc_inl0_cont_8021ACF0;
}

loc_inl0_0x8021AD14:
{
    r4 = MemoryInline::FlatRead16((r3 + 16634));
    r3 = 1;
    r0 = (r5 + -12);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r4 & r0);
    r3 = (r0 & 65535);
}

loc_inl0_cont_8021ACF0:
{
    // end of inlined leaf 0x8021ACF0
    r0 = (r3 & 65535);
}

loc_8021B1E8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8021B5EC;
    }
}

loc_8021B1EC:
{
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r30)));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(23));
}

loc_8021B1F4:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8021B5EC;
    }
}

loc_8021B1F8:
{
    r3 = (r31 + -22876);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
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

loc_8021B5EC:
{
    r30 = (r30 + 1);
}

loc_8021B5F4:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(24))) {
        goto loc_8021B1D4;
    }
}

loc_8021B5F8:
{
    r11 = (r1 + 32);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    r26 = MemoryInline::FlatRead32((r11 + -24));
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
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

extern "C" void func_8021B1D4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8021B1D4_ra70_1fe_10_0(ctx, ctx->gpr[4], ctx->gpr[5], ctx->gpr[6], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0xE0003FF6 gpr_write=0xFC001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8021B1D4 func_8021B1D4 preserves=true fpr_mask=0x00000000
