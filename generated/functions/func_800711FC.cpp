#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8005D27C(CpuContext* ctx);
extern "C" uint64_t func_8005D27C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8005D324(CpuContext* ctx);
extern "C" uint32_t func_8005D324_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8006FF2C(CpuContext* ctx);
extern "C" uint64_t func_8006FF2C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80070084(CpuContext* ctx);
extern "C" uint64_t func_80070084_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80071070(CpuContext* ctx);
extern "C" uint64_t func_80071070_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_800710C8(CpuContext* ctx);
extern "C" uint64_t func_800710C8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80071194(CpuContext* ctx);
extern "C" uint64_t func_80071194_ra38_3e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double);
extern "C" void func_80071BD4(CpuContext* ctx);
extern "C" uint32_t func_80071BD4_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80071C38(CpuContext* ctx);
extern "C" uint32_t func_80071C38_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80071C9C(CpuContext* ctx);
extern "C" void func_80071C9C_ra8_0_0_0(CpuContext*, uint32_t);
extern "C" void func_80071CA0(CpuContext* ctx);
extern "C" uint64_t func_80071CA0_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80502E88(CpuContext* ctx);
extern "C" uint32_t func_80502E88_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80071BD4_statefree(uint32_t, uint32_t, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_80502E88_statefree(uint32_t, uint32_t, uint32_t, uint32_t);

extern "C" void func_800711FC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_psqx_80071BB4_loc_0 = 0;
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
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_10 = 0;
    uint32_t r3_rot_11 = 0;
    uint32_t r3_rot_12 = 0;
    uint32_t r3_rot_13 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;
    uint32_t r9_addr_0 = 0;
    uint32_t r9_addr_1 = 0;
    uint32_t r9_addr_2 = 0;
    uint32_t r9_addr_3 = 0;
    uint32_t r9_addr_4 = 0;
    uint32_t r9_addr_5 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r14 = ctx->gpr[14];
    uint32_t r15 = ctx->gpr[15];
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
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    MKW_GUEST_ENTER(0x800711FCu);
    goto loc_800711FC;

loc_800711FC:
{
    MemoryAlias::FlatWriteRam32((r1 + -256), r1);
    r1 = (r1 + -256);
    r0 = ctx->lr;
    MemoryAlias::FlatWriteRam32((r1 + 260), r0);
    MemoryAlias::FlatWriteRamFloat64((r1 + 240), f31.d);
    // psq_store w=0 quant=0 (using MemoryAlias::PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 248);
    MemoryAlias::PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 240);
    // inline leaf 0x80457454 (19 guest instruction(s))
    guest_range_0 = MemoryAlias::ResolveRangeHost((r11 + -72), 0, 72u, false, true);
    // end of inlined leaf 0x80457454
    MemoryAlias::FlatWriteRam32((r1 + 8), r3);
    MemoryAlias::FlatWriteRam32((r1 + 12), r4);
    r15 = r5;
    MemoryAlias::FlatWriteRam32((r1 + 16), r6);
    MemoryAlias::FlatWriteRam32((r1 + 20), r7);
    r16 = r8;
    r17 = r9;
    r18 = r10;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r11 = (r3 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_8007125C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80071274;
    }
}

loc_80071260:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 2130706432);
}

loc_8007126C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80071274;
    }
}

loc_80071270:
{
    r10 = 0;
}

loc_80071274:
{
}

loc_80071278:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_80071290;
    }
}

loc_8007127C:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 1879048192);
}

loc_80071288:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80071290;
    }
}

loc_8007128C:
{
    r9 = 0;
}

loc_80071290:
{
}

loc_80071294:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800712A8;
    }
}

loc_80071298:
{
    r0 = (r11 + 1073741824);
}

loc_800712A0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800712A8;
    }
}

loc_800712A4:
{
    r8 = 0;
}

loc_800712A8:
{
}

loc_800712AC:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800712C4;
    }
}

loc_800712B0:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 1056964608);
}

loc_800712BC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800712C4;
    }
}

loc_800712C0:
{
    r7 = 0;
}

loc_800712C4:
{
}

loc_800712C8:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800712E0;
    }
}

loc_800712CC:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 805306368);
}

loc_800712D8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800712E0;
    }
}

loc_800712DC:
{
    r6 = 0;
}

loc_800712E0:
{
}

loc_800712E4:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800712FC;
    }
}

loc_800712E8:
{
    r3 = (r3 & -16384);
    r0 = (r3 + 536870912);
}

loc_800712F4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800712FC;
    }
}

loc_800712F8:
{
    r5 = 0;
}

loc_800712FC:
{
}

loc_80071300:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_80071324;
    }
}

loc_80071304:
{
    r3 = 0x80590000u;
    r3 = (r3 + -7944);
    r4 = 1236;
    r5 = 0x80590000u;
    r5 = (r5 + -7572);
    r6 = MemoryAlias::FlatRead32((r1 + 8));
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80071324u;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_80071324:
{
    r4 = 1;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = (r15 & -16777216);
    r0 = (r10 + -2147483648);
}

loc_80071348:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80071360;
    }
}

loc_8007134C:
{
    r3 = (r15 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_80071358:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80071360;
    }
}

loc_8007135C:
{
    r9 = 0;
}

loc_80071360:
{
}

loc_80071364:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8007137C;
    }
}

loc_80071368:
{
    r3 = (r15 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_80071374:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8007137C;
    }
}

loc_80071378:
{
    r8 = 0;
}

loc_8007137C:
{
}

loc_80071380:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_80071394;
    }
}

loc_80071384:
{
    r0 = (r10 + 1073741824);
}

loc_8007138C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80071394;
    }
}

loc_80071390:
{
    r7 = 0;
}

loc_80071394:
{
}

loc_80071398:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800713B0;
    }
}

loc_8007139C:
{
    r3 = (r15 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800713A8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800713B0;
    }
}

loc_800713AC:
{
    r6 = 0;
}

loc_800713B0:
{
}

loc_800713B4:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800713CC;
    }
}

loc_800713B8:
{
    r3 = (r15 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800713C4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800713CC;
    }
}

loc_800713C8:
{
    r5 = 0;
}

loc_800713CC:
{
}

loc_800713D0:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800713E8;
    }
}

loc_800713D4:
{
    r3 = (r15 & -16384);
    r0 = (r3 + 536870912);
}

loc_800713E0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800713E8;
    }
}

loc_800713E4:
{
    r4 = 0;
}

loc_800713E8:
{
}

loc_800713EC:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80071410;
    }
}

loc_800713F0:
{
    r3 = 0x80590000u;
    r3 = (r3 + -7944);
    r4 = 1237;
    r5 = 0x80590000u;
    r5 = (r5 + -7512);
    r6 = r15;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80071410u;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_80071410:
{
    r4 = 1;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r0 = MemoryAlias::FlatRead32((r1 + 16));
    r10 = (r0 & -16777216);
    r0 = (r10 + -2147483648);
}

loc_80071438:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80071454;
    }
}

loc_8007143C:
{
    r0 = MemoryAlias::FlatRead32((r1 + 16));
    r3 = (r0 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_8007144C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80071454;
    }
}

loc_80071450:
{
    r9 = 0;
}

loc_80071454:
{
}

loc_80071458:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_80071474;
    }
}

loc_8007145C:
{
    r0 = MemoryAlias::FlatRead32((r1 + 16));
    r3 = (r0 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_8007146C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80071474;
    }
}

loc_80071470:
{
    r8 = 0;
}

loc_80071474:
{
}

loc_80071478:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8007148C;
    }
}

loc_8007147C:
{
    r0 = (r10 + 1073741824);
}

loc_80071484:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8007148C;
    }
}

loc_80071488:
{
    r7 = 0;
}

loc_8007148C:
{
}

loc_80071490:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800714AC;
    }
}

loc_80071494:
{
    r0 = MemoryAlias::FlatRead32((r1 + 16));
    r3 = (r0 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800714A4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800714AC;
    }
}

loc_800714A8:
{
    r6 = 0;
}

loc_800714AC:
{
}

loc_800714B0:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800714CC;
    }
}

loc_800714B4:
{
    r0 = MemoryAlias::FlatRead32((r1 + 16));
    r3 = (r0 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800714C4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800714CC;
    }
}

loc_800714C8:
{
    r5 = 0;
}

loc_800714CC:
{
}

loc_800714D0:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800714EC;
    }
}

loc_800714D4:
{
    r0 = MemoryAlias::FlatRead32((r1 + 16));
    r3 = (r0 & -16384);
    r0 = (r3 + 536870912);
}

loc_800714E4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800714EC;
    }
}

loc_800714E8:
{
    r4 = 0;
}

loc_800714EC:
{
}

loc_800714F0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80071514;
    }
}

loc_800714F4:
{
    r3 = 0x80590000u;
    r3 = (r3 + -7944);
    r4 = 1238;
    r5 = 0x80590000u;
    r5 = (r5 + -7448);
    r6 = MemoryAlias::FlatRead32((r1 + 16));
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80071514u;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_80071514:
{
    r4 = 1;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = (r16 & -16777216);
    r0 = (r10 + -2147483648);
}

loc_80071538:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80071550;
    }
}

loc_8007153C:
{
    r3 = (r16 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_80071548:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80071550;
    }
}

loc_8007154C:
{
    r9 = 0;
}

loc_80071550:
{
}

loc_80071554:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8007156C;
    }
}

loc_80071558:
{
    r3 = (r16 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_80071564:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8007156C;
    }
}

loc_80071568:
{
    r8 = 0;
}

loc_8007156C:
{
}

loc_80071570:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_80071584;
    }
}

loc_80071574:
{
    r0 = (r10 + 1073741824);
}

loc_8007157C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80071584;
    }
}

loc_80071580:
{
    r7 = 0;
}

loc_80071584:
{
}

loc_80071588:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800715A0;
    }
}

loc_8007158C:
{
    r3 = (r16 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_80071598:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800715A0;
    }
}

loc_8007159C:
{
    r6 = 0;
}

loc_800715A0:
{
}

loc_800715A4:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800715BC;
    }
}

loc_800715A8:
{
    r3 = (r16 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800715B4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800715BC;
    }
}

loc_800715B8:
{
    r5 = 0;
}

loc_800715BC:
{
}

loc_800715C0:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800715D8;
    }
}

loc_800715C4:
{
    r3 = (r16 & -16384);
    r0 = (r3 + 536870912);
}

loc_800715D0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800715D8;
    }
}

loc_800715D4:
{
    r4 = 0;
}

loc_800715D8:
{
}

loc_800715DC:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80071600;
    }
}

loc_800715E0:
{
    r3 = 0x80590000u;
    r3 = (r3 + -7944);
    r4 = 1239;
    r5 = 0x80590000u;
    r5 = (r5 + -7380);
    r6 = r16;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80071600u;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_80071600:
{
    r0 = MemoryAlias::FlatRead32((r1 + 20));
}

loc_80071608:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80071BB0;
    }
}

loc_8007160C:
{
    // inline leaf 0x80071CA4 (2 guest instruction(s))
    r3 = -536870912;
    // end of inlined leaf 0x80071CA4
    r0 = (r3 + 2048);
    MemoryAlias::FlatWriteRam32((r1 + 80), r0);
    r0 = (r3 + 4096);
    MemoryAlias::FlatWriteRam32((r1 + 76), r0);
    r0 = (r3 + 6144);
    MemoryAlias::FlatWriteRam32((r1 + 72), r0);
    r0 = (r3 + 10240);
    MemoryAlias::FlatWriteRam32((r1 + 68), r0);
    r0 = (r3 + 12288);
    MemoryAlias::FlatWriteRam32((r1 + 64), r0);
    r0 = (r3 + 14336);
    MemoryAlias::FlatWriteRam32((r1 + 60), r0);
    r0 = MemoryAlias::FlatRead32((r1 + 20));
    r14 = (r0 * 48);
    r3 = r14;
    // inline leaf 0x800711F0 (3 guest instruction(s))
    r0 = (r3 + 31);
    r3 = (r0 & -32);
    // end of inlined leaf 0x800711F0
    r4 = r3;
    r3 = MemoryAlias::FlatRead32((r1 + 8));
    if constexpr (KnownRegArgsCpuCall<0x80071CA0u>(&func_80071CA0)) {
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80071CA0_4A2B = func_80071CA0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80071CA0_4A2B);
        r4 = static_cast<uint32_t>(regargs_result_80071CA0_4A2B >> 32);
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80071CA0u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r0 = 1;
    MemoryAlias::FlatWriteRam32((r1 + 144), r0);
    r0 = MemoryAlias::FlatRead32((r1 + 12));
}

loc_8007166C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800716B4;
    }
}

loc_80071670:
{
    r0 = 2;
    MemoryAlias::FlatWriteRam32((r1 + 144), r0);
    r0 = MemoryAlias::FlatRead32((r1 + 20));
    r3 = (r0 * 36);
    // inline leaf 0x800711F0 (3 guest instruction(s))
    r0 = (r3 + 31);
    r3 = (r0 & -32);
    // end of inlined leaf 0x800711F0
    r4 = r3;
    r3 = MemoryAlias::FlatRead32((r1 + 12));
    if constexpr (KnownRegArgsCpuCall<0x80071CA0u>(&func_80071CA0)) {
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80071CA0_4F84 = func_80071CA0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80071CA0_4F84);
        r4 = static_cast<uint32_t>(regargs_result_80071CA0_4F84 >> 32);
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80071CA0u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_80071694:
{
    if ((static_cast<int32_t>(r18) == static_cast<int32_t>(0))) {
        goto loc_800716B4;
    }
}

loc_80071698:
{
    r0 = 3;
    MemoryAlias::FlatWriteRam32((r1 + 144), r0);
    r3 = r14;
    // inline leaf 0x800711F0 (3 guest instruction(s))
    r0 = (r3 + 31);
    r3 = (r0 & -32);
    // end of inlined leaf 0x800711F0
    r4 = r3;
    r3 = r18;
    if constexpr (KnownRegArgsCpuCall<0x80071CA0u>(&func_80071CA0)) {
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80071CA0_541E = func_80071CA0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80071CA0_541E);
        r4 = static_cast<uint32_t>(regargs_result_80071CA0_541E >> 32);
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80071CA0u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_800716B4:
{
    // inline leaf 0x8005CF68 (3 guest instruction(s))
    r3 = 0x80670000u;
    r3 = (r3 + -11520);
    // end of inlined leaf 0x8005CF68
    r28 = r3;
    r3 = 0;
    if constexpr (KnownRegArgsCpuCall<0x80071C9Cu>(&func_80071C9C)) {
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        func_80071C9C_ra8_0_0_0(ctx, r3);
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80071C9Cu>(ctx);
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r23 = 0;
    r0 = 0;
    MemoryAlias::FlatWriteRam32((r1 + 164), r0);
    r0 = 0;
    MemoryAlias::FlatWriteRam32((r1 + 160), r0);
    MemoryAlias::FlatWriteRam32((r1 + 156), r15);
    r0 = MemoryAlias::FlatRead32((r1 + 12));
    MemoryAlias::FlatWriteRam32((r1 + 152), r0);
    MemoryAlias::FlatWriteRam32((r1 + 148), r18);
    f31.d = MemoryAlias::FlatReadFloat32((r2 + -31992));
    r30 = 0x80590000u;
    r31 = 0x80590000u;
    r14 = 0x80590000u;
    goto loc_80071BA4;
}

loc_800716FC:
{
    r0 = MemoryAlias::FlatRead32((r1 + 20));
    r22 = (r0 - r23);
}

loc_80071708:
{
    if ((static_cast<uint32_t>(r22) <= static_cast<uint32_t>(40))) {
        goto loc_80071724;
    }
}

loc_8007170C:
{
    r22 = 40;
    r0 = 60;
    MemoryAlias::FlatWriteRam32((r1 + 140), r0);
    r0 = 45;
    MemoryAlias::FlatWriteRam32((r1 + 136), r0);
    goto loc_80071744;
}

loc_80071724:
{
    r3 = (r22 * 48);
    // inline leaf 0x800711F0 (3 guest instruction(s))
    r0 = (r3 + 31);
    r3 = (r0 & -32);
    // end of inlined leaf 0x800711F0
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(27));
    r0 = (r0_rot_2 & 134217727);
    MemoryAlias::FlatWriteRam32((r1 + 140), r0);
    r3 = (r22 * 36);
    // inline leaf 0x800711F0 (3 guest instruction(s))
    r0 = (r3 + 31);
    r3 = (r0 & -32);
    // end of inlined leaf 0x800711F0
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(27));
    r0 = (r0_rot_3 & 134217727);
    MemoryAlias::FlatWriteRam32((r1 + 136), r0);
}

loc_80071744:
{
    r3 = MemoryAlias::FlatRead32((r1 + 144));
    if constexpr (KnownRegArgsCpuCall<0x80071C9Cu>(&func_80071C9C)) {
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        func_80071C9C_ra8_0_0_0(ctx, r3);
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80071C9Cu>(ctx);
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_80071750:
{
    if ((static_cast<uint32_t>(r22) <= static_cast<uint32_t>(1))) {
        goto loc_8007176C;
    }
}

loc_80071754:
{
    r3 = MemoryAlias::FlatRead32((r1 + 80));
    r4 = r16;
    r5 = MemoryAlias::FlatRead32((r1 + 156));
    r6 = r22;
    ctx->lr = 0x80071768u;
    if constexpr (KnownRegArgsCpuCall<0x80071194u>(&func_80071194)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        const auto regargs_result_80071194_6313 = func_80071194_ra38_3e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d);
        r3 = static_cast<uint32_t>(regargs_result_80071194_6313);
        r4 = static_cast<uint32_t>(regargs_result_80071194_6313 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80071194u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    }
    goto loc_8007177C;
}

loc_8007176C:
{
    r3 = MemoryAlias::FlatRead32((r1 + 80));
    r4 = r16;
    r5 = MemoryAlias::FlatRead32((r1 + 156));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80071120u>(ctx);
}

loc_8007177C:
{
    r21 = 0;
    r3 = MemoryAlias::FlatRead32((r1 + 16));
    r0 = MemoryAlias::FlatRead32((r1 + 160));
    r24 = (r3 + r0);
    r27 = r24;
    r26 = 0;
    r0 = MemoryAlias::FlatRead32((r1 + 164));
    r25 = (r28 + r0);
    goto loc_80071A10;
}

loc_800717A0:
{
    r20 = MemoryAlias::FlatRead32(r27);
    r3 = r20;
    // inline leaf 0x80071118 (2 guest instruction(s))
    r3 = (r3 & 255);
    // end of inlined leaf 0x80071118
    r29 = r3;
}

loc_800717B4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80071934;
    }
}

loc_800717B8:
{
    r0 = MemoryAlias::FlatRead32((r1 + 80));
    r19 = (r0 + r26);
    r3 = r17;
    // inline leaf 0x8005D360 (5 guest instruction(s))
    r3 = MemoryAlias::FlatRead32(r3);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & 1);
    // end of inlined leaf 0x8005D360
}

loc_800717CC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800717E4;
    }
}

loc_800717D0:
{
    r3 = (r30 + -7944);
    r4 = 1344;
    r5 = (r31 + -7328);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800717E4u;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_800717E4:
{
}

loc_800717E8:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(7))) {
        goto loc_80071800;
    }
}

loc_800717EC:
{
    r3 = (r30 + -7944);
    r4 = 1345;
    r5 = (r14 + -7288);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80071800u;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_80071800:
{
    r0 = MemoryAlias::FlatRead32(r17);
    MemoryAlias::FlatWriteRam32((r1 + 48), r0);
    r3 = r20;
    // inline leaf 0x80071104 (5 guest instruction(s))
    r3 = (r3 & 536870912);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_4 & 1);
    // end of inlined leaf 0x80071104
    r5 = r3;
    r3 = r19;
    r4 = r15;
    r6 = r16;
    r7 = (r1 + 48);
    r8 = (r23 + r21);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r9 = 0x80570000u;
    r9 = (r9 + -520);
    r9_addr_3 = (r9 + r0);
    r12 = MemoryAlias::FlatRead32(r9_addr_3);
    ctr = r12;
    ctx->lr = 0x80071840u;
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
    ctx->fpr[0] = f0;
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
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
    ctr = ctx->ctr;
    mkw_gqr0 = ctx->gqr[0];
    r3 = r17;
    ctx->lr = 0x80071848u;
    if constexpr (KnownRegArgsCpuCall<0x80070084u>(&func_80070084)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_80070084_7966 = func_80070084_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80070084_7966);
        r4 = static_cast<uint32_t>(regargs_result_80070084_7966 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        InvokeDirectCpu<0x80070084u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    MemoryAlias::FlatWriteRam32((r1 + 44), r3);
    r19 = (r23 + r21);
    r3 = (r1 + 44);
    r4 = r19;
    ctx->lr = 0x8007185Cu;
    if constexpr (KnownRegArgsCpuCall<0x8006FF2Cu>(&func_8006FF2C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_8006FF2C_7E21 = func_8006FF2C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8006FF2C_7E21);
        r4 = static_cast<uint32_t>(regargs_result_8006FF2C_7E21 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        InvokeDirectCpu<0x8006FF2Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r20 = r3;
}

loc_80071864:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_80071880;
    }
}

loc_80071868:
{
    r3 = (r30 + -7944);
    r4 = 1356;
    r5 = 0x80590000u;
    r5 = (r5 + -7228);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80071880u;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_80071880:
{
    r3 = r17;
    r4 = r20;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80097F7Cu>(ctx);
    r3 = ctx->gpr[3];
    mkw_gqr0 = ctx->gqr[0];
    MemoryAlias::FlatWriteRam32((r1 + 40), r3);
    r3 = (r1 + 56);
    r4 = (r1 + 40);
    ctx->lr = 0x8007189Cu;
    if constexpr (KnownRegArgsCpuCall<0x8005D324u>(&func_8005D324)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8005D324_8630 = func_8005D324_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8005D324_8630;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8005D324u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r20 = 0;
    r3 = (r1 + 56);
    // inline leaf 0x8005AB50 (5 guest instruction(s))
    r3 = MemoryAlias::FlatRead32(r3);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_5 & 1);
    // end of inlined leaf 0x8005AB50
}

loc_800718AC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800718D0;
    }
}

loc_800718B0:
{
    r3 = (r1 + 56);
    ctx->lr = 0x800718B8u;
    if constexpr (KnownRegArgsCpuCall<0x800710C8u>(&func_800710C8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_800710C8_8A91 = func_800710C8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800710C8_8A91);
        r4 = static_cast<uint32_t>(regargs_result_800710C8_8A91 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        InvokeDirectCpu<0x800710C8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    MemoryAlias::FlatWriteRam32((r1 + 36), r3);
    r3 = (r1 + 36);
    // inline leaf 0x8005AB50 (5 guest instruction(s))
    r3 = MemoryAlias::FlatRead32(r3);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_6 & 1);
    // end of inlined leaf 0x8005AB50
}

loc_800718C8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800718D0;
    }
}

loc_800718CC:
{
    r20 = 1;
}

loc_800718D0:
{
}

loc_800718D4:
{
    if ((static_cast<int32_t>(r20) == static_cast<int32_t>(0))) {
        goto loc_80071A00;
    }
}

loc_800718D8:
{
    r3 = (r1 + 88);
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    r19 = (r19 * 48);
    r3 = (r1 + 88);
    r4 = (r15 + r19);
    ctx->lr = 0x800718F0u;
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
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80331064u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
    ctr = ctx->ctr;
}

loc_800718F4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80071910;
    }
}

loc_800718F8:
{
    r3 = (r28 + r19);
    r0 = MemoryAlias::FlatRead32((r1 + 80));
    r4 = (r0 + r26);
    r5 = (r1 + 88);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80071120u>(ctx);
    goto loc_80071A00;
}

loc_80071910:
{
    r3 = (r28 + r19);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80050538u>(ctx);
    f0.d = MemoryAlias::FlatReadFloat32((r16 + 12));
    MemoryAlias::FlatWriteFloat32((r25 + 12), f0.d);
    f0.d = MemoryAlias::FlatReadFloat32((r16 + 28));
    MemoryAlias::FlatWriteFloat32((r25 + 28), f0.d);
    f0.d = MemoryAlias::FlatReadFloat32((r16 + 44));
    MemoryAlias::FlatWriteFloat32((r25 + 44), f0.d);
    goto loc_80071A00;
}

loc_80071934:
{
    r3 = r17;
    ctx->lr = 0x8007193Cu;
    if constexpr (KnownRegArgsCpuCall<0x80070084u>(&func_80070084)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_80070084_98D5 = func_80070084_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80070084_98D5);
        r4 = static_cast<uint32_t>(regargs_result_80070084_98D5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        InvokeDirectCpu<0x80070084u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    MemoryAlias::FlatWriteRam32((r1 + 32), r3);
    r20 = (r23 + r21);
    r3 = (r1 + 32);
    r4 = r20;
    ctx->lr = 0x80071950u;
    if constexpr (KnownRegArgsCpuCall<0x8006FF2Cu>(&func_8006FF2C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_8006FF2C_9D90 = func_8006FF2C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8006FF2C_9D90);
        r4 = static_cast<uint32_t>(regargs_result_8006FF2C_9D90 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        InvokeDirectCpu<0x8006FF2Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r4 = r3;
}

loc_80071958:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(0))) {
        goto loc_80071A00;
    }
}

loc_8007195C:
{
    r3 = r17;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80097F7Cu>(ctx);
    r3 = ctx->gpr[3];
    mkw_gqr0 = ctx->gqr[0];
    MemoryAlias::FlatWriteRam32((r1 + 28), r3);
    r3 = (r1 + 52);
    r4 = (r1 + 28);
    ctx->lr = 0x80071974u;
    if constexpr (KnownRegArgsCpuCall<0x8005D324u>(&func_8005D324)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8005D324_A32D = func_8005D324_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8005D324_A32D;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8005D324u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = (r1 + 52);
    // inline leaf 0x8005AB50 (5 guest instruction(s))
    r3 = MemoryAlias::FlatRead32(r3);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_8 & 1);
    // end of inlined leaf 0x8005AB50
}

loc_80071980:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80071A00;
    }
}

loc_80071984:
{
    r3 = (r1 + 52);
    ctx->lr = 0x8007198Cu;
    if constexpr (KnownRegArgsCpuCall<0x8005D27Cu>(&func_8005D27C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_8005D27C_A781 = func_8005D27C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8005D27C_A781);
        r4 = static_cast<uint32_t>(regargs_result_8005D27C_A781 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        InvokeDirectCpu<0x8005D27Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r0 = MemoryAlias::FlatRead32((r3 + 20));
    r0 = (r0 & 1024);
}

loc_80071998:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80071A00;
    }
}

loc_8007199C:
{
    r3 = (r1 + 52);
    ctx->lr = 0x800719A4u;
    if constexpr (KnownRegArgsCpuCall<0x8005D27Cu>(&func_8005D27C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_8005D27C_ACB2 = func_8005D27C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8005D27C_ACB2);
        r4 = static_cast<uint32_t>(regargs_result_8005D27C_ACB2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        InvokeDirectCpu<0x8005D27Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r4 = r3;
    r3 = r17;
    r4 = MemoryAlias::FlatRead32((r4 + 28));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80097F7Cu>(ctx);
    r3 = ctx->gpr[3];
    mkw_gqr0 = ctx->gqr[0];
    MemoryAlias::FlatWriteRam32((r1 + 24), r3);
    r3 = (r1 + 24);
    ctx->lr = 0x800719C0u;
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
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8006FE30u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
    ctr = ctx->ctr;
    mkw_gqr0 = ctx->gqr[0];
    r19 = r3;
}

loc_800719C8:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r20))) {
        goto loc_800719E4;
    }
}

loc_800719CC:
{
    r3 = (r30 + -7944);
    r4 = 1397;
    r5 = 0x80590000u;
    r5 = (r5 + -7192);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800719E4u;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_800719E4:
{
    r0 = MemoryAlias::FlatRead32((r1 + 80));
    r3 = (r0 + r26);
    r0 = (r19 * 48);
    r4 = (r28 + r0);
    r0 = (r20 * 48);
    r5 = (r15 + r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80071120u>(ctx);
}

loc_80071A00:
{
    r27 = (r27 + 4);
    r26 = (r26 + 48);
    r25 = (r25 + 48);
    r21 = (r21 + 1);
}

loc_80071A10:
{
}

loc_80071A14:
{
    if ((static_cast<uint32_t>(r21) < static_cast<uint32_t>(r22))) {
        goto loc_800717A0;
    }
}

loc_80071A18:
{
    r3 = MemoryAlias::FlatRead32((r1 + 8));
    r4 = MemoryAlias::FlatRead32((r1 + 80));
    r5 = MemoryAlias::FlatRead32((r1 + 140));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80502E88u) && KnownTranslatedCpuCall<0x80502E88u>::kAvailable && !KnownTranslatedCpuCall<0x80502E88u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80502E88u>()) {
        const auto state_free_result_80502E88_BB30 = func_80502E88_statefree(r3, r4, r5, 0x80071A28u);
        r3 = static_cast<uint32_t>(state_free_result_80502E88_BB30[0]);
        r6 = static_cast<uint32_t>(state_free_result_80502E88_BB30[1]);
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
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80502E88u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
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
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r0 = MemoryAlias::FlatRead32((r1 + 12));
}

loc_80071A30:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80071B00;
    }
}

loc_80071A34:
{
    r21 = 0;
    r19 = 0;
    r20 = 0;
    goto loc_80071AF8;
}

loc_80071A44:
{
    r0 = MemoryAlias::FlatRead32((r1 + 80));
    r25 = (r0 + r19);
    r0 = MemoryAlias::FlatRead32((r1 + 76));
    r26 = (r0 + r20);
    r3 = MemoryAlias::FlatRead32(r24);
    // inline leaf 0x80071104 (5 guest instruction(s))
    r3 = (r3 & 536870912);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_11 & 1);
    // end of inlined leaf 0x80071104
}

loc_80071A60:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80071AB0;
    }
}

loc_80071A64:
{
}

loc_80071A68:
{
    if ((static_cast<int32_t>(r18) == static_cast<int32_t>(0))) {
        goto loc_80071AA0;
    }
}

loc_80071A6C:
{
    r0 = MemoryAlias::FlatRead32((r1 + 72));
    r3 = (r0 + r19);
    r4 = r25;
    ctx->lr = 0x80071A7Cu;
    if constexpr (KnownRegArgsCpuCall<0x80071070u>(&func_80071070)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_80071070_C51C = func_80071070_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80071070_C51C);
        r4 = static_cast<uint32_t>(regargs_result_80071070_C51C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x80071070u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
    }
    r0 = MemoryAlias::FlatRead32((r1 + 72));
    r3 = (r0 + r19);
    MemoryAlias::FlatWriteFloat32((r3 + 44), f31.d);
    r0 = MemoryAlias::FlatRead32((r1 + 72));
    r3 = (r0 + r19);
    MemoryAlias::FlatWriteFloat32((r3 + 28), f31.d);
    r0 = MemoryAlias::FlatRead32((r1 + 72));
    r3 = (r0 + r19);
    MemoryAlias::FlatWriteFloat32((r3 + 12), f31.d);
}

loc_80071AA0:
{
    r3 = r26;
    r4 = r25;
    ctx->lr = 0x80071AACu;
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
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80501968u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
    ctr = ctx->ctr;
    goto loc_80071AE8;
}

loc_80071AB0:
{
}

loc_80071AB4:
{
    if ((static_cast<int32_t>(r18) == static_cast<int32_t>(0))) {
        goto loc_80071ADC;
    }
}

loc_80071AB8:
{
    r0 = MemoryAlias::FlatRead32((r1 + 72));
    r3 = (r0 + r19);
    r4 = r25;
    ctx->lr = 0x80071AC8u;
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
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80330F5Cu>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r3 = r26;
    r0 = MemoryAlias::FlatRead32((r1 + 72));
    r4 = (r0 + r19);
    ctx->lr = 0x80071AD8u;
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
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80501968u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
    ctr = ctx->ctr;
    goto loc_80071AE8;
}

loc_80071ADC:
{
    r3 = r26;
    r4 = r25;
    ctx->lr = 0x80071AE8u;
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
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80330E78u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
    ctr = ctx->ctr;
}

loc_80071AE8:
{
    r19 = (r19 + 48);
    r20 = (r20 + 36);
    r24 = (r24 + 4);
    r21 = (r21 + 1);
}

loc_80071AF8:
{
}

loc_80071AFC:
{
    if ((static_cast<uint32_t>(r21) < static_cast<uint32_t>(r22))) {
        goto loc_80071A44;
    }
}

loc_80071B00:
{
    r0 = MemoryAlias::FlatRead32((r1 + 12));
}

loc_80071B08:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80071B34;
    }
}

loc_80071B0C:
{
    r3 = MemoryAlias::FlatRead32((r1 + 152));
    r4 = MemoryAlias::FlatRead32((r1 + 76));
    r5 = MemoryAlias::FlatRead32((r1 + 136));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80502E88u) && KnownTranslatedCpuCall<0x80502E88u>::kAvailable && !KnownTranslatedCpuCall<0x80502E88u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80502E88u>()) {
        const auto state_free_result_80502E88_DBC1 = func_80502E88_statefree(r3, r4, r5, 0x80071B1Cu);
        r3 = static_cast<uint32_t>(state_free_result_80502E88_DBC1[0]);
        r6 = static_cast<uint32_t>(state_free_result_80502E88_DBC1[1]);
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
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80502E88u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
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
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_80071B20:
{
    if ((static_cast<int32_t>(r18) == static_cast<int32_t>(0))) {
        goto loc_80071B34;
    }
}

loc_80071B24:
{
    r3 = MemoryAlias::FlatRead32((r1 + 148));
    r4 = MemoryAlias::FlatRead32((r1 + 72));
    r5 = MemoryAlias::FlatRead32((r1 + 140));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80502E88u) && KnownTranslatedCpuCall<0x80502E88u>::kAvailable && !KnownTranslatedCpuCall<0x80502E88u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80502E88u>()) {
        const auto state_free_result_80502E88_E2E1 = func_80502E88_statefree(r3, r4, r5, 0x80071B34u);
        r3 = static_cast<uint32_t>(state_free_result_80502E88_E2E1[0]);
        r6 = static_cast<uint32_t>(state_free_result_80502E88_E2E1[1]);
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
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80502E88u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
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
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_80071B34:
{
    r3 = (r1 + 80);
    r4 = (r1 + 68);
    ctx->lr = 0x80071B40u;
    if constexpr (KnownRegArgsCpuCall<0x80071C38u>(&func_80071C38)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80071C38_E8C6 = func_80071C38_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_80071C38_E8C6;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80071C38u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = (r1 + 76);
    r4 = (r1 + 64);
    ctx->lr = 0x80071B4Cu;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80071BD4u) && KnownTranslatedCpuCall<0x80071BD4u>::kAvailable && !KnownTranslatedCpuCall<0x80071BD4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80071BD4u>()) {
        const auto state_free_result_80071BD4_EBAB = func_80071BD4_statefree(r1, r3, r4, 0x80071B4Cu);
        r1 = static_cast<uint32_t>(state_free_result_80071BD4_EBAB);
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
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80071BD4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
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
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r3 = (r1 + 72);
    r4 = (r1 + 60);
    ctx->lr = 0x80071B58u;
    if constexpr (KnownRegArgsCpuCall<0x80071C38u>(&func_80071C38)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80071C38_F132 = func_80071C38_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_80071C38_F132;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80071C38u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = MemoryAlias::FlatRead32((r1 + 156));
    r3 = (r3 + 1920);
    MemoryAlias::FlatWriteRam32((r1 + 156), r3);
    r3 = MemoryAlias::FlatRead32((r1 + 8));
    r3 = (r3 + 1920);
    MemoryAlias::FlatWriteRam32((r1 + 8), r3);
    r3 = MemoryAlias::FlatRead32((r1 + 152));
    r3 = (r3 + 1440);
    MemoryAlias::FlatWriteRam32((r1 + 152), r3);
    r3 = MemoryAlias::FlatRead32((r1 + 148));
    r3 = (r3 + 1920);
    MemoryAlias::FlatWriteRam32((r1 + 148), r3);
    r23 = (r23 + 40);
    r3 = MemoryAlias::FlatRead32((r1 + 164));
    r3 = (r3 + 1920);
    MemoryAlias::FlatWriteRam32((r1 + 164), r3);
    r3 = MemoryAlias::FlatRead32((r1 + 160));
    r3 = (r3 + 160);
    MemoryAlias::FlatWriteRam32((r1 + 160), r3);
}

loc_80071BA4:
{
    r0 = MemoryAlias::FlatRead32((r1 + 20));
}

loc_80071BAC:
{
    if ((static_cast<uint32_t>(r23) < static_cast<uint32_t>(r0))) {
        goto loc_800716FC;
    }
}

loc_80071BB0:
{
    r0 = 248;
    addr_psqx_80071BB4_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, MemoryAlias::PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80071BB4_loc_0));
    f31.d = MemoryAlias::FlatReadFloat64((r1 + 240));
    r11 = (r1 + 240);
    // inline leaf 0x804574A0 (19 guest instruction(s))
    guest_range_1 = MemoryAlias::ResolveRangeHost((r11 + -72), 0, 72u, true, false);
    // end of inlined leaf 0x804574A0
    r0 = MemoryAlias::FlatRead32((r1 + 260));
    ctx->lr = r0;
    r1 = (r1 + 256);
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
    ctx->fpr[0] = f0;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xF0003FFF fpr_write=0xF0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800711FC func_800711FC preserves=true fpr_mask=0x00000000
