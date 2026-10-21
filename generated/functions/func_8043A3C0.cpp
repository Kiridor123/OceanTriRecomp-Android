#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8043A3C0_ra38_1e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;
    const uint32_t r30_entry = r30;
    const uint32_t r31_entry = r31;
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x8043A3C0u);
    goto loc_8043A3C0;

loc_8043A3C0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r4;
    r31 = MemoryInline::FlatRead32((r13 + -16688));
}

loc_8043A3E0:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_8043A5F4;
    }
}

loc_8043A3E4:
{
    r0 = (r3 & 255);
}

loc_8043A3EC:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(12))) {
        goto loc_8043A5F4;
    }
}

loc_8043A3F0:
{
    r3 = 0x80600000u;
    r3 = (r3 + 20440);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x8043A408u:
        goto loc_8043A408;
        break;
    case 0x8043A440u:
        goto loc_8043A440;
        break;
    case 0x8043A45Cu:
        goto loc_8043A45C;
        break;
    case 0x8043A478u:
        goto loc_8043A478;
        break;
    case 0x8043A484u:
        goto loc_8043A484;
        break;
    case 0x8043A4C8u:
        goto loc_8043A4C8;
        break;
    case 0x8043A4D4u:
        goto loc_8043A4D4;
        break;
    case 0x8043A4E0u:
        goto loc_8043A4E0;
        break;
    case 0x8043A4ECu:
        goto loc_8043A4EC;
        break;
    case 0x8043A4F8u:
        goto loc_8043A4F8;
        break;
    case 0x8043A53Cu:
        goto loc_8043A53C;
        break;
    case 0x8043A548u:
        goto loc_8043A548;
        break;
    case 0x8043A41Cu:
        goto loc_8043A41C;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_8043A408:
{
    r3 = r30;
    r4 = (r31 + 15);
    r5 = 10;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_8043A5F4;
}

loc_8043A41C:
{
    r0 = MemoryInline::FlatRead8((r31 + 12));
}

loc_8043A424:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8043A434;
    }
}

loc_8043A428:
{
    r0 = MemoryInline::FlatRead8((r31 + 1));
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    goto loc_8043A5F4;
}

loc_8043A434:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    goto loc_8043A5F4;
}

loc_8043A440:
{
    r0 = MemoryInline::FlatRead8((r31 + 24));
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r31 + 54));
    MemoryInline::FlatWrite8((r4 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r31 + 55));
    MemoryInline::FlatWrite8((r4 + 2), static_cast<uint8_t>(r0));
    goto loc_8043A5F4;
}

loc_8043A45C:
{
    r3 = MemoryInline::FlatRead8((r31 + 24));
    // inline leaf 0x80047BA4 (6 guest instruction(s))
    r4 = 0x80670000u;
    r4 = (r4 + -18072);
    r0 = (r3 & 255);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 1096));
    // end of inlined leaf 0x80047BA4
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r3));
    r3 = MemoryInline::FlatRead8((r31 + 24));
    // inline leaf 0x80047B8C (6 guest instruction(s))
    r4 = 0x80670000u;
    r4 = (r4 + -18072);
    r0 = (r3 & 255);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 1110));
    // end of inlined leaf 0x80047B8C
    MemoryInline::FlatWrite8((r30 + 1), static_cast<uint8_t>(r3));
    goto loc_8043A5F4;
}

loc_8043A478:
{
    r0 = MemoryInline::FlatRead8((r31 + 25));
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    goto loc_8043A5F4;
}

loc_8043A484:
{
    r0 = MemoryInline::FlatRead8((r31 + 26));
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r31 + 27));
    MemoryInline::FlatWrite8((r4 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r31 + 28));
    MemoryInline::FlatWrite8((r4 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r31 + 48));
    MemoryInline::FlatWrite8((r4 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r31 + 49));
    MemoryInline::FlatWrite8((r4 + 4), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r31 + 50));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8((r4 + 5), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r31 + 52));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8((r4 + 6), static_cast<uint8_t>(r0));
    goto loc_8043A5F4;
}

loc_8043A4C8:
{
    r0 = MemoryInline::FlatRead8((r31 + 30));
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    goto loc_8043A5F4;
}

loc_8043A4D4:
{
    r0 = MemoryInline::FlatRead8((r31 + 39));
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    goto loc_8043A5F4;
}

loc_8043A4E0:
{
    r0 = MemoryInline::FlatRead8((r31 + 33));
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    goto loc_8043A5F4;
}

loc_8043A4EC:
{
    r0 = MemoryInline::FlatRead8((r31 + 34));
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    goto loc_8043A5F4;
}

loc_8043A4F8:
{
    r0 = MemoryInline::FlatRead8((r31 + 35));
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r31 + 36));
    MemoryInline::FlatWrite8((r4 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r31 + 37));
    MemoryInline::FlatWrite8((r4 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r31 + 48));
    MemoryInline::FlatWrite8((r4 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r31 + 49));
    MemoryInline::FlatWrite8((r4 + 4), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r31 + 50));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8((r4 + 5), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r31 + 52));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8((r4 + 6), static_cast<uint8_t>(r0));
    goto loc_8043A5F4;
}

loc_8043A53C:
{
    r0 = MemoryInline::FlatRead8((r31 + 38));
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    goto loc_8043A5F4;
}

loc_8043A548:
{
    r0 = MemoryInline::FlatRead8((r31 + 12));
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 3u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, r4, static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8(r31);
}

loc_8043A558:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(4))) {
        goto loc_8043A58C;
    }
}

loc_8043A55C:
{
    r0 = MemoryInline::FlatRead8((r31 + 12));
}

loc_8043A564:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(12))) {
        goto loc_8043A580;
    }
}

loc_8043A568:
{
    r0 = MemoryInline::FlatRead8((r31 + 2));
}

loc_8043A570:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_8043A580;
    }
}

loc_8043A574:
{
    r0 = 3;
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r4 + 1), static_cast<uint8_t>(r0));
    goto loc_8043A5D4;
}

loc_8043A580:
{
    r0 = 1;
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r4 + 1), static_cast<uint8_t>(r0));
    goto loc_8043A5D4;
}

loc_8043A58C:
{
}

loc_8043A590:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(3))) {
        goto loc_8043A5AC;
    }
}

loc_8043A594:
{
    r0 = MemoryInline::FlatRead8((r31 + 1));
}

loc_8043A59C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8043A5AC;
    }
}

loc_8043A5A0:
{
    r0 = 2;
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r4 + 1), static_cast<uint8_t>(r0));
    goto loc_8043A5D4;
}

loc_8043A5AC:
{
}

loc_8043A5B0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(3))) {
        goto loc_8043A5CC;
    }
}

loc_8043A5B4:
{
    r0 = MemoryInline::FlatRead8((r31 + 1));
}

loc_8043A5BC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_8043A5CC;
    }
}

loc_8043A5C0:
{
    r0 = 4;
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r4 + 1), static_cast<uint8_t>(r0));
    goto loc_8043A5D4;
}

loc_8043A5CC:
{
    r0 = 0;
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r4 + 1), static_cast<uint8_t>(r0));
}

loc_8043A5D4:
{
    r0 = MemoryInline::FlatRead8((r31 + 626));
}

loc_8043A5DC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8043A5EC;
    }
}

loc_8043A5E0:
{
    r0 = 0;
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r4 + 2), static_cast<uint8_t>(r0));
    goto loc_8043A5F4;
}

loc_8043A5EC:
{
    r0 = 1;
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r4 + 2), static_cast<uint8_t>(r0));
}

loc_8043A5F4:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    ctx->gpr[30] = r30_entry;
    ctx->gpr[31] = r31_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8043A3C0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8043A3C0_ra38_1e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000203B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8043A3C0 func_8043A3C0 preserves=true fpr_mask=0x00000000
