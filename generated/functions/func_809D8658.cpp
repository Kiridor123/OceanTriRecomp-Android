#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8015D734(CpuContext* ctx);
extern "C" uint64_t func_8015D734_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8028F324(CpuContext* ctx);
extern "C" uint32_t func_8028F324_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" void func_809D8658(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_809D8658;

loc_809D8658:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r31 = r3;
    r29 = r4;
    r30 = r5;
    r0 = MemoryInline::FlatRead8((r3 + 3));
}

loc_809D8680:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_809D868C;
    }
}

loc_809D8684:
{
    r3 = 0;
    goto loc_809D87E4;
}

loc_809D868C:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = 0x80A20000u;
    r3 = (r3 + 16456);
    r3_addr_1 = (r3 + r0);
    r26 = MemoryInline::FlatRead32(r3_addr_1);
}

loc_809D86A0:
{
    if ((static_cast<int32_t>(r26) != static_cast<int32_t>(0))) {
        goto loc_809D86AC;
    }
}

loc_809D86A4:
{
    r3 = 0;
    goto loc_809D87E4;
}

loc_809D86AC:
{
    r27 = 0;
    r28 = 0;
    goto loc_809D86DC;
}

loc_809D86B8:
{
    r27 = (r27 + 1);
    ctx->lr = 0x809D86C0u;
    if constexpr (KnownRegArgsCpuCall<0x8028F324u>(&func_8028F324)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_8028F324_B76 = func_8028F324_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8028F324_B76;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8028F324u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r3 = (r3 & 255);
    r0 = (r3 + 6);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & -2);
    r3 = (r26 + r0);
    r0 = MemoryInline::FlatRead16((r3 + 2));
    r28 = (r28 + r0);
    r26 = (r26 + 24);
}

loc_809D86DC:
{
    r0 = MemoryInline::FlatRead8(r26);
}

loc_809D86E4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_809D86B8;
    }
}

loc_809D86E8:
{
}

loc_809D86EC:
{
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(0))) {
        goto loc_809D86F8;
    }
}

loc_809D86F0:
{
    r3 = 0;
    goto loc_809D87E4;
}

loc_809D86F8:
{
    r3 = 3;
    // inline leaf 0x800CEF20 (23 guest instruction(s))
}

loc_inl1_0x800CEF20:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & -2);
    r6 = (r4 + r0);
    r0 = MemoryInline::FlatRead16((r6 + 24));
}

loc_inl1_0x800CEF38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x800CEF40;
    }
}

loc_inl1_0x800CEF3C:
{
    r0 = 1;
}

loc_inl1_0x800CEF40:
{
    r5 = (r0 * 176);
    r3 = 11337728;
    r0 = (r3 + 30009);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r5)) >> 32));
    r0 = (r5 - r3);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_5 & 2147483647);
    r0 = (r0 + r3);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_1 & 131071);
    r3 = 65536;
    r0 = (r3 + -173);
    r0 = (r4 * r0);
    r0 = (r5 - r0);
    r3 = (r0 & 65535);
    MemoryInline::FlatWriteRam16((r6 + 24), static_cast<uint16_t>(r3));
}

loc_inl1_cont_800CEF20:
{
    // end of inlined leaf 0x800CEF20
    r3 = (r3 & 65535);
    r0 = PPC_Divw(static_cast<int32_t>(r3), static_cast<int32_t>(r28));
    r0 = (r0 * r28);
    r28 = (r3 - r0);
    r27 = 0;
    r0 = MemoryInline::FlatRead8((r31 + 3));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r3 = 0x80A20000u;
    r3 = (r3 + 16456);
    r3_addr_2 = (r3 + r0);
    r31 = MemoryInline::FlatRead32(r3_addr_2);
    goto loc_809D8754;
}

loc_809D872C:
{
    ctx->lr = 0x809D8730u;
    if constexpr (KnownRegArgsCpuCall<0x8028F324u>(&func_8028F324)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_8028F324_177B = func_8028F324_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8028F324_177B;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8028F324u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r3 = (r3 & 255);
    r0 = (r3 + 6);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_8 & -2);
    r3 = (r31 + r0);
    r0 = MemoryInline::FlatRead16((r3 + 2));
    r27 = (r27 + r0);
}

loc_809D874C:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(r27))) {
        goto loc_809D8760;
    }
}

loc_809D8750:
{
    r31 = (r31 + 24);
}

loc_809D8754:
{
    r0 = MemoryInline::FlatRead8(r31);
}

loc_809D875C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_809D872C;
    }
}

loc_809D8760:
{
    r3 = MemoryInline::FlatRead8(r31);
    if constexpr (KnownRegArgsCpuCall<0x8015D734u>(&func_8015D734)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8015D734_1C7F = func_8015D734_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8015D734_1C7F);
        r4 = static_cast<uint32_t>(regargs_result_8015D734_1C7F >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8015D734u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_809D876C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_809D8778;
    }
}

loc_809D8770:
{
    r3 = 0;
    goto loc_809D87E4;
}

loc_809D8778:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r31, 0, 24u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, r31);
    MemoryInline::FlatWrite8(r29, static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 10u, (r31 + 10));
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8((r29 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 12u, (r31 + 12));
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8((r29 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 2u, (r31 + 2));
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8((r29 + 4), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r31 + 4));
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8((r29 + 5), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 6u, (r31 + 6));
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8((r29 + 6), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 8u, (r31 + 8));
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8((r29 + 7), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 18u, (r31 + 18));
    MemoryInline::FlatWrite16((r30 + 27012), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 20u, (r31 + 20));
    MemoryInline::FlatWrite32((r30 + 27020), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 22u, (r31 + 22));
    MemoryInline::FlatWrite32((r30 + 27032), r0);
    r3 = 1;
}

loc_809D87E4:
{
    r11 = (r1 + 32);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000087B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x809D8658 func_809D8658 preserves=true fpr_mask=0x00000000
