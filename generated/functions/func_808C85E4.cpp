#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_808C85E4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_808C85E4;

loc_808C85E4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r28 = r3;
    r29 = r4;
    r3 = 0x80970000u;
    r30 = (r3 + -18696);
    // inline leaf 0x802AFCD8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3013));
    // end of inlined leaf 0x802AFCD8
    r0 = (r3 & 255);
}

loc_808C861C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(21))) {
        goto loc_808C862C;
    }
}

loc_808C8620:
{
}

loc_808C8624:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(22))) {
        goto loc_808C8638;
    }
}

loc_808C8628:
{
    goto loc_808C86C0;
}

loc_808C862C:
{
    r3 = 0x80930000u;
    r31 = (r3 + 2400);
    goto loc_808C8648;
}

loc_808C8638:
{
    r3 = 0x80930000u;
    r31 = (r3 + 2248);
}

loc_808C8648:
{
    r0 = (r28 & 65535);
    goto loc_808C865C;
}

loc_808C8650:
{
}

loc_808C8654:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_808C8668;
    }
}

loc_808C8658:
{
    r31 = (r31 + 8);
}

loc_808C865C:
{
    r3 = MemoryInline::FlatRead16(r31);
}

loc_808C8664:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_808C8650;
    }
}

loc_808C8668:
{
}

loc_808C866C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_808C86C0;
    }
}

loc_808C8670:
{
    r0 = 1;
    guest_range_0 = MemoryInline::ResolveRangeHost(r30, 0, 10u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, r30, static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r30 + 1), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r30 + 2), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r30 + 3), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r30 + 4), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r31 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_0, 6u, (r30 + 6), static_cast<uint16_t>(r0));
    // inline leaf 0x802FBA40 (7 guest instruction(s))
    r3 = 0x806B0000u;
    r3 = (r3 + -12348);
    r3 = MemoryInline::FlatRead8((r3 + 351));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 134217727);
    // end of inlined leaf 0x802FBA40
}

loc_808C869C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_808C86AC;
    }
}

loc_808C86A0:
{
    r0 = MemoryInline::FlatRead16((r31 + 4));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_0, 8u, (r30 + 8), static_cast<uint16_t>(r0));
    goto loc_808C86B4;
}

loc_808C86AC:
{
    r0 = MemoryInline::FlatRead16((r31 + 6));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_0, 8u, (r30 + 8), static_cast<uint16_t>(r0));
}

loc_808C86B4:
{
    r3 = (r30 + 12);
    r4 = r29;
    ctx->lr = 0x808C86C0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x808C86E0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
}

loc_808C86C0:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x808C85E4 func_808C85E4 preserves=true fpr_mask=0x00000000
