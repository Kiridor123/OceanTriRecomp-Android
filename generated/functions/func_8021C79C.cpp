#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8021C4BC(CpuContext* ctx);
extern "C" uint64_t func_8021C4BC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8021C5C0(CpuContext* ctx);
extern "C" uint32_t func_8021C5C0_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_8021C638(CpuContext* ctx);
extern "C" uint64_t func_8021C638_ra58_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8021C79C_ra38_1e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r4_rot_6 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;

    MKW_GUEST_ENTER(0x8021C79Cu);
    goto loc_8021C79C;

loc_8021C79C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -320), 0, 328u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -320), r1);
    r1 = (r1 + -320);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 324u, (r1 + 324), r0);
    r11 = (r1 + 320);
    // inline leaf 0x80457480 (8 guest instruction(s))
    // end of inlined leaf 0x80457480
    r25 = r3;
    r4 = 0x806B0000u;
    r4 = (r4 + -12348);
    r4 = MemoryInline::FlatRead32((r4 + 192));
}

loc_8021C7C4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8021C94C;
    }
}

loc_8021C7C8:
{
}

loc_8021C7CC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8021C94C;
    }
}

loc_8021C7D0:
{
    r0 = MemoryInline::FlatRead8((r3 + 2));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r4_addr_1 = (r4 + r0);
    r28 = MemoryInline::FlatRead32(r4_addr_1);
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 551), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    r3 = (r1 + 12);
    r4 = MemoryInline::FlatRead32(r28);
    r5 = (r1 + 8);
    ctx->lr = 0x8021C7F8u;
    if constexpr (KnownRegArgsCpuCall<0x8021C4BCu>(&func_8021C4BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8021C4BC_DAE = func_8021C4BC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8021C4BC_DAE);
        r4 = static_cast<uint32_t>(regargs_result_8021C4BC_DAE >> 32);
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
        InvokeDirectCpu<0x8021C4BCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r0 = (r3 & 65535);
}

loc_8021C800:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_8021C810;
    }
}

loc_8021C804:
{
    r0 = MemoryInline::FlatRead8((r25 + 551));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite8((r25 + 551), static_cast<uint8_t>(r0));
}

loc_8021C810:
{
    r0 = MemoryInline::FlatRead8((r1 + 8));
}

loc_8021C818:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8021C828;
    }
}

loc_8021C81C:
{
    r0 = MemoryInline::FlatRead8((r25 + 551));
    r0 = (r0 | 128);
    MemoryInline::FlatWrite8((r25 + 551), static_cast<uint8_t>(r0));
}

loc_8021C828:
{
    r27 = 0;
    r3 = MemoryInline::FlatRead32((r28 + 4));
    ctx->lr = 0x8021C834u;
    if constexpr (KnownRegArgsCpuCall<0x8021C5C0u>(&func_8021C5C0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        const auto regargs_result_8021C5C0_13EA = func_8021C5C0_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8021C5C0_13EA;
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
        InvokeDirectCpu<0x8021C5C0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = (r3 & 65535);
}

loc_8021C83C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_8021C850;
    }
}

loc_8021C840:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r25 + 546), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite16((r25 + 540), static_cast<uint16_t>(r3));
    r27 = 1;
}

loc_8021C850:
{
    r3 = 0x806B0000u;
    r3 = (r3 + -12348);
    r26 = MemoryInline::FlatRead16((r3 + 58));
    r29 = 0;
    goto loc_8021C874;
}

loc_8021C864:
{
    r3 = (r26 & 65535);
    // inline leaf 0x800CEF7C (18 guest instruction(s))
}

loc_inl1_0x800CEF7C:
{
    r0 = (r3 & 65535);
}

loc_inl1_0x800CEF84:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x800CEF8C;
    }
}

loc_inl1_0x800CEF88:
{
    r0 = 1;
}

loc_inl1_0x800CEF8C:
{
    r5 = (r0 * 176);
    r3 = 11337728;
    r0 = (r3 + 30009);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r5)) >> 32));
    r0 = (r5 - r3);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_3 & 2147483647);
    r0 = (r0 + r3);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_2 & 131071);
    r3 = 65536;
    r0 = (r3 + -173);
    r0 = (r4 * r0);
    r0 = (r5 - r0);
    r3 = (r0 & 65535);
}

loc_inl1_cont_800CEF7C:
{
    // end of inlined leaf 0x800CEF7C
    r26 = r3;
    r29 = (r29 + 1);
}

loc_8021C874:
{
    r3 = (r29 & 65535);
    r0 = MemoryInline::FlatRead8((r25 + 2));
}

loc_8021C880:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(r0))) {
        goto loc_8021C864;
    }
}

loc_8021C884:
{
    r3 = MemoryInline::FlatRead32((r28 + 8));
    r4 = (r1 + 24);
    ctx->lr = 0x8021C890u;
    if constexpr (KnownRegArgsCpuCall<0x8021C638u>(&func_8021C638)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8021C638_1D98 = func_8021C638_ra58_0_18_0(ctx, r3, r4, r6);
        r3 = static_cast<uint32_t>(regargs_result_8021C638_1D98);
        r4 = static_cast<uint32_t>(regargs_result_8021C638_1D98 >> 32);
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
        InvokeDirectCpu<0x8021C638u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r29 = r3;
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & -2);
    r30 = (r25 + r0);
    r31 = 0;
    goto loc_8021C940;
}

loc_8021C8A4:
{
    r0 = (r29 & 65535);
}

loc_8021C8AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8021C920;
    }
}

loc_8021C8B0:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r27)));
    r3 = (r25 + r0);
    MemoryInline::FlatWrite8((r3 + 546), static_cast<uint8_t>(r31));
    r3 = (r26 & 65535);
    // inline leaf 0x800CEF7C (18 guest instruction(s))
}

loc_inl2_0x800CEF7C:
{
    r0 = (r3 & 65535);
}

loc_inl2_0x800CEF84:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl2_0x800CEF8C;
    }
}

loc_inl2_0x800CEF88:
{
    r0 = 1;
}

loc_inl2_0x800CEF8C:
{
    r5 = (r0 * 176);
    r3 = 11337728;
    r0 = (r3 + 30009);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r5)) >> 32));
    r0 = (r5 - r3);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_6 & 2147483647);
    r0 = (r0 + r3);
    r4_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_4 & 131071);
    r3 = 65536;
    r0 = (r3 + -173);
    r0 = (r4 * r0);
    r0 = (r5 - r0);
    r3 = (r0 & 65535);
}

loc_inl2_cont_800CEF7C:
{
    // end of inlined leaf 0x800CEF7C
    r26 = r3;
    r3 = (r3 & 65535);
    r4 = (r29 & 65535);
    r0 = PPC_Divw(static_cast<int32_t>(r3), static_cast<int32_t>(r4));
    r0 = (r0 * r4);
    r0 = (r3 - r0);
    r5 = (r0 & 65535);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r0 = (r0_rot_7 & -2);
    r3 = (r1 + 24);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3);
    MemoryInline::FlatWrite16((r30 + 540), static_cast<uint16_t>(r0));
}

loc_8021C8F8:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(1))) {
        goto loc_8021C938;
    }
}

loc_8021C8FC:
{
    r5 = (r5 + 1);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r0 = (r0_rot_8 & -2);
    r4 = (r1 + 24);
    r4 = (r4 + r0);
    r0 = (128 - r5);
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r5 = (r5_rot_2 & -2);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r29 = (r29 + -1);
    goto loc_8021C938;
}

loc_8021C920:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r27)));
    r3 = (r25 + r0);
    MemoryInline::FlatWrite8((r3 + 546), static_cast<uint8_t>(r31));
    r3 = MemoryInline::FlatRead32((r28 + 8));
    r0 = MemoryInline::FlatRead16((r3 + 8));
    MemoryInline::FlatWrite16((r30 + 540), static_cast<uint16_t>(r0));
}

loc_8021C938:
{
    r30 = (r30 + 2);
    r27 = (r27 + 1);
}

loc_8021C940:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r27)));
}

loc_8021C948:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(3))) {
        goto loc_8021C8A4;
    }
}

loc_8021C94C:
{
    r11 = (r1 + 320);
    // inline leaf 0x804574CC (8 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -28), 0, 36u, true, false);
    // end of inlined leaf 0x804574CC
    r0 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 324));
    ctx->lr = r0;
    r1 = (r1 + 320);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8021C79C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8021C79C_ra38_1e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000020FB gpr_write=0x000008FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8021C79C func_8021C79C preserves=true fpr_mask=0x00000000
