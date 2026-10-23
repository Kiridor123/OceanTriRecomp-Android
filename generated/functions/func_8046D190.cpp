#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8046D190_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8046D190;

loc_8046D190:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r3 = 0x80700000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = MemoryInline::FlatRead32((r3 + -27688));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8046D1A8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8046D29C;
    }
}

loc_8046D1AC:
{
    r4 = 0x80700000u;
    r5 = 1;
    r4 = (r4 + -27328);
    r0 = MemoryInline::FlatRead32((r4 + 504));
    r0 = (r0 & -1025);
    r0 = (r0 | 32768);
    MemoryInline::FlatWriteRam32((r4 + 504), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8046D22C;
    }
}

loc_8046D1CC:
{
    r0 = MemoryInline::FlatRead32((r4 + 760));
    r0 = (r0 & 65535);
}

loc_8046D1D8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3328))) {
        goto loc_8046D22C;
    }
}

loc_8046D1DC:
{
    r3 = (r3 + -27688);
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_8046D1E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8046D1F8;
    }
}

loc_8046D1EC:
{
}

loc_8046D1F0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8046D20C;
    }
}

loc_8046D1F4:
{
    goto loc_8046D22C;
}

loc_8046D1F8:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
}

loc_8046D200:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8046D22C;
    }
}

loc_8046D204:
{
    r5 = 0;
    goto loc_8046D22C;
}

loc_8046D20C:
{
    r4 = MemoryInline::FlatRead32((r4 + 128));
    r0 = MemoryInline::FlatRead32((r3 + 12));
}

loc_8046D218:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r0))) {
        goto loc_8046D22C;
    }
}

loc_8046D21C:
{
    r0 = MemoryInline::FlatRead32((r3 + 16));
}

loc_8046D224:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(r0))) {
        goto loc_8046D22C;
    }
}

loc_8046D228:
{
    r5 = 0;
}

loc_8046D22C:
{
}

loc_8046D230:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8046D244;
    }
}

loc_8046D234:
{
    r3 = 0x80700000u;
    r0 = 0;
    MemoryInline::FlatWriteRam32((r3 + -27688), r0);
    goto loc_8046D29C;
}

loc_8046D244:
{
    r5 = 0x80700000u;
    r4 = 0x80700000u;
    r4 = (r4 + -27328);
    r6 = 1;
    r3 = (r5 + -27688);
    r0 = MemoryInline::FlatRead32((r4 + 504));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r0 | 1024);
    MemoryInline::FlatWriteRam32((r5 + -27688), r6);
    r0 = (r0 & -32769);
}

loc_8046D270:
{
    MemoryInline::FlatWriteRam32((r4 + 504), r0);
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8046D280;
    }
}

loc_8046D278:
{
}

loc_8046D27C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(16))) {
        goto loc_8046D294;
    }
}

loc_8046D280:
{
    r4 = 0x80700000u;
    r4 = (r4 + -27688);
    r3 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r3 + -1);
    MemoryInline::FlatWriteRam32((r4 + 8), r0);
}

loc_8046D294:
{
    r3 = 0;
    // inline leaf 0x8046D5C4 (4 guest instruction(s))
    r4 = 0x80700000u;
    r4 = (r4 + -27496);
    MemoryInline::FlatWriteRam32((r4 + 152), r3);
    // end of inlined leaf 0x8046D5C4
}

loc_8046D29C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r3 = 0x80700000u;
    r3 = MemoryInline::FlatRead32((r3 + -27688));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8046D190(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8046D190_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8046D190 func_8046D190 preserves=true fpr_mask=0x00000000
