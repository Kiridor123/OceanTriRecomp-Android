#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803441C8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x803441C8u);
    goto loc_803441C8;

loc_803441C8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = r4;
    r3 = r31;
    // inline leaf 0x8012D068 (10 guest instruction(s))
}

loc_inl0_0x8012D068:
{
    r0 = MemoryInline::FlatRead8(r3);
}

loc_inl0_0x8012D070:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x8012D088;
    }
}

loc_inl0_0x8012D074:
{
    r0 = MemoryInline::FlatRead8((r3 + 4));
}

loc_inl0_0x8012D07C:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(2))) {
        goto loc_inl0_0x8012D088;
    }
}

loc_inl0_0x8012D080:
{
    r3 = 0;
    goto loc_inl0_cont_8012D068;
}

loc_inl0_0x8012D088:
{
    r3 = 1;
}

loc_inl0_cont_8012D068:
{
    // end of inlined leaf 0x8012D068
}

loc_803441F0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80344244;
    }
}

loc_803441F4:
{
    r0 = MemoryInline::FlatRead8((r31 + 485));
}

loc_803441FC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(11))) {
        goto loc_80344244;
    }
}

loc_80344200:
{
}

loc_80344204:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(12))) {
        goto loc_80344244;
    }
}

loc_80344208:
{
    r3 = MemoryInline::FlatRead8((r31 + 3));
    r4 = MemoryInline::FlatRead8((r31 + 10));
    ctx->lr = 0x80344214u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80343A38u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r3 = (r3 & 255);
    r0 = MemoryInline::FlatRead8(r30);
}

loc_80344220:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_80344244;
    }
}

loc_80344224:
{
    r3 = MemoryInline::FlatRead8((r31 + 1132));
}

loc_8034422C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(255))) {
        goto loc_80344244;
    }
}

loc_80344230:
{
    r0 = MemoryInline::FlatRead8((r30 + 1));
}

loc_80344238:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80344244;
    }
}

loc_8034423C:
{
    r3 = 1;
    goto loc_80344248;
}

loc_80344244:
{
    r3 = 0;
}

loc_80344248:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803441C8 func_803441C8 preserves=true fpr_mask=0x00000000
