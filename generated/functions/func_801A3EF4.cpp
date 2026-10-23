#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8012F990(CpuContext* ctx);
extern "C" uint64_t func_8012F990_ra58_e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);

extern "C" uint64_t func_801A3EF4_ra38_e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;

    goto loc_801A3EF4;

loc_801A3EF4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    // inline leaf 0x8012F960 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 116));
    // end of inlined leaf 0x8012F960
    r30 = r3;
    r3 = (r3 & 65535);
    r0 = (r3 + -105);
}

loc_801A3F20:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_801A3F2C;
    }
}

loc_801A3F24:
{
}

loc_801A3F28:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(109))) {
        goto loc_801A3F40;
    }
}

loc_801A3F2C:
{
    r0 = MemoryInline::FlatRead16((r31 + 2102));
    r0 = (r0 & 64511);
}

loc_801A3F34:
{
    r0 = (r0 | 512);
    MemoryInline::FlatWrite16((r31 + 2102), static_cast<uint16_t>(r0));
    goto loc_801A3F50;
}

loc_801A3F40:
{
    r0 = MemoryInline::FlatRead16((r31 + 2102));
    r0 = (r0 | 1024);
    r0 = (r0 & 65023);
}

loc_801A3F4C:
{
    MemoryInline::FlatWrite16((r31 + 2102), static_cast<uint16_t>(r0));
}

loc_801A3F50:
{
    r3 = r31;
    r4 = 7;
    r5 = 9;
    // inline leaf 0x8012D270 (12 guest instruction(s))
}

loc_inl1_0x8012D270:
{
    r6 = MemoryInline::FlatRead8((r3 + 485));
    r0 = (r4 & 255);
}

loc_inl1_0x8012D27C:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl1_0x8012D298;
    }
}

loc_inl1_0x8012D280:
{
    r3 = MemoryInline::FlatRead8((r3 + 486));
    r0 = (r5 & 255);
}

loc_inl1_0x8012D28C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl1_0x8012D298;
    }
}

loc_inl1_0x8012D290:
{
    r3 = 1;
    goto loc_inl1_cont_8012D270;
}

loc_inl1_0x8012D298:
{
    r3 = 0;
}

loc_inl1_cont_8012D270:
{
    // end of inlined leaf 0x8012D270
}

loc_801A3F64:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801A3FA0;
    }
}

loc_801A3F68:
{
    r0 = (r30 & 65535);
}

loc_801A3F70:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(14))) {
        goto loc_801A3FA0;
    }
}

loc_801A3F74:
{
    r3 = r31;
    r4 = 3;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -21248));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -21244));
    ctx->lr = 0x801A3F88u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8012F990_D77 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_D77);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_D77 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x8012F990u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
}

loc_801A3F8C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801A3FA0;
    }
}

loc_801A3F90:
{
    r0 = MemoryInline::FlatRead16((r31 + 2102));
    r0 = (r0 & 63487);
}

loc_801A3F98:
{
    MemoryInline::FlatWrite16((r31 + 2102), static_cast<uint16_t>(r0));
    goto loc_801A4024;
}

loc_801A3FA0:
{
    r3 = r31;
    r4 = 7;
    r5 = 7;
    // inline leaf 0x8012D270 (12 guest instruction(s))
}

loc_inl2_0x8012D270:
{
    r6 = MemoryInline::FlatRead8((r3 + 485));
    r0 = (r4 & 255);
}

loc_inl2_0x8012D27C:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl2_0x8012D298;
    }
}

loc_inl2_0x8012D280:
{
    r3 = MemoryInline::FlatRead8((r3 + 486));
    r0 = (r5 & 255);
}

loc_inl2_0x8012D28C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl2_0x8012D298;
    }
}

loc_inl2_0x8012D290:
{
    r3 = 1;
    goto loc_inl2_cont_8012D270;
}

loc_inl2_0x8012D298:
{
    r3 = 0;
}

loc_inl2_cont_8012D270:
{
    // end of inlined leaf 0x8012D270
}

loc_801A3FB4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801A3FC8;
    }
}

loc_801A3FB8:
{
    r0 = MemoryInline::FlatRead16((r31 + 2102));
    r0 = (r0 & 63487);
}

loc_801A3FC0:
{
    MemoryInline::FlatWrite16((r31 + 2102), static_cast<uint16_t>(r0));
    goto loc_801A4024;
}

loc_801A3FC8:
{
    r3 = r31;
    r4 = 1;
    r5 = 2;
    // inline leaf 0x8012D270 (12 guest instruction(s))
}

loc_inl3_0x8012D270:
{
    r6 = MemoryInline::FlatRead8((r3 + 485));
    r0 = (r4 & 255);
}

loc_inl3_0x8012D27C:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl3_0x8012D298;
    }
}

loc_inl3_0x8012D280:
{
    r3 = MemoryInline::FlatRead8((r3 + 486));
    r0 = (r5 & 255);
}

loc_inl3_0x8012D28C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl3_0x8012D298;
    }
}

loc_inl3_0x8012D290:
{
    r3 = 1;
    goto loc_inl3_cont_8012D270;
}

loc_inl3_0x8012D298:
{
    r3 = 0;
}

loc_inl3_cont_8012D270:
{
    // end of inlined leaf 0x8012D270
}

loc_801A3FDC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801A4018;
    }
}

loc_801A3FE0:
{
    r0 = (r30 & 65535);
}

loc_801A3FE8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(24))) {
        goto loc_801A4018;
    }
}

loc_801A3FEC:
{
    r3 = r31;
    r4 = 3;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -21240));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -21236));
    ctx->lr = 0x801A4000u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8012F990_1CBD = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_1CBD);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_1CBD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x8012F990u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
}

loc_801A4004:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801A4018;
    }
}

loc_801A4008:
{
    r0 = MemoryInline::FlatRead16((r31 + 2102));
    r0 = (r0 & 63487);
}

loc_801A4010:
{
    MemoryInline::FlatWrite16((r31 + 2102), static_cast<uint16_t>(r0));
    goto loc_801A4024;
}

loc_801A4018:
{
    r0 = MemoryInline::FlatRead16((r31 + 2102));
    r0 = (r0 | 2048);
    MemoryInline::FlatWrite16((r31 + 2102), static_cast<uint16_t>(r0));
}

loc_801A4024:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801A3EF4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801A3EF4_ra38_e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007F gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0xC000000F fpr_write=0xC000000F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801A3EF4 func_801A3EF4 preserves=true fpr_mask=0x00000000
