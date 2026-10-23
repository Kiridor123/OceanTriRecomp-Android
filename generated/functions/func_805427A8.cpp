#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8055FD64(CpuContext* ctx);
extern "C" uint64_t func_8055FD64_ra58_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8055FDCC(CpuContext* ctx);
extern "C" uint64_t func_8055FDCC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_805427A8_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
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
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_805427A8;

loc_805427A8:
{
    MemoryInline::FlatWriteRam32((r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    r11 = (r1 + 96);
    // inline leaf 0x8045747C (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    // end of inlined leaf 0x8045747C
    r7 = MemoryInline::FlatRead32((r4 + 156));
    r27 = r3;
    r28 = r4;
    r29 = r5;
    r0 = MemoryInline::FlatRead8((r7 + 188));
    r31 = (r7 + 188);
    r30 = r6;
}

loc_805427DC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(66))) {
        goto loc_805429AC;
    }
}

loc_805427E0:
{
    r5 = r31;
    r3 = (r1 + 36);
    r4 = 17;
    r6 = 0;
    r7 = 87;
    ctx->lr = 0x805427F8u;
    if constexpr (KnownRegArgsCpuCall<0x8055FDCCu>(&func_8055FDCC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_8055FDCC_AD6 = func_8055FDCC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8055FDCC_AD6);
        r4 = static_cast<uint32_t>(regargs_result_8055FDCC_AD6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        InvokeDirectCpu<0x8055FDCCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = MemoryInline::FlatRead32((r27 + 12));
    r4 = (r1 + 36);
    r3 = (r3 + 52);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 92));
    ctr = r12;
    ctx->lr = 0x80542810u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80542814:
{
    r24 = r3;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_805429AC;
    }
}

loc_8054281C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(1));
}

loc_80542820:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8054294C;
    }
}

loc_80542824:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80542834;
    }
}

loc_80542828:
{
}

loc_8054282C:
{
    if ((static_cast<int32_t>(r29) >= static_cast<int32_t>(0))) {
        goto loc_80542964;
    }
}

loc_80542830:
{
    goto loc_805429AC;
}

loc_80542834:
{
}

loc_80542838:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(4))) {
        goto loc_80542840;
    }
}

loc_8054283C:
{
    goto loc_805429AC;
}

loc_80542840:
{
    r3 = MemoryInline::FlatRead32((r30 + 12));
    r0 = (r3 & 16);
}

loc_80542848:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80542898;
    }
}

loc_8054284C:
{
    r0 = (r3 & 64);
}

loc_80542850:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805429AC;
    }
}

loc_80542854:
{
    r25 = 0x80650000u;
    r26 = 0;
    r25 = (r25 + 1208);
}

loc_80542860:
{
    r4 = MemoryInline::FlatRead32(r25);
    r3 = r31;
    ctx->lr = 0x8054286Cu;
    if constexpr (KnownRegArgsCpuCall<0x8055FD64u>(&func_8055FD64)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_8055FD64_17F0 = func_8055FD64_ra58_0_18_0(ctx, r3, r4, r6);
        r3 = static_cast<uint32_t>(regargs_result_8055FD64_17F0);
        r4 = static_cast<uint32_t>(regargs_result_8055FD64_17F0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x8055FD64u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_80542870:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8054287C;
    }
}

loc_80542874:
{
    r0 = 1;
    goto loc_80542890;
}

loc_8054287C:
{
    r26 = (r26 + 1);
    r25 = (r25 + 4);
}

loc_80542888:
{
    if ((static_cast<int32_t>(r26) < static_cast<int32_t>(12))) {
        goto loc_80542860;
    }
}

loc_8054288C:
{
    r0 = 0;
}

loc_80542890:
{
}

loc_80542894:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805429AC;
    }
}

loc_80542898:
{
    r12 = MemoryInline::FlatRead32(r24);
    r3 = r24;
    r12 = MemoryInline::FlatRead32((r12 + 36));
    ctr = r12;
    ctx->lr = 0x805428ACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_805428B0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_80542930;
    }
}

loc_805428B4:
{
    r3 = MemoryInline::FlatRead32((r27 + 12));
    r3 = (r3 + 52);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 100));
    ctr = r12;
    ctx->lr = 0x805428C8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r25 = r3;
    r4 = 0;
    // inline leaf 0x805022E0 (8 guest instruction(s))
}

loc_inl1_0x805022E0:
{
}

loc_inl1_0x805022E4:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x805022F0;
    }
}

loc_inl1_0x805022E8:
{
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_inl1_cont_805022E0;
}

loc_inl1_0x805022F0:
{
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl1_cont_805022E0:
{
    // end of inlined leaf 0x805022E0
    r26 = r3;
    goto loc_80542928;
}

loc_805428DC:
{
}

loc_805428E0:
{
    if ((static_cast<uint32_t>(r26) == static_cast<uint32_t>(r24))) {
        goto loc_80542918;
    }
}

loc_805428E4:
{
    r12 = MemoryInline::FlatRead32(r26);
    r3 = r26;
    r12 = MemoryInline::FlatRead32((r12 + 36));
    ctr = r12;
    ctx->lr = 0x805428F8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_805428FC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_80542918;
    }
}

loc_80542900:
{
    r12 = MemoryInline::FlatRead32(r26);
    r3 = r26;
    r4 = 5;
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x80542918u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80542918:
{
    r3 = r25;
    r4 = r26;
    // inline leaf 0x805022E0 (8 guest instruction(s))
}

loc_inl2_0x805022E0:
{
}

loc_inl2_0x805022E4:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl2_0x805022F0;
    }
}

loc_inl2_0x805022E8:
{
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_inl2_cont_805022E0;
}

loc_inl2_0x805022F0:
{
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl2_cont_805022E0:
{
    // end of inlined leaf 0x805022E0
    r26 = r3;
}

loc_80542928:
{
}

loc_8054292C:
{
    if ((static_cast<int32_t>(r26) != static_cast<int32_t>(0))) {
        goto loc_805428DC;
    }
}

loc_80542930:
{
    r12 = MemoryInline::FlatRead32(r24);
    r3 = r24;
    r4 = 0;
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x80542948u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_805429AC;
}

loc_8054294C:
{
    r12 = MemoryInline::FlatRead32(r3);
    r4 = 2;
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x80542960u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_805429AC;
}

loc_80542964:
{
    r3 = MemoryInline::FlatRead32((r27 + 8));
    r4 = 4;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x8054297Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r27 + 12));
    r3 = (r3 + 52);
    r12 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32((r24 + 4));
    r12 = MemoryInline::FlatRead32((r12 + 72));
    ctr = r12;
    ctx->lr = 0x80542994u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r12 = MemoryInline::FlatRead32(r24);
    r3 = r24;
    r4 = 1;
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x805429ACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_805429AC:
{
    r3 = 0;
}

loc_805429B4:
{
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    MemoryInline::FlatWriteRam32((r1 + 8), r31);
    if ((static_cast<uint32_t>(r29) != static_cast<uint32_t>(4))) {
        goto loc_80542A7C;
    }
}

loc_805429C0:
{
    r4 = MemoryInline::FlatRead32((r30 + 12));
    r0 = (r4 & 16);
}

loc_805429C8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805429F0;
    }
}

loc_805429CC:
{
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r3));
    r5 = (r1 + 8);
    r4 = 4;
    r3 = MemoryInline::FlatRead32((r27 + 12));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 32));
    ctr = r12;
    ctx->lr = 0x805429ECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80542A7C;
}

loc_805429F0:
{
    r0 = (r4 & 64);
}

loc_805429F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80542A7C;
    }
}

loc_805429F8:
{
    r25 = 0x80650000u;
    r26 = 0;
    r25 = (r25 + 1208);
}

loc_80542A04:
{
    r4 = MemoryInline::FlatRead32(r25);
    r3 = r31;
    ctx->lr = 0x80542A10u;
    if constexpr (KnownRegArgsCpuCall<0x8055FD64u>(&func_8055FD64)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_8055FD64_457E = func_8055FD64_ra58_0_18_0(ctx, r3, r4, r6);
        r3 = static_cast<uint32_t>(regargs_result_8055FD64_457E);
        r4 = static_cast<uint32_t>(regargs_result_8055FD64_457E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x8055FD64u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_80542A14:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80542A20;
    }
}

loc_80542A18:
{
    r0 = 1;
    goto loc_80542A34;
}

loc_80542A20:
{
    r26 = (r26 + 1);
    r25 = (r25 + 4);
}

loc_80542A2C:
{
    if ((static_cast<int32_t>(r26) < static_cast<int32_t>(12))) {
        goto loc_80542A04;
    }
}

loc_80542A30:
{
    r0 = 0;
}

loc_80542A34:
{
}

loc_80542A38:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80542A7C;
    }
}

loc_80542A3C:
{
    r0 = 1;
    r5 = (r1 + 8);
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r0));
    r4 = 4;
    r3 = MemoryInline::FlatRead32((r27 + 12));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 32));
    ctr = r12;
    ctx->lr = 0x80542A60u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r12 = MemoryInline::FlatRead32(r28);
    r3 = r28;
    r4 = MemoryInline::FlatRead32(r30);
    r5 = 0;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x80542A7Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80542A7C:
{
}

loc_80542A80:
{
    if ((static_cast<uint32_t>(r29) != static_cast<uint32_t>(1))) {
        goto loc_80542AA0;
    }
}

loc_80542A84:
{
    r3 = MemoryInline::FlatRead32((r27 + 12));
    r5 = (r1 + 8);
    r4 = 1;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 32));
    ctr = r12;
    ctx->lr = 0x80542AA0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80542AA0:
{
}

loc_80542AA4:
{
    if ((static_cast<uint32_t>(r29) != static_cast<uint32_t>(2))) {
        goto loc_80542BB0;
    }
}

loc_80542AA8:
{
    r0 = MemoryInline::FlatRead32((r30 + 16));
    r0 = (r0 & 16);
}

loc_80542AB0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80542BB0;
    }
}

loc_80542AB4:
{
    r0 = MemoryInline::FlatRead32((r30 + 12));
    r0 = (r0 & 16);
}

loc_80542ABC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80542BB0;
    }
}

loc_80542AC0:
{
    r26 = 0x80650000u;
    r4 = r31;
    r26 = (r26 + 1208);
    r3 = MemoryInline::FlatRead32((r26 + 52));
    ctx->lr = 0x80542AD4u;
    if constexpr (KnownRegArgsCpuCall<0x8055FD64u>(&func_8055FD64)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_8055FD64_586C = func_8055FD64_ra58_0_18_0(ctx, r3, r4, r6);
        r3 = static_cast<uint32_t>(regargs_result_8055FD64_586C);
        r4 = static_cast<uint32_t>(regargs_result_8055FD64_586C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x8055FD64u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_80542AD8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80542AF0;
    }
}

loc_80542ADC:
{
    r3 = MemoryInline::FlatRead32((r26 + 64));
    r4 = r31;
    ctx->lr = 0x80542AE8u;
    if constexpr (KnownRegArgsCpuCall<0x8055FD64u>(&func_8055FD64)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_8055FD64_5D5C = func_8055FD64_ra58_0_18_0(ctx, r3, r4, r6);
        r3 = static_cast<uint32_t>(regargs_result_8055FD64_5D5C);
        r4 = static_cast<uint32_t>(regargs_result_8055FD64_5D5C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x8055FD64u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_80542AEC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80542BB0;
    }
}

loc_80542AF0:
{
    r12 = MemoryInline::FlatRead32(r28);
    r3 = r28;
    r4 = MemoryInline::FlatRead32(r30);
    r12 = MemoryInline::FlatRead32((r12 + 40));
    ctr = r12;
    ctx->lr = 0x80542B08u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80542B0C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80542BB0;
    }
}

loc_80542B10:
{
    r3 = MemoryInline::FlatRead32((r27 + 12));
    r5 = r31;
    r3 = (r3 + 52);
    r12 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32(r30);
    r12 = MemoryInline::FlatRead32((r12 + 48));
    ctr = r12;
    ctx->lr = 0x80542B2Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80542B30:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(30))) {
        goto loc_80542BB0;
    }
}

loc_80542B34:
{
    r4 = 954466304;
    r0 = (r4 + -29127);
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r3)) >> 32));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_1 & 2147483647);
    r0 = (r0 * 9);
    r0 = (r3 - r0);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80542BB0;
    }
}

loc_80542B50:
{
    r5 = r31;
    r3 = (r1 + 16);
    r4 = 17;
    r6 = 0;
    r7 = 87;
    ctx->lr = 0x80542B68u;
    if constexpr (KnownRegArgsCpuCall<0x8055FDCCu>(&func_8055FDCC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_8055FDCC_6B57 = func_8055FDCC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8055FDCC_6B57);
        r4 = static_cast<uint32_t>(regargs_result_8055FDCC_6B57 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        InvokeDirectCpu<0x8055FDCCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = MemoryInline::FlatRead32((r27 + 12));
    r4 = (r1 + 16);
    r3 = (r3 + 52);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 92));
    ctr = r12;
    ctx->lr = 0x80542B80u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r12 = MemoryInline::FlatRead32(r3);
    r4 = 0;
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x80542B94u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r27 + 12));
    r5 = (r1 + 8);
    r4 = 4;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 32));
    ctr = r12;
    ctx->lr = 0x80542BB0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80542BB0:
{
}

loc_80542BB4:
{
    if ((static_cast<uint32_t>(r29) != static_cast<uint32_t>(2))) {
        goto loc_80542C00;
    }
}

loc_80542BB8:
{
    r3 = MemoryInline::FlatRead32((r27 + 12));
    r5 = r31;
    r3 = (r3 + 52);
    r12 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32(r30);
    r12 = MemoryInline::FlatRead32((r12 + 48));
    ctr = r12;
    ctx->lr = 0x80542BD4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80542BD8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(90))) {
        goto loc_80542C00;
    }
}

loc_80542BDC:
{
    r0 = 1;
    r5 = (r1 + 8);
    MemoryInline::FlatWriteRam8((r1 + 13), static_cast<uint8_t>(r0));
    r4 = 1;
    r3 = MemoryInline::FlatRead32((r27 + 12));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 32));
    ctr = r12;
    ctx->lr = 0x80542C00u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80542C00:
{
    r11 = (r1 + 96);
    // inline leaf 0x804574C8 (9 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, true, false);
    // end of inlined leaf 0x804574C8
    r0 = MemoryInline::FlatRead32((r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_805427A8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_805427A8_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x805427A8 func_805427A8 preserves=true fpr_mask=0x00000000
