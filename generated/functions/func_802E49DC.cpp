#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802EC728(CpuContext* ctx);
extern "C" uint64_t func_802EC728_ra8_0_18_0(CpuContext*, uint32_t);

extern "C" uint64_t func_802E49DC_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_802E49DC;

loc_802E49DC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r28 = r3;
    r29 = r4;
    r4 = 0;
    r5 = 404;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    guest_range_1 = MemoryInline::ResolveRangeHost(r28, 0, 318u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, r28, r29);
    // inline leaf 0x802D2844 (3 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -2080);
    // end of inlined leaf 0x802D2844
    MemoryInline::WriteResolved32(guest_range_1, 72u, (r28 + 72), r3);
    r30 = -1;
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 196u, ((static_cast<uint32_t>(static_cast<uint16_t>(r30)) << 16) | static_cast<uint16_t>(r30)))) {
        MemoryInline::WriteResolved16(guest_range_1, 198u, (r28 + 198), r30);
        MemoryInline::WriteResolved16(guest_range_1, 196u, (r28 + 196), r30);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 192u, ((static_cast<uint32_t>(static_cast<uint16_t>(r30)) << 16) | static_cast<uint16_t>(r30)))) {
        MemoryInline::WriteResolved16(guest_range_1, 194u, (r28 + 194), r30);
        MemoryInline::WriteResolved16(guest_range_1, 192u, (r28 + 192), r30);
    }
    MemoryInline::WriteResolved16(guest_range_1, 190u, (r28 + 190), static_cast<uint16_t>(r30));
    r31 = 0;
    MemoryInline::WriteResolved8(guest_range_1, 206u, (r28 + 206), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_1, 207u, (r28 + 207), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved16(guest_range_1, 308u, (r28 + 308), static_cast<uint16_t>(r31));
    MemoryInline::WriteResolved8(guest_range_1, 310u, (r28 + 310), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_1, 312u, (r28 + 312), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_1, 311u, (r28 + 311), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_1, 314u, (r28 + 314), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved16(guest_range_1, 316u, (r28 + 316), static_cast<uint16_t>(r31));
    MemoryInline::WriteResolved8(guest_range_1, 313u, (r28 + 313), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_1, 64u, (r28 + 64), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_1, 56u, (r28 + 56), static_cast<uint8_t>(r31));
    r3 = r29;
    r4 = (r28 + 363);
    r5 = (r28 + 367);
    // inline leaf 0x802EDB54 (7 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r4 + 1), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r4 + 2), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r4 + 3), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r5 + 1), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x802EDB54
    r3 = r29;
    ctx->lr = 0x802E4A78u;
    if constexpr (KnownRegArgsCpuCall<0x802EC728u>(&func_802EC728)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802EC728_FB3 = func_802EC728_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_802EC728_FB3);
        r4 = static_cast<uint32_t>(regargs_result_802EC728_FB3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802EC728u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0 = (static_cast<int32_t>(r0) >> 31);
    r0 = (r0 & 5);
}

loc_802E4A88:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r28 + 25), 0, 375u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 337u, (r28 + 362), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r29 + 876));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_0, 335u, (r28 + 360), static_cast<uint16_t>(r0));
    r0 = 255;
    MemoryInline::WriteResolved8(guest_range_0, 331u, (r28 + 356), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 333u, (r28 + 358), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 334u, (r28 + 359), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 349u, (r28 + 374), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 355u, (r28 + 380), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 354u, (r28 + 379), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 351u, (r28 + 376), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 356u, (r28 + 381), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 357u, (r28 + 382), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r28 + 25), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_0, 8u, (r28 + 33), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r28 + 27), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_0, 10u, (r28 + 35), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r28 + 29), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_0, 12u, (r28 + 37), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r28 + 31), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_0, 14u, (r28 + 39), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_0, 16u, (r28 + 41), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_0, 18u, (r28 + 43), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_0, 359u, (r28 + 384), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 358u, (r28 + 383), static_cast<uint8_t>(r31));
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 371u, ((static_cast<uint32_t>(static_cast<uint16_t>(r31)) << 16) | static_cast<uint16_t>(r31)))) {
        MemoryInline::WriteResolved16(guest_range_0, 371u, (r28 + 396), r31);
        MemoryInline::WriteResolved16(guest_range_0, 373u, (r28 + 398), r31);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 363u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 363u, (r28 + 388), r31);
        MemoryInline::WriteResolved32(guest_range_0, 367u, (r28 + 392), r31);
    }
    r30 = 0;
}

loc_802E4B00:
{
    r3 = (r30 & 255);
    r4 = 0;
    // inline leaf 0x802E04CC (6 guest instruction(s))
    r5 = 0x806C0000u;
    r5 = (r5 + 1136);
    r0 = (r3 & 255);
    r3 = (r5 + r0);
    MemoryInline::FlatWrite8((r3 + 124), static_cast<uint8_t>(r4));
    // end of inlined leaf 0x802E04CC
    r30 = (r30 + 1);
}

loc_802E4B14:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(10))) {
        goto loc_802E4B00;
    }
}

loc_802E4B18:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802E49DC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802E49DC_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802E49DC func_802E49DC preserves=true fpr_mask=0x00000000
