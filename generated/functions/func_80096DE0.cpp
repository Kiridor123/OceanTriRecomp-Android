#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8006480C(CpuContext* ctx);
extern "C" uint64_t func_8006480C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_80096DE0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80096DE0;

loc_80096DE0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r4;
    r31 = r5;
    ctx->lr = 0x80096E00u;
    if constexpr (KnownRegArgsCpuCall<0x8006480Cu>(&func_8006480C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8006480C_3BE = func_8006480C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8006480C_3BE);
        r4 = static_cast<uint32_t>(regargs_result_8006480C_3BE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8006480Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = (r30 & 1);
    r0 = (r0 * 20);
    r3 = (r3 + r0);
    r0 = (r30 & 2);
}

loc_80096E14:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80096E48;
    }
}

loc_80096E18:
{
    r0 = MemoryInline::FlatRead8(r31);
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r31 + 1));
    MemoryInline::FlatWrite8((r3 + 5), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r31 + 2));
    MemoryInline::FlatWrite8((r3 + 6), static_cast<uint8_t>(r0));
    r0 = (r30 + -4);
}

loc_80096E38:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_80096E50;
    }
}

loc_80096E3C:
{
    r0 = MemoryInline::FlatRead8((r31 + 3));
    MemoryInline::FlatWrite8((r3 + 7), static_cast<uint8_t>(r0));
    goto loc_80096E50;
}

loc_80096E48:
{
    r0 = MemoryInline::FlatRead8((r31 + 3));
    MemoryInline::FlatWrite8((r3 + 7), static_cast<uint8_t>(r0));
}

loc_80096E50:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000FB gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80096DE0 func_80096DE0 preserves=true fpr_mask=0x00000000
