#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80416D54(CpuContext* ctx);
extern "C" uint32_t func_80416D54_ra0_0_8_0(CpuContext*);
extern "C" void func_804171D4(CpuContext* ctx);
extern "C" uint64_t func_804171D4_ra58_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_804170AC_ra38_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f31 = ctx->fpr[31];

    MKW_GUEST_ENTER(0x804170ACu);
    goto loc_804170AC;

loc_804170AC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f31.d);
    r29 = r3;
    r30 = r4;
    r31 = r5;
    f31.d = f1.d;
    ctx->lr = 0x804170DCu;
    if constexpr (KnownRegArgsCpuCall<0x80416D54u>(&func_80416D54)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80416D54_593 = func_80416D54_ra0_0_8_0(ctx);
        r3 = regargs_result_80416D54_593;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x80416D54u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_804170E0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80417130;
    }
}

loc_804170E4:
{
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r30)));
}

loc_804170EC:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(0))) {
        goto loc_80417130;
    }
}

loc_804170F0:
{
}

loc_804170F4:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(4))) {
        goto loc_804170FC;
    }
}

loc_804170F8:
{
    goto loc_80417130;
}

loc_804170FC:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(3));
    r0 = (r0_rot_1 & -8);
    r3 = (r29 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 28080));
}

loc_8041710C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80417130;
    }
}

loc_80417110:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 28080), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 28081), static_cast<uint8_t>(r31));
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 28082), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteFloat32((r3 + 28084), f31.d);
    r3 = r29;
    ctx->lr = 0x80417130u;
    if constexpr (KnownRegArgsCpuCall<0x804171D4u>(&func_804171D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_804171D4_C32 = func_804171D4_ra58_0_18_0(ctx, r3, r4, r6);
        r3 = static_cast<uint32_t>(regargs_result_804171D4_C32);
        r4 = static_cast<uint32_t>(regargs_result_804171D4_C32 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804171D4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_80417130:
{
    f31.d = MemoryInline::FlatReadFloat64((r1 + 24));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[31] = f31;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804170AC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804170AC_ra38_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000020FB gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x80000002 fpr_write=0x80000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804170AC func_804170AC preserves=true fpr_mask=0x00000000
