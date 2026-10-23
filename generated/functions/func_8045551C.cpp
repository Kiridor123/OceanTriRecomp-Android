#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804517E4(CpuContext* ctx);
extern "C" uint64_t func_804517E4_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8045548C(CpuContext* ctx);
extern "C" uint64_t func_8045548C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8045551C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
    uint32_t r4_addr_6 = 0;
    uint32_t r4_addr_7 = 0;
    uint32_t r4_addr_8 = 0;
    uint32_t r4_addr_9 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    goto loc_8045551C;

loc_8045551C:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r27 = r3;
    r4 = 0;
    r5 = 600;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWrite32((r27 + 760), r27);
    MemoryInline::FlatWrite32((r27 + 764), r27);
    r30 = 0;
    MemoryInline::FlatWrite16((r27 + 786), static_cast<uint16_t>(r30));
    MemoryInline::FlatWrite8((r27 + 782), static_cast<uint8_t>(r30));
    r29 = 0;
    goto loc_80455890;
}

loc_8045555C:
{
    r31 = 1;
}

loc_80455560:
{
    r0 = (r29 & 255);
}

loc_80455568:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(30))) {
        goto loc_80455578;
    }
}

loc_8045556C:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r27 + 781), static_cast<uint8_t>(r0));
    goto loc_804558A8;
}

loc_80455578:
{
    r3 = MemoryInline::FlatRead32((r27 + 776));
    r4 = 8;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8005B8DCu>(ctx);
    r3 = ctx->gpr[3];
}

loc_80455588:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80455694;
    }
}

loc_8045558C:
{
    r0 = MemoryInline::FlatRead32((r27 + 776));
    r28 = (r3 - r0);
    r3 = (r1 + 8);
    r4 = 0;
    r5 = 20;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = 0;
}

loc_804555AC:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_8045567C;
    }
}

loc_804555B0:
{
    r4 = (r28 + -8);
}

loc_804555B8:
{
    if ((static_cast<uint32_t>(r28) <= static_cast<uint32_t>(8))) {
        goto loc_80455648;
    }
}

loc_804555BC:
{
    r5 = (r1 + 8);
    r0 = (r4 + 7);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_2 & 536870911);
    ctr = r0;
}

loc_804555D0:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(0))) {
        goto loc_80455648;
    }
}

loc_804555D4:
{
    r4 = MemoryInline::FlatRead32((r27 + 776));
    r4_addr_3 = (r4 + r3);
    r0 = MemoryInline::FlatRead8(r4_addr_3);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    guest_range_0 = MemoryInline::ResolveRangeHost(r5, 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, r5, static_cast<uint8_t>(r0));
    r4 = (r4 + r3);
    r0 = MemoryInline::FlatRead8((r4 + 1));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r5 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 2));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r5 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r5 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 4));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r5 + 4), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 5));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r5 + 5), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 6));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r5 + 6), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 7));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r5 + 7), static_cast<uint8_t>(r0));
    r5 = (r5 + 8);
    r3 = (r3 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804555D4;
    }
}

loc_80455648:
{
    r5 = (r1 + 8);
    r5 = (r5 + r3);
    r0 = (r28 - r3);
    ctr = r0;
}

loc_8045565C:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r28))) {
        goto loc_8045567C;
    }
}

loc_80455660:
{
    r4 = MemoryInline::FlatRead32((r27 + 776));
    r4_addr_6 = (r4 + r3);
    r0 = MemoryInline::FlatRead8(r4_addr_6);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    r5 = (r5 + 1);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80455660;
    }
}

loc_8045567C:
{
    r3 = (r1 + 8);
    if constexpr (KnownRegArgsCpuCall<0x804517E4u>(&func_804517E4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_804517E4_1979 = func_804517E4_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804517E4_1979);
        r4 = static_cast<uint32_t>(regargs_result_804517E4_1979 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x804517E4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r28 = r3;
    r3 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8005BFCCu>(ctx);
    r3 = ctx->gpr[3];
    goto loc_804556A8;
}

loc_80455694:
{
    r3 = MemoryInline::FlatRead32((r27 + 776));
    if constexpr (KnownRegArgsCpuCall<0x804517E4u>(&func_804517E4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_804517E4_1CE6 = func_804517E4_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804517E4_1CE6);
        r4 = static_cast<uint32_t>(regargs_result_804517E4_1CE6 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x804517E4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r28 = r3;
    r3 = MemoryInline::FlatRead32((r27 + 776));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8005BFCCu>(ctx);
    r3 = ctx->gpr[3];
}

loc_804556A8:
{
}

loc_804556AC:
{
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(1))) {
        goto loc_80455810;
    }
}

loc_804556B0:
{
    r3 = MemoryInline::FlatRead32((r27 + 776));
    r0 = MemoryInline::FlatRead8(r3);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_804556C0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804556D0;
    }
}

loc_804556C4:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r27 + 781), static_cast<uint8_t>(r0));
    goto loc_804558A8;
}

loc_804556D0:
{
    MemoryInline::FlatWrite8((r27 + 782), static_cast<uint8_t>(r30));
    r3 = r27;
    ctx->lr = 0x804556DCu;
    if constexpr (KnownRegArgsCpuCall<0x8045548Cu>(&func_8045548C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_8045548C_22EE = func_8045548C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8045548C_22EE);
        r4 = static_cast<uint32_t>(regargs_result_8045548C_22EE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8045548Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    }
    r3 = MemoryInline::FlatRead8((r27 + 782));
}

loc_804556E4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80455778;
    }
}

loc_804556E8:
{
    r3 = MemoryInline::FlatRead16((r27 + 786));
    r4 = (r3 + 1);
    MemoryInline::FlatWrite16((r27 + 786), static_cast<uint16_t>(r4));
    r3 = MemoryInline::FlatRead32((r27 + 776));
    r0 = MemoryInline::FlatRead8(r3);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80455704:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(92))) {
        goto loc_80455744;
    }
}

loc_80455708:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r27 + 776), r0);
    r3 = MemoryInline::FlatRead32((r27 + 760));
    MemoryInline::FlatWrite32((r3 + 4), r31);
    r0 = MemoryInline::FlatRead32((r27 + 776));
    r3 = MemoryInline::FlatRead32((r27 + 760));
    MemoryInline::FlatWrite32(r3, r0);
    r3 = MemoryInline::FlatRead32((r27 + 760));
    MemoryInline::FlatWrite8((r3 + 11), static_cast<uint8_t>(r31));
    r3 = MemoryInline::FlatRead32((r27 + 760));
    MemoryInline::FlatWrite32((r27 + 764), r3);
    r0 = (r3 + 12);
    MemoryInline::FlatWrite32((r27 + 760), r0);
    r29 = (r29 + 1);
    goto loc_80455560;
}

loc_80455744:
{
}

loc_80455748:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(10))) {
        goto loc_80455758;
    }
}

loc_8045574C:
{
    r3 = (r4 & 65535);
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r27 + 786), static_cast<uint16_t>(r0));
}

loc_80455758:
{
    r3 = MemoryInline::FlatRead32((r27 + 776));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r27 + 776), r0);
    r4 = MemoryInline::FlatRead32((r27 + 764));
    r3 = MemoryInline::FlatRead8((r4 + 11));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r4 + 11), static_cast<uint8_t>(r0));
    goto loc_80455560;
}

loc_80455778:
{
}

loc_8045577C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(8))) {
        goto loc_80455790;
    }
}

loc_80455780:
{
}

loc_80455784:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(4))) {
        goto loc_80455790;
    }
}

loc_80455788:
{
}

loc_8045578C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(9))) {
        goto loc_804557B0;
    }
}

loc_80455790:
{
    r0 = MemoryInline::FlatRead8((r27 + 781));
}

loc_80455798:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_804558A8;
    }
}

loc_8045579C:
{
}

loc_804557A0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(8))) {
        goto loc_804558A8;
    }
}

loc_804557A4:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r27 + 781), static_cast<uint8_t>(r0));
    goto loc_804558A8;
}

loc_804557B0:
{
    r3 = MemoryInline::FlatRead32((r27 + 776));
    r0 = MemoryInline::FlatRead8(r3);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_804557C0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(92))) {
        goto loc_804557E4;
    }
}

loc_804557C4:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r27 + 776), r0);
    r3 = MemoryInline::FlatRead32((r27 + 760));
    MemoryInline::FlatWrite8((r3 + 11), static_cast<uint8_t>(r31));
    r3 = MemoryInline::FlatRead16((r27 + 786));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r27 + 786), static_cast<uint16_t>(r0));
    goto loc_804557EC;
}

loc_804557E4:
{
    r3 = MemoryInline::FlatRead32((r27 + 760));
    MemoryInline::FlatWrite8((r3 + 11), static_cast<uint8_t>(r30));
}

loc_804557EC:
{
    r0 = MemoryInline::FlatRead32((r27 + 776));
    r3 = MemoryInline::FlatRead32((r27 + 760));
    MemoryInline::FlatWrite32(r3, r0);
    r3 = MemoryInline::FlatRead32((r27 + 760));
    MemoryInline::FlatWrite32((r27 + 764), r3);
    r0 = (r3 + 12);
    MemoryInline::FlatWrite32((r27 + 760), r0);
    r29 = (r29 + 1);
    goto loc_80455560;
}

loc_80455810:
{
    r0 = MemoryInline::FlatRead8((r27 + 780));
}

loc_80455818:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_8045584C;
    }
}

loc_8045581C:
{
    MemoryInline::FlatWrite8((r27 + 780), static_cast<uint8_t>(r31));
    r4 = MemoryInline::FlatRead32((r27 + 760));
    MemoryInline::FlatWrite32((r4 + 4), r31);
    r0 = MemoryInline::FlatRead32((r27 + 776));
    r4 = MemoryInline::FlatRead32((r27 + 760));
    MemoryInline::FlatWrite32(r4, r0);
    r4 = MemoryInline::FlatRead32((r27 + 760));
    MemoryInline::FlatWrite8((r4 + 11), static_cast<uint8_t>(r30));
    r4 = MemoryInline::FlatRead32((r27 + 760));
    MemoryInline::FlatWrite32((r27 + 764), r4);
    r0 = (r4 + 12);
    MemoryInline::FlatWrite32((r27 + 760), r0);
}

loc_8045584C:
{
}

loc_80455850:
{
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(0))) {
        goto loc_8045585C;
    }
}

loc_80455854:
{
    r28 = 1;
    r3 = 1;
}

loc_8045585C:
{
    r0 = MemoryInline::FlatRead32((r27 + 776));
    r0 = (r0 + r28);
    MemoryInline::FlatWrite32((r27 + 776), r0);
    r5 = MemoryInline::FlatRead32((r27 + 764));
    r4 = MemoryInline::FlatRead8((r5 + 11));
    r0 = (r28 & 255);
    r0 = (r4 + r0);
    MemoryInline::FlatWrite8((r5 + 11), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead16((r27 + 786));
    r0 = (r3 & 65535);
    r0 = (r4 + r0);
    MemoryInline::FlatWrite16((r27 + 786), static_cast<uint16_t>(r0));
    goto loc_80455560;
}

loc_80455890:
{
}

loc_80455894:
{
    if ((static_cast<uint32_t>(r30) == static_cast<uint32_t>(4))) {
        goto loc_804558A8;
    }
}

loc_80455898:
{
}

loc_8045589C:
{
    if ((static_cast<uint32_t>(r30) == static_cast<uint32_t>(8))) {
        goto loc_804558A8;
    }
}

loc_804558A0:
{
}

loc_804558A4:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(9))) {
        goto loc_8045555C;
    }
}

loc_804558A8:
{
    r11 = (r1 + 64);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8045551C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8045551C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000021FB gpr_write=0x000009FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8045551C func_8045551C preserves=true fpr_mask=0x00000000
