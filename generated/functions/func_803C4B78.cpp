#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803C4B78(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r13 = ctx->gpr[13];

    goto loc_803C4B78;

loc_803C4B78:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    // inline leaf 0x8045169C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16440));
    r3 = MemoryInline::FlatRead8((r3 + 17));
    r0 = (r3 + -7);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_0 & 134217727);
    // end of inlined leaf 0x8045169C
}

loc_803C4B8C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_803C4B98;
    }
}

loc_803C4B90:
{
    r3 = 0;
    goto loc_803C4BC8;
}

loc_803C4B98:
{
    // inline leaf 0x803C48B4 (4 guest instruction(s))
    r3 = 0x806D0000u;
    r3 = (r3 + 20384);
    r3 = MemoryInline::FlatRead8((r3 + 2));
    // end of inlined leaf 0x803C48B4
    r0 = (r3 & 255);
}

loc_803C4BA4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(47))) {
        goto loc_803C4BB4;
    }
}

loc_803C4BA8:
{
}

loc_803C4BAC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(255))) {
        goto loc_803C4BBC;
    }
}

loc_803C4BB0:
{
    goto loc_803C4BC4;
}

loc_803C4BB4:
{
    r3 = 1;
    goto loc_803C4BC8;
}

loc_803C4BBC:
{
    r3 = 1;
    goto loc_803C4BC8;
}

loc_803C4BC4:
{
    r3 = 0;
}

loc_803C4BC8:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00002003 gpr_write=0x0000000B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803C4B78 func_803C4B78 preserves=true fpr_mask=0x00000000
