#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8081B3D0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8081B3D0;

loc_8081B3D0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = r4;
    r4 = 0;
    r29 = r3;
    r3 = (r3 + 8);
    // inline leaf 0x80839DA0 (8 guest instruction(s))
}

loc_inl0_0x80839DA0:
{
}

loc_inl0_0x80839DA4:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x80839DB0;
    }
}

loc_inl0_0x80839DA8:
{
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_inl0_cont_80839DA0;
}

loc_inl0_0x80839DB0:
{
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl0_cont_80839DA0:
{
    // end of inlined leaf 0x80839DA0
    r31 = r3;
    goto loc_8081B420;
}

loc_8081B404:
{
    r0 = MemoryInline::FlatRead32((r31 + 4));
}

loc_8081B40C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r30))) {
        goto loc_8081B428;
    }
}

loc_8081B410:
{
    r4 = r31;
    r3 = (r29 + 8);
    // inline leaf 0x80839DA0 (8 guest instruction(s))
}

loc_inl1_0x80839DA0:
{
}

loc_inl1_0x80839DA4:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x80839DB0;
    }
}

loc_inl1_0x80839DA8:
{
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_inl1_cont_80839DA0;
}

loc_inl1_0x80839DB0:
{
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl1_cont_80839DA0:
{
    // end of inlined leaf 0x80839DA0
    r31 = r3;
}

loc_8081B420:
{
}

loc_8081B424:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_8081B404;
    }
}

loc_8081B428:
{
    r4 = r31;
    r3 = (r29 + 8);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80839D30u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r3 = MemoryInline::FlatRead32((r29 + 20));
}

loc_8081B43C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8081B44C;
    }
}

loc_8081B440:
{
    r4 = r31;
    ctx->lr = 0x8081B448u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x804C2B10u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    goto loc_8081B454;
}

loc_8081B44C:
{
    r3 = r31;
    ctx->lr = 0x8081B454u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80040564u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
}

loc_8081B454:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8081B3D0 func_8081B3D0 preserves=true fpr_mask=0x00000000
