#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801297F4(CpuContext* ctx);
extern "C" uint32_t func_801297F4_ra48_0_8_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint32_t func_8012A3B8_ra48_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r6)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r6 = arg_r6;
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x8012A3B8u);
    goto loc_8012A3B8;

loc_8012A3B8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    ctx->lr = 0x8012A3D0u;
    if constexpr (KnownRegArgsCpuCall<0x801297F4u>(&func_801297F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_801297F4_38B = func_801297F4_ra48_0_8_0(ctx, r3, r6);
        r3 = regargs_result_801297F4_38B;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x801297F4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r6 = ctx->gpr[6];
    }
    r3 = MemoryInline::FlatRead8((r31 + 2552));
}

loc_8012A3D8:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(255))) {
        goto loc_8012A3E8;
    }
}

loc_8012A3DC:
{
    r0 = MemoryInline::FlatRead8((r31 + 481));
}

loc_8012A3E4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_8012A3F0;
    }
}

loc_8012A3E8:
{
    r3 = r31;
    // inline leaf 0x801299E8 (6 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 508), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 510), static_cast<uint8_t>(r0));
    r0 = 255;
    MemoryInline::FlatWrite8((r3 + 511), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x801299E8
}

loc_8012A3F0:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r31 + 512), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite8((r31 + 509), static_cast<uint8_t>(r0));
    r0 = 900;
    MemoryInline::FlatWrite16((r31 + 514), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[6] = r6;
    return r3;
}

}

extern "C" void func_8012A3B8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8012A3B8_ra48_0_8_0(ctx, ctx->gpr[3], ctx->gpr[6]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000004B gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8012A3B8 func_8012A3B8 preserves=true fpr_mask=0x00000000
