#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803423C0(CpuContext* ctx);
extern "C" uint64_t func_803423C0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8034262C(CpuContext* ctx);
extern "C" uint64_t func_8034262C_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_80341BD0_ra38_1e2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t stackword5 = 0;
    uint32_t stackword6 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;
    uint32_t cr = ctx->cr;

    goto loc_80341BD0;

loc_80341BD0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = r3;
    r31 = MemoryInline::FlatRead32((r3 + 56));
    r0 = MemoryInline::FlatRead8((r3 + 7));
}

loc_80341BF8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80341C08;
    }
}

loc_80341BFC:
{
}

loc_80341C00:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80341CE0;
    }
}

loc_80341C04:
{
    goto loc_80341D90;
}

loc_80341C08:
{
    r4 = MemoryInline::FlatRead32(r31);
    ctx->lr = 0x80341C10u;
    if constexpr (KnownRegArgsCpuCall<0x803423C0u>(&func_803423C0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_803423C0_9F6 = func_803423C0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803423C0_9F6);
        r4 = static_cast<uint32_t>(regargs_result_803423C0_9F6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x803423C0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r0 = MemoryInline::FlatRead8((r31 + 96));
}

loc_80341C18:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80341C70;
    }
}

loc_80341C1C:
{
    r3 = r30;
    ctx->lr = 0x80341C24u;
    if constexpr (KnownRegArgsCpuCall<0x8034262Cu>(&func_8034262C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8034262C_E97 = func_8034262C_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8034262C_E97);
        r4 = static_cast<uint32_t>(regargs_result_8034262C_E97 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x8034262Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_80341C28:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80341C3C;
    }
}

loc_80341C2C:
{
    r3 = MemoryInline::FlatRead8((r30 + 7));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r30 + 7), static_cast<uint8_t>(r0));
    goto loc_80341C7C;
}

loc_80341C3C:
{
    r3 = r30;
    r4 = 2;
    ctx->lr = 0x80341C48u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x8034048Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
}

loc_80341C4C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80341D90;
    }
}

loc_80341C50:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 91), static_cast<uint8_t>(r0));
    r0 = 255;
    MemoryInline::FlatWrite16((r31 + 92), static_cast<uint16_t>(r0));
    r3 = r30;
    r4 = MemoryInline::FlatRead32(r31);
    ctx->lr = 0x80341C6Cu;
    if constexpr (KnownRegArgsCpuCall<0x803423C0u>(&func_803423C0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_803423C0_1676 = func_803423C0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803423C0_1676);
        r4 = static_cast<uint32_t>(regargs_result_803423C0_1676 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x803423C0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    goto loc_80341C7C;
}

loc_80341C70:
{
    r3 = MemoryInline::FlatRead8((r30 + 7));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r30 + 7), static_cast<uint8_t>(r0));
}

loc_80341C7C:
{
    r3 = (r30 + 24);
    r4 = (r31 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r0 = MemoryInline::FlatRead8((r31 + 91));
}

loc_80341C90:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80341CA0;
    }
}

loc_80341C94:
{
    r0 = 10;
    MemoryInline::FlatWrite32((r30 + 12), r0);
    goto loc_80341CC4;
}

loc_80341CA0:
{
    r3 = 0;
    // inline leaf 0x800CEF20 (23 guest instruction(s))
}

loc_inl0_0x800CEF20:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & -2);
    r6 = (r4 + r0);
    r0 = MemoryInline::FlatRead16((r6 + 24));
}

loc_inl0_0x800CEF38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x800CEF40;
    }
}

loc_inl0_0x800CEF3C:
{
    r0 = 1;
}

loc_inl0_0x800CEF40:
{
    r5 = (r0 * 176);
    r3 = 11337728;
    r0 = (r3 + 30009);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r5)) >> 32));
    r0 = (r5 - r3);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_4 & 2147483647);
    r0 = (r0 + r3);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_1 & 131071);
    r3 = 65536;
    r0 = (r3 + -173);
    r0 = (r4 * r0);
    r0 = (r5 - r0);
    r3 = (r0 & 65535);
    MemoryInline::FlatWriteRam16((r6 + 24), static_cast<uint16_t>(r3));
}

loc_inl0_cont_800CEF20:
{
    // end of inlined leaf 0x800CEF20
    r0 = (r3 & 65535);
    r0 = (r0 & 3);
    r3 = (r13 + -23864);
    r3_addr_1 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_1);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 30);
    MemoryInline::FlatWrite32((r30 + 12), r0);
}

loc_80341CC4:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 89), static_cast<uint8_t>(r0));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -10208));
    MemoryInline::FlatWriteFloat32((r31 + 20), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 24), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 28), f0.d);
    goto loc_80341D90;
}

loc_80341CE0:
{
    r4 = MemoryInline::FlatRead32((r3 + 12));
    r4 = MH3_TickLoad(r4, 2150898912);
    r0 = (r4 + -1);
    MemoryInline::FlatWrite32((r3 + 12), r0);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -10184));
    r0 = (r0 ^ -2147483648);
    stackword5 = r0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r0 = 1127219200;
    stackword6 = r0;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword6), static_cast<uint32_t>(stackword5));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -10208));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80341D10:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80341D90;
    }
}

loc_80341D18:
{
    r3 = 2;
    // inline leaf 0x800CFAF4 (16 guest instruction(s))
}

loc_inl1_0x800CFAF4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl1_0x800CFB04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x800CFB10;
    }
}

loc_inl1_0x800CFB08:
{
    r3 = 0;
    goto loc_inl1_cont_800CFAF4;
}

loc_inl1_0x800CFB10:
{
    r0 = (r3 & 255);
}

loc_inl1_0x800CFB18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl1_0x800CFB24;
    }
}

loc_inl1_0x800CFB1C:
{
    r3 = 0;
    goto loc_inl1_cont_800CFAF4;
}

loc_inl1_0x800CFB24:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl1_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    r29 = r3;
    // inline leaf 0x800CF3E8 (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 39));
    // end of inlined leaf 0x800CF3E8
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r0 = (r0 * 2848);
    r29 = (r29 + r0);
    r3 = r29;
    // inline leaf 0x803405F8 (13 guest instruction(s))
}

loc_inl3_0x803405F8:
{
    r0 = MemoryInline::FlatRead8((r3 + 10));
}

loc_inl3_0x80340600:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl3_0x80340624;
    }
}

loc_inl3_0x80340604:
{
    r3 = MemoryInline::FlatRead16((r3 + 12));
    r3 = (r3 + 65536);
    r0 = (r3 + -63);
    r0 = (r0 & 65535);
}

loc_inl3_0x80340618:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(4))) {
        goto loc_inl3_0x80340624;
    }
}

loc_inl3_0x8034061C:
{
    r3 = 1;
    goto loc_inl3_cont_803405F8;
}

loc_inl3_0x80340624:
{
    r3 = 0;
}

loc_inl3_cont_803405F8:
{
    // end of inlined leaf 0x803405F8
}

loc_80341D40:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80341D84;
    }
}

loc_80341D44:
{
    r0 = MemoryInline::FlatRead8((r29 + 9));
}

loc_80341D4C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(3))) {
        goto loc_80341D60;
    }
}

loc_80341D50:
{
    r0 = MemoryInline::FlatRead16((r29 + 1444));
    r0 = (r0 & 2);
}

loc_80341D5C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80341D84;
    }
}

loc_80341D60:
{
    r3 = (r29 + 60);
    r4 = (r31 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 36));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x8028F680u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80341D74:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80341D84;
    }
}

loc_80341D78:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 12), r0);
    goto loc_80341D90;
}

loc_80341D84:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 6), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r30 + 7), static_cast<uint8_t>(r0));
}

loc_80341D90:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80341BD0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80341BD0_ra38_1e2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80341BD0 func_80341BD0 preserves=true fpr_mask=0x00000000
