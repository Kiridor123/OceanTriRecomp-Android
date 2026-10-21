#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8007A4F8(CpuContext* ctx);
extern "C" uint64_t func_8007A4F8_ra0_0_18_0(CpuContext*);

extern "C" uint64_t func_8007A4D0_ra0_0_18_0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];

    MKW_GUEST_ENTER(0x8007A4D0u);
    goto loc_8007A4D0;

loc_8007A4D0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    // inline leaf 0x8007A540 (13 guest instruction(s))
    r3 = 4;
    r3 = (r3 | 262144);
    ctx->gqr[2] = r3;
    r3 = 5;
    r3 = (r3 | 327680);
    ctx->gqr[3] = r3;
    r3 = 6;
    r3 = (r3 | 393216);
    ctx->gqr[4] = r3;
    r3 = 7;
    r3 = (r3 | 458752);
    ctx->gqr[5] = r3;
    // end of inlined leaf 0x8007A540
    // inline leaf 0x8007A51C (9 guest instruction(s))
}

loc_inl1_0x8007A51C:
{
    r3 = 7;
    r4 = 5;
}

loc_inl1_0x8007A528:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r0 = (r0_rot_0 & -256);
    r3 = (r0 | r3);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0 = (r0_rot_1 & -65536);
    r0 = (r3 | r0);
    ctx->gqr[6] = r0;
}

loc_inl1_cont_8007A51C:
{
    // end of inlined leaf 0x8007A51C
    if constexpr (KnownRegArgsCpuCall<0x8007A4F8u>(&func_8007A4F8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8007A4F8_662 = func_8007A4F8_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_8007A4F8_662);
        r4 = static_cast<uint32_t>(regargs_result_8007A4F8_662 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8007A4F8u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8007A4D0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8007A4D0_ra0_0_18_0(ctx);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000002 gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8007A4D0 func_8007A4D0 preserves=true fpr_mask=0x00000000
