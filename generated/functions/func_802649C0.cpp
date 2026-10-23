#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_802649C0_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_802649C0;

loc_802649C0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = MemoryInline::FlatRead8((r3 + 929));
    r4 = 34;
    ctx->lr = 0x802649E4u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_802649E8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80264A04;
    }
}

loc_802649EC:
{
}

loc_802649F0:
{
    if ((static_cast<uint32_t>(r31) <= static_cast<uint32_t>(21))) {
        goto loc_802649FC;
    }
}

loc_802649F4:
{
    r31 = (r31 + -20);
    goto loc_80264A70;
}

loc_802649FC:
{
    r31 = 1;
    goto loc_80264A70;
}

loc_80264A04:
{
    r3 = r30;
    r4 = 33;
    ctx->lr = 0x80264A10u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80264A14:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_80264A2C;
    }
}

loc_80264A18:
{
    r3 = r30;
    r4 = 8192;
    // inline leaf 0x8026FEFC (10 guest instruction(s))
}

loc_inl0_0x8026FEFC:
{
    r0 = (r4 & -2147483648);
}

loc_inl0_0x8026FF04:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x8026FF14;
    }
}

loc_inl0_0x8026FF08:
{
    r0 = MemoryInline::FlatRead32((r3 + 860));
    r3 = (r0 & r4);
    goto loc_inl0_cont_8026FEFC;
}

loc_inl0_0x8026FF14:
{
    r3 = MemoryInline::FlatRead32((r3 + 864));
    r0 = (r4 & 2147483647);
    r3 = (r3 & r0);
}

loc_inl0_cont_8026FEFC:
{
    // end of inlined leaf 0x8026FEFC
}

loc_80264A28:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80264A44;
    }
}

loc_80264A2C:
{
}

loc_80264A30:
{
    if ((static_cast<uint32_t>(r31) <= static_cast<uint32_t>(11))) {
        goto loc_80264A3C;
    }
}

loc_80264A34:
{
    r31 = (r31 + -10);
    goto loc_80264A70;
}

loc_80264A3C:
{
    r31 = 1;
    goto loc_80264A70;
}

loc_80264A44:
{
    r3 = r30;
    r4 = 35;
    ctx->lr = 0x80264A50u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80264A54:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80264A70;
    }
}

loc_80264A58:
{
}

loc_80264A5C:
{
    r0 = 255;
    if ((static_cast<uint32_t>(r31) >= static_cast<uint32_t>(245))) {
        goto loc_80264A6C;
    }
}

loc_80264A64:
{
    r0 = (r31 + 10);
    r0 = (r0 & 255);
}

loc_80264A6C:
{
    r31 = r0;
}

loc_80264A70:
{
    r3 = r31;
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802649C0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802649C0_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802649C0 func_802649C0 preserves=true fpr_mask=0x00000000
