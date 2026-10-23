#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80414C00_ra0_0_8_0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r13 = ctx->gpr[13];

    goto loc_80414C00;

loc_80414C00:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    // inline leaf 0x80376954 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16752));
    // end of inlined leaf 0x80376954
}

loc_80414C14:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80414C24;
    }
}

loc_80414C18:
{
    // inline leaf 0x80376954 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16752));
    // end of inlined leaf 0x80376954
    // inline leaf 0x803FE2D4 (10 guest instruction(s))
}

loc_inl2_0x803FE2D4:
{
    r0 = 1;
    r3 = (r3 + 65536);
    r3 = MemoryInline::FlatRead8((r3 + -30377));
}

loc_inl2_0x803FE2E4:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(4))) {
        goto loc_inl2_0x803FE2F4;
    }
}

loc_inl2_0x803FE2E8:
{
}

loc_inl2_0x803FE2EC:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(6))) {
        goto loc_inl2_0x803FE2F4;
    }
}

loc_inl2_0x803FE2F0:
{
    r0 = 0;
}

loc_inl2_0x803FE2F4:
{
    r3 = r0;
}

loc_inl2_cont_803FE2D4:
{
    // end of inlined leaf 0x803FE2D4
    goto loc_80414C28;
}

loc_80414C24:
{
    r3 = 0;
}

loc_80414C28:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return r3;
}

}

extern "C" void func_80414C00(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80414C00_ra0_0_8_0(ctx);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00002002 gpr_write=0x0000000B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80414C00 func_80414C00 preserves=true fpr_mask=0x00000000
