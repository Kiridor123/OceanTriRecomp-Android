#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8081CD00(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8081CD00;

loc_8081CD00:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r4;
    r30 = r3;
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r4 = MemoryInline::FlatRead32(r30);
    // inline leaf 0x8081DD30 (7 guest instruction(s))
    r0 = (r4 * 104);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 80));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x8081DD30
}

loc_8081CD2C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8081CD38;
    }
}

loc_8081CD30:
{
    r3 = 0;
    goto loc_8081CD48;
}

loc_8081CD38:
{
    r3 = MemoryInline::FlatRead32((r30 + 32));
    r5 = r31;
    r4 = MemoryInline::FlatRead32(r30);
    // inline leaf 0x8081DD50 (12 guest instruction(s))
}

loc_inl1_0x8081DD50:
{
    r0 = (r4 * 104);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 80));
}

loc_inl1_0x8081DD60:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl1_0x8081DD78;
    }
}

loc_inl1_0x8081DD64:
{
    r0 = MemoryInline::FlatRead32((r3 + 88));
}

loc_inl1_0x8081DD6C:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(r0))) {
        goto loc_inl1_0x8081DD78;
    }
}

loc_inl1_0x8081DD70:
{
    r3 = 1;
    goto loc_inl1_cont_8081DD50;
}

loc_inl1_0x8081DD78:
{
    r3 = 0;
}

loc_inl1_cont_8081DD50:
{
    // end of inlined leaf 0x8081DD50
}

loc_8081CD48:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8081CD00 func_8081CD00 preserves=true fpr_mask=0x00000000
