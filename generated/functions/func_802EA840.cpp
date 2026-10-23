#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801336B0(CpuContext* ctx);
extern "C" uint32_t func_801336B0_ra8_4_8_0(CpuContext*, uint32_t, double);

extern "C" uint64_t func_802EA840_ra38_4_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f2)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f2; f2.d = arg_f2;

    goto loc_802EA840;

loc_802EA840:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = r4;
    r0 = MemoryInline::FlatRead8(r4);
}

loc_802EA864:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802EA870;
    }
}

loc_802EA868:
{
    r3 = 0;
    goto loc_802EA954;
}

loc_802EA870:
{
    r0 = MemoryInline::FlatRead32((r4 + 456));
    r0 = (r0 & 1);
}

loc_802EA87C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802EA938;
    }
}

loc_802EA880:
{
}

loc_802EA884:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_802EA8A0;
    }
}

loc_802EA888:
{
    r3 = r31;
    ctx->lr = 0x802EA890u;
    if constexpr (KnownRegArgsCpuCall<0x801336B0u>(&func_801336B0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        const auto regargs_result_801336B0_6B8 = func_801336B0_ra8_4_8_0(ctx, r3, f2.d);
        r3 = regargs_result_801336B0_6B8;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f2 = ctx->fpr[2];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[2] = f2;
        InvokeDirectCpu<0x801336B0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f2 = ctx->fpr[2];
    }
}

loc_802EA894:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802EA8A0;
    }
}

loc_802EA898:
{
    r3 = 1;
    goto loc_802EA954;
}

loc_802EA8A0:
{
    r3 = MemoryInline::FlatRead8((r30 + 208));
    r0 = (r3 & 4);
}

loc_802EA8AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802EA8B8;
    }
}

loc_802EA8B0:
{
    r3 = 3;
    goto loc_802EA954;
}

loc_802EA8B8:
{
    r0 = (r3 & 2);
}

loc_802EA8C0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802EA90C;
    }
}

loc_802EA8C4:
{
    r0 = MemoryInline::FlatRead32((r30 + 392));
}

loc_802EA8CC:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_802EA8D8;
    }
}

loc_802EA8D0:
{
    r3 = 3;
    goto loc_802EA954;
}

loc_802EA8D8:
{
    r0 = (r3 & 1);
}

loc_802EA8E0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802EA8EC;
    }
}

loc_802EA8E4:
{
    r3 = 3;
    goto loc_802EA954;
}

loc_802EA8EC:
{
    r3 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8013369Cu>(ctx);
    r3 = ctx->gpr[3];
    r4 = (r3 + -1);
    r0 = (1 - r3);
    r0 = ~(r4 | r0);
    r0 = (static_cast<int32_t>(r0) >> 31);
    r3 = (r0 & 3);
    goto loc_802EA954;
}

loc_802EA90C:
{
    r0 = (r3 & 1);
}

loc_802EA914:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802EA920;
    }
}

loc_802EA918:
{
    r3 = 2;
    goto loc_802EA954;
}

loc_802EA920:
{
    r3 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8013369Cu>(ctx);
    r3 = ctx->gpr[3];
}

loc_802EA92C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802EA950;
    }
}

loc_802EA930:
{
    r3 = 2;
    goto loc_802EA954;
}

loc_802EA938:
{
    r3 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8013369Cu>(ctx);
    r3 = ctx->gpr[3];
}

loc_802EA944:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802EA950;
    }
}

loc_802EA948:
{
    r3 = 2;
    goto loc_802EA954;
}

loc_802EA950:
{
    r3 = 0;
}

loc_802EA954:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[2] = f2;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802EA840(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802EA840_ra38_4_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[2].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003F gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000005 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802EA840 func_802EA840 preserves=true fpr_mask=0x00000000
