#include "map_town_quest.h"
#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void mh3_map_town_quest_8097D160(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];

    goto loc_8097D160;

loc_8097D160:
{
    r6 = 0x80980000u;
    r0 = MemoryInline::FlatRead32((r6 + -4992));
    MemoryInline::FlatWrite32(r5, r0);
    MemoryInline::FlatWrite32((r5 + 4), r4);
    MemoryInline::FlatWrite32((r5 + 8), r3);
    MemoryInline::FlatWriteRam32((r6 + -4992), r5);
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x00000041 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8097D160 mh3_map_town_quest_8097D160 preserves=true fpr_mask=0x00000000

#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void mh3_map_town_quest_8097D17C(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_8097D17C;

loc_8097D17C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = 0x80980000u;
    goto loc_8097D1B0;
}

loc_8097D194:
{
    r0 = MemoryInline::FlatRead32(r5);
    MemoryInline::FlatWriteRam32((r31 + -4992), r0);
    r3 = MemoryInline::FlatRead32((r5 + 8));
    r4 = -1;
    r12 = MemoryInline::FlatRead32((r5 + 4));
    ctr = r12;
    ctx->lr = 0x8097D1B0u;
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

loc_8097D1B0:
{
    r5 = MemoryInline::FlatRead32((r31 + -4992));
}

loc_8097D1B8:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8097D194;
    }
}

loc_8097D1BC:
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
// RECOMP_REGISTRATION base 0x8097D17C mh3_map_town_quest_8097D17C preserves=true fpr_mask=0x00000000

#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void mh3_map_town_quest_8097D1D0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];

    goto loc_8097D1D0;

loc_8097D1D0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r4 = r3;
    r6 = 0x80980000u;
    r5 = MemoryInline::FlatRead32((r6 + -4988));
}

loc_8097D1EC:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(64))) {
        goto loc_8097D1F8;
    }
}

loc_8097D1F0:
{
    r3 = -1;
    goto loc_8097D21C;
}

loc_8097D1F8:
{
    r3 = 0;
    r0 = (r5 + 1);
    MemoryInline::FlatWriteRam32((r6 + -4988), r0);
    r6 = (r5 * 12);
    r5 = 0x80980000u;
    r0 = (r5 + -11512);
    r5 = (r0 + r6);
    // inline leaf 0x8097D160 (7 guest instruction(s))
    r6 = 0x80980000u;
    r0 = MemoryInline::FlatRead32((r6 + -4992));
    MemoryInline::FlatWrite32(r5, r0);
    MemoryInline::FlatWrite32((r5 + 4), r4);
    MemoryInline::FlatWrite32((r5 + 8), r3);
    MemoryInline::FlatWriteRam32((r6 + -4992), r5);
    // end of inlined leaf 0x8097D160
    r3 = 0;
}

loc_8097D21C:
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
// RECOMP_REGISTRATION base 0x8097D1D0 mh3_map_town_quest_8097D1D0 preserves=true fpr_mask=0x00000000

#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void mh3_map_town_quest_8097D22C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    goto loc_8097D22C;

loc_8097D22C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = 0x80980000u;
    r31 = (r3 + -11548);
    goto loc_8097D254;
}

loc_8097D248:
{
    ctr = r12;
    ctx->lr = 0x8097D250u;
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

loc_8097D254:
{
    r12 = MemoryInline::FlatRead32(r31);
}

loc_8097D25C:
{
    if ((static_cast<int32_t>(r12) != static_cast<int32_t>(0))) {
        goto loc_8097D248;
    }
}

loc_8097D260:
{
    // inline leaf 0x802ADA24 (3 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    // end of inlined leaf 0x802ADA24
    r4 = 0x80980000u;
    r0 = (r4 + -7096);
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
// RECOMP_REGISTRATION base 0x8097D22C mh3_map_town_quest_8097D22C preserves=true fpr_mask=0x00000000

#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void mh3_map_town_quest_8097D288(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    goto loc_8097D288;

loc_8097D288:
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
    r3 = 0x80980000u;
    r31 = (r3 + -11544);
    goto loc_8097D2C0;
}

loc_8097D2B4:
{
    ctr = r12;
    ctx->lr = 0x8097D2BCu;
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

loc_8097D2C0:
{
    r12 = MemoryInline::FlatRead32(r31);
}

loc_8097D2C8:
{
    if ((static_cast<int32_t>(r12) != static_cast<int32_t>(0))) {
        goto loc_8097D2B4;
    }
}

loc_8097D2CC:
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
// RECOMP_REGISTRATION base 0x8097D288 mh3_map_town_quest_8097D288 preserves=true fpr_mask=0x00000000

#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void mh3_map_town_quest_8097D2E0(CpuContext* MKW_RESTRICT ctx)
{
    goto loc_8097D2E0;

loc_8097D2E0:
{
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000000 gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8097D2E0 mh3_map_town_quest_8097D2E0 preserves=true fpr_mask=0x00000000


namespace MapTownQuestBinding {
const RawDispatchRecord Records[]{
    {0x8097D160u, &mh3_map_town_quest_8097D160, 0x00000000u},
    {0x8097D17Cu, &mh3_map_town_quest_8097D17C, 0x00000000u},
    {0x8097D1D0u, &mh3_map_town_quest_8097D1D0, 0x00000000u},
    {0x8097D22Cu, &mh3_map_town_quest_8097D22C, 0x00000000u},
    {0x8097D288u, &mh3_map_town_quest_8097D288, 0x00000000u},
    {0x8097D2E0u, &mh3_map_town_quest_8097D2E0, 0x00000000u},
};
}
