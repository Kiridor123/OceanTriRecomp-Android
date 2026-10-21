#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80052654(CpuContext* ctx);
extern "C" uint64_t func_80052654_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80053B30(CpuContext* ctx);
extern "C" uint64_t func_80053B30_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_802E3D7C_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;

    MKW_GUEST_ENTER(0x802E3D7Cu);
    goto loc_802E3D7C;

loc_802E3D7C:
{
    MemoryInline::FlatWriteRam32((r1 + -176), r1);
    r1 = (r1 + -176);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 180), r0);
    r11 = (r1 + 176);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r27 = r3;
    r30 = r4;
    r28 = r5;
    r29 = r6;
    r31 = r7;
    r0 = (r5 & 65535);
}

loc_802E3DAC:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(48))) {
        goto loc_802E3DB4;
    }
}

loc_802E3DB0:
{
    r28 = 48;
}

loc_802E3DB4:
{
    r0 = (r6 & 65535);
}

loc_802E3DBC:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(48))) {
        goto loc_802E3DC4;
    }
}

loc_802E3DC0:
{
    r29 = 48;
}

loc_802E3DC4:
{
}

loc_802E3DC8:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_802E3DD4;
    }
}

loc_802E3DCC:
{
    r3 = 505151488;
    r8 = (r3 + 3506);
}

loc_802E3DD4:
{
    r3 = (r1 + 8);
    r0 = (r27 + 7);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r30 + 10);
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r28 + -14);
    r6 = (r0 & 65535);
    r0 = (r29 + -20);
    r7 = (r0 & 65535);
    ctx->lr = 0x802E3DFCu;
    if constexpr (KnownRegArgsCpuCall<0x80052654u>(&func_80052654)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        const auto regargs_result_80052654_BCE = func_80052654_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80052654_BCE);
        r4 = static_cast<uint32_t>(regargs_result_80052654_BCE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x80052654u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    }
    r3 = (r1 + 8);
    ctx->lr = 0x802E3E04u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    InvokeDirectCpu<0x80053580u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r0 = (r27 + r28);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r30 + r29);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + 24), 0, 128u, false, true);
    MemoryInline::WriteResolved16(guest_range_0, 92u, (r1 + 116), static_cast<uint16_t>(r27));
    MemoryInline::WriteResolved16(guest_range_0, 80u, (r1 + 104), static_cast<uint16_t>(r27));
    MemoryInline::WriteResolved16(guest_range_0, 60u, (r1 + 84), static_cast<uint16_t>(r27));
    MemoryInline::WriteResolved16(guest_range_0, 48u, (r1 + 72), static_cast<uint16_t>(r27));
    MemoryInline::WriteResolved16(guest_range_0, 12u, (r1 + 36), static_cast<uint16_t>(r27));
    MemoryInline::WriteResolved16(guest_range_0, 0u, (r1 + 24), static_cast<uint16_t>(r27));
    r0 = (r27 + 24);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::WriteResolved16(guest_range_0, 108u, (r1 + 132), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 96u, (r1 + 120), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 28u, (r1 + 52), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 16u, (r1 + 40), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 88u, (r1 + 112), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 84u, (r1 + 108), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 56u, (r1 + 80), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 52u, (r1 + 76), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 8u, (r1 + 32), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 4u, (r1 + 28), static_cast<uint16_t>(r0));
    r0 = (r3 + -24);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::WriteResolved16(guest_range_0, 124u, (r1 + 148), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 112u, (r1 + 136), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 76u, (r1 + 100), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 64u, (r1 + 88), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 44u, (r1 + 68), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 32u, (r1 + 56), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 104u, (r1 + 128), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 100u, (r1 + 124), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 24u, (r1 + 48), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 20u, (r1 + 44), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 120u, (r1 + 144), static_cast<uint16_t>(r3));
    MemoryInline::WriteResolved16(guest_range_0, 116u, (r1 + 140), static_cast<uint16_t>(r3));
    MemoryInline::WriteResolved16(guest_range_0, 72u, (r1 + 96), static_cast<uint16_t>(r3));
    MemoryInline::WriteResolved16(guest_range_0, 68u, (r1 + 92), static_cast<uint16_t>(r3));
    MemoryInline::WriteResolved16(guest_range_0, 40u, (r1 + 64), static_cast<uint16_t>(r3));
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 36u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r30)))) {
        MemoryInline::WriteResolved16(guest_range_0, 36u, (r1 + 60), r3);
        MemoryInline::WriteResolved16(guest_range_0, 38u, (r1 + 62), r30);
    }
    MemoryInline::WriteResolved16(guest_range_0, 34u, (r1 + 58), static_cast<uint16_t>(r30));
    MemoryInline::WriteResolved16(guest_range_0, 22u, (r1 + 46), static_cast<uint16_t>(r30));
    MemoryInline::WriteResolved16(guest_range_0, 18u, (r1 + 42), static_cast<uint16_t>(r30));
    MemoryInline::WriteResolved16(guest_range_0, 6u, (r1 + 30), static_cast<uint16_t>(r30));
    MemoryInline::WriteResolved16(guest_range_0, 2u, (r1 + 26), static_cast<uint16_t>(r30));
    r0 = (r30 + 24);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::WriteResolved16(guest_range_0, 70u, (r1 + 94), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 66u, (r1 + 90), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 54u, (r1 + 78), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 50u, (r1 + 74), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 46u, (r1 + 70), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 42u, (r1 + 66), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 30u, (r1 + 54), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 26u, (r1 + 50), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 14u, (r1 + 38), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 10u, (r1 + 34), static_cast<uint16_t>(r0));
    r0 = (r4 + -24);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::WriteResolved16(guest_range_0, 118u, (r1 + 142), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 114u, (r1 + 138), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 102u, (r1 + 126), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 98u, (r1 + 122), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 86u, (r1 + 110), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 82u, (r1 + 106), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 74u, (r1 + 98), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 78u, (r1 + 102), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 62u, (r1 + 86), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 58u, (r1 + 82), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 126u, (r1 + 150), static_cast<uint16_t>(r4));
    MemoryInline::WriteResolved16(guest_range_0, 122u, (r1 + 146), static_cast<uint16_t>(r4));
    MemoryInline::WriteResolved16(guest_range_0, 110u, (r1 + 134), static_cast<uint16_t>(r4));
    MemoryInline::WriteResolved16(guest_range_0, 106u, (r1 + 130), static_cast<uint16_t>(r4));
    MemoryInline::WriteResolved16(guest_range_0, 94u, (r1 + 118), static_cast<uint16_t>(r4));
    MemoryInline::WriteResolved16(guest_range_0, 90u, (r1 + 114), static_cast<uint16_t>(r4));
}

loc_802E3F38:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_802E3F44;
    }
}

loc_802E3F3C:
{
    r3 = 0x92620000u;
    r31 = (r3 + 14847);
}

loc_802E3F44:
{
    r3 = 3;
    r4 = 32;
    // inline leaf 0x80053870 (21 guest instruction(s))
}

loc_inl1_0x80053870:
{
    r6 = 0x80670000u;
    r5 = (r6 + -12896);
    MemoryInline::FlatWriteRam8((r5 + 4), static_cast<uint8_t>(r3));
    r0 = 0;
    MemoryInline::FlatWriteRam32((r6 + -12896), r0);
    r0 = (r4 & 65535);
}

loc_inl1_0x8005388C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_inl1_0x800538AC;
    }
}

loc_inl1_0x80053890:
{
    r0 = (r3 & 255);
    r3 = (r13 + -32540);
    r3_addr_0 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_0);
    MemoryInline::FlatWriteRam16((r5 + 6), static_cast<uint16_t>(r0));
}

loc_inl1_0x800538A4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x800538B0;
    }
}

loc_inl1_0x800538A8:
{
    goto loc_inl1_cont_80053870;
}

loc_inl1_0x800538AC:
{
    MemoryInline::FlatWriteRam16((r5 + 6), static_cast<uint16_t>(r4));
}

loc_inl1_0x800538B0:
{
    r0 = 6;
    r3 = 0x80670000u;
    r3 = (r3 + -12896);
    MemoryInline::FlatWriteRam8((r3 + 5), static_cast<uint8_t>(r0));
}

loc_inl1_cont_80053870:
{
    // end of inlined leaf 0x80053870
    r3 = (r1 + 24);
    // inline leaf 0x800538C4 (7 guest instruction(s))
    r4 = 0x80670000u;
    r0 = MemoryInline::FlatRead32((r4 + -12896));
    r0 = (r0 | 4096);
    MemoryInline::FlatWriteRam32((r4 + -12896), r0);
    r4 = (r4 + -12896);
    MemoryInline::FlatWriteRam32((r4 + 8), r3);
    // end of inlined leaf 0x800538C4
    r3 = r31;
    // inline leaf 0x8005399C (10 guest instruction(s))
    r4 = 0x80670000u;
    r0 = MemoryInline::FlatRead32((r4 + -12896));
    r0 = (r0 | 131072);
    r0 = (r0 | 8192);
    MemoryInline::FlatWriteRam32((r4 + -12896), r0);
    r4 = (r4 + -12896);
    MemoryInline::FlatWriteRam32((r4 + 68), r3);
    r0 = (r4 + 68);
    MemoryInline::FlatWriteRam32((r4 + 12), r0);
    // end of inlined leaf 0x8005399C
    r3 = 5;
    r4 = 0x805D0000u;
    r4 = (r4 + 25200);
    ctx->lr = 0x802E3F70u;
    if constexpr (KnownRegArgsCpuCall<0x80053B30u>(&func_80053B30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80053B30_33EF = func_80053B30_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80053B30_33EF);
        r4 = static_cast<uint32_t>(regargs_result_80053B30_33EF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80053B30u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    ctx->lr = 0x802E3F74u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    InvokeDirectCpu<0x8005480Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r11 = (r1 + 176);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 180));
    ctx->lr = r0;
    r1 = (r1 + 176);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802E3D7C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802E3D7C_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFE gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802E3D7C func_802E3D7C preserves=true fpr_mask=0x00000000
