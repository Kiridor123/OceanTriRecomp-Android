#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80274688(CpuContext* ctx);
extern "C" uint64_t func_80274688_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8027DD44(CpuContext* ctx);
extern "C" uint64_t func_8027DD44_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8027DE28(CpuContext* ctx);
extern "C" uint64_t func_8027DE28_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_802CD7D4_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    const uint32_t r26_entry = r26;
    const uint32_t r27_entry = r27;
    const uint32_t r28_entry = r28;
    const uint32_t r29_entry = r29;
    const uint32_t r30_entry = r30;
    const uint32_t r31_entry = r31;
    uint32_t ctr = ctx->ctr;

    goto loc_802CD7D4;

loc_802CD7D4:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r30 = r3;
    r28 = 0;
    r27 = 0;
    r26 = 0;
    r31 = MemoryInline::FlatRead32((r3 + 364));
    r3 = 0;
    // inline leaf 0x800CFAF4 (16 guest instruction(s))
}

loc_inl1_0x800CFAF4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl1_0x800CFB04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x800CFB10;
    }
}

loc_inl1_0x800CFB08:
{
    r3 = 0;
    goto loc_inl1_cont_800CFAF4;
}

loc_inl1_0x800CFB10:
{
    r0 = (r3 & 255);
}

loc_inl1_0x800CFB18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl1_0x800CFB24;
    }
}

loc_inl1_0x800CFB1C:
{
    r3 = 0;
    goto loc_inl1_cont_800CFAF4;
}

loc_inl1_0x800CFB24:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl1_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    r29 = r3;
    r3 = r31;
    if constexpr (KnownRegArgsCpuCall<0x80274688u>(&func_80274688)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80274688_CE5 = func_80274688_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80274688_CE5);
        r4 = static_cast<uint32_t>(regargs_result_80274688_CE5 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x80274688u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
}

loc_802CD818:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(12))) {
        goto loc_802CD880;
    }
}

loc_802CD81C:
{
    r3 = 0x805D0000u;
    r3 = (r3 + 21752);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x802CD880u:
        goto loc_802CD880;
        break;
    case 0x802CD87Cu:
        goto loc_802CD87C;
        break;
    case 0x802CD83Cu:
        goto loc_802CD83C;
        break;
    case 0x802CD844u:
        goto loc_802CD844;
        break;
    case 0x802CD834u:
        goto loc_802CD834;
        break;
    case 0x802CD84Cu:
        goto loc_802CD84C;
        break;
    case 0x802CD854u:
        goto loc_802CD854;
        break;
    case 0x802CD85Cu:
        goto loc_802CD85C;
        break;
    case 0x802CD864u:
        goto loc_802CD864;
        break;
    case 0x802CD86Cu:
        goto loc_802CD86C;
        break;
    case 0x802CD874u:
        goto loc_802CD874;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_802CD834:
{
    r28 = 1;
    goto loc_802CD880;
}

loc_802CD83C:
{
    r28 = 2;
    goto loc_802CD880;
}

loc_802CD844:
{
    r28 = 3;
    goto loc_802CD880;
}

loc_802CD84C:
{
    r28 = 4;
    goto loc_802CD880;
}

loc_802CD854:
{
    r28 = 5;
    goto loc_802CD880;
}

loc_802CD85C:
{
    r28 = 6;
    goto loc_802CD880;
}

loc_802CD864:
{
    r28 = 7;
    goto loc_802CD880;
}

loc_802CD86C:
{
    r28 = 8;
    goto loc_802CD880;
}

loc_802CD874:
{
    r28 = 9;
    goto loc_802CD880;
}

loc_802CD87C:
{
    r28 = 10;
}

loc_802CD880:
{
    r3 = r31;
    r4 = 0;
    ctx->lr = 0x802CD88Cu;
    if constexpr (KnownRegArgsCpuCall<0x8027DD44u>(&func_8027DD44)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027DD44_1982 = func_8027DD44_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8027DD44_1982);
        r4 = static_cast<uint32_t>(regargs_result_8027DD44_1982 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8027DD44u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_802CD890:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802CD898;
    }
}

loc_802CD894:
{
    r27 = 1;
}

loc_802CD898:
{
}

loc_802CD89C:
{
    if ((static_cast<uint32_t>(r27) != static_cast<uint32_t>(1))) {
        goto loc_802CD8D4;
    }
}

loc_802CD8A0:
{
    r3 = r31;
    r4 = 1;
    ctx->lr = 0x802CD8ACu;
    if constexpr (KnownRegArgsCpuCall<0x8027DD44u>(&func_8027DD44)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027DD44_1DBD = func_8027DD44_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8027DD44_1DBD);
        r4 = static_cast<uint32_t>(regargs_result_8027DD44_1DBD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8027DD44u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_802CD8B0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802CD8D4;
    }
}

loc_802CD8B4:
{
    r0 = MemoryInline::FlatRead8((r30 + 1128));
}

loc_802CD8BC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(12))) {
        goto loc_802CDA00;
    }
}

loc_802CD8C0:
{
    r0 = MemoryInline::FlatRead16((r30 + 1130));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_802CD8C8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802CDA00;
    }
}

loc_802CD8CC:
{
    r28 = 12;
    goto loc_802CD91C;
}

loc_802CD8D4:
{
}

loc_802CD8D8:
{
    if ((static_cast<uint32_t>(r27) != static_cast<uint32_t>(1))) {
        goto loc_802CD910;
    }
}

loc_802CD8DC:
{
    r3 = r31;
    r4 = 2;
    ctx->lr = 0x802CD8E8u;
    if constexpr (KnownRegArgsCpuCall<0x8027DD44u>(&func_8027DD44)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027DD44_23DD = func_8027DD44_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8027DD44_23DD);
        r4 = static_cast<uint32_t>(regargs_result_8027DD44_23DD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8027DD44u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_802CD8EC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802CD910;
    }
}

loc_802CD8F0:
{
    r0 = MemoryInline::FlatRead8((r30 + 1128));
}

loc_802CD8F8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(16))) {
        goto loc_802CDA00;
    }
}

loc_802CD8FC:
{
    r0 = MemoryInline::FlatRead16((r30 + 1130));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_802CD904:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802CDA00;
    }
}

loc_802CD908:
{
    r28 = 16;
    goto loc_802CD91C;
}

loc_802CD910:
{
}

loc_802CD914:
{
    if ((static_cast<uint32_t>(r27) != static_cast<uint32_t>(1))) {
        goto loc_802CD91C;
    }
}

loc_802CD918:
{
    r28 = 8;
}

loc_802CD91C:
{
    r3 = r31;
    r4 = 0;
    ctx->lr = 0x802CD928u;
    if constexpr (KnownRegArgsCpuCall<0x8027DE28u>(&func_8027DE28)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027DE28_2A22 = func_8027DE28_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8027DE28_2A22);
        r4 = static_cast<uint32_t>(regargs_result_8027DE28_2A22 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8027DE28u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_802CD92C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802CD934;
    }
}

loc_802CD930:
{
    r26 = 1;
}

loc_802CD934:
{
}

loc_802CD938:
{
    if ((static_cast<uint32_t>(r26) != static_cast<uint32_t>(1))) {
        goto loc_802CD970;
    }
}

loc_802CD93C:
{
    r3 = r31;
    r4 = 1;
    ctx->lr = 0x802CD948u;
    if constexpr (KnownRegArgsCpuCall<0x8027DE28u>(&func_8027DE28)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027DE28_2E5D = func_8027DE28_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8027DE28_2E5D);
        r4 = static_cast<uint32_t>(regargs_result_8027DE28_2E5D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8027DE28u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_802CD94C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802CD970;
    }
}

loc_802CD950:
{
    r0 = MemoryInline::FlatRead8((r30 + 1128));
}

loc_802CD958:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(12))) {
        goto loc_802CDA00;
    }
}

loc_802CD95C:
{
    r0 = MemoryInline::FlatRead16((r30 + 1130));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_802CD964:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802CDA00;
    }
}

loc_802CD968:
{
    r28 = 12;
    goto loc_802CD9B8;
}

loc_802CD970:
{
}

loc_802CD974:
{
    if ((static_cast<uint32_t>(r26) != static_cast<uint32_t>(1))) {
        goto loc_802CD9AC;
    }
}

loc_802CD978:
{
    r3 = r31;
    r4 = 2;
    ctx->lr = 0x802CD984u;
    if constexpr (KnownRegArgsCpuCall<0x8027DE28u>(&func_8027DE28)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027DE28_347D = func_8027DE28_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8027DE28_347D);
        r4 = static_cast<uint32_t>(regargs_result_8027DE28_347D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8027DE28u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_802CD988:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802CD9AC;
    }
}

loc_802CD98C:
{
    r0 = MemoryInline::FlatRead8((r30 + 1128));
}

loc_802CD994:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(16))) {
        goto loc_802CDA00;
    }
}

loc_802CD998:
{
    r0 = MemoryInline::FlatRead16((r30 + 1130));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_802CD9A0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802CDA00;
    }
}

loc_802CD9A4:
{
    r28 = 16;
    goto loc_802CD9B8;
}

loc_802CD9AC:
{
}

loc_802CD9B0:
{
    if ((static_cast<uint32_t>(r26) != static_cast<uint32_t>(1))) {
        goto loc_802CD9B8;
    }
}

loc_802CD9B4:
{
    r28 = 6;
}

loc_802CD9B8:
{
    r3 = r31;
    // inline leaf 0x8027D8D8 (11 guest instruction(s))
}

loc_inl2_0x8027D8D8:
{
    r0 = MemoryInline::FlatRead8((r3 + 10));
}

loc_inl2_0x8027D8E0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl2_0x8027D8FC;
    }
}

loc_inl2_0x8027D8E4:
{
    r3 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r3 + -84);
}

loc_inl2_0x8027D8F0:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(2))) {
        goto loc_inl2_0x8027D8FC;
    }
}

loc_inl2_0x8027D8F4:
{
    r3 = 1;
    goto loc_inl2_cont_8027D8D8;
}

loc_inl2_0x8027D8FC:
{
    r3 = 0;
}

loc_inl2_cont_8027D8D8:
{
    // end of inlined leaf 0x8027D8D8
}

loc_802CD9C4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802CD9D8;
    }
}

loc_802CD9C8:
{
    r0 = MemoryInline::FlatRead16((r30 + 1130));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_802CD9D0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802CD9D8;
    }
}

loc_802CD9D4:
{
    r28 = 13;
}

loc_802CD9D8:
{
    r3 = MemoryInline::FlatRead8((r29 + 250));
    r0 = (r3 + -6);
}

loc_802CD9E4:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_802CD9F8;
    }
}

loc_802CD9E8:
{
}

loc_802CD9EC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(4))) {
        goto loc_802CD9FC;
    }
}

loc_802CD9F0:
{
    r28 = 14;
    goto loc_802CD9FC;
}

loc_802CD9F8:
{
    r28 = 15;
}

loc_802CD9FC:
{
    MemoryInline::FlatWrite8((r30 + 1128), static_cast<uint8_t>(r28));
}

loc_802CDA00:
{
    r3 = r31;
    r4 = 0;
    r5 = 60;
    // inline leaf 0x8026FECC (12 guest instruction(s))
}

loc_inl3_0x8026FECC:
{
    r6 = MemoryInline::FlatRead8((r3 + 10));
    r0 = (r4 & 255);
}

loc_inl3_0x8026FED8:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl3_0x8026FEF4;
    }
}

loc_inl3_0x8026FEDC:
{
    r3 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r5 & 65535);
}

loc_inl3_0x8026FEE8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl3_0x8026FEF4;
    }
}

loc_inl3_0x8026FEEC:
{
    r3 = 1;
    goto loc_inl3_cont_8026FECC;
}

loc_inl3_0x8026FEF4:
{
    r3 = 0;
}

loc_inl3_cont_8026FECC:
{
    // end of inlined leaf 0x8026FECC
}

loc_802CDA14:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_802CDA30;
    }
}

loc_802CDA18:
{
    r3 = r31;
    r4 = 0;
    r5 = 80;
    // inline leaf 0x8026FECC (12 guest instruction(s))
}

loc_inl4_0x8026FECC:
{
    r6 = MemoryInline::FlatRead8((r3 + 10));
    r0 = (r4 & 255);
}

loc_inl4_0x8026FED8:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl4_0x8026FEF4;
    }
}

loc_inl4_0x8026FEDC:
{
    r3 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r5 & 65535);
}

loc_inl4_0x8026FEE8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl4_0x8026FEF4;
    }
}

loc_inl4_0x8026FEEC:
{
    r3 = 1;
    goto loc_inl4_cont_8026FECC;
}

loc_inl4_0x8026FEF4:
{
    r3 = 0;
}

loc_inl4_cont_8026FECC:
{
    // end of inlined leaf 0x8026FECC
}

loc_802CDA2C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802CDA68;
    }
}

loc_802CDA30:
{
    r0 = MemoryInline::FlatRead8((r31 + 782));
}

loc_802CDA38:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802CDA68;
    }
}

loc_802CDA3C:
{
    r0 = MemoryInline::FlatRead8((r30 + 1093));
}

loc_802CDA44:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802CDA68;
    }
}

loc_802CDA48:
{
    r0 = MemoryInline::FlatRead8((r30 + 1105));
}

loc_802CDA50:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802CDA68;
    }
}

loc_802CDA54:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 1105), static_cast<uint8_t>(r0));
    r3 = (r30 + 1108);
    r4 = (r31 + 60);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
}

loc_802CDA68:
{
    r11 = (r1 + 32);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->ctr = ctr;
    ctx->gpr[26] = r26_entry;
    ctx->gpr[27] = r27_entry;
    ctx->gpr[28] = r28_entry;
    ctx->gpr[29] = r29_entry;
    ctx->gpr[30] = r30_entry;
    ctx->gpr[31] = r31_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802CD7D4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802CD7D4_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000087B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802CD7D4 func_802CD7D4 preserves=true fpr_mask=0x00000000
