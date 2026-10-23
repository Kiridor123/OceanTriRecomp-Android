#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_804BDA30_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_804BDA30;

loc_804BDA30:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = -4;
    r30 = r4;
    r29 = r3;
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x804D12F0
}

loc_804BDA5C:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_804BDBF4;
    }
}

loc_804BDA60:
{
}

loc_804BDA64:
{
    if ((static_cast<uint32_t>(r29) > static_cast<uint32_t>(7))) {
        goto loc_804BDA84;
    }
}

loc_804BDA68:
{
    r4 = 0x80750000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(4));
    r0 = (r0_rot_1 & -16);
    r4 = (r4 + -26496);
    r5 = (r4 + r0);
    r4_addr_1 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_1);
}

loc_804BDA80:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_804BDA8C;
    }
}

loc_804BDA84:
{
    r31 = -4;
    goto loc_804BDBF4;
}

loc_804BDA8C:
{
    r0 = (r4 + 16);
}

loc_804BDA94:
{
    if ((static_cast<uint32_t>(r30) < static_cast<uint32_t>(r0))) {
        goto loc_804BDBF4;
    }
}

loc_804BDA98:
{
    r0 = MemoryInline::FlatRead32((r5 + 8));
    r0 = (r4 + r0);
}

loc_804BDAA4:
{
    if ((static_cast<uint32_t>(r30) > static_cast<uint32_t>(r0))) {
        goto loc_804BDBF4;
    }
}

loc_804BDAA8:
{
    r4 = MemoryInline::FlatRead32((r30 + -16));
    r6 = (r30 + -16);
    r0 = (r4 + 1161953280);
}

loc_804BDAB8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_804BDAC0;
    }
}

loc_804BDABC:
{
    r6 = MemoryInline::FlatRead32((r6 + 8));
}

loc_804BDAC0:
{
    r4 = MemoryInline::FlatRead32(r6);
    r0 = (r4 + 1161953280);
}

loc_804BDACC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_804BDBF4;
    }
}

loc_804BDAD0:
{
    r0 = -1161953280;
    MemoryInline::FlatWrite32(r6, r0);
    r4 = MemoryInline::FlatRead32((r5 + 12));
    r7 = r4;
    goto loc_804BDB00;
}

loc_804BDAE8:
{
    r0 = MemoryInline::FlatRead32((r7 + 12));
}

loc_804BDAF0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804BDB08;
    }
}

loc_804BDAF4:
{
}

loc_804BDAF8:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(r6))) {
        goto loc_804BDB08;
    }
}

loc_804BDAFC:
{
    r7 = r0;
}

loc_804BDB00:
{
}

loc_804BDB04:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_804BDAE8;
    }
}

loc_804BDB08:
{
}

loc_804BDB0C:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_804BDB3C;
    }
}

loc_804BDB10:
{
}

loc_804BDB14:
{
    if ((static_cast<uint32_t>(r6) <= static_cast<uint32_t>(r7))) {
        goto loc_804BDB3C;
    }
}

loc_804BDB18:
{
    MemoryInline::FlatWrite32((r6 + 8), r7);
    r0 = MemoryInline::FlatRead32((r7 + 12));
    MemoryInline::FlatWrite32((r6 + 12), r0);
    MemoryInline::FlatWrite32((r7 + 12), r6);
    r4 = MemoryInline::FlatRead32((r6 + 12));
}

loc_804BDB30:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_804BDB5C;
    }
}

loc_804BDB34:
{
    MemoryInline::FlatWrite32((r4 + 8), r6);
    goto loc_804BDB5C;
}

loc_804BDB3C:
{
    MemoryInline::FlatWrite32((r6 + 12), r4);
    r0 = 0;
    MemoryInline::FlatWrite32((r5 + 12), r6);
    MemoryInline::FlatWrite32((r6 + 8), r0);
    r4 = MemoryInline::FlatRead32((r6 + 12));
}

loc_804BDB54:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_804BDB5C;
    }
}

loc_804BDB58:
{
    MemoryInline::FlatWrite32((r4 + 8), r6);
}

loc_804BDB5C:
{
}

loc_804BDB60:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_804BDBA4;
    }
}

loc_804BDB64:
{
    r0 = MemoryInline::FlatRead32((r6 + 4));
    r5 = MemoryInline::FlatRead32((r6 + 12));
    r4 = (r6 + r0);
    r0 = (r4 + 16);
}

loc_804BDB78:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r0))) {
        goto loc_804BDBA4;
    }
}

loc_804BDB7C:
{
    r4 = MemoryInline::FlatRead32((r5 + 12));
    MemoryInline::FlatWrite32((r6 + 12), r4);
}

loc_804BDB88:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_804BDB90;
    }
}

loc_804BDB8C:
{
    MemoryInline::FlatWrite32((r4 + 8), r6);
}

loc_804BDB90:
{
    r4 = MemoryInline::FlatRead32((r6 + 4));
    r0 = MemoryInline::FlatRead32((r5 + 4));
    r4 = (r0 + r4);
    r0 = (r4 + 16);
    MemoryInline::FlatWrite32((r6 + 4), r0);
}

loc_804BDBA4:
{
    r5 = MemoryInline::FlatRead32((r6 + 8));
}

loc_804BDBAC:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_804BDBF0;
    }
}

loc_804BDBB0:
{
    r0 = MemoryInline::FlatRead32((r5 + 4));
    r6 = MemoryInline::FlatRead32((r5 + 12));
    r4 = (r5 + r0);
    r0 = (r4 + 16);
}

loc_804BDBC4:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_804BDBF0;
    }
}

loc_804BDBC8:
{
    r4 = MemoryInline::FlatRead32((r6 + 12));
    MemoryInline::FlatWrite32((r5 + 12), r4);
}

loc_804BDBD4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_804BDBDC;
    }
}

loc_804BDBD8:
{
    MemoryInline::FlatWrite32((r4 + 8), r5);
}

loc_804BDBDC:
{
    r4 = MemoryInline::FlatRead32((r5 + 4));
    r0 = MemoryInline::FlatRead32((r6 + 4));
    r4 = (r0 + r4);
    r0 = (r4 + 16);
    MemoryInline::FlatWrite32((r5 + 4), r0);
}

loc_804BDBF0:
{
    r31 = 0;
}

loc_804BDBF4:
{
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl1_0x804D1330:
{
}

loc_inl1_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl1_0x804D1344;
    }
}

loc_inl1_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl1_0x804D1348;
}

loc_inl1_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl1_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_1 & 1);
}

loc_inl1_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
    r3 = r31;
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804BDA30(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804BDA30_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000000FB gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804BDA30 func_804BDA30 preserves=true fpr_mask=0x00000000
