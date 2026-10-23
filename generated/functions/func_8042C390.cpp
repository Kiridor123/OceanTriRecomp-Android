#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004A610(CpuContext* ctx);
extern "C" uint64_t func_8004A610_ra38_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_80416440(CpuContext* ctx);
extern "C" uint64_t func_80416440_ra58_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);

extern "C" uint64_t func_8042C390_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;
    uint32_t ctr = ctx->ctr;

    goto loc_8042C390;

loc_8042C390:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = MemoryInline::FlatRead32((r13 + -16440));
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A4F4 (8 guest instruction(s))
}

loc_inl1_0x8041A4F4:
{
}

loc_inl1_0x8041A4F8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x8041A50C;
    }
}

loc_inl1_0x8041A4FC:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    goto loc_inl1_cont_8041A4F4;
}

loc_inl1_0x8041A50C:
{
    r3 = 0;
}

loc_inl1_cont_8041A4F4:
{
    // end of inlined leaf 0x8041A4F4
}

loc_8042C3BC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8042C4D4;
    }
}

loc_8042C3C0:
{
    r31 = 0;
    r3 = (r29 + 65536);
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + -24252), 0, 72u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_1, 0u, (r3 + -24252), r31);
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r3 + -24248), r31);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r3 + -24244), r31);
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r3 + -24240), r31);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r3 + -24236), r31);
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r3 + -24232), r31);
    }
    r4 = (r29 + 24);
    r3 = (r4 + 65536);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r3 + -24252), r31);
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r3 + -24248), r31);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_1, 32u, (r3 + -24244), r31);
        MemoryInline::WriteResolved32(guest_range_1, 36u, (r3 + -24240), r31);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_1, 40u, (r3 + -24236), r31);
        MemoryInline::WriteResolved32(guest_range_1, 44u, (r3 + -24232), r31);
    }
    r4 = (r4 + 24);
    r3 = (r4 + 65536);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_1, 48u, (r3 + -24252), r31);
        MemoryInline::WriteResolved32(guest_range_1, 52u, (r3 + -24248), r31);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_1, 56u, (r3 + -24244), r31);
        MemoryInline::WriteResolved32(guest_range_1, 60u, (r3 + -24240), r31);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_1, 64u, (r3 + -24236), r31);
        MemoryInline::WriteResolved32(guest_range_1, 68u, (r3 + -24232), r31);
    }
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A4F4 (8 guest instruction(s))
}

loc_inl3_0x8041A4F4:
{
}

loc_inl3_0x8041A4F8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl3_0x8041A50C;
    }
}

loc_inl3_0x8041A4FC:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    goto loc_inl3_cont_8041A4F4;
}

loc_inl3_0x8041A50C:
{
    r3 = 0;
}

loc_inl3_cont_8041A4F4:
{
    // end of inlined leaf 0x8041A4F4
    r4 = 0x80430000u;
    r4 = (r4 + -11144);
    r5 = 0;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x8042C448u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    ctr = ctx->ctr;
    r29 = 0x806D0000u;
    r3 = (r29 + 23552);
    ctx->lr = 0x8042C454u;
    if constexpr (KnownRegArgsCpuCall<0x8004A610u>(&func_8004A610)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_8004A610_1EB6 = func_8004A610_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_8004A610_1EB6);
        r4 = static_cast<uint32_t>(regargs_result_8004A610_1EB6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[12] = r12;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8004A610u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        ctr = ctx->ctr;
    }
    r0 = 255;
    r30 = (r29 + 23552);
    MemoryInline::FlatWriteRam8((r30 + 244), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r30 + 245), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r30 + 246), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r30 + 247), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r30 + 5));
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r4 = (r4_rot_1 & -16777216);
    r0 = 4;
    r3 = 0x806D0000u;
    MemoryInline::FlatWriteRam32((r3 + 23808), r0);
    r6 = 1;
    r5 = (r3 + 23808);
    guest_range_0 = MemoryInline::ResolveRangeHost((r5 + 4), 0, 32u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r5 + 4), r6);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r5 + 8), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r5 + 12), r6);
    r4 = MemoryInline::FlatRead8((r30 + 242));
    r0 = MemoryInline::FlatRead16((r29 + 23552));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r3 = (r3_rot_1 & -65536);
    r0 = MemoryInline::FlatRead8((r30 + 243));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_5 & -256);
    r0 = (r3 | r0);
    r0 = (r4 | r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r5 + 16), r0);
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r5 + 20), r6);
    }
    r0 = -1;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r5 + 24), r0);
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r5 + 28), r6);
    }
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r5 + 32), r31);
    // inline leaf 0x800E8A3C (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16732));
    // end of inlined leaf 0x800E8A3C
    r4 = (r30 + 156);
    ctx->lr = 0x8042C4D4u;
    if constexpr (KnownRegArgsCpuCall<0x80416440u>(&func_80416440)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_80416440_2DD0 = func_80416440_ra58_1e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_80416440_2DD0);
        r4 = static_cast<uint32_t>(regargs_result_80416440_2DD0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[12] = r12;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80416440u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        ctr = ctx->ctr;
    }
}

loc_8042C4D4:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8042C390(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8042C390_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8042C390 func_8042C390 preserves=true fpr_mask=0x00000000
