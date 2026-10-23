#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800E0A50(CpuContext* ctx);
extern "C" uint64_t func_800E0A50_ra18_2_18_0(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_80112240(CpuContext* ctx);
extern "C" uint64_t func_80112240_ra38_6_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double);
extern "C" void func_802959C0(CpuContext* ctx);
extern "C" uint64_t func_802959C0_ra38_e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);

extern "C" void func_809FD6E8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsx_809FD7B0_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;

    goto loc_809FD6E8;

loc_809FD6E8:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r31 = r3;
    r3 = (r1 + 32);
    // inline leaf 0x809EA85C (1 guest instruction(s))
    // end of inlined leaf 0x809EA85C
    r3 = (r1 + 20);
    // inline leaf 0x809EA85C (1 guest instruction(s))
    // end of inlined leaf 0x809EA85C
    r3 = (r1 + 44);
    ctx->lr = 0x809FD71Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x809F15E0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r30 = MemoryInline::FlatRead32((r31 + 12));
    r29 = MemoryInline::FlatRead32((r31 + 256));
    r0 = MemoryInline::FlatRead8((r31 + 5));
}

loc_809FD72C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_809FD744;
    }
}

loc_809FD730:
{
}

loc_809FD734:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_809FD7D0;
    }
}

loc_809FD738:
{
}

loc_809FD73C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_809FD888;
    }
}

loc_809FD740:
{
    goto loc_809FD980;
}

loc_809FD744:
{
    r3 = r30;
    // inline leaf 0x801B0170 (7 guest instruction(s))
}

loc_inl2_0x801B0170:
{
    r0 = MemoryInline::FlatRead8((r3 + 485));
}

loc_inl2_0x801B0178:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(7))) {
        goto loc_inl2_0x801B0184;
    }
}

loc_inl2_0x801B017C:
{
    r3 = -1;
    goto loc_inl2_cont_801B0170;
}

loc_inl2_0x801B0184:
{
    r3 = MemoryInline::FlatRead8((r3 + 816));
}

loc_inl2_cont_801B0170:
{
    // end of inlined leaf 0x801B0170
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_809FD754:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_809FD760;
    }
}

loc_809FD758:
{
    r3 = 1;
    goto loc_809FD984;
}

loc_809FD760:
{
    r3 = r31;
    ctx->lr = 0x809FD768u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x809FE35Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    r3 = r31;
    r4 = r30;
    ctx->lr = 0x809FD774u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x809FE1E4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    r3 = r30;
    // inline leaf 0x8012F960 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 116));
    // end of inlined leaf 0x8012F960
    r0 = (r3 & 65535);
}

loc_809FD784:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(17))) {
        goto loc_809FD980;
    }
}

loc_809FD788:
{
    r3 = MemoryInline::FlatRead8((r31 + 5));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r31 + 5), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 16), r0);
    r0 = MemoryInline::FlatRead8((r31 + 2));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = 0x80A30000u;
    r3 = (r3 + -15828);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 84));
    addr_lfsx_809FD7B0_loc_0 = (r3 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_809FD7B0_loc_0);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_809FD7B8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_809FD980;
    }
}

loc_809FD7BC:
{
    MemoryInline::FlatWriteFloat32((r31 + 84), f0.d);
    r3 = MemoryInline::FlatRead32(r29);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d));
    ctx->lr = 0x809FD7CCu;
    if constexpr (KnownRegArgsCpuCall<0x800E0A50u>(&func_800E0A50)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_800E0A50_1822 = func_800E0A50_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_800E0A50_1822);
        r4 = static_cast<uint32_t>(regargs_result_800E0A50_1822 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x800E0A50u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    }
    goto loc_809FD980;
}

loc_809FD7D0:
{
    r3 = r30;
    // inline leaf 0x801B0170 (7 guest instruction(s))
}

loc_inl4_0x801B0170:
{
    r0 = MemoryInline::FlatRead8((r3 + 485));
}

loc_inl4_0x801B0178:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(7))) {
        goto loc_inl4_0x801B0184;
    }
}

loc_inl4_0x801B017C:
{
    r3 = -1;
    goto loc_inl4_cont_801B0170;
}

loc_inl4_0x801B0184:
{
    r3 = MemoryInline::FlatRead8((r3 + 816));
}

loc_inl4_cont_801B0170:
{
    // end of inlined leaf 0x801B0170
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_809FD7E0:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_809FD7EC;
    }
}

loc_809FD7E4:
{
    r3 = 1;
    goto loc_809FD984;
}

loc_809FD7EC:
{
    r3 = r31;
    r4 = r30;
    ctx->lr = 0x809FD7F8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x809FE1E4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    r3 = r30;
    // inline leaf 0x801B0170 (7 guest instruction(s))
}

loc_inl5_0x801B0170:
{
    r0 = MemoryInline::FlatRead8((r3 + 485));
}

loc_inl5_0x801B0178:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(7))) {
        goto loc_inl5_0x801B0184;
    }
}

loc_inl5_0x801B017C:
{
    r3 = -1;
    goto loc_inl5_cont_801B0170;
}

loc_inl5_0x801B0184:
{
    r3 = MemoryInline::FlatRead8((r3 + 816));
}

loc_inl5_cont_801B0170:
{
    // end of inlined leaf 0x801B0170
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_809FD808:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_809FD980;
    }
}

loc_809FD80C:
{
    r3 = MemoryInline::FlatRead8((r31 + 5));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r31 + 5), static_cast<uint8_t>(r0));
    r3 = 0x80A20000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + -5972));
    MemoryInline::FlatWriteFloat32((r31 + 60), f0.d);
    r0 = MemoryInline::FlatRead8((r31 + 2));
}

loc_809FD82C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_809FD84C;
    }
}

loc_809FD830:
{
    r3 = 0x80A20000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + -5964));
    MemoryInline::FlatWriteFloat32((r31 + 64), f0.d);
    r3 = 0x80A20000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + -5968));
    MemoryInline::FlatWriteFloat32((r31 + 68), f0.d);
    goto loc_809FD864;
}

loc_809FD84C:
{
    r3 = 0x80A20000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + -5960));
    MemoryInline::FlatWriteFloat32((r31 + 64), f0.d);
    r3 = 0x80A20000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + -5956));
    MemoryInline::FlatWriteFloat32((r31 + 68), f0.d);
}

loc_809FD864:
{
    r3 = (r31 + 60);
    r4 = MemoryInline::FlatRead32((r30 + 448));
    ctx->lr = 0x809FD870u;
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
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800510C8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r3 = 0x80A20000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + -5952));
    MemoryInline::FlatWriteFloat32((r31 + 76), f0.d);
    r0 = 120;
    MemoryInline::FlatWrite32((r31 + 16), r0);
    goto loc_809FD980;
}

loc_809FD888:
{
    r3 = (r31 + 48);
    r4 = (r31 + 24);
    ctx->lr = 0x809FD894u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    InvokeDirectCpu<0x809EB13Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    f0 = ctx->fpr[0];
    r3 = (r31 + 24);
    r4 = (r31 + 60);
    ctx->lr = 0x809FD8A0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x809EA800u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f1.d = MemoryInline::FlatReadFloat32((r31 + 64));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 76));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 64), f0.d);
    r0 = (r1 + 44);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = (r31 + 48);
    r4 = (r31 + 24);
    r5 = (r1 + 20);
    r6 = 3;
    r7 = 65536;
    r7 = (r7 + -1);
    r8 = MemoryInline::FlatRead8((r31 + 8));
    r9 = 1024;
    r10 = (r1 + 16);
    ctx->lr = 0x809FD8E0u;
    if constexpr (KnownRegArgsCpuCall<0x802959C0u>(&func_802959C0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_802959C0_328C = func_802959C0_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_802959C0_328C);
        r4 = static_cast<uint32_t>(regargs_result_802959C0_328C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
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
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x802959C0u>(ctx);
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
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r4 = MemoryInline::FlatRead32((r31 + 16));
    r0 = (r4 + -1);
    MemoryInline::FlatWrite32((r31 + 16), r0);
}

loc_809FD8F0:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_809FD93C;
    }
}

loc_809FD8F4:
{
    r3 = (r31 + 24);
    r4 = (r1 + 20);
    ctx->lr = 0x809FD900u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    InvokeDirectCpu<0x809EB13Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    f0 = ctx->fpr[0];
    r3 = (r31 + 24);
    r4 = MemoryInline::FlatRead8((r31 + 8));
    r5 = 0;
    ctx->lr = 0x809FD910u;
    if constexpr (KnownRegArgsCpuCall<0x80112240u>(&func_80112240)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80112240_3CBD = func_80112240_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_80112240_3CBD);
        r4 = static_cast<uint32_t>(regargs_result_80112240_3CBD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80112240u>(ctx);
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
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r3 = (r31 + 24);
    r4 = 0;
    r5 = MemoryInline::FlatRead8((r31 + 8));
    r6 = 0;
    r7 = 0x80790000u;
    r7 = MemoryInline::FlatRead32((r7 + 28704));
    r12 = MemoryInline::FlatRead32((r7 + 8));
    ctr = r12;
    ctx->lr = 0x809FD934u;
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
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
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
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r3 = 1;
    goto loc_809FD984;
}

loc_809FD93C:
{
}

loc_809FD940:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_809FD980;
    }
}

loc_809FD944:
{
    r3 = (r31 + 24);
    r4 = MemoryInline::FlatRead8((r31 + 8));
    r5 = 0;
    ctx->lr = 0x809FD954u;
    if constexpr (KnownRegArgsCpuCall<0x80112240u>(&func_80112240)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80112240_4902 = func_80112240_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_80112240_4902);
        r4 = static_cast<uint32_t>(regargs_result_80112240_4902 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80112240u>(ctx);
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
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r3 = (r31 + 24);
    r4 = 0;
    r5 = MemoryInline::FlatRead8((r31 + 8));
    r6 = 0;
    r7 = 0x80790000u;
    r7 = MemoryInline::FlatRead32((r7 + 28704));
    r12 = MemoryInline::FlatRead32((r7 + 8));
    ctr = r12;
    ctx->lr = 0x809FD978u;
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
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
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
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r3 = 1;
    goto loc_809FD984;
}

loc_809FD980:
{
    r3 = 0;
}

loc_809FD984:
{
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
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
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xC0003FFF fpr_write=0xC0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x809FD6E8 func_809FD6E8 preserves=true fpr_mask=0x00000000
