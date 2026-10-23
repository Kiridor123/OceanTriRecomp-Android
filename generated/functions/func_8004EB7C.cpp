#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8004EB7C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    goto loc_8004EB7C;

loc_8004EB7C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    // inline leaf 0x8004D184 (5 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead32((r3 + 2396));
    MemoryInline::FlatWrite32((r13 + -17824), r3);
    // end of inlined leaf 0x8004D184
    r5 = (r3 + 16504);
    r4 = 0;
    r0 = 4;
    ctr = r0;
}

loc_8004EBA4:
{
    r3 = MemoryInline::FlatRead32(r5);
    r0 = (r3 + -1);
}

loc_8004EBB0:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_8004EBCC;
    }
}

loc_8004EBB4:
{
    r0 = (r3 + -3);
}

loc_8004EBBC:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_8004EBE4;
    }
}

loc_8004EBC0:
{
}

loc_8004EBC4:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(6))) {
        goto loc_8004EBFC;
    }
}

loc_8004EBC8:
{
    goto loc_8004EC14;
}

loc_8004EBCC:
{
    r3 = MemoryInline::FlatRead16((r5 + 8));
    r0 = (r31 & 65535);
}

loc_8004EBD8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_8004EC14;
    }
}

loc_8004EBDC:
{
    r3 = 1;
    goto loc_8004EC94;
}

loc_8004EBE4:
{
    r3 = MemoryInline::FlatRead16((r5 + 6));
    r0 = (r31 & 65535);
}

loc_8004EBF0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_8004EC14;
    }
}

loc_8004EBF4:
{
    r3 = 1;
    goto loc_8004EC94;
}

loc_8004EBFC:
{
    r3 = MemoryInline::FlatRead16((r5 + 10));
    r0 = (r31 & 65535);
}

loc_8004EC08:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_8004EC14;
    }
}

loc_8004EC0C:
{
    r3 = 1;
    goto loc_8004EC94;
}

loc_8004EC14:
{
    r3 = MemoryInline::FlatRead32((r5 + 16));
    r0 = (r3 + -1);
}

loc_8004EC20:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_8004EC3C;
    }
}

loc_8004EC24:
{
    r0 = (r3 + -3);
}

loc_8004EC2C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_8004EC54;
    }
}

loc_8004EC30:
{
}

loc_8004EC34:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(6))) {
        goto loc_8004EC6C;
    }
}

loc_8004EC38:
{
    goto loc_8004EC84;
}

loc_8004EC3C:
{
    r3 = MemoryInline::FlatRead16((r5 + 24));
    r0 = (r31 & 65535);
}

loc_8004EC48:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_8004EC84;
    }
}

loc_8004EC4C:
{
    r3 = 1;
    goto loc_8004EC94;
}

loc_8004EC54:
{
    r3 = MemoryInline::FlatRead16((r5 + 22));
    r0 = (r31 & 65535);
}

loc_8004EC60:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_8004EC84;
    }
}

loc_8004EC64:
{
    r3 = 1;
    goto loc_8004EC94;
}

loc_8004EC6C:
{
    r3 = MemoryInline::FlatRead16((r5 + 26));
    r0 = (r31 & 65535);
}

loc_8004EC78:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_8004EC84;
    }
}

loc_8004EC7C:
{
    r3 = 1;
    goto loc_8004EC94;
}

loc_8004EC84:
{
    r4 = (r4 + 1);
    r5 = (r5 + 32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8004EBA4;
    }
}

loc_8004EC90:
{
    r3 = 0;
}

loc_8004EC94:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8004EB7C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8004EB7C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000203B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8004EB7C func_8004EB7C preserves=true fpr_mask=0x00000000
