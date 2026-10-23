#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800DC834(CpuContext* ctx);
extern "C" uint64_t func_800DC834_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_800DC844(CpuContext* ctx);
extern "C" uint64_t func_800DC844_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_80112240(CpuContext* ctx);
extern "C" uint64_t func_80112240_ra38_6_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double);
extern "C" void func_801129F8(CpuContext* ctx);
extern "C" uint64_t func_801129F8_ra38_6_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double);
extern "C" void func_801163CC(CpuContext* ctx);
extern "C" uint64_t func_801163CC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_801417E0(CpuContext* ctx);
extern "C" uint64_t func_801417E0_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_80141A40(CpuContext* ctx);
extern "C" uint64_t func_80141A40_ra18_2_18_0(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_80295988(CpuContext* ctx);
extern "C" uint64_t func_80295988_ra38_e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);
extern "C" void func_802AAF18(CpuContext* ctx);
extern "C" uint32_t func_802AAF18_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_802AB24C(CpuContext* ctx);
extern "C" uint64_t func_802AB24C_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_802AB2A4(CpuContext* ctx);
extern "C" uint64_t func_802AB2A4_ra58_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80342F98(CpuContext* ctx);
extern "C" uint64_t func_80342F98_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" MkwStateFreeResult2 func_802AAF18_statefree(uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_802AAF18_statefree_v0(uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_802AAF18_statefree_v1(uint32_t, uint32_t);

extern "C" void func_809EB188(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r0_rot_8 = 0;

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
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_809EB188;

loc_809EB188:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r29 = r3;
    r3 = (r1 + 8);
    // inline leaf 0x809EA85C (1 guest instruction(s))
    // end of inlined leaf 0x809EA85C
    r31 = MemoryInline::FlatRead32((r29 + 256));
    r3 = MemoryInline::FlatRead32((r29 + 16));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r29 + 16), r0);
    r3 = (r29 + 48);
    r4 = (r29 + 24);
    ctx->lr = 0x809EB1C8u;
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
    r3 = r29;
    ctx->lr = 0x809EB1D0u;
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
    InvokeDirectCpu<0x802AB3B8u>(ctx);
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
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead8((r29 + 2));
    r0 = (r3 + -11);
}

loc_809EB1DC:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_809EB1EC;
    }
}

loc_809EB1E0:
{
    r0 = (r3 + -14);
}

loc_809EB1E8:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_809EB4A4;
    }
}

loc_809EB1EC:
{
    r30 = MemoryInline::FlatRead32((r29 + 12));
    r3 = r29;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x802AAF18u) && KnownTranslatedCpuCall<0x802AAF18u>::kAvailable && !KnownTranslatedCpuCall<0x802AAF18u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x802AAF18u>()) {
        const auto state_free_result_802AAF18_1679 = func_802AAF18_statefree_v0(r3, xer);
        r3 = static_cast<uint32_t>(state_free_result_802AAF18_1679);
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
        InvokeDirectCpu<0x802AAF18u>(ctx);
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
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_809EB1FC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_809EB20C;
    }
}

loc_809EB200:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r29 + 4), static_cast<uint8_t>(r0));
    goto loc_809EB72C;
}

loc_809EB20C:
{
    r3 = r30;
    // inline leaf 0x8026A36C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 316));
    r3 = MemoryInline::FlatRead16((r3 + 84));
    // end of inlined leaf 0x8026A36C
    r0 = (r3 & 65535);
}

loc_809EB21C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(317))) {
        goto loc_809EB234;
    }
}

loc_809EB220:
{
    r3 = r30;
    // inline leaf 0x8026A36C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 316));
    r3 = MemoryInline::FlatRead16((r3 + 84));
    // end of inlined leaf 0x8026A36C
    r0 = (r3 & 65535);
}

loc_809EB230:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(362))) {
        goto loc_809EB308;
    }
}

loc_809EB234:
{
    r0 = MemoryInline::FlatRead8((r30 + 9));
}

loc_809EB23C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(3))) {
        goto loc_809EB2A8;
    }
}

loc_809EB240:
{
    r3 = MemoryInline::FlatRead16((r30 + 1444));
    r0 = (r3 & 4);
}

loc_809EB24C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_809EB25C;
    }
}

loc_809EB250:
{
    r0 = (r3 & 2);
}

loc_809EB258:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_809EB264;
    }
}

loc_809EB25C:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 100));
    goto loc_809EB268;
}

loc_809EB264:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 96));
}

loc_809EB268:
{
    f0.d = MemoryInline::FlatReadFloat32((r29 + 28));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_809EB270:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_809EB2A0;
    }
}

loc_809EB278:
{
    f0.d = MemoryInline::FlatReadFloat32((r29 + 24));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
    r3 = 0x80A20000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + -6784));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 32));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    r0 = 1;
    goto loc_809EB33C;
}

loc_809EB2A0:
{
    r0 = 0;
    goto loc_809EB33C;
}

loc_809EB2A8:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 96));
    f1.d = MemoryInline::FlatReadFloat32((r29 + 28));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_809EB2B4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_809EB2D8;
    }
}

loc_809EB2B8:
{
    f0.d = MemoryInline::FlatReadFloat32((r29 + 24));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 96));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 32));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    r0 = 1;
    goto loc_809EB33C;
}

loc_809EB2D8:
{
    r0 = MemoryInline::FlatRead32((r29 + 16));
}

loc_809EB2E0:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(1))) {
        goto loc_809EB300;
    }
}

loc_809EB2E4:
{
    f0.d = MemoryInline::FlatReadFloat32((r29 + 24));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 32));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    r0 = 1;
    goto loc_809EB33C;
}

loc_809EB300:
{
    r0 = 0;
    goto loc_809EB33C;
}

loc_809EB308:
{
    r3 = (r29 + 48);
    r4 = (r29 + 24);
    r5 = (r1 + 8);
    r6 = 3;
    r7 = 65536;
    r7 = (r7 + -1);
    r8 = MemoryInline::FlatRead8((r29 + 8));
    r9 = 1024;
    r10 = 0;
    ctx->lr = 0x809EB330u;
    if constexpr (KnownRegArgsCpuCall<0x80295988u>(&func_80295988)) {
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
        const auto regargs_result_80295988_2D21 = func_80295988_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_80295988_2D21);
        r4 = static_cast<uint32_t>(regargs_result_80295988_2D21 >> 32);
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
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
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
        InvokeDirectCpu<0x80295988u>(ctx);
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
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r0 = (0 - r3);
    r0 = (r0 & ~r3);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & 1);
}

loc_809EB33C:
{
}

loc_809EB340:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_809EB490;
    }
}

loc_809EB344:
{
    r3 = (r29 + 24);
    r4 = (r1 + 8);
    ctx->lr = 0x809EB350u;
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
    r0 = MemoryInline::FlatRead8((r29 + 2));
}

loc_809EB358:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(11))) {
        goto loc_809EB380;
    }
}

loc_809EB35C:
{
}

loc_809EB360:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(12))) {
        goto loc_809EB3AC;
    }
}

loc_809EB364:
{
}

loc_809EB368:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(13))) {
        goto loc_809EB3B4;
    }
}

loc_809EB36C:
{
}

loc_809EB370:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(14))) {
        goto loc_809EB3BC;
    }
}

loc_809EB374:
{
}

loc_809EB378:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(15))) {
        goto loc_809EB3C4;
    }
}

loc_809EB37C:
{
    goto loc_809EB3CC;
}

loc_809EB380:
{
    r31 = 0;
    r3 = (r29 + 24);
    r4 = 0x80A20000u;
    f1.d = MemoryInline::FlatReadFloat32((r4 + -6780));
    r4 = MemoryInline::FlatRead8((r29 + 8));
    ctx->lr = 0x809EB398u;
    if constexpr (KnownRegArgsCpuCall<0x80141A40u>(&func_80141A40)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80141A40_3BBF = func_80141A40_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80141A40_3BBF);
        r4 = static_cast<uint32_t>(regargs_result_80141A40_3BBF >> 32);
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
        InvokeDirectCpu<0x80141A40u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    }
    r3 = r30;
    r4 = (r29 + 24);
    r5 = MemoryInline::FlatRead8((r29 + 8));
    ctx->lr = 0x809EB3A8u;
    if constexpr (KnownRegArgsCpuCall<0x80342F98u>(&func_80342F98)) {
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
        const auto regargs_result_80342F98_4089 = func_80342F98_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80342F98_4089);
        r4 = static_cast<uint32_t>(regargs_result_80342F98_4089 >> 32);
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
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
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
        InvokeDirectCpu<0x80342F98u>(ctx);
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
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    goto loc_809EB3D0;
}

loc_809EB3AC:
{
    r31 = 1;
    goto loc_809EB3D0;
}

loc_809EB3B4:
{
    r31 = 2;
    goto loc_809EB3D0;
}

loc_809EB3BC:
{
    r31 = 3;
    goto loc_809EB3D0;
}

loc_809EB3C4:
{
    r31 = 4;
    goto loc_809EB3D0;
}

loc_809EB3CC:
{
    r31 = 0;
}

loc_809EB3D0:
{
    // inline leaf 0x802AFCE8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3014));
    // end of inlined leaf 0x802AFCE8
    r3 = (r3 & 255);
    r0 = MemoryInline::FlatRead8((r29 + 8));
}

loc_809EB3E0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_809EB3EC;
    }
}

loc_809EB3E4:
{
    r3 = (r29 + 24);
    ctx->lr = 0x809EB3ECu;
    if constexpr (KnownRegArgsCpuCall<0x800DC834u>(&func_800DC834)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_800DC834_4C0C = func_800DC834_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_800DC834_4C0C);
        r4 = static_cast<uint32_t>(regargs_result_800DC834_4C0C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DC834u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_809EB3EC:
{
    r3 = 32;
    r4 = r31;
    r5 = (r29 + 24);
    r6 = MemoryInline::FlatRead8((r29 + 8));
    r7 = (r29 + 36);
    r8 = 80;
    r9 = 0x80A20000u;
    f1.d = MemoryInline::FlatReadFloat32((r9 + -6836));
    ctx->lr = 0x809EB410u;
    if constexpr (KnownRegArgsCpuCall<0x801129F8u>(&func_801129F8)) {
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
        const auto regargs_result_801129F8_51C8 = func_801129F8_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_801129F8_51C8);
        r4 = static_cast<uint32_t>(regargs_result_801129F8_51C8 >> 32);
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
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
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
        InvokeDirectCpu<0x801129F8u>(ctx);
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
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r0 = MemoryInline::FlatRead8((r29 + 2));
}

loc_809EB418:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(14))) {
        goto loc_809EB484;
    }
}

loc_809EB41C:
{
    r3 = MemoryInline::FlatRead32((r29 + 12));
    r7 = 0;
    r4 = MemoryInline::FlatRead8((r29 + 6));
    r0 = (r4 & 1);
}

loc_809EB430:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_809EB438;
    }
}

loc_809EB434:
{
    r7 = (r7 | 4);
}

loc_809EB438:
{
    r0 = (r4 & 2);
}

loc_809EB440:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_809EB44C;
    }
}

loc_809EB444:
{
    r0 = (r7 | 8);
    r7 = (r0 & 255);
}

loc_809EB44C:
{
    r0 = (r4 & 4);
}

loc_809EB454:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_809EB460;
    }
}

loc_809EB458:
{
    r0 = (r7 | 16);
    r7 = (r0 & 255);
}

loc_809EB460:
{
    r4 = (r29 + 24);
    r5 = 15;
    r6 = MemoryInline::FlatRead8((r29 + 8));
    r7 = (r7 & 255);
    r8 = 0x80790000u;
    r8 = MemoryInline::FlatRead32((r8 + 28704));
    r12 = MemoryInline::FlatRead32((r8 + 12));
    ctr = r12;
    ctx->lr = 0x809EB484u;
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
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_809EB484:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r29 + 4), static_cast<uint8_t>(r0));
    goto loc_809EB72C;
}

loc_809EB490:
{
    r0 = MemoryInline::FlatRead32((r29 + 16));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(11));
    r0 = (r0_rot_6 & -2048);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite32((r29 + 36), r0);
    goto loc_809EB720;
}

loc_809EB4A4:
{
    r0 = (r3 + -3);
}

loc_809EB4AC:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(4))) {
        goto loc_809EB4CC;
    }
}

loc_809EB4B0:
{
}

loc_809EB4B4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(9))) {
        goto loc_809EB4CC;
    }
}

loc_809EB4B8:
{
}

loc_809EB4BC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(2))) {
        goto loc_809EB568;
    }
}

loc_809EB4C0:
{
}

loc_809EB4C4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(10))) {
        goto loc_809EB5DC;
    }
}

loc_809EB4C8:
{
    goto loc_809EB654;
}

loc_809EB4CC:
{
    r3 = (r29 + 48);
    r4 = (r29 + 24);
    r5 = (r1 + 8);
    r6 = 3;
    r7 = 65536;
    r7 = (r7 + -1);
    r8 = MemoryInline::FlatRead8((r29 + 8));
    r9 = 1024;
    r10 = 0;
    ctx->lr = 0x809EB4F4u;
    if constexpr (KnownRegArgsCpuCall<0x80295988u>(&func_80295988)) {
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
        const auto regargs_result_80295988_6717 = func_80295988_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_80295988_6717);
        r4 = static_cast<uint32_t>(regargs_result_80295988_6717 >> 32);
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
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
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
        InvokeDirectCpu<0x80295988u>(ctx);
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
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r30 = r3;
    r0 = MemoryInline::FlatRead32((r29 + 16));
}

loc_809EB500:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(15))) {
        goto loc_809EB518;
    }
}

loc_809EB504:
{
    f1.d = MemoryInline::FlatReadFloat32((r29 + 76));
    r3 = 0x80A20000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + -6836));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r29 + 76), f0.d);
}

loc_809EB518:
{
    r0 = MemoryInline::FlatRead32((r29 + 16));
}

loc_809EB520:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(200))) {
        goto loc_809EB550;
    }
}

loc_809EB524:
{
    r3 = (r29 + 92);
    // inline leaf 0x8029F5FC (7 guest instruction(s))
}

loc_inl4_0x8029F5FC:
{
    r0 = MemoryInline::FlatRead8((r3 + 5));
}

loc_inl4_0x8029F604:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl4_0x8029F610;
    }
}

loc_inl4_0x8029F608:
{
    r3 = 255;
    goto loc_inl4_cont_8029F5FC;
}

loc_inl4_0x8029F610:
{
    r3 = MemoryInline::FlatRead8((r3 + 14));
}

loc_inl4_cont_8029F5FC:
{
    // end of inlined leaf 0x8029F5FC
    r0 = (r3 & 255);
}

loc_809EB534:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(255))) {
        goto loc_809EB550;
    }
}

loc_809EB538:
{
}

loc_809EB53C:
{
    if ((static_cast<int32_t>(r30) > static_cast<int32_t>(0))) {
        goto loc_809EB550;
    }
}

loc_809EB540:
{
    r3 = r29;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x802AAF18u) && KnownTranslatedCpuCall<0x802AAF18u>::kAvailable && !KnownTranslatedCpuCall<0x802AAF18u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x802AAF18u>()) {
        const auto state_free_result_802AAF18_7586 = func_802AAF18_statefree_v1(r3, xer);
        r0 = static_cast<uint32_t>(state_free_result_802AAF18_7586[0]);
        r3 = static_cast<uint32_t>(state_free_result_802AAF18_7586[1]);
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
        InvokeDirectCpu<0x802AAF18u>(ctx);
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
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_809EB54C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_809EB55C;
    }
}

loc_809EB550:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r29 + 4), static_cast<uint8_t>(r0));
    goto loc_809EB72C;
}

loc_809EB55C:
{
    r3 = r29;
    if constexpr (KnownRegArgsCpuCall<0x802AB24Cu>(&func_802AB24C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_802AB24C_7C85 = func_802AB24C_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_802AB24C_7C85);
        r4 = static_cast<uint32_t>(regargs_result_802AB24C_7C85 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x802AB24Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    goto loc_809EB720;
}

loc_809EB568:
{
    r0 = MemoryInline::FlatRead8((r29 + 6));
    r0 = (r0 & 32);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_809EB574:
{
    r0 = 13;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_809EB580;
    }
}

loc_809EB57C:
{
    r0 = 8;
}

loc_809EB580:
{
    r3 = MemoryInline::FlatRead32((r29 + 16));
}

loc_809EB588:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(r0))) {
        goto loc_809EB5CC;
    }
}

loc_809EB58C:
{
    r3 = (r29 + 24);
    r4 = 0x80A20000u;
    f1.d = MemoryInline::FlatReadFloat32((r4 + -6776));
    r4 = MemoryInline::FlatRead8((r29 + 8));
    r5 = 27;
    ctx->lr = 0x809EB5A4u;
    if constexpr (KnownRegArgsCpuCall<0x801417E0u>(&func_801417E0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_801417E0_82F7 = func_801417E0_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801417E0_82F7);
        r4 = static_cast<uint32_t>(regargs_result_801417E0_82F7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x801417E0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    }
    r3 = (r29 + 24);
    r4 = MemoryInline::FlatRead8((r29 + 8));
    r5 = 62;
    ctx->lr = 0x809EB5B4u;
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
        const auto regargs_result_80112240_87C2 = func_80112240_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_80112240_87C2);
        r4 = static_cast<uint32_t>(regargs_result_80112240_87C2 >> 32);
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
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
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
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r3 = (r29 + 24);
    r4 = MemoryInline::FlatRead8((r29 + 8));
    ctx->lr = 0x809EB5C0u;
    if constexpr (KnownRegArgsCpuCall<0x801163CCu>(&func_801163CC)) {
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
        const auto regargs_result_801163CC_8FE5 = func_801163CC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_801163CC_8FE5);
        r4 = static_cast<uint32_t>(regargs_result_801163CC_8FE5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        f0 = ctx->fpr[0];
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801163CCu>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r0 = 2;
    MemoryInline::FlatWrite8((r29 + 4), static_cast<uint8_t>(r0));
    goto loc_809EB72C;
}

loc_809EB5CC:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(11));
    r0 = (r0_rot_3 & -2048);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite32((r29 + 36), r0);
    goto loc_809EB720;
}

loc_809EB5DC:
{
    r0 = MemoryInline::FlatRead8((r29 + 6));
    r0 = (r0 & 32);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_809EB5E8:
{
    r0 = 16;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_809EB5F4;
    }
}

loc_809EB5F0:
{
    r0 = 11;
}

loc_809EB5F4:
{
    r3 = MemoryInline::FlatRead32((r29 + 16));
}

loc_809EB5FC:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(r0))) {
        goto loc_809EB644;
    }
}

loc_809EB600:
{
    r3 = MemoryInline::FlatRead32((r29 + 12));
    r4 = (r29 + 24);
    r5 = 4;
    r6 = MemoryInline::FlatRead8((r29 + 8));
    r7 = 0;
    r8 = 0x80790000u;
    r8 = MemoryInline::FlatRead32((r8 + 28704));
    r12 = MemoryInline::FlatRead32((r8 + 12));
    ctr = r12;
    ctx->lr = 0x809EB628u;
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
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = (r29 + 24);
    r4 = MemoryInline::FlatRead8((r29 + 8));
    r5 = 33;
    ctx->lr = 0x809EB638u;
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
        const auto regargs_result_80112240_9EBD = func_80112240_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_80112240_9EBD);
        r4 = static_cast<uint32_t>(regargs_result_80112240_9EBD >> 32);
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
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
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
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r0 = 2;
    MemoryInline::FlatWrite8((r29 + 4), static_cast<uint8_t>(r0));
    goto loc_809EB72C;
}

loc_809EB644:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(11));
    r0 = (r0_rot_2 & -2048);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite32((r29 + 36), r0);
    goto loc_809EB720;
}

loc_809EB654:
{
    r3 = (r29 + 48);
    r4 = (r29 + 24);
    r5 = (r1 + 8);
    r6 = 3;
    r7 = 65536;
    r7 = (r7 + -1);
    r8 = MemoryInline::FlatRead8((r29 + 8));
    r9 = 1024;
    r10 = 0;
    ctx->lr = 0x809EB67Cu;
    if constexpr (KnownRegArgsCpuCall<0x80295988u>(&func_80295988)) {
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
        const auto regargs_result_80295988_A8E4 = func_80295988_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_80295988_A8E4);
        r4 = static_cast<uint32_t>(regargs_result_80295988_A8E4 >> 32);
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
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
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
        InvokeDirectCpu<0x80295988u>(ctx);
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
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r30 = r3;
    r0 = MemoryInline::FlatRead32((r29 + 16));
}

loc_809EB688:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(200))) {
        goto loc_809EB6B8;
    }
}

loc_809EB68C:
{
    r3 = (r29 + 92);
    // inline leaf 0x8029F5FC (7 guest instruction(s))
}

loc_inl5_0x8029F5FC:
{
    r0 = MemoryInline::FlatRead8((r3 + 5));
}

loc_inl5_0x8029F604:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl5_0x8029F610;
    }
}

loc_inl5_0x8029F608:
{
    r3 = 255;
    goto loc_inl5_cont_8029F5FC;
}

loc_inl5_0x8029F610:
{
    r3 = MemoryInline::FlatRead8((r3 + 14));
}

loc_inl5_cont_8029F5FC:
{
    // end of inlined leaf 0x8029F5FC
    r0 = (r3 & 255);
}

loc_809EB69C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(255))) {
        goto loc_809EB6B8;
    }
}

loc_809EB6A0:
{
}

loc_809EB6A4:
{
    if ((static_cast<int32_t>(r30) > static_cast<int32_t>(0))) {
        goto loc_809EB6B8;
    }
}

loc_809EB6A8:
{
    r3 = r29;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x802AAF18u) && KnownTranslatedCpuCall<0x802AAF18u>::kAvailable && !KnownTranslatedCpuCall<0x802AAF18u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x802AAF18u>()) {
        const auto state_free_result_802AAF18_B571 = func_802AAF18_statefree_v1(r3, xer);
        r0 = static_cast<uint32_t>(state_free_result_802AAF18_B571[0]);
        r3 = static_cast<uint32_t>(state_free_result_802AAF18_B571[1]);
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
        InvokeDirectCpu<0x802AAF18u>(ctx);
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
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_809EB6B4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_809EB708;
    }
}

loc_809EB6B8:
{
    r3 = (r29 + 92);
    // inline leaf 0x8029F5FC (7 guest instruction(s))
}

loc_inl6_0x8029F5FC:
{
    r0 = MemoryInline::FlatRead8((r3 + 5));
}

loc_inl6_0x8029F604:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl6_0x8029F610;
    }
}

loc_inl6_0x8029F608:
{
    r3 = 255;
    goto loc_inl6_cont_8029F5FC;
}

loc_inl6_0x8029F610:
{
    r3 = MemoryInline::FlatRead8((r3 + 14));
}

loc_inl6_cont_8029F5FC:
{
    // end of inlined leaf 0x8029F5FC
    r0 = (r3 & 255);
}

loc_809EB6C8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_809EB6FC;
    }
}

loc_809EB6CC:
{
    r0 = MemoryInline::FlatRead8((r29 + 2));
}

loc_809EB6D4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(13))) {
        goto loc_809EB6E0;
    }
}

loc_809EB6D8:
{
}

loc_809EB6DC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(16))) {
        goto loc_809EB6FC;
    }
}

loc_809EB6E0:
{
    // inline leaf 0x802AFCE8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3014));
    // end of inlined leaf 0x802AFCE8
    r3 = (r3 & 255);
    r0 = MemoryInline::FlatRead8((r29 + 8));
}

loc_809EB6F0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_809EB6FC;
    }
}

loc_809EB6F4:
{
    r3 = (r29 + 24);
    ctx->lr = 0x809EB6FCu;
    if constexpr (KnownRegArgsCpuCall<0x800DC844u>(&func_800DC844)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_800DC844_C1E9 = func_800DC844_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_800DC844_C1E9);
        r4 = static_cast<uint32_t>(regargs_result_800DC844_C1E9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DC844u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_809EB6FC:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r29 + 4), static_cast<uint8_t>(r0));
    goto loc_809EB72C;
}

loc_809EB708:
{
    r3 = r29;
    if constexpr (KnownRegArgsCpuCall<0x802AB24Cu>(&func_802AB24C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_802AB24C_C6A5 = func_802AB24C_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_802AB24C_C6A5);
        r4 = static_cast<uint32_t>(regargs_result_802AB24C_C6A5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x802AB24Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r0 = MemoryInline::FlatRead32((r29 + 16));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(11));
    r0 = (r0_rot_0 & -2048);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite32((r29 + 36), r0);
}

loc_809EB720:
{
    r3 = r29;
    r4 = MemoryInline::FlatRead32(r31);
    ctx->lr = 0x809EB72Cu;
    if constexpr (KnownRegArgsCpuCall<0x802AB2A4u>(&func_802AB2A4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_802AB2A4_CC3E = func_802AB2A4_ra58_1fe_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802AB2A4_CC3E);
        r4 = static_cast<uint32_t>(regargs_result_802AB2A4_CC3E >> 32);
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
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
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
        InvokeDirectCpu<0x802AB2A4u>(ctx);
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
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_809EB72C:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
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

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xE0003FFF fpr_write=0xE0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x809EB188 func_809EB188 preserves=true fpr_mask=0x00000000
