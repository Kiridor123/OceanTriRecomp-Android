#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804F5B70(CpuContext* ctx);
extern "C" uint32_t func_804F5B70_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_804F7780_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r30_addr_0 = 0;
    uint32_t r30_addr_1 = 0;
    uint32_t r30_addr_2 = 0;
    uint32_t r30_addr_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r9_addr_0 = 0;
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
    uint32_t r13 = ctx->gpr[13];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x804F7780u);
    goto loc_804F7780;

loc_804F7780:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r30 = (r13 + -14112);
    r6 = 0x80760000u;
    r30_addr_0 = (r30 + r3);
    r0 = MemoryInline::FlatRead8(r30_addr_0);
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r7 = (r7_rot_0 & 1020);
    r6 = (r6 + -10352);
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r1 + 8), r5);
}

loc_804F77B0:
{
    r6_addr_0 = (r6 + r7);
    r28 = MemoryInline::FlatRead32(r6_addr_0);
    r26 = r3;
    r27 = r4;
    r29 = r5;
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804F77E4;
    }
}

loc_804F77C4:
{
    r4 = (r13 + -14108);
    r4_addr_1 = (r4 + r3);
    r0 = MemoryInline::FlatRead8(r4_addr_1);
}

loc_804F77D0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804F77E4;
    }
}

loc_804F77D4:
{
    r3 = r29;
    r4 = 0;
    r5 = 96;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
}

loc_804F77E4:
{
    r3 = MemoryInline::FlatRead8((r27 + 2));
    r0 = MemoryInline::FlatRead8((r27 + 1));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r0_mrot_0 = (r0_rot_0 & 65280);
    r0_mdest_0 = (r0 & -65281);
    r0 = (r0_mdest_0 | r0_mrot_0);
    r0 = (r0 & 40735);
}

loc_804F77F4:
{
    MemoryInline::FlatWrite16(r29, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r28 + 2232));
}

loc_804F7800:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_804F780C;
    }
}

loc_804F7804:
{
}

loc_804F7808:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(9))) {
        goto loc_804F7818;
    }
}

loc_804F780C:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r29 + 41), static_cast<uint8_t>(r0));
    goto loc_804F7820;
}

loc_804F7818:
{
    r0 = -4;
    MemoryInline::FlatWrite8((r29 + 41), static_cast<uint8_t>(r0));
}

loc_804F7820:
{
    r0 = MemoryInline::FlatRead8((r28 + 2241));
    r9 = 0x80760000u;
    MemoryInline::FlatWrite8((r29 + 40), static_cast<uint8_t>(r0));
    r31 = 0;
    r10_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(2));
    r10 = (r10_rot_0 & 1020);
    r9 = (r9 + -10352);
    MemoryInline::FlatWrite32((r28 + 2120), r31);
    r3 = r26;
    r4 = (r1 + 8);
    r6 = (r27 + 4);
    r8 = MemoryInline::FlatRead8((r27 + 3));
    r5 = 2;
    r0 = MemoryInline::FlatRead8((r27 + 1));
    r7 = 0;
    r8_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r8 = (r8_rot_0 & -4);
    r9_addr_0 = (r9 + r10);
    r9 = MemoryInline::FlatRead32(r9_addr_0);
    r8 = (static_cast<int32_t>(static_cast<int16_t>(r8)));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(26));
    r0 = (r0_rot_1 & 2);
    r8 = (r8 & -4);
    r9 = MemoryInline::FlatRead16((r9 + 2166));
    r9 = (r9 << 16);
    r9 = (static_cast<int32_t>(r9) >> 16);
    r8 = (static_cast<int32_t>(static_cast<int16_t>(r8)));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r8 | r0);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r0 - r9);
    MemoryInline::FlatWrite16((r29 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r27 + 1));
    r8 = MemoryInline::FlatRead8((r27 + 2));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_2 & 12);
    r9 = MemoryInline::FlatRead16((r29 + 6));
    r9 = (r9 << 16);
    r9 = (static_cast<int32_t>(r9) >> 16);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(31));
    r0_mrot_1 = (r0_rot_3 & 48);
    r0_mdest_1 = (r0 & -49);
    r0 = (r0_mdest_1 | r0_mrot_1);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r9 | r0);
    MemoryInline::FlatWrite16((r29 + 6), static_cast<uint16_t>(r0));
    if constexpr (KnownRegArgsCpuCall<0x804F5B70u>(&func_804F5B70)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        const auto regargs_result_804F5B70_18E5 = func_804F5B70_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_804F5B70_18E5;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        InvokeDirectCpu<0x804F5B70u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
    }
    r3 = r26;
    r4 = (r1 + 8);
    r6 = (r27 + 13);
    r5 = 3;
    r7 = 0;
    if constexpr (KnownRegArgsCpuCall<0x804F5B70u>(&func_804F5B70)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        const auto regargs_result_804F5B70_1D87 = func_804F5B70_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_804F5B70_1D87;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        InvokeDirectCpu<0x804F5B70u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
    }
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x804D12F0
    r30_addr_1 = (r30 + r26);
    r0 = MemoryInline::FlatRead8(r30_addr_1);
    r5 = (r13 + -14108);
    r4 = 1;
    r5_addr_0 = (r5 + r26);
    MemoryInline::FlatWrite8(r5_addr_0, static_cast<uint8_t>(r4));
}

loc_804F78DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804F7914;
    }
}

loc_804F78E0:
{
    r5_addr_1 = (r5 + r26);
    r0 = MemoryInline::FlatRead8(r5_addr_1);
}

loc_804F78E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804F7914;
    }
}

loc_804F78EC:
{
    r4 = MemoryInline::FlatRead16((r28 + 2168));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = MemoryInline::FlatRead16((r29 + 6));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 - r4);
    MemoryInline::FlatWrite16((r29 + 6), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r28 + 2248));
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_4 & 255);
    MemoryInline::FlatWrite8((r28 + 2248), static_cast<uint8_t>(r0));
    r5_addr_2 = (r5 + r26);
    MemoryInline::FlatWrite8(r5_addr_2, static_cast<uint8_t>(r31));
    r30_addr_2 = (r30 + r26);
    MemoryInline::FlatWrite8(r30_addr_2, static_cast<uint8_t>(r31));
}

loc_804F7914:
{
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl2_0x804D1330:
{
}

loc_inl2_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl2_0x804D1344;
    }
}

loc_inl2_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl2_0x804D1348;
}

loc_inl2_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl2_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_1 & 1);
}

loc_inl2_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
    r11 = (r1 + 48);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804F7780(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804F7780_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000020FF gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804F7780 func_804F7780 preserves=true fpr_mask=0x00000000
