#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80050FE4(CpuContext* ctx);
extern "C" uint64_t func_80050FE4_ra18_8_18_0(CpuContext*, uint32_t, uint32_t, double);

extern "C" void func_803BAA14(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_psqx_803BABF4_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
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
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_803BAA14;

loc_803BAA14:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 48);
    // inline leaf 0x8045747C (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    // end of inlined leaf 0x8045747C
    r31 = r3;
    r24 = r4;
    r25 = r5;
    r26 = r6;
    r27 = r7;
    r28 = r8;
    r29 = r9;
    r30 = MemoryInline::FlatRead32((r13 + -16840));
}

loc_803BAA54:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_803BAA64;
    }
}

loc_803BAA58:
{
    r3 = 65536;
    r3 = (r3 + -1);
    goto loc_803BABF0;
}

loc_803BAA64:
{
    // inline leaf 0x800CF3E8 (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 39));
    // end of inlined leaf 0x800CF3E8
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r0 = (r31 & 255);
}

loc_803BAA74:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(r3))) {
        goto loc_803BAA94;
    }
}

loc_803BAA78:
{
    // inline leaf 0x800CF3E8 (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 39));
    // end of inlined leaf 0x800CF3E8
    r0 = MemoryInline::FlatRead32((r30 + 44));
    MemoryInline::FlatWrite32((r30 + 48), r0);
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r0 = MemoryInline::FlatRead32((r3 + 12));
    MemoryInline::FlatWrite32((r30 + 44), r0);
}

loc_803BAA94:
{
    r31 = MemoryInline::FlatRead32((r30 + 28));
    r3 = MemoryInline::FlatRead32((r30 + 32));
    r30 = (r3 + -1);
    r0 = (r30 * 548);
    r31 = (r31 + r0);
    f31.d = MemoryInline::FlatReadFloat32((r2 + -5316));
    goto loc_803BABE0;
}

loc_803BAAB0:
{
    r0 = MemoryInline::FlatRead8(r31);
}

loc_803BAAB8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803BABD8;
    }
}

loc_803BAABC:
{
    r3 = MemoryInline::FlatRead8((r31 + 4));
    r0 = (r24 & 255);
}

loc_803BAAC8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_803BABD8;
    }
}

loc_803BAACC:
{
    r0 = MemoryInline::FlatRead16((r31 + 508));
}

loc_803BAAD4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_803BABD8;
    }
}

loc_803BAAD8:
{
    r0 = MemoryInline::FlatRead8((r31 + 6));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_803BAAE4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_803BAAF4;
    }
}

loc_803BAAE8:
{
    r0 = MemoryInline::FlatRead32((r31 + 440));
}

loc_803BAAF0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803BABD8;
    }
}

loc_803BAAF4:
{
    r0 = MemoryInline::FlatRead8((r31 + 3));
}

loc_803BAAFC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_803BAB0C;
    }
}

loc_803BAB00:
{
    r0 = MemoryInline::FlatRead16((r31 + 506));
}

loc_803BAB08:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803BABD8;
    }
}

loc_803BAB0C:
{
    f3.d = MemoryInline::FlatReadFloat32((r25 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 500));
    f2.d = PpcFmulsInline(f0.d, f31.d);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 468));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_803BAB24:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_803BABD8;
    }
}

loc_803BAB2C:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_803BAB34:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_803BABD8;
    }
}

loc_803BAB38:
{
    r3 = r25;
    r4 = (r31 + 464);
    ctx->lr = 0x803BAB44u;
    if constexpr (KnownRegArgsCpuCall<0x80050FE4u>(&func_80050FE4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        const auto regargs_result_80050FE4_17E7 = func_80050FE4_ra18_8_18_0(ctx, r3, r4, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_80050FE4_17E7);
        r4 = static_cast<uint32_t>(regargs_result_80050FE4_17E7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x80050FE4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
    f0.d = MemoryInline::FlatReadFloat32((r31 + 496));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_803BAB4C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_803BABD8;
    }
}

loc_803BAB54:
{
    r24 = MemoryInline::FlatRead16((r31 + 504));
    r0 = MemoryInline::FlatRead16((r31 + 508));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16(r26, static_cast<uint16_t>(r0));
    r3 = r27;
    r4 = (r31 + 464);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = r28;
    r4 = (r31 + 476);
    // inline leaf 0x800FC138 (7 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWrite32(r3, r0);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite32((r3 + 4), r0);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWrite32((r3 + 8), r0);
    // end of inlined leaf 0x800FC138
}

loc_803BAB7C:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_803BAB8C;
    }
}

loc_803BAB80:
{
    r0 = MemoryInline::FlatRead32((r31 + 492));
    MemoryInline::FlatWrite32(r29, r0);
    goto loc_803BABA0;
}

loc_803BAB8C:
{
    r0 = MemoryInline::FlatRead16((r31 + 508));
}

loc_803BAB94:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(17))) {
        goto loc_803BABA0;
    }
}

loc_803BAB98:
{
    r3 = MemoryInline::FlatRead8((r31 + 542));
    goto loc_803BABF0;
}

loc_803BABA0:
{
    r0 = MemoryInline::FlatRead16((r31 + 506));
}

loc_803BABA8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803BABD0;
    }
}

loc_803BABAC:
{
    r4 = MemoryInline::FlatRead8((r31 + 3));
    r3 = (r4 + -2);
    r0 = (2 - r4);
    r0 = ~(r3 | r0);
    r4 = (static_cast<int32_t>(r0) >> 31);
    r3 = 65536;
    r0 = (r3 + -1);
    r3 = (r0 & r4);
    goto loc_803BABF0;
}

loc_803BABD0:
{
    r3 = r24;
    goto loc_803BABF0;
}

loc_803BABD8:
{
    r30 = (r30 + -1);
    r31 = (r31 + -548);
}

loc_803BABE0:
{
}

loc_803BABE4:
{
    if ((static_cast<int32_t>(r30) >= static_cast<int32_t>(0))) {
        goto loc_803BAAB0;
    }
}

loc_803BABE8:
{
    r3 = 65536;
    r3 = (r3 + -1);
}

loc_803BABF0:
{
    r0 = 56;
    addr_psqx_803BABF4_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_803BABF4_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 48));
    r11 = (r1 + 48);
    // inline leaf 0x804574C8 (9 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, true, false);
    // end of inlined leaf 0x804574C8
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000023FF gpr_write=0x0000083B gpr_return=0x00000018 fpr_read=0x8000000F fpr_write=0x8000001F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803BAA14 func_803BAA14 preserves=true fpr_mask=0x00000000
