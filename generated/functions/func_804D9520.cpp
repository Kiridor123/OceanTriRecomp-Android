#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804D39F0(CpuContext* ctx);
extern "C" uint64_t func_804D39F0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804D91A0(CpuContext* ctx);
extern "C" uint64_t func_804D91A0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804DEB70(CpuContext* ctx);
extern "C" uint64_t func_804DEB70_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804DED00(CpuContext* ctx);
extern "C" uint64_t func_804DED00_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804DED70(CpuContext* ctx);
extern "C" uint64_t func_804DED70_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804DEF30(CpuContext* ctx);
extern "C" uint64_t func_804DEF30_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804DF520(CpuContext* ctx);
extern "C" uint64_t func_804DF520_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_804D9520_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

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
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r16 = ctx->gpr[16];
    uint32_t r17 = ctx->gpr[17];
    uint32_t r18 = ctx->gpr[18];
    uint32_t r19 = ctx->gpr[19];
    uint32_t r20 = ctx->gpr[20];
    uint32_t r21 = ctx->gpr[21];
    uint32_t r22 = ctx->gpr[22];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
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

    MKW_GUEST_ENTER(0x804D9520u);
    goto loc_804D9520;

loc_804D9520:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r11 = (r1 + 80);
    // inline leaf 0x8045745C (17 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -64), 0, 64u, false, true);
    // end of inlined leaf 0x8045745C
    r16 = r3;
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x804D12F0
    r23 = 0x80750000u;
    r22 = 0x80750000u;
    r21 = 0x80750000u;
    r19 = r3;
    r23 = (r23 + 2208);
    r22 = (r22 + 2288);
    r21 = (r21 + 2160);
    r17 = 0;
    r18 = 0;
    r26 = -2;
    r27 = -1;
    r28 = -3;
    r29 = 0;
    r30 = 0x804E0000u;
    r31 = 0x804E0000u;
    r25 = 0x80000000u;
}

loc_804D957C:
{
    r0 = MemoryInline::FlatRead32((r13 + -14848));
    r20 = PPC_Srw(static_cast<uint32_t>(r25), static_cast<uint32_t>(r18));
    r0 = (r0 & r20);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804D95AC;
    }
}

loc_804D958C:
{
    r3 = 0;
    ctx->lr = 0x804D9594u;
    if constexpr (KnownRegArgsCpuCall<0x804D91A0u>(&func_804D91A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_804D91A0_130B = func_804D91A0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804D91A0_130B);
        r4 = static_cast<uint32_t>(regargs_result_804D91A0_130B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
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
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804D91A0u>(ctx);
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
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
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
    MemoryInline::FlatWrite8((r16 + 10), static_cast<uint8_t>(r26));
    r3 = r16;
    r4 = 0;
    r5 = 10;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_804D99A0;
}

loc_804D95AC:
{
    r0 = MemoryInline::FlatRead32((r13 + -14832));
    r0 = (r0 & r20);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804D95C4;
    }
}

loc_804D95B8:
{
    r0 = MemoryInline::FlatRead32((r13 + -20020));
}

loc_804D95C0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(r18))) {
        goto loc_804D95DC;
    }
}

loc_804D95C4:
{
    MemoryInline::FlatWrite8((r16 + 10), static_cast<uint8_t>(r26));
    r3 = r16;
    r4 = 0;
    r5 = 10;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_804D99A0;
}

loc_804D95DC:
{
    r0 = MemoryInline::FlatRead32((r13 + -14828));
    r0 = (r0 & r20);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804D9600;
    }
}

loc_804D95E8:
{
    MemoryInline::FlatWrite8((r16 + 10), static_cast<uint8_t>(r27));
    r3 = r16;
    r4 = 0;
    r5 = 10;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_804D99A0;
}

loc_804D9600:
{
    r3 = r18;
    // inline leaf 0x804DE060 (14 guest instruction(s))
}

loc_inl2_0x804DE060:
{
    r4 = 0x80760000u;
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(5));
    r0 = (r0_rot_2 & -32);
    r4 = (r4 + -25912);
    r5 = 0;
    r4_addr_2 = (r4 + r0);
    r0 = MemoryInline::FlatRead32(r4_addr_2);
}

loc_inl2_0x804DE078:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-1))) {
        goto loc_inl2_0x804DE08C;
    }
}

loc_inl2_0x804DE07C:
{
    r4 = 0x80630000u;
    r0 = MemoryInline::FlatRead32((r4 + -22368));
}

loc_inl2_0x804DE088:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(r3))) {
        goto loc_inl2_0x804DE090;
    }
}

loc_inl2_0x804DE08C:
{
    r5 = 1;
}

loc_inl2_0x804DE090:
{
    r3 = r5;
}

loc_inl2_cont_804DE060:
{
    // end of inlined leaf 0x804DE060
}

loc_804D960C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804D9628;
    }
}

loc_804D9610:
{
    MemoryInline::FlatWrite8((r16 + 10), static_cast<uint8_t>(r28));
    r3 = r16;
    r4 = 0;
    r5 = 10;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_804D99A0;
}

loc_804D9628:
{
    r3 = r18;
    ctx->lr = 0x804D9630u;
    if constexpr (KnownRegArgsCpuCall<0x804DEB70u>(&func_804DEB70)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_804DEB70_25FC = func_804DEB70_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804DEB70_25FC);
        r4 = static_cast<uint32_t>(regargs_result_804DEB70_25FC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804DEB70u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = (r3 & 8);
}

loc_804D9634:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804D9704;
    }
}

loc_804D9638:
{
    r3 = r18;
    r4 = (r1 + 8);
    ctx->lr = 0x804D9644u;
    if constexpr (KnownRegArgsCpuCall<0x804DED70u>(&func_804DED70)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_804DED70_29DF = func_804DED70_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804DED70_29DF);
        r4 = static_cast<uint32_t>(regargs_result_804DED70_29DF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x804DED70u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r0 = MemoryInline::FlatRead32((r13 + -14840));
    r0 = (r0 & r20);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804D9688;
    }
}

loc_804D9650:
{
    MemoryInline::FlatWrite8((r16 + 10), static_cast<uint8_t>(r29));
    r3 = r16;
    r4 = 0;
    r5 = 10;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = MemoryInline::FlatRead32((r13 + -14844));
    r0 = (r3 & r20);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804D99A0;
    }
}

loc_804D9670:
{
    r0 = (r3 | r20);
    MemoryInline::FlatWrite32((r13 + -14844), r0);
    r3 = r18;
    r4 = (r30 + -28576);
    ctx->lr = 0x804D9684u;
    if constexpr (KnownRegArgsCpuCall<0x804DF520u>(&func_804DF520)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_804DF520_30F8 = func_804DF520_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804DF520_30F8);
        r4 = static_cast<uint32_t>(regargs_result_804DF520_30F8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
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
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804DF520u>(ctx);
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
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
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
    goto loc_804D99A0;
}

loc_804D9688:
{
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_2 & 1);
    // end of inlined leaf 0x804D12F0
    r24 = r3;
    r3 = r20;
    ctx->lr = 0x804D9698u;
    if constexpr (KnownRegArgsCpuCall<0x804DED00u>(&func_804DED00)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_804DED00_3A8D = func_804DED00_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804DED00_3A8D);
        r4 = static_cast<uint32_t>(regargs_result_804DED00_3A8D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x804DED00u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r4 = MemoryInline::FlatRead32((r13 + -14828));
    r9 = ~(r20 | r20);
    r0 = MemoryInline::FlatRead32((r13 + -14840));
    r3 = r18;
    r8 = (r4 & r9);
    r5 = MemoryInline::FlatRead32((r13 + -14844));
    r7 = (r0 & r9);
    r0 = MemoryInline::FlatRead32((r13 + -14852));
    r6 = (r5 & r9);
    r4 = MemoryInline::FlatRead32((r13 + -14848));
    r0 = (r0 & r9);
    MemoryInline::FlatWrite32((r13 + -14828), r8);
    r5 = (r4 & r9);
    r4 = 0;
    MemoryInline::FlatWrite32((r13 + -14840), r7);
    MemoryInline::FlatWrite32((r13 + -14844), r6);
    MemoryInline::FlatWrite32((r13 + -14848), r5);
    MemoryInline::FlatWrite32((r13 + -14852), r0);
    ctx->lr = 0x804D96E4u;
    if constexpr (KnownRegArgsCpuCall<0x804D39F0u>(&func_804D39F0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_804D39F0_414F = func_804D39F0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804D39F0_414F);
        r4 = static_cast<uint32_t>(regargs_result_804D39F0_414F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
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
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804D39F0u>(ctx);
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
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
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
    r3 = r24;
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
    MemoryInline::FlatWrite8((r16 + 10), static_cast<uint8_t>(r27));
    r3 = r16;
    r4 = 0;
    r5 = 10;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_804D99A0;
}

loc_804D9704:
{
    r3 = r18;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x804DF360u>(ctx);
    r3 = ctx->gpr[3];
    r0 = (r3 & 536870912);
}

loc_804D9710:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804D9718;
    }
}

loc_804D9714:
{
    r17 = (r17 | r20);
}

loc_804D9718:
{
    r3 = r18;
    r4 = (r1 + 8);
    ctx->lr = 0x804D9724u;
    if constexpr (KnownRegArgsCpuCall<0x804DED70u>(&func_804DED70)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_804DED70_4E79 = func_804DED70_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804DED70_4E79);
        r4 = static_cast<uint32_t>(regargs_result_804DED70_4E79 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x804DED70u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_804D9728:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804D9744;
    }
}

loc_804D972C:
{
    MemoryInline::FlatWrite8((r16 + 10), static_cast<uint8_t>(r28));
    r3 = r16;
    r4 = 0;
    r5 = 10;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_804D99A0;
}

loc_804D9744:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r0 & -2147483648);
}

loc_804D974C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804D9768;
    }
}

loc_804D9750:
{
    MemoryInline::FlatWrite8((r16 + 10), static_cast<uint8_t>(r28));
    r3 = r16;
    r4 = 0;
    r5 = 10;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_804D99A0;
}

loc_804D9768:
{
    r12 = MemoryInline::FlatRead32((r13 + -20004));
    r3 = r18;
    r4 = r16;
    r5 = (r1 + 8);
    ctr = r12;
    ctx->lr = 0x804D9780u;
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
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    ctr = ctx->ctr;
    r0 = MemoryInline::FlatRead32(r23);
    r3 = (r0 & -65536);
    r0 = (r3 + -150994944);
}

loc_804D9790:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(0))) {
        goto loc_804D97B0;
    }
}

loc_804D9794:
{
    r0 = MemoryInline::FlatRead16(r16);
    r0 = (r0 & 128);
    r0 = (r0 ^ 128);
}

loc_804D97A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804D97B0;
    }
}

loc_804D97A8:
{
    r0 = 10;
    goto loc_804D97B4;
}

loc_804D97B0:
{
    r0 = 3;
}

loc_804D97B4:
{
    r4 = MemoryInline::FlatRead8((r22 + 2));
    r3 = MemoryInline::FlatRead8((r16 + 2));
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    r6 = (static_cast<int32_t>(r5) >> 31);
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r4 = (static_cast<int32_t>(r3) >> 31);
    r5 = (r6 ^ r5);
    r3 = (r4 ^ r3);
    r5 = (r5 - r6);
    r3 = (r3 - r4);
    r3 = (r3 - r5);
    r4 = (static_cast<int32_t>(r3) >> 31);
    r3 = (r4 ^ r3);
    r3 = (r3 - r4);
}

loc_804D97F0:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r0))) {
        goto loc_804D9934;
    }
}

loc_804D97F4:
{
    r4 = MemoryInline::FlatRead8((r22 + 3));
    r3 = MemoryInline::FlatRead8((r16 + 3));
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    r6 = (static_cast<int32_t>(r5) >> 31);
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r4 = (static_cast<int32_t>(r3) >> 31);
    r5 = (r6 ^ r5);
    r3 = (r4 ^ r3);
    r5 = (r5 - r6);
    r3 = (r3 - r4);
    r3 = (r3 - r5);
    r4 = (static_cast<int32_t>(r3) >> 31);
    r3 = (r4 ^ r3);
    r3 = (r3 - r4);
}

loc_804D9830:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r0))) {
        goto loc_804D9934;
    }
}

loc_804D9834:
{
    r4 = MemoryInline::FlatRead8((r22 + 4));
    r3 = MemoryInline::FlatRead8((r16 + 4));
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    r6 = (static_cast<int32_t>(r5) >> 31);
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r4 = (static_cast<int32_t>(r3) >> 31);
    r5 = (r6 ^ r5);
    r3 = (r4 ^ r3);
    r5 = (r5 - r6);
    r3 = (r3 - r4);
    r3 = (r3 - r5);
    r4 = (static_cast<int32_t>(r3) >> 31);
    r3 = (r4 ^ r3);
    r3 = (r3 - r4);
}

loc_804D9870:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r0))) {
        goto loc_804D9934;
    }
}

loc_804D9874:
{
    r4 = MemoryInline::FlatRead8((r22 + 5));
    r3 = MemoryInline::FlatRead8((r16 + 5));
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    r6 = (static_cast<int32_t>(r5) >> 31);
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r4 = (static_cast<int32_t>(r3) >> 31);
    r5 = (r6 ^ r5);
    r3 = (r4 ^ r3);
    r5 = (r5 - r6);
    r3 = (r3 - r4);
    r3 = (r3 - r5);
    r4 = (static_cast<int32_t>(r3) >> 31);
    r3 = (r4 ^ r3);
    r3 = (r3 - r4);
}

loc_804D98B0:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r0))) {
        goto loc_804D9934;
    }
}

loc_804D98B4:
{
    r5 = MemoryInline::FlatRead8((r22 + 6));
    r3 = MemoryInline::FlatRead8((r16 + 6));
    r6 = (static_cast<int32_t>(r5) >> 31);
    r4 = (static_cast<int32_t>(r3) >> 31);
    r5 = (r6 ^ r5);
    r3 = (r4 ^ r3);
    r5 = (r5 - r6);
    r3 = (r3 - r4);
    r3 = (r3 - r5);
    r4 = (static_cast<int32_t>(r3) >> 31);
    r3 = (r4 ^ r3);
    r3 = (r3 - r4);
}

loc_804D98E8:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r0))) {
        goto loc_804D9934;
    }
}

loc_804D98EC:
{
    r5 = MemoryInline::FlatRead8((r22 + 7));
    r3 = MemoryInline::FlatRead8((r16 + 7));
    r6 = (static_cast<int32_t>(r5) >> 31);
    r4 = (static_cast<int32_t>(r3) >> 31);
    r5 = (r6 ^ r5);
    r3 = (r4 ^ r3);
    r5 = (r5 - r6);
    r3 = (r3 - r4);
    r3 = (r3 - r5);
    r4 = (static_cast<int32_t>(r3) >> 31);
    r3 = (r4 ^ r3);
    r3 = (r3 - r4);
}

loc_804D9920:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r0))) {
        goto loc_804D9934;
    }
}

loc_804D9924:
{
    r3 = MemoryInline::FlatRead16(r16);
    r0 = MemoryInline::FlatRead16(r22);
}

loc_804D9930:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_804D9938;
    }
}

loc_804D9934:
{
    // inline leaf 0x804E9830 (4 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite32((r13 + -14264), r0);
    r3 = 1;
    // end of inlined leaf 0x804E9830
}

loc_804D9938:
{
    r3 = r22;
    r4 = r16;
    r5 = 12;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead16(r16);
    r0 = (r0 & 8192);
}

loc_804D9950:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804D9990;
    }
}

loc_804D9954:
{
    MemoryInline::FlatWrite8((r16 + 10), static_cast<uint8_t>(r28));
    r3 = r16;
    r4 = 0;
    r5 = 10;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = r18;
    r6 = r21;
    r8 = (r31 + -29808);
    r4 = (r13 + -20000);
    r5 = 1;
    r7 = 10;
    r10 = 0;
    r9 = 0;
    ctx->lr = 0x804D998Cu;
    if constexpr (KnownRegArgsCpuCall<0x804DEF30u>(&func_804DEF30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        const auto regargs_result_804DEF30_6E99 = func_804DEF30_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804DEF30_6E99);
        r4 = static_cast<uint32_t>(regargs_result_804DEF30_6E99 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
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
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804DEF30u>(ctx);
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
        r11 = ctx->gpr[11];
        ctr = ctx->ctr;
    }
    goto loc_804D99A0;
}

loc_804D9990:
{
    MemoryInline::FlatWrite8((r16 + 10), static_cast<uint8_t>(r29));
    r0 = MemoryInline::FlatRead16(r16);
    r0 = (r0 & -129);
    MemoryInline::FlatWrite16(r16, static_cast<uint16_t>(r0));
}

loc_804D99A0:
{
    r18 = (r18 + 1);
    r22 = (r22 + 12);
}

loc_804D99AC:
{
    r21 = (r21 + 12);
    r16 = (r16 + 12);
    r23 = (r23 + 4);
    if ((static_cast<int32_t>(r18) < static_cast<int32_t>(4))) {
        goto loc_804D957C;
    }
}

loc_804D99BC:
{
    r3 = r19;
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl6_0x804D1330:
{
}

loc_inl6_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl6_0x804D1344;
    }
}

loc_inl6_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl6_0x804D1348;
}

loc_inl6_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl6_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_5 & 1);
}

loc_inl6_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
    r11 = (r1 + 80);
    r3 = r17;
    // inline leaf 0x804574A8 (17 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -64), 0, 64u, true, false);
    // end of inlined leaf 0x804574A8
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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

extern "C" void func_804D9520(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804D9520_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804D9520 func_804D9520 preserves=true fpr_mask=0x00000000
