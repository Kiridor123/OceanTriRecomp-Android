#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8007A018(CpuContext* ctx);
extern "C" uint32_t func_8007A018_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8007A118_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;

    goto loc_8007A118;

loc_8007A118:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = r3;
    r31 = r4;
    r0 = (r4 & 3);
}

loc_8007A13C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8007A15C;
    }
}

loc_8007A140:
{
    r3 = 0x80590000u;
    r3 = (r3 + -3432);
    r4 = 61;
    r5 = 0x80590000u;
    r5 = (r5 + -3384);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8007A15Cu;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
}

loc_8007A15C:
{
    r3 = r30;
    // inline leaf 0x80065A28 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x80065A28
}

loc_8007A168:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8007A188;
    }
}

loc_8007A16C:
{
    r3 = 0x80590000u;
    r3 = (r3 + -3432);
    r4 = 62;
    r5 = 0x80590000u;
    r5 = (r5 + -3416);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8007A188u;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
}

loc_8007A188:
{
}

loc_8007A18C:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_8007A1EC;
    }
}

loc_8007A190:
{
    r3 = r30;
    // inline leaf 0x80065A28 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x80065A28
}

loc_8007A19C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8007A1EC;
    }
}

loc_8007A1A0:
{
    r3 = r30;
    // inline leaf 0x8007A214 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x8007A214
    f0.d = MemoryInline::FlatReadFloat64(r3);
    MemoryInline::FlatWriteFloat64(r31, f0.d);
    f0.d = MemoryInline::FlatReadFloat64((r3 + 8));
    MemoryInline::FlatWriteFloat64((r31 + 8), f0.d);
    f0.d = MemoryInline::FlatReadFloat64((r3 + 16));
    MemoryInline::FlatWriteFloat64((r31 + 16), f0.d);
    f0.d = MemoryInline::FlatReadFloat64((r3 + 24));
    MemoryInline::FlatWriteFloat64((r31 + 24), f0.d);
    f0.d = MemoryInline::FlatReadFloat64((r3 + 32));
    MemoryInline::FlatWriteFloat64((r31 + 32), f0.d);
    f0.d = MemoryInline::FlatReadFloat64((r3 + 40));
    MemoryInline::FlatWriteFloat64((r31 + 40), f0.d);
    r3 = (r1 + 12);
    r4 = r31;
    ctx->lr = 0x8007A1E4u;
    if constexpr (KnownRegArgsCpuCall<0x8007A018u>(&func_8007A018)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8007A018_11EC = func_8007A018_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8007A018_11EC;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8007A018u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_8007A1FC;
}

loc_8007A1EC:
{
    r3 = (r1 + 8);
    r4 = 0;
    ctx->lr = 0x8007A1F8u;
    if constexpr (KnownRegArgsCpuCall<0x8007A018u>(&func_8007A018)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8007A018_14B7 = func_8007A018_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8007A018_14B7;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8007A018u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = MemoryInline::FlatRead32(r3);
}

loc_8007A1FC:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8007A118(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8007A118_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8007A118 func_8007A118 preserves=true fpr_mask=0x00000000
