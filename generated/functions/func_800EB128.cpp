#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800EB128(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_ca_0 = 0;
    uint32_t r0_not_0 = 0;
    uint32_t r0_subfc_min_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t xer = ctx->xer;

    goto loc_800EB128;

loc_800EB128:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x80457478 (10 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, false, true);
    // end of inlined leaf 0x80457478
    r29 = r3;
    r30 = r4;
    r3 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x800EA840u>(ctx);
    r3 = ctx->gpr[3];
    r31 = r3;
    r3 = MemoryInline::FlatRead8((r3 + 137));
    r6 = (r3 + 1);
    r3 = r30;
    r5 = 65536;
    r0 = 2;
    r0_subfc_min_0 = r0;
    r0 = (r0_subfc_min_0 - r6);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r0_subfc_min_0) >= static_cast<uint32_t>(r6) ? 1u : 0u) << 29);
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r4 = (r4_rot_0 & 1);
    r0 = 0;
    r0_not_0 = ~(r0);
    r0_ca_0 = (xer >> 29) & 1u;
    r0 = (r0_not_0 + r4);
    r0 = (r0 + r0_ca_0);
    r0 = (r6 & ~r0);
    r4 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x800E629Cu>(ctx);
    r3 = ctx->gpr[3];
}

loc_800EB184:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800EB360;
    }
}

loc_800EB188:
{
    r3 = MemoryInline::FlatRead32(r31);
    r4 = MemoryInline::FlatRead32((r31 + 4));
    r5 = MemoryInline::FlatRead32((r31 + 8));
    r6 = MemoryInline::FlatRead16((r31 + 88));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    ctx->lr = 0x800EB19Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->xer = xer;
    InvokeDirectCpu<0x800EE7E4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead32((r31 + 4));
}

loc_800EB1A4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_800EB1B4;
    }
}

loc_800EB1A8:
{
    r3 = r31;
    r5 = MemoryInline::FlatRead32((r31 + 144));
    ctx->lr = 0x800EB1B4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->xer = xer;
    InvokeDirectCpu<0x800EA4A8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    xer = ctx->xer;
}

loc_800EB1B4:
{
    r4 = MemoryInline::FlatRead32((r31 + 8));
}

loc_800EB1BC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_800EB1D4;
    }
}

loc_800EB1C0:
{
    r3 = r31;
    r5 = MemoryInline::FlatRead32((r31 + 144));
    r0 = MemoryInline::FlatRead32((r13 + -17420));
    r5 = (r5 + r0);
    ctx->lr = 0x800EB1D4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->xer = xer;
    InvokeDirectCpu<0x800EA4A8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    xer = ctx->xer;
}

loc_800EB1D4:
{
    r3 = MemoryInline::FlatRead32(r31);
    r0 = MemoryInline::FlatRead32(r3);
}

loc_800EB1E0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800EB1EC;
    }
}

loc_800EB1E4:
{
    r23 = 0;
    goto loc_800EB1F0;
}

loc_800EB1EC:
{
    r23 = MemoryInline::FlatRead16((r31 + 90));
    r23 = (r23 << 16);
    r23 = (static_cast<int32_t>(r23) >> 16);
}

loc_800EB1F0:
{
    r0 = MemoryInline::FlatRead32((r31 + 4));
}

loc_800EB1F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800EB298;
    }
}

loc_800EB1FC:
{
    r3 = MemoryInline::FlatRead16((r31 + 138));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x800E8EACu>(ctx);
    r3 = ctx->gpr[3];
    r28 = r3;
    r3 = MemoryInline::FlatRead16((r31 + 96));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x800E8EACu>(ctx);
    r3 = ctx->gpr[3];
    r27 = r3;
    r3 = MemoryInline::FlatRead16((r31 + 94));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x800E8EACu>(ctx);
    r3 = ctx->gpr[3];
    r26 = r3;
    r3 = MemoryInline::FlatRead16((r31 + 92));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x800E8EACu>(ctx);
    r3 = ctx->gpr[3];
    r25 = r3;
    r3 = MemoryInline::FlatRead16((r31 + 78));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x800E8EACu>(ctx);
    r3 = ctx->gpr[3];
    r24 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x800E6734u>(ctx);
    r3 = ctx->gpr[3];
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x800E672Cu>(ctx);
    r3 = ctx->gpr[3];
    r4 = r3;
    MemoryInline::FlatWriteRam32((r1 + 8), r28);
    r3 = MemoryInline::FlatRead32((r31 + 4));
    r5 = r24;
    r6 = r25;
    r7 = r26;
    r8 = r27;
    r9 = r23;
    r10 = 127;
    ctx->lr = 0x800EB268u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->xer = xer;
    InvokeDirectCpu<0x804C2EC0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    xer = ctx->xer;
    r3 = r30;
    r4 = 512;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x800E629Cu>(ctx);
    r3 = ctx->gpr[3];
}

loc_800EB278:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800EB28C;
    }
}

loc_800EB27C:
{
    r3 = MemoryInline::FlatRead32((r31 + 4));
    r4 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x80471C90u>(ctx);
    goto loc_800EB298;
}

loc_800EB28C:
{
    r3 = MemoryInline::FlatRead32((r31 + 4));
    r4 = 1;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x80471C90u>(ctx);
}

loc_800EB298:
{
    r0 = MemoryInline::FlatRead32((r31 + 8));
}

loc_800EB2A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800EB340;
    }
}

loc_800EB2A4:
{
    r3 = MemoryInline::FlatRead16((r31 + 138));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x800E8EACu>(ctx);
    r3 = ctx->gpr[3];
    r24 = r3;
    r3 = MemoryInline::FlatRead16((r31 + 96));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x800E8EACu>(ctx);
    r3 = ctx->gpr[3];
    r25 = r3;
    r3 = MemoryInline::FlatRead16((r31 + 94));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x800E8EACu>(ctx);
    r3 = ctx->gpr[3];
    r26 = r3;
    r3 = MemoryInline::FlatRead16((r31 + 92));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x800E8EACu>(ctx);
    r3 = ctx->gpr[3];
    r27 = r3;
    r3 = MemoryInline::FlatRead16((r31 + 78));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x800E8EACu>(ctx);
    r3 = ctx->gpr[3];
    r28 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x800E6734u>(ctx);
    r3 = ctx->gpr[3];
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x800E672Cu>(ctx);
    r3 = ctx->gpr[3];
    r4 = r3;
    MemoryInline::FlatWriteRam32((r1 + 8), r24);
    r3 = MemoryInline::FlatRead32((r31 + 8));
    r5 = r28;
    r6 = r27;
    r7 = r26;
    r8 = r25;
    r9 = 127;
    r10 = 127;
    ctx->lr = 0x800EB310u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->xer = xer;
    InvokeDirectCpu<0x804C2EC0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    xer = ctx->xer;
    r3 = r30;
    r4 = 512;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x800E629Cu>(ctx);
    r3 = ctx->gpr[3];
}

loc_800EB320:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800EB334;
    }
}

loc_800EB324:
{
    r3 = MemoryInline::FlatRead32((r31 + 8));
    r4 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x80471C90u>(ctx);
    goto loc_800EB340;
}

loc_800EB334:
{
    r3 = MemoryInline::FlatRead32((r31 + 8));
    r4 = 1;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x80471C90u>(ctx);
}

loc_800EB340:
{
    r3 = MemoryInline::FlatRead32((r29 + 16));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r29 + 16), r0);
    r3 = r30;
    r4 = 256;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x800E5F7Cu>(ctx);
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 130), static_cast<uint8_t>(r0));
}

loc_800EB360:
{
    r11 = (r1 + 64);
    // inline leaf 0x804574C4 (10 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, true, false);
    // end of inlined leaf 0x804574C4
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800EB128 func_800EB128 preserves=true fpr_mask=0x00000000
