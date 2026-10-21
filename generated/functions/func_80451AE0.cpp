#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804249AC(CpuContext* ctx);
extern "C" uint32_t func_804249AC_ra18_0_10_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8042A1D0(CpuContext* ctx);
extern "C" uint64_t func_8042A1D0_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8044E2AC(CpuContext* ctx);
extern "C" uint64_t func_8044E2AC_ra38_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);

extern "C" uint64_t func_80451AE0_ra18_1e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, double arg_f1, double arg_f2, double arg_f3, double arg_f4)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;

    MKW_GUEST_ENTER(0x80451AE0u);
    goto loc_80451AE0;

loc_80451AE0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = MemoryInline::FlatRead32((r13 + -16440));
    // inline leaf 0x8042A690 (15 guest instruction(s))
}

loc_inl0_0x8042A690:
{
    r3 = MemoryInline::FlatRead32((r13 + -16440));
}

loc_inl0_0x8042A698:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x8042A6A4;
    }
}

loc_inl0_0x8042A69C:
{
    r3 = 0;
    goto loc_inl0_cont_8042A690;
}

loc_inl0_0x8042A6A4:
{
    r0 = MemoryInline::FlatRead32((r3 + 80));
}

loc_inl0_0x8042A6AC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_inl0_0x8042A6B8;
    }
}

loc_inl0_0x8042A6B0:
{
    r3 = 1;
    goto loc_inl0_cont_8042A690;
}

loc_inl0_0x8042A6B8:
{
    r3 = MemoryInline::FlatRead32((r3 + 76));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 134217727);
}

loc_inl0_cont_8042A690:
{
    // end of inlined leaf 0x8042A690
}

loc_80451AFC:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_80451B28;
    }
}

loc_80451B00:
{
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r0 = MemoryInline::FlatRead8((r3 + 2241));
}

loc_80451B10:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_80451B28;
    }
}

loc_80451B14:
{
    r0 = MemoryInline::FlatRead8((r31 + 23));
}

loc_80451B1C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(34))) {
        goto loc_80451B28;
    }
}

loc_80451B20:
{
    r3 = 0;
    goto loc_80451B80;
}

loc_80451B28:
{
    r0 = 25;
    MemoryInline::FlatWrite8((r31 + 23), static_cast<uint8_t>(r0));
    r0 = 3;
    MemoryInline::FlatWrite8((r31 + 16), static_cast<uint8_t>(r0));
    r0 = 0;
    r3 = (r31 + 65536);
    MemoryInline::FlatWrite16((r3 + -15518), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r3 + -15520), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite32((r3 + -15516), r0);
    MemoryInline::FlatWrite8((r3 + -32060), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + -32059), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + -32057), static_cast<uint8_t>(r0));
    ctx->lr = 0x80451B5Cu;
    if constexpr (KnownRegArgsCpuCall<0x8042A1D0u>(&func_8042A1D0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8042A1D0_E93 = func_8042A1D0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8042A1D0_E93);
        r4 = static_cast<uint32_t>(regargs_result_8042A1D0_E93 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8042A1D0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r3 = r31;
    if constexpr (KnownRegArgsCpuCall<0x804249ACu>(&func_804249AC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_804249AC_113E = func_804249AC_ra18_0_10_0(ctx, r3, r4);
        r4 = regargs_result_804249AC_113E;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x804249ACu>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = r31;
    ctx->lr = 0x80451B6Cu;
    if constexpr (KnownRegArgsCpuCall<0x8044E2ACu>(&func_8044E2AC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8044E2AC_138E = func_8044E2AC_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_8044E2AC_138E);
        r4 = static_cast<uint32_t>(regargs_result_8044E2AC_138E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x8044E2ACu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    r0 = 2;
    r3 = 0x806B0000u;
    r3 = (r3 + -12348);
    MemoryInline::FlatWriteRam8((r3 + 374), static_cast<uint8_t>(r0));
    r3 = 1;
}

loc_80451B80:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80451AE0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80451AE0_ra18_1e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000201F gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x0000001F fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0xFF cr_write=0xC1 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80451AE0 func_80451AE0 preserves=true fpr_mask=0x00000000
