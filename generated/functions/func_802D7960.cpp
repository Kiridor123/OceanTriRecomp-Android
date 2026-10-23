#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80050F10(CpuContext* ctx);
extern "C" uint64_t func_80050F10_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint32_t func_802D7960_ra30_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;

    goto loc_802D7960;

loc_802D7960:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = 0x806C0000u;
    r5 = (r3 + -2080);
    r0 = MemoryInline::FlatRead8((r3 + -2080));
}

loc_802D797C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802D7988;
    }
}

loc_802D7980:
{
    r3 = 0;
    goto loc_802D79F8;
}

loc_802D7988:
{
    r0 = MemoryInline::FlatRead8((r5 + 1056));
}

loc_802D7990:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_802D799C;
    }
}

loc_802D7994:
{
    r3 = 0;
    goto loc_802D79F8;
}

loc_802D799C:
{
    r4 = MemoryInline::FlatRead32((r5 + 364));
}

loc_802D79A4:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_802D79B0;
    }
}

loc_802D79A8:
{
    r3 = 0;
    goto loc_802D79F8;
}

loc_802D79B0:
{
    r3 = MemoryInline::FlatRead8((r5 + 420));
    r0 = MemoryInline::FlatRead8((r4 + 22));
}

loc_802D79BC:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_802D79C8;
    }
}

loc_802D79C0:
{
    r3 = 0;
    goto loc_802D79F8;
}

loc_802D79C8:
{
    r0 = MemoryInline::FlatRead16((r5 + 1058));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_802D79D0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802D79DC;
    }
}

loc_802D79D4:
{
    r3 = 0;
    goto loc_802D79F8;
}

loc_802D79DC:
{
    r3 = (r5 + 376);
    r4 = (r4 + 60);
    ctx->lr = 0x802D79E8u;
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

loc_802D79F0:
{
    r3 = cr;
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
}

loc_802D79F8:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return r4;
}

}

extern "C" void func_802D7960(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_802D7960_ra30_0_10_0(ctx, ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000037 gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000001 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802D7960 func_802D7960 preserves=true fpr_mask=0x00000000
