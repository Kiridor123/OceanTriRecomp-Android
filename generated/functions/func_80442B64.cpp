#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80442B64_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;

    goto loc_80442B64;

loc_80442B64:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    // inline leaf 0x80442B54 (4 guest instruction(s))
    r3 = 0x806E0000u;
    r3 = (r3 + -30960);
    r3 = MemoryInline::FlatRead32((r3 + 96));
    // end of inlined leaf 0x80442B54
    r0 = (r3 + 3);
}

loc_80442B7C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_80442BD4;
    }
}

loc_80442B80:
{
}

loc_80442B84:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(-4))) {
        goto loc_80442BAC;
    }
}

loc_80442B88:
{
}

loc_80442B8C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(-6))) {
        goto loc_80442BB4;
    }
}

loc_80442B90:
{
}

loc_80442B94:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(-17))) {
        goto loc_80442BBC;
    }
}

loc_80442B98:
{
}

loc_80442B9C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(-16))) {
        goto loc_80442BC4;
    }
}

loc_80442BA0:
{
}

loc_80442BA4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(-15))) {
        goto loc_80442BCC;
    }
}

loc_80442BA8:
{
    goto loc_80442BDC;
}

loc_80442BAC:
{
    r3 = 23;
    goto loc_80442BE0;
}

loc_80442BB4:
{
    r3 = 19;
    goto loc_80442BE0;
}

loc_80442BBC:
{
    r3 = 17;
    goto loc_80442BE0;
}

loc_80442BC4:
{
    r3 = 16;
    goto loc_80442BE0;
}

loc_80442BCC:
{
    r3 = 23;
    goto loc_80442BE0;
}

loc_80442BD4:
{
    r3 = 21;
    goto loc_80442BE0;
}

loc_80442BDC:
{
    r3 = 22;
}

loc_80442BE0:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return r3;
}

}

extern "C" void func_80442B64(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80442B64_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000A gpr_write=0x0000000B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80442B64 func_80442B64 preserves=true fpr_mask=0x00000000
