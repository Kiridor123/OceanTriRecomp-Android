#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8042C1C4_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r31_rot_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x8042C1C4u);
    goto loc_8042C1C4;

loc_8042C1C4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    r3 = MemoryInline::FlatRead8((r3 + 16140));
    r0 = (r3 + -7);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r31_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r31 = (r31_rot_0 & 134217727);
    r3 = 27;
    // inline leaf 0x803BEA8C (17 guest instruction(s))
}

loc_inl0_0x803BEA8C:
{
    r0 = (r3 & 255);
    r4 = 0x80660000u;
    r4 = (r4 + -19184);
    r4_addr_0 = (r4 + r0);
    r5 = MemoryInline::FlatRead8(r4_addr_0);
    r4 = 0x80600000u;
    r4 = (r4 + -29464);
    r4_addr_1 = (r4 + r0);
    r0 = MemoryInline::FlatRead8(r4_addr_1);
}

loc_inl0_0x803BEAAC:
{
    if ((static_cast<uint32_t>(r5) <= static_cast<uint32_t>(r0))) {
        goto loc_inl0_0x803BEAB4;
    }
}

loc_inl0_0x803BEAB0:
{
    r5 = r0;
}

loc_inl0_0x803BEAB4:
{
    r0 = (r3 & 255);
}

loc_inl0_0x803BEABC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(20))) {
        goto loc_inl0_0x803BEAC8;
    }
}

loc_inl0_0x803BEAC0:
{
    r0 = (r5 ^ 1);
    r5 = (r0 & 255);
}

loc_inl0_0x803BEAC8:
{
    r3 = r5;
}

loc_inl0_cont_803BEA8C:
{
    // end of inlined leaf 0x803BEA8C
    r0 = (r3 & 255);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_0 & 134217727);
    r5 = MemoryInline::FlatRead32((r13 + -16440));
    r3 = (r5 + 65536);
    r3 = MemoryInline::FlatRead8((r3 + -15495));
    r3 = (r3 + -1);
    r3 = PPC_CntlzwInline(static_cast<uint32_t>(r3));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(27));
    r3 = (r3_rot_0 & 134217727);
    r4 = 0x806B0000u;
    r4 = (r4 + -12348);
    r4 = MemoryInline::FlatRead8((r4 + 176));
    r4 = (r4 + -3);
    r4 = PPC_CntlzwInline(static_cast<uint32_t>(r4));
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(27));
    r4 = (r4_rot_0 & 134217727);
    r5 = MemoryInline::FlatRead32((r5 + 100));
}

loc_8042C23C:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8042C244;
    }
}

loc_8042C240:
{
    r4 = 1;
}

loc_8042C244:
{
    r5 = 6;
    guest_range_0 = MemoryInline::ResolveRangeHost(r30, 0, 49u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r30, r5);
    r5 = 1;
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r30 + 4), r5);
}

loc_8042C258:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_8042C260;
    }
}

loc_8042C25C:
{
    goto loc_8042C270;
}

loc_8042C260:
{
    r5 = (0 - r4);
    r5 = (r5 | r4);
    r5 = (static_cast<int32_t>(r5) >> 31);
    r5 = (r5 & 2);
}

loc_8042C270:
{
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
    MemoryInline::WriteResolved8(guest_range_0, 8u, (r30 + 8), static_cast<uint8_t>(r5));
    r5 = 2;
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r30 + 12), r5);
}

loc_8042C284:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_8042C290;
    }
}

loc_8042C288:
{
    r5 = 1;
    goto loc_8042C2A0;
}

loc_8042C290:
{
    r5 = (0 - r4);
    r5 = (r5 | r4);
    r5 = (static_cast<int32_t>(r5) >> 31);
    r5 = (r5 & 2);
}

loc_8042C2A0:
{
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
    MemoryInline::WriteResolved8(guest_range_0, 16u, (r30 + 16), static_cast<uint8_t>(r5));
    r5 = 3;
    MemoryInline::WriteResolved32(guest_range_0, 20u, (r30 + 20), r5);
}

loc_8042C2B4:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_8042C2C0;
    }
}

loc_8042C2B8:
{
    r5 = 1;
    goto loc_8042C2D0;
}

loc_8042C2C0:
{
    r5 = (0 - r4);
    r5 = (r5 | r4);
    r5 = (static_cast<int32_t>(r5) >> 31);
    r5 = (r5 & 2);
}

loc_8042C2D0:
{
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
    MemoryInline::WriteResolved8(guest_range_0, 24u, (r30 + 24), static_cast<uint8_t>(r5));
    r5 = 4;
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r30 + 28), r5);
}

loc_8042C2E4:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_8042C2F0;
    }
}

loc_8042C2E8:
{
    r5 = 1;
    goto loc_8042C310;
}

loc_8042C2F0:
{
}

loc_8042C2F4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8042C300;
    }
}

loc_8042C2F8:
{
    r5 = 2;
    goto loc_8042C310;
}

loc_8042C300:
{
    r5 = (0 - r3);
    r5 = (r5 | r3);
    r5 = (static_cast<int32_t>(r5) >> 31);
    r5 = (r5 & 3);
}

loc_8042C310:
{
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
    MemoryInline::WriteResolved8(guest_range_0, 32u, (r30 + 32), static_cast<uint8_t>(r5));
    r5 = 6;
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r30 + 36), r5);
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r31)));
    MemoryInline::WriteResolved8(guest_range_0, 40u, (r30 + 40), static_cast<uint8_t>(r5));
    r5 = 7;
    MemoryInline::WriteResolved32(guest_range_0, 44u, (r30 + 44), r5);
}

loc_8042C334:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_8042C340;
    }
}

loc_8042C338:
{
    r0 = 1;
    goto loc_8042C370;
}

loc_8042C340:
{
}

loc_8042C344:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8042C350;
    }
}

loc_8042C348:
{
    r0 = 2;
    goto loc_8042C370;
}

loc_8042C350:
{
}

loc_8042C354:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8042C360;
    }
}

loc_8042C358:
{
    r0 = 3;
    goto loc_8042C370;
}

loc_8042C360:
{
    r3 = (0 - r0);
    r0 = (r3 | r0);
    r0 = (static_cast<int32_t>(r0) >> 31);
    r0 = (r0 & 4);
}

loc_8042C370:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::WriteResolved8(guest_range_0, 48u, (r30 + 48), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8042C1C4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8042C1C4_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000203B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8042C1C4 func_8042C1C4 preserves=true fpr_mask=0x00000000
