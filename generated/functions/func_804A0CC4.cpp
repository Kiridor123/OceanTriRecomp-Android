#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_804A0CC4_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x804A0CC4u);
    goto loc_804A0CC4;

loc_804A0CC4:
{
    r4 = 0x80740000u;
}

loc_804A0CCC:
{
    r4 = (r4 + -2048);
    r10 = (r4 + 4644);
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804A0CE4;
    }
}

loc_804A0CD8:
{
    r4 = MemoryInline::FlatRead16((r4 + 4642));
}

loc_804A0CE0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_804A0D04;
    }
}

loc_804A0CE4:
{
    r4 = 0x80740000u;
    r0 = 0;
    r4 = (r4 + -2048);
    r3 = 1;
    MemoryInline::FlatWriteRam16((r4 + 4642), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam32((r4 + 4636), r0);
    MemoryInline::FlatWriteRam8((r4 + 4640), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804A0D04:
{
    r9 = 0;
    goto loc_804A0DC4;
}

loc_804A0D0C:
{
    r0 = MemoryInline::FlatRead32(r10);
}

loc_804A0D14:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_804A0DBC;
    }
}

loc_804A0D18:
{
    r5 = 0x80740000u;
    r7 = 83;
    r5 = (r5 + -2048);
    goto loc_804A0D84;
}

loc_804A0D28:
{
    r8 = (r10 + -4);
    r6 = (r10 + 660);
    ctr = r7;
}

loc_804A0D34:
{
    r4 = MemoryInline::FlatRead32((r6 + 4));
    r6 = (r6 + 8);
    r0 = MemoryInline::FlatRead32(r6);
    MemoryInline::FlatWrite32((r8 + 4), r4);
    MemoryInline::FlatWrite32((r8 + 8), r0);
    r8 = (r8 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804A0D34;
    }
}

loc_804A0D48:
{
    r8 = 0;
    goto loc_804A0D6C;
}

loc_804A0D50:
{
    r0 = (r8 & 65535);
    r8 = (r8 + 1);
    r0 = (r0 * 12);
    r6 = (r10 + r0);
    r4 = MemoryInline::FlatRead32((r6 + 16));
    r0 = (r4 + -664);
    MemoryInline::FlatWrite32((r6 + 16), r0);
}

loc_804A0D6C:
{
    r0 = MemoryInline::FlatRead16((r10 + 8));
    r4 = (r8 & 65535);
}

loc_804A0D78:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r0))) {
        goto loc_804A0D50;
    }
}

loc_804A0D7C:
{
    r9 = (r9 + 1);
    r10 = (r10 + 664);
}

loc_804A0D84:
{
    r4 = MemoryInline::FlatRead16((r5 + 4642));
    r0 = (r9 & 65535);
}

loc_804A0D90:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r4))) {
        goto loc_804A0D28;
    }
}

loc_804A0D94:
{
    r0 = MemoryInline::FlatRead32((r5 + 4636));
    r4 = (r4 + -1);
    MemoryInline::FlatWriteRam16((r5 + 4642), static_cast<uint16_t>(r4));
}

loc_804A0DA4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_804A0DB4;
    }
}

loc_804A0DA8:
{
    r0 = 0;
    MemoryInline::FlatWriteRam32((r5 + 4636), r0);
    MemoryInline::FlatWriteRam8((r5 + 4640), static_cast<uint8_t>(r0));
}

loc_804A0DB4:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804A0DBC:
{
    r9 = (r9 + 1);
    r10 = (r10 + 664);
}

loc_804A0DC4:
{
    r0 = (r9 & 65535);
}

loc_804A0DCC:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r4))) {
        goto loc_804A0D0C;
    }
}

loc_804A0DD0:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804A0CC4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804A0CC4_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000007F9 gpr_write=0x000007F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804A0CC4 func_804A0CC4 preserves=true fpr_mask=0x00000000
