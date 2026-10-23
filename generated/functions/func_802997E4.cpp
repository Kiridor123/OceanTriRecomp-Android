#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_802997E4_ra18_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];

    goto loc_802997E4;

loc_802997E4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = r4;
    f0.d = MemoryInline::FlatReadFloat32(r4);
    MemoryInline::FlatWriteFloat32((r3 + 1136), f0.d);
    // inline leaf 0x80297ED8 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 368));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_0 & 134217727);
    // end of inlined leaf 0x80297ED8
}

loc_80299810:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80299820;
    }
}

loc_80299814:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 4));
    MemoryInline::FlatWriteFloat32((r30 + 1140), f0.d);
    goto loc_80299828;
}

loc_80299820:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14112));
    MemoryInline::FlatWriteFloat32((r30 + 1140), f0.d);
}

loc_80299828:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 8));
    MemoryInline::FlatWriteFloat32((r30 + 1144), f0.d);
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    return r3;
}

}

extern "C" void func_802997E4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_802997E4_ra18_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000001E gpr_write=0x0000000B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802997E4 func_802997E4 preserves=true fpr_mask=0x00000000
