#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802AA7C8(CpuContext* ctx);
extern "C" uint64_t func_802AA7C8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80366A04(CpuContext* ctx);
extern "C" uint64_t func_80366A04_ra38_1a_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);

extern "C" void func_80A05C20(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r22 = ctx->gpr[22];
    uint32_t r23 = ctx->gpr[23];
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
    PPC_FPR f4 = ctx->fpr[4];
    const uint32_t r22_entry = r22;
    const uint32_t r23_entry = r23;
    const uint32_t r24_entry = r24;
    const uint32_t r25_entry = r25;
    const uint32_t r26_entry = r26;
    const uint32_t r27_entry = r27;
    const uint32_t r28_entry = r28;
    const uint32_t r29_entry = r29;
    const uint32_t r30_entry = r30;
    const uint32_t r31_entry = r31;
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x80A05C20u);
    goto loc_80A05C20;

loc_80A05C20:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + -96), 0, 104u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_2, 100u, (r1 + 100), r0);
    r11 = (r1 + 96);
    // inline leaf 0x80457474 (11 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, false, true);
    // end of inlined leaf 0x80457474
    r29 = r3;
    r31 = 0;
    r30 = 0;
    r3 = (r1 + 32);
    r24 = 0x80A20000u;
    f1.d = MemoryInline::FlatReadFloat32((r24 + -5452));
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x80A05DD4 (4 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 32u, r3, f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 36u, (r3 + 4), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_2, 40u, (r3 + 8), f3.d);
    // end of inlined leaf 0x80A05DD4
    r3 = (r1 + 20);
    f1.d = MemoryInline::FlatReadFloat32((r24 + -5452));
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x80A05DD4 (4 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 20u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 20u, r3, f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 24u, (r3 + 4), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_2, 28u, (r3 + 8), f3.d);
    // end of inlined leaf 0x80A05DD4
    r3 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r24 + -5452));
    f2.d = f1.d;
    r4 = 0x80A20000u;
    f3.d = MemoryInline::FlatReadFloat32((r4 + -5448));
    // inline leaf 0x80A05DD4 (4 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 8u, r3, f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 12u, (r3 + 4), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_2, 16u, (r3 + 8), f3.d);
    // end of inlined leaf 0x80A05DD4
    r3 = MemoryInline::FlatRead8((r29 + 21));
    r0 = (r3 + -6);
}

loc_80A05C90:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(14))) {
        goto loc_80A05CE4;
    }
}

loc_80A05C94:
{
    r3 = 0x80A30000u;
    r3 = (r3 + -6504);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x80A05CACu:
        goto loc_80A05CAC;
        break;
    case 0x80A05CB8u:
        goto loc_80A05CB8;
        break;
    case 0x80A05CC4u:
        goto loc_80A05CC4;
        break;
    case 0x80A05CD0u:
        goto loc_80A05CD0;
        break;
    case 0x80A05CE4u:
        goto loc_80A05CE4;
        break;
    case 0x80A05CDCu:
        goto loc_80A05CDC;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->gpr[22] = r22;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_80A05CAC:
{
    r31 = 1;
    r30 = 0;
    goto loc_80A05CE4;
}

loc_80A05CB8:
{
    r31 = 3;
    r30 = 1;
    goto loc_80A05CE4;
}

loc_80A05CC4:
{
    r31 = 4;
    r30 = 2;
    goto loc_80A05CE4;
}

loc_80A05CD0:
{
    r31 = 4;
    r30 = 2;
    goto loc_80A05CE4;
}

loc_80A05CDC:
{
    r31 = 4;
    r30 = 2;
}

loc_80A05CE4:
{
    r22 = 0;
    r24 = 0;
    r25 = 17;
    r3 = 0x80A00000u;
    r26 = (r3 + 26280);
    r27 = 1;
    r3 = 65536;
    r28 = (r3 + -1);
    goto loc_80A05DB4;
}

loc_80A05D08:
{
    r0 = (r22 + 1);
    r3 = r29;
    r4 = (r0 & 255);
    r5 = (r1 + 32);
    r6 = (r1 + 20);
    r7 = (r1 + 8);
    ctx->lr = 0x80A05D24u;
    if constexpr (KnownRegArgsCpuCall<0x80366A04u>(&func_80366A04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[2] = f2;
        ctx->ctr = ctr;
        const auto regargs_result_80366A04_1B1A = func_80366A04_ra38_1a_18_0(ctx, r3, r4, r5, f1.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_80366A04_1B1A);
        r4 = static_cast<uint32_t>(regargs_result_80366A04_1B1A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80366A04u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        ctr = ctx->ctr;
    }
}

loc_80A05D28:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80A05DBC;
    }
}

loc_80A05D2C:
{
    r3 = 16;
    ctx->lr = 0x80A05D34u;
    if constexpr (KnownRegArgsCpuCall<0x802AA7C8u>(&func_802AA7C8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_802AA7C8_2171 = func_802AA7C8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802AA7C8_2171);
        r4 = static_cast<uint32_t>(regargs_result_802AA7C8_2171 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x802AA7C8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        ctr = ctx->ctr;
    }
    r23 = r3;
}

loc_80A05D3C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80A05DBC;
    }
}

loc_80A05D40:
{
    MemoryInline::FlatWriteRam32((r3 + 252), r24);
    r4 = 1;
    r5 = 0;
    // inline leaf 0x802AB3F8 (4 guest instruction(s))
    r0 = (r4 | r5);
    r0 = (r0 & 255);
    MemoryInline::FlatWriteRam8((r3 + 10), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x802AB3F8
    r3 = r23;
    r4 = 0;
    r5 = 3;
    // inline leaf 0x802AB270 (3 guest instruction(s))
    guest_range_3 = MemoryInline::ResolveRangeHost((r3 + 1), 0, 251u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 11u, (r3 + 12), r4);
    MemoryInline::WriteResolved8(guest_range_3, 8u, (r3 + 9), static_cast<uint8_t>(r5));
    // end of inlined leaf 0x802AB270
    MemoryInline::WriteResolved8(guest_range_3, 2u, (r23 + 3), static_cast<uint8_t>(r25));
    MemoryInline::WriteResolved32(guest_range_3, 247u, (r23 + 248), r26);
    r0 = MemoryInline::FlatRead8((r29 + 22));
    MemoryInline::WriteResolved8(guest_range_3, 7u, (r23 + 8), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_3, 0u, (r23 + 1), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved32(guest_range_3, 15u, (r23 + 16), r24);
    MemoryInline::WriteResolved8(guest_range_3, 1u, (r23 + 2), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved16(guest_range_3, 103u, (r23 + 104), static_cast<uint16_t>(r28));
    r3 = (r23 + 48);
    r4 = (r1 + 20);
    ctx->lr = 0x80A05D8Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x809EB13Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r3 = (r23 + 24);
    r4 = (r1 + 32);
    ctx->lr = 0x80A05D98u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x809EB13Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r3 = (r23 + 60);
    r4 = (r1 + 8);
    ctx->lr = 0x80A05DA4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x809EB13Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r3 = MemoryInline::FlatRead32((r23 + 256));
    MemoryInline::FlatWrite8((r3 + 8), static_cast<uint8_t>(r24));
    MemoryInline::FlatWrite32((r3 + 4), r24);
    r22 = (r22 + 1);
}

loc_80A05DB4:
{
}

loc_80A05DB8:
{
    if ((static_cast<int32_t>(r22) < static_cast<int32_t>(r31))) {
        goto loc_80A05D08;
    }
}

loc_80A05DBC:
{
    r11 = (r1 + 96);
    // inline leaf 0x804574C0 (11 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, true, false);
    // end of inlined leaf 0x804574C0
    r0 = MemoryInline::FlatRead32((r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->ctr = ctr;
    ctx->gpr[22] = r22_entry;
    ctx->gpr[23] = r23_entry;
    ctx->gpr[24] = r24_entry;
    ctx->gpr[25] = r25_entry;
    ctx->gpr[26] = r26_entry;
    ctx->gpr[27] = r27_entry;
    ctx->gpr[28] = r28_entry;
    ctx->gpr[29] = r29_entry;
    ctx->gpr[30] = r30_entry;
    ctx->gpr[31] = r31_entry;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000007FF gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0xFF80001B fpr_write=0xFF80007F fpr_return=0x00000002 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80A05C20 func_80A05C20 preserves=true fpr_mask=0x00000000
