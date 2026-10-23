#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_803EF074_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_10 = 0;
    uint32_t r3_addr_11 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t ctr = ctx->ctr;

    goto loc_803EF074;

loc_803EF074:
{
    r7 = 0;
    r6 = r3;
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    r0 = 20;
    ctr = r0;
}

loc_803EF088:
{
    r0 = MemoryInline::FlatRead8((r6 + 13729));
}

loc_803EF090:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803EF0B8;
    }
}

loc_803EF094:
{
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r7)));
    r4 = (r4 + 65536);
    r0 = (r4 + -4352);
    r3_addr_2 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_2);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_803EF0AC:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(r0))) {
        goto loc_803EF0B8;
    }
}

loc_803EF0B0:
{
    r3 = r7;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_803EF0B8:
{
    r7 = (r7 + 1);
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r7)));
    r0 = MemoryInline::FlatRead8((r6 + 13785));
}

loc_803EF0C8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803EF0EC;
    }
}

loc_803EF0CC:
{
    r4 = (r4 + 65536);
    r0 = (r4 + -4352);
    r3_addr_4 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_4);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_803EF0E0:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(r0))) {
        goto loc_803EF0EC;
    }
}

loc_803EF0E4:
{
    r3 = r7;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_803EF0EC:
{
    r7 = (r7 + 1);
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r7)));
    r0 = MemoryInline::FlatRead8((r6 + 13841));
}

loc_803EF0FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803EF120;
    }
}

loc_803EF100:
{
    r4 = (r4 + 65536);
    r0 = (r4 + -4352);
    r3_addr_6 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_6);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_803EF114:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(r0))) {
        goto loc_803EF120;
    }
}

loc_803EF118:
{
    r3 = r7;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_803EF120:
{
    r7 = (r7 + 1);
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r7)));
    r0 = MemoryInline::FlatRead8((r6 + 13897));
}

loc_803EF130:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803EF154;
    }
}

loc_803EF134:
{
    r4 = (r4 + 65536);
    r0 = (r4 + -4352);
    r3_addr_8 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_8);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_803EF148:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(r0))) {
        goto loc_803EF154;
    }
}

loc_803EF14C:
{
    r3 = r7;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_803EF154:
{
    r7 = (r7 + 1);
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r7)));
    r0 = MemoryInline::FlatRead8((r6 + 13953));
}

loc_803EF164:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803EF188;
    }
}

loc_803EF168:
{
    r4 = (r4 + 65536);
    r0 = (r4 + -4352);
    r3_addr_10 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_10);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_803EF17C:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(r0))) {
        goto loc_803EF188;
    }
}

loc_803EF180:
{
    r3 = r7;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_803EF188:
{
    r6 = (r6 + 280);
    r7 = (r7 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803EF088;
    }
}

loc_803EF194:
{
    r3 = -1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803EF074(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803EF074_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x000000F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803EF074 func_803EF074 preserves=true fpr_mask=0x00000000
