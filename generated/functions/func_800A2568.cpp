#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_800A2568(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x800A2568u);
    goto loc_800A2568;

loc_800A2568:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -64), 0, 72u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 68u, (r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x80457480 (8 guest instruction(s))
    // end of inlined leaf 0x80457480
    r28 = r3;
    r29 = r4;
    r30 = r5;
    r31 = r6;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r11 = (r3 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_800A25B0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A25C8;
    }
}

loc_800A25B4:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 2130706432);
}

loc_800A25C0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A25C8;
    }
}

loc_800A25C4:
{
    r10 = 0;
}

loc_800A25C8:
{
}

loc_800A25CC:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_800A25E4;
    }
}

loc_800A25D0:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 1879048192);
}

loc_800A25DC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A25E4;
    }
}

loc_800A25E0:
{
    r9 = 0;
}

loc_800A25E4:
{
}

loc_800A25E8:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800A25FC;
    }
}

loc_800A25EC:
{
    r0 = (r11 + 1073741824);
}

loc_800A25F4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A25FC;
    }
}

loc_800A25F8:
{
    r8 = 0;
}

loc_800A25FC:
{
}

loc_800A2600:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800A2618;
    }
}

loc_800A2604:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 1056964608);
}

loc_800A2610:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A2618;
    }
}

loc_800A2614:
{
    r7 = 0;
}

loc_800A2618:
{
}

loc_800A261C:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800A2634;
    }
}

loc_800A2620:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 805306368);
}

loc_800A262C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A2634;
    }
}

loc_800A2630:
{
    r6 = 0;
}

loc_800A2634:
{
}

loc_800A2638:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800A2650;
    }
}

loc_800A263C:
{
    r3 = (r3 & -16384);
    r0 = (r3 + 536870912);
}

loc_800A2648:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A2650;
    }
}

loc_800A264C:
{
    r5 = 0;
}

loc_800A2650:
{
}

loc_800A2654:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800A2678;
    }
}

loc_800A2658:
{
    r3 = 0x80590000u;
    r3 = (r3 + 9768);
    r4 = 2348;
    r5 = 0x80590000u;
    r5 = (r5 + 10060);
    r6 = r28;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800A2678u;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
}

loc_800A2678:
{
    r4 = 1;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = (r29 & -16777216);
    r0 = (r10 + -2147483648);
}

loc_800A269C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A26B4;
    }
}

loc_800A26A0:
{
    r3 = (r29 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800A26AC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A26B4;
    }
}

loc_800A26B0:
{
    r9 = 0;
}

loc_800A26B4:
{
}

loc_800A26B8:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800A26D0;
    }
}

loc_800A26BC:
{
    r3 = (r29 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800A26C8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A26D0;
    }
}

loc_800A26CC:
{
    r8 = 0;
}

loc_800A26D0:
{
}

loc_800A26D4:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800A26E8;
    }
}

loc_800A26D8:
{
    r0 = (r10 + 1073741824);
}

loc_800A26E0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A26E8;
    }
}

loc_800A26E4:
{
    r7 = 0;
}

loc_800A26E8:
{
}

loc_800A26EC:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800A2704;
    }
}

loc_800A26F0:
{
    r3 = (r29 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800A26FC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A2704;
    }
}

loc_800A2700:
{
    r6 = 0;
}

loc_800A2704:
{
}

loc_800A2708:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800A2720;
    }
}

loc_800A270C:
{
    r3 = (r29 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800A2718:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A2720;
    }
}

loc_800A271C:
{
    r5 = 0;
}

loc_800A2720:
{
}

loc_800A2724:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800A273C;
    }
}

loc_800A2728:
{
    r3 = (r29 & -16384);
    r0 = (r3 + 536870912);
}

loc_800A2734:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A273C;
    }
}

loc_800A2738:
{
    r4 = 0;
}

loc_800A273C:
{
}

loc_800A2740:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800A2764;
    }
}

loc_800A2744:
{
    r3 = 0x80590000u;
    r3 = (r3 + 9768);
    r4 = 2349;
    r5 = 0x80590000u;
    r5 = (r5 + 10116);
    r6 = r29;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800A2764u;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
}

loc_800A2764:
{
    r26 = MemoryInline::FlatRead8((r28 + 3));
    r3 = r26;
    // inline leaf 0x8009F8AC (5 guest instruction(s))
    r0 = (r3 & 255);
    r3 = 0x80590000u;
    r3 = (r3 + 9512);
    r3_addr_0 = (r3 + r0);
    r3 = MemoryInline::FlatRead8(r3_addr_0);
    // end of inlined leaf 0x8009F8AC
    r27 = r3;
    r3 = r26;
    // inline leaf 0x8009F898 (5 guest instruction(s))
    r0 = (r3 & 255);
    r3 = 0x80590000u;
    r3 = (r3 + 9256);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead8(r3_addr_1);
    // end of inlined leaf 0x8009F898
    r25 = (r3 & 255);
}

loc_800A2784:
{
    if ((static_cast<int32_t>(r25) == static_cast<int32_t>(0))) {
        goto loc_800A2800;
    }
}

loc_800A2788:
{
    r3 = r28;
    r4 = (r1 + 28);
    r5 = (r1 + 24);
    r6 = (r1 + 20);
    r7 = (r1 + 16);
    r8 = (r1 + 12);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    InvokeDirectCpu<0x8009F290u>(ctx);
    r3 = MemoryInline::FlatRead32((r1 + 28));
    r4 = r30;
    r5 = (r1 + 8);
    r6 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x800A2818u>(ctx);
    r3 = MemoryInline::FlatRead32((r1 + 24));
    r0 = MemoryInline::FlatRead16((r1 + 8));
    r0 = (r25 * r0);
    r4 = (r3 + r0);
    r5 = 1;
    r0 = (r27 & 255);
    goto loc_800A27F8;
}

loc_800A27D4:
{
    r3 = (r26 & r5);
}

loc_800A27DC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800A27EC;
    }
}

loc_800A27E0:
{
    r3 = MemoryInline::FlatRead8(r4);
    r4 = (r4 + 1);
    MemoryInline::FlatWrite8(r29, static_cast<uint8_t>(r3));
}

loc_800A27EC:
{
    r29 = (r29 + 1);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & -2);
    r5 = (r3 & 65535);
}

loc_800A27F8:
{
}

loc_800A27FC:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(r0))) {
        goto loc_800A27D4;
    }
}

loc_800A2800:
{
    r11 = (r1 + 64);
    // inline leaf 0x804574CC (8 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -28), 0, 36u, true, false);
    // end of inlined leaf 0x804574CC
    r0 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
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
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000FFB gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800A2568 func_800A2568 preserves=true fpr_mask=0x00000000
