#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8008DA74(CpuContext* ctx);
extern "C" uint64_t func_8008DA74_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8019DEFC_ra38_6_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x8019DEFCu);
    goto loc_8019DEFC;

loc_8019DEFC:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r31 = r3;
    r28 = r4;
    r29 = r7;
    r30 = r8;
    r3 = (r1 + 8);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r31 = MemoryInline::FlatRead32((r31 + 4));
    r0 = MemoryInline::FlatRead8((r30 + 4));
}

loc_8019DF3C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(255))) {
        goto loc_8019E108;
    }
}

loc_8019DF40:
{
}

loc_8019DF44:
{
    if ((static_cast<uint32_t>(r29) == static_cast<uint32_t>(27))) {
        goto loc_8019DF64;
    }
}

loc_8019DF48:
{
}

loc_8019DF4C:
{
    if ((static_cast<uint32_t>(r29) == static_cast<uint32_t>(28))) {
        goto loc_8019DFE8;
    }
}

loc_8019DF50:
{
}

loc_8019DF54:
{
    if ((static_cast<uint32_t>(r29) == static_cast<uint32_t>(24))) {
        goto loc_8019E06C;
    }
}

loc_8019DF58:
{
}

loc_8019DF5C:
{
    if ((static_cast<uint32_t>(r29) == static_cast<uint32_t>(26))) {
        goto loc_8019E0D4;
    }
}

loc_8019DF60:
{
    goto loc_8019E108;
}

loc_8019DF64:
{
    r3 = r28;
    r4 = (r1 + 8);
    ctx->lr = 0x8019DF70u;
    if constexpr (KnownRegArgsCpuCall<0x8008DA74u>(&func_8008DA74)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8008DA74_993 = func_8008DA74_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8008DA74_993);
        r4 = static_cast<uint32_t>(regargs_result_8008DA74_993 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        InvokeDirectCpu<0x8008DA74u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    }
    f1.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 808));
    f2.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f2.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 812));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 816));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -22464));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_8019DFA8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8019DFB0;
    }
}

loc_8019DFAC:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
}

loc_8019DFB0:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -21964));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8019DFBC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8019DFC4;
    }
}

loc_8019DFC0:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
}

loc_8019DFC4:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -22612));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8019DFD0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8019DFD8;
    }
}

loc_8019DFD4:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
}

loc_8019DFD8:
{
    r3 = r28;
    r4 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8008E934u>(ctx);
    goto loc_8019E108;
}

loc_8019DFE8:
{
    r3 = r28;
    r4 = (r1 + 8);
    ctx->lr = 0x8019DFF4u;
    if constexpr (KnownRegArgsCpuCall<0x8008DA74u>(&func_8008DA74)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8008DA74_14B3 = func_8008DA74_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8008DA74_14B3);
        r4 = static_cast<uint32_t>(regargs_result_8008DA74_14B3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        InvokeDirectCpu<0x8008DA74u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    }
    f1.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 824));
    f2.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f2.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 828));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 832));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -21960));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_8019E02C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8019E034;
    }
}

loc_8019E030:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
}

loc_8019E034:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -22024));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8019E040:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8019E048;
    }
}

loc_8019E044:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
}

loc_8019E048:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -21956));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8019E054:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8019E05C;
    }
}

loc_8019E058:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
}

loc_8019E05C:
{
    r3 = r28;
    r4 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8008E934u>(ctx);
    goto loc_8019E108;
}

loc_8019E06C:
{
    r3 = r28;
    r4 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8008E224u>(ctx);
    r3 = r31;
    r4 = 1;
    // inline leaf 0x801923D4 (7 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 861));
    r0 = (r4 & 255);
    r3 = (r3 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x801923D4
}

loc_8019E088:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8019E09C;
    }
}

loc_8019E08C:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -22172));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
}

loc_8019E09C:
{
    r3 = r28;
    r4 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8008F1ACu>(ctx);
    r3 = r28;
    r4 = (r1 + 8);
    ctx->lr = 0x8019E0B4u;
    if constexpr (KnownRegArgsCpuCall<0x8008DA74u>(&func_8008DA74)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8008DA74_23D8 = func_8008DA74_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8008DA74_23D8);
        r4 = static_cast<uint32_t>(regargs_result_8008DA74_23D8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        InvokeDirectCpu<0x8008DA74u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    }
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 848));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    r3 = r28;
    r4 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8008E934u>(ctx);
    goto loc_8019E108;
}

loc_8019E0D4:
{
    r3 = r28;
    r4 = (r1 + 8);
    ctx->lr = 0x8019E0E0u;
    if constexpr (KnownRegArgsCpuCall<0x8008DA74u>(&func_8008DA74)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8008DA74_29AD = func_8008DA74_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8008DA74_29AD);
        r4 = static_cast<uint32_t>(regargs_result_8008DA74_29AD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        InvokeDirectCpu<0x8008DA74u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    }
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 848));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 852));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    r3 = r28;
    r4 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8008E934u>(ctx);
}

loc_8019E108:
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
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8019DEFC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8019DEFC_ra38_6_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000FFF gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x00000007 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8019DEFC func_8019DEFC preserves=true fpr_mask=0x00000000
