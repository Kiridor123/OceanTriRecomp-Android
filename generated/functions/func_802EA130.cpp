#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802D6598(CpuContext* ctx);
extern "C" uint64_t func_802D6598_ra18_8_18_0(CpuContext*, uint32_t, uint32_t, double);

extern "C" uint64_t func_802EA130_ra38_8_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f3)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    PPC_FPR f3; f3.d = arg_f3;

    goto loc_802EA130;

loc_802EA130:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & -2);
    r4 = (r3 + r0);
    r0 = MemoryInline::FlatRead16((r4 + 192));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_802EA150:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_802EA15C;
    }
}

loc_802EA154:
{
    r3 = 0;
    goto loc_802EA18C;
}

loc_802EA15C:
{
    r5 = 0;
    MemoryInline::FlatWrite16((r4 + 192), static_cast<uint16_t>(r5));
    r4 = MemoryInline::FlatRead8((r3 + 200));
    r0 = 1;
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r6));
    r0 = (r0 & 255);
    r0 = (r4 | r0);
    MemoryInline::FlatWrite8((r3 + 200), static_cast<uint8_t>(r0));
    r3 = (r3 + r6);
    MemoryInline::FlatWrite8((r3 + 201), static_cast<uint8_t>(r5));
    ctx->lr = 0x802EA188u;
    if constexpr (KnownRegArgsCpuCall<0x802D6598u>(&func_802D6598)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_802D6598_7B8 = func_802D6598_ra18_8_18_0(ctx, r3, r4, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_802D6598_7B8);
        r4 = static_cast<uint32_t>(regargs_result_802D6598_7B8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x802D6598u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f3 = ctx->fpr[3];
    }
    r3 = 1;
}

loc_802EA18C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[3] = f3;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802EA130(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802EA130_ra38_8_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[3].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007F gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000009 fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802EA130 func_802EA130 preserves=true fpr_mask=0x00000000
