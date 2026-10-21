#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_800F2AF8_rac0_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r6, uint32_t arg_r7)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    PPC_FPR f0 = ctx->fpr[0];
    ctx->gpr[6] = arg_r6;
    ctx->gpr[7] = arg_r7;

    MKW_GUEST_ENTER(0x800F2AF8u);
    goto loc_800F2AF8;

loc_800F2AF8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = MemoryInline::FlatRead32((r13 + -30608));
    r4 = 0;
    r5 = 580;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29952));
    guest_range_0 = MemoryInline::ResolveRangeHost((r13 + -30608), 0, 4u, true, false);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -30608));
    MemoryInline::FlatWriteFloat32((r3 + 28), f0.d);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -30608));
    MemoryInline::FlatWriteFloat32((r3 + 40), f0.d);
    r0 = 0;
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -30608));
    MemoryInline::FlatWrite32((r3 + 52), r0);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -30608));
    MemoryInline::FlatWrite32(r3, r0);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -30608));
    MemoryInline::FlatWrite32((r3 + 12), r0);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -30608));
    MemoryInline::FlatWrite8((r3 + 24), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -30608));
    MemoryInline::FlatWriteFloat32((r3 + 32), f0.d);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -30608));
    MemoryInline::FlatWriteFloat32((r3 + 44), f0.d);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -30608));
    MemoryInline::FlatWrite32((r3 + 56), r0);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -30608));
    MemoryInline::FlatWrite32((r3 + 4), r0);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -30608));
    MemoryInline::FlatWrite32((r3 + 16), r0);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -30608));
    MemoryInline::FlatWrite8((r3 + 25), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -30608));
    MemoryInline::FlatWriteFloat32((r3 + 36), f0.d);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -30608));
    MemoryInline::FlatWriteFloat32((r3 + 48), f0.d);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -30608));
    MemoryInline::FlatWrite32((r3 + 60), r0);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -30608));
    MemoryInline::FlatWrite32((r3 + 8), r0);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -30608));
    MemoryInline::FlatWrite32((r3 + 20), r0);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -30608));
    MemoryInline::FlatWrite8((r3 + 26), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -30608));
    MemoryInline::FlatWrite8((r3 + 67), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -30608));
    MemoryInline::FlatWrite8((r3 + 68), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -30608));
    MemoryInline::FlatWrite8((r3 + 69), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -30608));
    MemoryInline::FlatWrite16((r3 + 70), static_cast<uint16_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -30608));
    MemoryInline::FlatWrite8((r3 + 73), static_cast<uint8_t>(r0));
    r5 = 255;
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -30608));
    MemoryInline::FlatWrite8((r3 + 74), static_cast<uint8_t>(r5));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -30608));
    MemoryInline::FlatWrite8((r3 + 75), static_cast<uint8_t>(r5));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -30608));
    MemoryInline::FlatWriteFloat32((r3 + 372), f0.d);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -30608));
    MemoryInline::FlatWrite8((r3 + 376), static_cast<uint8_t>(r5));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -30608));
    MemoryInline::FlatWrite8((r3 + 377), static_cast<uint8_t>(r5));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -30608));
    MemoryInline::FlatWrite8((r3 + 378), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -30608));
    MemoryInline::FlatWrite8((r3 + 443), static_cast<uint8_t>(r5));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -30608));
    MemoryInline::FlatWrite8((r3 + 444), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -30608));
    MemoryInline::FlatWrite8((r3 + 76), static_cast<uint8_t>(r0));
    r4 = 127;
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -30608));
    MemoryInline::FlatWrite8((r3 + 452), static_cast<uint8_t>(r4));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -30608));
    MemoryInline::FlatWrite8((r3 + 453), static_cast<uint8_t>(r4));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -30608));
    MemoryInline::FlatWrite8((r3 + 454), static_cast<uint8_t>(r4));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -30608));
    MemoryInline::FlatWrite8((r3 + 455), static_cast<uint8_t>(r4));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -30608));
    MemoryInline::FlatWrite8((r3 + 456), static_cast<uint8_t>(r4));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -30608));
    MemoryInline::FlatWrite8((r3 + 457), static_cast<uint8_t>(r4));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -30608));
    MemoryInline::FlatWrite8((r3 + 458), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -30608));
    MemoryInline::FlatWrite8((r3 + 459), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -30608));
    MemoryInline::FlatWrite8((r3 + 460), static_cast<uint8_t>(r0));
    r3 = 65536;
    r4 = (r3 + -1);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -30608));
    MemoryInline::FlatWrite16((r3 + 90), static_cast<uint16_t>(r4));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -30608));
    MemoryInline::FlatWrite16((r3 + 92), static_cast<uint16_t>(r4));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -30608));
    MemoryInline::FlatWrite8((r3 + 468), static_cast<uint8_t>(r5));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -30608));
    MemoryInline::FlatWrite8((r3 + 469), static_cast<uint8_t>(r5));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -30608));
    MemoryInline::FlatWrite8((r3 + 470), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -30608));
    MemoryInline::FlatWrite8((r3 + 471), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -30608));
    MemoryInline::FlatWrite8((r3 + 472), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -30608));
    MemoryInline::FlatWrite8((r3 + 570), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -30608));
    MemoryInline::FlatWrite16((r3 + 564), static_cast<uint16_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -30608));
    MemoryInline::FlatWrite16((r3 + 566), static_cast<uint16_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -30608));
    MemoryInline::FlatWrite8((r3 + 568), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -30608));
    MemoryInline::FlatWrite8((r3 + 569), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -30608));
    MemoryInline::FlatWrite16((r3 + 574), static_cast<uint16_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -30608));
    MemoryInline::FlatWrite16((r3 + 576), static_cast<uint16_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -30608));
    MemoryInline::FlatWrite8((r3 + 571), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -30608));
    MemoryInline::FlatWrite8((r3 + 572), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -30608));
    MemoryInline::FlatWrite8((r3 + 573), static_cast<uint8_t>(r0));
    r3 = 17;
    // inline leaf 0x803BECD4 (12 guest instruction(s))
}

loc_inl0_0x803BECD4:
{
    r0 = (r3 & 255);
}

loc_inl0_0x803BECDC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(20))) {
        goto loc_inl0_0x803BECF4;
    }
}

loc_inl0_0x803BECE0:
{
    r3 = 0x80660000u;
    r3 = (r3 + -19184);
    r3_addr_0 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_0);
    r3 = (r0 ^ 1);
    goto loc_inl0_cont_803BECD4;
}

loc_inl0_0x803BECF4:
{
    r3 = 0x80660000u;
    r3 = (r3 + -19184);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead8(r3_addr_1);
}

loc_inl0_cont_803BECD4:
{
    // end of inlined leaf 0x803BECD4
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -30608));
    MemoryInline::FlatWrite8((r4 + 495), static_cast<uint8_t>(r3));
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -30608));
    MemoryInline::FlatWrite8((r4 + 494), static_cast<uint8_t>(r3));
    r3 = 18;
    // inline leaf 0x803BECD4 (12 guest instruction(s))
}

loc_inl1_0x803BECD4:
{
    r0 = (r3 & 255);
}

loc_inl1_0x803BECDC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(20))) {
        goto loc_inl1_0x803BECF4;
    }
}

loc_inl1_0x803BECE0:
{
    r3 = 0x80660000u;
    r3 = (r3 + -19184);
    r3_addr_3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_3);
    r3 = (r0 ^ 1);
    goto loc_inl1_cont_803BECD4;
}

loc_inl1_0x803BECF4:
{
    r3 = 0x80660000u;
    r3 = (r3 + -19184);
    r3_addr_4 = (r3 + r0);
    r3 = MemoryInline::FlatRead8(r3_addr_4);
}

loc_inl1_cont_803BECD4:
{
    // end of inlined leaf 0x803BECD4
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -30608));
    MemoryInline::FlatWrite8((r4 + 497), static_cast<uint8_t>(r3));
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -30608));
    MemoryInline::FlatWrite8((r4 + 496), static_cast<uint8_t>(r3));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800F2AF8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800F2AF8_rac0_0_18_0(ctx, ctx->gpr[6], ctx->gpr[7]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002006 gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x00 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800F2AF8 func_800F2AF8 preserves=true fpr_mask=0x00000000
