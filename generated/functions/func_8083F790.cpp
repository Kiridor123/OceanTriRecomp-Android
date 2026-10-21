#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80457338(CpuContext* ctx);
extern "C" uint64_t func_80457338_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" void func_8083F790(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t stackword21 = 0;
    uint32_t stackword22 = 0;
    uint32_t stackword23 = 0;
    uint32_t stackword24 = 0;
    uint32_t stackword29 = 0;
    uint32_t stackword30 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x8083F790u);
    goto loc_8083F790;

loc_8083F790:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -192), 0, 200u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -192), r1);
    r1 = (r1 + -192);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 196u, (r1 + 196), r0);
    r11 = (r1 + 128);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 176u, (r1 + 176), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 184);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 160u, (r1 + 160), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 168);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 144u, (r1 + 144), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 152);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 128u, (r1 + 128), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 136);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    // inline leaf 0x80457480 (8 guest instruction(s))
    // end of inlined leaf 0x80457480
    r25 = 0;
    MemoryInline::WriteResolved32(guest_range_0, 64u, (r1 + 64), r25);
    r27 = r3;
    r28 = r4;
    MemoryInline::WriteResolved32(guest_range_0, 68u, (r1 + 68), r25);
    r29 = r5;
    r30 = r6;
    MemoryInline::WriteResolved32(guest_range_0, 72u, (r1 + 72), r25);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r1 + 56), r3);
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r1 + 60), r5);
    }
    // inline leaf 0x80837280 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 72));
    // end of inlined leaf 0x80837280
    r5 = MemoryInline::FlatRead32((r3 + 4));
    r6 = 0x80840000u;
    r4 = MemoryInline::FlatRead32((r3 + 8));
    r31 = 0;
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r3 = r27;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    f31.d = MemoryInline::FlatReadFloat32((r6 + 18816));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r1 + 40), r31);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r1 + 44), r5);
    }
    MemoryInline::WriteResolved32(guest_range_0, 48u, (r1 + 48), r4);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r1 + 8), r5);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r1 + 12), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r1 + 16), r0);
    MemoryInline::FlatWriteFloat32(r28, f31.d);
    MemoryInline::FlatWriteFloat32((r28 + 8), f31.d);
    // inline leaf 0x80837280 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 72));
    // end of inlined leaf 0x80837280
}

loc_8083F838:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8083F850;
    }
}

loc_8083F83C:
{
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 52));
    ctr = r12;
    ctx->lr = 0x8083F84Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    r25 = r3;
}

loc_8083F850:
{
    r3 = r27;
    // inline leaf 0x808382E0 (2 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r3 + 40));
    // end of inlined leaf 0x808382E0
    r3 = (r25 ^ -2147483648);
    r0 = 1127219200;
    stackword21 = r3;
    MemoryInline::FlatWriteRam32((r1 + 84), r3);
    r4 = 0x80840000u;
    f4.d = MemoryInline::FlatReadFloat64((r4 + 18824));
    r3 = 0x80840000u;
    stackword22 = r0;
    MemoryInline::FlatWriteRam32((r1 + 80), r0);
    f2.d = MemoryInline::FlatReadFloat32((r27 + 80));
    f3.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword22), static_cast<uint32_t>(stackword21));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 18816));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f4.d));
    f1.d = PpcFmulsInline(f3.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8083F890:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8083F898;
    }
}

loc_8083F894:
{
    goto loc_8083F89C;
}

loc_8083F898:
{
    f1.d = f0.d;
}

loc_8083F89C:
{
    MemoryInline::FlatWriteFloat32((r28 + 4), f1.d);
    r3 = r27;
    // inline leaf 0x80837280 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 72));
    // end of inlined leaf 0x80837280
}

loc_8083F8AC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8083F8C8;
    }
}

loc_8083F8B0:
{
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 52));
    ctr = r12;
    ctx->lr = 0x8083F8C0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    r25 = r3;
    goto loc_8083F8CC;
}

loc_8083F8C8:
{
    r25 = 0;
}

loc_8083F8CC:
{
    r3 = r27;
    // inline leaf 0x808382E0 (2 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r3 + 40));
    // end of inlined leaf 0x808382E0
    r3 = (r25 ^ -2147483648);
    r0 = 1127219200;
    stackword23 = r3;
    MemoryInline::FlatWriteRam32((r1 + 92), r3);
    r4 = 0x80840000u;
    f4.d = MemoryInline::FlatReadFloat64((r4 + 18824));
    r3 = 0x80840000u;
    stackword24 = r0;
    MemoryInline::FlatWriteRam32((r1 + 88), r0);
    f2.d = MemoryInline::FlatReadFloat32((r27 + 80));
    f3.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword24), static_cast<uint32_t>(stackword23));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 18816));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f4.d));
    f1.d = PpcFmulsInline(f3.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8083F90C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8083F914;
    }
}

loc_8083F910:
{
    goto loc_8083F918;
}

loc_8083F914:
{
    f1.d = f0.d;
}

loc_8083F918:
{
    MemoryInline::FlatWriteFloat32((r28 + 12), f1.d);
    r3 = (r1 + 40);
    r12 = (r1 + 44);
    MemoryInline::FlatWriteRam32((r1 + 40), r29);
    ctx->lr = 0x8083F92Cu;
    if constexpr (KnownRegArgsCpuCall<0x80457338u>(&func_80457338)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80457338_289B = func_80457338_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80457338_289B);
        r4 = static_cast<uint32_t>(regargs_result_80457338_289B >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
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
        cr = ctx->cr;
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80457338u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
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
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    // nop
    r5 = 0x80840000u;
    r4 = 0x80840000u;
    f28.d = MemoryInline::FlatReadFloat32((r5 + 18816));
    r25 = r3;
    f30.d = MemoryInline::FlatReadFloat64((r4 + 18824));
    r26 = 1127219200;
    goto loc_8083FB1C;
}

loc_8083F94C:
{
    r0 = (r25 & 65535);
}

loc_8083F954:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(32))) {
        goto loc_8083FA68;
    }
}

loc_8083F958:
{
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r31));
    f1.d = f31.d;
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_3 & 134217727);
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f31.d);
    r3 = r27;
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f28.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f28.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f28.d);
    MemoryInline::FlatWriteRam32((r1 + 60), r4);
    MemoryInline::FlatWriteRam32((r1 + 72), r0);
    // inline leaf 0x808388E0 (2 guest instruction(s))
    MemoryInline::FlatWriteFloat32((r3 + 44), f1.d);
    // end of inlined leaf 0x808388E0
    r3 = MemoryInline::FlatRead32((r27 + 92));
    r4 = (r1 + 24);
    r5 = (r25 & 65535);
    r6 = (r1 + 56);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x8083F9A4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    r0 = MemoryInline::FlatRead32((r1 + 60));
    r25 = r3;
    MemoryInline::FlatWriteRam32((r1 + 40), r0);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 24));
    f0.d = MemoryInline::FlatReadFloat32(r28);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8083F9BC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8083F9C4;
    }
}

loc_8083F9C0:
{
    goto loc_8083F9C8;
}

loc_8083F9C4:
{
    f1.d = f0.d;
}

loc_8083F9C8:
{
    MemoryInline::FlatWriteFloat32(r28, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 4));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 28));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8083F9D8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8083F9E0;
    }
}

loc_8083F9DC:
{
    goto loc_8083F9E4;
}

loc_8083F9E0:
{
    f1.d = f0.d;
}

loc_8083F9E4:
{
    MemoryInline::FlatWriteFloat32((r28 + 4), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 32));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8083F9F4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8083F9FC;
    }
}

loc_8083F9F8:
{
    goto loc_8083FA00;
}

loc_8083F9FC:
{
    f1.d = f0.d;
}

loc_8083FA00:
{
    MemoryInline::FlatWriteFloat32((r28 + 8), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 12));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 36));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8083FA10:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8083FA18;
    }
}

loc_8083FA14:
{
    goto loc_8083FA1C;
}

loc_8083FA18:
{
    f1.d = f0.d;
}

loc_8083FA1C:
{
    MemoryInline::FlatWriteFloat32((r28 + 12), f1.d);
    r3 = r27;
    // inline leaf 0x80838940 (2 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r3 + 44));
    // end of inlined leaf 0x80838940
}

loc_8083FA2C:
{
    f31.d = f1.d;
    if ((static_cast<int32_t>(r25) != static_cast<int32_t>(4))) {
        goto loc_8083FA3C;
    }
}

loc_8083FA34:
{
    r3 = r30;
    goto loc_8083FB4C;
}

loc_8083FA3C:
{
}

loc_8083FA40:
{
    if ((static_cast<int32_t>(r25) != static_cast<int32_t>(1))) {
        goto loc_8083FA4C;
    }
}

loc_8083FA44:
{
    r31 = 0;
    goto loc_8083FB08;
}

loc_8083FA4C:
{
}

loc_8083FA50:
{
    if ((static_cast<int32_t>(r25) != static_cast<int32_t>(2))) {
        goto loc_8083FA5C;
    }
}

loc_8083FA54:
{
    r31 = 1;
    goto loc_8083FB08;
}

loc_8083FA5C:
{
}

loc_8083FA60:
{
    if ((static_cast<int32_t>(r25) == static_cast<int32_t>(3))) {
        goto loc_8083FB38;
    }
}

loc_8083FA64:
{
    goto loc_8083FB08;
}

loc_8083FA68:
{
}

loc_8083FA6C:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_8083FA78;
    }
}

loc_8083FA70:
{
    f0.d = MemoryInline::FlatReadFloat32((r27 + 76));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f31.d + f0.d));
}

loc_8083FA78:
{
    r3 = r27;
    r31 = 1;
    // inline leaf 0x80838670 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 67));
    // end of inlined leaf 0x80838670
}

loc_8083FA88:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8083FA9C;
    }
}

loc_8083FA8C:
{
    r3 = r27;
    // inline leaf 0x80838690 (2 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r3 + 68));
    // end of inlined leaf 0x80838690
    f31.d = static_cast<double>(PpcForceSingleValueInline(f31.d + f1.d));
    goto loc_8083FAE0;
}

loc_8083FA9C:
{
    r3 = r27;
    // inline leaf 0x808382D0 (2 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r3 + 36));
    // end of inlined leaf 0x808382D0
    f29.d = f1.d;
    r3 = r27;
    // inline leaf 0x80837280 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 72));
    // end of inlined leaf 0x80837280
    r12 = MemoryInline::FlatRead32(r3);
    r4 = (r25 & 65535);
    r12 = MemoryInline::FlatRead32((r12 + 72));
    ctr = r12;
    ctx->lr = 0x8083FAC4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    r0 = (r3 ^ -2147483648);
    stackword29 = r0;
    MemoryInline::FlatWriteRam32((r1 + 92), r0);
    stackword30 = r26;
    MemoryInline::FlatWriteRam32((r1 + 88), r26);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword30), static_cast<uint32_t>(stackword29));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f30.d));
    f0.d = PpcFmulsInline(f0.d, f29.d);
    f31.d = static_cast<double>(PpcForceSingleValueInline(f31.d + f0.d));
}

loc_8083FAE0:
{
    f0.d = MemoryInline::FlatReadFloat32(r28);
    SetCRFloatResident(cr, 0, f0.d, f31.d);
}

loc_8083FAE8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8083FAF0;
    }
}

loc_8083FAEC:
{
    f0.d = f31.d;
}

loc_8083FAF0:
{
    f1.d = MemoryInline::FlatReadFloat32((r28 + 8));
    MemoryInline::FlatWriteFloat32(r28, f0.d);
    SetCRFloatResident(cr, 0, f1.d, f31.d);
}

loc_8083FAFC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8083FB04;
    }
}

loc_8083FB00:
{
    f1.d = f31.d;
}

loc_8083FB04:
{
    MemoryInline::FlatWriteFloat32((r28 + 8), f1.d);
}

loc_8083FB08:
{
    r3 = (r1 + 40);
    r12 = (r1 + 44);
    ctx->lr = 0x8083FB14u;
    if constexpr (KnownRegArgsCpuCall<0x80457338u>(&func_80457338)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80457338_4EEC = func_80457338_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80457338_4EEC);
        r4 = static_cast<uint32_t>(regargs_result_80457338_4EEC >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
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
        cr = ctx->cr;
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80457338u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
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
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    // nop
    r25 = r3;
}

loc_8083FB1C:
{
    r4 = MemoryInline::FlatRead32((r1 + 40));
    r3 = (r4 - r29);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 1);
    r0 = (r0 + r3);
    r0 = (static_cast<int32_t>(r0) >> 1);
}

loc_8083FB34:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(r30))) {
        goto loc_8083F94C;
    }
}

loc_8083FB38:
{
    r0 = MemoryInline::FlatRead32((r1 + 40));
    r3 = (r0 - r29);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_6 & 1);
    r0 = (r0 + r3);
    r3 = (static_cast<int32_t>(r0) >> 1);
}

loc_8083FB4C:
{
    r11 = (r1 + 128);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 100), 0, 100u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 76u, (r1 + 176));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 60u, (r1 + 160));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 44u, (r1 + 144));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 28u, (r1 + 128));
    // inline leaf 0x804574CC (8 guest instruction(s))
    // end of inlined leaf 0x804574CC
    r0 = MemoryInline::ReadResolved32(guest_range_1, 96u, (r1 + 196));
    ctx->lr = r0;
    r1 = (r1 + 192);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xF0003FFF fpr_write=0xF0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8083F790 func_8083F790 preserves=true fpr_mask=0x00000000
