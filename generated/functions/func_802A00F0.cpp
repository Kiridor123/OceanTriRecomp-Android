#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8027BCAC(CpuContext* ctx);
extern "C" uint32_t func_8027BCAC_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_8027E184(CpuContext* ctx);
extern "C" uint32_t func_8027E184_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_802FBAC4(CpuContext* ctx);
extern "C" uint32_t func_802FBAC4_ra0_0_8_0(CpuContext*);
extern "C" void func_803AAF24(CpuContext* ctx);
extern "C" uint64_t func_803AAF24_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_802A00F0_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r31 = ctx->gpr[31];

    goto loc_802A00F0;

loc_802A00F0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = MemoryInline::FlatRead32((r3 + 400));
    r0 = MemoryInline::FlatRead8((r3 + 15));
}

loc_802A010C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802A0164;
    }
}

loc_802A0110:
{
    ctx->lr = 0x802A0114u;
    if constexpr (KnownRegArgsCpuCall<0x803AAF24u>(&func_803AAF24)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803AAF24_638 = func_803AAF24_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_803AAF24_638);
        r4 = static_cast<uint32_t>(regargs_result_803AAF24_638 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803AAF24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_802A0118:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802A0134;
    }
}

loc_802A011C:
{
    ctx->lr = 0x802A0120u;
    if constexpr (KnownRegArgsCpuCall<0x802FBAC4u>(&func_802FBAC4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_802FBAC4_9B2 = func_802FBAC4_ra0_0_8_0(ctx);
        r3 = regargs_result_802FBAC4_9B2;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802FBAC4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (r3 & 255);
}

loc_802A0128:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802A0134;
    }
}

loc_802A012C:
{
    r3 = 0;
    goto loc_802A0198;
}

loc_802A0134:
{
    r3 = 0;
    ctx->lr = 0x802A013Cu;
    if constexpr (KnownRegArgsCpuCall<0x8027BCACu>(&func_8027BCAC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_8027BCAC_D3D = func_8027BCAC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8027BCAC_D3D;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8027BCACu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_802A0140:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802A014C;
    }
}

loc_802A0144:
{
    r3 = 0;
    goto loc_802A0198;
}

loc_802A014C:
{
    r3 = r31;
    ctx->lr = 0x802A0154u;
    if constexpr (KnownRegArgsCpuCall<0x8027E184u>(&func_8027E184)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_8027E184_10BA = func_8027E184_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8027E184_10BA;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8027E184u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_802A0158:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802A0194;
    }
}

loc_802A015C:
{
    r3 = 0;
    goto loc_802A0198;
}

loc_802A0164:
{
    r0 = MemoryInline::FlatRead8((r31 + 2817));
    r0 = (r0 & 7);
}

loc_802A0170:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802A017C;
    }
}

loc_802A0174:
{
    r3 = 0;
    goto loc_802A0198;
}

loc_802A017C:
{
    r3 = r31;
    // inline leaf 0x8027D79C (5 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 616));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x8027D79C
}

loc_802A0188:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802A0194;
    }
}

loc_802A018C:
{
    r3 = 0;
    goto loc_802A0198;
}

loc_802A0194:
{
    r3 = 1;
}

loc_802A0198:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802A00F0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802A00F0_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000201B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802A00F0 func_802A00F0 preserves=true fpr_mask=0x00000000
