#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804BDA30(CpuContext* ctx);
extern "C" uint64_t func_804BDA30_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804BDCE0(CpuContext* ctx);
extern "C" void func_804BDCE0_ra98_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804CBD80(CpuContext* ctx);
extern "C" uint64_t func_804CBD80_ra68_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804CBE80(CpuContext* ctx);
extern "C" uint64_t func_804CBE80_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804CCCC0(CpuContext* ctx);
extern "C" uint64_t func_804CCCC0_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_804D50B0(CpuContext* ctx);
extern "C" uint64_t func_804D50B0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_804BC150_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
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
    const uint32_t r29_entry = r29;

    goto loc_804BC150;

loc_804BC150:
{
    MemoryHw::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
}

loc_804BC15C:
{
    MemoryHw::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804BC17C;
    }
}

loc_804BC174:
{
    r31 = -4;
    goto loc_804BC394;
}

loc_804BC17C:
{
    r3 = (r3 + 44);
    // inline leaf 0x804D3FE0 (4 guest instruction(s))
    r0 = 0;
    MemoryHw::FlatWrite32((r3 + 4), r0);
    MemoryHw::FlatWrite32(r3, r0);
    // end of inlined leaf 0x804D3FE0
    r3 = r29;
    r4 = 32;
    if constexpr (KnownRegArgsCpuCall<0x804CCCC0u>(&func_804CCCC0)) {
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_804CCCC0_D2A = func_804CCCC0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804CCCC0_D2A);
        r4 = static_cast<uint32_t>(regargs_result_804CCCC0_D2A >> 32);
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804CCCC0u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x804D12F0
    r4 = 0x80750000u;
    r30 = r3;
    r3 = (r4 + -26688);
    r4 = MemoryHw::FlatRead32((r4 + -26688));
    r0 = MemoryHw::FlatRead32((r3 + 4));
    r31 = 0;
}

loc_804BC1B0:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r4))) {
        goto loc_804BC1BC;
    }
}

loc_804BC1B4:
{
    r0 = (r0 - r4);
    goto loc_804BC1D8;
}

loc_804BC1BC:
{
    r4 = (r0 - r4);
    r3 = 16;
    r0 = (r4 + -16);
    r3 = (r4 | ~r3);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_1 & 2147483647);
    r0 = (r3 - r0);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 1);
}

loc_804BC1D8:
{
}

loc_804BC1DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804BC1E8;
    }
}

loc_804BC1E0:
{
    r31 = -8;
    goto loc_804BC228;
}

loc_804BC1E8:
{
    r6 = 0x80750000u;
    r3 = r29;
    r6 = (r6 + -26688);
    r0 = MemoryHw::FlatRead32((r6 + 12));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r4 = (r6 + r0);
    MemoryHw::FlatWrite32((r4 + 16), r29);
    r5 = MemoryHw::FlatRead32((r6 + 12));
    r4 = MemoryHw::FlatRead32((r6 + 4));
    r0 = (r5 + 1);
    r5 = (r0 & 15);
    MemoryHw::FlatWriteRam32((r6 + 12), r5);
    r0 = (r4 + 1);
    MemoryHw::FlatWriteRam32((r6 + 4), r0);
    r4 = MemoryHw::FlatRead32((r29 + 8));
    if constexpr (KnownRegArgsCpuCall<0x804BDCE0u>(&func_804BDCE0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        func_804BDCE0_ra98_0_0_0(ctx, r3, r4, r7);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x804BDCE0u>(ctx);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
}

loc_804BC228:
{
}

loc_804BC22C:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_804BC248;
    }
}

loc_804BC230:
{
    r3 = r30;
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl2_0x804D1330:
{
}

loc_inl2_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl2_0x804D1344;
    }
}

loc_inl2_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl2_0x804D1348;
}

loc_inl2_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl2_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_2 & 1);
}

loc_inl2_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
    r3 = MemoryHw::FlatRead32((r13 + -20332));
    r4 = r29;
    ctx->lr = 0x804BC244u;
    if constexpr (KnownRegArgsCpuCall<0x804BDA30u>(&func_804BDA30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_804BDA30_1D3A = func_804BDA30_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804BDA30_1D3A);
        r4 = static_cast<uint32_t>(regargs_result_804BDA30_1D3A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x804BDA30u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    goto loc_804BC394;
}

loc_804BC248:
{
    r0 = MemoryHw::FlatRead32((r13 + -20336));
}

loc_804BC250:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_804BC314;
    }
}

loc_804BC254:
{
    r4 = 0x80750000u;
    r3 = (r4 + -26688);
    r4 = MemoryHw::FlatRead32((r4 + -26688));
    r0 = MemoryHw::FlatRead32((r3 + 4));
}

loc_804BC268:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r4))) {
        goto loc_804BC274;
    }
}

loc_804BC26C:
{
    r0 = (r0 - r4);
    goto loc_804BC280;
}

loc_804BC274:
{
    r0 = (r0 - r4);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_6 & 134217727);
}

loc_804BC280:
{
}

loc_804BC284:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804BC314;
    }
}

loc_804BC288:
{
    r3 = 0x80750000u;
    r3 = (r3 + -26688);
    r0 = MemoryHw::FlatRead32((r3 + 8));
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & -4);
    r3 = (r3 + r0);
    r4 = MemoryHw::FlatRead32((r3 + 16));
}

loc_804BC2A4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_804BC314;
    }
}

loc_804BC2A8:
{
    r0 = MemoryHw::FlatRead32((r4 + 40));
}

loc_804BC2B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804BC2C0;
    }
}

loc_804BC2B4:
{
    r3 = MemoryHw::FlatRead32((r13 + -20336));
    r0 = (r3 + -1);
    MemoryHw::FlatWrite32((r13 + -20336), r0);
}

loc_804BC2C0:
{
    r4 = (r4 + -2147483648);
    r3 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x804BB950u>(ctx);
    r7 = 0x80750000u;
    r3 = MemoryHw::FlatRead32((r13 + -20336));
    r6 = (r7 + -26688);
    r4 = MemoryHw::FlatRead32((r7 + -26688));
    r5 = MemoryHw::FlatRead32((r6 + 8));
    r0 = (r3 + -1);
    r3 = (r4 + 1);
    MemoryHw::FlatWriteRam32((r7 + -26688), r3);
    r4 = (r5 + 1);
    r4 = (r4 & 15);
    MemoryHw::FlatWriteRam32((r6 + 8), r4);
    r3 = 1;
    MemoryHw::FlatWrite32((r13 + -20336), r0);
    // inline leaf 0x804BB940 (4 guest instruction(s))
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_9 & -4);
    r3 = -855638016;
    r3_addr_1 = (r3 + r0);
    r3 = MemoryHw::FlatRead32(r3_addr_1);
    // end of inlined leaf 0x804BB940
    r0 = (r3 & 48);
    r3 = 1;
    r4 = (r0 | 1);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x804BB950u>(ctx);
}

loc_804BC314:
{
    r0 = 0;
    MemoryHw::FlatWrite32((r13 + -15308), r0);
    r4 = 0x80000000u;
    r3 = 274857984;
    MemoryHw::FlatWrite32((r13 + -15312), r29);
    r7 = 0x804C0000u;
    r6 = (r3 + 19923);
    r31 = 0x80750000u;
    r0 = MemoryHw::FlatRead32((r4 + 248));
    r3 = (r31 + -26608);
    r7 = (r7 + -15424);
    r5 = 0;
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r0 = (r0_rot_11 & 1073741823);
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r6) * static_cast<uint64_t>(r0)) >> 32));
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(26));
    r0 = (r0_rot_12 & 67108863);
    r6 = (r0 * 2000);
    ctx->lr = 0x804BC358u;
    if constexpr (KnownRegArgsCpuCall<0x804CBD80u>(&func_804CBD80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[7] = r7;
        const auto regargs_result_804CBD80_2EF1 = func_804CBD80_ra68_0_18_0(ctx, r3, r5, r6);
        r3 = static_cast<uint32_t>(regargs_result_804CBD80_2EF1);
        r4 = static_cast<uint32_t>(regargs_result_804CBD80_2EF1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x804CBD80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r3 = (r29 + 44);
    ctx->lr = 0x804BC360u;
    if constexpr (KnownRegArgsCpuCall<0x804D50B0u>(&func_804D50B0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[29] = r29;
        const auto regargs_result_804D50B0_3320 = func_804D50B0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804D50B0_3320);
        r4 = static_cast<uint32_t>(regargs_result_804D50B0_3320 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r13 = ctx->gpr[13];
        r29 = ctx->gpr[29];
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
        ctx->gpr[29] = r29;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x804D50B0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r13 = ctx->gpr[13];
        r29 = ctx->gpr[29];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r3 = r30;
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl4_0x804D1330:
{
}

loc_inl4_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl4_0x804D1344;
    }
}

loc_inl4_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl4_0x804D1348;
}

loc_inl4_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl4_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_3 & 1);
}

loc_inl4_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
    r0 = MemoryHw::FlatRead32((r13 + -15308));
}

loc_804BC370:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804BC390;
    }
}

loc_804BC374:
{
    r3 = (r31 + -26608);
    ctx->lr = 0x804BC37Cu;
    if constexpr (KnownRegArgsCpuCall<0x804CBE80u>(&func_804CBE80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_804CBE80_3DC2 = func_804CBE80_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804CBE80_3DC2);
        r4 = static_cast<uint32_t>(regargs_result_804CBE80_3DC2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x804CBE80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r31 = MemoryHw::FlatRead32((r29 + 4));
    r4 = r29;
    r3 = MemoryHw::FlatRead32((r13 + -20332));
    ctx->lr = 0x804BC38Cu;
    if constexpr (KnownRegArgsCpuCall<0x804BDA30u>(&func_804BDA30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_804BDA30_4231 = func_804BDA30_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804BDA30_4231);
        r4 = static_cast<uint32_t>(regargs_result_804BDA30_4231 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x804BDA30u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    goto loc_804BC394;
}

loc_804BC390:
{
    r31 = -3;
}

loc_804BC394:
{
    r3 = r31;
    r0 = MemoryHw::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->gpr[29] = r29_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804BC150(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804BC150_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000037FF gpr_write=0x1FFFFFFF gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804BC150 func_804BC150 preserves=true fpr_mask=0x00000000
