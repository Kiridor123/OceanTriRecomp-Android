#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803FAF00(CpuContext* ctx);
extern "C" uint64_t func_803FAF00_rac8_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803FD0D0(CpuContext* ctx);
extern "C" uint64_t func_803FD0D0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803FDDCC(CpuContext* ctx);
extern "C" uint64_t func_803FDDCC_ra38_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_803FE204(CpuContext* ctx);
extern "C" void func_803FE204_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80414340(CpuContext* ctx);
extern "C" uint64_t func_80414340_ra38_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_80414378(CpuContext* ctx);
extern "C" uint64_t func_80414378_ra38_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_80415084(CpuContext* ctx);
extern "C" uint64_t func_80415084_ra38_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_80415228(CpuContext* ctx);
extern "C" uint64_t func_80415228_ra38_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_8045E458(CpuContext* ctx);
extern "C" uint64_t func_8045E458_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" void func_803FE204_statefree(uint32_t, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_803FCCB0_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

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
    uint32_t cr = ctx->cr;

    goto loc_803FCCB0;

loc_803FCCB0:
{
    MemoryInline::FlatWriteRam32((r1 + -288), r1);
    r1 = (r1 + -288);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 292), r0);
    r29 = r3;
    ctx->lr = 0x803FCCD0u;
    if constexpr (KnownRegArgsCpuCall<0x803FAF00u>(&func_803FAF00)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_803FAF00_C9A = func_803FAF00_rac8_1fe_18_0(ctx, r3, r6, r7, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803FAF00_C9A);
        r4 = static_cast<uint32_t>(regargs_result_803FAF00_C9A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x803FAF00u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    }
    r3 = 0x80600000u;
    r0 = (r3 + 10832);
    MemoryInline::FlatWrite32(r29, r0);
    MemoryInline::FlatWrite32((r13 + -16752), r29);
    r30 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r29 + 24788), 0, 1172u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r29 + 24788), r30);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r29 + 24792), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r29 + 24824), r30);
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r29 + 24796), r30);
    MemoryInline::WriteResolved32(guest_range_0, 40u, (r29 + 24828), r30);
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r29 + 24800), r30);
    MemoryInline::WriteResolved32(guest_range_0, 44u, (r29 + 24832), r30);
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r29 + 24804), r30);
    MemoryInline::WriteResolved32(guest_range_0, 48u, (r29 + 24836), r30);
    MemoryInline::WriteResolved32(guest_range_0, 20u, (r29 + 24808), r30);
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r29 + 24840), r30);
    MemoryInline::WriteResolved32(guest_range_0, 24u, (r29 + 24812), r30);
    MemoryInline::WriteResolved32(guest_range_0, 56u, (r29 + 24844), r30);
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r29 + 24816), r30);
    MemoryInline::WriteResolved32(guest_range_0, 60u, (r29 + 24848), r30);
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r29 + 24820), r30);
    MemoryInline::WriteResolved32(guest_range_0, 64u, (r29 + 24852), r30);
    MemoryInline::WriteResolved8(guest_range_0, 1156u, (r29 + 25944), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_0, 1157u, (r29 + 25945), static_cast<uint8_t>(r30));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1160u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 1160u, (r29 + 25948), r30);
        MemoryInline::WriteResolved32(guest_range_0, 1164u, (r29 + 25952), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 1168u, (r29 + 25956), r30);
    r3 = (r29 + 25960);
    r4 = 0;
    r5 = 32;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r29 + 25992);
    r4 = 0;
    r5 = 32;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r29 + 26024);
    r4 = 0;
    r5 = 32;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r29 + 26056);
    r4 = 0;
    r5 = 32;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r0 = -1;
    MemoryInline::FlatWrite32((r29 + 26096), r0);
    r3 = (r29 + 26100);
    r4 = -1;
    r5 = 16;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r29 + 26116);
    r4 = 0;
    r5 = 16;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r29 + 26132);
    r4 = 0;
    r5 = 1048;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r29 + 27180);
    r4 = 0;
    r5 = 262;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r29 + 27442);
    r4 = 0;
    r5 = 262;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r29 + 27712);
    r4 = 0;
    r5 = 5120;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r31 = 1;
    MemoryInline::FlatWrite32((r29 + 26116), r31);
    r3 = (r29 + 27180);
    r4 = 256;
    r5 = 0x80600000u;
    r5 = (r5 + 4608);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x803FCE04u;
    if constexpr (KnownRegArgsCpuCall<0x8045E458u>(&func_8045E458)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8045E458_25FD = func_8045E458_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8045E458_25FD);
        r4 = static_cast<uint32_t>(regargs_result_8045E458_25FD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x8045E458u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    }
    r0 = 8200;
    MemoryInline::FlatWrite16((r29 + 27440), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite32((r29 + 26124), r31);
    r3 = r29;
    r4 = 2;
    r5 = 0;
    if constexpr (KnownRegArgsCpuCall<0x803FDDCCu>(&func_803FDDCC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_803FDDCC_2D74 = func_803FDDCC_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_803FDDCC_2D74);
        r4 = static_cast<uint32_t>(regargs_result_803FDDCC_2D74 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        InvokeDirectCpu<0x803FDDCCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    }
    r3 = (r29 + 65536);
    r3 = (r3 + -32434);
    r4 = 0;
    r5 = 262;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWrite32((r29 + 26128), r30);
    r3 = r29;
    r4 = 0;
    r5 = 0;
    r6 = 0;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x803FE204u) && KnownTranslatedCpuCall<0x803FE204u>::kAvailable && !KnownTranslatedCpuCall<0x803FE204u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x803FE204u>()) {
        func_803FE204_statefree(r3, r4, r5, r6);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x803FE204u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r13 = ctx->gpr[13];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    }
    r3 = r29;
    r4 = 0;
    // inline leaf 0x803FE208 (5 guest instruction(s))
    r3 = (r3 + 65536);
    MemoryInline::FlatWrite32((r3 + -32156), r4);
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + -32152), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x803FE208
    r3 = (r29 + 65536);
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + -32148), 0, 2408u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 0u, (r3 + -32148), r30);
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r3 + -32144), r30);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r3 + -32140), r30);
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r3 + -32136), r30);
    }
    MemoryInline::WriteResolved32(guest_range_1, 16u, (r3 + -32132), r30);
    MemoryInline::WriteResolved32(guest_range_1, 2400u, (r3 + -29748), r30);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r3 + -32128), r30);
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r3 + -32124), r30);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r3 + -32120), r30);
        MemoryInline::WriteResolved32(guest_range_1, 32u, (r3 + -32116), r30);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 36u, (r3 + -32112), r30);
        MemoryInline::WriteResolved32(guest_range_1, 40u, (r3 + -32108), r30);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 44u, (r3 + -32104), r30);
        MemoryInline::WriteResolved32(guest_range_1, 48u, (r3 + -32100), r30);
    }
    MemoryInline::WriteResolved32(guest_range_1, 52u, (r3 + -32096), r30);
    MemoryInline::WriteResolved32(guest_range_1, 2404u, (r3 + -29744), r30);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 56u, (r3 + -32092), r30);
        MemoryInline::WriteResolved32(guest_range_1, 60u, (r3 + -32088), r30);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 64u, (r3 + -32084), r30);
        MemoryInline::WriteResolved32(guest_range_1, 68u, (r3 + -32080), r30);
    }
    MemoryInline::WriteResolved32(guest_range_1, 1764u, (r3 + -30384), r30);
    MemoryInline::WriteResolved8(guest_range_1, 1768u, (r3 + -30380), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved32(guest_range_1, 2380u, (r3 + -29768), r30);
    // inline leaf 0x800E8A3C (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16732));
    // end of inlined leaf 0x800E8A3C
    r4 = (r29 + 24792);
    r5 = (r29 + 24824);
    // inline leaf 0x8041504C (5 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 40));
    MemoryInline::FlatWrite32(r4, r0);
    r0 = MemoryInline::FlatRead32((r3 + 44));
    MemoryInline::FlatWrite32(r5, r0);
    // end of inlined leaf 0x8041504C
    // inline leaf 0x800E8A3C (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16732));
    // end of inlined leaf 0x800E8A3C
    r4 = (r29 + 25948);
    // inline leaf 0x80415060 (3 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 48));
    MemoryInline::FlatWrite32(r4, r0);
    // end of inlined leaf 0x80415060
    // inline leaf 0x800E8A3C (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16732));
    // end of inlined leaf 0x800E8A3C
    r4 = (r29 + 25952);
    // inline leaf 0x8041506C (3 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 52));
    MemoryInline::FlatWrite32(r4, r0);
    // end of inlined leaf 0x8041506C
    // inline leaf 0x800E8A3C (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16732));
    // end of inlined leaf 0x800E8A3C
    r4 = (r29 + 25956);
    // inline leaf 0x80415078 (3 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 56));
    MemoryInline::FlatWrite32(r4, r0);
    // end of inlined leaf 0x80415078
    // inline leaf 0x800E8A3C (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16732));
    // end of inlined leaf 0x800E8A3C
    r4 = (r29 + 25960);
    r5 = 32;
    ctx->lr = 0x803FCEFCu;
    if constexpr (KnownRegArgsCpuCall<0x80415084u>(&func_80415084)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_80415084_4D64 = func_80415084_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_80415084_4D64);
        r4 = static_cast<uint32_t>(regargs_result_80415084_4D64 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80415084u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    }
    // inline leaf 0x800E8A3C (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16732));
    // end of inlined leaf 0x800E8A3C
    r4 = (r29 + 26056);
    r5 = 32;
    ctx->lr = 0x803FCF0Cu;
    if constexpr (KnownRegArgsCpuCall<0x80415228u>(&func_80415228)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_80415228_539D = func_80415228_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_80415228_539D);
        r4 = static_cast<uint32_t>(regargs_result_80415228_539D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80415228u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    }
    // inline leaf 0x800E8A3C (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16732));
    // end of inlined leaf 0x800E8A3C
    r4 = (r29 + 65536);
    r4 = (r4 + -29744);
    r5 = (r29 + 65536);
    r5 = (r5 + -29748);
    // inline leaf 0x804143C0 (5 guest instruction(s))
    r0 = (r3 + 1933);
    MemoryInline::FlatWrite32(r4, r0);
    r0 = 1024;
    MemoryInline::FlatWrite32(r5, r0);
    // end of inlined leaf 0x804143C0
    // inline leaf 0x800E8A3C (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16732));
    // end of inlined leaf 0x800E8A3C
    r4 = (r1 + 8);
    if constexpr (KnownRegArgsCpuCall<0x80414340u>(&func_80414340)) {
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_80414340_5B59 = func_80414340_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_80414340_5B59);
        r4 = static_cast<uint32_t>(regargs_result_80414340_5B59 >> 32);
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80414340u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    }
    r0 = MemoryInline::FlatRead8((r1 + 8));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_803FCF3C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803FCF60;
    }
}

loc_803FCF40:
{
    r3 = (r29 + 27442);
    r4 = (r1 + 8);
    r5 = 262;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r3 = r29;
    r4 = 0;
    r5 = 0;
    if constexpr (KnownRegArgsCpuCall<0x803FDDCCu>(&func_803FDDCC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_803FDDCC_6230 = func_803FDDCC_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_803FDDCC_6230);
        r4 = static_cast<uint32_t>(regargs_result_803FDDCC_6230 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        InvokeDirectCpu<0x803FDDCCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    }
}

loc_803FCF60:
{
    // inline leaf 0x800E8A3C (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16732));
    // end of inlined leaf 0x800E8A3C
    r4 = (r1 + 8);
    if constexpr (KnownRegArgsCpuCall<0x80414378u>(&func_80414378)) {
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_80414378_6800 = func_80414378_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_80414378_6800);
        r4 = static_cast<uint32_t>(regargs_result_80414378_6800 >> 32);
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80414378u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    }
    r0 = MemoryInline::FlatRead8((r1 + 8));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_803FCF78:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803FCFA8;
    }
}

loc_803FCF7C:
{
    r3 = (r29 + 65536);
    r3 = (r3 + -32434);
    r4 = (r1 + 8);
    r5 = 262;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r3 = r29;
    r4 = 3;
    r5 = 0;
    if constexpr (KnownRegArgsCpuCall<0x803FDDCCu>(&func_803FDDCC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_803FDDCC_6EF0 = func_803FDDCC_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_803FDDCC_6EF0);
        r4 = static_cast<uint32_t>(regargs_result_803FDDCC_6EF0 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        InvokeDirectCpu<0x803FDDCCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    }
    r0 = 1;
    MemoryInline::FlatWrite32((r29 + 26128), r0);
}

loc_803FCFA8:
{
    // inline leaf 0x800E8A3C (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16732));
    // end of inlined leaf 0x800E8A3C
    r4 = (r29 + 65536);
    r4 = (r4 + -29756);
    // inline leaf 0x804143DC (3 guest instruction(s))
    r0 = MemoryInline::FlatRead8((r3 + 1932));
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    // end of inlined leaf 0x804143DC
    // inline leaf 0x800E8A3C (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16732));
    // end of inlined leaf 0x800E8A3C
    r4 = (r29 + 65536);
    r4 = (r4 + -30384);
    r5 = (r29 + 65536);
    r5 = (r5 + -30380);
    // inline leaf 0x80414398 (5 guest instruction(s))
    r0 = (r3 + 1675);
    MemoryInline::FlatWrite32(r4, r0);
    r0 = MemoryInline::FlatRead8((r3 + 1931));
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    // end of inlined leaf 0x80414398
    // inline leaf 0x800E8A3C (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16732));
    // end of inlined leaf 0x800E8A3C
    r4 = (r29 + 65536);
    r4 = (r4 + -29768);
    // inline leaf 0x804143B4 (3 guest instruction(s))
    r0 = (r3 + 648);
    MemoryInline::FlatWrite32(r4, r0);
    // end of inlined leaf 0x804143B4
    r3 = r29;
    r4 = 0;
    r5 = 0;
    ctx->lr = 0x803FCFF0u;
    if constexpr (KnownRegArgsCpuCall<0x803FD0D0u>(&func_803FD0D0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_803FD0D0_79AE = func_803FD0D0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803FD0D0_79AE);
        r4 = static_cast<uint32_t>(regargs_result_803FD0D0_79AE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x803FD0D0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    }
    r3 = r29;
    r0 = MemoryInline::FlatRead32((r1 + 292));
    ctx->lr = r0;
    r1 = (r1 + 288);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803FCCB0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803FCCB0_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803FCCB0 func_803FCCB0 preserves=true fpr_mask=0x00000000
