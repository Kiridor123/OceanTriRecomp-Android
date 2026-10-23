#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80042BC4(CpuContext* ctx);
extern "C" uint32_t func_80042BC4_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_80042EB8(CpuContext* ctx);
extern "C" uint64_t func_80042EB8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80042EF4(CpuContext* ctx);
extern "C" uint64_t func_80042EF4_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);

extern "C" uint64_t func_80042C0C_ra38_1f8_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_psqx_80042E80_loc_0 = 0;
    uint32_t addr_psqx_80042E8C_loc_0 = 0;
    uint32_t addr_psqx_80042E98_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
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
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_80042C0C;

loc_80042C0C:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + -112), 0, 120u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + -112), r1);
    r1 = (r1 + -112);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_2, 116u, (r1 + 116), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_2, 96u, (r1 + 96), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 104);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 80u, (r1 + 80), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 64u, (r1 + 64), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    r11 = (r1 + 64);
    // inline leaf 0x8045747C (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    // end of inlined leaf 0x8045747C
    r25 = r3;
    r24 = r4;
    // inline leaf 0x80042FC4 (6 guest instruction(s))
    r4 = 0x80740000u;
    r4 = (r4 + 15976);
    r0 = (r3 * 30);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 6));
    // end of inlined leaf 0x80042FC4
    MemoryInline::FlatWrite8((r24 + 44), static_cast<uint8_t>(r3));
    r3 = r25;
    // inline leaf 0x80042FAC (6 guest instruction(s))
    r4 = 0x80740000u;
    r4 = (r4 + 15976);
    r0 = (r3 * 30);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 7));
    // end of inlined leaf 0x80042FAC
    MemoryInline::FlatWrite8((r24 + 45), static_cast<uint8_t>(r3));
    r3 = r25;
    // inline leaf 0x80042F94 (6 guest instruction(s))
    r4 = 0x80740000u;
    r4 = (r4 + 15976);
    r0 = (r3 * 30);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 2));
    // end of inlined leaf 0x80042F94
    MemoryInline::WriteResolved8(guest_range_2, 12u, (r1 + 12), static_cast<uint8_t>(r3));
    r3 = r25;
    // inline leaf 0x80042F7C (6 guest instruction(s))
    r4 = 0x80740000u;
    r4 = (r4 + 15976);
    r0 = (r3 * 30);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 3));
    // end of inlined leaf 0x80042F7C
    MemoryInline::WriteResolved8(guest_range_2, 8u, (r1 + 8), static_cast<uint8_t>(r3));
    r3 = r25;
    // inline leaf 0x80042F64 (6 guest instruction(s))
    r4 = 0x80740000u;
    r4 = (r4 + 15976);
    r0 = (r3 * 30);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 4));
    // end of inlined leaf 0x80042F64
    MemoryInline::WriteResolved8(guest_range_2, 13u, (r1 + 13), static_cast<uint8_t>(r3));
    r3 = r25;
    // inline leaf 0x80042F4C (6 guest instruction(s))
    r4 = 0x80740000u;
    r4 = (r4 + 15976);
    r0 = (r3 * 30);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 5));
    // end of inlined leaf 0x80042F4C
    MemoryInline::WriteResolved8(guest_range_2, 9u, (r1 + 9), static_cast<uint8_t>(r3));
    r25 = 0;
    r28 = (r1 + 12);
    r27 = (r1 + 8);
    r26 = r24;
    f30.d = MemoryInline::FlatReadFloat32((r2 + -32664));
    f29.d = MemoryInline::FlatReadFloat32((r2 + -32696));
    f31.d = MemoryInline::FlatReadFloat32((r2 + -32660));
    r29 = 127;
    r30 = 0;
    r3 = -1240793088;
    r31 = (r3 + 24759);
}

loc_80042CB0:
{
    r4 = MemoryInline::FlatRead8(r28);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
}

loc_80042CBC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80042CD8;
    }
}

loc_80042CC0:
{
    r0 = MemoryInline::FlatRead8(r27);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80042CCC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80042CD8;
    }
}

loc_80042CD0:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -32696));
    goto loc_80042CF8;
}

loc_80042CD8:
{
    r3 = MemoryInline::FlatRead8(r27);
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    ctx->lr = 0x80042CE8u;
    if constexpr (KnownRegArgsCpuCall<0x80042EF4u>(&func_80042EF4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80042EF4_1AD3 = func_80042EF4_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80042EF4_1AD3);
        r4 = static_cast<uint32_t>(regargs_result_80042EF4_1AD3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x80042EF4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    }
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    SetCRFloatResident(cr, 0, f0.d, f29.d);
}

loc_80042CF0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80042CF8;
    }
}

loc_80042CF4:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f30.d));
}

loc_80042CF8:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f30.d));
    f0.d = PpcFmulsInline(f31.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 16), f0.d);
    r0 = fctiwzword0;
    MemoryInline::FlatWrite16((r26 + 34), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead8(r27);
    r0 = MemoryInline::FlatRead8(r28);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r3 = (r0 * r0);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    r0 = (r0 * r0);
    r3 = (r3 + r0);
    ctx->lr = 0x80042D30u;
    if constexpr (KnownRegArgsCpuCall<0x80042EB8u>(&func_80042EB8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80042EB8_24C1 = func_80042EB8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80042EB8_24C1);
        r4 = static_cast<uint32_t>(regargs_result_80042EB8_24C1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        InvokeDirectCpu<0x80042EB8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    f0.d = PPC_Fctiwz(f1.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f0.d);
    r0 = fctiwzword1;
    MemoryInline::FlatWrite16((r26 + 38), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r26 + 38));
}

loc_80042D48:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(127))) {
        goto loc_80042D50;
    }
}

loc_80042D4C:
{
    MemoryInline::FlatWrite16((r26 + 38), static_cast<uint16_t>(r29));
}

loc_80042D50:
{
    r0 = MemoryInline::FlatRead16((r26 + 38));
}

loc_80042D58:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(30))) {
        goto loc_80042D64;
    }
}

loc_80042D5C:
{
    MemoryInline::FlatWrite16((r26 + 34), static_cast<uint16_t>(r30));
    MemoryInline::FlatWrite16((r26 + 38), static_cast<uint16_t>(r30));
}

loc_80042D64:
{
    r0 = MemoryInline::FlatRead16((r26 + 34));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_2 & -65536);
    r3 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r31)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    r0 = (r3 + r0);
    r0 = (static_cast<int32_t>(r0) >> 8);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    r0 = (r0 + r3);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16((r26 + 16), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r26 + 38));
    MemoryInline::FlatWrite16((r26 + 20), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r26 + 38));
}

loc_80042D98:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(37))) {
        goto loc_80042DA8;
    }
}

loc_80042D9C:
{
    r3 = (r24 + r25);
    MemoryInline::FlatWrite8((r3 + 42), static_cast<uint8_t>(r30));
    goto loc_80042DB8;
}

loc_80042DA8:
{
    r3 = MemoryInline::FlatRead16((r26 + 34));
    if constexpr (KnownRegArgsCpuCall<0x80042BC4u>(&func_80042BC4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_80042BC4_30CC = func_80042BC4_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80042BC4_30CC;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x80042BC4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r4 = (r24 + r25);
    MemoryInline::FlatWrite8((r4 + 42), static_cast<uint8_t>(r3));
}

loc_80042DB8:
{
    r28 = (r28 + 1);
    r27 = (r27 + 1);
    r26 = (r26 + 2);
    r25 = (r25 + 1);
}

loc_80042DCC:
{
    if ((static_cast<int32_t>(r25) < static_cast<int32_t>(2))) {
        goto loc_80042CB0;
    }
}

loc_80042DD0:
{
    r4 = 0;
    r3 = MemoryInline::FlatRead8((r24 + 42));
    r0 = (r3 & 1);
}

loc_80042DE0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80042DEC;
    }
}

loc_80042DE4:
{
    r0 = (r4 | 8192);
    r4 = (r0 & 65535);
}

loc_80042DEC:
{
    r0 = (r3 & 2);
}

loc_80042DF4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80042DFC;
    }
}

loc_80042DF8:
{
    r4 = (r4 | 4096);
}

loc_80042DFC:
{
    r0 = (r3 & 4);
}

loc_80042E04:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80042E10;
    }
}

loc_80042E08:
{
    r0 = (r4 | 2048);
    r4 = (r0 & 65535);
}

loc_80042E10:
{
    r0 = (r3 & 8);
}

loc_80042E18:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80042E24;
    }
}

loc_80042E1C:
{
    r0 = (r4 | 1024);
    r4 = (r0 & 65535);
}

loc_80042E24:
{
    r3 = MemoryInline::FlatRead8((r24 + 43));
    r0 = (r3 & 1);
}

loc_80042E30:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80042E3C;
    }
}

loc_80042E34:
{
    r0 = (r4 | 32);
    r4 = (r0 & 65535);
}

loc_80042E3C:
{
    r0 = (r3 & 2);
}

loc_80042E44:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80042E50;
    }
}

loc_80042E48:
{
    r0 = (r4 | 16);
    r4 = (r0 & 65535);
}

loc_80042E50:
{
    r0 = (r3 & 4);
}

loc_80042E58:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80042E64;
    }
}

loc_80042E5C:
{
    r0 = (r4 | 8);
    r4 = (r0 & 65535);
}

loc_80042E64:
{
    r0 = (r3 & 8);
}

loc_80042E6C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80042E78;
    }
}

loc_80042E70:
{
    r0 = (r4 | 4);
    r4 = (r0 & 65535);
}

loc_80042E78:
{
    MemoryInline::FlatWrite16((r24 + 8), static_cast<uint16_t>(r4));
    r0 = 104;
    addr_psqx_80042E80_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80042E80_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 96));
    r0 = 88;
    addr_psqx_80042E8C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80042E8C_loc_0));
    f30.d = MemoryInline::FlatReadFloat64((r1 + 80));
    r0 = 72;
    addr_psqx_80042E98_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f29, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80042E98_loc_0));
    f29.d = MemoryInline::FlatReadFloat64((r1 + 64));
    r11 = (r1 + 64);
    // inline leaf 0x804574C8 (9 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, true, false);
    // end of inlined leaf 0x804574C8
    r0 = MemoryInline::FlatRead32((r1 + 116));
    ctx->lr = r0;
    r1 = (r1 + 112);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80042C0C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80042C0C_ra38_1f8_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xE0003FF9 fpr_write=0xE0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80042C0C func_80042C0C preserves=true fpr_mask=0x00000000
