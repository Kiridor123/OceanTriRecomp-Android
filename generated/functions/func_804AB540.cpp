#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804A9840(CpuContext* ctx);
extern "C" uint64_t func_804A9840_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804AB770(CpuContext* ctx);
extern "C" uint64_t func_804AB770_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_804D1330(CpuContext* ctx);
extern "C" uint32_t func_804D1330_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_804AB540_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_addic_src_0 = 0;
    uint32_t r0_addic_src_1 = 0;
    uint32_t r0_addic_src_2 = 0;
    uint32_t r0_addic_src_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;

    goto loc_804AB540;

loc_804AB540:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x804D12F0
    r31 = 0;
    MemoryInline::FlatWrite32((r13 + -15676), r31);
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x804D12F0
    r29 = r3;
    // inline leaf 0x804AB6C0 (14 guest instruction(s))
    r6 = 0x80750000u;
    r6 = (r6 + -29776);
    guest_range_0 = MemoryInline::ResolveRangeHost(r6, 0, 32u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r6, r6);
    r5 = (r6 + 8);
    r4 = (r6 + 16);
    r3 = (r6 + 24);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r6 + 4), r6);
        MemoryInline::WriteResolved32(guest_range_0, 8u, r5, r5);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r5 + 4), r5);
        MemoryInline::WriteResolved32(guest_range_0, 16u, r4, r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r4 + 4), r4);
        MemoryInline::WriteResolved32(guest_range_0, 24u, r3, r3);
    }
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r3 + 4), r3);
    // end of inlined leaf 0x804AB6C0
    r0 = MemoryInline::FlatRead32((r13 + -15728));
}

loc_804AB578:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804AB58C;
    }
}

loc_804AB57C:
{
    r3 = 0x804B0000u;
    r3 = (r3 + -19152);
    MemoryInline::FlatWrite32((r13 + -15616), r3);
    goto loc_804AB640;
}

loc_804AB58C:
{
    r3 = MemoryInline::FlatRead32((r13 + -15600));
}

loc_804AB594:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804AB59C;
    }
}

loc_804AB598:
{
    MemoryInline::FlatWrite32((r3 + 40), r31);
}

loc_804AB59C:
{
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_2 & 1);
    // end of inlined leaf 0x804D12F0
    r31 = r3;
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_3 & 1);
    // end of inlined leaf 0x804D12F0
    r0 = MemoryInline::FlatRead32((r13 + -15600));
    r4 = 1;
    MemoryInline::FlatWrite32((r13 + -15740), r4);
}

loc_804AB5B8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804AB5C0;
    }
}

loc_804AB5BC:
{
    MemoryInline::FlatWrite32((r13 + -15736), r4);
}

loc_804AB5C0:
{
    if constexpr (KnownRegArgsCpuCall<0x804D1330u>(&func_804D1330)) {
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        const auto regargs_result_804D1330_15EC = func_804D1330_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_804D1330_15EC;
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
    goto loc_804AB5D0;
}

loc_804AB5C8:
{
    r4 = 0;
    ctx->lr = 0x804AB5D0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    InvokeDirectCpu<0x804AAE90u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
}

loc_804AB5D0:
{
    ctx->lr = 0x804AB5D4u;
    if constexpr (KnownRegArgsCpuCall<0x804AB770u>(&func_804AB770)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_804AB770_1B59 = func_804AB770_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804AB770_1B59);
        r4 = static_cast<uint32_t>(regargs_result_804AB770_1B59 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804AB770u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_804AB5D8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804AB5C8;
    }
}

loc_804AB5DC:
{
    r3 = MemoryInline::FlatRead32((r13 + -15600));
}

loc_804AB5E4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804AB5F8;
    }
}

loc_804AB5E8:
{
    r4 = 0x804B0000u;
    r4 = (r4 + -19152);
    ctx->lr = 0x804AB5F4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    InvokeDirectCpu<0x804AAE90u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    goto loc_804AB60C;
}

loc_804AB5F8:
{
    r0 = 0x804B0000u;
    r0_addic_src_1 = r0;
    r0 = (r0_addic_src_1 + -19152);
}

loc_804AB600:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804AB60C;
    }
}

loc_804AB604:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r13 + -15676), r0);
}

loc_804AB60C:
{
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_4 & 1);
    // end of inlined leaf 0x804D12F0
    r4 = 0;
    MemoryInline::FlatWrite32((r13 + -15740), r4);
    r0 = MemoryInline::FlatRead32((r13 + -15736));
    r30 = r3;
}

loc_804AB624:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804AB630;
    }
}

loc_804AB628:
{
    MemoryInline::FlatWrite32((r13 + -15736), r4);
    ctx->lr = 0x804AB630u;
    if constexpr (KnownRegArgsCpuCall<0x804A9840u>(&func_804A9840)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_804A9840_269B = func_804A9840_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804A9840_269B);
        r4 = static_cast<uint32_t>(regargs_result_804A9840_269B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x804A9840u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
}

loc_804AB630:
{
    r3 = r30;
    if constexpr (KnownRegArgsCpuCall<0x804D1330u>(&func_804D1330)) {
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        const auto regargs_result_804D1330_2CEF = func_804D1330_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_804D1330_2CEF;
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
    r3 = r31;
    if constexpr (KnownRegArgsCpuCall<0x804D1330u>(&func_804D1330)) {
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        const auto regargs_result_804D1330_2F4B = func_804D1330_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_804D1330_2F4B;
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

loc_804AB640:
{
    r3 = r29;
    if constexpr (KnownRegArgsCpuCall<0x804D1330u>(&func_804D1330)) {
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        const auto regargs_result_804D1330_31BE = func_804D1330_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_804D1330_31BE;
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
    // inline leaf 0x804D1310 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 | 32768);
    ctx->msr = r4;
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_6 & 1);
    // end of inlined leaf 0x804D1310
    // nop
}

loc_804AB650:
{
    r0 = MemoryInline::FlatRead32((r13 + -15676));
}

loc_804AB658:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_804AB650;
    }
}

loc_804AB65C:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804AB540(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804AB540_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804AB540 func_804AB540 preserves=true fpr_mask=0x00000000
