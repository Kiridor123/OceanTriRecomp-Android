#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80834AC0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f9 = ctx->fpr[9];
    PPC_FPR f10 = ctx->fpr[10];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x80834AC0u);
    goto loc_80834AC0;

loc_80834AC0:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r30 = r6;
    r27 = r3;
    r28 = r4;
    r29 = r5;
    r4 = r30;
    r3 = (r3 + 228);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8082A1D0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r4 = r3;
    r3 = MemoryInline::FlatRead32((r27 + 40));
    r5 = r30;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x80834B0Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    ctr = ctx->ctr;
    r4 = MemoryInline::FlatRead8((r27 + 245));
    r31 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8082A360u>(ctx);
}

loc_80834B1C:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_80834B28;
    }
}

loc_80834B20:
{
    r7 = (r27 + 228);
    goto loc_80834B2C;
}

loc_80834B28:
{
    r7 = 0;
}

loc_80834B2C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r27 + 76), 0, 176u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r27 + 80));
    r8 = r30;
    f4.d = MemoryInline::FlatReadFloat32((r29 + 8));
    r3 = (r1 + 16);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r27 + 76));
    r4 = (r1 + 8);
    f6.d = MemoryInline::FlatReadFloat32(r29);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    f10.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 144u, (r27 + 220));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f6.d));
    f1.d = MemoryInline::FlatReadFloat32((r28 + 4));
    f9.d = static_cast<double>(PpcForceSingleValueInline(f10.d + f3.d));
    f0.d = MemoryInline::FlatReadFloat32(r28);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f4.d));
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 136u, (r27 + 212));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f2.d));
    f8.d = MemoryInline::FlatReadFloat32((r29 + 12));
    f3.d = MemoryInline::FlatReadFloat32((r29 + 4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f6.d));
    f8.d = static_cast<double>(PpcForceSingleValueInline(f9.d - f8.d));
    f7.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 148u, (r27 + 224));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f3.d));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 140u, (r27 + 216));
    r6 = MemoryInline::ReadResolved32(guest_range_0, 172u, (r27 + 248));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f7.d + f8.d));
    r5 = MemoryInline::ReadResolved8(guest_range_0, 169u, (r27 + 245));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f10.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f3.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f5.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f1.d);
    ctx->lr = 0x80834BB4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8082AAE0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    ctr = ctx->ctr;
    r11 = (r1 + 48);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80834AC0 func_80834AC0 preserves=true fpr_mask=0x00000000
