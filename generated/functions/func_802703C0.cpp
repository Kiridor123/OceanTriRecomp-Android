#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8027007C(CpuContext* ctx);
extern "C" uint64_t func_8027007C_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_80273F3C(CpuContext* ctx);
extern "C" uint64_t func_80273F3C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_802703C0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t stackword3 = 0;
    uint32_t stackword4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];

    goto loc_802703C0;

loc_802703C0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8026FE38u>(ctx);
    r3 = ctx->gpr[3];
}

loc_802703DC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80270408;
    }
}

loc_802703E0:
{
    r3 = r31;
    r4 = 6;
    r5 = 0;
    ctx->lr = 0x802703F0u;
    if constexpr (KnownRegArgsCpuCall<0x80273F3Cu>(&func_80273F3C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_80273F3C_61C = func_80273F3C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80273F3C_61C);
        r4 = static_cast<uint32_t>(regargs_result_80273F3C_61C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x80273F3Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r0 = r3;
    r3 = r31;
    r4 = (r0 & 65535);
    r5 = (r1 + 8);
    ctx->lr = 0x80270404u;
    if constexpr (KnownRegArgsCpuCall<0x8027007Cu>(&func_8027007C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_8027007C_A43 = func_8027007C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_8027007C_A43);
        r4 = static_cast<uint32_t>(regargs_result_8027007C_A43 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x8027007Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    MemoryInline::FlatWrite16((r31 + 952), static_cast<uint16_t>(r3));
}

loc_80270408:
{
    r0 = MemoryInline::FlatRead16((r31 + 952));
}

loc_80270410:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(700))) {
        goto loc_8027041C;
    }
}

loc_80270414:
{
    r0 = 700;
    MemoryInline::FlatWrite16((r31 + 952), static_cast<uint16_t>(r0));
}

loc_8027041C:
{
    r0 = MemoryInline::FlatRead16((r31 + 952));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -14936));
    stackword3 = r0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = 1127219200;
    stackword4 = r0;
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword4), static_cast<uint32_t>(stackword3));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14940));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 956), f0.d);
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000003FF gpr_write=0x00000BFB gpr_return=0x00000018 fpr_read=0x80000003 fpr_write=0x80000007 fpr_return=0x00000002 cr_read=0xFF cr_write=0x03 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802703C0 func_802703C0 preserves=true fpr_mask=0x00000000
