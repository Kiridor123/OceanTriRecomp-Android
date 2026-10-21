#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80456C40(CpuContext* ctx);
extern "C" uint64_t func_80456C40_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8045FBD4(CpuContext* ctx);
extern "C" uint32_t func_8045FBD4_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8042A9E8_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x8042A9E8u);
    goto loc_8042A9E8;

loc_8042A9E8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r28 = r3;
    r4 = MemoryInline::FlatRead32((r13 + -16440));
    r31 = MemoryInline::FlatRead32((r4 + 360));
}

loc_8042AA14:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(0))) {
        goto loc_8042ABC4;
    }
}

loc_8042AA18:
{
}

loc_8042AA1C:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(10))) {
        goto loc_8042ABC4;
    }
}

loc_8042AA20:
{
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A358 (7 guest instruction(s))
}

loc_inl1_0x8041A358:
{
}

loc_inl1_0x8041A35C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x8041A36C;
    }
}

loc_inl1_0x8041A360:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    goto loc_inl1_cont_8041A358;
}

loc_inl1_0x8041A36C:
{
    r3 = 0;
}

loc_inl1_cont_8041A358:
{
    // end of inlined leaf 0x8041A358
    // inline leaf 0x8042A924 (2 guest instruction(s))
    r3 = (r3 + 2800);
    // end of inlined leaf 0x8042A924
    r30 = r3;
}

loc_8042AA38:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8042ABC4;
    }
}

loc_8042AA3C:
{
    r0 = (r28 * 692);
    r31 = (r31 + r0);
    r29 = 0;
    MemoryInline::FlatWrite32((r31 + 64), r29);
    r3 = (r31 + 400);
    r4 = 0;
    r5 = 292;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r0 = (r28 * 796);
    r3 = (r30 + r0);
    r28 = (r3 + 4);
}

loc_8042AA6C:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_8042ABC4;
    }
}

loc_8042AA70:
{
    r0 = MemoryInline::FlatRead32(r28);
    MemoryInline::FlatWrite32((r31 + 4), r0);
    MemoryInline::FlatWrite8((r31 + 8), static_cast<uint8_t>(r29));
    r0 = MemoryInline::FlatRead32((r28 + 368));
    MemoryInline::FlatWrite32((r31 + 64), r0);
    r0 = MemoryInline::FlatRead32((r31 + 64));
}

loc_8042AA8C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8042ABC4;
    }
}

loc_8042AA90:
{
    r0 = MemoryInline::FlatRead32((r28 + 372));
    MemoryInline::FlatWrite32((r31 + 60), r0);
    r3 = (r31 + 8);
    r4 = (r28 + 8);
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_8045FBD4_10F8 = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_10F8;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8045FBD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    }
    r3 = (r31 + 28);
    r4 = (r28 + 264);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 40));
    ctr = r12;
    ctx->lr = 0x8042AABCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    r3 = (r31 + 68);
    r4 = (r28 + 296);
    // inline leaf 0x803D67B4 (37 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 72u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, r4);
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 72u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, r3, r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r4 + 4));
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r3 + 4), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 8u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r4 + 8));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r4 + 12));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r3 + 8), r5);
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r3 + 12), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 16u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r4 + 16));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r4 + 20));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r3 + 16), r5);
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r3 + 20), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 24u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r4 + 24));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r4 + 28));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r3 + 24), r5);
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r3 + 28), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 32u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r4 + 32));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r4 + 36));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 32u, (r3 + 32), r5);
        MemoryInline::WriteResolved32(guest_range_1, 36u, (r3 + 36), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 40u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 40u, (r4 + 40));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 44u, (r4 + 44));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 40u, (r3 + 40), r5);
        MemoryInline::WriteResolved32(guest_range_1, 44u, (r3 + 44), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 48u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 48u, (r4 + 48));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 52u, (r4 + 52));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 48u, (r3 + 48), r5);
        MemoryInline::WriteResolved32(guest_range_1, 52u, (r3 + 52), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 56u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 56u, (r4 + 56));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 60u, (r4 + 60));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 56u, (r3 + 56), r5);
        MemoryInline::WriteResolved32(guest_range_1, 60u, (r3 + 60), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 64u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 64u, (r4 + 64));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 68u, (r4 + 68));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 64u, (r3 + 64), r5);
        MemoryInline::WriteResolved32(guest_range_1, 68u, (r3 + 68), r0);
    }
    // end of inlined leaf 0x803D67B4
    r0 = MemoryInline::FlatRead8((r28 + 384));
    MemoryInline::FlatWrite8((r31 + 140), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r28 + 793));
    MemoryInline::FlatWrite8((r31 + 141), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r31 + 88));
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16((r31 + 400), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r31 + 80));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::FlatWrite8((r31 + 402), static_cast<uint8_t>(r0));
    r3 = (r28 + 648);
    if constexpr (KnownRegArgsCpuCall<0x80456C40u>(&func_80456C40)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80456C40_2FCB = func_80456C40_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80456C40_2FCB);
        r4 = static_cast<uint32_t>(regargs_result_80456C40_2FCB >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80456C40u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_8042AAFC:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(145))) {
        goto loc_8042AB10;
    }
}

loc_8042AB00:
{
    r3 = (r28 + 648);
    if constexpr (KnownRegArgsCpuCall<0x80456C40u>(&func_80456C40)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80456C40_32D9 = func_80456C40_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80456C40_32D9);
        r4 = static_cast<uint32_t>(regargs_result_80456C40_32D9 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80456C40u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r29 = r3;
    goto loc_8042AB14;
}

loc_8042AB10:
{
    r29 = 144;
}

loc_8042AB14:
{
    r3 = (r31 + 408);
    r4 = (r28 + 648);
    r5 = r29;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r30 = 0;
    r3 = (r31 + r29);
    MemoryInline::FlatWrite8((r3 + 408), static_cast<uint8_t>(r30));
    r0 = MemoryInline::FlatRead32((r28 + 388));
}

loc_8042AB38:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(136))) {
        goto loc_8042ABB4;
    }
}

loc_8042AB3C:
{
    r3 = (r31 + 556);
    r4 = (r28 + 392);
    r5 = 136;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 571), static_cast<uint8_t>(r30));
    MemoryInline::FlatWrite8((r31 + 635), static_cast<uint8_t>(r30));
    r3 = MemoryInline::FlatRead8((r31 + 684));
}

loc_8042AB60:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(8))) {
        goto loc_8042AB68;
    }
}

loc_8042AB64:
{
    MemoryInline::FlatWrite8((r31 + 684), static_cast<uint8_t>(r0));
}

loc_8042AB68:
{
    MemoryInline::FlatWrite8((r31 + 587), static_cast<uint8_t>(r30));
    MemoryInline::FlatWrite8((r31 + 651), static_cast<uint8_t>(r30));
    r3 = MemoryInline::FlatRead8((r31 + 685));
}

loc_8042AB78:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(8))) {
        goto loc_8042AB80;
    }
}

loc_8042AB7C:
{
    MemoryInline::FlatWrite8((r31 + 685), static_cast<uint8_t>(r0));
}

loc_8042AB80:
{
    MemoryInline::FlatWrite8((r31 + 603), static_cast<uint8_t>(r30));
    MemoryInline::FlatWrite8((r31 + 667), static_cast<uint8_t>(r30));
    r3 = MemoryInline::FlatRead8((r31 + 686));
}

loc_8042AB90:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(8))) {
        goto loc_8042AB98;
    }
}

loc_8042AB94:
{
    MemoryInline::FlatWrite8((r31 + 686), static_cast<uint8_t>(r0));
}

loc_8042AB98:
{
    MemoryInline::FlatWrite8((r31 + 619), static_cast<uint8_t>(r30));
    MemoryInline::FlatWrite8((r31 + 683), static_cast<uint8_t>(r30));
    r3 = MemoryInline::FlatRead8((r31 + 687));
}

loc_8042ABA8:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(8))) {
        goto loc_8042ABC4;
    }
}

loc_8042ABAC:
{
    MemoryInline::FlatWrite8((r31 + 687), static_cast<uint8_t>(r0));
    goto loc_8042ABC4;
}

loc_8042ABB4:
{
    r3 = (r31 + 556);
    r4 = 0;
    r5 = 136;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8042ABC4:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8042A9E8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8042A9E8_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8042A9E8 func_8042A9E8 preserves=true fpr_mask=0x00000000
