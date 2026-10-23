#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80126098(CpuContext* ctx);
extern "C" uint64_t func_80126098_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_8012D118(CpuContext* ctx);
extern "C" uint64_t func_8012D118_ra18_2_18_0(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_8012D20C(CpuContext* ctx);
extern "C" uint64_t func_8012D20C_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_8012C150_ra18_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, double arg_f1)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;

    goto loc_8012C150;

loc_8012C150:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r27 = r3;
    r28 = r4;
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
    r31 = r3;
    r3 = r27;
    if constexpr (KnownRegArgsCpuCall<0x80126098u>(&func_80126098)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80126098_AA9 = func_80126098_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_80126098_AA9);
        r4 = static_cast<uint32_t>(regargs_result_80126098_AA9 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80126098u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r3 = MemoryInline::FlatRead32((r3 + 160));
    r4 = MemoryInline::FlatRead32((r3 + 36));
    r0 = (r28 & 255);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3 = (r27 + r0);
    r29 = MemoryInline::FlatRead32((r3 + 912));
}

loc_8012C19C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8012C1B0;
    }
}

loc_8012C1A0:
{
    r30 = MemoryInline::FlatRead32(r4);
}

loc_8012C1A8:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8012C1B0;
    }
}

loc_8012C1AC:
{
    goto loc_8012C1B8;
}

loc_8012C1B0:
{
    r3 = 0x805A0000u;
    r30 = (r3 + 6072);
}

loc_8012C1B8:
{
    r0 = (r28 & 255);
    r0 = (r0 * 2848);
    r31 = (r31 + r0);
    r0 = MemoryInline::FlatRead8(r31);
}

loc_8012C1CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8012C240;
    }
}

loc_8012C1D0:
{
    r3 = MemoryInline::FlatRead8((r31 + 8));
    ctx->lr = 0x8012C1D8u;
    if constexpr (KnownRegArgsCpuCall<0x8012D20Cu>(&func_8012D20C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8012D20C_115B = func_8012D20C_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8012D20C_115B);
        r4 = static_cast<uint32_t>(regargs_result_8012D20C_115B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8012D20Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_8012C1DC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8012C240;
    }
}

loc_8012C1E0:
{
    r3 = r27;
    r4 = r31;
    ctx->lr = 0x8012C1ECu;
    if constexpr (KnownRegArgsCpuCall<0x8012D118u>(&func_8012D118)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8012D118_14DB = func_8012D118_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_8012D118_14DB);
        r4 = static_cast<uint32_t>(regargs_result_8012D118_14DB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x8012D118u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
    }
}

loc_8012C1F0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8012C240;
    }
}

loc_8012C1F4:
{
    r30 = MemoryInline::FlatRead32((r30 + 8));
    r4 = MemoryInline::FlatRead32((r30 + 12));
}

loc_8012C200:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8012C21C;
    }
}

loc_8012C204:
{
    r3 = r31;
    // inline leaf 0x80279118 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 984));
    r3 = (r0 & r4);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x80279118
}

loc_8012C210:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8012C21C;
    }
}

loc_8012C214:
{
    r0 = MemoryInline::FlatRead32((r30 + 16));
    r29 = (r29 + r0);
}

loc_8012C21C:
{
    r4 = MemoryInline::FlatRead32((r30 + 20));
}

loc_8012C224:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8012C240;
    }
}

loc_8012C228:
{
    r3 = r31;
    // inline leaf 0x80279130 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 988));
    r3 = (r0 & r4);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & 1);
    // end of inlined leaf 0x80279130
}

loc_8012C234:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8012C240;
    }
}

loc_8012C238:
{
    r0 = MemoryInline::FlatRead32((r30 + 24));
    r29 = (r29 + r0);
}

loc_8012C240:
{
}

loc_8012C244:
{
    if ((static_cast<int32_t>(r29) >= static_cast<int32_t>(0))) {
        goto loc_8012C24C;
    }
}

loc_8012C248:
{
    r29 = 0;
}

loc_8012C24C:
{
    r3 = r29;
    r11 = (r1 + 32);
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8012C150(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8012C150_ra18_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000201F gpr_write=0x0000083B gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8012C150 func_8012C150 preserves=true fpr_mask=0x00000000
