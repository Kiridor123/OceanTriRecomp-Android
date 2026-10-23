#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_809F9ED4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];

    goto loc_809F9ED4;

loc_809F9ED4:
{
    MemoryInline::FlatWriteRam32((r1 + -160), r1);
    r1 = (r1 + -160);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 164), r0);
    r30 = r3;
    r3 = (r1 + 104);
    // inline leaf 0x809ED8C4 (1 guest instruction(s))
    // end of inlined leaf 0x809ED8C4
    r3 = (r1 + 56);
    // inline leaf 0x809ED8C4 (1 guest instruction(s))
    // end of inlined leaf 0x809ED8C4
    r3 = (r1 + 44);
    // inline leaf 0x809EA85C (1 guest instruction(s))
    // end of inlined leaf 0x809EA85C
    r3 = (r1 + 32);
    // inline leaf 0x809EA85C (1 guest instruction(s))
    // end of inlined leaf 0x809EA85C
    r3 = (r1 + 20);
    // inline leaf 0x809EA85C (1 guest instruction(s))
    // end of inlined leaf 0x809EA85C
    r31 = MemoryInline::FlatRead32((r30 + 136));
}

loc_809F9F1C:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_809F9F2C;
    }
}

loc_809F9F20:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r30 + 4), static_cast<uint8_t>(r0));
    goto loc_809F9FD0;
}

loc_809F9F2C:
{
    r0 = MemoryInline::FlatRead8((r30 + 140));
}

loc_809F9F34:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_809F9FC8;
    }
}

loc_809F9F38:
{
    r3 = r31;
    ctx->lr = 0x809F9F40u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    InvokeDirectCpu<0x809F9E38u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
}

loc_809F9F44:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_809F9F54;
    }
}

loc_809F9F48:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r30 + 4), static_cast<uint8_t>(r0));
    goto loc_809F9FD0;
}

loc_809F9F54:
{
    r3 = MemoryInline::FlatRead32((r30 + 132));
    r4 = MemoryInline::FlatRead16(r3);
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    MemoryInline::FlatWrite32((r30 + 20), r4);
    r3 = r31;
    r5 = (r1 + 104);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80135994u>(ctx);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 116));
    MemoryInline::FlatWriteRamFloat32((r1 + 44), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 132));
    MemoryInline::FlatWriteRamFloat32((r1 + 48), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 148));
    MemoryInline::FlatWriteRamFloat32((r1 + 52), f0.d);
    r3 = (r1 + 8);
    r4 = (r30 + 24);
    r5 = (r1 + 44);
    ctx->lr = 0x809F9F94u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    InvokeDirectCpu<0x809EF924u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    r3 = (r1 + 32);
    r4 = (r1 + 8);
    ctx->lr = 0x809F9FA0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    InvokeDirectCpu<0x809EB13Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    f0 = ctx->fpr[0];
    r3 = (r1 + 56);
    r4 = (r1 + 104);
    ctx->lr = 0x809F9FACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    InvokeDirectCpu<0x809EF8D8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    r3 = (r1 + 32);
    r4 = (r1 + 56);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800514A4u>(ctx);
    r3 = (r30 + 60);
    r4 = (r1 + 32);
    ctx->lr = 0x809F9FC4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    InvokeDirectCpu<0x809EB13Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    f0 = ctx->fpr[0];
    goto loc_809F9FD0;
}

loc_809F9FC8:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r30 + 4), static_cast<uint8_t>(r0));
}

loc_809F9FD0:
{
    r0 = MemoryInline::FlatRead32((r1 + 164));
    ctx->lr = r0;
    r1 = (r1 + 160);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00003F83 fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x809F9ED4 func_809F9ED4 preserves=true fpr_mask=0x00000000
