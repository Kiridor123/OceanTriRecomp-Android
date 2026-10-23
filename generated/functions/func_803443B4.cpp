#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803443B4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_803443B4;

loc_803443B4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r30 = r4;
    r3 = r30;
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

loc_803443E0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_803444A4;
    }
}

loc_803443E4:
{
    r0 = MemoryInline::FlatRead8((r30 + 485));
}

loc_803443EC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(11))) {
        goto loc_803444A4;
    }
}

loc_803443F0:
{
}

loc_803443F4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(12))) {
        goto loc_803444A4;
    }
}

loc_803443F8:
{
    r31 = MemoryInline::FlatRead8(r29);
    r3 = MemoryInline::FlatRead8((r30 + 3));
    r4 = MemoryInline::FlatRead8((r30 + 10));
    ctx->lr = 0x80344408u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80343A38u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r0 = (r3 & 255);
}

loc_80344410:
{
    if ((static_cast<uint32_t>(r31) != static_cast<uint32_t>(r0))) {
        goto loc_80344434;
    }
}

loc_80344414:
{
    r3 = MemoryInline::FlatRead8((r30 + 1132));
    r0 = MemoryInline::FlatRead8((r29 + 1));
}

loc_80344420:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80344434;
    }
}

loc_80344424:
{
}

loc_80344428:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(255))) {
        goto loc_80344434;
    }
}

loc_8034442C:
{
    r3 = 1;
    goto loc_803444A8;
}

loc_80344434:
{
    r3 = r31;
    r4 = MemoryInline::FlatRead8((r30 + 1132));
    ctx->lr = 0x80344440u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80343948u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = r3;
}

loc_80344448:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803444A4;
    }
}

loc_8034444C:
{
    r3 = MemoryInline::FlatRead8((r3 + 23));
    r0 = MemoryInline::FlatRead8((r29 + 23));
}

loc_80344458:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_80344474;
    }
}

loc_8034445C:
{
}

loc_80344460:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_80344474;
    }
}

loc_80344464:
{
}

loc_80344468:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(255))) {
        goto loc_80344474;
    }
}

loc_8034446C:
{
    r3 = 1;
    goto loc_803444A8;
}

loc_80344474:
{
    r3 = r29;
    ctx->lr = 0x8034447Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80343AD0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r0 = (r3 & 255);
    r0 = (r0 & 8);
}

loc_80344488:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803444A4;
    }
}

loc_8034448C:
{
    r3 = MemoryInline::FlatRead8((r29 + 20));
    r0 = MemoryInline::FlatRead8((r31 + 20));
}

loc_80344498:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_803444A4;
    }
}

loc_8034449C:
{
    r3 = 1;
    goto loc_803444A8;
}

loc_803444A4:
{
    r3 = 0;
}

loc_803444A8:
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
// RECOMP_REGISTRATION base 0x803443B4 func_803443B4 preserves=true fpr_mask=0x00000000
