#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804E4C30(CpuContext* ctx);
extern "C" uint64_t func_804E4C30_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_800D0174(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

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
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];

    MKW_GUEST_ENTER(0x800D0174u);
    goto loc_800D0174;

loc_800D0174:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x8045747C (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    // end of inlined leaf 0x8045747C
    r25 = r3;
    r26 = r4;
    r4 = 0x80660000u;
    r28 = (r4 + -21920);
    ctx->lr = 0x800D019Cu;
    if constexpr (KnownRegArgsCpuCall<0x804E4C30u>(&func_804E4C30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_804E4C30_7B9 = func_804E4C30_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804E4C30_7B9);
        r4 = static_cast<uint32_t>(regargs_result_804E4C30_7B9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x804E4C30u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r29 = 0;
}

loc_800D01A4:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(255))) {
        goto loc_800D01BC;
    }
}

loc_800D01A8:
{
}

loc_800D01AC:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(254))) {
        goto loc_800D01C4;
    }
}

loc_800D01B0:
{
}

loc_800D01B4:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(253))) {
        goto loc_800D01CC;
    }
}

loc_800D01B8:
{
    goto loc_800D01D4;
}

loc_800D01BC:
{
    r27 = (r28 + 2412);
    goto loc_800D01F0;
}

loc_800D01C4:
{
    r27 = (r28 + 2468);
    goto loc_800D01F0;
}

loc_800D01CC:
{
    r27 = (r28 + 2524);
    goto loc_800D01F0;
}

loc_800D01D4:
{
}

loc_800D01D8:
{
    if ((static_cast<int32_t>(r26) < static_cast<int32_t>(32))) {
        goto loc_800D01E4;
    }
}

loc_800D01DC:
{
    r3 = 0;
    goto loc_800D030C;
}

loc_800D01E4:
{
    r0 = (r26 * 56);
    r3 = (r28 + r0);
    r27 = (r3 + 188);
}

loc_800D01F0:
{
    r30 = 0;
    r31 = (r26 + -253);
    r24 = 1;
    goto loc_800D02FC;
}

loc_800D0200:
{
}

loc_800D0204:
{
    if ((static_cast<uint32_t>(r31) <= static_cast<uint32_t>(2))) {
        goto loc_800D0224;
    }
}

loc_800D0208:
{
    r0 = (r26 + r30);
}

loc_800D0210:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(32))) {
        goto loc_800D0308;
    }
}

loc_800D0214:
{
    r0 = MemoryInline::FlatRead8(r27);
}

loc_800D021C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800D02F4;
    }
}

loc_800D0220:
{
    goto loc_800D0230;
}

loc_800D0224:
{
    r0 = MemoryInline::FlatRead8(r27);
}

loc_800D022C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800D0308;
    }
}

loc_800D0230:
{
}

loc_800D0234:
{
    if ((static_cast<int32_t>(r26) != static_cast<int32_t>(5))) {
        goto loc_800D0244;
    }
}

loc_800D0238:
{
}

loc_800D023C:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(2))) {
        goto loc_800D0244;
    }
}

loc_800D0240:
{
    r27 = (r28 + 804);
}

loc_800D0244:
{
    r3 = r25;
    r4 = r30;
    // inline leaf 0x804E4D50 (8 guest instruction(s))
    r5 = MemoryInline::FlatRead32((r3 + 4));
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r0 = PPC_Divwu(static_cast<uint32_t>(r4), static_cast<uint32_t>(r5));
    r0 = (r0 * r5);
    r0 = (r4 - r0);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_2 & -8);
    r3 = (r3 + r0);
    // end of inlined leaf 0x804E4D50
    r4 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWrite32((r27 + 36), r0);
    r4 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead16((r4 + 2));
    MemoryInline::FlatWrite16((r27 + 40), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead16(r4);
    MemoryInline::FlatWrite16((r27 + 42), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite32((r27 + 44), r0);
    r4 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r4 + 12));
    MemoryInline::FlatWrite32((r27 + 48), r0);
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r3 + 16));
    MemoryInline::FlatWrite32((r27 + 52), r0);
    r3 = (r27 + 4);
    r4 = MemoryInline::FlatRead32((r27 + 36));
    r5 = MemoryInline::FlatRead16((r27 + 40));
    r6 = MemoryInline::FlatRead16((r27 + 42));
    r7 = MemoryInline::FlatRead32((r27 + 44));
    r8 = MemoryInline::FlatRead32((r27 + 48));
    r9 = MemoryInline::FlatRead32((r27 + 52));
    r10 = 0;
    ctx->lr = 0x800D02BCu;
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
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    InvokeDirectCpu<0x804B86A0u>(ctx);
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
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    r3 = (r27 + 4);
    r4 = 1;
    r5 = 1;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -30528));
    f2.d = f1.d;
    f3.d = f1.d;
    r6 = 0;
    r7 = 0;
    r8 = 0;
    ctx->lr = 0x800D02E4u;
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
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    InvokeDirectCpu<0x804B8900u>(ctx);
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
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    MemoryInline::FlatWrite8(r27, static_cast<uint8_t>(r24));
    r29 = (r29 + 1);
}

loc_800D02F0:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(255))) {
        goto loc_800D0308;
    }
}

loc_800D02F4:
{
    r30 = (r30 + 1);
    r27 = (r27 + 56);
}

loc_800D02FC:
{
    r0 = MemoryInline::FlatRead32((r25 + 4));
}

loc_800D0304:
{
    if ((static_cast<uint32_t>(r30) < static_cast<uint32_t>(r0))) {
        goto loc_800D0200;
    }
}

loc_800D0308:
{
    r3 = r29;
}

loc_800D030C:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574C8 (9 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, true, false);
    // end of inlined leaf 0x804574C8
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
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800D0174 func_800D0174 preserves=true fpr_mask=0x00000000
