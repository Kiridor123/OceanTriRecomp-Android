#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_802DCA78_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_802DCA78;

loc_802DCA78:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r28 = r3;
    r29 = r4;
    r30 = r5;
    r31 = 0;
    r3 = 4;
    // inline leaf 0x803BECD4 (12 guest instruction(s))
}

loc_inl0_0x803BECD4:
{
    r0 = (r3 & 255);
}

loc_inl0_0x803BECDC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(20))) {
        goto loc_inl0_0x803BECF4;
    }
}

loc_inl0_0x803BECE0:
{
    r3 = 0x80660000u;
    r3 = (r3 + -19184);
    r3_addr_0 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_0);
    r3 = (r0 ^ 1);
    goto loc_inl0_cont_803BECD4;
}

loc_inl0_0x803BECF4:
{
    r3 = 0x80660000u;
    r3 = (r3 + -19184);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead8(r3_addr_1);
}

loc_inl0_cont_803BECD4:
{
    // end of inlined leaf 0x803BECD4
    r0 = (r3 & 255);
}

loc_802DCAB4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802DCAFC;
    }
}

loc_802DCAB8:
{
    r3 = MemoryInline::FlatRead8((r28 + 1));
    r0 = (r3 + 253);
    r0 = (r0 & 255);
}

loc_802DCAC8:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_802DCAE4;
    }
}

loc_802DCACC:
{
    r0 = (r29 & 65535);
    r0 = (r0 & 512);
}

loc_802DCAD8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802DCB3C;
    }
}

loc_802DCADC:
{
    r31 = 1;
    goto loc_802DCB3C;
}

loc_802DCAE4:
{
    r0 = (r30 & 65535);
    r0 = (r0 & 512);
}

loc_802DCAF0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802DCB3C;
    }
}

loc_802DCAF4:
{
    r31 = 1;
    goto loc_802DCB3C;
}

loc_802DCAFC:
{
    r31 = 0;
    r0 = (r30 & 65535);
    r0 = (r0 & 512);
}

loc_802DCB0C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802DCB14;
    }
}

loc_802DCB10:
{
    r31 = 1;
}

loc_802DCB14:
{
    r3 = MemoryInline::FlatRead8((r28 + 1));
    r0 = (r3 + 253);
    r0 = (r0 & 255);
}

loc_802DCB24:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_802DCB3C;
    }
}

loc_802DCB28:
{
}

loc_802DCB2C:
{
    if ((static_cast<uint32_t>(r31) != static_cast<uint32_t>(1))) {
        goto loc_802DCB38;
    }
}

loc_802DCB30:
{
    r31 = 0;
    goto loc_802DCB3C;
}

loc_802DCB38:
{
    r31 = 1;
}

loc_802DCB3C:
{
    r3 = r31;
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return r3;
}

}

extern "C" void func_802DCA78(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_802DCA78_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000000B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802DCA78 func_802DCA78 preserves=true fpr_mask=0x00000000
