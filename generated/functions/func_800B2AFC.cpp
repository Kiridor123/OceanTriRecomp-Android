#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800A8C2C(CpuContext* ctx);
extern "C" uint32_t func_800A8C2C_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_800A8D1C(CpuContext* ctx);
extern "C" uint32_t func_800A8D1C_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint32_t func_800B2AFC_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r30_rot_0 = 0;
    uint32_t r30_rot_1 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x800B2AFCu);
    goto loc_800B2AFC;

loc_800B2AFC:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457480 (8 guest instruction(s))
    // end of inlined leaf 0x80457480
    r31 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800A8C5Cu>(ctx);
    r3 = ctx->gpr[3];
    r30 = r3;
    r3 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800AD294u>(ctx);
    r3 = ctx->gpr[3];
    r0 = (r3 & 65535);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_0 & -8);
    r3 = (r0 + r30);
    r29 = (r3 + 4);
    r3 = r31;
    ctx->lr = 0x800B2B3Cu;
    if constexpr (KnownRegArgsCpuCall<0x800A8C2Cu>(&func_800A8C2C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800A8C2C_804 = func_800A8C2C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800A8C2C_804;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x800A8C2Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r0 = (r3 & 65535);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_1 & -8);
    r3 = (r0 + r29);
    r29 = (r3 + 4);
    r3 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800ADEB4u>(ctx);
    r3 = ctx->gpr[3];
    r28 = r3;
    r3 = r31;
    ctx->lr = 0x800B2B60u;
    if constexpr (KnownRegArgsCpuCall<0x800A8D1Cu>(&func_800A8D1C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800A8D1C_B66 = func_800A8D1C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800A8D1C_B66;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x800A8D1Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r27 = r3;
    r3 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800AD294u>(ctx);
    r3 = ctx->gpr[3];
    r0 = (r3 & 65535);
    r30_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r30 = (r30_rot_0 & -4);
    r3 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800ADEB4u>(ctx);
    r3 = ctx->gpr[3];
    r26 = (r3 + r30);
    r3 = r31;
    ctx->lr = 0x800B2B88u;
    if constexpr (KnownRegArgsCpuCall<0x800A8C2Cu>(&func_800A8C2C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800A8C2C_F2F = func_800A8C2C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800A8C2C_F2F;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x800A8C2Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r0 = (r3 & 65535);
    r30_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r30 = (r30_rot_1 & -4);
    r3 = r31;
    ctx->lr = 0x800B2B98u;
    if constexpr (KnownRegArgsCpuCall<0x800A8D1Cu>(&func_800A8D1C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800A8D1C_11E6 = func_800A8D1C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800A8D1C_11E6;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x800A8D1Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r25 = (r3 + r30);
    r30 = 0;
    goto loc_800B2BBC;
}

loc_800B2BA4:
{
    MemoryInline::FlatWrite32(r28, r29);
    r0 = MemoryInline::FlatRead32(r26);
    r29 = (r29 + r0);
    r28 = (r28 + 4);
    r26 = (r26 + 4);
    r30 = (r30 + 1);
}

loc_800B2BBC:
{
    r3 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800AD294u>(ctx);
    r3 = ctx->gpr[3];
    r0 = (r3 & 65535);
}

loc_800B2BCC:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(r0))) {
        goto loc_800B2BA4;
    }
}

loc_800B2BD0:
{
    r30 = 0;
    goto loc_800B2BF0;
}

loc_800B2BD8:
{
    MemoryInline::FlatWrite32(r27, r29);
    r0 = MemoryInline::FlatRead32(r25);
    r29 = (r29 + r0);
    r27 = (r27 + 4);
    r25 = (r25 + 4);
    r30 = (r30 + 1);
}

loc_800B2BF0:
{
    r3 = r31;
    ctx->lr = 0x800B2BF8u;
    if constexpr (KnownRegArgsCpuCall<0x800A8C2Cu>(&func_800A8C2C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800A8C2C_1723 = func_800A8C2C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800A8C2C_1723;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x800A8C2Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r0 = (r3 & 65535);
}

loc_800B2C00:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(r0))) {
        goto loc_800B2BD8;
    }
}

loc_800B2C04:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574CC (8 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -28), 0, 36u, true, false);
    // end of inlined leaf 0x804574CC
    r0 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[11] = r11;
    return r3;
}

}

extern "C" void func_800B2AFC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_800B2AFC_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000B gpr_write=0x0000080B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800B2AFC func_800B2AFC preserves=true fpr_mask=0x00000000
