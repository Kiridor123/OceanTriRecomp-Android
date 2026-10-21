#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_802766F4_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x802766F4u);
    goto loc_802766F4;

loc_802766F4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = r3;
    r29 = r4;
    r30 = r5;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8026FE38u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80276720:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802767C0;
    }
}

loc_80276724:
{
    r0 = MemoryInline::FlatRead16((r31 + 882));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 + r29);
    MemoryInline::FlatWrite16((r31 + 882), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_80276738:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(1))) {
        goto loc_80276744;
    }
}

loc_8027673C:
{
    r0 = 1;
    MemoryInline::FlatWrite16((r31 + 882), static_cast<uint16_t>(r0));
}

loc_80276744:
{
    r0 = MemoryInline::FlatRead16((r31 + 882));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8027674C:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(150))) {
        goto loc_80276758;
    }
}

loc_80276750:
{
    r0 = 150;
    MemoryInline::FlatWrite16((r31 + 882), static_cast<uint16_t>(r0));
}

loc_80276758:
{
    r3 = MemoryInline::FlatRead16((r31 + 882));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead16((r31 + 880));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80276764:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r3))) {
        goto loc_8027676C;
    }
}

loc_80276768:
{
    MemoryInline::FlatWrite16((r31 + 880), static_cast<uint16_t>(r3));
}

loc_8027676C:
{
    r3 = MemoryInline::FlatRead16((r31 + 882));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead16((r31 + 886));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80276778:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r3))) {
        goto loc_80276780;
    }
}

loc_8027677C:
{
    MemoryInline::FlatWrite16((r31 + 886), static_cast<uint16_t>(r3));
}

loc_80276780:
{
    r0 = (r30 & 255);
}

loc_80276788:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802767C0;
    }
}

loc_8027678C:
{
    r0 = MemoryInline::FlatRead16((r31 + 884));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 + r29);
    MemoryInline::FlatWrite16((r31 + 884), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_802767A0:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(1))) {
        goto loc_802767AC;
    }
}

loc_802767A4:
{
    r0 = 1;
    MemoryInline::FlatWrite16((r31 + 884), static_cast<uint16_t>(r0));
}

loc_802767AC:
{
    r0 = MemoryInline::FlatRead16((r31 + 884));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_802767B4:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(150))) {
        goto loc_802767C0;
    }
}

loc_802767B8:
{
    r0 = 150;
    MemoryInline::FlatWrite16((r31 + 884), static_cast<uint16_t>(r0));
}

loc_802767C0:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return r3;
}

}

extern "C" void func_802766F4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_802766F4_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000000B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802766F4 func_802766F4 preserves=true fpr_mask=0x00000000
