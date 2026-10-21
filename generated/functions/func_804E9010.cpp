#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_804E9010_ra308_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r8, uint32_t arg_r9)
{
    uint32_t cr0_0 = 0;
    uint32_t r28_addr_0 = 0;
    uint32_t r28_addr_1 = 0;
    uint32_t r28_addr_2 = 0;
    uint32_t r29_addr_0 = 0;
    uint32_t r29_addr_1 = 0;
    uint32_t r29_addr_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r8 = arg_r8;
    uint32_t r9 = arg_r9;
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x804E9010u);
    goto loc_804E9010;

loc_804E9010:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r31 = 0x80760000u;
    r31 = (r31 + -10800);
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x804D12F0
    r5 = MemoryInline::FlatRead32((r13 + -14344));
    r0 = 0;
    r4 = MemoryInline::FlatRead32((r13 + -14360));
    r30 = r3;
    r28 = (r31 + 120);
    r29 = (r31 + 0);
    r3 = (r5 | r4);
    MemoryInline::FlatWrite32((r13 + -14344), r3);
    r27 = -1;
    MemoryInline::FlatWrite32((r13 + -14360), r0);
    r4 = MemoryInline::FlatRead32((r13 + -14336));
    r5 = MemoryInline::FlatRead32((r13 + -14332));
    r0 = MemoryInline::FlatRead32((r13 + -14352));
    r3 = MemoryInline::FlatRead32((r13 + -14348));
    r0 = (r4 | r0);
    r3 = (r5 | r3);
    MemoryInline::FlatWrite32((r13 + -14332), r3);
    MemoryInline::FlatWrite32((r13 + -14336), r0);
    goto loc_804E90DC;
}

loc_804E907C:
{
    r0 = MemoryInline::FlatRead32((r13 + -14352));
    r3 = MemoryInline::FlatRead32((r13 + -14348));
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
}

loc_804E908C:
{
    r3 = (r3 & r27);
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(32))) {
        goto loc_804E9098;
    }
}

loc_804E9094:
{
    goto loc_804E90A0;
}

loc_804E9098:
{
    r3 = PPC_CntlzwInline(static_cast<uint32_t>(r3));
    r0 = (r3 + 32);
}

loc_804E90A0:
{
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & -2);
    r5 = (63 - r0);
    r28_addr_2 = (r28 + r3);
    r0 = MemoryInline::FlatRead16(r28_addr_2);
    r4 = 1;
    r29_addr_2 = (r29 + r3);
    MemoryInline::FlatWrite16(r29_addr_2, static_cast<uint16_t>(r0));
    r3 = 0;
    // inline leaf 0x80457900 (9 guest instruction(s))
    r8 = (32 - r5);
    r9 = (r5 + -32);
    r3 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r5));
    r10 = PPC_Srw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r8));
    r3 = (r3 | r10);
    r10 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r9));
    r3 = (r3 | r10);
    r4 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r5));
    // end of inlined leaf 0x80457900
    r0 = MemoryInline::FlatRead32((r13 + -14352));
    r5 = ~(r3 | r3);
    r3 = MemoryInline::FlatRead32((r13 + -14348));
    r4 = ~(r4 | r4);
    r0 = (r0 & r5);
    r3 = (r3 & r4);
    MemoryInline::FlatWrite32((r13 + -14348), r3);
    MemoryInline::FlatWrite32((r13 + -14352), r0);
}

loc_804E90DC:
{
    r0 = MemoryInline::FlatRead32((r13 + -14352));
    r3 = MemoryInline::FlatRead32((r13 + -14348));
    r0 = (r3 | r0);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804E907C;
    }
}

loc_804E90EC:
{
    r3 = (r31 + 240);
    r4 = 1;
    r0 = MemoryInline::FlatRead32((r3 + 48));
    r3 = r30;
    MemoryInline::FlatWrite32((r13 + -14240), r4);
    MemoryInline::FlatWrite32((r13 + -14244), r4);
    MemoryInline::FlatWrite32((r13 + -14300), r0);
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl3_0x804D1330:
{
}

loc_inl3_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl3_0x804D1344;
    }
}

loc_inl3_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl3_0x804D1348;
}

loc_inl3_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl3_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_3 & 1);
}

loc_inl3_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
    r11 = (r1 + 32);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    return r3;
}

}

extern "C" void func_804E9010(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_804E9010_ra308_0_8_0(ctx, ctx->gpr[3], ctx->gpr[8], ctx->gpr[9]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000270B gpr_write=0x00000F3B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804E9010 func_804E9010 preserves=true fpr_mask=0x00000000
