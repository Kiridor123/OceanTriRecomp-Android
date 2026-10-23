#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80229334(CpuContext* ctx);
extern "C" uint32_t func_80229334_ra18_30_8_0(CpuContext*, uint32_t, uint32_t, double, double);

extern "C" uint64_t func_80227964_ra38_32_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f4, double arg_f5)
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
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80227964;

loc_80227964:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r29 = r4;
    r30 = r5;
    r31 = r6;
    r3 = (r1 + 32);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 20);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 8);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    // inline leaf 0x800D0788 (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 2167));
    // end of inlined leaf 0x800D0788
    r0 = (r3 & 255);
}

loc_802279AC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_802279BC;
    }
}

loc_802279B0:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15628));
    MemoryInline::FlatWriteFloat32((r30 + 100), f0.d);
    goto loc_80227B38;
}

loc_802279BC:
{
    r3 = MemoryInline::FlatRead32((r29 + 316));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 72));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15812));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_802279CC:
{
    r0 = cr;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & 1);
    r3 = (r0 & 255);
    r0 = (r31 & 65535);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1052));
}

loc_802279E0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80227AAC;
    }
}

loc_802279E4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80227A24;
    }
}

loc_802279E8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1009));
}

loc_802279EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80227A80;
    }
}

loc_802279F0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80227A0C;
    }
}

loc_802279F4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1003));
}

loc_802279F8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80227A80;
    }
}

loc_802279FC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80227B04;
    }
}

loc_80227A00:
{
}

loc_80227A04:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1002))) {
        goto loc_80227A54;
    }
}

loc_80227A08:
{
    goto loc_80227B04;
}

loc_80227A0C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1018));
}

loc_80227A10:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80227A54;
    }
}

loc_80227A14:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80227B04;
    }
}

loc_80227A18:
{
}

loc_80227A1C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1051))) {
        goto loc_80227A54;
    }
}

loc_80227A20:
{
    goto loc_80227B04;
}

loc_80227A24:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1130));
}

loc_80227A28:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80227AD8;
    }
}

loc_80227A2C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80227A48;
    }
}

loc_80227A30:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1070));
}

loc_80227A34:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80227A54;
    }
}

loc_80227A38:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80227B04;
    }
}

loc_80227A3C:
{
}

loc_80227A40:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1057))) {
        goto loc_80227A80;
    }
}

loc_80227A44:
{
    goto loc_80227B04;
}

loc_80227A48:
{
}

loc_80227A4C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1160))) {
        goto loc_80227AD8;
    }
}

loc_80227A50:
{
    goto loc_80227B04;
}

loc_80227A54:
{
}

loc_80227A58:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80227A74;
    }
}

loc_80227A5C:
{
    r3 = r29;
    r4 = 0x805C0000u;
    r4 = (r4 + -16088);
    ctx->lr = 0x80227A6Cu;
    if constexpr (KnownRegArgsCpuCall<0x80229334u>(&func_80229334)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_80229334_15DC = func_80229334_ra18_30_8_0(ctx, r3, r4, f4.d, f5.d);
        r3 = regargs_result_80229334_15DC;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80229334u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    }
    MemoryInline::FlatWriteFloat32((r30 + 100), f1.d);
    goto loc_80227B38;
}

loc_80227A74:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15816));
    MemoryInline::FlatWriteFloat32((r30 + 100), f0.d);
    goto loc_80227B38;
}

loc_80227A80:
{
}

loc_80227A84:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80227AA0;
    }
}

loc_80227A88:
{
    r3 = r29;
    r4 = 0x805C0000u;
    r4 = (r4 + -16048);
    ctx->lr = 0x80227A98u;
    if constexpr (KnownRegArgsCpuCall<0x80229334u>(&func_80229334)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_80229334_1BEC = func_80229334_ra18_30_8_0(ctx, r3, r4, f4.d, f5.d);
        r3 = regargs_result_80229334_1BEC;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80229334u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    }
    MemoryInline::FlatWriteFloat32((r30 + 100), f1.d);
    goto loc_80227B38;
}

loc_80227AA0:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15628));
    MemoryInline::FlatWriteFloat32((r30 + 100), f0.d);
    goto loc_80227B38;
}

loc_80227AAC:
{
}

loc_80227AB0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80227ACC;
    }
}

loc_80227AB4:
{
    r3 = r29;
    r4 = 0x805C0000u;
    r4 = (r4 + -16008);
    ctx->lr = 0x80227AC4u;
    if constexpr (KnownRegArgsCpuCall<0x80229334u>(&func_80229334)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_80229334_21FC = func_80229334_ra18_30_8_0(ctx, r3, r4, f4.d, f5.d);
        r3 = regargs_result_80229334_21FC;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80229334u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    }
    MemoryInline::FlatWriteFloat32((r30 + 100), f1.d);
    goto loc_80227B38;
}

loc_80227ACC:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15628));
    MemoryInline::FlatWriteFloat32((r30 + 100), f0.d);
    goto loc_80227B38;
}

loc_80227AD8:
{
}

loc_80227ADC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80227AF8;
    }
}

loc_80227AE0:
{
    r3 = r29;
    r4 = 0x805C0000u;
    r4 = (r4 + -15968);
    ctx->lr = 0x80227AF0u;
    if constexpr (KnownRegArgsCpuCall<0x80229334u>(&func_80229334)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_80229334_280C = func_80229334_ra18_30_8_0(ctx, r3, r4, f4.d, f5.d);
        r3 = regargs_result_80229334_280C;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80229334u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    }
    MemoryInline::FlatWriteFloat32((r30 + 100), f1.d);
    goto loc_80227B38;
}

loc_80227AF8:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15816));
    MemoryInline::FlatWriteFloat32((r30 + 100), f0.d);
    goto loc_80227B38;
}

loc_80227B04:
{
    r3 = r29;
    // inline leaf 0x8026A404 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 24));
    // end of inlined leaf 0x8026A404
    r0 = (r3 & 255);
}

loc_80227B14:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80227B24;
    }
}

loc_80227B18:
{
    r0 = MemoryInline::FlatRead8((r30 + 17));
}

loc_80227B20:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_80227B30;
    }
}

loc_80227B24:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15816));
    MemoryInline::FlatWriteFloat32((r30 + 100), f0.d);
    goto loc_80227B38;
}

loc_80227B30:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15628));
    MemoryInline::FlatWriteFloat32((r30 + 100), f0.d);
}

loc_80227B38:
{
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80227964(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80227964_ra38_32_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[4].d, ctx->fpr[5].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007F gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000033 fpr_write=0x0000003F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80227964 func_80227964 preserves=true fpr_mask=0x00000000
