#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8007A018(CpuContext* ctx);
extern "C" uint32_t func_8007A018_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);

extern "C" void func_80088200(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];

    goto loc_80088200;

loc_80088200:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = r3;
    r31 = r4;
    r5 = MemoryInline::FlatRead32(r3);
    r0 = (r5 & 1);
}

loc_80088228:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80088244;
    }
}

loc_8008822C:
{
    r0 = (r5 & 2);
}

loc_80088234:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80088244;
    }
}

loc_80088238:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_80088240:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(r0))) {
        goto loc_8008829C;
    }
}

loc_80088244:
{
}

loc_80088248:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(31))) {
        goto loc_80088274;
    }
}

loc_8008824C:
{
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r3 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -31788));
    f2.d = f1.d;
    f3.d = f1.d;
    f4.d = f1.d;
    r4 = (r1 + 12);
    ctx->lr = 0x80088270u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x804BA0B0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    goto loc_8008828C;
}

loc_80088274:
{
    r3 = (r1 + 8);
    r0 = (r4 * 48);
    r4 = (r30 + r0);
    r4 = (r4 + 8);
    ctx->lr = 0x80088288u;
    if constexpr (KnownRegArgsCpuCall<0x8007A018u>(&func_8007A018)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8007A018_A3B = func_8007A018_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8007A018_A3B;
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
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8007A3B8u>(ctx);
}

loc_8008828C:
{
    r0 = MemoryInline::FlatRead32(r30);
    r0 = (r0 | 3);
    MemoryInline::FlatWrite32(r30, r0);
    MemoryInline::FlatWrite32((r30 + 4), r31);
}

loc_8008829C:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80088200 func_80088200 preserves=true fpr_mask=0x00000000
