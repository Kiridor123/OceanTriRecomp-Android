#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802232BC(CpuContext* ctx);
extern "C" uint64_t func_802232BC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802693F8(CpuContext* ctx);
extern "C" uint64_t func_802693F8_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80269428(CpuContext* ctx);
extern "C" uint64_t func_80269428_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802694D8(CpuContext* ctx);
extern "C" uint64_t func_802694D8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80269608(CpuContext* ctx);
extern "C" uint64_t func_80269608_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80273704(CpuContext* ctx);
extern "C" uint64_t func_80273704_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802737A0(CpuContext* ctx);
extern "C" uint64_t func_802737A0_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_80273570_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80273570;

loc_80273570:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x8045747C (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    // end of inlined leaf 0x8045747C
    r27 = r3;
    r0 = MemoryInline::FlatRead16((r3 + 594));
}

loc_80273590:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802735AC;
    }
}

loc_80273594:
{
    r0 = MemoryInline::FlatRead16((r3 + 592));
}

loc_8027359C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802735AC;
    }
}

loc_802735A0:
{
    r0 = MemoryInline::FlatRead16((r3 + 596));
}

loc_802735A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802736EC;
    }
}

loc_802735AC:
{
    r4 = MemoryInline::FlatRead32((r13 + -17144));
    r4 = MemoryInline::FlatRead32((r4 + 16));
    r0 = MemoryInline::FlatRead8((r3 + 8));
    r0 = (r0 * 332);
    r3 = (r4 + r0);
    if constexpr (KnownRegArgsCpuCall<0x802693F8u>(&func_802693F8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802693F8_D7E = func_802693F8_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802693F8_D7E);
        r4 = static_cast<uint32_t>(regargs_result_802693F8_D7E >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802693F8u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r29 = r3;
    r28 = 0;
    r31 = 1;
}

loc_802735D0:
{
    r3 = (r28 & 255);
    // inline leaf 0x8027391C (8 guest instruction(s))
}

loc_inl1_0x8027391C:
{
    r0 = (r3 & 255);
}

loc_inl1_0x80273924:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl1_0x80273930;
    }
}

loc_inl1_0x80273928:
{
    r3 = 0;
    goto loc_inl1_cont_8027391C;
}

loc_inl1_0x80273930:
{
    r3 = (r13 + -27872);
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead8(r3_addr_2);
}

loc_inl1_cont_8027391C:
{
    // end of inlined leaf 0x8027391C
    r30 = r3;
    r4 = (r28 & 255);
    r26 = PPC_Slw(static_cast<uint32_t>(r31), static_cast<uint32_t>(r4));
    r5 = MemoryInline::FlatRead16((r27 + 594));
    r0 = (r5 & r26);
}

loc_802735F0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80273684;
    }
}

loc_802735F4:
{
}

loc_802735F8:
{
    if ((static_cast<uint32_t>(r29) != static_cast<uint32_t>(1))) {
        goto loc_802736B4;
    }
}

loc_802735FC:
{
    r3 = MemoryInline::FlatRead32((r27 + 316));
    r0 = (r4 * 356);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 284));
}

loc_80273610:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80273630;
    }
}

loc_80273614:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r24 = (r27 + r0);
    r25 = (r24 + 564);
    r3 = MemoryInline::FlatRead8((r27 + 8));
    r5 = MemoryInline::FlatRead32(r25);
    if constexpr (KnownRegArgsCpuCall<0x80269428u>(&func_80269428)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80269428_1656 = func_80269428_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80269428_1656);
        r4 = static_cast<uint32_t>(regargs_result_80269428_1656 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80269428u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    goto loc_80273648;
}

loc_80273630:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r24 = (r27 + r0);
    r25 = (r24 + 564);
    r3 = MemoryInline::FlatRead8((r27 + 8));
    r5 = MemoryInline::FlatRead32(r25);
    if constexpr (KnownRegArgsCpuCall<0x802694D8u>(&func_802694D8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802694D8_1A18 = func_802694D8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802694D8_1A18);
        r4 = static_cast<uint32_t>(regargs_result_802694D8_1A18 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802694D8u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_80273648:
{
}

loc_8027364C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802736B4;
    }
}

loc_80273650:
{
    r3 = MemoryInline::FlatRead16((r27 + 594));
    r0 = ~(r26 | r26);
    r0 = (r0 & 65535);
    r0 = (r3 & r0);
    MemoryInline::FlatWrite16((r27 + 594), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32(r25);
    MemoryInline::FlatWrite32((r24 + 536), r0);
    r4 = (r30 & 255);
}

loc_80273674:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(255))) {
        goto loc_802736B4;
    }
}

loc_80273678:
{
    r3 = r27;
    ctx->lr = 0x80273680u;
    if constexpr (KnownRegArgsCpuCall<0x802737A0u>(&func_802737A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802737A0_1F87 = func_802737A0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802737A0_1F87);
        r4 = static_cast<uint32_t>(regargs_result_802737A0_1F87 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802737A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    goto loc_802736B4;
}

loc_80273684:
{
    r0 = ~(r26 | r26);
    r0 = (r0 & 65535);
    r0 = (r5 & r0);
    MemoryInline::FlatWrite16((r27 + 594), static_cast<uint16_t>(r0));
    r4 = (r3 & 255);
}

loc_8027369C:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(255))) {
        goto loc_802736B4;
    }
}

loc_802736A0:
{
    r3 = r27;
    ctx->lr = 0x802736A8u;
    if constexpr (KnownRegArgsCpuCall<0x802737A0u>(&func_802737A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802737A0_23CE = func_802737A0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802737A0_23CE);
        r4 = static_cast<uint32_t>(regargs_result_802737A0_23CE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802737A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r3 = r27;
    r4 = (r30 & 255);
    ctx->lr = 0x802736B4u;
    if constexpr (KnownRegArgsCpuCall<0x802232BCu>(&func_802232BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802232BC_26C3 = func_802232BC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802232BC_26C3);
        r4 = static_cast<uint32_t>(regargs_result_802232BC_26C3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802232BCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_802736B4:
{
    r28 = (r28 + 1);
}

loc_802736BC:
{
    if ((static_cast<uint32_t>(r28) < static_cast<uint32_t>(7))) {
        goto loc_802735D0;
    }
}

loc_802736C0:
{
    r0 = MemoryInline::FlatRead16((r27 + 596));
}

loc_802736C8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802736EC;
    }
}

loc_802736CC:
{
}

loc_802736D0:
{
    if ((static_cast<uint32_t>(r29) != static_cast<uint32_t>(1))) {
        goto loc_802736EC;
    }
}

loc_802736D4:
{
    r3 = MemoryInline::FlatRead8((r27 + 8));
    r4 = (r27 + 476);
    r5 = (r27 + 512);
    ctx->lr = 0x802736E4u;
    if constexpr (KnownRegArgsCpuCall<0x80269608u>(&func_80269608)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        const auto regargs_result_80269608_2C7C = func_80269608_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80269608_2C7C);
        r4 = static_cast<uint32_t>(regargs_result_80269608_2C7C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x80269608u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    }
    r3 = r27;
    ctx->lr = 0x802736ECu;
    if constexpr (KnownRegArgsCpuCall<0x80273704u>(&func_80273704)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80273704_3006 = func_80273704_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80273704_3006);
        r4 = static_cast<uint32_t>(regargs_result_80273704_3006 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80273704u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_802736EC:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574C8 (9 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, true, false);
    // end of inlined leaf 0x804574C8
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80273570(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80273570_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000021FB gpr_write=0x000009FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80273570 func_80273570 preserves=true fpr_mask=0x00000000
