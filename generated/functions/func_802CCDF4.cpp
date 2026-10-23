#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_802CCDF4_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r31 = ctx->gpr[31];

    goto loc_802CCDF4;

loc_802CCDF4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r0 = MemoryInline::FlatRead8((r3 + 852));
}

loc_802CCE10:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802CCE1C;
    }
}

loc_802CCE14:
{
    r3 = 1;
    goto loc_802CCE54;
}

loc_802CCE1C:
{
    // inline leaf 0x802D9D78 (7 guest instruction(s))
}

loc_inl0_0x802D9D78:
{
    r3 = MemoryInline::FlatRead8((r3 + 1056));
    r0 = (r3 + -4);
}

loc_inl0_0x802D9D84:
{
    r3 = 75;
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x802D9D8C:
{
    r3 = 150;
    goto loc_inl0_cont_802D9D78;
}

loc_inl0_return:
{
}

loc_inl0_cont_802D9D78:
{
    // end of inlined leaf 0x802D9D78
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = MemoryInline::FlatRead16((r31 + 848));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_802CCE2C:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r3))) {
        goto loc_802CCE50;
    }
}

loc_802CCE30:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 852), static_cast<uint8_t>(r0));
    r0 = 1800;
    MemoryInline::FlatWrite16((r31 + 850), static_cast<uint16_t>(r0));
    r3 = r31;
    // inline leaf 0x802D427C (3 guest instruction(s))
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 465), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x802D427C
    r3 = 1;
    goto loc_802CCE54;
}

loc_802CCE50:
{
    r3 = 0;
}

loc_802CCE54:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return r3;
}

}

extern "C" void func_802CCDF4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_802CCDF4_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000B gpr_write=0x0000000B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802CCDF4 func_802CCDF4 preserves=true fpr_mask=0x00000000
