#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8021B07C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x8021B07Cu);
    goto loc_8021B07C;

loc_8021B07C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r30 = r4;
    r3 = 0x805C0000u;
    r31 = (r3 + -25264);
    goto loc_8021B0B8;
}

loc_8021B0A8:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8004D2E0u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8021B0B0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8021B0D0;
    }
}

loc_8021B0B4:
{
    r31 = (r31 + 2);
}

loc_8021B0B8:
{
    r3 = MemoryInline::FlatRead16(r31);
}

loc_8021B0C0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(65535))) {
        goto loc_8021B0A8;
    }
}

loc_8021B0C4:
{
    r3 = r29;
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r30)));
    // inline leaf 0x8021AD30 (18 guest instruction(s))
}

loc_inl0_0x8021AD30:
{
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
}

loc_inl0_0x8021AD38:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(12))) {
        goto loc_inl0_0x8021AD58;
    }
}

loc_inl0_0x8021AD3C:
{
    r4 = MemoryInline::FlatRead16((r3 + 16632));
    r0 = 1;
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r6));
    r0 = (r0 & 65535);
    r0 = (r4 | r0);
    MemoryInline::FlatWrite16((r3 + 16632), static_cast<uint16_t>(r0));
    goto loc_inl0_cont_8021AD30;
}

loc_inl0_0x8021AD58:
{
    r5 = MemoryInline::FlatRead16((r3 + 16634));
    r4 = 1;
    r0 = (r6 + -12);
    r0 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
    r0 = (r0 & 65535);
    r0 = (r5 | r0);
    MemoryInline::FlatWrite16((r3 + 16634), static_cast<uint16_t>(r0));
}

loc_inl0_cont_8021AD30:
{
    // end of inlined leaf 0x8021AD30
}

loc_8021B0D0:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8021B07C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8021B07C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8021B07C func_8021B07C preserves=true fpr_mask=0x00000000
