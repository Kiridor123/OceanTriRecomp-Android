#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804E4C30(CpuContext* ctx);
extern "C" uint64_t func_804E4C30_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_80047954(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
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

    goto loc_80047954;

loc_80047954:
{
    MemoryAlias::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryAlias::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x8045747C (9 guest instruction(s))
    guest_range_0 = MemoryAlias::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    // end of inlined leaf 0x8045747C
    r27 = r3;
    r3 = 0x80670000u;
    r29 = (r3 + -18072);
    r0 = MemoryAlias::FlatRead8((r29 + 16));
}

loc_8004797C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_80047B3C;
    }
}

loc_80047980:
{
    r0 = MemoryAlias::FlatRead8((r29 + 17));
}

loc_80047988:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_80047B3C;
    }
}

loc_8004798C:
{
    r0 = MemoryAlias::FlatRead8((r29 + 18));
}

loc_80047994:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_8004799C;
    }
}

loc_80047998:
{
    goto loc_80047B3C;
}

loc_8004799C:
{
    r0 = MemoryAlias::FlatRead8(r29);
}

loc_800479A4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80047B3C;
    }
}

loc_800479A8:
{
    r30 = 0;
    r26 = r29;
    r25 = 0;
}

loc_800479B4:
{
    r28 = MemoryAlias::FlatRead32((r26 + 4));
    r3 = r28;
    ctx->lr = 0x800479C0u;
    if constexpr (KnownRegArgsCpuCall<0x804E4C30u>(&func_804E4C30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_804E4C30_C9B = func_804E4C30_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804E4C30_C9B);
        r4 = static_cast<uint32_t>(regargs_result_804E4C30_C9B >> 32);
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
    r31 = 0;
    goto loc_80047A4C;
}

loc_800479C8:
{
    r3 = r28;
    r4 = r31;
    // inline leaf 0x804E4D50 (8 guest instruction(s))
    r5 = MemoryAlias::FlatRead32((r3 + 4));
    r3 = MemoryAlias::FlatRead32((r3 + 8));
    r0 = PPC_Divwu(static_cast<uint32_t>(r4), static_cast<uint32_t>(r5));
    r0 = (r0 * r5);
    r0 = (r4 - r0);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_3 & -8);
    r3 = (r3 + r0);
    // end of inlined leaf 0x804E4D50
    r9 = MemoryAlias::FlatRead32(r3);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(30));
    r0 = (r0_rot_4 & -1073741824);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & 1);
    r0 = (r0 - r3);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -1);
    r0 = (r0 + r3);
    r0 = (r0 + r25);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
    r0 = (r0_rot_6 & -32);
    r3 = (r29 + r0);
    r24 = (r3 + 40);
    r3 = r24;
    r4 = MemoryAlias::FlatRead32((r9 + 8));
    r5 = MemoryAlias::FlatRead16((r9 + 2));
    r6 = MemoryAlias::FlatRead16(r9);
    r7 = MemoryAlias::FlatRead32((r9 + 4));
    r8 = MemoryAlias::FlatRead32((r9 + 12));
    r9 = MemoryAlias::FlatRead32((r9 + 16));
    r10 = 0;
    ctx->lr = 0x80047A20u;
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
    r3 = r24;
    r4 = 0;
    r5 = 1;
    f1.d = MemoryAlias::FlatReadFloat32((r2 + -32560));
    f2.d = f1.d;
    f3.d = f1.d;
    r6 = 0;
    r7 = 0;
    r8 = 0;
    ctx->lr = 0x80047A48u;
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
    r31 = (r31 + 1);
}

loc_80047A4C:
{
    r0 = MemoryAlias::FlatRead32((r28 + 4));
}

loc_80047A54:
{
    if ((static_cast<uint32_t>(r31) < static_cast<uint32_t>(r0))) {
        goto loc_800479C8;
    }
}

loc_80047A58:
{
    r26 = (r26 + 4);
    r25 = (r25 + 4);
    r30 = (r30 + 1);
}

loc_80047A68:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(2))) {
        goto loc_800479B4;
    }
}

loc_80047A6C:
{
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & -4);
    r3 = (r29 + r0);
    r24 = MemoryAlias::FlatRead32((r3 + 4));
    r3 = r24;
    ctx->lr = 0x80047A80u;
    if constexpr (KnownRegArgsCpuCall<0x804E4C30u>(&func_804E4C30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_804E4C30_1E77 = func_804E4C30_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804E4C30_1E77);
        r4 = static_cast<uint32_t>(regargs_result_804E4C30_1E77 >> 32);
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
    r25 = 0;
    r28 = (r29 + 296);
    goto loc_80047AF0;
}

loc_80047A8C:
{
    r3 = r24;
    r4 = r25;
    // inline leaf 0x804E4D50 (8 guest instruction(s))
    r5 = MemoryAlias::FlatRead32((r3 + 4));
    r3 = MemoryAlias::FlatRead32((r3 + 8));
    r0 = PPC_Divwu(static_cast<uint32_t>(r4), static_cast<uint32_t>(r5));
    r0 = (r0 * r5);
    r0 = (r4 - r0);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_9 & -8);
    r3 = (r3 + r0);
    // end of inlined leaf 0x804E4D50
    r7 = MemoryAlias::FlatRead32(r3);
    r3 = r28;
    r4 = MemoryAlias::FlatRead32((r7 + 8));
    r5 = MemoryAlias::FlatRead16((r7 + 2));
    r6 = MemoryAlias::FlatRead16(r7);
    r7 = MemoryAlias::FlatRead32((r7 + 4));
    r8 = 0;
    r9 = 0;
    r10 = 0;
    ctx->lr = 0x80047AC0u;
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
    r3 = r28;
    r4 = 0;
    r5 = 1;
    f1.d = MemoryAlias::FlatReadFloat32((r2 + -32560));
    f2.d = f1.d;
    f3.d = f1.d;
    r6 = 0;
    r7 = 0;
    r8 = 0;
    ctx->lr = 0x80047AE8u;
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
    r28 = (r28 + 32);
    r25 = (r25 + 1);
}

loc_80047AF0:
{
    r0 = MemoryAlias::FlatRead32((r24 + 4));
}

loc_80047AF8:
{
    if ((static_cast<uint32_t>(r25) < static_cast<uint32_t>(r0))) {
        goto loc_80047A8C;
    }
}

loc_80047AFC:
{
    r3 = (r29 + r27);
    r4 = MemoryAlias::FlatRead8((r3 + 1096));
    MemoryAlias::FlatWriteRam8((r29 + 1106), static_cast<uint8_t>(r4));
    r3 = MemoryAlias::FlatRead8((r3 + 1096));
    r0 = (r3 + 1);
    r0 = (r0 & 255);
    MemoryAlias::FlatWriteRam8((r29 + 1107), static_cast<uint8_t>(r0));
    MemoryAlias::FlatWriteRam8((r29 + 1108), static_cast<uint8_t>(r4));
    MemoryAlias::FlatWriteRam8((r29 + 1109), static_cast<uint8_t>(r0));
    r3 = MemoryAlias::FlatRead8(r29);
    r0 = (r3 + 1);
    MemoryAlias::FlatWriteRam8(r29, static_cast<uint8_t>(r0));
    r3 = 2047;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800885F4u>(ctx);
    r3 = 0;
    ctx->lr = 0x80047B3Cu;
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
    InvokeDirectCpu<0x804B9900u>(ctx);
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
}

loc_80047B3C:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574C8 (9 guest instruction(s))
    guest_range_1 = MemoryAlias::ResolveRangeHost((r11 + -32), 0, 32u, true, false);
    // end of inlined leaf 0x804574C8
    r0 = MemoryAlias::FlatRead32((r1 + 52));
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
// RECOMP_REGISTRATION base 0x80047954 func_80047954 preserves=true fpr_mask=0x00000000
