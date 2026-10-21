#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8045FBD4(CpuContext* ctx);
extern "C" uint32_t func_8045FBD4_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804688EC(CpuContext* ctx);
extern "C" uint32_t func_804688EC_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_809D79A4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_psqx_809D7BD4_loc_0 = 0;
    uint32_t addr_psqx_809D7BE0_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t stackword12 = 0;
    uint32_t stackword13 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

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
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
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

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    MKW_GUEST_ENTER(0x809D79A4u);
    goto loc_809D79A4;

loc_809D79A4:
{
    MemoryInline::FlatWriteRam32((r1 + -160), r1);
    r1 = (r1 + -160);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 164), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 144), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 152);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 128), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 136);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    r11 = (r1 + 128);
    // inline leaf 0x80457474 (11 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, false, true);
    // end of inlined leaf 0x80457474
    r22 = r3;
    r23 = r4;
    r27 = r5;
    r24 = r6;
    r3 = 0x80A80000u;
    r25 = (r3 + -31488);
    r0 = (r7 & 255);
}

loc_809D79E8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_809D79F8;
    }
}

loc_809D79EC:
{
    r26 = 16;
    r28 = 20;
    goto loc_809D7A00;
}

loc_809D79F8:
{
    r26 = 18;
    r28 = 22;
}

loc_809D7A00:
{
    r3 = 0;
    r4 = 0;
    r5 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800E46ECu>(ctx);
    r3 = 4;
    r4 = 5;
    r5 = 1;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800E45D8u>(ctx);
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 32), static_cast<uint8_t>(r0));
    r3 = (r1 + 32);
    r4 = r27;
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_8045FBD4_1040 = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_1040;
        r0 = ctx->gpr[0];
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8045FBD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        ctr = ctx->ctr;
    }
    r3 = (r1 + 32);
    if constexpr (KnownRegArgsCpuCall<0x804688ECu>(&func_804688EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_804688EC_1349 = func_804688EC_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_804688EC_1349;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804688ECu>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r27 = (r1 + 32);
    r28 = (r23 + r28);
    r28 = (r28 + -1);
    r29 = 0x80A20000u;
    r31 = 1717960704;
    r3 = 0x80A20000u;
    f30.d = MemoryInline::FlatReadFloat64((r3 + -7448));
    r30 = 1127219200;
    r3 = 0x80A20000u;
    f31.d = MemoryInline::FlatReadFloat32((r3 + -7408));
    goto loc_809D7BC0;
}

loc_809D7A68:
{
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    r0 = (r3 + -32);
}

loc_809D7A74:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(25))) {
        goto loc_809D7B14;
    }
}

loc_809D7A78:
{
    r3 = (r29 + 11620);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x809D7A8Cu:
        goto loc_809D7A8C;
        break;
    case 0x809D7B14u:
        goto loc_809D7B14;
        break;
    case 0x809D7ABCu:
        goto loc_809D7ABC;
        break;
    case 0x809D7AC4u:
        goto loc_809D7AC4;
        break;
    case 0x809D7ACCu:
        goto loc_809D7ACC;
        break;
    case 0x809D7AD4u:
        goto loc_809D7AD4;
        break;
    case 0x809D7ADCu:
        goto loc_809D7ADC;
        break;
    case 0x809D7AE4u:
        goto loc_809D7AE4;
        break;
    case 0x809D7AECu:
        goto loc_809D7AEC;
        break;
    case 0x809D7AF4u:
        goto loc_809D7AF4;
        break;
    case 0x809D7AFCu:
        goto loc_809D7AFC;
        break;
    case 0x809D7B04u:
        goto loc_809D7B04;
        break;
    case 0x809D7B0Cu:
        goto loc_809D7B0C;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
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
        ctx->fpr[0] = f0;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_809D7A8C:
{
    r27 = (r27 + 1);
    r0 = (r26 ^ -2147483648);
    stackword12 = r0;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    stackword13 = r30;
    MemoryInline::FlatWriteRam32((r1 + 64), r30);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword13), static_cast<uint32_t>(stackword12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f30.d));
    f0.d = PpcFmulsInline(f31.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 72), f0.d);
    r0 = fctiwzword0;
    r22 = (r22 + r0);
    goto loc_809D7BC0;
}

loc_809D7ABC:
{
    r4 = 27;
    goto loc_809D7B1C;
}

loc_809D7AC4:
{
    r4 = 30;
    goto loc_809D7B1C;
}

loc_809D7ACC:
{
    r4 = 31;
    goto loc_809D7B1C;
}

loc_809D7AD4:
{
    r4 = 32;
    goto loc_809D7B1C;
}

loc_809D7ADC:
{
    r4 = 33;
    goto loc_809D7B1C;
}

loc_809D7AE4:
{
    r4 = 34;
    goto loc_809D7B1C;
}

loc_809D7AEC:
{
    r4 = 35;
    goto loc_809D7B1C;
}

loc_809D7AF4:
{
    r4 = 36;
    goto loc_809D7B1C;
}

loc_809D7AFC:
{
    r4 = 37;
    goto loc_809D7B1C;
}

loc_809D7B04:
{
    r4 = 38;
    goto loc_809D7B1C;
}

loc_809D7B0C:
{
    r4 = 39;
    goto loc_809D7B1C;
}

loc_809D7B14:
{
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    r4 = (r3 + -65);
}

loc_809D7B1C:
{
    r0 = (r31 + 26215);
    r5 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    r0 = (static_cast<int32_t>(r5) >> 2);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    r0 = (r0 + r3);
    r0 = (r0 * 10);
    r0 = (r4 - r0);
    r3 = (r0 * 20);
    r0 = (r3 + 1);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 20u, false, true);
    MemoryInline::WriteResolved16(guest_range_2, 12u, (r1 + 20), static_cast<uint16_t>(r4));
    r0 = (static_cast<int32_t>(r5) >> 2);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & 1);
    r0 = (r0 + r3);
    r3 = (r0 * 24);
    r0 = (r3 + 96);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::WriteResolved16(guest_range_2, 14u, (r1 + 22), static_cast<uint16_t>(r3));
    r0 = (r4 + 17);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::WriteResolved16(guest_range_2, 16u, (r1 + 24), static_cast<uint16_t>(r0));
    r0 = (r3 + 23);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::WriteResolved16(guest_range_2, 18u, (r1 + 26), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved32(guest_range_2, 8u, (r1 + 16), r24);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r22)));
    MemoryInline::WriteResolved16(guest_range_2, 0u, (r1 + 8), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r23)));
    MemoryInline::WriteResolved16(guest_range_2, 2u, (r1 + 10), static_cast<uint16_t>(r0));
    r3 = (r22 + r26);
    r0 = (r3 + -1);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::WriteResolved16(guest_range_2, 4u, (r1 + 12), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r28)));
    MemoryInline::WriteResolved16(guest_range_2, 6u, (r1 + 14), static_cast<uint16_t>(r0));
    r3 = (r1 + 8);
    r4 = (r25 + 88);
    r5 = (r25 + 92);
    ctx->lr = 0x809D7BB8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80053620u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    ctr = ctx->ctr;
    mkw_gqr0 = ctx->gqr[0];
    r22 = (r22 + r26);
    r27 = (r27 + 1);
}

loc_809D7BC0:
{
    r4 = MemoryInline::FlatRead8(r27);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
}

loc_809D7BCC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_809D7A68;
    }
}

loc_809D7BD0:
{
    r0 = 152;
    addr_psqx_809D7BD4_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_809D7BD4_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 144));
    r0 = 136;
    addr_psqx_809D7BE0_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_809D7BE0_loc_0));
    f30.d = MemoryInline::FlatReadFloat64((r1 + 128));
    r11 = (r1 + 128);
    // inline leaf 0x804574C0 (11 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, true, false);
    // end of inlined leaf 0x804574C0
    r0 = MemoryInline::FlatRead32((r1 + 164));
    ctx->lr = r0;
    r1 = (r1 + 160);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
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

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xC0003FFF fpr_write=0xC0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x809D79A4 func_809D79A4 preserves=true fpr_mask=0x00000000
