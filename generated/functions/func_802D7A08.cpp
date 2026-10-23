#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80050F10(CpuContext* ctx);
extern "C" uint64_t func_80050F10_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_802D7A08_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;

    goto loc_802D7A08;

loc_802D7A08:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = 0x806C0000u;
    r31 = (r3 + -2080);
    r0 = MemoryInline::FlatRead8((r3 + -2080));
}

loc_802D7A28:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802D7A34;
    }
}

loc_802D7A2C:
{
    r3 = 0;
    goto loc_802D7AA0;
}

loc_802D7A34:
{
    r4 = MemoryInline::FlatRead32((r31 + 364));
}

loc_802D7A3C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_802D7A48;
    }
}

loc_802D7A40:
{
    r3 = 0;
    goto loc_802D7AA0;
}

loc_802D7A48:
{
    r3 = MemoryInline::FlatRead8((r31 + 420));
    r0 = MemoryInline::FlatRead8((r4 + 22));
}

loc_802D7A54:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_802D7A60;
    }
}

loc_802D7A58:
{
    r3 = 0;
    goto loc_802D7AA0;
}

loc_802D7A60:
{
    r3 = r31;
    r4 = 1;
    r5 = 85;
    // inline leaf 0x802D2B9C (12 guest instruction(s))
}

loc_inl0_0x802D2B9C:
{
    r6 = MemoryInline::FlatRead8((r3 + 369));
    r0 = (r4 & 255);
}

loc_inl0_0x802D2BA8:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl0_0x802D2BC4;
    }
}

loc_inl0_0x802D2BAC:
{
    r3 = MemoryInline::FlatRead16((r3 + 370));
    r0 = (r5 & 65535);
}

loc_inl0_0x802D2BB8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl0_0x802D2BC4;
    }
}

loc_inl0_0x802D2BBC:
{
    r3 = 1;
    goto loc_inl0_cont_802D2B9C;
}

loc_inl0_0x802D2BC4:
{
    r3 = 0;
}

loc_inl0_cont_802D2B9C:
{
    // end of inlined leaf 0x802D2B9C
}

loc_802D7A74:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802D7A9C;
    }
}

loc_802D7A78:
{
    r3 = (r31 + 376);
    r4 = MemoryInline::FlatRead32((r31 + 364));
    r4 = (r4 + 60);
    ctx->lr = 0x802D7A88u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    InvokeDirectCpu<0x80050F10u>(ctx);
    ctx->fpr[1].d = PPC_PsToScalarInline(ctx->fpr[1].d);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f0.d = MemoryInline::FlatReadFloat32((r2 + -12848));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_802D7A90:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_802D7A9C;
    }
}

loc_802D7A94:
{
    r3 = 1;
    goto loc_802D7AA0;
}

loc_802D7A9C:
{
    r3 = 0;
}

loc_802D7AA0:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802D7A08(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802D7A08_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007F gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000001 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802D7A08 func_802D7A08 preserves=true fpr_mask=0x00000000
