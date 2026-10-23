#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_800A5DF0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r28_addr_0 = 0;
    uint32_t r28_addr_1 = 0;
    uint32_t r28_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;

    goto loc_800A5DF0;

loc_800A5DF0:
{
    MemoryInline::FlatWriteRam32((r1 + -2080), r1);
    r1 = (r1 + -2080);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 2084), r0);
    r11 = (r1 + 2080);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r30 = r3;
    r31 = 0;
    r28 = (r4 * 28);
    r3 = (r3 + 65536);
    r0 = MemoryInline::FlatRead32((r3 + -16360));
    r3 = (r0 + r28);
    // inline leaf 0x800A4B54 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 8));
    // end of inlined leaf 0x800A4B54
    r0 = (r3 & 65535);
}

loc_800A5E28:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(512))) {
        goto loc_800A5E48;
    }
}

loc_800A5E2C:
{
    r3 = 0x80590000u;
    r3 = (r3 + 11864);
    r4 = 178;
    r5 = 0x80590000u;
    r5 = (r5 + 12192);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800A5E48u;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
}

loc_800A5E48:
{
    r3 = (r30 + 65536);
    r0 = MemoryInline::FlatRead32((r3 + -16360));
    r3 = (r0 + r28);
    // inline leaf 0x800A4B54 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 8));
    // end of inlined leaf 0x800A4B54
    r5 = (r3 & 65535);
    r3 = (r30 + 65536);
    r0 = MemoryInline::FlatRead32((r3 + -16360));
    r3 = (r0 + r28);
    r4 = (r1 + 8);
    ctx->lr = 0x800A5E70u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    InvokeDirectCpu<0x8009B3D8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    cr = ctx->cr;
    r27 = 0;
    r28 = (r1 + 8);
    r29 = (r3 & 65535);
    goto loc_800A5EA8;
}

loc_800A5E80:
{
    r0 = (r27 & 65535);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r28_addr_2 = (r28 + r0);
    r4 = MemoryInline::FlatRead32(r28_addr_2);
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_800A5E94:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_800A5EA4;
    }
}

loc_800A5E98:
{
    r3 = r30;
    ctx->lr = 0x800A5EA0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    InvokeDirectCpu<0x800A5C6Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    cr = ctx->cr;
    r31 = (r31 + r3);
}

loc_800A5EA4:
{
    r27 = (r27 + 1);
}

loc_800A5EA8:
{
    r0 = (r27 & 65535);
}

loc_800A5EB0:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r29))) {
        goto loc_800A5E80;
    }
}

loc_800A5EB4:
{
    r3 = r31;
    r11 = (r1 + 2080);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 2084));
    ctx->lr = r0;
    r1 = (r1 + 2080);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800A5DF0 func_800A5DF0 preserves=true fpr_mask=0x00000000
