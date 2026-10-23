#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802772E8(CpuContext* ctx);
extern "C" uint64_t func_802772E8_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);

extern "C" uint64_t func_802779D8_ra38_1e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r7_addr_0 = 0;
    uint32_t stackword10 = 0;
    uint32_t stackword7 = 0;
    uint32_t stackword8 = 0;
    uint32_t stackword9 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    uint32_t cr = ctx->cr;

    goto loc_802779D8;

loc_802779D8:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r27 = r3;
    r28 = r4;
    r29 = r8;
    r31 = MemoryInline::FlatRead32((r3 + 316));
    r0 = (r6 & 65535);
    r0 = (r0 * 26);
    r30 = (r5 + r0);
    r0 = MemoryInline::FlatRead8((r30 + 15));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r7_addr_0 = (r7 + r0);
    r0 = MemoryInline::FlatRead32(r7_addr_0);
    MemoryInline::FlatWrite32((r4 + 8), r0);
    r3 = r28;
    // inline leaf 0x8029F59C (3 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 32), r0);
    // end of inlined leaf 0x8029F59C
    r0 = (r29 & 65535);
    r0 = (r0 & 1);
}

loc_80277A2C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80277A40;
    }
}

loc_80277A30:
{
    r3 = r28;
    r4 = 1832;
    // inline leaf 0x8029F5A8 (4 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r0 = (r0 | r4);
    MemoryInline::FlatWrite32((r3 + 32), r0);
    // end of inlined leaf 0x8029F5A8
    goto loc_80277A4C;
}

loc_80277A40:
{
    r3 = r28;
    r4 = 1800;
    // inline leaf 0x8029F5A8 (4 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r0 = (r0 | r4);
    MemoryInline::FlatWrite32((r3 + 32), r0);
    // end of inlined leaf 0x8029F5A8
}

loc_80277A4C:
{
    r0 = MemoryInline::FlatRead8((r27 + 2));
}

loc_80277A54:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80277A64;
    }
}

loc_80277A58:
{
    r3 = r28;
    r4 = 2048;
    // inline leaf 0x8029F5A8 (4 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r0 = (r0 | r4);
    MemoryInline::FlatWrite32((r3 + 32), r0);
    // end of inlined leaf 0x8029F5A8
}

loc_80277A64:
{
    r0 = (r29 & 65535);
    r0 = (r0 & 128);
}

loc_80277A70:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80277A80;
    }
}

loc_80277A74:
{
    r3 = r28;
    r4 = 4096;
    // inline leaf 0x8029F5A8 (4 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r0 = (r0 | r4);
    MemoryInline::FlatWrite32((r3 + 32), r0);
    // end of inlined leaf 0x8029F5A8
}

loc_80277A80:
{
    r0 = (r29 & 65535);
    r0 = (r0 & 256);
}

loc_80277A8C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80277A9C;
    }
}

loc_80277A90:
{
    r3 = r28;
    r4 = 8192;
    // inline leaf 0x8029F5A8 (4 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r0 = (r0 | r4);
    MemoryInline::FlatWrite32((r3 + 32), r0);
    // end of inlined leaf 0x8029F5A8
}

loc_80277A9C:
{
    r3 = r27;
    // inline leaf 0x8026A36C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 316));
    r3 = MemoryInline::FlatRead16((r3 + 84));
    // end of inlined leaf 0x8026A36C
    guest_range_0 = MemoryInline::ResolveRangeHost((r28 + 5), 0, 59u, false, true);
    MemoryInline::WriteResolved16(guest_range_0, 19u, (r28 + 24), static_cast<uint16_t>(r3));
    r0 = 0;
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 21u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 21u, (r28 + 26), r0);
        MemoryInline::WriteResolved16(guest_range_0, 23u, (r28 + 28), r0);
    }
    MemoryInline::WriteResolved16(guest_range_0, 25u, (r28 + 30), static_cast<uint16_t>(r0));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 72));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14816));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14876));
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_80277ACC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80277AE0;
    }
}

loc_80277AD0:
{
    r0 = MemoryInline::FlatRead32((r31 + 80));
    r0 = (r0 & 1);
}

loc_80277ADC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80277AE4;
    }
}

loc_80277AE0:
{
    f3.d = MemoryInline::FlatReadFloat32((r2 + -14876));
}

loc_80277AE4:
{
    f4.d = MemoryInline::FlatReadFloat32((r31 + 120));
    r0 = MemoryInline::FlatRead16(r30);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    f2.d = MemoryInline::FlatReadFloat64((r2 + -14848));
    r0 = (r0 ^ -2147483648);
    stackword7 = r0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r3 = 1127219200;
    stackword8 = r3;
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword8), static_cast<uint32_t>(stackword7));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 51u, (r28 + 56), f1.d);
    r0 = MemoryInline::FlatRead16((r30 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 ^ -2147483648);
    stackword9 = r0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    stackword10 = r3;
    MemoryInline::FlatWriteRam32((r1 + 16), r3);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword10), static_cast<uint32_t>(stackword9));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 55u, (r28 + 60), f2.d);
    r0 = MemoryInline::FlatRead16(r30);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80277B30:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80277B70;
    }
}

loc_80277B34:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f4.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 51u, (r28 + 56), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -14876));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80277B48:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80277B70;
    }
}

loc_80277B4C:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 51u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 55u, (r28 + 60), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 51u, (r28 + 56), f1.d);
    }
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80277B5C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80277B70;
    }
}

loc_80277B64:
{
    r0 = 0;
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r28 + 5), static_cast<uint8_t>(r0));
    goto loc_80277B90;
}

loc_80277B70:
{
    r3 = r28;
    r4 = r30;
    ctx->lr = 0x80277B7Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8029F268u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    r3 = r27;
    r4 = r30;
    r5 = r28;
    r6 = (r29 & 65535);
    ctx->lr = 0x80277B90u;
    if constexpr (KnownRegArgsCpuCall<0x802772E8u>(&func_802772E8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_802772E8_263E = func_802772E8_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_802772E8_263E);
        r4 = static_cast<uint32_t>(regargs_result_802772E8_263E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x802772E8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
}

loc_80277B90:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802779D8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802779D8_ra38_1e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802779D8 func_802779D8 preserves=true fpr_mask=0x00000000
