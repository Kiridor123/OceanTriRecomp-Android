#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8047ABD0(CpuContext* ctx);
extern "C" uint64_t func_8047ABD0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80493D30(CpuContext* ctx);
extern "C" uint64_t func_80493D30_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_804926B4_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r5_addr_4 = 0;
    uint32_t r5_addr_5 = 0;
    uint32_t r5_addr_6 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
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

    MKW_GUEST_ENTER(0x804926B4u);
    goto loc_804926B4;

loc_804926B4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r5 = 0x80740000u;
    r0 = 4;
    r27 = r3;
    r28 = r4;
    r5 = (r5 + -6152);
    r30 = 0;
    r29 = 0;
    r31 = 0;
    ctr = r0;
}

loc_804926EC:
{
    r0 = (r31 & 255);
    r0 = (r0 * 52);
    r6 = (r5 + r0);
    r5_addr_2 = (r5 + r0);
    r0 = MemoryInline::FlatRead8(r5_addr_2);
}

loc_80492700:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80492728;
    }
}

loc_80492704:
{
    r0 = MemoryInline::FlatRead8((r6 + 16));
}

loc_8049270C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80492728;
    }
}

loc_80492710:
{
    r0 = MemoryInline::FlatRead16((r6 + 20));
}

loc_80492718:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_804927F0;
    }
}

loc_8049271C:
{
    r0 = MemoryInline::FlatRead16((r6 + 22));
}

loc_80492724:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_804927F0;
    }
}

loc_80492728:
{
    r31 = (r31 + 1);
    r0 = (r31 & 255);
    r0 = (r0 * 52);
    r6 = (r5 + r0);
    r5_addr_3 = (r5 + r0);
    r0 = MemoryInline::FlatRead8(r5_addr_3);
}

loc_80492740:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80492768;
    }
}

loc_80492744:
{
    r0 = MemoryInline::FlatRead8((r6 + 16));
}

loc_8049274C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80492768;
    }
}

loc_80492750:
{
    r0 = MemoryInline::FlatRead16((r6 + 20));
}

loc_80492758:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_804927F0;
    }
}

loc_8049275C:
{
    r0 = MemoryInline::FlatRead16((r6 + 22));
}

loc_80492764:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_804927F0;
    }
}

loc_80492768:
{
    r31 = (r31 + 1);
    r0 = (r31 & 255);
    r0 = (r0 * 52);
    r6 = (r5 + r0);
    r5_addr_4 = (r5 + r0);
    r0 = MemoryInline::FlatRead8(r5_addr_4);
}

loc_80492780:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804927A8;
    }
}

loc_80492784:
{
    r0 = MemoryInline::FlatRead8((r6 + 16));
}

loc_8049278C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804927A8;
    }
}

loc_80492790:
{
    r0 = MemoryInline::FlatRead16((r6 + 20));
}

loc_80492798:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_804927F0;
    }
}

loc_8049279C:
{
    r0 = MemoryInline::FlatRead16((r6 + 22));
}

loc_804927A4:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_804927F0;
    }
}

loc_804927A8:
{
    r31 = (r31 + 1);
    r0 = (r31 & 255);
    r0 = (r0 * 52);
    r6 = (r5 + r0);
    r5_addr_5 = (r5 + r0);
    r0 = MemoryInline::FlatRead8(r5_addr_5);
}

loc_804927C0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804927E8;
    }
}

loc_804927C4:
{
    r0 = MemoryInline::FlatRead8((r6 + 16));
}

loc_804927CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804927E8;
    }
}

loc_804927D0:
{
    r0 = MemoryInline::FlatRead16((r6 + 20));
}

loc_804927D8:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_804927F0;
    }
}

loc_804927DC:
{
    r0 = MemoryInline::FlatRead16((r6 + 22));
}

loc_804927E4:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_804927F0;
    }
}

loc_804927E8:
{
    r31 = (r31 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804926EC;
    }
}

loc_804927F0:
{
    r0 = (r31 & 255);
}

loc_804927F8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(16))) {
        goto loc_80492810;
    }
}

loc_804927FC:
{
    r0 = (r0 * 52);
    r3 = 0x80740000u;
    r3 = (r3 + -6152);
    r30 = (r3 + r0);
    r30 = (r30 + 16);
}

loc_80492810:
{
}

loc_80492814:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_80492848;
    }
}

loc_80492818:
{
    r3 = 0x80740000u;
    r3 = (r3 + -6152);
    r0 = MemoryInline::FlatRead8((r3 + 1025));
}

loc_80492828:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(2))) {
        goto loc_80492960;
    }
}

loc_8049282C:
{
    r3 = 1966080;
    r4 = 0x80610000u;
    r5 = r27;
    r3 = (r3 + 1);
    r4 = (r4 + 25176);
    ctx->lr = 0x80492844u;
    if constexpr (KnownRegArgsCpuCall<0x8047ABD0u>(&func_8047ABD0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_8047ABD0_19E9 = func_8047ABD0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8047ABD0_19E9);
        r4 = static_cast<uint32_t>(regargs_result_8047ABD0_19E9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        InvokeDirectCpu<0x8047ABD0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
    goto loc_80492960;
}

loc_80492848:
{
}

loc_8049284C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80492858;
    }
}

loc_80492850:
{
    r3 = r27;
    ctx->lr = 0x80492858u;
    if constexpr (KnownRegArgsCpuCall<0x80493D30u>(&func_80493D30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_80493D30_2200 = func_80493D30_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80493D30_2200);
        r4 = static_cast<uint32_t>(regargs_result_80493D30_2200 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        InvokeDirectCpu<0x80493D30u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
}

loc_80492858:
{
    r3 = 0x80740000u;
    r3 = (r3 + -6152);
    r0 = MemoryInline::FlatRead8((r3 + 1025));
}

loc_80492868:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(4))) {
        goto loc_80492884;
    }
}

loc_8049286C:
{
    r3 = 1966080;
    r4 = 0x80610000u;
    r5 = r27;
    r3 = (r3 + 3);
    r4 = (r4 + 25220);
    ctx->lr = 0x80492884u;
    if constexpr (KnownRegArgsCpuCall<0x8047ABD0u>(&func_8047ABD0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_8047ABD0_2AAF = func_8047ABD0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8047ABD0_2AAF);
        r4 = static_cast<uint32_t>(regargs_result_8047ABD0_2AAF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        InvokeDirectCpu<0x8047ABD0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
}

loc_80492884:
{
    r0 = 5;
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 4));
}

loc_80492894:
{
    if ((static_cast<uint32_t>(r27) != static_cast<uint32_t>(r0))) {
        goto loc_804928A4;
    }
}

loc_80492898:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r30 + 4), static_cast<uint16_t>(r0));
    goto loc_804928AC;
}

loc_804928A4:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r30 + 6), static_cast<uint16_t>(r0));
}

loc_804928AC:
{
    r0 = MemoryInline::FlatRead16((r30 + 4));
}

loc_804928B4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80492960;
    }
}

loc_804928B8:
{
    r0 = MemoryInline::FlatRead16((r30 + 6));
}

loc_804928C0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80492960;
    }
}

loc_804928C4:
{
    r0 = (r31 & 255);
    r3 = 0x80740000u;
    r0 = (r0 * 52);
    r4 = 0;
    r3 = (r3 + -6152);
}

loc_804928DC:
{
    r3 = (r3 + r0);
    MemoryInline::FlatWrite8((r3 + 10), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r4));
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(0))) {
        goto loc_804928F4;
    }
}

loc_804928EC:
{
    // inline leaf 0x80482078 (4 guest instruction(s))
    r3 = 0x80740000u;
    r3 = (r3 + -17608);
    r3 = MemoryInline::FlatRead8((r3 + 10175));
    // end of inlined leaf 0x80482078
    r29 = r3;
}

loc_804928F4:
{
    r0 = (r29 & 65535);
    r5 = MemoryInline::FlatRead16((r30 + 10));
}

loc_80492900:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(5))) {
        goto loc_8049293C;
    }
}

loc_80492904:
{
}

loc_80492908:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(6))) {
        goto loc_8049293C;
    }
}

loc_8049290C:
{
}

loc_80492910:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(14))) {
        goto loc_8049293C;
    }
}

loc_80492914:
{
}

loc_80492918:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(24))) {
        goto loc_8049293C;
    }
}

loc_8049291C:
{
}

loc_80492920:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(38))) {
        goto loc_8049293C;
    }
}

loc_80492924:
{
}

loc_80492928:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(41))) {
        goto loc_8049293C;
    }
}

loc_8049292C:
{
}

loc_80492930:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(37))) {
        goto loc_8049293C;
    }
}

loc_80492934:
{
}

loc_80492938:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(23))) {
        goto loc_80492940;
    }
}

loc_8049293C:
{
    r5 = 15;
}

loc_80492940:
{
    r4 = 0x80740000u;
    r3 = (r31 & 255);
    r4 = (r4 + -6152);
    r6 = 0;
    r12 = MemoryInline::FlatRead32((r4 + 832));
    r4 = 1;
    ctr = r12;
    ctx->lr = 0x80492960u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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

loc_80492960:
{
    r11 = (r1 + 32);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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

extern "C" void func_804926B4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804926B4_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804926B4 func_804926B4 preserves=true fpr_mask=0x00000000
