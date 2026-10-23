#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8029F68C(CpuContext* ctx);
extern "C" uint64_t func_8029F68C_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8033AE10(CpuContext* ctx);
extern "C" uint64_t func_8033AE10_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8033B32C(CpuContext* ctx);
extern "C" uint64_t func_8033B32C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80349B68_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
    uint32_t r4_addr_6 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80349B68;

loc_80349B68:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457478 (10 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, false, true);
    // end of inlined leaf 0x80457478
    r29 = r3;
    r30 = r4;
    r25 = 0;
    r31 = 0;
    r4 = MemoryInline::FlatRead8((r3 + 2));
    r0 = MemoryInline::FlatRead8((r3 + 4));
    r24 = (r4 * r0);
    r23 = 0;
    r27 = 1;
    r28 = 0;
}

loc_80349BA4:
{
    r3 = (r23 & 65535);
    r4 = 0;
    ctx->lr = 0x80349BB0u;
    if constexpr (KnownRegArgsCpuCall<0x8033AE10u>(&func_8033AE10)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8033AE10_98C = func_8033AE10_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8033AE10_98C);
        r4 = static_cast<uint32_t>(regargs_result_8033AE10_98C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8033AE10u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r26 = r3;
    r4 = 0;
    ctx->lr = 0x80349BBCu;
    if constexpr (KnownRegArgsCpuCall<0x8033B32Cu>(&func_8033B32C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8033B32C_CAA = func_8033B32C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8033B32C_CAA);
        r4 = static_cast<uint32_t>(regargs_result_8033B32C_CAA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8033B32Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_80349BC0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80349C1C;
    }
}

loc_80349BC4:
{
}

loc_80349BC8:
{
    if ((static_cast<int32_t>(r24) > static_cast<int32_t>(r25))) {
        goto loc_80349C18;
    }
}

loc_80349BCC:
{
    r3 = (r25 - r24);
    r0 = MemoryInline::FlatRead8((r29 + 5));
}

loc_80349BD8:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r0))) {
        goto loc_80349C18;
    }
}

loc_80349BDC:
{
    MemoryInline::FlatWrite8((r30 + 2), static_cast<uint8_t>(r27));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r23)));
    MemoryInline::FlatWrite16((r30 + 6), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead16((r26 + 2));
    // inline leaf 0x8029F68C (11 guest instruction(s))
}

loc_inl1_0x8029F68C:
{
    r4 = 0x806B0000u;
    r4 = (r4 + -4808);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = (r3 & 65535);
}

loc_inl1_0x8029F6A0:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(747))) {
        goto loc_inl1_0x8029F6A8;
    }
}

loc_inl1_0x8029F6A4:
{
    r3 = 0;
}

loc_inl1_0x8029F6A8:
{
    r0 = (r3 & 65535);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r4_addr_2 = (r4 + r0);
    r3 = MemoryInline::FlatRead32(r4_addr_2);
}

loc_inl1_cont_8029F68C:
{
    // end of inlined leaf 0x8029F68C
    MemoryInline::FlatWrite32((r30 + 8), r3);
    r0 = MemoryInline::FlatRead8((r29 + 3));
    r0 = (r0 - r31);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_3 & 134217727);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::FlatWrite8((r30 + 1), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r30 + 12), r28);
    r30 = (r30 + 24);
    r31 = (r31 + 1);
}

loc_80349C18:
{
    r25 = (r25 + 1);
}

loc_80349C1C:
{
    r23 = (r23 + 1);
}

loc_80349C24:
{
    if ((static_cast<int32_t>(r23) < static_cast<int32_t>(131))) {
        goto loc_80349BA4;
    }
}

loc_80349C28:
{
}

loc_80349C2C:
{
    if ((static_cast<int32_t>(r25) != static_cast<int32_t>(0))) {
        goto loc_80349C58;
    }
}

loc_80349C30:
{
    r28 = 0;
    MemoryInline::FlatWrite8((r30 + 2), static_cast<uint8_t>(r28));
    MemoryInline::FlatWrite16((r30 + 6), static_cast<uint16_t>(r28));
    r3 = 0;
    // inline leaf 0x8029F68C (11 guest instruction(s))
}

loc_inl2_0x8029F68C:
{
    r4 = 0x806B0000u;
    r4 = (r4 + -4808);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = (r3 & 65535);
}

loc_inl2_0x8029F6A0:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(747))) {
        goto loc_inl2_0x8029F6A8;
    }
}

loc_inl2_0x8029F6A4:
{
    r3 = 0;
}

loc_inl2_0x8029F6A8:
{
    r0 = (r3 & 65535);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r4_addr_5 = (r4 + r0);
    r3 = MemoryInline::FlatRead32(r4_addr_5);
}

loc_inl2_cont_8029F68C:
{
    // end of inlined leaf 0x8029F68C
    MemoryInline::FlatWrite32((r30 + 8), r3);
    MemoryInline::FlatWrite8((r30 + 1), static_cast<uint8_t>(r28));
    MemoryInline::FlatWrite32((r30 + 12), r28);
    r30 = (r30 + 24);
    r31 = (r31 + 1);
}

loc_80349C58:
{
    r28 = 0;
    goto loc_80349C84;
}

loc_80349C60:
{
    MemoryInline::FlatWrite8((r30 + 2), static_cast<uint8_t>(r28));
    MemoryInline::FlatWrite16((r30 + 6), static_cast<uint16_t>(r28));
    r3 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8029F68Cu>(&func_8029F68C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8029F68C_1DF1 = func_8029F68C_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8029F68C_1DF1);
        r4 = static_cast<uint32_t>(regargs_result_8029F68C_1DF1 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8029F68Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    MemoryInline::FlatWrite32((r30 + 8), r3);
    MemoryInline::FlatWrite8((r30 + 1), static_cast<uint8_t>(r28));
    MemoryInline::FlatWrite32((r30 + 12), r28);
    r30 = (r30 + 24);
    r31 = (r31 + 1);
}

loc_80349C84:
{
    r0 = MemoryInline::FlatRead8((r29 + 5));
}

loc_80349C8C:
{
    if ((static_cast<int32_t>(r31) < static_cast<int32_t>(r0))) {
        goto loc_80349C60;
    }
}

loc_80349C90:
{
    r11 = (r1 + 48);
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80349B68(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80349B68_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000201B gpr_write=0x0000083B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80349B68 func_80349B68 preserves=true fpr_mask=0x00000000
