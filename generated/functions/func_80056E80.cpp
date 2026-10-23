#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80057874(CpuContext* ctx);
extern "C" void func_80057874_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804CCC90(CpuContext* ctx);
extern "C" uint64_t func_804CCC90_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_80056E80_rac8_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r6, uint32_t arg_r7)
{
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    ctx->gpr[6] = arg_r6;
    ctx->gpr[7] = arg_r7;

    goto loc_80056E80;

loc_80056E80:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r4 = 0;
    r5 = 60;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r4 = 0x80660000u;
    r3 = MemoryInline::FlatRead16((r4 + -19268));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & 1);
    r0 = (r0 + r3);
    r0 = (static_cast<int32_t>(r0) >> 1);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16((r31 + 28), static_cast<uint16_t>(r0));
    r3 = (r4 + -19268);
    r3 = MemoryInline::FlatRead16((r3 + 2));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
    r0 = (r0 + r3);
    r0 = (static_cast<int32_t>(r0) >> 1);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16((r31 + 30), static_cast<uint16_t>(r0));
    r3 = 262144;
    r5 = (r3 + 24576);
    MemoryInline::FlatWrite32((r31 + 12), r5);
    r3 = 0x90C80000u;
    r3 = (r3 + 12288);
    MemoryInline::FlatWrite32((r31 + 8), r3);
    r4 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = MemoryInline::FlatRead32((r31 + 8));
    r4 = MemoryInline::FlatRead32((r31 + 12));
    if constexpr (KnownRegArgsCpuCall<0x804CCC90u>(&func_804CCC90)) {
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_804CCC90_A68 = func_804CCC90_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804CCC90_A68);
        r4 = static_cast<uint32_t>(regargs_result_804CCC90_A68 >> 32);
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804CCC90u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = 255;
    MemoryInline::FlatWrite8((r31 + 2), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r31 + 3), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r31 + 4), static_cast<uint8_t>(r0));
    r3 = 0;
    r4 = 0;
    r5 = 1;
    if constexpr (KnownRegArgsCpuCall<0x80057874u>(&func_80057874)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        func_80057874_ra38_0_0_0(ctx, r3, r4, r5);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80057874u>(ctx);
        r0 = ctx->gpr[0];
    }
    r0 = 64;
    MemoryInline::FlatWrite32((r31 + 40), r0);
    r0 = 192;
    MemoryInline::FlatWrite32((r31 + 44), r0);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -32352));
    MemoryInline::FlatWriteFloat32((r31 + 48), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -32348));
    MemoryInline::FlatWriteFloat32((r31 + 52), f0.d);
    r3 = 0x80670000u;
    r3 = (r3 + -11912);
    r0 = MemoryInline::FlatRead32((r3 + 308));
    MemoryInline::FlatWrite32((r31 + 56), r0);
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80056E80(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80056E80_rac8_0_18_0(ctx, ctx->gpr[3], ctx->gpr[6], ctx->gpr[7]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000004E gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80056E80 func_80056E80 preserves=true fpr_mask=0x00000000
