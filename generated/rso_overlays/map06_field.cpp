#include "map06_field.h"
#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void mh3_map06_field_80AA45E0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];

    goto loc_80AA45E0;

loc_80AA45E0:
{
    r6 = 0x80AA0000u;
    r0 = MemoryInline::FlatRead32((r6 + 24160));
    MemoryInline::FlatWrite32(r5, r0);
    MemoryInline::FlatWrite32((r5 + 4), r4);
    MemoryInline::FlatWrite32((r5 + 8), r3);
    MemoryInline::FlatWriteRam32((r6 + 24160), r5);
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x00000041 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80AA45E0 mh3_map06_field_80AA45E0 preserves=true fpr_mask=0x00000000

#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void mh3_map06_field_80AA45FC(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_80AA45FC;

loc_80AA45FC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = 0x80AA0000u;
    goto loc_80AA4630;
}

loc_80AA4614:
{
    r0 = MemoryInline::FlatRead32(r5);
    MemoryInline::FlatWriteRam32((r31 + 24160), r0);
    r3 = MemoryInline::FlatRead32((r5 + 8));
    r4 = -1;
    r12 = MemoryInline::FlatRead32((r5 + 4));
    ctr = r12;
    ctx->lr = 0x80AA4630u;
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

loc_80AA4630:
{
    r5 = MemoryInline::FlatRead32((r31 + 24160));
}

loc_80AA4638:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_80AA4614;
    }
}

loc_80AA463C:
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
// RECOMP_REGISTRATION base 0x80AA45FC mh3_map06_field_80AA45FC preserves=true fpr_mask=0x00000000

#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void mh3_map06_field_80AA4650(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];

    goto loc_80AA4650;

loc_80AA4650:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r4 = r3;
    r6 = 0x80AA0000u;
    r5 = MemoryInline::FlatRead32((r6 + 24164));
}

loc_80AA466C:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(64))) {
        goto loc_80AA4678;
    }
}

loc_80AA4670:
{
    r3 = -1;
    goto loc_80AA469C;
}

loc_80AA4678:
{
    r3 = 0;
    r0 = (r5 + 1);
    MemoryInline::FlatWriteRam32((r6 + 24164), r0);
    r6 = (r5 * 12);
    r5 = 0x80AA0000u;
    r0 = (r5 + 18328);
    r5 = (r0 + r6);
    // inline leaf 0x80AA45E0 (7 guest instruction(s))
    r6 = 0x80AA0000u;
    r0 = MemoryInline::FlatRead32((r6 + 24160));
    MemoryInline::FlatWrite32(r5, r0);
    MemoryInline::FlatWrite32((r5 + 4), r4);
    MemoryInline::FlatWrite32((r5 + 8), r3);
    MemoryInline::FlatWriteRam32((r6 + 24160), r5);
    // end of inlined leaf 0x80AA45E0
    r3 = 0;
}

loc_80AA469C:
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
// RECOMP_REGISTRATION base 0x80AA4650 mh3_map06_field_80AA4650 preserves=true fpr_mask=0x00000000

#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void mh3_map06_field_80AA46AC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    goto loc_80AA46AC;

loc_80AA46AC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = 0x80AA0000u;
    r31 = (r3 + 18284);
    goto loc_80AA46D4;
}

loc_80AA46C8:
{
    ctr = r12;
    ctx->lr = 0x80AA46D0u;
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

loc_80AA46D4:
{
    r12 = MemoryInline::FlatRead32(r31);
}

loc_80AA46DC:
{
    if ((static_cast<int32_t>(r12) != static_cast<int32_t>(0))) {
        goto loc_80AA46C8;
    }
}

loc_80AA46E0:
{
    // inline leaf 0x802ADA24 (3 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    // end of inlined leaf 0x802ADA24
    r4 = 0x80AA0000u;
    r0 = (r4 + 20600);
    MemoryInline::FlatWriteRam32((r3 + 12244), r0);
    r4 = 0x80AA0000u;
    r0 = (r4 + 22064);
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
// RECOMP_REGISTRATION base 0x80AA46AC mh3_map06_field_80AA46AC preserves=true fpr_mask=0x00000000

#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void mh3_map06_field_80AA4710(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    goto loc_80AA4710;

loc_80AA4710:
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
    r3 = 0x80AA0000u;
    r31 = (r3 + 18288);
    goto loc_80AA4748;
}

loc_80AA473C:
{
    ctr = r12;
    ctx->lr = 0x80AA4744u;
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

loc_80AA4748:
{
    r12 = MemoryInline::FlatRead32(r31);
}

loc_80AA4750:
{
    if ((static_cast<int32_t>(r12) != static_cast<int32_t>(0))) {
        goto loc_80AA473C;
    }
}

loc_80AA4754:
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
// RECOMP_REGISTRATION base 0x80AA4710 mh3_map06_field_80AA4710 preserves=true fpr_mask=0x00000000

#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void mh3_map06_field_80AA4768(CpuContext* MKW_RESTRICT ctx)
{
    goto loc_80AA4768;

loc_80AA4768:
{
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000000 gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80AA4768 mh3_map06_field_80AA4768 preserves=true fpr_mask=0x00000000


namespace Map06FieldBinding {
const RawDispatchRecord Records[]{
    {0x80AA45E0u, &mh3_map06_field_80AA45E0, 0x00000000u},
    {0x80AA45FCu, &mh3_map06_field_80AA45FC, 0x00000000u},
    {0x80AA4650u, &mh3_map06_field_80AA4650, 0x00000000u},
    {0x80AA46ACu, &mh3_map06_field_80AA46AC, 0x00000000u},
    {0x80AA4710u, &mh3_map06_field_80AA4710, 0x00000000u},
    {0x80AA4768u, &mh3_map06_field_80AA4768, 0x00000000u},
};
}
