#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803FDAD0(CpuContext* ctx);
extern "C" uint64_t func_803FDAD0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803FFF5C(CpuContext* ctx);
extern "C" uint64_t func_803FFF5C_rac8_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80400024(CpuContext* ctx);
extern "C" uint64_t func_80400024_rac8_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804001FC(CpuContext* ctx);
extern "C" uint32_t func_804001FC_rac8_1fe_8_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804002E0(CpuContext* ctx);
extern "C" uint64_t func_804002E0_ra58_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80400344(CpuContext* ctx);
extern "C" uint64_t func_80400344_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804003E0(CpuContext* ctx);
extern "C" uint64_t func_804003E0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8040045C(CpuContext* ctx);
extern "C" uint64_t func_8040045C_rac8_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80400D38(CpuContext* ctx);
extern "C" uint64_t func_80400D38_rac8_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804127C0(CpuContext* ctx);
extern "C" uint64_t func_804127C0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80414AA8(CpuContext* ctx);
extern "C" uint32_t func_80414AA8_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804167B4(CpuContext* ctx);
extern "C" uint64_t func_804167B4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80456C40(CpuContext* ctx);
extern "C" uint64_t func_80456C40_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_803FF248_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_10 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r13 = ctx->gpr[13];
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
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_803FF248;

loc_803FF248:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = r3;
    r7 = MemoryInline::FlatRead8((r3 + 24885));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(80));
}

loc_803FF268:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_803FF590;
    }
}

loc_803FF26C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_803FF2D0;
    }
}

loc_803FF270:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(40));
}

loc_803FF274:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_803FF458;
    }
}

loc_803FF278:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_803FF2AC;
    }
}

loc_803FF27C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(20));
}

loc_803FF280:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_803FF374;
    }
}

loc_803FF284:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_803FF2A0;
    }
}

loc_803FF288:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(10));
}

loc_803FF28C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_803FF364;
    }
}

loc_803FF290:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_803FF6B8;
    }
}

loc_803FF294:
{
}

loc_803FF298:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(5))) {
        goto loc_803FF324;
    }
}

loc_803FF29C:
{
    goto loc_803FF6B8;
}

loc_803FF2A0:
{
}

loc_803FF2A4:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(30))) {
        goto loc_803FF448;
    }
}

loc_803FF2A8:
{
    goto loc_803FF6B8;
}

loc_803FF2AC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(60));
}

loc_803FF2B0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_803FF51C;
    }
}

loc_803FF2B4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_803FF2C4;
    }
}

loc_803FF2B8:
{
}

loc_803FF2BC:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(50))) {
        goto loc_803FF490;
    }
}

loc_803FF2C0:
{
    goto loc_803FF6B8;
}

loc_803FF2C4:
{
}

loc_803FF2C8:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(70))) {
        goto loc_803FF52C;
    }
}

loc_803FF2CC:
{
    goto loc_803FF6B8;
}

loc_803FF2D0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(120));
}

loc_803FF2D4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_803FF614;
    }
}

loc_803FF2D8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_803FF300;
    }
}

loc_803FF2DC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(100));
}

loc_803FF2E0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_803FF5C4;
    }
}

loc_803FF2E4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_803FF2F4;
    }
}

loc_803FF2E8:
{
}

loc_803FF2EC:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(90))) {
        goto loc_803FF5A0;
    }
}

loc_803FF2F0:
{
    goto loc_803FF6B8;
}

loc_803FF2F4:
{
}

loc_803FF2F8:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(110))) {
        goto loc_803FF5E4;
    }
}

loc_803FF2FC:
{
    goto loc_803FF6B8;
}

loc_803FF300:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(240));
}

loc_803FF304:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_803FF688;
    }
}

loc_803FF308:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_803FF318;
    }
}

loc_803FF30C:
{
}

loc_803FF310:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(230))) {
        goto loc_803FF638;
    }
}

loc_803FF314:
{
    goto loc_803FF6B8;
}

loc_803FF318:
{
}

loc_803FF31C:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(250))) {
        goto loc_803FF6B0;
    }
}

loc_803FF320:
{
    goto loc_803FF6B8;
}

loc_803FF324:
{
    r4 = (r3 + 65536);
    r0 = MemoryInline::FlatRead8((r4 + -30379));
}

loc_803FF330:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_803FF358;
    }
}

loc_803FF334:
{
    r0 = MemoryInline::FlatRead8((r4 + -32068));
}

loc_803FF33C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803FF34C;
    }
}

loc_803FF340:
{
    r0 = (r7 + 5);
    MemoryInline::FlatWrite8((r3 + 24885), static_cast<uint8_t>(r0));
    goto loc_803FF6B8;
}

loc_803FF34C:
{
    r0 = 120;
    MemoryInline::FlatWrite8((r3 + 24885), static_cast<uint8_t>(r0));
    goto loc_803FF6B8;
}

loc_803FF358:
{
    r0 = (r7 + 1);
    r3 = (0 - r0);
    goto loc_803FF6BC;
}

loc_803FF364:
{
    r0 = (r7 + 5);
    MemoryInline::FlatWrite8((r3 + 24885), static_cast<uint8_t>(r0));
    ctx->lr = 0x803FF370u;
    if constexpr (KnownRegArgsCpuCall<0x804001FCu>(&func_804001FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804001FC_2511 = func_804001FC_rac8_1fe_8_0(ctx, r3, r6, r7, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = regargs_result_804001FC_2511;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804001FCu>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    goto loc_803FF6B8;
}

loc_803FF374:
{
    r4 = (r3 + 65536);
    r0 = MemoryInline::FlatRead8((r4 + -30377));
}

loc_803FF380:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_803FF390;
    }
}

loc_803FF384:
{
    r0 = (r7 + 10);
    MemoryInline::FlatWrite8((r3 + 24885), static_cast<uint8_t>(r0));
    goto loc_803FF6B8;
}

loc_803FF390:
{
    // inline leaf 0x803FE314 (6 guest instruction(s))
    r3 = (r3 + 65536);
    r3 = MemoryInline::FlatRead8((r3 + -30377));
    r0 = (r3 + -5);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 134217727);
    // end of inlined leaf 0x803FE314
}

loc_803FF398:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_803FF3AC;
    }
}

loc_803FF39C:
{
    r3 = r31;
    // inline leaf 0x803FE344 (6 guest instruction(s))
    r3 = (r3 + 65536);
    r3 = MemoryInline::FlatRead8((r3 + -30377));
    r0 = (r3 + -3);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_2 & 134217727);
    // end of inlined leaf 0x803FE344
}

loc_803FF3A8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803FF410;
    }
}

loc_803FF3AC:
{
    r3 = (r31 + 65536);
    r4 = MemoryInline::FlatRead32((r3 + -29748));
}

loc_803FF3B8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_803FF404;
    }
}

loc_803FF3BC:
{
    r30 = (r4 + -1);
    r3 = (r3 + -30375);
    if constexpr (KnownRegArgsCpuCall<0x80456C40u>(&func_80456C40)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80456C40_3311 = func_80456C40_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80456C40_3311);
        r4 = static_cast<uint32_t>(regargs_result_80456C40_3311 >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80456C40u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_803FF3CC:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r30))) {
        goto loc_803FF3E0;
    }
}

loc_803FF3D0:
{
    r3 = (r31 + 65536);
    r3 = (r3 + -30375);
    if constexpr (KnownRegArgsCpuCall<0x80456C40u>(&func_80456C40)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80456C40_36B3 = func_80456C40_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80456C40_36B3);
        r4 = static_cast<uint32_t>(regargs_result_80456C40_36B3 >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80456C40u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r30 = r3;
}

loc_803FF3E0:
{
    r4 = (r31 + 65536);
    r3 = MemoryInline::FlatRead32((r4 + -29744));
    r4 = (r4 + -30375);
    r5 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r0 = 0;
    r3 = (r31 + 65536);
    r3 = MemoryInline::FlatRead32((r3 + -29744));
    r3_addr_1 = (r3 + r30);
    MemoryInline::FlatWrite8(r3_addr_1, static_cast<uint8_t>(r0));
}

loc_803FF404:
{
    r0 = 250;
    MemoryInline::FlatWrite8((r31 + 24885), static_cast<uint8_t>(r0));
    goto loc_803FF6B8;
}

loc_803FF410:
{
    r3 = r31;
    // inline leaf 0x803FE32C (6 guest instruction(s))
    r3 = (r3 + 65536);
    r3 = MemoryInline::FlatRead8((r3 + -30377));
    r0 = (r3 + -2);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_3 & 134217727);
    // end of inlined leaf 0x803FE32C
}

loc_803FF41C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_803FF430;
    }
}

loc_803FF420:
{
    r3 = r31;
    // inline leaf 0x803FE2D4 (10 guest instruction(s))
}

loc_inl3_0x803FE2D4:
{
    r0 = 1;
    r3 = (r3 + 65536);
    r3 = MemoryInline::FlatRead8((r3 + -30377));
}

loc_inl3_0x803FE2E4:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(4))) {
        goto loc_inl3_0x803FE2F4;
    }
}

loc_inl3_0x803FE2E8:
{
}

loc_inl3_0x803FE2EC:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(6))) {
        goto loc_inl3_0x803FE2F4;
    }
}

loc_inl3_0x803FE2F0:
{
    r0 = 0;
}

loc_inl3_0x803FE2F4:
{
    r3 = r0;
}

loc_inl3_cont_803FE2D4:
{
    // end of inlined leaf 0x803FE2D4
}

loc_803FF42C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803FF43C;
    }
}

loc_803FF430:
{
    r0 = 225;
    MemoryInline::FlatWrite8((r31 + 24885), static_cast<uint8_t>(r0));
    goto loc_803FF6B8;
}

loc_803FF43C:
{
    r0 = MemoryInline::FlatRead8((r31 + 24885));
    r3 = (0 - r0);
    goto loc_803FF6BC;
}

loc_803FF448:
{
    r0 = (r7 + 5);
    MemoryInline::FlatWrite8((r3 + 24885), static_cast<uint8_t>(r0));
    ctx->lr = 0x803FF454u;
    if constexpr (KnownRegArgsCpuCall<0x80400024u>(&func_80400024)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80400024_430E = func_80400024_rac8_1fe_18_0(ctx, r3, r6, r7, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80400024_430E);
        r4 = static_cast<uint32_t>(regargs_result_80400024_430E >> 32);
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80400024u>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    goto loc_803FF6B8;
}

loc_803FF458:
{
    // inline leaf 0x803FE2FC (6 guest instruction(s))
    r3 = (r3 + 65536);
    r3 = MemoryInline::FlatRead8((r3 + -30377));
    r0 = (r3 + -6);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_5 & 134217727);
    // end of inlined leaf 0x803FE2FC
}

loc_803FF460:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803FF470;
    }
}

loc_803FF464:
{
    r0 = 250;
    MemoryInline::FlatWrite8((r31 + 24885), static_cast<uint8_t>(r0));
    goto loc_803FF6B8;
}

loc_803FF470:
{
    r3 = MemoryInline::FlatRead8((r31 + 24885));
    r0 = (r3 + 5);
    MemoryInline::FlatWrite8((r31 + 24885), static_cast<uint8_t>(r0));
    r3 = r31;
    r4 = 1;
    r5 = 6;
    ctx->lr = 0x803FF48Cu;
    if constexpr (KnownRegArgsCpuCall<0x80400344u>(&func_80400344)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80400344_4E8F = func_80400344_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80400344_4E8F);
        r4 = static_cast<uint32_t>(regargs_result_80400344_4E8F >> 32);
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80400344u>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    goto loc_803FF6B8;
}

loc_803FF490:
{
    r4 = (r3 + 65536);
    r0 = MemoryInline::FlatRead32((r4 + -29764));
}

loc_803FF49C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_803FF510;
    }
}

loc_803FF4A0:
{
    r4 = (r0 * 92);
    r5 = (r1 + 8);
    ctx->lr = 0x803FF4ACu;
    if constexpr (KnownRegArgsCpuCall<0x803FDAD0u>(&func_803FDAD0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_803FDAD0_57D9 = func_803FDAD0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803FDAD0_57D9);
        r4 = static_cast<uint32_t>(regargs_result_803FDAD0_57D9 >> 32);
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803FDAD0u>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r4 = (r31 + 65536);
    MemoryInline::FlatWrite32((r4 + -29760), r3);
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r3 = -1307181056;
    r3 = (r3 + 17097);
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r3) * static_cast<uint64_t>(r0)) >> 32));
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(26));
    r5 = (r5_rot_1 & 67108863);
    r0 = MemoryInline::FlatRead32((r4 + -29764));
}

loc_803FF4D0:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(r5))) {
        goto loc_803FF4EC;
    }
}

loc_803FF4D4:
{
    MemoryInline::FlatWrite32((r4 + -29764), r5);
    r3 = r31;
    r4 = (r5 * 92);
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r4 = (r0 - r4);
    // inline leaf 0x803FDCD0 (13 guest instruction(s))
}

loc_inl5_0x803FDCD0:
{
    r5 = (r3 + 65536);
    r0 = MemoryInline::FlatRead32((r5 + -29732));
}

loc_inl5_0x803FDCDC:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r4))) {
        goto loc_inl5_0x803FDCE4;
    }
}

loc_inl5_0x803FDCE0:
{
    r4 = r0;
}

loc_inl5_0x803FDCE4:
{
    r3 = (r3 + 65536);
    r0 = MemoryInline::FlatRead32((r3 + -29732));
    r0 = (r0 - r4);
    MemoryInline::FlatWrite32((r3 + -29732), r0);
    r0 = MemoryInline::FlatRead32((r3 + -29728));
    r0 = (r0 + r4);
    MemoryInline::FlatWrite32((r3 + -29728), r0);
}

loc_inl5_cont_803FDCD0:
{
    // end of inlined leaf 0x803FDCD0
}

loc_803FF4EC:
{
    r3 = MemoryInline::FlatRead8((r31 + 24885));
    r0 = (r3 + 5);
    MemoryInline::FlatWrite8((r31 + 24885), static_cast<uint8_t>(r0));
    r3 = r31;
    r4 = 1;
    r5 = (r31 + 65536);
    r5 = MemoryInline::FlatRead32((r5 + -29764));
    ctx->lr = 0x803FF50Cu;
    if constexpr (KnownRegArgsCpuCall<0x804003E0u>(&func_804003E0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804003E0_66AD = func_804003E0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804003E0_66AD);
        r4 = static_cast<uint32_t>(regargs_result_804003E0_66AD >> 32);
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804003E0u>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    goto loc_803FF6B8;
}

loc_803FF510:
{
    r0 = (r7 + 10);
    MemoryInline::FlatWrite8((r3 + 24885), static_cast<uint8_t>(r0));
    goto loc_803FF6B8;
}

loc_803FF51C:
{
    r0 = (r7 + 5);
    MemoryInline::FlatWrite8((r3 + 24885), static_cast<uint8_t>(r0));
    ctx->lr = 0x803FF528u;
    if constexpr (KnownRegArgsCpuCall<0x8040045Cu>(&func_8040045C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8040045C_6FBB = func_8040045C_rac8_1fe_18_0(ctx, r3, r6, r7, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8040045C_6FBB);
        r4 = static_cast<uint32_t>(regargs_result_8040045C_6FBB >> 32);
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8040045Cu>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    goto loc_803FF6B8;
}

loc_803FF52C:
{
    r5 = (r3 + 65536);
    r0 = MemoryInline::FlatRead32((r5 + -29764));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_803FF538:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_803FF574;
    }
}

loc_803FF53C:
{
    r6 = 0;
    ctr = r0;
    if (((cr & 0x40000000u) == 0)) {
        goto loc_803FF580;
    }
}

loc_803FF548:
{
    r0 = MemoryInline::FlatRead32((r5 + -29760));
    r4 = (r0 + r6);
    r0 = MemoryInline::FlatRead8((r4 + 4));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_803FF55C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803FF568;
    }
}

loc_803FF560:
{
    r3 = (0 - r7);
    goto loc_803FF6BC;
}

loc_803FF568:
{
    r6 = (r6 + 92);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803FF548;
    }
}

loc_803FF570:
{
    goto loc_803FF580;
}

loc_803FF574:
{
    r0 = (r7 + 1);
    r3 = (0 - r0);
    goto loc_803FF6BC;
}

loc_803FF580:
{
    r4 = MemoryInline::FlatRead8((r3 + 24885));
    r0 = (r4 + 10);
    MemoryInline::FlatWrite8((r3 + 24885), static_cast<uint8_t>(r0));
    goto loc_803FF6B8;
}

loc_803FF590:
{
    r0 = (r7 + 5);
    MemoryInline::FlatWrite8((r3 + 24885), static_cast<uint8_t>(r0));
    ctx->lr = 0x803FF59Cu;
    if constexpr (KnownRegArgsCpuCall<0x803FFF5Cu>(&func_803FFF5C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_803FFF5C_7D14 = func_803FFF5C_rac8_1fe_18_0(ctx, r3, r6, r7, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803FFF5C_7D14);
        r4 = static_cast<uint32_t>(regargs_result_803FFF5C_7D14 >> 32);
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803FFF5Cu>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    goto loc_803FF6B8;
}

loc_803FF5A0:
{
    r4 = 3;
    r5 = 0;
    r6 = 0;
    r8 = (r3 + 65536);
    r7 = MemoryInline::FlatRead32((r8 + -29764));
    r8 = MemoryInline::FlatRead32((r8 + -29760));
    ctx->lr = 0x803FF5BCu;
    if constexpr (KnownRegArgsCpuCall<0x804127C0u>(&func_804127C0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804127C0_85FC = func_804127C0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804127C0_85FC);
        r4 = static_cast<uint32_t>(regargs_result_804127C0_85FC >> 32);
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804127C0u>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r3 = 1;
    goto loc_803FF6BC;
}

loc_803FF5C4:
{
    r0 = 1;
    r4 = (r3 + 65536);
    MemoryInline::FlatWrite8((r4 + -32068), static_cast<uint8_t>(r0));
    r0 = (r7 + 5);
    MemoryInline::FlatWrite8((r3 + 24885), static_cast<uint8_t>(r0));
    r4 = 1;
    ctx->lr = 0x803FF5E0u;
    if constexpr (KnownRegArgsCpuCall<0x804002E0u>(&func_804002E0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804002E0_8F21 = func_804002E0_ra58_1fe_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804002E0_8F21);
        r4 = static_cast<uint32_t>(regargs_result_804002E0_8F21 >> 32);
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804002E0u>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    goto loc_803FF6B8;
}

loc_803FF5E4:
{
    // inline leaf 0x800E8A3C (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16732));
    // end of inlined leaf 0x800E8A3C
    r4 = (r31 + 65536);
    r4 = (r4 + -32035);
    r5 = (r31 + 65536);
    r5 = (r5 + -31991);
    ctx->lr = 0x803FF5FCu;
    if constexpr (KnownRegArgsCpuCall<0x804167B4u>(&func_804167B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_804167B4_97F1 = func_804167B4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804167B4_97F1);
        r4 = static_cast<uint32_t>(regargs_result_804167B4_97F1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x804167B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    // inline leaf 0x800E8A3C (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16732));
    // end of inlined leaf 0x800E8A3C
    r4 = 0;
    ctx->lr = 0x803FF608u;
    if constexpr (KnownRegArgsCpuCall<0x80414AA8u>(&func_80414AA8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_80414AA8_9C2C = func_80414AA8_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_80414AA8_9C2C;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x80414AA8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r0 = 10;
    MemoryInline::FlatWrite8((r31 + 24885), static_cast<uint8_t>(r0));
    goto loc_803FF6B8;
}

loc_803FF614:
{
    r0 = 3;
    r3 = (r3 + 65536);
    MemoryInline::FlatWrite8((r3 + -32068), static_cast<uint8_t>(r0));
    // inline leaf 0x800E8A3C (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16732));
    // end of inlined leaf 0x800E8A3C
    r4 = 0;
    ctx->lr = 0x803FF62Cu;
    if constexpr (KnownRegArgsCpuCall<0x80414AA8u>(&func_80414AA8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_80414AA8_A12E = func_80414AA8_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_80414AA8_A12E;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x80414AA8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r0 = 10;
    MemoryInline::FlatWrite8((r31 + 24885), static_cast<uint8_t>(r0));
    goto loc_803FF6B8;
}

loc_803FF638:
{
    // inline leaf 0x803FE32C (6 guest instruction(s))
    r3 = (r3 + 65536);
    r3 = MemoryInline::FlatRead8((r3 + -30377));
    r0 = (r3 + -2);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_6 & 134217727);
    // end of inlined leaf 0x803FE32C
}

loc_803FF640:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803FF650;
    }
}

loc_803FF644:
{
    r0 = 30;
    MemoryInline::FlatWrite8((r31 + 24885), static_cast<uint8_t>(r0));
    goto loc_803FF6B8;
}

loc_803FF650:
{
    r3 = r31;
    // inline leaf 0x803FE2FC (6 guest instruction(s))
    r3 = (r3 + 65536);
    r3 = MemoryInline::FlatRead8((r3 + -30377));
    r0 = (r3 + -6);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_7 & 134217727);
    // end of inlined leaf 0x803FE2FC
}

loc_803FF65C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803FF678;
    }
}

loc_803FF660:
{
    r3 = MemoryInline::FlatRead8((r31 + 24885));
    r0 = (r3 + 5);
    MemoryInline::FlatWrite8((r31 + 24885), static_cast<uint8_t>(r0));
    r3 = r31;
    ctx->lr = 0x803FF674u;
    if constexpr (KnownRegArgsCpuCall<0x80400D38u>(&func_80400D38)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80400D38_AA8A = func_80400D38_rac8_1fe_18_0(ctx, r3, r6, r7, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80400D38_AA8A);
        r4 = static_cast<uint32_t>(regargs_result_80400D38_AA8A >> 32);
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80400D38u>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    goto loc_803FF6B8;
}

loc_803FF678:
{
    r3 = MemoryInline::FlatRead8((r31 + 24885));
    r0 = (r3 + 20);
    MemoryInline::FlatWrite8((r31 + 24885), static_cast<uint8_t>(r0));
    goto loc_803FF6B8;
}

loc_803FF688:
{
    // inline leaf 0x803FE2FC (6 guest instruction(s))
    r3 = (r3 + 65536);
    r3 = MemoryInline::FlatRead8((r3 + -30377));
    r0 = (r3 + -6);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_8 & 134217727);
    // end of inlined leaf 0x803FE2FC
}

loc_803FF690:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803FF6A0;
    }
}

loc_803FF694:
{
    r0 = 30;
    MemoryInline::FlatWrite8((r31 + 24885), static_cast<uint8_t>(r0));
    goto loc_803FF6B8;
}

loc_803FF6A0:
{
    r3 = MemoryInline::FlatRead8((r31 + 24885));
    r0 = (r3 + 10);
    MemoryInline::FlatWrite8((r31 + 24885), static_cast<uint8_t>(r0));
    goto loc_803FF6B8;
}

loc_803FF6B0:
{
    r3 = 1;
    goto loc_803FF6BC;
}

loc_803FF6B8:
{
    r3 = 0;
}

loc_803FF6BC:
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803FF248(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803FF248_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803FF248 func_803FF248 preserves=true fpr_mask=0x00000000
