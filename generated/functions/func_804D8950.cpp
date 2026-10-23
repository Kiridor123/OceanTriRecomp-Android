#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_804D8950_ra58_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r6)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = arg_r6;
    uint32_t r7 = ctx->gpr[7];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_804D8950;

loc_804D8950:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r4 = 0x80750000u;
    r6 = 0x80000000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r5 = (r3 * 12);
    r4 = (r4 + 2160);
    r31 = (r4 + r5);
    r0 = MemoryInline::FlatRead32((r13 + -20012));
    r7 = (r0 & 1792);
}

loc_804D897C:
{
    r0 = PPC_Srw(static_cast<uint32_t>(r6), static_cast<uint32_t>(r3));
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_804D89B0;
    }
}

loc_804D8984:
{
}

loc_804D8988:
{
    if ((static_cast<uint32_t>(r7) == static_cast<uint32_t>(1280))) {
        goto loc_804D89B0;
    }
}

loc_804D898C:
{
}

loc_804D8990:
{
    if ((static_cast<uint32_t>(r7) == static_cast<uint32_t>(1536))) {
        goto loc_804D89B0;
    }
}

loc_804D8994:
{
}

loc_804D8998:
{
    if ((static_cast<uint32_t>(r7) == static_cast<uint32_t>(1792))) {
        goto loc_804D89B0;
    }
}

loc_804D899C:
{
}

loc_804D89A0:
{
    if ((static_cast<uint32_t>(r7) == static_cast<uint32_t>(256))) {
        goto loc_804D89E4;
    }
}

loc_804D89A4:
{
}

loc_804D89A8:
{
    if ((static_cast<uint32_t>(r7) == static_cast<uint32_t>(512))) {
        goto loc_804D8A18;
    }
}

loc_804D89AC:
{
    goto loc_804D8A48;
}

loc_804D89B0:
{
    r4 = MemoryInline::FlatRead8((r31 + 6));
    r4 = (r4 & 240);
    MemoryInline::FlatWrite8((r31 + 6), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead8((r31 + 7));
    r4 = (r4 & 240);
    MemoryInline::FlatWrite8((r31 + 7), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead8((r31 + 8));
    r4 = (r4 & 240);
    MemoryInline::FlatWrite8((r31 + 8), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead8((r31 + 9));
    r4 = (r4 & 240);
    MemoryInline::FlatWrite8((r31 + 9), static_cast<uint8_t>(r4));
    goto loc_804D8A48;
}

loc_804D89E4:
{
    r4 = MemoryInline::FlatRead8((r31 + 4));
    r4 = (r4 & -16);
    MemoryInline::FlatWrite8((r31 + 4), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead8((r31 + 5));
    r4 = (r4 & -16);
    MemoryInline::FlatWrite8((r31 + 5), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead8((r31 + 8));
    r4 = (r4 & 240);
    MemoryInline::FlatWrite8((r31 + 8), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead8((r31 + 9));
    r4 = (r4 & 240);
    MemoryInline::FlatWrite8((r31 + 9), static_cast<uint8_t>(r4));
    goto loc_804D8A48;
}

loc_804D8A18:
{
    r4 = MemoryInline::FlatRead8((r31 + 4));
    r4 = (r4 & -16);
    MemoryInline::FlatWrite8((r31 + 4), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead8((r31 + 5));
    r4 = (r4 & -16);
    MemoryInline::FlatWrite8((r31 + 5), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead8((r31 + 6));
    r4 = (r4 & 240);
    MemoryInline::FlatWrite8((r31 + 6), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead8((r31 + 7));
    r4 = (r4 & 240);
    MemoryInline::FlatWrite8((r31 + 7), static_cast<uint8_t>(r4));
}

loc_804D8A48:
{
    r5 = MemoryInline::FlatRead8((r31 + 2));
    r4 = MemoryInline::FlatRead32((r13 + -20016));
    r5 = (r5 + -128);
    MemoryInline::FlatWrite8((r31 + 2), static_cast<uint8_t>(r5));
    r0 = (r4 & r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    r4 = MemoryInline::FlatRead8((r31 + 3));
    r0 = (r4 + -128);
    MemoryInline::FlatWrite8((r31 + 3), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead8((r31 + 4));
    r0 = (r4 + -128);
    MemoryInline::FlatWrite8((r31 + 4), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead8((r31 + 5));
    r0 = (r4 + -128);
    MemoryInline::FlatWrite8((r31 + 5), static_cast<uint8_t>(r0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804D8AB0;
    }
}

loc_804D8A84:
{
    r0 = MemoryInline::FlatRead8((r31 + 2));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_804D8A90:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(64))) {
        goto loc_804D8AB0;
    }
}

loc_804D8A94:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x804DF360u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r3 & -65536);
    r0 = (r3 + -150994944);
}

loc_804D8AA4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(0))) {
        goto loc_804D8AB0;
    }
}

loc_804D8AA8:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 2), static_cast<uint8_t>(r0));
}

loc_804D8AB0:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804D8950(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804D8950_ra58_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[6]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000020DB gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804D8950 func_804D8950 preserves=true fpr_mask=0x00000000
