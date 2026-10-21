#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802CB964(CpuContext* ctx);
extern "C" uint64_t func_802CB964_ra18_2_18_0(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_802CCE7C(CpuContext* ctx);
extern "C" uint64_t func_802CCE7C_ra38_ce_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double);
extern "C" void func_802D3FD4(CpuContext* ctx);
extern "C" uint64_t func_802D3FD4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802D6ED8(CpuContext* ctx);
extern "C" uint64_t func_802D6ED8_ra38_ce_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double);
extern "C" void func_802D89C0(CpuContext* ctx);
extern "C" uint32_t func_802D89C0_ra48_0_8_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_802CD0B0_ra38_ce_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f6, double arg_f7)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x802CD0B0u);
    goto loc_802CD0B0;

loc_802CD0B0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = r3;
    r3 = 3;
    // inline leaf 0x800CFAF4 (16 guest instruction(s))
}

loc_inl0_0x800CFAF4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl0_0x800CFB04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x800CFB10;
    }
}

loc_inl0_0x800CFB08:
{
    r3 = 0;
    goto loc_inl0_cont_800CFAF4;
}

loc_inl0_0x800CFB10:
{
    r0 = (r3 & 255);
}

loc_inl0_0x800CFB18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl0_0x800CFB24;
    }
}

loc_inl0_0x800CFB1C:
{
    r3 = 0;
    goto loc_inl0_cont_800CFAF4;
}

loc_inl0_0x800CFB24:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl0_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    r30 = r3;
    r29 = MemoryInline::FlatRead32((r31 + 364));
    r28 = 0;
    r0 = MemoryInline::FlatRead8((r29 + 1170));
}

loc_802CD0EC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_802CD108;
    }
}

loc_802CD0F0:
{
    f1.d = MemoryInline::FlatReadFloat32((r29 + 1216));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13360));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_802CD0FC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_802CD108;
    }
}

loc_802CD100:
{
    r28 = 1;
    goto loc_802CD118;
}

loc_802CD108:
{
    r0 = MemoryInline::FlatRead8((r29 + 10));
}

loc_802CD110:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(6))) {
        goto loc_802CD118;
    }
}

loc_802CD114:
{
    r28 = 1;
}

loc_802CD118:
{
    r0 = MemoryInline::FlatRead8((r31 + 842));
}

loc_802CD120:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802CD248;
    }
}

loc_802CD124:
{
    r0 = MemoryInline::FlatRead8((r31 + 843));
}

loc_802CD12C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802CD1C0;
    }
}

loc_802CD130:
{
    r0 = MemoryInline::FlatRead8((r31 + 844));
    MemoryInline::FlatWrite8((r31 + 452), static_cast<uint8_t>(r0));
    r3 = r31;
    ctx->lr = 0x802CD140u;
    if constexpr (KnownRegArgsCpuCall<0x802D89C0u>(&func_802D89C0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_802D89C0_1129 = func_802D89C0_ra48_0_8_0(ctx, r3, r6);
        r3 = regargs_result_802D89C0_1129;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x802D89C0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r3 = r31;
    r4 = MemoryInline::FlatRead8((r31 + 900));
    ctx->lr = 0x802CD14Cu;
    if constexpr (KnownRegArgsCpuCall<0x802D6ED8u>(&func_802D6ED8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_802D6ED8_14CF = func_802D6ED8_ra38_ce_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f6.d, f7.d);
        r3 = static_cast<uint32_t>(regargs_result_802D6ED8_14CF);
        r4 = static_cast<uint32_t>(regargs_result_802D6ED8_14CF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->cr = cr;
        InvokeDirectCpu<0x802D6ED8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        cr = ctx->cr;
    }
    MemoryInline::FlatWrite32((r31 + 456), r3);
    r0 = MemoryInline::FlatRead8((r31 + 452));
    r0 = (r0 * 2840);
    r4 = (r30 + r0);
    r0 = MemoryInline::FlatRead8(r4);
}

loc_802CD164:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802CD18C;
    }
}

loc_802CD168:
{
    r0 = MemoryInline::FlatRead8((r4 + 485));
}

loc_802CD170:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(11))) {
        goto loc_802CD18C;
    }
}

loc_802CD174:
{
}

loc_802CD178:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(12))) {
        goto loc_802CD18C;
    }
}

loc_802CD17C:
{
    r3 = MemoryInline::FlatRead8((r4 + 481));
    r0 = MemoryInline::FlatRead8((r31 + 420));
}

loc_802CD188:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_802CD1A8;
    }
}

loc_802CD18C:
{
    r0 = 255;
    MemoryInline::FlatWrite8((r31 + 452), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 456), r0);
    MemoryInline::FlatWrite8((r31 + 843), static_cast<uint8_t>(r0));
    r3 = 0;
    goto loc_802CD250;
}

loc_802CD1A8:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r31 + 843), static_cast<uint8_t>(r0));
    r3 = r31;
    // inline leaf 0x802D4288 (3 guest instruction(s))
    r0 = 2;
    MemoryInline::FlatWrite8((r3 + 465), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x802D4288
    r3 = 1;
    goto loc_802CD250;
}

loc_802CD1C0:
{
}

loc_802CD1C4:
{
    if ((static_cast<uint32_t>(r28) != static_cast<uint32_t>(1))) {
        goto loc_802CD248;
    }
}

loc_802CD1C8:
{
    r0 = MemoryInline::FlatRead8((r31 + 841));
}

loc_802CD1D0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802CD248;
    }
}

loc_802CD1D4:
{
    r3 = r31;
    r4 = 30;
    r5 = 5;
    ctx->lr = 0x802CD1E4u;
    if constexpr (KnownRegArgsCpuCall<0x802D3FD4u>(&func_802D3FD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_802D3FD4_2174 = func_802D3FD4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802D3FD4_2174);
        r4 = static_cast<uint32_t>(regargs_result_802D3FD4_2174 >> 32);
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
        ctx->cr = cr;
        InvokeDirectCpu<0x802D3FD4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
}

loc_802CD1E8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802CD248;
    }
}

loc_802CD1EC:
{
    r3 = r31;
    r4 = 8;
    ctx->lr = 0x802CD1F8u;
    if constexpr (KnownRegArgsCpuCall<0x802CCE7Cu>(&func_802CCE7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_802CCE7C_25C9 = func_802CCE7C_ra38_ce_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f6.d, f7.d);
        r3 = static_cast<uint32_t>(regargs_result_802CCE7C_25C9);
        r4 = static_cast<uint32_t>(regargs_result_802CCE7C_25C9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->cr = cr;
        InvokeDirectCpu<0x802CCE7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        cr = ctx->cr;
    }
}

loc_802CD1FC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802CD248;
    }
}

loc_802CD200:
{
    r0 = MemoryInline::FlatRead8((r31 + 452));
    r0 = (r0 * 2840);
    r4 = (r30 + r0);
    r3 = (r29 + 60);
    r4 = (r4 + 392);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -13108));
    ctx->lr = 0x802CD21Cu;
    if constexpr (KnownRegArgsCpuCall<0x802CB964u>(&func_802CB964)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_802CB964_2CD0 = func_802CB964_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_802CB964_2CD0);
        r4 = static_cast<uint32_t>(regargs_result_802CB964_2CD0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x802CB964u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    r0 = (r3 & 255);
}

loc_802CD224:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802CD240;
    }
}

loc_802CD228:
{
    r0 = MemoryInline::FlatRead8((r31 + 452));
    MemoryInline::FlatWrite8((r31 + 844), static_cast<uint8_t>(r0));
    r0 = 10;
    MemoryInline::FlatWrite8((r31 + 842), static_cast<uint8_t>(r0));
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 843), static_cast<uint8_t>(r0));
}

loc_802CD240:
{
    r3 = 0;
    goto loc_802CD250;
}

loc_802CD248:
{
    MemoryInline::FlatWrite8((r31 + 841), static_cast<uint8_t>(r28));
    r3 = 0;
}

loc_802CD250:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802CD0B0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802CD0B0_ra38_ce_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[6].d, ctx->fpr[7].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xE00030CF fpr_write=0xE0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802CD0B0 func_802CD0B0 preserves=true fpr_mask=0x00000000
