#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803B1F10(CpuContext* ctx);
extern "C" uint64_t func_803B1F10_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8043C9A0_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r30_addr_0 = 0;
    uint32_t r30_addr_1 = 0;
    uint32_t r30_addr_2 = 0;
    uint32_t r30_addr_3 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8043C9A0;

loc_8043C9A0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r3 = (r3 & 255);
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_0 & 134217727);
    r0 = (r0 & 255);
    r29 = 0;
    r31 = 0;
    r28 = 0;
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_0 & -2);
    r3 = 0x80600000u;
    r0 = (r3 + -32024);
    r30 = (r0 + r4);
}

loc_8043C9EC:
{
    r0 = (r29 + 9000);
    r3 = (r0 & 65535);
    ctx->lr = 0x8043C9F8u;
    if constexpr (KnownRegArgsCpuCall<0x803B1F10u>(&func_803B1F10)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803B1F10_777 = func_803B1F10_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803B1F10_777);
        r4 = static_cast<uint32_t>(regargs_result_803B1F10_777 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x803B1F10u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_8043C9FC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8043CA70;
    }
}

loc_8043CA00:
{
    r4 = MemoryInline::FlatRead8((r3 + 138));
    r0 = (r4 + -1);
    r0 = (r0 & 255);
    r4 = MemoryInline::FlatRead32((r13 + -16636));
    r4_addr_2 = (r4 + r31);
    MemoryInline::FlatWrite8(r4_addr_2, static_cast<uint8_t>(r0));
    r5 = MemoryInline::FlatRead8((r3 + 139));
    r0 = MemoryInline::FlatRead32((r13 + -16636));
    r4 = (r0 + r31);
    MemoryInline::FlatWrite8((r4 + 1), static_cast<uint8_t>(r5));
    r5 = MemoryInline::FlatRead8((r3 + 788));
    r0 = MemoryInline::FlatRead32((r13 + -16636));
    r4 = (r0 + r31);
    MemoryInline::FlatWrite8((r4 + 2), static_cast<uint8_t>(r5));
    r0 = MemoryInline::FlatRead32((r13 + -16636));
    r4 = (r0 + r31);
    MemoryInline::FlatWrite32((r4 + 4), r3);
    r5 = (r3 + 46);
    r0 = MemoryInline::FlatRead32((r13 + -16636));
    r4 = (r0 + r31);
    MemoryInline::FlatWrite32((r4 + 8), r5);
    r4 = MemoryInline::FlatRead16((r3 + 314));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = MemoryInline::FlatRead32((r13 + -16636));
    r3 = (r0 + r31);
    MemoryInline::FlatWrite32((r3 + 16), r4);
    r30_addr_2 = (r30 + r28);
    r4 = MemoryInline::FlatRead16(r30_addr_2);
    r0 = MemoryInline::FlatRead32((r13 + -16636));
    r3 = (r0 + r31);
    MemoryInline::FlatWrite32((r3 + 20), r4);
}

loc_8043CA70:
{
    r31 = (r31 + 24);
    r28 = (r28 + 4);
    r29 = (r29 + 1);
}

loc_8043CA80:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(10))) {
        goto loc_8043C9EC;
    }
}

loc_8043CA84:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8043C9A0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8043C9A0_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000207B gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8043C9A0 func_8043C9A0 preserves=true fpr_mask=0x00000000
