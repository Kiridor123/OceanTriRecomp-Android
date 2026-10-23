#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8081E8F0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8081E8F0;

loc_8081E8F0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = MemoryInline::FlatRead32((r3 + 60));
    r31 = r3;
}

loc_8081E90C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8081E91C;
    }
}

loc_8081E914:
{
    r4 = 0;
    goto loc_8081E930;
}

loc_8081E91C:
{
    r0 = MemoryInline::FlatRead32((r3 + 16));
    r4 = 2;
}

loc_8081E928:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8081E930;
    }
}

loc_8081E92C:
{
    r4 = 1;
}

loc_8081E930:
{
}

loc_8081E934:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(1))) {
        goto loc_8081E968;
    }
}

loc_8081E938:
{
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r5 = 0;
    r4 = MemoryInline::FlatRead32((r31 + 44));
    ctx->lr = 0x8081E948u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x804C27A0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = 0x80870000u;
    r4 = r3;
    r3 = (r30 + -32320);
    r5 = 32;
    // inline leaf 0x804C2B20 (7 guest instruction(s))
    r6 = (r2 + -2096);
    r0 = 0;
    MemoryInline::FlatWriteRam32(r3, r6);
    MemoryInline::FlatWriteRam32((r3 + 4), r4);
    MemoryInline::FlatWriteRam32((r3 + 8), r5);
    MemoryInline::FlatWriteRam32((r3 + 12), r0);
    // end of inlined leaf 0x804C2B20
    r3 = 0x80840000u;
    r0 = (r30 + -32320);
    MemoryInline::FlatWriteRam32((r3 + 21764), r0);
}

loc_8081E968:
{
    r5 = MemoryInline::FlatRead32((r31 + 60));
}

loc_8081E970:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8081E97C;
    }
}

loc_8081E974:
{
    r3 = 0;
    goto loc_8081E990;
}

loc_8081E97C:
{
    r0 = MemoryInline::FlatRead32((r31 + 16));
    r3 = 2;
}

loc_8081E988:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8081E990;
    }
}

loc_8081E98C:
{
    r3 = 1;
}

loc_8081E990:
{
}

loc_8081E994:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8081E9AC;
    }
}

loc_8081E998:
{
}

loc_8081E99C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_8081E9C4;
    }
}

loc_8081E9A0:
{
}

loc_8081E9A4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(2))) {
        goto loc_8081E9D8;
    }
}

loc_8081E9A8:
{
    goto loc_8081E9E8;
}

loc_8081E9AC:
{
    r4 = 0x80870000u;
    r0 = MemoryInline::FlatRead32((r31 + 60));
    r3 = 0x80840000u;
    MemoryInline::FlatWriteRam32((r4 + -32224), r5);
    MemoryInline::FlatWriteRam32((r3 + 21764), r0);
    goto loc_8081E9E8;
}

loc_8081E9C4:
{
    r4 = 0x80840000u;
    r3 = 0x80870000u;
    r0 = MemoryInline::FlatRead32((r4 + 21764));
    MemoryInline::FlatWriteRam32((r3 + -32224), r0);
    goto loc_8081E9E8;
}

loc_8081E9D8:
{
    r4 = 0x80870000u;
    r3 = 0x80840000u;
    r0 = MemoryInline::FlatRead32((r4 + -32224));
    MemoryInline::FlatWriteRam32((r3 + 21764), r0);
}

loc_8081E9E8:
{
    r3 = r31;
    ctx->lr = 0x8081E9F0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x8081F3B0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    // inline leaf 0x8081F450 (3 guest instruction(s))
    r3 = 0x80870000u;
    r3 = MemoryInline::FlatRead32((r3 + -32304));
    // end of inlined leaf 0x8081F450
    ctx->lr = 0x8081E9F8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x8081F460u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8081E8F0 func_8081E8F0 preserves=true fpr_mask=0x00000000
