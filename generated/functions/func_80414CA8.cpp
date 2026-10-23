#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80414CA8_ra0_0_8_0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r13 = ctx->gpr[13];

    goto loc_80414CA8;

loc_80414CA8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    // inline leaf 0x80376954 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16752));
    // end of inlined leaf 0x80376954
}

loc_80414CBC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80414CCC;
    }
}

loc_80414CC0:
{
    // inline leaf 0x80376954 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16752));
    // end of inlined leaf 0x80376954
    // inline leaf 0x803FE32C (6 guest instruction(s))
    r3 = (r3 + 65536);
    r3 = MemoryInline::FlatRead8((r3 + -30377));
    r0 = (r3 + -2);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_0 & 134217727);
    // end of inlined leaf 0x803FE32C
    goto loc_80414CD0;
}

loc_80414CCC:
{
    r3 = 0;
}

loc_80414CD0:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return r3;
}

}

extern "C" void func_80414CA8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80414CA8_ra0_0_8_0(ctx);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00002002 gpr_write=0x0000000B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80414CA8 func_80414CA8 preserves=true fpr_mask=0x00000000
