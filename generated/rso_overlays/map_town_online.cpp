#include "map_town_online.h"
#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void mh3_map_town_online_809A6FC0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];

    goto loc_809A6FC0;

loc_809A6FC0:
{
    r6 = 0x809B0000u;
    r0 = MemoryInline::FlatRead32((r6 + -29984));
    MemoryInline::FlatWrite32(r5, r0);
    MemoryInline::FlatWrite32((r5 + 4), r4);
    MemoryInline::FlatWrite32((r5 + 8), r3);
    MemoryInline::FlatWriteRam32((r6 + -29984), r5);
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x00000041 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x809A6FC0 mh3_map_town_online_809A6FC0 preserves=true fpr_mask=0x00000000

#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void mh3_map_town_online_809A6FDC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    goto loc_809A6FDC;

loc_809A6FDC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = 0x809B0000u;
    goto loc_809A7010;
}

loc_809A6FF4:
{
    r0 = MemoryInline::FlatRead32(r5);
    MemoryInline::FlatWriteRam32((r31 + -29984), r0);
    r3 = MemoryInline::FlatRead32((r5 + 8));
    r4 = -1;
    r12 = MemoryInline::FlatRead32((r5 + 4));
    ctr = r12;
    ctx->lr = 0x809A7010u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
}

loc_809A7010:
{
    r5 = MemoryInline::FlatRead32((r31 + -29984));
}

loc_809A7018:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_809A6FF4;
    }
}

loc_809A701C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFE gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x809A6FDC mh3_map_town_online_809A6FDC preserves=true fpr_mask=0x00000000

#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void mh3_map_town_online_809A7030(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];

    goto loc_809A7030;

loc_809A7030:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r4 = r3;
    r6 = 0x809B0000u;
    r5 = MemoryInline::FlatRead32((r6 + -29980));
}

loc_809A704C:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(64))) {
        goto loc_809A7058;
    }
}

loc_809A7050:
{
    r3 = -1;
    goto loc_809A707C;
}

loc_809A7058:
{
    r3 = 0;
    r0 = (r5 + 1);
    MemoryInline::FlatWriteRam32((r6 + -29980), r0);
    r6 = (r5 * 12);
    r5 = 0x809A0000u;
    r0 = (r5 + 29032);
    r5 = (r0 + r6);
    // inline leaf 0x809A6FC0 (7 guest instruction(s))
    r6 = 0x809B0000u;
    r0 = MemoryInline::FlatRead32((r6 + -29984));
    MemoryInline::FlatWrite32(r5, r0);
    MemoryInline::FlatWrite32((r5 + 4), r4);
    MemoryInline::FlatWrite32((r5 + 8), r3);
    MemoryInline::FlatWriteRam32((r6 + -29984), r5);
    // end of inlined leaf 0x809A6FC0
    r3 = 0;
}

loc_809A707C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x809A7030 mh3_map_town_online_809A7030 preserves=true fpr_mask=0x00000000

#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void mh3_map_town_online_809A708C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    goto loc_809A708C;

loc_809A708C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = 0x809A0000u;
    r31 = (r3 + 28996);
    goto loc_809A70B4;
}

loc_809A70A8:
{
    ctr = r12;
    ctx->lr = 0x809A70B0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    r31 = (r31 + 4);
}

loc_809A70B4:
{
    r12 = MemoryInline::FlatRead32(r31);
}

loc_809A70BC:
{
    if ((static_cast<int32_t>(r12) != static_cast<int32_t>(0))) {
        goto loc_809A70A8;
    }
}

loc_809A70C0:
{
    // inline leaf 0x802ADA24 (3 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    // end of inlined leaf 0x802ADA24
    r4 = 0x809B0000u;
    r0 = (r4 + -32088);
    MemoryInline::FlatWriteRam32((r3 + 12244), r0);
    MemoryInline::FlatWriteRam32((r3 + 12248), r0);
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x809A708C mh3_map_town_online_809A708C preserves=true fpr_mask=0x00000000

#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void mh3_map_town_online_809A70E8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    goto loc_809A70E8;

loc_809A70E8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    // inline leaf 0x802ADA24 (3 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    // end of inlined leaf 0x802ADA24
    r0 = 0;
    MemoryInline::FlatWriteRam32((r3 + 12244), r0);
    MemoryInline::FlatWriteRam32((r3 + 12248), r0);
    r3 = 0x809A0000u;
    r31 = (r3 + 29000);
    goto loc_809A7120;
}

loc_809A7114:
{
    ctr = r12;
    ctx->lr = 0x809A711Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    r31 = (r31 + 4);
}

loc_809A7120:
{
    r12 = MemoryInline::FlatRead32(r31);
}

loc_809A7128:
{
    if ((static_cast<int32_t>(r12) != static_cast<int32_t>(0))) {
        goto loc_809A7114;
    }
}

loc_809A712C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x809A70E8 mh3_map_town_online_809A70E8 preserves=true fpr_mask=0x00000000

#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void mh3_map_town_online_809A7140(CpuContext* MKW_RESTRICT ctx)
{
    goto loc_809A7140;

loc_809A7140:
{
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000000 gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x809A7140 mh3_map_town_online_809A7140 preserves=true fpr_mask=0x00000000


namespace MapTownOnlineBinding {
const RawDispatchRecord Records[]{
    {0x809A6FC0u, &mh3_map_town_online_809A6FC0, 0x00000000u},
    {0x809A6FDCu, &mh3_map_town_online_809A6FDC, 0x00000000u},
    {0x809A7030u, &mh3_map_town_online_809A7030, 0x00000000u},
    {0x809A708Cu, &mh3_map_town_online_809A708C, 0x00000000u},
    {0x809A70E8u, &mh3_map_town_online_809A70E8, 0x00000000u},
    {0x809A7140u, &mh3_map_town_online_809A7140, 0x00000000u},
};
}
