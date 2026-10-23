#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804E4C30(CpuContext* ctx);
extern "C" uint64_t func_804E4C30_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_800D042C(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_800D042C;

loc_800D042C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457480 (8 guest instruction(s))
    // end of inlined leaf 0x80457480
    r26 = r3;
    r27 = r4;
    r4 = 0x80660000u;
    r29 = (r4 + -21920);
    ctx->lr = 0x800D0454u;
    if constexpr (KnownRegArgsCpuCall<0x804E4C30u>(&func_804E4C30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_804E4C30_7DF = func_804E4C30_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804E4C30_7DF);
        r4 = static_cast<uint32_t>(regargs_result_804E4C30_7DF >> 32);
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
    r30 = 0;
}

loc_800D045C:
{
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(255))) {
        goto loc_800D0468;
    }
}

loc_800D0460:
{
    r28 = (r29 + 2412);
    goto loc_800D0494;
}

loc_800D0468:
{
}

loc_800D046C:
{
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(254))) {
        goto loc_800D0478;
    }
}

loc_800D0470:
{
    r28 = (r29 + 2468);
    goto loc_800D0494;
}

loc_800D0478:
{
}

loc_800D047C:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(32))) {
        goto loc_800D0488;
    }
}

loc_800D0480:
{
    r3 = 0;
    goto loc_800D05B4;
}

loc_800D0488:
{
    r0 = (r27 * 56);
    r3 = (r29 + r0);
    r28 = (r3 + 188);
}

loc_800D0494:
{
    r31 = 0;
    r25 = 1;
    goto loc_800D05A4;
}

loc_800D04A0:
{
}

loc_800D04A4:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(255))) {
        goto loc_800D04CC;
    }
}

loc_800D04A8:
{
}

loc_800D04AC:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(254))) {
        goto loc_800D04CC;
    }
}

loc_800D04B0:
{
    r0 = (r27 + r31);
}

loc_800D04B8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(32))) {
        goto loc_800D05B0;
    }
}

loc_800D04BC:
{
    r0 = MemoryInline::FlatRead8(r28);
}

loc_800D04C4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800D059C;
    }
}

loc_800D04C8:
{
    goto loc_800D04D8;
}

loc_800D04CC:
{
    r0 = MemoryInline::FlatRead8(r28);
}

loc_800D04D4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800D05B0;
    }
}

loc_800D04D8:
{
}

loc_800D04DC:
{
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(5))) {
        goto loc_800D04EC;
    }
}

loc_800D04E0:
{
}

loc_800D04E4:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(2))) {
        goto loc_800D04EC;
    }
}

loc_800D04E8:
{
    r28 = (r29 + 804);
}

loc_800D04EC:
{
    r3 = r26;
    r4 = r31;
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
    MemoryInline::FlatWrite32((r28 + 36), r0);
    r4 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead16((r4 + 2));
    MemoryInline::FlatWrite16((r28 + 40), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead16(r4);
    MemoryInline::FlatWrite16((r28 + 42), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite32((r28 + 44), r0);
    r4 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r4 + 12));
    MemoryInline::FlatWrite32((r28 + 48), r0);
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r3 + 16));
    MemoryInline::FlatWrite32((r28 + 52), r0);
    r3 = (r28 + 4);
    r4 = MemoryInline::FlatRead32((r28 + 36));
    r5 = MemoryInline::FlatRead16((r28 + 40));
    r6 = MemoryInline::FlatRead16((r28 + 42));
    r7 = MemoryInline::FlatRead32((r28 + 44));
    r8 = MemoryInline::FlatRead32((r28 + 48));
    r9 = MemoryInline::FlatRead32((r28 + 52));
    r10 = 0;
    ctx->lr = 0x800D0564u;
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
    r3 = (r28 + 4);
    r4 = 0;
    r5 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -30528));
    f2.d = f1.d;
    f3.d = f1.d;
    r6 = 0;
    r7 = 0;
    r8 = 0;
    ctx->lr = 0x800D058Cu;
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
    MemoryInline::FlatWrite8(r28, static_cast<uint8_t>(r25));
    r30 = (r30 + 1);
}

loc_800D0598:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(255))) {
        goto loc_800D05B0;
    }
}

loc_800D059C:
{
    r31 = (r31 + 1);
    r28 = (r28 + 56);
}

loc_800D05A4:
{
    r0 = MemoryInline::FlatRead32((r26 + 4));
}

loc_800D05AC:
{
    if ((static_cast<uint32_t>(r31) < static_cast<uint32_t>(r0))) {
        goto loc_800D04A0;
    }
}

loc_800D05B0:
{
    r3 = r30;
}

loc_800D05B4:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574CC (8 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -28), 0, 36u, true, false);
    // end of inlined leaf 0x804574CC
    r0 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 52));
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
// RECOMP_REGISTRATION base 0x800D042C func_800D042C preserves=true fpr_mask=0x00000000
