#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804574EC(CpuContext* ctx);
extern "C" uint64_t func_804574EC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80457710(CpuContext* ctx);
extern "C" uint64_t func_80457710_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8046265C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r27_sthu_ea_0 = 0;
    uint32_t r27_sthu_ea_1 = 0;
    uint32_t r27_sthu_ea_10 = 0;
    uint32_t r27_sthu_ea_11 = 0;
    uint32_t r27_sthu_ea_12 = 0;
    uint32_t r27_sthu_ea_13 = 0;
    uint32_t r27_sthu_ea_2 = 0;
    uint32_t r27_sthu_ea_3 = 0;
    uint32_t r27_sthu_ea_4 = 0;
    uint32_t r27_sthu_ea_5 = 0;
    uint32_t r27_sthu_ea_6 = 0;
    uint32_t r27_sthu_ea_7 = 0;
    uint32_t r27_sthu_ea_8 = 0;
    uint32_t r27_sthu_ea_9 = 0;
    uint32_t r31_ca_0 = 0;
    uint32_t r31_ca_1 = 0;
    uint32_t r31_ca_2 = 0;
    uint32_t r31_ca_3 = 0;
    uint32_t r31_ca_4 = 0;
    uint32_t r31_not_0 = 0;
    uint32_t r31_not_1 = 0;
    uint32_t r31_not_2 = 0;
    uint32_t r31_not_3 = 0;
    uint32_t r31_not_4 = 0;
    uint32_t r6_ca_0 = 0;
    uint32_t r6_ca_1 = 0;
    uint32_t r6_ca_2 = 0;
    uint32_t r6_ca_3 = 0;
    uint32_t r6_ca_4 = 0;
    uint32_t r6_not_0 = 0;
    uint32_t r6_not_1 = 0;
    uint32_t r6_not_2 = 0;
    uint32_t r6_not_3 = 0;
    uint32_t r6_not_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
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
    uint32_t xer = ctx->xer;

    goto loc_8046265C;

loc_8046265C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r0 = (r4 | r3);
    r25 = 0;
    r31 = r3;
    r30 = r4;
    r23 = r5;
    r24 = r6;
    r27 = (r5 + -2);
    r26 = 0;
    MemoryInline::FlatWrite16((r5 + -2), static_cast<uint16_t>(r25));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804626C0;
    }
}

loc_80462694:
{
    r0 = MemoryInline::FlatRead32((r6 + 12));
}

loc_8046269C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804626C0;
    }
}

loc_804626A0:
{
    r0 = MemoryInline::FlatRead8((r6 + 3));
}

loc_804626A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804626B8;
    }
}

loc_804626AC:
{
    r0 = MemoryInline::FlatRead16((r6 + 6));
}

loc_804626B4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(111))) {
        goto loc_804626C0;
    }
}

loc_804626B8:
{
    r3 = r27;
    goto loc_80462904;
}

loc_804626C0:
{
    r0 = MemoryInline::FlatRead16((r6 + 6));
}

loc_804626C8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(100))) {
        goto loc_804626F8;
    }
}

loc_804626CC:
{
}

loc_804626D0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(105))) {
        goto loc_804626F8;
    }
}

loc_804626D4:
{
}

loc_804626D8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(111))) {
        goto loc_8046273C;
    }
}

loc_804626DC:
{
}

loc_804626E0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(117))) {
        goto loc_8046274C;
    }
}

loc_804626E4:
{
}

loc_804626E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(120))) {
        goto loc_8046275C;
    }
}

loc_804626EC:
{
}

loc_804626F0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(88))) {
        goto loc_8046275C;
    }
}

loc_804626F4:
{
    goto loc_80462768;
}

loc_804626F8:
{
    r29 = 0;
    r0 = (r3 ^ -2147483648);
    r6 = (r29 ^ -2147483648);
    r28 = 10;
    r5 = (r4 - r29);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r29) ? 1u : 0u) << 29);
    r6_not_1 = ~(r6);
    r6_ca_1 = (xer >> 29) & 1u;
    r6 = (r6_not_1 + r0);
    r6 = (r6 + r6_ca_1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r6_not_1)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r6_ca_1)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r6_not_2 = ~(r0);
    r6_ca_2 = (xer >> 29) & 1u;
    r6 = (r6_not_2 + r0);
    r6 = (r6 + r6_ca_2);
    r6 = (0 - r6);
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80462768;
    }
}

loc_8046271C:
{
    r0 = 0x80000000u;
    r0 = (r3 ^ r0);
    r0 = (r4 | r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80462734;
    }
}

loc_8046272C:
{
    r30 = (0 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(0) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r31_not_1 = ~(r3);
    r31_ca_1 = (xer >> 29) & 1u;
    r31 = (r31_not_1 + r31_ca_1);
}

loc_80462734:
{
    r25 = 1;
    goto loc_80462768;
}

loc_8046273C:
{
    r29 = 0;
    MemoryInline::FlatWrite8((r6 + 1), static_cast<uint8_t>(r29));
    r28 = 8;
    goto loc_80462768;
}

loc_8046274C:
{
    r29 = 0;
    MemoryInline::FlatWrite8((r6 + 1), static_cast<uint8_t>(r29));
    r28 = 10;
    goto loc_80462768;
}

loc_8046275C:
{
    r29 = 0;
    MemoryInline::FlatWrite8((r6 + 1), static_cast<uint8_t>(r29));
    r28 = 16;
}

loc_80462768:
{
    r3 = r31;
    r4 = r30;
    r5 = r29;
    r6 = r28;
    if constexpr (KnownRegArgsCpuCall<0x80457710u>(&func_80457710)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_80457710_19D6 = func_80457710_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80457710_19D6);
        r4 = static_cast<uint32_t>(regargs_result_80457710_19D6 >> 32);
        r0 = ctx->gpr[0];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x80457710u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        xer = ctx->xer;
    }
    r22 = r4;
    r3 = r31;
    r4 = r30;
    r5 = r29;
    r6 = r28;
    if constexpr (KnownRegArgsCpuCall<0x804574ECu>(&func_804574EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_804574EC_1D57 = func_804574EC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804574EC_1D57);
        r4 = static_cast<uint32_t>(regargs_result_804574EC_1D57 >> 32);
        r0 = ctx->gpr[0];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x804574ECu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        xer = ctx->xer;
    }
}

loc_80462798:
{
    r30 = r4;
    r31 = r3;
    if ((static_cast<int32_t>(r22) >= static_cast<int32_t>(10))) {
        goto loc_804627AC;
    }
}

loc_804627A4:
{
    r5 = (r22 + 48);
    goto loc_804627C0;
}

loc_804627AC:
{
    r0 = MemoryInline::FlatRead16((r24 + 6));
    r5 = (r22 + 55);
}

loc_804627B8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(120))) {
        goto loc_804627C0;
    }
}

loc_804627BC:
{
    r5 = (r22 + 87);
}

loc_804627C0:
{
    r0 = (r4 | r3);
    r27_sthu_ea_2 = (r27 + -2);
    MemoryInline::FlatWrite16(r27_sthu_ea_2, static_cast<uint16_t>(r5));
    r27 = r27_sthu_ea_2;
    r26 = (r26 + 1);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80462768;
    }
}

loc_804627D0:
{
    r0 = (r28 ^ 8);
    r0 = (r0 | r29);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80462800;
    }
}

loc_804627DC:
{
    r0 = MemoryInline::FlatRead8((r24 + 3));
}

loc_804627E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80462800;
    }
}

loc_804627E8:
{
    r0 = MemoryInline::FlatRead16(r27);
}

loc_804627F0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(48))) {
        goto loc_80462800;
    }
}

loc_804627F4:
{
    r0 = 48;
    r27_sthu_ea_3 = (r27 + -2);
    MemoryInline::FlatWrite16(r27_sthu_ea_3, static_cast<uint16_t>(r0));
    r27 = r27_sthu_ea_3;
    r26 = (r26 + 1);
}

loc_80462800:
{
    r0 = MemoryInline::FlatRead8(r24);
}

loc_80462808:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_80462858;
    }
}

loc_8046280C:
{
    r0 = MemoryInline::FlatRead32((r24 + 8));
}

loc_80462814:
{
    MemoryInline::FlatWrite32((r24 + 12), r0);
    if ((static_cast<int32_t>(r25) != static_cast<int32_t>(0))) {
        goto loc_80462828;
    }
}

loc_8046281C:
{
    r0 = MemoryInline::FlatRead8((r24 + 1));
}

loc_80462824:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80462834;
    }
}

loc_80462828:
{
    r3 = MemoryInline::FlatRead32((r24 + 12));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r24 + 12), r0);
}

loc_80462834:
{
    r0 = (r28 ^ 16);
    r0 = (r0 | r29);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80462858;
    }
}

loc_80462840:
{
    r0 = MemoryInline::FlatRead8((r24 + 3));
}

loc_80462848:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80462858;
    }
}

loc_8046284C:
{
    r3 = MemoryInline::FlatRead32((r24 + 12));
    r0 = (r3 + -2);
    MemoryInline::FlatWrite32((r24 + 12), r0);
}

loc_80462858:
{
    r3 = (r23 - r27);
    r4 = MemoryInline::FlatRead32((r24 + 12));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
    r0 = (r0 + r3);
    r0 = (static_cast<int32_t>(r0) >> 1);
    r0 = (r4 + r0);
}

loc_80462874:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(509))) {
        goto loc_80462880;
    }
}

loc_80462878:
{
    r3 = 0;
    goto loc_80462904;
}

loc_80462880:
{
    r3 = 48;
    goto loc_80462890;
}

loc_80462888:
{
    r27_sthu_ea_6 = (r27 + -2);
    MemoryInline::FlatWrite16(r27_sthu_ea_6, static_cast<uint16_t>(r3));
    r27 = r27_sthu_ea_6;
    r26 = (r26 + 1);
}

loc_80462890:
{
    r0 = MemoryInline::FlatRead32((r24 + 12));
}

loc_80462898:
{
    if ((static_cast<int32_t>(r26) < static_cast<int32_t>(r0))) {
        goto loc_80462888;
    }
}

loc_8046289C:
{
    r0 = (r28 ^ 16);
    r0 = (r0 | r29);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804628C4;
    }
}

loc_804628A8:
{
    r0 = MemoryInline::FlatRead8((r24 + 3));
}

loc_804628B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804628C4;
    }
}

loc_804628B4:
{
    r3 = MemoryInline::FlatRead16((r24 + 6));
    r0 = 48;
    MemoryInline::FlatWrite16((r27 + -2), static_cast<uint16_t>(r3));
    r27_sthu_ea_7 = (r27 + -4);
    MemoryInline::FlatWrite16(r27_sthu_ea_7, static_cast<uint16_t>(r0));
    r27 = r27_sthu_ea_7;
}

loc_804628C4:
{
}

loc_804628C8:
{
    if ((static_cast<int32_t>(r25) == static_cast<int32_t>(0))) {
        goto loc_804628D8;
    }
}

loc_804628CC:
{
    r0 = 45;
    r27_sthu_ea_9 = (r27 + -2);
    MemoryInline::FlatWrite16(r27_sthu_ea_9, static_cast<uint16_t>(r0));
    r27 = r27_sthu_ea_9;
    goto loc_80462900;
}

loc_804628D8:
{
    r0 = MemoryInline::FlatRead8((r24 + 1));
}

loc_804628E0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_804628F0;
    }
}

loc_804628E4:
{
    r0 = 43;
    r27_sthu_ea_10 = (r27 + -2);
    MemoryInline::FlatWrite16(r27_sthu_ea_10, static_cast<uint16_t>(r0));
    r27 = r27_sthu_ea_10;
    goto loc_80462900;
}

loc_804628F0:
{
}

loc_804628F4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_80462900;
    }
}

loc_804628F8:
{
    r0 = 32;
    r27_sthu_ea_11 = (r27 + -2);
    MemoryInline::FlatWrite16(r27_sthu_ea_11, static_cast<uint16_t>(r0));
    r27 = r27_sthu_ea_11;
}

loc_80462900:
{
    r3 = r27;
}

loc_80462904:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 48u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->xer = xer;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8046265C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8046265C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000006FB gpr_write=0x000007FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8046265C func_8046265C preserves=true fpr_mask=0x00000000
