#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80456C40(CpuContext* ctx);
extern "C" uint64_t func_80456C40_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_80517AB8_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r10_addr_0 = 0;
    uint32_t r10_addr_1 = 0;
    uint32_t r10_addr_2 = 0;
    uint32_t r10_addr_3 = 0;
    uint32_t r10_addr_4 = 0;
    uint32_t r10_addr_5 = 0;
    uint32_t r10_addr_6 = 0;
    uint32_t r10_addr_7 = 0;
    uint32_t r31_addr_0 = 0;
    uint32_t r31_addr_1 = 0;
    uint32_t r31_addr_10 = 0;
    uint32_t r31_addr_2 = 0;
    uint32_t r31_addr_3 = 0;
    uint32_t r31_addr_4 = 0;
    uint32_t r31_addr_5 = 0;
    uint32_t r31_addr_6 = 0;
    uint32_t r31_addr_7 = 0;
    uint32_t r31_addr_8 = 0;
    uint32_t r31_addr_9 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r6_addr_3 = 0;
    uint32_t r6_addr_4 = 0;
    uint32_t r6_addr_5 = 0;
    uint32_t r6_addr_6 = 0;
    uint32_t r6_addr_7 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
    uint32_t r8_rot_4 = 0;
    uint32_t r8_rot_5 = 0;
    uint32_t r8_rot_6 = 0;
    uint32_t r8_rot_7 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
    uint32_t r9_rot_3 = 0;
    uint32_t r9_rot_4 = 0;
    uint32_t r9_rot_5 = 0;
    uint32_t r9_rot_6 = 0;
    uint32_t r9_rot_7 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    goto loc_80517AB8;

loc_80517AB8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r28 = r3;
    r29 = r4;
    r31 = 0x80630000u;
    r30 = r28;
    r3 = r29;
    r31 = (r31 + 5112);
    if constexpr (KnownRegArgsCpuCall<0x80456C40u>(&func_80456C40)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80456C40_B59 = func_80456C40_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80456C40_B59);
        r4 = static_cast<uint32_t>(regargs_result_80456C40_B59 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80456C40u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r4 = (r3 + 2);
    r0 = 3;
    r4 = PPC_Divwu(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_80517AF8:
{
    r27 = 0;
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_80517C3C;
    }
}

loc_80517B00:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(31));
    r0 = (r0_rot_1 & 2147483647);
}

loc_80517B04:
{
    r27 = (r4 * 3);
    ctr = r0;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80517BD4;
    }
}

loc_80517B10:
{
    r12 = MemoryInline::FlatRead8(r29);
    r10 = MemoryInline::FlatRead8((r29 + 1));
    r11 = (static_cast<int32_t>(static_cast<int8_t>(r12)));
    r9_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(4));
    r9 = (r9_rot_2 & 48);
    r11 = (static_cast<int32_t>(r11) >> 2);
    r7 = MemoryInline::FlatRead8((r29 + 2));
    r31_addr_2 = (r31 + r11);
    r11 = MemoryInline::FlatRead8(r31_addr_2);
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r10)));
    r8_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(2));
    r8 = (r8_rot_2 & 60);
    r9 = (r31 + r9);
    guest_range_0 = MemoryInline::ResolveRangeHost(r30, 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, r30, static_cast<uint8_t>(r11));
    r10 = (static_cast<int32_t>(r5) >> 4);
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r7)));
    r0 = (r7 & 63);
    r10_addr_2 = (r10 + r9);
    r9 = MemoryInline::FlatRead8(r10_addr_2);
    r5 = (r31 + r8);
    r12 = MemoryInline::FlatRead8((r29 + 3));
    r6 = (static_cast<int32_t>(r6) >> 6);
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r30 + 1), static_cast<uint8_t>(r9));
    r11 = (static_cast<int32_t>(static_cast<int8_t>(r12)));
    r10 = MemoryInline::FlatRead8((r29 + 4));
    r6_addr_2 = (r6 + r5);
    r5 = MemoryInline::FlatRead8(r6_addr_2);
    r9_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(4));
    r9 = (r9_rot_3 & 48);
    r7 = MemoryInline::FlatRead8((r29 + 5));
    r11 = (static_cast<int32_t>(r11) >> 2);
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r30 + 2), static_cast<uint8_t>(r5));
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r10)));
    r8_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(2));
    r8 = (r8_rot_3 & 60);
    r9 = (r31 + r9);
    r31_addr_3 = (r31 + r0);
    r0 = MemoryInline::FlatRead8(r31_addr_3);
    r10 = (static_cast<int32_t>(r5) >> 4);
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r7)));
    r5 = (r31 + r8);
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r30 + 3), static_cast<uint8_t>(r0));
    r6 = (static_cast<int32_t>(r6) >> 6);
    r0 = (r7 & 63);
    r29 = (r29 + 6);
    r31_addr_4 = (r31 + r11);
    r11 = MemoryInline::FlatRead8(r31_addr_4);
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r30 + 4), static_cast<uint8_t>(r11));
    r10_addr_3 = (r10 + r9);
    r9 = MemoryInline::FlatRead8(r10_addr_3);
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r30 + 5), static_cast<uint8_t>(r9));
    r6_addr_3 = (r6 + r5);
    r5 = MemoryInline::FlatRead8(r6_addr_3);
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r30 + 6), static_cast<uint8_t>(r5));
    r31_addr_5 = (r31 + r0);
    r0 = MemoryInline::FlatRead8(r31_addr_5);
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r30 + 7), static_cast<uint8_t>(r0));
    r30 = (r30 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80517B10;
    }
}

loc_80517BCC:
{
    r4 = (r4 & 1);
}

loc_80517BD0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80517C3C;
    }
}

loc_80517BD4:
{
    ctr = r4;
}

loc_80517BD8:
{
    r12 = MemoryInline::FlatRead8(r29);
    r10 = MemoryInline::FlatRead8((r29 + 1));
    r11 = (static_cast<int32_t>(static_cast<int8_t>(r12)));
    r7 = MemoryInline::FlatRead8((r29 + 2));
    r11 = (static_cast<int32_t>(r11) >> 2);
    r9_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(4));
    r9 = (r9_rot_6 & 48);
    r31_addr_8 = (r31 + r11);
    r11 = MemoryInline::FlatRead8(r31_addr_8);
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r10)));
    r8_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(2));
    r8 = (r8_rot_6 & 60);
    r9 = (r31 + r9);
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r11));
    r10 = (static_cast<int32_t>(r5) >> 4);
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r7)));
    r5 = (r31 + r8);
    r10_addr_6 = (r10 + r9);
    r9 = MemoryInline::FlatRead8(r10_addr_6);
    r6 = (static_cast<int32_t>(r6) >> 6);
    r0 = (r7 & 63);
    r29 = (r29 + 3);
    MemoryInline::FlatWrite8((r30 + 1), static_cast<uint8_t>(r9));
    r6_addr_6 = (r6 + r5);
    r5 = MemoryInline::FlatRead8(r6_addr_6);
    MemoryInline::FlatWrite8((r30 + 2), static_cast<uint8_t>(r5));
    r31_addr_9 = (r31 + r0);
    r0 = MemoryInline::FlatRead8(r31_addr_9);
    MemoryInline::FlatWrite8((r30 + 3), static_cast<uint8_t>(r0));
    r30 = (r30 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80517BD8;
    }
}

loc_80517C3C:
{
    r0 = (r3 + 1);
}

loc_80517C44:
{
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(r0))) {
        goto loc_80517C54;
    }
}

loc_80517C48:
{
    r0 = 61;
    MemoryInline::FlatWrite8((r30 + -1), static_cast<uint8_t>(r0));
    goto loc_80517C6C;
}

loc_80517C54:
{
    r0 = (r3 + 2);
}

loc_80517C5C:
{
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(r0))) {
        goto loc_80517C6C;
    }
}

loc_80517C60:
{
    r0 = 61;
    MemoryInline::FlatWrite8((r30 + -2), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r30 + -1), static_cast<uint8_t>(r0));
}

loc_80517C6C:
{
    r0 = 0;
    r3 = r28;
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
    if constexpr (KnownRegArgsCpuCall<0x80456C40u>(&func_80456C40)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80456C40_2558 = func_80456C40_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80456C40_2558);
        r4 = static_cast<uint32_t>(regargs_result_80456C40_2558 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80456C40u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r11 = (r1 + 32);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80517AB8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80517AB8_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00001FFB gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80517AB8 func_80517AB8 preserves=true fpr_mask=0x00000000
