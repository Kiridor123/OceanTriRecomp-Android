#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80273570(CpuContext* ctx);
extern "C" uint64_t func_80273570_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80273814(CpuContext* ctx);
extern "C" uint64_t func_80273814_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8027394C(CpuContext* ctx);
extern "C" uint64_t func_8027394C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_803776D8_ra188_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r7, uint32_t arg_r8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->gpr[7] = arg_r7;
    ctx->gpr[8] = arg_r8;

    goto loc_803776D8;

loc_803776D8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r0 = MemoryInline::FlatRead8((r3 + 8));
    r5 = (r0 * 304);
    r4 = 0x806C0000u;
    r0 = (r4 + 1984);
    r31 = (r0 + r5);
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 38), 0, 14u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r31 + 39));
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 28), 0, 583u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r3 + 28), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r31 + 38));
    MemoryInline::WriteResolved8(guest_range_1, 580u, (r3 + 608), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 6u, (r31 + 44));
    r0 = (r0 & -16777216);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_0 & 255);
    MemoryInline::WriteResolved8(guest_range_1, 572u, (r3 + 600), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 6u, (r31 + 44));
    r0 = (r0 & 16711680);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_1 & 65535);
    r0 = (r0 & 255);
    MemoryInline::WriteResolved8(guest_range_1, 573u, (r3 + 601), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 6u, (r31 + 44));
    r0 = (r0 & 65280);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r0 = (r0_rot_2 & 16777215);
    r0 = (r0 & 255);
    MemoryInline::WriteResolved8(guest_range_1, 574u, (r3 + 602), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 6u, (r31 + 44));
    r0 = (r0 & 255);
    MemoryInline::WriteResolved8(guest_range_1, 575u, (r3 + 603), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 10u, (r31 + 48));
    r0 = (r0 & -16777216);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_3 & 255);
    MemoryInline::WriteResolved8(guest_range_1, 576u, (r3 + 604), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 10u, (r31 + 48));
    r0 = (r0 & 16711680);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_4 & 65535);
    r0 = (r0 & 255);
    MemoryInline::WriteResolved8(guest_range_1, 577u, (r3 + 605), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 10u, (r31 + 48));
    r0 = (r0 & 65280);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r0 = (r0_rot_5 & 16777215);
    r0 = (r0 & 255);
    MemoryInline::WriteResolved8(guest_range_1, 578u, (r3 + 606), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 10u, (r31 + 48));
    r0 = (r0 & 255);
    MemoryInline::WriteResolved8(guest_range_1, 579u, (r3 + 607), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r31 + 40));
    MemoryInline::WriteResolved8(guest_range_1, 582u, (r3 + 610), static_cast<uint8_t>(r0));
    r4 = (r31 + 52);
    r5 = (r31 + 64);
    r6 = (r31 + 76);
    ctx->lr = 0x803777B4u;
    if constexpr (KnownRegArgsCpuCall<0x80273814u>(&func_80273814)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80273814_12F3 = func_80273814_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80273814_12F3);
        r4 = static_cast<uint32_t>(regargs_result_80273814_12F3 >> 32);
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
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x80273814u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r3 = r30;
    r4 = (r31 + 100);
    ctx->lr = 0x803777C0u;
    if constexpr (KnownRegArgsCpuCall<0x8027394Cu>(&func_8027394C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8027394C_16A9 = func_8027394C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027394C_16A9);
        r4 = static_cast<uint32_t>(regargs_result_8027394C_16A9 >> 32);
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
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8027394Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r3 = r30;
    r4 = (r31 + 88);
    ctx->lr = 0x803777CCu;
    if constexpr (KnownRegArgsCpuCall<0x8027394Cu>(&func_8027394C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8027394C_1A5E = func_8027394C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027394C_1A5E);
        r4 = static_cast<uint32_t>(regargs_result_8027394C_1A5E >> 32);
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
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8027394Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r3 = r30;
    r4 = (r31 + 124);
    ctx->lr = 0x803777D8u;
    if constexpr (KnownRegArgsCpuCall<0x8027394Cu>(&func_8027394C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8027394C_1E14 = func_8027394C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027394C_1E14);
        r4 = static_cast<uint32_t>(regargs_result_8027394C_1E14 >> 32);
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
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8027394Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r3 = r30;
    r4 = (r31 + 112);
    ctx->lr = 0x803777E4u;
    if constexpr (KnownRegArgsCpuCall<0x8027394Cu>(&func_8027394C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8027394C_21CA = func_8027394C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027394C_21CA);
        r4 = static_cast<uint32_t>(regargs_result_8027394C_21CA >> 32);
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
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8027394Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r3 = r30;
    r4 = (r31 + 136);
    ctx->lr = 0x803777F0u;
    if constexpr (KnownRegArgsCpuCall<0x8027394Cu>(&func_8027394C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8027394C_2580 = func_8027394C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027394C_2580);
        r4 = static_cast<uint32_t>(regargs_result_8027394C_2580 >> 32);
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
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8027394Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r3 = r30;
    r4 = (r31 + 148);
    ctx->lr = 0x803777FCu;
    if constexpr (KnownRegArgsCpuCall<0x8027394Cu>(&func_8027394C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8027394C_2936 = func_8027394C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027394C_2936);
        r4 = static_cast<uint32_t>(regargs_result_8027394C_2936 >> 32);
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
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8027394Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r3 = r30;
    r4 = 5;
    r5 = MemoryInline::FlatRead8((r30 + 608));
    // inline leaf 0x802739FC (22 guest instruction(s))
}

loc_inl0_0x802739FC:
{
    r6 = (r4 & 255);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r4 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 536));
}

loc_inl0_0x80273A10:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(r0))) {
        goto loc_inl0_0x80273A34;
    }
}

loc_inl0_0x80273A14:
{
    r4 = MemoryInline::FlatRead16((r3 + 594));
    r0 = 1;
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r6));
    r0 = ~(r0 | r0);
    r0 = (r0 & 65535);
    r0 = (r4 & r0);
    MemoryInline::FlatWrite16((r3 + 594), static_cast<uint16_t>(r0));
    goto loc_inl0_cont_802739FC;
}

loc_inl0_0x80273A34:
{
    MemoryInline::FlatWrite32((r4 + 564), r5);
    r4 = MemoryInline::FlatRead16((r3 + 594));
    r0 = 1;
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r6));
    r0 = (r0 & 65535);
    r0 = (r4 | r0);
    MemoryInline::FlatWrite16((r3 + 594), static_cast<uint16_t>(r0));
}

loc_inl0_cont_802739FC:
{
    // end of inlined leaf 0x802739FC
    r3 = r30;
    ctx->lr = 0x80377814u;
    if constexpr (KnownRegArgsCpuCall<0x80273570u>(&func_80273570)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80273570_31AF = func_80273570_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80273570_31AF);
        r4 = static_cast<uint32_t>(regargs_result_80273570_31AF >> 32);
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
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x80273570u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803776D8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803776D8_ra188_0_18_0(ctx, ctx->gpr[3], ctx->gpr[7], ctx->gpr[8]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000218A gpr_write=0x000009FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803776D8 func_803776D8 preserves=true fpr_mask=0x00000000
