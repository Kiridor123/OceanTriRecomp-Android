#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_800451DC_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];

    MKW_GUEST_ENTER(0x800451DCu);
    goto loc_800451DC;

loc_800451DC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = 0x80660000u;
    r30 = (r3 + -11504);
    guest_range_0 = MemoryInline::ResolveRangeHost((r2 + -32696), 0, 96u, true, false);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 56u, (r2 + -32640));
    f1.d = MemoryInline::FlatReadFloat32((r13 + -32620));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r30 + 388), f0.d);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 52u, (r2 + -32644));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    MemoryInline::FlatWriteRamFloat32((r30 + 396), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 92u, (r2 + -32604));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r30 + 392), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 76u, (r2 + -32620));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteRamFloat32((r30 + 400), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r13 + -32612));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    MemoryInline::FlatWriteRamFloat32((r30 + 404), f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d / f1.d));
    MemoryInline::FlatWriteRamFloat32((r30 + 408), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r13 + -32624));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r30 + 412), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r13 + -17952));
    MemoryInline::FlatWriteRamFloat32((r30 + 420), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r13 + -17948));
    MemoryInline::FlatWriteRamFloat32((r30 + 416), f0.d);
    r31 = 0;
    MemoryInline::FlatWriteRam8((r30 + 94), static_cast<uint8_t>(r31));
    MemoryInline::FlatWriteRam8((r30 + 374), static_cast<uint8_t>(r31));
    r3 = (r30 + 40);
    r4 = (r13 + -17944);
    // inline leaf 0x800451C8 (5 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32(r4);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f0.d);
    // end of inlined leaf 0x800451C8
    r4 = r3;
    r3 = (r30 + 32);
    // inline leaf 0x800451C8 (5 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32(r4);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f0.d);
    // end of inlined leaf 0x800451C8
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -32696));
    MemoryInline::FlatWriteRamFloat32((r30 + 48), f1.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 52u, (r2 + -32644));
    MemoryInline::FlatWriteRamFloat32((r30 + 348), f0.d);
    MemoryInline::FlatWriteRamFloat32((r30 + 356), f0.d);
    MemoryInline::FlatWriteRamFloat32((r30 + 52), f0.d);
    MemoryInline::FlatWriteRamFloat32((r30 + 352), f1.d);
    MemoryInline::FlatWriteRamFloat32((r30 + 360), f1.d);
    MemoryInline::FlatWriteRamFloat32((r30 + 56), f1.d);
    r3 = (r30 + 60);
    r4 = (r13 + -17944);
    // inline leaf 0x800451C8 (5 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32(r4);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f0.d);
    // end of inlined leaf 0x800451C8
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -32696));
    MemoryInline::FlatWriteRamFloat32((r30 + 68), f2.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 52u, (r2 + -32644));
    MemoryInline::FlatWriteRamFloat32((r30 + 84), f0.d);
    MemoryInline::FlatWriteRamFloat32((r30 + 88), f2.d);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 208));
    MemoryInline::FlatWriteRamFloat32((r30 + 72), f1.d);
    MemoryInline::FlatWriteRamFloat32((r30 + 80), f2.d);
    MemoryInline::FlatWriteRamFloat32((r30 + 76), f2.d);
    MemoryInline::FlatWriteRamFloat32((r30 + 328), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 416));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    MemoryInline::FlatWriteRamFloat32((r30 + 332), f0.d);
    MemoryInline::FlatWriteRamFloat32((r30 + 316), f0.d);
    r3 = (r30 + 320);
    r4 = (r30 + 220);
    // inline leaf 0x800451C8 (5 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32(r4);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f0.d);
    // end of inlined leaf 0x800451C8
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -32696));
    MemoryInline::FlatWriteRamFloat32((r30 + 20), f1.d);
    MemoryInline::FlatWriteRamFloat32((r30 + 12), f1.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 56u, (r2 + -32640));
    MemoryInline::FlatWriteRamFloat32((r30 + 16), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 52u, (r2 + -32644));
    MemoryInline::FlatWriteRamFloat32((r30 + 24), f0.d);
    MemoryInline::FlatWriteRamFloat32((r30 + 28), f1.d);
    r3 = (r30 + 336);
    r4 = (r30 + 12);
    // inline leaf 0x80045394 (7 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32(r4);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f0.d);
    // end of inlined leaf 0x80045394
    r3 = (r30 + 364);
    r4 = (r30 + 356);
    // inline leaf 0x800451C8 (5 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32(r4);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f0.d);
    // end of inlined leaf 0x800451C8
    r0 = MemoryInline::FlatRead16((r13 + -32628));
    MemoryInline::FlatWriteRam16((r30 + 372), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam16((r30 + 312), static_cast<uint16_t>(r31));
    r4 = (r30 + 276);
    r3 = -1;
    r0 = (r30 + 240);
}

loc_80045344:
{
    MemoryInline::FlatWrite8((r4 + 8), static_cast<uint8_t>(r3));
    r4 = (r4 + -12);
}

loc_80045350:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r0))) {
        goto loc_80045344;
    }
}

loc_80045354:
{
    r4 = (r30 + 300);
    r3 = -1;
    r0 = (r30 + 288);
}

loc_80045360:
{
    MemoryInline::FlatWrite8((r4 + 8), static_cast<uint8_t>(r3));
    r4 = (r4 + -12);
}

loc_8004536C:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r0))) {
        goto loc_80045360;
    }
}

loc_80045370:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r13 + -17936), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r13 + -17934), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800451DC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800451DC_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000201F gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800451DC func_800451DC preserves=true fpr_mask=0x00000000
