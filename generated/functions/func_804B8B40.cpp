#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804B8B40(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r30_rot_0 = 0;
    uint32_t r31_addr_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t stackword4 = 0;
    uint32_t stackword5 = 0;
    uint32_t stackword6 = 0;
    uint32_t stackword7 = 0;
    uint32_t stackword8 = 0;
    uint32_t stackword9 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];

    MKW_GUEST_ENTER(0x804B8B40u);
    goto loc_804B8B40;

loc_804B8B40:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r12 = 1127219200;
    r11 = MemoryInline::FlatRead32((r3 + 4));
    r31 = (r13 + -20344);
    r0 = (r11 & 255);
    f5.d = MemoryInline::FlatReadFloat64((r2 + -2360));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -2328));
    r29 = MemoryInline::FlatRead32(r3);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(24));
    r3 = (r3_rot_0 & 255);
    stackword4 = r0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(23));
    r0 = (r0_rot_0 & 255);
    r30_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(27));
    r30 = (r30_rot_0 & 7);
    stackword5 = r12;
    MemoryInline::FlatWriteRam32((r1 + 8), r12);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r31_addr_0 = (r31 + r30);
    r31 = MemoryInline::FlatRead8(r31_addr_0);
    r11 = (r0 ^ -2147483648);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword5), static_cast<uint32_t>(stackword4));
    stackword6 = r3;
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(24));
    r0 = (r0_rot_1 & 1);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f5.d));
    f2.d = MemoryInline::FlatReadFloat64((r2 + -2320));
    stackword7 = r12;
    MemoryInline::FlatWriteRam32((r1 + 16), r12);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(28));
    r3 = (r3_rot_1 & 1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    MemoryInline::FlatWrite32(r4, r31);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword7), static_cast<uint32_t>(stackword6));
    f4.d = PpcFmulsInline(f1.d, f3.d);
    MemoryInline::FlatWrite32(r5, r3);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_2 & 255);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f5.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -2324));
    stackword8 = r11;
    MemoryInline::FlatWriteRam32((r1 + 28), r11);
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(11));
    r4 = (r4_rot_0 & 1);
    r5 = MemoryInline::FlatRead32((r1 + 56));
    stackword9 = r12;
    MemoryInline::FlatWriteRam32((r1 + 24), r12);
    f3.d = PpcFmulsInline(f1.d, f3.d);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(13));
    r0 = (r0_rot_2 & 3);
    f1.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword9), static_cast<uint32_t>(stackword8));
    MemoryInline::FlatWriteFloat32(r6, f4.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    MemoryInline::FlatWriteFloat32(r7, f3.d);
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32(r8, f0.d);
    MemoryInline::FlatWrite8(r9, static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8(r10, static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite32(r5, r0);
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000027FE gpr_write=0x0000183B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x0000003F fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804B8B40 func_804B8B40 preserves=true fpr_mask=0x00000000
