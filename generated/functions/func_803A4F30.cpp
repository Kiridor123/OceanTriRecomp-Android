#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800CEF7C(CpuContext* ctx);
extern "C" uint32_t func_800CEF7C_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_803A4F30_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;

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

    goto loc_803A4F30;

loc_803A4F30:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    r29 = (r3 + 21104);
    r3 = MemoryInline::FlatRead8((r29 + 6));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_803A4F60:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_803A4F6C;
    }
}

loc_803A4F64:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite8((r29 + 6), static_cast<uint8_t>(r0));
}

loc_803A4F6C:
{
    r30 = 0;
}

loc_803A4F70:
{
    r3 = MemoryInline::FlatRead16((r29 + 4));
    // inline leaf 0x800CEF7C (18 guest instruction(s))
}

loc_inl0_0x800CEF7C:
{
    r0 = (r3 & 65535);
}

loc_inl0_0x800CEF84:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x800CEF8C;
    }
}

loc_inl0_0x800CEF88:
{
    r0 = 1;
}

loc_inl0_0x800CEF8C:
{
    r5 = (r0 * 176);
    r3 = 11337728;
    r0 = (r3 + 30009);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r5)) >> 32));
    r0 = (r5 - r3);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_2 & 2147483647);
    r0 = (r0 + r3);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_2 & 131071);
    r3 = 65536;
    r0 = (r3 + -173);
    r0 = (r4 * r0);
    r0 = (r5 - r0);
    r3 = (r0 & 65535);
}

loc_inl0_cont_800CEF7C:
{
    // end of inlined leaf 0x800CEF7C
    MemoryInline::FlatWrite16((r29 + 4), static_cast<uint16_t>(r3));
    r30 = (r30 + 1);
}

loc_803A4F84:
{
    if ((static_cast<uint32_t>(r30) < static_cast<uint32_t>(2))) {
        goto loc_803A4F70;
    }
}

loc_803A4F88:
{
    r30 = 0;
}

loc_803A4F8C:
{
    r28 = 0;
    r0 = (r30 & 65535);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & -2);
    r31 = (r29 + r0);
}

loc_803A4F9C:
{
    r3 = MemoryInline::FlatRead16((r31 + 16));
    if constexpr (KnownRegArgsCpuCall<0x800CEF7Cu>(&func_800CEF7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        const auto regargs_result_800CEF7C_CE9 = func_800CEF7C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800CEF7C_CE9;
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x800CEF7Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    MemoryInline::FlatWrite16((r31 + 16), static_cast<uint16_t>(r3));
    r28 = (r28 + 1);
}

loc_803A4FB0:
{
    if ((static_cast<uint32_t>(r28) < static_cast<uint32_t>(50))) {
        goto loc_803A4F9C;
    }
}

loc_803A4FB4:
{
    r30 = (r30 + 1);
}

loc_803A4FBC:
{
    if ((static_cast<uint32_t>(r30) < static_cast<uint32_t>(4))) {
        goto loc_803A4F8C;
    }
}

loc_803A4FC0:
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

extern "C" void func_803A4F30(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803A4F30_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000203B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803A4F30 func_803A4F30 preserves=true fpr_mask=0x00000000
