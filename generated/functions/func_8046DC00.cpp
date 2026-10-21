#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8046DEA0(CpuContext* ctx);
extern "C" uint64_t func_8046DEA0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804CBA00(CpuContext* ctx);
extern "C" uint64_t func_804CBA00_ra68_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804D1740(CpuContext* ctx);
extern "C" uint64_t func_804D1740_ra8_0_18_0(CpuContext*, uint32_t);

extern "C" uint64_t func_8046DC00_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r10_rot_1 = 0;
    uint32_t r10_rot_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
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

    MKW_GUEST_ENTER(0x8046DC00u);
    goto loc_8046DC00;

loc_8046DC00:
{
    MemoryHw::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryHw::FlatWriteRam32((r1 + 36), r0);
    r31 = r3;
    r0 = MemoryHw::FlatRead32((r13 + -16280));
}

loc_8046DC24:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8046DD64;
    }
}

loc_8046DC28:
{
    r3 = MemoryHw::FlatRead32((r13 + -20760));
    ctx->lr = 0x8046DC30u;
    if constexpr (KnownRegArgsCpuCall<0x804CBA00u>(&func_804CBA00)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        const auto regargs_result_804CBA00_C24 = func_804CBA00_ra68_1fe_18_0(ctx, r3, r5, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804CBA00_C24);
        r4 = static_cast<uint32_t>(regargs_result_804CBA00_C24 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x804CBA00u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r3 = 0x80000000u;
    r4 = 1125908480;
    r0 = MemoryHw::FlatRead32((r3 + 248));
    r7 = 0;
    r5 = 274857984;
    r4 = (r4 + -8573);
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r6 = (r6_rot_1 & 1073741823);
    r3 = 65536;
    r6 = (static_cast<uint32_t>((static_cast<uint64_t>(r4) * static_cast<uint64_t>(r6)) >> 32));
    r9 = (r5 + 19923);
    r0 = (r3 + -23512);
    guest_range_0 = MemoryHw::ResolveRangeHost((r13 + -16272), 0, 40u, false, true);
    MemoryHw::WriteResolved32(guest_range_0, 32u, (r13 + -16240), r7);
    r4 = (r3 + -23536);
    r3 = (r3 + -2536);
    r10_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(17));
    r10 = (r10_rot_1 & 131071);
    MemoryHw::WriteResolved32(guest_range_0, 24u, (r13 + -16248), r7);
    r6 = (r10 * r0);
    r30 = -855638016;
    MemoryHw::WriteResolved32(guest_range_0, 16u, (r13 + -16256), r7);
    r0 = -22;
    MemoryHw::WriteResolved32(guest_range_0, 8u, (r13 + -16264), r7);
    r5 = (r10 * r4);
    MemoryHw::WriteResolved32(guest_range_0, 0u, (r13 + -16272), r7);
    r4 = (r10 * r3);
    r8 = (r10 * 31524);
    r3 = (r10 * 3000);
    r8 = (static_cast<uint32_t>((static_cast<uint64_t>(r9) * static_cast<uint64_t>(r8)) >> 32));
    r6 = (static_cast<uint32_t>((static_cast<uint64_t>(r9) * static_cast<uint64_t>(r6)) >> 32));
    r8_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(23));
    r8 = (r8_rot_1 & 8388607);
    MemoryHw::WriteResolved32(guest_range_0, 36u, (r13 + -16236), r8);
    r5 = (static_cast<uint32_t>((static_cast<uint64_t>(r9) * static_cast<uint64_t>(r5)) >> 32));
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(23));
    r6 = (r6_rot_2 & 8388607);
    MemoryHw::WriteResolved32(guest_range_0, 28u, (r13 + -16244), r6);
    r4 = (static_cast<uint32_t>((static_cast<uint64_t>(r9) * static_cast<uint64_t>(r4)) >> 32));
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(23));
    r5 = (r5_rot_1 & 8388607);
    MemoryHw::WriteResolved32(guest_range_0, 20u, (r13 + -16252), r5);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r9) * static_cast<uint64_t>(r3)) >> 32));
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(23));
    r4 = (r4_rot_1 & 8388607);
    MemoryHw::WriteResolved32(guest_range_0, 12u, (r13 + -16260), r4);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(23));
    r3 = (r3_rot_1 & 8388607);
    MemoryHw::WriteResolved32(guest_range_0, 4u, (r13 + -16268), r3);
    r3 = MemoryHw::FlatRead32((r30 + 27648));
    r0 = (r3 & r0);
    MemoryHw::FlatWrite32((r30 + 27648), r0);
    MemoryHw::FlatWrite32((r30 + 27652), r7);
    MemoryHw::FlatWrite32((r30 + 27660), r7);
    r0 = MemoryHw::FlatRead32((r30 + 27648));
    r0 = (r0 & -33);
    r0 = (r0 | 32);
    MemoryHw::FlatWrite32((r30 + 27648), r0);
    r0 = MemoryHw::FlatRead32((r30 + 27648));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(26));
    r0 = (r0_rot_1 & 1);
    r0 = (r0 ^ 1);
}

loc_8046DD08:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8046DD38;
    }
}

loc_8046DD0C:
{
    r0 = MemoryHw::FlatRead32((r30 + 27648));
    r0 = (r0 & -65);
    MemoryHw::FlatWrite32((r30 + 27648), r0);
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_2 & 1);
    // end of inlined leaf 0x804D12F0
    r29 = r3;
    ctx->lr = 0x8046DD24u;
    if constexpr (KnownRegArgsCpuCall<0x8046DEA0u>(&func_8046DEA0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        const auto regargs_result_8046DEA0_2269 = func_8046DEA0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8046DEA0_2269);
        r4 = static_cast<uint32_t>(regargs_result_8046DEA0_2269 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        InvokeDirectCpu<0x8046DEA0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
    }
    r0 = MemoryHw::FlatRead32((r30 + 27648));
    r3 = r29;
    r0 = (r0 | 64);
    MemoryHw::FlatWrite32((r30 + 27648), r0);
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl1_0x804D1330:
{
}

loc_inl1_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl1_0x804D1344;
    }
}

loc_inl1_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl1_0x804D1348;
}

loc_inl1_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl1_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_3 & 1);
}

loc_inl1_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
}

loc_8046DD38:
{
    r0 = 0;
    r4 = 0x80470000u;
    MemoryHw::FlatWrite32((r13 + -16224), r0);
    r4 = (r4 + -8832);
    r3 = 5;
    MemoryHw::FlatWrite32((r13 + -16228), r31);
    // inline leaf 0x804D1360 (5 guest instruction(s))
    r5 = MemoryHw::FlatRead32((r13 + -15032));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r5_addr_1 = (r5 + r0);
    r3 = MemoryHw::FlatRead32(r5_addr_1);
    r5_addr_2 = (r5 + r0);
    MemoryHw::FlatWrite32(r5_addr_2, r4);
    // end of inlined leaf 0x804D1360
    r3 = 67108864;
    ctx->lr = 0x8046DD5Cu;
    if constexpr (KnownRegArgsCpuCall<0x804D1740u>(&func_804D1740)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_804D1740_2C4C = func_804D1740_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_804D1740_2C4C);
        r4 = static_cast<uint32_t>(regargs_result_804D1740_2C4C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804D1740u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = 1;
    MemoryHw::FlatWrite32((r13 + -16280), r0);
}

loc_8046DD64:
{
    r0 = MemoryHw::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
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

extern "C" void func_8046DC00(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8046DC00_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000037FF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8046DC00 func_8046DC00 preserves=true fpr_mask=0x00000000
