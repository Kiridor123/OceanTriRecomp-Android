#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8051E780(CpuContext* ctx);
extern "C" uint64_t func_8051E780_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_8051E6E8_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x8051E6E8u);
    goto loc_8051E6E8;

loc_8051E6E8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    if constexpr (KnownRegArgsCpuCall<0x8051E780u>(&func_8051E780)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        const auto regargs_result_8051E780_49A = func_8051E780_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8051E780_49A);
        r4 = static_cast<uint32_t>(regargs_result_8051E780_49A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        InvokeDirectCpu<0x8051E780u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
    }
    r30 = r4;
    r31 = r3;
    r29 = 0;
}

loc_8051E710:
{
    r0 = (r29 + 1);
    r3 = r31;
    r4 = r30;
    r5 = (53 - r0);
    // inline leaf 0x80457924 (9 guest instruction(s))
    r8 = (32 - r5);
    r9 = (r5 + -32);
    r4 = PPC_Srw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r5));
    r10 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r8));
    r4 = (r4 | r10);
    r10 = PPC_Srw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r9));
    r4 = (r4 | r10);
    r3 = PPC_Srw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r5));
    // end of inlined leaf 0x80457924
    r0 = (r4 & 1);
}

loc_8051E728:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8051E744;
    }
}

loc_8051E72C:
{
    r5 = (42 - r29);
    r4 = 1589;
    r3 = 0;
    // inline leaf 0x80457900 (9 guest instruction(s))
    r8 = (32 - r5);
    r9 = (r5 + -32);
    r3 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r5));
    r10 = PPC_Srw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r8));
    r3 = (r3 | r10);
    r10 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r9));
    r3 = (r3 | r10);
    r4 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r5));
    // end of inlined leaf 0x80457900
    r30 = (r30 ^ r4);
    r31 = (r31 ^ r3);
}

loc_8051E744:
{
    r29 = (r29 + 1);
}

loc_8051E74C:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(43))) {
        goto loc_8051E710;
    }
}

loc_8051E750:
{
    r0 = (r30 | r31);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8051E760;
    }
}

loc_8051E758:
{
    r3 = -37;
    goto loc_8051E764;
}

loc_8051E760:
{
    r3 = 0;
}

loc_8051E764:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8051E6E8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8051E6E8_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000073B gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8051E6E8 func_8051E6E8 preserves=true fpr_mask=0x00000000
