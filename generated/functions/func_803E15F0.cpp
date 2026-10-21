#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803DF66C(CpuContext* ctx);
extern "C" uint32_t func_803DF66C_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_803DFC98(CpuContext* ctx);
extern "C" uint64_t func_803DFC98_rac8_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803EA718(CpuContext* ctx);
extern "C" uint64_t func_803EA718_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_803E15F0_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;
    uint8_t* guest_range_6 = nullptr;
    uint8_t* guest_range_7 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x803E15F0u);
    goto loc_803E15F0;

loc_803E15F0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    ctx->lr = 0x803E1610u;
    if constexpr (KnownRegArgsCpuCall<0x803DF66Cu>(&func_803DF66C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        const auto regargs_result_803DF66C_949 = func_803DF66C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803DF66C_949;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x803DF66Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
    }
    r0 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r29 + 448), 0, 532u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r29 + 448), r0);
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r29 + 452), static_cast<uint8_t>(r0));
    r31 = 0;
    r30 = (r29 + 456);
}

loc_803E1624:
{
    r3 = r30;
    // inline leaf 0x803E137C (42 guest instruction(s))
    r6 = 0;
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 164u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, r3, r6);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -4896));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 76u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 76u, (r3 + 76), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 80u, (r3 + 80), f0.d);
    }
    MemoryInline::WriteResolved32(guest_range_1, 112u, (r3 + 112), r6);
    MemoryInline::WriteResolved32(guest_range_1, 36u, (r3 + 36), r6);
    MemoryInline::WriteResolved8(guest_range_1, 116u, (r3 + 116), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved32(guest_range_1, 148u, (r3 + 148), r6);
    r4 = 0x80570000u;
    r5 = (r4 + 11248);
    r4 = MemoryInline::FlatRead32(r5);
    r0 = MemoryInline::FlatRead32((r5 + 4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 152u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 152u, (r3 + 152), r4);
        MemoryInline::WriteResolved32(guest_range_1, 156u, (r3 + 156), r0);
    }
    r0 = MemoryInline::FlatRead32((r5 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 160u, (r3 + 160), r0);
    MemoryInline::WriteResolved32(guest_range_1, 40u, (r3 + 40), r6);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 84u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_1, 84u, (r3 + 84), r6);
        MemoryInline::WriteResolved32(guest_range_1, 88u, (r3 + 88), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 92u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_1, 92u, (r3 + 92), r6);
        MemoryInline::WriteResolved32(guest_range_1, 96u, (r3 + 96), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 100u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_1, 100u, (r3 + 100), r6);
        MemoryInline::WriteResolved32(guest_range_1, 104u, (r3 + 104), r6);
    }
    MemoryInline::WriteResolved32(guest_range_1, 108u, (r3 + 108), r6);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r3 + 4), r6);
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r3 + 8), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r3 + 12), r6);
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r3 + 16), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r3 + 20), r6);
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r3 + 24), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r3 + 28), r6);
        MemoryInline::WriteResolved32(guest_range_1, 32u, (r3 + 32), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_1, 44u, (r3 + 44), r6);
        MemoryInline::WriteResolved32(guest_range_1, 48u, (r3 + 48), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 52u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_1, 52u, (r3 + 52), r6);
        MemoryInline::WriteResolved32(guest_range_1, 56u, (r3 + 56), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 60u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_1, 60u, (r3 + 60), r6);
        MemoryInline::WriteResolved32(guest_range_1, 64u, (r3 + 64), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 68u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_1, 68u, (r3 + 68), r6);
        MemoryInline::WriteResolved32(guest_range_1, 72u, (r3 + 72), r6);
    }
    // end of inlined leaf 0x803E137C
    r30 = (r30 + 164);
    r31 = (r31 + 1);
}

loc_803E1638:
{
    if ((static_cast<int32_t>(r31) < static_cast<int32_t>(2))) {
        goto loc_803E1624;
    }
}

loc_803E163C:
{
    r30 = -1;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 424u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 424u, (r29 + 872), r30);
        MemoryInline::WriteResolved32(guest_range_0, 428u, (r29 + 876), r30);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 432u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 432u, (r29 + 880), r30);
        MemoryInline::WriteResolved32(guest_range_0, 436u, (r29 + 884), r30);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 440u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 440u, (r29 + 888), r30);
        MemoryInline::WriteResolved32(guest_range_0, 444u, (r29 + 892), r30);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 448u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 448u, (r29 + 896), r30);
        MemoryInline::WriteResolved32(guest_range_0, 452u, (r29 + 900), r30);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 456u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 456u, (r29 + 904), r30);
        MemoryInline::WriteResolved32(guest_range_0, 460u, (r29 + 908), r30);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 464u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 464u, (r29 + 912), r30);
        MemoryInline::WriteResolved32(guest_range_0, 468u, (r29 + 916), r30);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 472u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 472u, (r29 + 920), r30);
        MemoryInline::WriteResolved32(guest_range_0, 476u, (r29 + 924), r30);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 480u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 480u, (r29 + 928), r30);
        MemoryInline::WriteResolved32(guest_range_0, 484u, (r29 + 932), r30);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 488u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 488u, (r29 + 936), r30);
        MemoryInline::WriteResolved32(guest_range_0, 492u, (r29 + 940), r30);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 496u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 496u, (r29 + 944), r30);
        MemoryInline::WriteResolved32(guest_range_0, 500u, (r29 + 948), r30);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 504u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 504u, (r29 + 952), r30);
        MemoryInline::WriteResolved32(guest_range_0, 508u, (r29 + 956), r30);
    }
    f0.d = MemoryInline::FlatReadFloat32((r2 + -4892));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 516u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 516u, (r29 + 964), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 520u, (r29 + 968), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 524u, (r29 + 972), f0.d);
    r31 = 0;
    MemoryInline::WriteResolved8(guest_range_0, 528u, (r29 + 976), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 529u, (r29 + 977), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 530u, (r29 + 978), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 531u, (r29 + 979), static_cast<uint8_t>(r31));
    r3 = (r29 + 988);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 24));
    ctr = r12;
    ctx->lr = 0x803E16D0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    ctr = ctx->ctr;
    r3 = (r29 + 1020);
    r4 = 0;
    r5 = 20;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r29 + 1040);
    r4 = 0;
    r5 = 1;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r29 + 1044);
    r4 = 0;
    r5 = 24;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWrite32((r29 + 1068), r31);
    MemoryInline::FlatWrite32((r29 + 1072), r31);
    MemoryInline::FlatWrite16((r29 + 1076), static_cast<uint16_t>(r31));
    MemoryInline::FlatWrite32((r29 + 1104), r31);
    r3 = r29;
    ctx->lr = 0x803E1718u;
    if constexpr (KnownRegArgsCpuCall<0x803EA718u>(&func_803EA718)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_803EA718_3AF9 = func_803EA718_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803EA718_3AF9);
        r4 = static_cast<uint32_t>(regargs_result_803EA718_3AF9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803EA718u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    r3 = (r29 + 1228);
    r4 = 0;
    r5 = 116;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWrite32((r29 + 1344), r31);
    MemoryInline::FlatWrite32((r29 + 6308), r31);
    r3 = (r29 + 65536);
    r3 = (r3 + -4000);
    r4 = 0;
    r5 = 64;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r29 + 65536);
    MemoryInline::FlatWrite32((r3 + -3936), r31);
    r3 = (r3 + -3900);
    ctx->lr = 0x803E1754u;
    if constexpr (KnownRegArgsCpuCall<0x803DFC98u>(&func_803DFC98)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_803DFC98_44E4 = func_803DFC98_rac8_1fe_18_0(ctx, r3, r6, r7, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803DFC98_44E4);
        r4 = static_cast<uint32_t>(regargs_result_803DFC98_44E4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803DFC98u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    r3 = (r29 + 65536);
    r3 = (r3 + -3792);
    ctx->lr = 0x803E1760u;
    if constexpr (KnownRegArgsCpuCall<0x803DFC98u>(&func_803DFC98)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_803DFC98_4C96 = func_803DFC98_rac8_1fe_18_0(ctx, r3, r6, r7, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803DFC98_4C96);
        r4 = static_cast<uint32_t>(regargs_result_803DFC98_4C96 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803DFC98u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    r3 = (r29 + 65536);
    MemoryInline::FlatWrite32((r3 + -3684), r30);
    MemoryInline::FlatWrite32((r3 + -3668), r31);
    r3 = (r29 + 458752);
    MemoryInline::FlatWrite32((r3 + -17360), r31);
    r5 = 0;
    r4 = r29;
    r0 = 2;
    ctr = r0;
}

loc_803E1784:
{
    r3 = (r4 + 458752);
    guest_range_2 = MemoryInline::ResolveRangeHost((r3 + -17303), 0, 645u, false, true);
    MemoryInline::WriteResolved8(guest_range_2, 0u, (r3 + -17303), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_2, 92u, (r3 + -17211), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_2, 184u, (r3 + -17119), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_2, 276u, (r3 + -17027), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_2, 368u, (r3 + -16935), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_2, 460u, (r3 + -16843), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_2, 552u, (r3 + -16751), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_2, 644u, (r3 + -16659), static_cast<uint8_t>(r31));
    r4 = (r4 + 736);
    r3 = (r4 + 458752);
    guest_range_3 = MemoryInline::ResolveRangeHost((r3 + -17303), 0, 645u, false, true);
    MemoryInline::WriteResolved8(guest_range_3, 0u, (r3 + -17303), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_3, 92u, (r3 + -17211), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_3, 184u, (r3 + -17119), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_3, 276u, (r3 + -17027), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_3, 368u, (r3 + -16935), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_3, 460u, (r3 + -16843), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_3, 552u, (r3 + -16751), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_3, 644u, (r3 + -16659), static_cast<uint8_t>(r31));
    r4 = (r4 + 736);
    r3 = (r4 + 458752);
    guest_range_4 = MemoryInline::ResolveRangeHost((r3 + -17303), 0, 645u, false, true);
    MemoryInline::WriteResolved8(guest_range_4, 0u, (r3 + -17303), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_4, 92u, (r3 + -17211), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_4, 184u, (r3 + -17119), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_4, 276u, (r3 + -17027), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_4, 368u, (r3 + -16935), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_4, 460u, (r3 + -16843), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_4, 552u, (r3 + -16751), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_4, 644u, (r3 + -16659), static_cast<uint8_t>(r31));
    r4 = (r4 + 736);
    r3 = (r4 + 458752);
    guest_range_5 = MemoryInline::ResolveRangeHost((r3 + -17303), 0, 645u, false, true);
    MemoryInline::WriteResolved8(guest_range_5, 0u, (r3 + -17303), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_5, 92u, (r3 + -17211), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_5, 184u, (r3 + -17119), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_5, 276u, (r3 + -17027), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_5, 368u, (r3 + -16935), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_5, 460u, (r3 + -16843), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_5, 552u, (r3 + -16751), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_5, 644u, (r3 + -16659), static_cast<uint8_t>(r31));
    r4 = (r4 + 736);
    r3 = (r4 + 458752);
    guest_range_6 = MemoryInline::ResolveRangeHost((r3 + -17303), 0, 645u, false, true);
    MemoryInline::WriteResolved8(guest_range_6, 0u, (r3 + -17303), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_6, 92u, (r3 + -17211), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_6, 184u, (r3 + -17119), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_6, 276u, (r3 + -17027), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_6, 368u, (r3 + -16935), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_6, 460u, (r3 + -16843), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_6, 552u, (r3 + -16751), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_6, 644u, (r3 + -16659), static_cast<uint8_t>(r31));
    r4 = (r4 + 736);
    r3 = (r4 + 458752);
    guest_range_7 = MemoryInline::ResolveRangeHost((r3 + -17303), 0, 645u, false, true);
    MemoryInline::WriteResolved8(guest_range_7, 0u, (r3 + -17303), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_7, 92u, (r3 + -17211), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_7, 184u, (r3 + -17119), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_7, 276u, (r3 + -17027), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_7, 368u, (r3 + -16935), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_7, 460u, (r3 + -16843), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_7, 552u, (r3 + -16751), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_7, 644u, (r3 + -16659), static_cast<uint8_t>(r31));
    r4 = (r4 + 736);
    r5 = (r5 + 48);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803E1784;
    }
}

loc_803E187C:
{
    r4 = (r29 + 458752);
    r0 = (r5 * 92);
    r3 = (r4 + r0);
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + -17303), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + -17211), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + -17119), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + -17027), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r4 + -8092), r0);
    MemoryInline::FlatWrite32((r4 + -7896), r0);
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803E15F0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803E15F0_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803E15F0 func_803E15F0 preserves=true fpr_mask=0x00000000
