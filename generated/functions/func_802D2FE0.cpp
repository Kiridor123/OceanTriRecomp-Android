#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802D2C14(CpuContext* ctx);
extern "C" uint64_t func_802D2C14_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_802D2FE0_ra38_e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t stackword5 = 0;
    uint32_t stackword6 = 0;
    uint32_t stackword7 = 0;
    uint32_t stackword8 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    uint32_t cr = ctx->cr;

    goto loc_802D2FE0;

loc_802D2FE0:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r30 = r3;
    r0 = (r4 & 255);
    r0 = (r0 * 92);
    r3 = (r3 + r0);
    r31 = (r3 + 576);
    r3 = 0x805D0000u;
    r29 = (r3 + 17048);
    r0 = (r5 * 26);
    r29 = (r29 + r0);
    r0 = MemoryInline::FlatRead8((r29 + 15));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3 = (r13 + -26904);
    r3_addr_0 = (r3 + r0);
    r0 = MemoryInline::FlatRead32(r3_addr_0);
    MemoryInline::FlatWrite32((r31 + 8), r0);
    r3 = r31;
    // inline leaf 0x8029F59C (3 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 32), r0);
    // end of inlined leaf 0x8029F59C
    r3 = r31;
    r4 = 800;
    // inline leaf 0x8029F5A8 (4 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r0 = (r0 | r4);
    MemoryInline::FlatWrite32((r3 + 32), r0);
    // end of inlined leaf 0x8029F5A8
    r3 = r30;
    // inline leaf 0x802D2A14 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 88));
    // end of inlined leaf 0x802D2A14
    MemoryInline::FlatWrite16((r31 + 24), static_cast<uint16_t>(r3));
    r0 = 0;
    MemoryInline::FlatWrite16((r31 + 26), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r31 + 28), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r31 + 30), static_cast<uint16_t>(r0));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 76));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13168));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13360));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_802D3074:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_802D3088;
    }
}

loc_802D3078:
{
    r0 = MemoryInline::FlatRead32((r30 + 84));
    r0 = (r0 & 1);
}

loc_802D3084:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802D308C;
    }
}

loc_802D3088:
{
    f2.d = MemoryInline::FlatReadFloat32((r2 + -13360));
}

loc_802D308C:
{
    f3.d = MemoryInline::FlatReadFloat32((r30 + 124));
    r0 = MemoryInline::FlatRead16(r29);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -13144));
    r0 = (r0 ^ -2147483648);
    stackword5 = r0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r3 = 1127219200;
    stackword6 = r3;
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword6), static_cast<uint32_t>(stackword5));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteFloat32((r31 + 56), f0.d);
    r0 = MemoryInline::FlatRead16((r29 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 ^ -2147483648);
    stackword7 = r0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    stackword8 = r3;
    MemoryInline::FlatWriteRam32((r1 + 16), r3);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword8), static_cast<uint32_t>(stackword7));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteFloat32((r31 + 60), f0.d);
    r0 = MemoryInline::FlatRead16(r29);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_802D30D8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802D3128;
    }
}

loc_802D30DC:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 56));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r31 + 56), f0.d);
    f2.d = MemoryInline::FlatReadFloat32((r31 + 56));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -13360));
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_802D30F8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_802D3128;
    }
}

loc_802D30FC:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 60));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    MemoryInline::FlatWriteFloat32((r31 + 60), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 56), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 60));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_802D3114:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_802D3128;
    }
}

loc_802D311C:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 5), static_cast<uint8_t>(r0));
    goto loc_802D3140;
}

loc_802D3128:
{
    r3 = r31;
    r4 = r29;
    ctx->lr = 0x802D3134u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x8029F268u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    r3 = r30;
    r4 = r31;
    ctx->lr = 0x802D3140u;
    if constexpr (KnownRegArgsCpuCall<0x802D2C14u>(&func_802D2C14)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_802D2C14_1A87 = func_802D2C14_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802D2C14_1A87);
        r4 = static_cast<uint32_t>(regargs_result_802D2C14_1A87 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x802D2C14u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
}

loc_802D3140:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802D2FE0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802D2FE0_ra38_e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802D2FE0 func_802D2FE0 preserves=true fpr_mask=0x00000000
