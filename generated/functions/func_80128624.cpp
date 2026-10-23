#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801282D8(CpuContext* ctx);
extern "C" uint64_t func_801282D8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_801283A4(CpuContext* ctx);
extern "C" uint64_t func_801283A4_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80128604(CpuContext* ctx);
extern "C" void func_80128604_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80128C5C(CpuContext* ctx);
extern "C" uint64_t func_80128C5C_ra38_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_801297A8(CpuContext* ctx);
extern "C" uint64_t func_801297A8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8012CF00(CpuContext* ctx);
extern "C" void func_8012CF00_ra18_0_0_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8012CF68(CpuContext* ctx);
extern "C" uint32_t func_8012CF68_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8012E13C(CpuContext* ctx);
extern "C" uint32_t func_8012E13C_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8012E1BC(CpuContext* ctx);
extern "C" uint32_t func_8012E1BC_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8012E338(CpuContext* ctx);
extern "C" uint32_t func_8012E338_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80132B34(CpuContext* ctx);
extern "C" uint64_t func_80132B34_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_80132CF0(CpuContext* ctx);
extern "C" uint64_t func_80132CF0_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_80132F5C(CpuContext* ctx);
extern "C" uint64_t func_80132F5C_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_80133434(CpuContext* ctx);
extern "C" uint32_t func_80133434_ra8_0_10_0(CpuContext*, uint32_t);
extern "C" void func_80137784(CpuContext* ctx);
extern "C" uint64_t func_80137784_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_803373E0(CpuContext* ctx);
extern "C" uint64_t func_803373E0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_80128604_statefree(uint32_t, uint32_t, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_8012CF00_statefree(uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_8012CF68_statefree(uint32_t, uint32_t);

extern "C" void func_80128624(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_10 = 0;
    uint32_t r3_rot_11 = 0;
    uint32_t r3_rot_12 = 0;
    uint32_t r3_rot_13 = 0;
    uint32_t r3_rot_14 = 0;
    uint32_t r3_rot_15 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    uint32_t ctr = ctx->ctr;

    goto loc_80128624;

loc_80128624:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r30 = r3;
    MemoryInline::WriteResolved8(guest_range_0, 8u, (r1 + 8), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 9u, (r1 + 9), static_cast<uint8_t>(r5));
    r31 = r6;
    r0 = (r6 & 255);
}

loc_80128650:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_8012867C;
    }
}

loc_80128654:
{
    r0 = MemoryInline::FlatRead8((r3 + 485));
}

loc_8012865C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(11))) {
        goto loc_8012867C;
    }
}

loc_80128660:
{
    r0 = (r4 & 255);
}

loc_80128668:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(12))) {
        goto loc_801289E4;
    }
}

loc_8012866C:
{
    r0 = (r5 & 255);
}

loc_80128674:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_8012867C;
    }
}

loc_80128678:
{
    goto loc_801289E4;
}

loc_8012867C:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 489), static_cast<uint8_t>(r0));
    r0 = (r6 & 255);
}

loc_8012868C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80128698;
    }
}

loc_80128690:
{
}

loc_80128694:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(5))) {
        goto loc_80128708;
    }
}

loc_80128698:
{
    r3 = r30;
    // inline leaf 0x8012D204 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 501));
    // end of inlined leaf 0x8012D204
}

loc_801286A4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801289E4;
    }
}

loc_801286A8:
{
    r0 = MemoryInline::FlatRead8((r30 + 2207));
}

loc_801286B0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_801286E8;
    }
}

loc_801286B4:
{
    r3 = r30;
    // inline leaf 0x8012ECC4 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2218));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 134217727);
    // end of inlined leaf 0x8012ECC4
}

loc_801286C0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80128708;
    }
}

loc_801286C4:
{
    r3 = r30;
    r4 = 4;
    // inline leaf 0x8012CF68 (7 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 1940));
    r0 = (r4 & 65535);
    r3 = (r3 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    // end of inlined leaf 0x8012CF68
}

loc_801286D4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80128708;
    }
}

loc_801286D8:
{
    r3 = r30;
    r4 = 2;
    ctx->lr = 0x801286E4u;
    if constexpr (KnownRegArgsCpuCall<0x80137784u>(&func_80137784)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80137784_1DFB = func_80137784_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80137784_1DFB);
        r4 = static_cast<uint32_t>(regargs_result_80137784_1DFB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80137784u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_80128708;
}

loc_801286E8:
{
}

loc_801286EC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_80128708;
    }
}

loc_801286F0:
{
    r0 = MemoryInline::FlatRead16((r30 + 2210));
}

loc_801286F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80128708;
    }
}

loc_801286FC:
{
    r3 = r30;
    r4 = 0;
    ctx->lr = 0x80128708u;
    if constexpr (KnownRegArgsCpuCall<0x80137784u>(&func_80137784)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80137784_22C4 = func_80137784_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80137784_22C4);
        r4 = static_cast<uint32_t>(regargs_result_80137784_22C4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80137784u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_80128708:
{
    r3 = r30;
    // inline leaf 0x8012D204 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 501));
    // end of inlined leaf 0x8012D204
}

loc_80128714:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80128724;
    }
}

loc_80128718:
{
    r0 = (r31 & 255);
}

loc_80128720:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_80128730;
    }
}

loc_80128724:
{
    r0 = (r31 & 255);
}

loc_8012872C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80128780;
    }
}

loc_80128730:
{
    r3 = r30;
    r4 = 4;
    ctx->lr = 0x8012873Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80126520u>(ctx);
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
    r29 = r3;
}

loc_80128744:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80128780;
    }
}

loc_80128748:
{
    r28 = MemoryInline::FlatRead8((r1 + 8));
    r27 = MemoryInline::FlatRead8((r1 + 9));
    r3 = r30;
    r4 = (r1 + 8);
    r5 = (r1 + 9);
    r12 = r29;
    ctr = r12;
    ctx->lr = 0x80128768u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    r0 = MemoryInline::FlatRead8((r1 + 8));
}

loc_80128770:
{
    if ((static_cast<uint32_t>(r28) != static_cast<uint32_t>(r0))) {
        goto loc_80128748;
    }
}

loc_80128774:
{
    r0 = MemoryInline::FlatRead8((r1 + 9));
}

loc_8012877C:
{
    if ((static_cast<uint32_t>(r27) != static_cast<uint32_t>(r0))) {
        goto loc_80128748;
    }
}

loc_80128780:
{
    r0 = (r31 + 254);
    r0 = (r0 & 255);
}

loc_8012878C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_8012879C;
    }
}

loc_80128790:
{
    r3 = r30;
    r4 = 0;
    ctx->lr = 0x8012879Cu;
    if constexpr (KnownRegArgsCpuCall<0x80128C5Cu>(&func_80128C5C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        const auto regargs_result_80128C5C_31B9 = func_80128C5C_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_80128C5C_31B9);
        r4 = static_cast<uint32_t>(regargs_result_80128C5C_31B9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
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
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80128C5Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        ctr = ctx->ctr;
    }
}

loc_8012879C:
{
    r0 = (r31 + 253);
    r0 = (r0 & 255);
}

loc_801287A8:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_801287B4;
    }
}

loc_801287AC:
{
    r29 = MemoryInline::FlatRead16((r30 + 492));
    goto loc_801287C0;
}

loc_801287B4:
{
    r3 = 1;
    // inline leaf 0x800CEF20 (23 guest instruction(s))
}

loc_inl5_0x800CEF20:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r6 = (r4 + r0);
    r0 = MemoryInline::FlatRead16((r6 + 24));
}

loc_inl5_0x800CEF38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl5_0x800CEF40;
    }
}

loc_inl5_0x800CEF3C:
{
    r0 = 1;
}

loc_inl5_0x800CEF40:
{
    r5 = (r0 * 176);
    r3 = 11337728;
    r0 = (r3 + 30009);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r5)) >> 32));
    r0 = (r5 - r3);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_2 & 2147483647);
    r0 = (r0 + r3);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_1 & 131071);
    r3 = 65536;
    r0 = (r3 + -173);
    r0 = (r4 * r0);
    r0 = (r5 - r0);
    r3 = (r0 & 65535);
    MemoryInline::FlatWriteRam16((r6 + 24), static_cast<uint16_t>(r3));
}

loc_inl5_cont_800CEF20:
{
    // end of inlined leaf 0x800CEF20
    r29 = r3;
}

loc_801287C0:
{
    r0 = (r31 & 255);
}

loc_801287C8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801287D4;
    }
}

loc_801287CC:
{
}

loc_801287D0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(5))) {
        goto loc_80128838;
    }
}

loc_801287D4:
{
    r0 = MemoryInline::FlatRead32((r30 + 456));
    r0 = (r0 & 8);
}

loc_801287E0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80128838;
    }
}

loc_801287E4:
{
    r3 = r30;
    r4 = MemoryInline::FlatRead8((r1 + 8));
    r5 = MemoryInline::FlatRead8((r1 + 9));
    r6 = (r29 & 65535);
    // inline leaf 0x801285F4 (4 guest instruction(s))
    MemoryInline::FlatWrite8((r3 + 494), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 495), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite16((r3 + 496), static_cast<uint16_t>(r6));
    // end of inlined leaf 0x801285F4
    r3 = r30;
    r4 = 1;
    r5 = 0;
    ctx->lr = 0x80128808u;
    if constexpr (KnownRegArgsCpuCall<0x803373E0u>(&func_803373E0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_803373E0_4155 = func_803373E0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803373E0_4155);
        r4 = static_cast<uint32_t>(regargs_result_803373E0_4155 >> 32);
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803373E0u>(ctx);
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
    r0 = (r31 & 255);
}

loc_80128810:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(5))) {
        goto loc_80128838;
    }
}

loc_80128814:
{
    // inline leaf 0x80144560 (4 guest instruction(s))
    r3 = 0x806A0000u;
    r3 = (r3 + 27152);
    r3 = MemoryInline::FlatRead16((r3 + 872));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    // end of inlined leaf 0x80144560
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
}

loc_80128820:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80128838;
    }
}

loc_80128824:
{
    r3 = r30;
    r4 = MemoryInline::FlatRead8((r1 + 8));
    r5 = MemoryInline::FlatRead8((r1 + 9));
    ctx->lr = 0x80128834u;
    if constexpr (KnownRegArgsCpuCall<0x801282D8u>(&func_801282D8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_801282D8_4A89 = func_801282D8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_801282D8_4A89);
        r4 = static_cast<uint32_t>(regargs_result_801282D8_4A89 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x801282D8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    goto loc_801289E4;
}

loc_80128838:
{
    r3 = r30;
    ctx->lr = 0x80128840u;
    if constexpr (KnownRegArgsCpuCall<0x801297A8u>(&func_801297A8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_801297A8_4DD0 = func_801297A8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_801297A8_4DD0);
        r4 = static_cast<uint32_t>(regargs_result_801297A8_4DD0 >> 32);
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
        InvokeDirectCpu<0x801297A8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r3 = r30;
    // inline leaf 0x801322C8 (3 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 2219), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x801322C8
    r3 = r30;
    // inline leaf 0x801321DC (3 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 2220), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x801321DC
    r3 = r30;
    // inline leaf 0x80132208 (3 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 2221), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x80132208
    r3 = r30;
    // inline leaf 0x80132234 (3 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 2222), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x80132234
    r3 = r30;
    // inline leaf 0x80132260 (3 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 2223), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x80132260
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 507), static_cast<uint8_t>(r0));
    r0 = (r31 & 255);
}

loc_80128878:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_801289B8;
    }
}

loc_8012887C:
{
    r3 = r30;
    r4 = 2;
    // inline leaf 0x80137740 (10 guest instruction(s))
}

loc_inl13_0x80137740:
{
    r5 = MemoryInline::FlatRead8((r3 + 2227));
    r0 = (r4 & 255);
    r0 = (r5 & r0);
}

loc_inl13_0x80137750:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl13_return;
    }
}

loc_inl13_0x80137754:
{
    r0 = ~(r4 | r4);
    r0 = (r0 & 255);
    r0 = (r5 & r0);
    MemoryInline::FlatWrite8((r3 + 2227), static_cast<uint8_t>(r0));
    goto loc_inl13_cont_80137740;
}

loc_inl13_return:
{
}

loc_inl13_cont_80137740:
{
    // end of inlined leaf 0x80137740
    r3 = MemoryInline::FlatRead8((r1 + 8));
    r4 = MemoryInline::FlatRead8((r1 + 9));
    if constexpr (KnownRegArgsCpuCall<0x8012E13Cu>(&func_8012E13C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8012E13C_58CB = func_8012E13C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8012E13C_58CB;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8012E13Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
}

loc_80128898:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801288B8;
    }
}

loc_8012889C:
{
    r3 = r30;
    r4 = 4;
    // inline leaf 0x80132330 (7 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2382));
    r0 = (r4 & 255);
    r3 = (r3 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_4 & 1);
    // end of inlined leaf 0x80132330
}

loc_801288AC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801288B8;
    }
}

loc_801288B0:
{
    r3 = r30;
    ctx->lr = 0x801288B8u;
    if constexpr (KnownRegArgsCpuCall<0x80132CF0u>(&func_80132CF0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        const auto regargs_result_80132CF0_5DC2 = func_80132CF0_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_80132CF0_5DC2);
        r4 = static_cast<uint32_t>(regargs_result_80132CF0_5DC2 >> 32);
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
        InvokeDirectCpu<0x80132CF0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_801288B8:
{
    r3 = MemoryInline::FlatRead8((r1 + 8));
    r4 = MemoryInline::FlatRead8((r1 + 9));
    if constexpr (KnownRegArgsCpuCall<0x8012E1BCu>(&func_8012E1BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8012E1BC_6183 = func_8012E1BC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8012E1BC_6183;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8012E1BCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
}

loc_801288C8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801288E8;
    }
}

loc_801288CC:
{
    r3 = r30;
    r4 = 1;
    // inline leaf 0x80132330 (7 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2382));
    r0 = (r4 & 255);
    r3 = (r3 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_6 & 1);
    // end of inlined leaf 0x80132330
}

loc_801288DC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801288E8;
    }
}

loc_801288E0:
{
    r3 = r30;
    ctx->lr = 0x801288E8u;
    if constexpr (KnownRegArgsCpuCall<0x80132B34u>(&func_80132B34)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        const auto regargs_result_80132B34_667A = func_80132B34_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_80132B34_667A);
        r4 = static_cast<uint32_t>(regargs_result_80132B34_667A >> 32);
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
        InvokeDirectCpu<0x80132B34u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_801288E8:
{
    r3 = MemoryInline::FlatRead8((r1 + 8));
    r4 = MemoryInline::FlatRead8((r1 + 9));
    // inline leaf 0x8012E30C (11 guest instruction(s))
}

loc_inl16_0x8012E30C:
{
    r0 = (r3 & 255);
}

loc_inl16_0x8012E314:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(11))) {
        goto loc_inl16_0x8012E330;
    }
}

loc_inl16_0x8012E318:
{
    r3 = (r4 & 255);
    r0 = (r3 + -26);
}

loc_inl16_0x8012E324:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(2))) {
        goto loc_inl16_0x8012E330;
    }
}

loc_inl16_0x8012E328:
{
    r3 = 1;
    goto loc_inl16_cont_8012E30C;
}

loc_inl16_0x8012E330:
{
    r3 = 0;
}

loc_inl16_cont_8012E30C:
{
    // end of inlined leaf 0x8012E30C
}

loc_801288F8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80128918;
    }
}

loc_801288FC:
{
    r3 = r30;
    r4 = 8;
    // inline leaf 0x80132330 (7 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2382));
    r0 = (r4 & 255);
    r3 = (r3 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_8 & 1);
    // end of inlined leaf 0x80132330
}

loc_8012890C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80128918;
    }
}

loc_80128910:
{
    r3 = r30;
    if constexpr (KnownRegArgsCpuCall<0x80133434u>(&func_80133434)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_80133434_6F91 = func_80133434_ra8_0_10_0(ctx, r3);
        r4 = regargs_result_80133434_6F91;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80133434u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_80128918:
{
    r3 = MemoryInline::FlatRead8((r1 + 8));
    r4 = MemoryInline::FlatRead8((r1 + 9));
    if constexpr (KnownRegArgsCpuCall<0x8012E338u>(&func_8012E338)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8012E338_7250 = func_8012E338_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8012E338_7250;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8012E338u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
}

loc_80128928:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80128948;
    }
}

loc_8012892C:
{
    r3 = r30;
    r4 = 16;
    // inline leaf 0x80132330 (7 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2382));
    r0 = (r4 & 255);
    r3 = (r3 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_10 & 1);
    // end of inlined leaf 0x80132330
}

loc_8012893C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80128948;
    }
}

loc_80128940:
{
    r3 = r30;
    ctx->lr = 0x80128948u;
    if constexpr (KnownRegArgsCpuCall<0x80132F5Cu>(&func_80132F5C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        const auto regargs_result_80132F5C_774A = func_80132F5C_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_80132F5C_774A);
        r4 = static_cast<uint32_t>(regargs_result_80132F5C_774A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x80132F5Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
    }
}

loc_80128948:
{
    r0 = (r31 & 255);
}

loc_80128950:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(4))) {
        goto loc_801289A0;
    }
}

loc_80128954:
{
    r3 = r30;
    r4 = 2;
    // inline leaf 0x8012CF68 (7 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 1940));
    r0 = (r4 & 65535);
    r3 = (r3 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_12 & 1);
    // end of inlined leaf 0x8012CF68
}

loc_80128964:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80128980;
    }
}

loc_80128968:
{
    r0 = MemoryInline::FlatRead16((r30 + 1942));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80128970:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_80128980;
    }
}

loc_80128974:
{
    r3 = r30;
    r4 = 2;
    // inline leaf 0x8012CF00 (6 guest instruction(s))
    r5 = MemoryInline::FlatRead16((r3 + 1940));
    r0 = ~(r4 | r4);
    r0 = (r0 & 65535);
    r0 = (r5 & r0);
    MemoryInline::FlatWrite16((r3 + 1940), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8012CF00
}

loc_80128980:
{
    r3 = r30;
    r4 = 8;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8012CF68u) && KnownTranslatedCpuCall<0x8012CF68u>::kAvailable && !KnownTranslatedCpuCall<0x8012CF68u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8012CF68u>()) {
        const auto state_free_result_8012CF68_8087 = func_8012CF68_statefree(r3, r4);
        r0 = static_cast<uint32_t>(state_free_result_8012CF68_8087[0]);
        r3 = static_cast<uint32_t>(state_free_result_8012CF68_8087[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8012CF68u>(ctx);
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

loc_80128990:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801289A0;
    }
}

loc_80128994:
{
    r3 = r30;
    r4 = 8;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8012CF00u) && KnownTranslatedCpuCall<0x8012CF00u>::kAvailable && !KnownTranslatedCpuCall<0x8012CF00u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8012CF00u>()) {
        const auto state_free_result_8012CF00_861C = func_8012CF00_statefree(r3, r4);
        r0 = static_cast<uint32_t>(state_free_result_8012CF00_861C[0]);
        r5 = static_cast<uint32_t>(state_free_result_8012CF00_861C[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8012CF00u>(ctx);
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

loc_801289A0:
{
    r0 = 3;
    MemoryInline::FlatWrite8((r30 + 908), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 278), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r30 + 488), static_cast<uint8_t>(r0));
    goto loc_801289C0;
}

loc_801289B8:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 488), static_cast<uint8_t>(r0));
}

loc_801289C0:
{
    r3 = r30;
    r4 = MemoryInline::FlatRead8((r1 + 8));
    r5 = MemoryInline::FlatRead8((r1 + 9));
    r6 = (r29 & 65535);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80128604u) && KnownTranslatedCpuCall<0x80128604u>::kAvailable && !KnownTranslatedCpuCall<0x80128604u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80128604u>()) {
        const auto state_free_result_80128604_8D1E = func_80128604_statefree(r3, r4, r5, r6);
        r0 = static_cast<uint32_t>(state_free_result_80128604_8D1E);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80128604u>(ctx);
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
    r3 = r30;
    r4 = MemoryInline::FlatRead8((r1 + 8));
    r5 = MemoryInline::FlatRead8((r1 + 9));
    ctx->lr = 0x801289E4u;
    if constexpr (KnownRegArgsCpuCall<0x801283A4u>(&func_801283A4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_801283A4_9236 = func_801283A4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_801283A4_9236);
        r4 = static_cast<uint32_t>(regargs_result_801283A4_9236 >> 32);
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801283A4u>(ctx);
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

loc_801289E4:
{
    r11 = (r1 + 48);
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x003FFFFF gpr_return=0x00000018 fpr_read=0xF8003FFF fpr_write=0xF8003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80128624 func_80128624 preserves=true fpr_mask=0x00000000
