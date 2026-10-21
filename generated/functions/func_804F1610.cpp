#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804D1330(CpuContext* ctx);
extern "C" uint32_t func_804D1330_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_804FD820(CpuContext* ctx);
extern "C" uint64_t func_804FD820_ra0_0_18_0(CpuContext*);
extern "C" void func_805004F0(CpuContext* ctx);
extern "C" uint32_t func_805004F0_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_80500550(CpuContext* ctx);
extern "C" uint32_t func_80500550_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_805005B0(CpuContext* ctx);
extern "C" uint64_t func_805005B0_ra0_0_18_0(CpuContext*);

extern "C" uint64_t func_804F1610_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint32_t r25_rot_0 = 0;
    uint32_t r27_addr_0 = 0;
    uint32_t r27_addr_1 = 0;
    uint32_t r27_addr_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r22 = ctx->gpr[22];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x804F1610u);
    goto loc_804F1610;

loc_804F1610:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457474 (11 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, false, true);
    // end of inlined leaf 0x80457474
    r27 = 0x80760000u;
    r25_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r25 = (r25_rot_0 & -4);
    r27 = (r27 + -10352);
    r27_addr_0 = (r27 + r25);
    r30 = MemoryInline::FlatRead32(r27_addr_0);
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x804D12F0
    r29 = MemoryInline::FlatRead8((r30 + 2253));
    r31 = r3;
    r28 = MemoryInline::FlatRead8((r30 + 2241));
    ctx->lr = 0x804F1648u;
    if constexpr (KnownRegArgsCpuCall<0x804FD820u>(&func_804FD820)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_804FD820_B59 = func_804FD820_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_804FD820_B59);
        r4 = static_cast<uint32_t>(regargs_result_804FD820_B59 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804FD820u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r26 = r3;
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x804D12F0
    r4 = MemoryInline::FlatRead8((r30 + 352));
    r0 = MemoryInline::FlatRead8((r30 + 353));
    r0 = (r0 - r4);
    r24 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r24) >= static_cast<int32_t>(0))) {
        goto loc_804F1670;
    }
}

loc_804F1664:
{
    r0 = MemoryInline::FlatRead32((r30 + 360));
    r0 = (r24 + r0);
    r24 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_804F1670:
{
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl3_0x804D1330:
{
}

loc_inl3_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl3_0x804D1344;
    }
}

loc_inl3_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl3_0x804D1348;
}

loc_inl3_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl3_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_2 & 1);
}

loc_inl3_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
    r27_addr_1 = (r27 + r25);
    r23 = MemoryInline::FlatRead32(r27_addr_1);
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_3 & 1);
    // end of inlined leaf 0x804D12F0
    r22 = MemoryInline::FlatRead32((r23 + 2236));
    r23 = MemoryInline::FlatRead8((r23 + 2243));
    if constexpr (KnownRegArgsCpuCall<0x804D1330u>(&func_804D1330)) {
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        const auto regargs_result_804D1330_1525 = func_804D1330_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_804D1330_1525;
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804D1330u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_804F168C:
{
    if ((static_cast<int32_t>(r22) == static_cast<int32_t>(-1))) {
        goto loc_804F1698;
    }
}

loc_804F1690:
{
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r23)));
    ctx->lr = 0x804F1698u;
    if constexpr (KnownRegArgsCpuCall<0x805004F0u>(&func_805004F0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        const auto regargs_result_805004F0_185A = func_805004F0_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_805004F0_185A;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x805004F0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_804F1698:
{
    r27_addr_2 = (r27 + r25);
    r22 = MemoryInline::FlatRead32(r27_addr_2);
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_4 & 1);
    // end of inlined leaf 0x804D12F0
    r23 = MemoryInline::FlatRead32((r22 + 2236));
    r22 = MemoryInline::FlatRead8((r22 + 2243));
    if constexpr (KnownRegArgsCpuCall<0x804D1330u>(&func_804D1330)) {
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        const auto regargs_result_804D1330_1CE5 = func_804D1330_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_804D1330_1CE5;
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804D1330u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_804F16B0:
{
    if ((static_cast<int32_t>(r23) != static_cast<int32_t>(-1))) {
        goto loc_804F16BC;
    }
}

loc_804F16B4:
{
    r27 = 0;
    goto loc_804F16C8;
}

loc_804F16BC:
{
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r22)));
    ctx->lr = 0x804F16C4u;
    if constexpr (KnownRegArgsCpuCall<0x80500550u>(&func_80500550)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        const auto regargs_result_80500550_2051 = func_80500550_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80500550_2051;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80500550u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r27 = r3;
}

loc_804F16C8:
{
    r22 = MemoryInline::FlatRead8((r30 + 2255));
    ctx->lr = 0x804F16D0u;
    if constexpr (KnownRegArgsCpuCall<0x805005B0u>(&func_805005B0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_805005B0_237B = func_805005B0_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_805005B0_237B);
        r4 = static_cast<uint32_t>(regargs_result_805005B0_237B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x805005B0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r30 = r3;
    r3 = r31;
    if constexpr (KnownRegArgsCpuCall<0x804D1330u>(&func_804D1330)) {
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        const auto regargs_result_804D1330_2696 = func_804D1330_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_804D1330_2696;
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804D1330u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_804F16E0:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_804F1724;
    }
}

loc_804F16E4:
{
    r0 = (r27 & 65535);
}

loc_804F16EC:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(3))) {
        goto loc_804F1724;
    }
}

loc_804F16F0:
{
    r4 = (r26 & 255);
}

loc_804F16F8:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(10))) {
        goto loc_804F1724;
    }
}

loc_804F16FC:
{
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(1));
    r3 = (r3_rot_5 & 510);
    r0 = (r3 + 2);
}

loc_804F1708:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r0))) {
        goto loc_804F1724;
    }
}

loc_804F170C:
{
}

loc_804F1710:
{
    if ((static_cast<uint32_t>(r28) == static_cast<uint32_t>(255))) {
        goto loc_804F1724;
    }
}

loc_804F1714:
{
}

loc_804F1718:
{
    if ((static_cast<int32_t>(r24) >= static_cast<int32_t>(21))) {
        goto loc_804F1724;
    }
}

loc_804F171C:
{
}

loc_804F1720:
{
    if ((static_cast<uint32_t>(r22) < static_cast<uint32_t>(1))) {
        goto loc_804F172C;
    }
}

loc_804F1724:
{
    r3 = 1;
    goto loc_804F1730;
}

loc_804F172C:
{
    r3 = 0;
}

loc_804F1730:
{
    r11 = (r1 + 48);
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

extern "C" void func_804F1610(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804F1610_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000083B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804F1610 func_804F1610 preserves=true fpr_mask=0x00000000
