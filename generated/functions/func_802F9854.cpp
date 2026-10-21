#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_802F9854_ra38_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r31 = ctx->gpr[31];
    ctx->gpr[5] = arg_r5;
    ctx->fpr[1].d = arg_f1;

    MKW_GUEST_ENTER(0x802F9854u);
    goto loc_802F9854;

loc_802F9854:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r4 = 255;
    r0 = MemoryInline::FlatRead8((r3 + 21));
}

loc_802F9874:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802F98A4;
    }
}

loc_802F9878:
{
}

loc_802F987C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_802F98AC;
    }
}

loc_802F9880:
{
}

loc_802F9884:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_802F98B4;
    }
}

loc_802F9888:
{
}

loc_802F988C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_802F98BC;
    }
}

loc_802F9890:
{
}

loc_802F9894:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_802F98C4;
    }
}

loc_802F9898:
{
}

loc_802F989C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_802F98CC;
    }
}

loc_802F98A0:
{
    goto loc_802F98D0;
}

loc_802F98A4:
{
    r4 = 0;
    goto loc_802F98D0;
}

loc_802F98AC:
{
    r4 = 1;
    goto loc_802F98D0;
}

loc_802F98B4:
{
    r4 = 2;
    goto loc_802F98D0;
}

loc_802F98BC:
{
    r4 = 3;
    goto loc_802F98D0;
}

loc_802F98C4:
{
    r4 = 4;
    goto loc_802F98D0;
}

loc_802F98CC:
{
    r4 = 5;
}

loc_802F98D0:
{
    r3 = r31;
    ctx->lr = 0x802F98D8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8012E9CCu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
}

loc_802F98DC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802F98E8;
    }
}

loc_802F98E0:
{
    r3 = r31;
    // inline leaf 0x8012E940 (6 guest instruction(s))
}

loc_inl0_0x8012E940:
{
    r0 = MemoryInline::FlatRead8((r3 + 8));
}

loc_inl0_0x8012E948:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(5))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x8012E94C:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 8), static_cast<uint8_t>(r0));
    goto loc_inl0_cont_8012E940;
}

loc_inl0_return:
{
}

loc_inl0_cont_8012E940:
{
    // end of inlined leaf 0x8012E940
}

loc_802F98E8:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802F9854(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802F9854_ra38_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802F9854 func_802F9854 preserves=true fpr_mask=0x00000000
