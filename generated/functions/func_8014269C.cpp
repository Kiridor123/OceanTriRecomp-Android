#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8014269C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r27_rot_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x8014269Cu);
    goto loc_8014269C;

loc_8014269C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r28 = r3;
    r29 = r5;
    r30 = 0;
    r0 = (r4 & 255);
    r27_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r27 = (r27_rot_0 & -4);
    r3 = 0x805A0000u;
    r3 = (r3 + 8836);
    r3_addr_0 = (r3 + r27);
    r31 = MemoryInline::FlatRead32(r3_addr_0);
    // inline leaf 0x8045169C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16440));
    r3 = MemoryInline::FlatRead8((r3 + 17));
    r0 = (r3 + -7);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_0 & 134217727);
    // end of inlined leaf 0x8045169C
}

loc_801426D8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80142718;
    }
}

loc_801426DC:
{
    r4 = 0;
    r3 = 0x80660000u;
    r3 = (r3 + -19148);
    r0 = 4;
    ctr = r0;
}

loc_801426F0:
{
    r0 = MemoryInline::FlatRead16((r3 + 22));
}

loc_801426F8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(25))) {
        goto loc_8014270C;
    }
}

loc_801426FC:
{
    r3 = 0x805A0000u;
    r3 = (r3 + 8848);
    r3_addr_1 = (r3 + r27);
    r31 = MemoryInline::FlatRead32(r3_addr_1);
    goto loc_80142718;
}

loc_8014270C:
{
    r3 = (r3 + 2);
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801426F0;
    }
}

loc_80142718:
{
}

loc_8014271C:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_801427AC;
    }
}

loc_80142720:
{
    r3 = MemoryInline::FlatRead16(r31);
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 0);
}

loc_8014272C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_801427AC;
    }
}

loc_80142730:
{
    r4 = r31;
    r3 = 0;
    goto loc_80142748;
}

loc_8014273C:
{
    r0 = MemoryInline::FlatRead16(r4);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3 = (r3 + r0);
    r4 = (r4 + 4);
}

loc_80142748:
{
    r0 = MemoryInline::FlatRead16(r4);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80142750:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-1))) {
        goto loc_8014273C;
    }
}

loc_80142754:
{
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
}

loc_8014275C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_801427AC;
    }
}

loc_80142760:
{
    r3 = (r29 & 65535);
    r0 = PPC_Divw(static_cast<int32_t>(r3), static_cast<int32_t>(r4));
    r0 = (r0 * r4);
    r0 = (r3 - r0);
    r0 = (r0 & 65535);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r3 = 0;
    goto loc_801427A0;
}

loc_80142780:
{
    r0 = MemoryInline::FlatRead16(r31);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3 = (r3 + r0);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
}

loc_80142790:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r0))) {
        goto loc_8014279C;
    }
}

loc_80142794:
{
    r30 = MemoryInline::FlatRead16((r31 + 2));
    r30 = (r30 << 16);
    r30 = (static_cast<int32_t>(r30) >> 16);
    goto loc_801427AC;
}

loc_8014279C:
{
    r31 = (r31 + 4);
}

loc_801427A0:
{
    r0 = MemoryInline::FlatRead16(r31);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_801427A8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-1))) {
        goto loc_80142780;
    }
}

loc_801427AC:
{
    r0 = (r28 & 255);
    r0 = (r0 + r30);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_801427BC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_801427C8;
    }
}

loc_801427C0:
{
    r0 = 0;
    goto loc_801427D4;
}

loc_801427C8:
{
}

loc_801427CC:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(60))) {
        goto loc_801427D4;
    }
}

loc_801427D0:
{
    r0 = 60;
}

loc_801427D4:
{
    r3 = (r0 & 255);
    r11 = (r1 + 32);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[11] = r11;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8014269C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8014269C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000203B gpr_write=0x0000081B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8014269C func_8014269C preserves=true fpr_mask=0x00000000
