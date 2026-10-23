#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_800A63B4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r30_addr_0 = 0;
    uint32_t r30_addr_1 = 0;
    uint32_t r30_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;

    goto loc_800A63B4;

loc_800A63B4:
{
    MemoryInline::FlatWriteRam32((r1 + -4128), r1);
    r1 = (r1 + -4128);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 4132), r0);
    r28 = r3;
    r29 = 0;
    r3 = (r3 + 192);
    // inline leaf 0x800A4B54 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 8));
    // end of inlined leaf 0x800A4B54
    r0 = (r3 & 65535);
}

loc_800A63E8:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(1024))) {
        goto loc_800A6408;
    }
}

loc_800A63EC:
{
    r3 = 0x80590000u;
    r3 = (r3 + 12304);
    r4 = 53;
    r5 = 0x80590000u;
    r5 = (r5 + 12320);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800A6408u;
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

loc_800A6408:
{
    r3 = (r28 + 192);
    // inline leaf 0x800A4B54 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 8));
    // end of inlined leaf 0x800A4B54
    r5 = (r3 & 65535);
    r3 = (r28 + 192);
    r4 = (r1 + 8);
    ctx->lr = 0x800A6420u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8009B3D8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r28 = 0;
    r30 = (r1 + 8);
    r31 = (r3 & 65535);
    goto loc_800A6448;
}

loc_800A6430:
{
    r0 = (r28 & 65535);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r30_addr_2 = (r30 + r0);
    r3 = MemoryInline::FlatRead32(r30_addr_2);
    ctx->lr = 0x800A6440u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x800ABA58u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r29 = (r29 + r3);
    r28 = (r28 + 1);
}

loc_800A6448:
{
    r0 = (r28 & 65535);
}

loc_800A6450:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r31))) {
        goto loc_800A6430;
    }
}

loc_800A6454:
{
    r3 = r29;
    r0 = MemoryInline::FlatRead32((r1 + 4132));
    ctx->lr = r0;
    r1 = (r1 + 4128);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800A63B4 func_800A63B4 preserves=true fpr_mask=0x00000000
