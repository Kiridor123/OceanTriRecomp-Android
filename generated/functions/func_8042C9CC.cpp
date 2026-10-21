#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8042C9CC_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_addc_right_0 = 0;
    uint32_t r0_addc_right_1 = 0;
    uint32_t r0_addc_right_2 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x8042C9CCu);
    goto loc_8042C9CC;

loc_8042C9CC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = MemoryInline::FlatRead32((r13 + -16440));
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A4F4 (8 guest instruction(s))
}

loc_inl1_0x8041A4F4:
{
}

loc_inl1_0x8041A4F8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x8041A50C;
    }
}

loc_inl1_0x8041A4FC:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    goto loc_inl1_cont_8041A4F4;
}

loc_inl1_0x8041A50C:
{
    r3 = 0;
}

loc_inl1_cont_8041A4F4:
{
    // end of inlined leaf 0x8041A4F4
}

loc_8042C9F4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8042CB24;
    }
}

loc_8042C9F8:
{
    r3 = (r31 + 65536);
    r0 = MemoryInline::FlatRead32((r3 + -24300));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(6));
    r0 = (r0_rot_3 & -64);
    r3 = (r31 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 1700));
    r0 = -1;
    r0_addc_right_1 = r0;
    r0 = (r3 + r0_addc_right_1);
    r3 = 0x806D0000u;
    r3 = (r3 + 23552);
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 244), 0, 5u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r3 + 248), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r31 + 100));
}

loc_8042CA28:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_8042CA60;
    }
}

loc_8042CA2C:
{
    r0 = MemoryInline::FlatRead32((r31 + 25104));
    r0 = (r0 & 255);
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r3 + 244), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r31 + 25108));
    r0 = (r0 & 255);
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r3 + 245), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r31 + 25112));
    r0 = (r0 & 255);
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r3 + 246), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r31 + 25116));
    r0 = (r0 & 255);
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r3 + 247), static_cast<uint8_t>(r0));
    goto loc_8042CA74;
}

loc_8042CA60:
{
    r0 = 255;
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r3 + 244), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r3 + 245), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r3 + 246), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r3 + 247), static_cast<uint8_t>(r0));
}

loc_8042CA74:
{
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A4F4 (8 guest instruction(s))
}

loc_inl3_0x8041A4F4:
{
}

loc_inl3_0x8041A4F8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl3_0x8041A50C;
    }
}

loc_inl3_0x8041A4FC:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    goto loc_inl3_cont_8041A4F4;
}

loc_inl3_0x8041A50C:
{
    r3 = 0;
}

loc_inl3_cont_8041A4F4:
{
    // end of inlined leaf 0x8041A4F4
    r31 = 0x806D0000u;
    r4 = (r31 + 23552);
    r5 = 7;
    r6 = 244;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 80));
    ctr = r12;
    ctx->lr = 0x8042CAA0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    r5 = (r31 + 23552);
    r3 = MemoryInline::FlatRead8((r5 + 247));
    r0 = MemoryInline::FlatRead8((r5 + 246));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_6 & -256);
    r4 = (r3 | r0);
    r0 = MemoryInline::FlatRead8((r5 + 244));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r3 = (r3_rot_1 & -16777216);
    r0 = MemoryInline::FlatRead8((r5 + 245));
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_7 & -65536);
    r0 = (r3 | r0);
    r30 = (r4 | r0);
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A5E4 (8 guest instruction(s))
}

loc_inl5_0x8041A5E4:
{
}

loc_inl5_0x8041A5E8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl5_0x8041A5FC;
    }
}

loc_inl5_0x8041A5EC:
{
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    goto loc_inl5_cont_8041A5E4;
}

loc_inl5_0x8041A5FC:
{
    r3 = 0;
}

loc_inl5_cont_8041A5E4:
{
    // end of inlined leaf 0x8041A5E4
    r3 = (r3 + 65536);
    r0 = MemoryInline::FlatRead32((r3 + -4052));
    r0 = (r0 & 65535);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r4 = (r4_rot_1 & -65536);
    r0 = 1;
    r3 = 0x806D0000u;
    r31 = (r3 + 23808);
    MemoryInline::FlatWriteRam32((r31 + 20), r0);
    MemoryInline::FlatWriteRam32((r31 + 24), r30);
    MemoryInline::FlatWriteRam32((r31 + 28), r0);
    MemoryInline::FlatWriteRam32((r31 + 32), r4);
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A5E4 (8 guest instruction(s))
}

loc_inl7_0x8041A5E4:
{
}

loc_inl7_0x8041A5E8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl7_0x8041A5FC;
    }
}

loc_inl7_0x8041A5EC:
{
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_10 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    goto loc_inl7_cont_8041A5E4;
}

loc_inl7_0x8041A5FC:
{
    r3 = 0;
}

loc_inl7_cont_8041A5E4:
{
    // end of inlined leaf 0x8041A5E4
    r4 = r31;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 160));
    ctr = r12;
    ctx->lr = 0x8042CB24u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
}

loc_8042CB24:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8042C9CC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8042C9CC_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8042C9CC func_8042C9CC preserves=true fpr_mask=0x00000000
