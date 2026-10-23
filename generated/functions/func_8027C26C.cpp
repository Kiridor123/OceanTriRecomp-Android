#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80273218(CpuContext* ctx);
extern "C" uint64_t func_80273218_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80278CE0(CpuContext* ctx);
extern "C" uint32_t func_80278CE0_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_80278D34(CpuContext* ctx);
extern "C" uint32_t func_80278D34_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_8027D9CC(CpuContext* ctx);
extern "C" uint64_t func_8027D9CC_ra38_6_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double);
extern "C" void func_802D7868(CpuContext* ctx);
extern "C" uint64_t func_802D7868_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);

extern "C" MkwStateFreeResult2 func_80278CE0_statefree(uint32_t, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_80278D34_statefree(uint32_t, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_80278CE0_statefree_v0(uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_80278D34_statefree_v0(uint32_t, uint32_t);

extern "C" void func_8027C26C(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;

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
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8027C26C;

loc_8027C26C:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r31 = r3;
    r30 = r4;
    r3 = (r1 + 36);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r0 = MemoryInline::FlatRead8((r31 + 10));
}

loc_8027C298:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(7))) {
        goto loc_8027C2C4;
    }
}

loc_8027C29C:
{
    r0 = (r30 & 65535);
}

loc_8027C2A4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(347))) {
        goto loc_8027C2BC;
    }
}

loc_8027C2A8:
{
    r0 = MemoryInline::FlatRead16((r31 + 12));
}

loc_8027C2B0:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_8027C2C4;
    }
}

loc_8027C2B4:
{
    r3 = 0;
    goto loc_8027C8E8;
}

loc_8027C2BC:
{
    r3 = 0;
    goto loc_8027C8E8;
}

loc_8027C2C4:
{
    r3 = r31;
    r4 = 6;
    r5 = 28;
    // inline leaf 0x8026FECC (12 guest instruction(s))
}

loc_inl1_0x8026FECC:
{
    r6 = MemoryInline::FlatRead8((r3 + 10));
    r0 = (r4 & 255);
}

loc_inl1_0x8026FED8:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl1_0x8026FEF4;
    }
}

loc_inl1_0x8026FEDC:
{
    r3 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r5 & 65535);
}

loc_inl1_0x8026FEE8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl1_0x8026FEF4;
    }
}

loc_inl1_0x8026FEEC:
{
    r3 = 1;
    goto loc_inl1_cont_8026FECC;
}

loc_inl1_0x8026FEF4:
{
    r3 = 0;
}

loc_inl1_cont_8026FECC:
{
    // end of inlined leaf 0x8026FECC
}

loc_8027C2D8:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_8027C2F4;
    }
}

loc_8027C2DC:
{
    r3 = r31;
    r4 = 6;
    r5 = 29;
    // inline leaf 0x8026FECC (12 guest instruction(s))
}

loc_inl2_0x8026FECC:
{
    r6 = MemoryInline::FlatRead8((r3 + 10));
    r0 = (r4 & 255);
}

loc_inl2_0x8026FED8:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl2_0x8026FEF4;
    }
}

loc_inl2_0x8026FEDC:
{
    r3 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r5 & 65535);
}

loc_inl2_0x8026FEE8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl2_0x8026FEF4;
    }
}

loc_inl2_0x8026FEEC:
{
    r3 = 1;
    goto loc_inl2_cont_8026FECC;
}

loc_inl2_0x8026FEF4:
{
    r3 = 0;
}

loc_inl2_cont_8026FECC:
{
    // end of inlined leaf 0x8026FECC
}

loc_8027C2F0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8027C308;
    }
}

loc_8027C2F4:
{
    r0 = (r30 & 65535);
}

loc_8027C2FC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(374))) {
        goto loc_8027C308;
    }
}

loc_8027C300:
{
    r3 = 0;
    goto loc_8027C8E8;
}

loc_8027C308:
{
    r3 = r31;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80278CE0u) && KnownTranslatedCpuCall<0x80278CE0u>::kAvailable && !KnownTranslatedCpuCall<0x80278CE0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80278CE0u>()) {
        const auto state_free_result_80278CE0_155E = func_80278CE0_statefree_v0(r3, xer);
        r0 = static_cast<uint32_t>(state_free_result_80278CE0_155E[0]);
        r3 = static_cast<uint32_t>(state_free_result_80278CE0_155E[1]);
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
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x80278CE0u>(ctx);
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
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_8027C314:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_8027C328;
    }
}

loc_8027C318:
{
    r3 = r31;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80278D34u) && KnownTranslatedCpuCall<0x80278D34u>::kAvailable && !KnownTranslatedCpuCall<0x80278D34u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80278D34u>()) {
        const auto state_free_result_80278D34_1AC1 = func_80278D34_statefree_v0(r3, xer);
        r0 = static_cast<uint32_t>(state_free_result_80278D34_1AC1[0]);
        r3 = static_cast<uint32_t>(state_free_result_80278D34_1AC1[1]);
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
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x80278D34u>(ctx);
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
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_8027C324:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8027C33C;
    }
}

loc_8027C328:
{
    r0 = (r30 & 65535);
}

loc_8027C330:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(375))) {
        goto loc_8027C33C;
    }
}

loc_8027C334:
{
    r3 = 0;
    goto loc_8027C8E8;
}

loc_8027C33C:
{
    r0 = (r30 & 65535);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(214));
}

loc_8027C344:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8027C6CC;
    }
}

loc_8027C348:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8027C44C;
    }
}

loc_8027C34C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(47));
}

loc_8027C350:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8027C734;
    }
}

loc_8027C354:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8027C3D8;
    }
}

loc_8027C358:
{
}

loc_8027C35C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(29))) {
        goto loc_8027C39C;
    }
}

loc_8027C360:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_8027C364:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8027C59C;
    }
}

loc_8027C368:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8027C384;
    }
}

loc_8027C36C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8027C370:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8027C820;
    }
}

loc_8027C374:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8027C568;
    }
}

loc_8027C378:
{
}

loc_8027C37C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1))) {
        goto loc_8027C854;
    }
}

loc_8027C380:
{
    goto loc_8027C8DC;
}

loc_8027C384:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(6));
}

loc_8027C388:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8027C720;
    }
}

loc_8027C38C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8027C8DC;
    }
}

loc_8027C390:
{
}

loc_8027C394:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(26))) {
        goto loc_8027C6CC;
    }
}

loc_8027C398:
{
    goto loc_8027C8DC;
}

loc_8027C39C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(40));
}

loc_8027C3A0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8027C734;
    }
}

loc_8027C3A4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8027C3C0;
    }
}

loc_8027C3A8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(33));
}

loc_8027C3AC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8027C8DC;
    }
}

loc_8027C3B0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8027C6E0;
    }
}

loc_8027C3B4:
{
}

loc_8027C3B8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(37))) {
        goto loc_8027C5FC;
    }
}

loc_8027C3BC:
{
    goto loc_8027C5BC;
}

loc_8027C3C0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(43));
}

loc_8027C3C4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8027C7F8;
    }
}

loc_8027C3C8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8027C8DC;
    }
}

loc_8027C3CC:
{
}

loc_8027C3D0:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(46))) {
        goto loc_8027C720;
    }
}

loc_8027C3D4:
{
    goto loc_8027C8DC;
}

loc_8027C3D8:
{
}

loc_8027C3DC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(166))) {
        goto loc_8027C414;
    }
}

loc_8027C3E0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(98));
}

loc_8027C3E4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8027C868;
    }
}

loc_8027C3E8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8027C408;
    }
}

loc_8027C3EC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(52));
}

loc_8027C3F0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8027C820;
    }
}

loc_8027C3F4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8027C8DC;
    }
}

loc_8027C3F8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(49));
}

loc_8027C3FC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8027C59C;
    }
}

loc_8027C400:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8027C8DC;
    }
}

loc_8027C404:
{
    goto loc_8027C868;
}

loc_8027C408:
{
}

loc_8027C40C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(138))) {
        goto loc_8027C720;
    }
}

loc_8027C410:
{
    goto loc_8027C8DC;
}

loc_8027C414:
{
}

loc_8027C418:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(202))) {
        goto loc_8027C434;
    }
}

loc_8027C41C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(194));
}

loc_8027C420:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8027C720;
    }
}

loc_8027C424:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8027C8DC;
    }
}

loc_8027C428:
{
}

loc_8027C42C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(168))) {
        goto loc_8027C8DC;
    }
}

loc_8027C430:
{
    goto loc_8027C6CC;
}

loc_8027C434:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(208));
}

loc_8027C438:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8027C6CC;
    }
}

loc_8027C43C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8027C8DC;
    }
}

loc_8027C440:
{
}

loc_8027C444:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(207))) {
        goto loc_8027C868;
    }
}

loc_8027C448:
{
    goto loc_8027C650;
}

loc_8027C44C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(380));
}

loc_8027C450:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8027C894;
    }
}

loc_8027C454:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8027C4CC;
    }
}

loc_8027C458:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(353));
}

loc_8027C45C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8027C650;
    }
}

loc_8027C460:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8027C49C;
    }
}

loc_8027C464:
{
}

loc_8027C468:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(345))) {
        goto loc_8027C484;
    }
}

loc_8027C46C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(265));
}

loc_8027C470:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8027C734;
    }
}

loc_8027C474:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8027C8DC;
    }
}

loc_8027C478:
{
}

loc_8027C47C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(264))) {
        goto loc_8027C840;
    }
}

loc_8027C480:
{
    goto loc_8027C8DC;
}

loc_8027C484:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(351));
}

loc_8027C488:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8027C650;
    }
}

loc_8027C48C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8027C8DC;
    }
}

loc_8027C490:
{
}

loc_8027C494:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(348))) {
        goto loc_8027C8DC;
    }
}

loc_8027C498:
{
    goto loc_8027C6A4;
}

loc_8027C49C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(366));
}

loc_8027C4A0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8027C714;
    }
}

loc_8027C4A4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8027C4C0;
    }
}

loc_8027C4A8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(355));
}

loc_8027C4AC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8027C650;
    }
}

loc_8027C4B0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8027C8DC;
    }
}

loc_8027C4B4:
{
}

loc_8027C4B8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(361))) {
        goto loc_8027C7E4;
    }
}

loc_8027C4BC:
{
    goto loc_8027C8DC;
}

loc_8027C4C0:
{
}

loc_8027C4C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(375))) {
        goto loc_8027C540;
    }
}

loc_8027C4C8:
{
    goto loc_8027C8DC;
}

loc_8027C4CC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(438));
}

loc_8027C4D0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8027C788;
    }
}

loc_8027C4D4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8027C508;
    }
}

loc_8027C4D8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(388));
}

loc_8027C4DC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8027C720;
    }
}

loc_8027C4E0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8027C4FC;
    }
}

loc_8027C4E4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(384));
}

loc_8027C4E8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8027C880;
    }
}

loc_8027C4EC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8027C8DC;
    }
}

loc_8027C4F0:
{
}

loc_8027C4F4:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(383))) {
        goto loc_8027C80C;
    }
}

loc_8027C4F8:
{
    goto loc_8027C8DC;
}

loc_8027C4FC:
{
}

loc_8027C500:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(391))) {
        goto loc_8027C8DC;
    }
}

loc_8027C504:
{
    goto loc_8027C650;
}

loc_8027C508:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(583));
}

loc_8027C50C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8027C8B8;
    }
}

loc_8027C510:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8027C52C;
    }
}

loc_8027C514:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(567));
}

loc_8027C518:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8027C854;
    }
}

loc_8027C51C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8027C8DC;
    }
}

loc_8027C520:
{
}

loc_8027C524:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(582))) {
        goto loc_8027C820;
    }
}

loc_8027C528:
{
    goto loc_8027C8DC;
}

loc_8027C52C:
{
}

loc_8027C530:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(602))) {
        goto loc_8027C8DC;
    }
}

loc_8027C534:
{
}

loc_8027C538:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(600))) {
        goto loc_8027C854;
    }
}

loc_8027C53C:
{
    goto loc_8027C8DC;
}

loc_8027C540:
{
    r3 = r31;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80278CE0u) && KnownTranslatedCpuCall<0x80278CE0u>::kAvailable && !KnownTranslatedCpuCall<0x80278CE0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80278CE0u>()) {
        const auto state_free_result_80278CE0_4BCA = func_80278CE0_statefree_v0(r3, xer);
        r0 = static_cast<uint32_t>(state_free_result_80278CE0_4BCA[0]);
        r3 = static_cast<uint32_t>(state_free_result_80278CE0_4BCA[1]);
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
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x80278CE0u>(ctx);
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
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_8027C54C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_8027C560;
    }
}

loc_8027C550:
{
    r3 = r31;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80278D34u) && KnownTranslatedCpuCall<0x80278D34u>::kAvailable && !KnownTranslatedCpuCall<0x80278D34u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80278D34u>()) {
        const auto state_free_result_80278D34_512D = func_80278D34_statefree_v0(r3, xer);
        r0 = static_cast<uint32_t>(state_free_result_80278D34_512D[0]);
        r3 = static_cast<uint32_t>(state_free_result_80278D34_512D[1]);
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
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x80278D34u>(ctx);
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
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_8027C55C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8027C8E4;
    }
}

loc_8027C560:
{
    r3 = 1;
    goto loc_8027C8E8;
}

loc_8027C568:
{
    r0 = MemoryInline::FlatRead8((r31 + 9));
}

loc_8027C570:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_8027C57C;
    }
}

loc_8027C574:
{
    r3 = 0;
    goto loc_8027C8E8;
}

loc_8027C57C:
{
    r0 = MemoryInline::FlatRead8((r31 + 1413));
}

loc_8027C584:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8027C590;
    }
}

loc_8027C588:
{
    r3 = 0;
    goto loc_8027C8E8;
}

loc_8027C590:
{
    r3 = r31;
    ctx->lr = 0x8027C598u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x8027831Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_8027C8E8;
}

loc_8027C59C:
{
    r0 = MemoryInline::FlatRead8((r31 + 1413));
}

loc_8027C5A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8027C5B0;
    }
}

loc_8027C5A8:
{
    r3 = 0;
    goto loc_8027C8E8;
}

loc_8027C5B0:
{
    r3 = r31;
    ctx->lr = 0x8027C5B8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x802784B4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_8027C8E8;
}

loc_8027C5BC:
{
    r3 = MemoryInline::FlatRead8((r31 + 8));
    r4 = MemoryInline::FlatRead8((r31 + 22));
    r5 = (r31 + 60);
    r6 = (r1 + 8);
    r7 = (r1 + 36);
    r8 = (r1 + 24);
    r9 = (r1 + 20);
    ctx->lr = 0x8027C5DCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x803BAA14u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = (r3 & 65535);
}

loc_8027C5E4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_8027C8E4;
    }
}

loc_8027C5E8:
{
    r0 = MemoryInline::FlatRead16((r1 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8027C5F0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(3))) {
        goto loc_8027C8E4;
    }
}

loc_8027C5F4:
{
    r3 = 1;
    goto loc_8027C8E8;
}

loc_8027C5FC:
{
    r0 = MemoryInline::FlatRead8((r31 + 9));
}

loc_8027C604:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_8027C610;
    }
}

loc_8027C608:
{
    r3 = 0;
    goto loc_8027C8E8;
}

loc_8027C610:
{
    r3 = MemoryInline::FlatRead8((r31 + 8));
    r4 = MemoryInline::FlatRead8((r31 + 22));
    r5 = (r31 + 60);
    r6 = (r1 + 8);
    r7 = (r1 + 36);
    r8 = (r1 + 24);
    r9 = (r1 + 20);
    ctx->lr = 0x8027C630u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x803BAA14u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = (r3 & 65535);
}

loc_8027C638:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_8027C8E4;
    }
}

loc_8027C63C:
{
    r0 = MemoryInline::FlatRead16((r1 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8027C644:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_8027C8E4;
    }
}

loc_8027C648:
{
    r3 = 1;
    goto loc_8027C8E8;
}

loc_8027C650:
{
    r0 = MemoryInline::FlatRead8((r31 + 9));
}

loc_8027C658:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_8027C664;
    }
}

loc_8027C65C:
{
    r3 = 0;
    goto loc_8027C8E8;
}

loc_8027C664:
{
    r3 = MemoryInline::FlatRead8((r31 + 8));
    r4 = MemoryInline::FlatRead8((r31 + 22));
    r5 = (r31 + 60);
    r6 = (r1 + 8);
    r7 = (r1 + 36);
    r8 = (r1 + 24);
    r9 = (r1 + 20);
    ctx->lr = 0x8027C684u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x803BAA14u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = (r3 & 65535);
}

loc_8027C68C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_8027C8E4;
    }
}

loc_8027C690:
{
    r0 = MemoryInline::FlatRead16((r1 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8027C698:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(5))) {
        goto loc_8027C8E4;
    }
}

loc_8027C69C:
{
    r3 = 1;
    goto loc_8027C8E8;
}

loc_8027C6A4:
{
    r0 = MemoryInline::FlatRead8((r31 + 1413));
}

loc_8027C6AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8027C6B8;
    }
}

loc_8027C6B0:
{
    r3 = 0;
    goto loc_8027C8E8;
}

loc_8027C6B8:
{
    r0 = MemoryInline::FlatRead8((r31 + 9));
}

loc_8027C6C0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(3))) {
        goto loc_8027C8E4;
    }
}

loc_8027C6C4:
{
    r3 = 1;
    goto loc_8027C8E8;
}

loc_8027C6CC:
{
    r0 = MemoryInline::FlatRead8((r31 + 9));
}

loc_8027C6D4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(3))) {
        goto loc_8027C8E4;
    }
}

loc_8027C6D8:
{
    r3 = 1;
    goto loc_8027C8E8;
}

loc_8027C6E0:
{
    r0 = MemoryInline::FlatRead8((r31 + 1413));
}

loc_8027C6E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8027C6F4;
    }
}

loc_8027C6EC:
{
    r3 = 0;
    goto loc_8027C8E8;
}

loc_8027C6F4:
{
    r0 = MemoryInline::FlatRead8((r31 + 9));
}

loc_8027C6FC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_8027C708;
    }
}

loc_8027C700:
{
    r3 = 0;
    goto loc_8027C8E8;
}

loc_8027C708:
{
    r3 = r31;
    // inline leaf 0x8027850C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 781));
    r0 = (r3 + -3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x8027850C
    goto loc_8027C8E8;
}

loc_8027C714:
{
    r3 = r31;
    ctx->lr = 0x8027C71Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x8027851Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_8027C8E8;
}

loc_8027C720:
{
    r0 = MemoryInline::FlatRead8((r31 + 9));
}

loc_8027C728:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_8027C8E4;
    }
}

loc_8027C72C:
{
    r3 = 1;
    goto loc_8027C8E8;
}

loc_8027C734:
{
    r0 = MemoryInline::FlatRead8((r31 + 1413));
}

loc_8027C73C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8027C748;
    }
}

loc_8027C740:
{
    r3 = 0;
    goto loc_8027C8E8;
}

loc_8027C748:
{
    r3 = r31;
    // inline leaf 0x8027CC90 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead16((r3 + 1444));
    r3 = (r0 & 64);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_6 & 1);
    // end of inlined leaf 0x8027CC90
}

loc_8027C754:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8027C760;
    }
}

loc_8027C758:
{
    r3 = 0;
    goto loc_8027C8E8;
}

loc_8027C760:
{
    r3 = r31;
    r4 = 29;
    ctx->lr = 0x8027C76Cu;
    if constexpr (KnownRegArgsCpuCall<0x80273218u>(&func_80273218)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80273218_7C98 = func_80273218_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80273218_7C98);
        r4 = static_cast<uint32_t>(regargs_result_80273218_7C98 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80273218u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_8027C770:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_8027C8E4;
    }
}

loc_8027C774:
{
    r0 = MemoryInline::FlatRead8((r31 + 9));
}

loc_8027C77C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(3))) {
        goto loc_8027C8E4;
    }
}

loc_8027C780:
{
    r3 = 1;
    goto loc_8027C8E8;
}

loc_8027C788:
{
    r0 = MemoryInline::FlatRead8((r31 + 9));
}

loc_8027C790:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_8027C79C;
    }
}

loc_8027C794:
{
    r3 = 0;
    goto loc_8027C8E8;
}

loc_8027C79C:
{
    r3 = r31;
    // inline leaf 0x8027CC90 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead16((r3 + 1444));
    r3 = (r0 & 64);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_4 & 1);
    // end of inlined leaf 0x8027CC90
}

loc_8027C7A8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8027C7B4;
    }
}

loc_8027C7AC:
{
    r3 = 0;
    goto loc_8027C8E8;
}

loc_8027C7B4:
{
    r3 = r31;
    r4 = 29;
    ctx->lr = 0x8027C7C0u;
    if constexpr (KnownRegArgsCpuCall<0x80273218u>(&func_80273218)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80273218_8516 = func_80273218_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80273218_8516);
        r4 = static_cast<uint32_t>(regargs_result_80273218_8516 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80273218u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_8027C7C4:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_8027C8E4;
    }
}

loc_8027C7C8:
{
    r3 = 4;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -14760));
    ctx->lr = 0x8027C7D4u;
    if constexpr (KnownRegArgsCpuCall<0x802D7868u>(&func_802D7868)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_802D7868_89A2 = func_802D7868_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_802D7868_89A2);
        r4 = static_cast<uint32_t>(regargs_result_802D7868_89A2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x802D7868u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
}

loc_8027C7D8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8027C8E4;
    }
}

loc_8027C7DC:
{
    r3 = 1;
    goto loc_8027C8E8;
}

loc_8027C7E4:
{
    r0 = MemoryInline::FlatRead8((r31 + 9));
}

loc_8027C7EC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(3))) {
        goto loc_8027C8E4;
    }
}

loc_8027C7F0:
{
    r3 = 1;
    goto loc_8027C8E8;
}

loc_8027C7F8:
{
    r0 = MemoryInline::FlatRead8((r31 + 9));
}

loc_8027C800:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(3))) {
        goto loc_8027C8E4;
    }
}

loc_8027C804:
{
    r3 = 1;
    goto loc_8027C8E8;
}

loc_8027C80C:
{
    r0 = MemoryInline::FlatRead8((r31 + 1413));
}

loc_8027C814:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8027C8E4;
    }
}

loc_8027C818:
{
    r3 = 1;
    goto loc_8027C8E8;
}

loc_8027C820:
{
    r0 = MemoryInline::FlatRead8((r31 + 1413));
}

loc_8027C828:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8027C834;
    }
}

loc_8027C82C:
{
    r3 = 0;
    goto loc_8027C8E8;
}

loc_8027C834:
{
    r3 = r31;
    ctx->lr = 0x8027C83Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80277FB8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_8027C8E8;
}

loc_8027C840:
{
    r0 = MemoryInline::FlatRead8((r31 + 9));
}

loc_8027C848:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_8027C854;
    }
}

loc_8027C84C:
{
    r3 = 0;
    goto loc_8027C8E8;
}

loc_8027C854:
{
    r0 = MemoryInline::FlatRead8((r31 + 1413));
}

loc_8027C85C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8027C8E4;
    }
}

loc_8027C860:
{
    r3 = 1;
    goto loc_8027C8E8;
}

loc_8027C868:
{
    r3 = r31;
    // inline leaf 0x8026FEA8 (9 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2));
    r4 = (r3 + -4);
    r3 = 2;
    r0 = (2 - r4);
    r3 = (r3 | ~r4);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_1 & 2147483647);
    r0 = (r3 - r0);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    // end of inlined leaf 0x8026FEA8
}

loc_8027C874:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8027C8E4;
    }
}

loc_8027C878:
{
    r3 = 1;
    goto loc_8027C8E8;
}

loc_8027C880:
{
    // inline leaf 0x8027DCF4 (6 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -9184);
    r0 = MemoryInline::FlatRead8((r3 + 16));
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_3 & 134217727);
    // end of inlined leaf 0x8027DCF4
}

loc_8027C888:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8027C894;
    }
}

loc_8027C88C:
{
    r3 = 0;
    goto loc_8027C8E8;
}

loc_8027C894:
{
    r3 = r31;
    r4 = (r1 + 36);
    r5 = (r1 + 16);
    r6 = (r1 + 12);
    ctx->lr = 0x8027C8A8u;
    if constexpr (KnownRegArgsCpuCall<0x8027D9CCu>(&func_8027D9CC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8027D9CC_9C29 = func_8027D9CC_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_8027D9CC_9C29);
        r4 = static_cast<uint32_t>(regargs_result_8027D9CC_9C29 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x8027D9CCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
    }
}

loc_8027C8AC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_8027C8E4;
    }
}

loc_8027C8B0:
{
    r3 = 1;
    goto loc_8027C8E8;
}

loc_8027C8B8:
{
    r3 = r31;
    r4 = (r1 + 36);
    r5 = (r1 + 16);
    r6 = (r1 + 12);
    ctx->lr = 0x8027C8CCu;
    if constexpr (KnownRegArgsCpuCall<0x8027D9CCu>(&func_8027D9CC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8027D9CC_A18F = func_8027D9CC_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_8027D9CC_A18F);
        r4 = static_cast<uint32_t>(regargs_result_8027D9CC_A18F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x8027D9CCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
    }
}

loc_8027C8D0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(5))) {
        goto loc_8027C8E4;
    }
}

loc_8027C8D4:
{
    r3 = 1;
    goto loc_8027C8E8;
}

loc_8027C8DC:
{
    r3 = 1;
    goto loc_8027C8E8;
}

loc_8027C8E4:
{
    r3 = 0;
}

loc_8027C8E8:
{
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xF0003FFF fpr_write=0xF0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8027C26C func_8027C26C preserves=true fpr_mask=0x00000000
