#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80842FF0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];

    goto loc_80842FF0;

loc_80842FF0:
{
    r0 = MemoryInline::FlatRead32((r3 + 48));
}

loc_80842FF8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80843010;
    }
}

loc_80842FFC:
{
}

loc_80843000:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_80843068;
    }
}

loc_80843004:
{
}

loc_80843008:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(3))) {
        goto loc_808430D0;
    }
}

loc_8084300C:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return;
}

loc_80843010:
{
    r5 = MemoryInline::FlatRead32((r3 + 56));
    r0 = 6488064;
    r4 = MemoryInline::FlatRead32((r3 + 60));
    r4 = (r5 + r4);
    MemoryInline::FlatWrite32((r3 + 56), r4);
}

loc_80843028:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_80843038;
    }
}

loc_8084302C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 52), r0);
    goto loc_80843050;
}

loc_80843038:
{
    r0 = (static_cast<int32_t>(r4) >> 16);
    r4 = 0x80850000u;
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r4 = (r4 + -29520);
    r4_addr_1 = (r4 + r0);
    r0 = MemoryInline::FlatRead32(r4_addr_1);
    MemoryInline::FlatWrite32((r3 + 52), r0);
}

loc_80843050:
{
    r0 = MemoryInline::FlatRead32((r3 + 52));
}

loc_80843058:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_8084305C:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r3 + 48), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return;
}

loc_80843068:
{
    r4 = MemoryInline::FlatRead32((r3 + 52));
    r0 = MemoryInline::FlatRead32((r3 + 64));
    r5 = MemoryInline::FlatRead32((r3 + 68));
    r0 = (r4 + r0);
    MemoryInline::FlatWrite32((r3 + 52), r0);
}

loc_80843080:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(r5))) {
        goto loc_80843090;
    }
}

loc_80843084:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r3 + 52), r5);
    MemoryInline::FlatWrite32((r3 + 48), r0);
}

loc_80843090:
{
    r4 = MemoryInline::FlatRead32((r3 + 52));
    r0 = -47185920;
}

loc_8084309C:
{
    if ((static_cast<int32_t>(r4) > static_cast<int32_t>(r0))) {
        goto loc_return;
    }
}

loc_808430A0:
{
    r4 = MemoryInline::FlatRead8((r3 + 12));
    r7 = 4;
    r0 = MemoryInline::FlatRead8((r3 + 13));
    r6 = 0;
    r5 = MemoryInline::FlatRead32((r3 + 8));
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(9));
    r4 = (r4_rot_0 & -512);
    MemoryInline::FlatWrite32((r3 + 48), r7);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r5 + r4);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r3 + 1032), r6);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return;
}

loc_808430D0:
{
    r4 = MemoryInline::FlatRead32((r3 + 52));
    r0 = -47185920;
}

loc_808430DC:
{
    if ((static_cast<int32_t>(r4) > static_cast<int32_t>(r0))) {
        goto loc_808430EC;
    }
}

loc_808430E0:
{
    r0 = 4;
    MemoryInline::FlatWrite32((r3 + 48), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return;
}

loc_808430EC:
{
    r0 = MemoryInline::FlatRead32((r3 + 72));
    r0 = (r4 + r0);
    MemoryInline::FlatWrite32((r3 + 52), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x000000F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80842FF0 func_80842FF0 preserves=true fpr_mask=0x00000000
