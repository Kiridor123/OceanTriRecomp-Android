#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80272B14(CpuContext* ctx);
extern "C" uint64_t func_80272B14_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80275448(CpuContext* ctx);
extern "C" uint64_t func_80275448_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80278D80(CpuContext* ctx);
extern "C" uint64_t func_80278D80_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_80278A50_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80278A50;

loc_80278A50:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = r4;
    // inline leaf 0x802789F8 (22 guest instruction(s))
    r0 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 906), 0, 164u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 20u, (r3 + 926), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 0u, (r3 + 906), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 98u, (r3 + 1004), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 110u, (r3 + 1016), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 116u, (r3 + 1022), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 104u, (r3 + 1010), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 132u, (r3 + 1038), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 138u, (r3 + 1044), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 144u, (r3 + 1050), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 150u, (r3 + 1056), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 2u, (r3 + 908), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 154u, (r3 + 1060), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 4u, (r3 + 910), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 156u, (r3 + 1062), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 6u, (r3 + 912), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 158u, (r3 + 1064), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 8u, (r3 + 914), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 160u, (r3 + 1066), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 10u, (r3 + 916), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 162u, (r3 + 1068), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x802789F8
    r0 = 0;
    guest_range_1 = MemoryInline::ResolveRangeHost((r30 + 900), 0, 232u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 88u, (r30 + 988), r0);
    MemoryInline::WriteResolved16(guest_range_1, 142u, (r30 + 1042), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 102u, (r30 + 1002), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 106u, (r30 + 1006), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 124u, (r30 + 1024), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 120u, (r30 + 1020), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 108u, (r30 + 1008), static_cast<uint16_t>(r0));
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 112u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 112u, (r30 + 1012), r0);
        MemoryInline::WriteResolved16(guest_range_1, 114u, (r30 + 1014), r0);
    }
    MemoryInline::WriteResolved16(guest_range_1, 118u, (r30 + 1018), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 126u, (r30 + 1026), static_cast<uint16_t>(r0));
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 0u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 0u, (r30 + 900), r0);
        MemoryInline::WriteResolved16(guest_range_1, 2u, (r30 + 902), r0);
    }
    MemoryInline::WriteResolved16(guest_range_1, 140u, (r30 + 1040), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 148u, (r30 + 1048), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 154u, (r30 + 1054), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 146u, (r30 + 1046), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 152u, (r30 + 1052), static_cast<uint16_t>(r0));
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 218u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 218u, (r30 + 1118), r0);
        MemoryInline::WriteResolved16(guest_range_1, 220u, (r30 + 1120), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 222u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 222u, (r30 + 1122), r0);
        MemoryInline::WriteResolved16(guest_range_1, 224u, (r30 + 1124), r0);
    }
    MemoryInline::WriteResolved16(guest_range_1, 226u, (r30 + 1126), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 196u, (r30 + 1096), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 200u, (r30 + 1100), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 197u, (r30 + 1097), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 201u, (r30 + 1101), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 198u, (r30 + 1098), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 202u, (r30 + 1102), static_cast<uint16_t>(r0));
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 128u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 128u, (r30 + 1028), r0);
        MemoryInline::WriteResolved16(guest_range_1, 130u, (r30 + 1030), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 132u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 132u, (r30 + 1032), r0);
        MemoryInline::WriteResolved16(guest_range_1, 134u, (r30 + 1034), r0);
    }
    MemoryInline::WriteResolved16(guest_range_1, 136u, (r30 + 1036), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 208u, (r30 + 1108), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 204u, (r30 + 1104), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 212u, (r30 + 1112), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 206u, (r30 + 1106), static_cast<uint8_t>(r0));
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 228u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 228u, (r30 + 1128), r0);
        MemoryInline::WriteResolved16(guest_range_1, 230u, (r30 + 1130), r0);
    }
    MemoryInline::WriteResolved16(guest_range_1, 170u, (r30 + 1070), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 180u, (r30 + 1080), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 172u, (r30 + 1072), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 182u, (r30 + 1082), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 174u, (r30 + 1074), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 184u, (r30 + 1084), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 176u, (r30 + 1076), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 186u, (r30 + 1086), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 178u, (r30 + 1078), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 188u, (r30 + 1088), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 158u, (r30 + 1058), static_cast<uint16_t>(r0));
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 214u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 214u, (r30 + 1114), r0);
        MemoryInline::WriteResolved16(guest_range_1, 216u, (r30 + 1116), r0);
    }
    r3 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8026FE38u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80278B54:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80278B9C;
    }
}

loc_80278B58:
{
}

loc_80278B5C:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_80278B74;
    }
}

loc_80278B60:
{
    r3 = r30;
    r4 = 39;
    if constexpr (KnownRegArgsCpuCall<0x80272B14u>(&func_80272B14)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80272B14_2760 = func_80272B14_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80272B14_2760);
        r4 = static_cast<uint32_t>(regargs_result_80272B14_2760 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80272B14u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_80278B70:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80278B9C;
    }
}

loc_80278B74:
{
    r3 = r30;
    r4 = 4;
    ctx->lr = 0x80278B80u;
    if constexpr (KnownRegArgsCpuCall<0x80275448u>(&func_80275448)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80275448_2AAA = func_80275448_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80275448_2AAA);
        r4 = static_cast<uint32_t>(regargs_result_80275448_2AAA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80275448u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    MemoryInline::FlatWrite8((r30 + 1096), static_cast<uint8_t>(r0));
    r3 = r30;
    r4 = 5;
    ctx->lr = 0x80278B94u;
    if constexpr (KnownRegArgsCpuCall<0x80275448u>(&func_80275448)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80275448_2E17 = func_80275448_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80275448_2E17);
        r4 = static_cast<uint32_t>(regargs_result_80275448_2E17 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80275448u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    MemoryInline::FlatWrite8((r30 + 1100), static_cast<uint8_t>(r0));
}

loc_80278B9C:
{
    r3 = r30;
    ctx->lr = 0x80278BA4u;
    if constexpr (KnownRegArgsCpuCall<0x80278D80u>(&func_80278D80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80278D80_318E = func_80278D80_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80278D80_318E);
        r4 = static_cast<uint32_t>(regargs_result_80278D80_318E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80278D80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80278A50(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80278A50_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80278A50 func_80278A50 preserves=true fpr_mask=0x00000000
