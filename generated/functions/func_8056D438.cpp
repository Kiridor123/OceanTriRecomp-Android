#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80529AB0(CpuContext* ctx);
extern "C" uint64_t func_80529AB0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8052A1F0(CpuContext* ctx);
extern "C" uint64_t func_8052A1F0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8056D438_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
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
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x8056D438u);
    goto loc_8056D438;

loc_8056D438:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r4 = -48;
    r8 = 0;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = 8;
    r5 = 1;
    r31 = r3;
    r7 = MemoryInline::FlatRead32((r3 + 32));
    r4 = (r7 & r4);
    MemoryInline::FlatWrite32((r3 + 32), r4);
    ctr = r0;
}

loc_8056D474:
{
    r4 = (r8 & 255);
    r6 = MemoryInline::FlatRead32((r3 + 24));
    r0 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r4));
    r0 = (r6 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8056D540;
    }
}

loc_8056D488:
{
    r4 = (r3 + r4);
    r0 = MemoryInline::FlatRead8((r4 + 57));
}

loc_8056D494:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(229))) {
        goto loc_8056D4A0;
    }
}

loc_8056D498:
{
}

loc_8056D49C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(225))) {
        goto loc_8056D4B0;
    }
}

loc_8056D4A0:
{
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r0 = (r0 | 2);
    MemoryInline::FlatWrite32((r3 + 32), r0);
    goto loc_8056D540;
}

loc_8056D4B0:
{
}

loc_8056D4B4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(228))) {
        goto loc_8056D4C0;
    }
}

loc_8056D4B8:
{
}

loc_8056D4BC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(224))) {
        goto loc_8056D4D0;
    }
}

loc_8056D4C0:
{
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r3 + 32), r0);
    goto loc_8056D540;
}

loc_8056D4D0:
{
}

loc_8056D4D4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(231))) {
        goto loc_8056D4E0;
    }
}

loc_8056D4D8:
{
}

loc_8056D4DC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(227))) {
        goto loc_8056D4F0;
    }
}

loc_8056D4E0:
{
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r0 = (r0 | 8);
    MemoryInline::FlatWrite32((r3 + 32), r0);
    goto loc_8056D540;
}

loc_8056D4F0:
{
}

loc_8056D4F4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(226))) {
        goto loc_8056D508;
    }
}

loc_8056D4F8:
{
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r0 = (r0 | 4);
    MemoryInline::FlatWrite32((r3 + 32), r0);
    goto loc_8056D540;
}

loc_8056D508:
{
}

loc_8056D50C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(230))) {
        goto loc_8056D540;
    }
}

loc_8056D510:
{
    r0 = MemoryInline::FlatRead32((r3 + 44));
}

loc_8056D518:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(9))) {
        goto loc_8056D524;
    }
}

loc_8056D51C:
{
}

loc_8056D520:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(17))) {
        goto loc_8056D534;
    }
}

loc_8056D524:
{
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r0 = (r0 | 4);
    MemoryInline::FlatWrite32((r3 + 32), r0);
    goto loc_8056D540;
}

loc_8056D534:
{
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r0 = (r0 | 32);
    MemoryInline::FlatWrite32((r3 + 32), r0);
}

loc_8056D540:
{
    r8 = (r8 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8056D474;
    }
}

loc_8056D548:
{
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r4 = (r7 & 1792);
    r0 = (r0 & 1792);
}

loc_8056D558:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_8056D568;
    }
}

loc_8056D55C:
{
    r0 = MemoryInline::FlatRead8((r3 + 48));
}

loc_8056D564:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8056D5FC;
    }
}

loc_8056D568:
{
    r0 = 0;
    r4 = MemoryInline::FlatRead32((r31 + 32));
    MemoryInline::FlatWrite8((r3 + 48), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8(r3);
    ctx->lr = 0x8056D57Cu;
    if constexpr (KnownRegArgsCpuCall<0x8052A1F0u>(&func_8052A1F0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8052A1F0_1510 = func_8052A1F0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8052A1F0_1510);
        r4 = static_cast<uint32_t>(regargs_result_8052A1F0_1510 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8052A1F0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r4 = MemoryInline::FlatRead32((r31 + 32));
    r3 = 0;
    r0 = (r4 & 256);
}

loc_8056D588:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8056D590;
    }
}

loc_8056D58C:
{
    r3 = (r3 | 1);
}

loc_8056D590:
{
    r0 = (r4 & 512);
}

loc_8056D594:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8056D5A0;
    }
}

loc_8056D598:
{
    r0 = (r3 | 2);
    r3 = (r0 & 255);
}

loc_8056D5A0:
{
    r0 = (r4 & 1024);
}

loc_8056D5A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8056D5B0;
    }
}

loc_8056D5A8:
{
    r0 = (r3 | 4);
    r3 = (r0 & 255);
}

loc_8056D5B0:
{
    r0 = MemoryInline::FlatRead8(r31);
    r30 = (r3 & 255);
    MemoryInline::FlatWriteRam32((r1 + 12), r30);
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x804D12F0
    r29 = r3;
    r5 = 0x80570000u;
    r3 = MemoryInline::FlatRead8(r31);
    r4 = r30;
    r6 = MemoryInline::FlatRead32((r1 + 8));
    r5 = (r5 + -15296);
    ctx->lr = 0x8056D5E0u;
    if constexpr (KnownRegArgsCpuCall<0x80529AB0u>(&func_80529AB0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        const auto regargs_result_80529AB0_1D8E = func_80529AB0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80529AB0_1D8E);
        r4 = static_cast<uint32_t>(regargs_result_80529AB0_1D8E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80529AB0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
    r30 = r3;
    r3 = r29;
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
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_2 & 1);
}

loc_inl1_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
}

loc_8056D5F0:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(7))) {
        goto loc_8056D5FC;
    }
}

loc_8056D5F4:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 48), static_cast<uint8_t>(r0));
}

loc_8056D5FC:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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

extern "C" void func_8056D438(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8056D438_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8056D438 func_8056D438 preserves=true fpr_mask=0x00000000
