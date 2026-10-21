#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_801BA06C_ra8_2_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, double arg_f1)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;

    MKW_GUEST_ENTER(0x801BA06Cu);
    goto loc_801BA06C;

loc_801BA06C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r0 = MemoryInline::FlatRead8((r3 + 10));
    r0 = (r0 & 4);
}

loc_801BA08C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801BA098;
    }
}

loc_801BA090:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19704));
    // inline leaf 0x80130450 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32((r3 + 428), f1.d);
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 479), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x80130450
}

loc_801BA098:
{
    r0 = MemoryInline::FlatRead8((r31 + 10));
}

loc_801BA0A0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(8))) {
        goto loc_801BA0AC;
    }
}

loc_801BA0A4:
{
    r3 = r31;
    // inline leaf 0x80131E64 (3 guest instruction(s))
    r0 = 1;
    MemoryInline::FlatWrite16((r3 + 2244), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x80131E64
}

loc_801BA0AC:
{
    r0 = MemoryInline::FlatRead8((r31 + 10));
    r0 = (r0 & 1);
}

loc_801BA0B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801BA0C4;
    }
}

loc_801BA0BC:
{
    r3 = r31;
    // inline leaf 0x80131ED8 (3 guest instruction(s))
    r0 = 2;
    MemoryInline::FlatWrite16((r3 + 2074), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x80131ED8
}

loc_801BA0C4:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[1] = f1;
    return r3;
}

}

extern "C" void func_801BA06C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_801BA06C_ra8_2_8_0(ctx, ctx->gpr[3], ctx->fpr[1].d);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000F gpr_write=0x0000000B gpr_return=0x00000008 fpr_read=0x00000002 fpr_write=0x00000002 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801BA06C func_801BA06C preserves=true fpr_mask=0x00000000
