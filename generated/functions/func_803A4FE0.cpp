#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_803A4FE0_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r13 = ctx->gpr[13];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x803A4FE0u);
    goto loc_803A4FE0;

loc_803A4FE0:
{
    r8 = 0;
    r7 = 0;
    r4 = 0x805F0000u;
    r5 = (r4 + 10416);
    r4 = (r3 & 65535);
    r0 = 4;
    ctr = r0;
}

loc_803A4FFC:
{
    r6 = MemoryInline::FlatRead32(r5);
    r0 = MemoryInline::FlatRead16(r6);
}

loc_803A5008:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_803A5014;
    }
}

loc_803A500C:
{
    r3 = r8;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_803A5014:
{
    r8 = (r8 + 1);
    r0 = MemoryInline::FlatRead16((r6 + 2));
}

loc_803A5020:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_803A502C;
    }
}

loc_803A5024:
{
    r3 = r8;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_803A502C:
{
    r8 = (r8 + 1);
    r0 = MemoryInline::FlatRead16((r6 + 4));
}

loc_803A5038:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_803A5044;
    }
}

loc_803A503C:
{
    r3 = r8;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_803A5044:
{
    r8 = (r8 + 1);
    r0 = MemoryInline::FlatRead16((r6 + 6));
}

loc_803A5050:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_803A505C;
    }
}

loc_803A5054:
{
    r3 = r8;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_803A505C:
{
    r8 = (r8 + 1);
    r0 = MemoryInline::FlatRead16((r6 + 8));
}

loc_803A5068:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_803A5074;
    }
}

loc_803A506C:
{
    r3 = r8;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_803A5074:
{
    r8 = (r8 + 1);
    r0 = MemoryInline::FlatRead16((r6 + 10));
}

loc_803A5080:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_803A508C;
    }
}

loc_803A5084:
{
    r3 = r8;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_803A508C:
{
    r8 = (r8 + 1);
    r5 = (r5 + 4);
    r7 = (r7 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803A4FFC;
    }
}

loc_803A509C:
{
    r4 = (r13 + -22712);
    r0 = (r3 & 65535);
    goto loc_803A50C0;
}

loc_803A50A8:
{
}

loc_803A50AC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_803A50B8;
    }
}

loc_803A50B0:
{
    r3 = r8;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_803A50B8:
{
    r8 = (r8 + 1);
    r4 = (r4 + 2);
}

loc_803A50C0:
{
    r3 = MemoryInline::FlatRead16(r4);
}

loc_803A50C8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_803A50A8;
    }
}

loc_803A50CC:
{
    r3 = 255;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803A4FE0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803A4FE0_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000021F9 gpr_write=0x000001F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803A4FE0 func_803A4FE0 preserves=true fpr_mask=0x00000000
