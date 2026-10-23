#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_804BDE00_ra38_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];

    goto loc_804BDE00;

loc_804BDE00:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = (r3 + 240);
    f6.d = MemoryInline::FlatReadFloat32((r2 + -2200));
    r4 = -1;
    r31 = 0;
    f5.d = MemoryInline::FlatReadFloat32((r2 + -2196));
    r30 = (r3 + 276);
    f4.d = MemoryInline::FlatReadFloat32((r2 + -2192));
    MemoryInline::FlatWrite8((r3 + 1364), static_cast<uint8_t>(r31));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -2188));
    guest_range_0 = MemoryInline::ResolveRangeHost((r13 + -32628), 0, 20u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r13 + -32620));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 208));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f0.d));
    r5 = MemoryInline::FlatRead16((r3 + 1284));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -2208));
    MemoryInline::FlatWriteFloat32((r3 + 1320), f0.d);
    r11 = MemoryInline::FlatRead32((r3 + 220));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r13 + -32620));
    r10 = MemoryInline::FlatRead32((r3 + 224));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 1328), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r13 + -32620));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 1324), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r13 + -32620));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 1332), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r13 + -32612));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f5.d / f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 1336), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r13 + -32612));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f6.d / f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 1340), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r13 + -32624));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 1344), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r13 + -17952));
    MemoryInline::FlatWriteFloat32((r3 + 1352), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r13 + -15248));
    MemoryInline::FlatWriteFloat32((r3 + 1348), f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    MemoryInline::FlatWrite32((r3 + 8), r31);
    MemoryInline::FlatWrite32((r3 + 4), r31);
    MemoryInline::FlatWrite32(r3, r31);
    MemoryInline::FlatWrite16((r3 + 1280), static_cast<uint16_t>(r31));
    MemoryInline::FlatWrite16((r3 + 1282), static_cast<uint16_t>(r5));
    MemoryInline::FlatWrite8((r3 + 94), static_cast<uint8_t>(r31));
    MemoryInline::FlatWrite8((r3 + 1278), static_cast<uint8_t>(r31));
    r8 = MemoryInline::FlatRead32((r13 + -15272));
    r7 = MemoryInline::FlatRead32((r13 + -15268));
    MemoryInline::FlatWrite32((r3 + 44), r7);
    MemoryInline::FlatWriteFloat32((r3 + 1260), f5.d);
    MemoryInline::FlatWriteFloat32((r3 + 1264), f2.d);
    r6 = MemoryInline::FlatRead32((r3 + 1260));
    MemoryInline::FlatWrite32((r3 + 40), r8);
    r5 = MemoryInline::FlatRead32((r3 + 1264));
    MemoryInline::FlatWrite32((r3 + 32), r8);
    MemoryInline::FlatWrite32((r3 + 36), r7);
    MemoryInline::FlatWriteFloat32((r3 + 48), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 1252), f5.d);
    MemoryInline::FlatWriteFloat32((r3 + 52), f5.d);
    MemoryInline::FlatWriteFloat32((r3 + 1256), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 56), f2.d);
    r12 = MemoryInline::FlatRead32((r13 + -15272));
    r7 = MemoryInline::FlatRead32((r13 + -15268));
    MemoryInline::FlatWrite32((r3 + 64), r7);
    MemoryInline::FlatWriteFloat32((r3 + 20), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 12), f2.d);
    r7 = MemoryInline::FlatRead32((r3 + 20));
    MemoryInline::FlatWriteFloat32((r3 + 16), f6.d);
    r9 = MemoryInline::FlatRead32((r3 + 12));
    r8 = MemoryInline::FlatRead32((r3 + 16));
    MemoryInline::FlatWrite32((r3 + 60), r12);
    MemoryInline::FlatWriteFloat32((r3 + 68), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 84), f5.d);
    MemoryInline::FlatWriteFloat32((r3 + 88), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 72), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 80), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 76), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 1232), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 1236), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 1220), f0.d);
    MemoryInline::FlatWrite32((r3 + 1224), r11);
    MemoryInline::FlatWrite32((r3 + 1228), r10);
    MemoryInline::FlatWriteFloat32((r3 + 24), f5.d);
    MemoryInline::FlatWriteFloat32((r3 + 28), f2.d);
    MemoryInline::FlatWrite32((r3 + 1240), r9);
    MemoryInline::FlatWrite32((r3 + 1244), r8);
    MemoryInline::FlatWrite32((r3 + 1248), r7);
    MemoryInline::FlatWrite32((r3 + 1268), r6);
    MemoryInline::FlatWrite32((r3 + 1272), r5);
    r5 = MemoryInline::ReadResolved16(guest_range_0, 0u, (r13 + -32628));
    MemoryInline::FlatWrite16((r3 + 1276), static_cast<uint16_t>(r5));
    MemoryInline::FlatWrite16((r3 + 312), static_cast<uint16_t>(r31));
}

loc_804BDF80:
{
    MemoryInline::FlatWrite8((r30 + 8), static_cast<uint8_t>(r4));
    r30 = (r30 + -12);
}

loc_804BDF8C:
{
    if ((static_cast<uint32_t>(r30) >= static_cast<uint32_t>(r0))) {
        goto loc_804BDF80;
    }
}

loc_804BDF90:
{
    r5 = (r3 + 300);
    r0 = (r3 + 288);
    r4 = -1;
    // nop
}

loc_804BDFA0:
{
    MemoryInline::FlatWrite8((r5 + 8), static_cast<uint8_t>(r4));
    r5 = (r5 + -12);
}

loc_804BDFAC:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r0))) {
        goto loc_804BDFA0;
    }
}

loc_804BDFB0:
{
    r4 = 0;
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 315), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 1365), static_cast<uint8_t>(r0));
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    return r4;
}

}

extern "C" void func_804BDE00(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_804BDE00_ra38_0_10_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000203F gpr_write=0x00001FF3 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x0000007F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804BDE00 func_804BDE00 preserves=true fpr_mask=0x00000000
