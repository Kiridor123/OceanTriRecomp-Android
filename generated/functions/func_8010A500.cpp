#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800FCF14(CpuContext* ctx);
extern "C" uint64_t func_800FCF14_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_8010A500_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;

    MKW_GUEST_ENTER(0x8010A500u);
    goto loc_8010A500;

loc_8010A500:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = r3;
    r29 = MemoryInline::FlatRead32((r3 + 48));
    r31 = MemoryInline::FlatRead32((r3 + 56));
    r3 = r29;
    // inline leaf 0x8026A36C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 316));
    r3 = MemoryInline::FlatRead16((r3 + 84));
    // end of inlined leaf 0x8026A36C
    r4 = MemoryInline::FlatRead32((r31 + 36));
    r4 = MH3_TickLoad(r4, 2148574508);
    r0 = (r4 + -1);
    MemoryInline::FlatWrite32((r31 + 36), r0);
    r4 = MemoryInline::FlatRead32((r31 + 28));
    r4 = MH3_TickLoad(r4, 2148574520);
    r0 = (r4 + -1);
    MemoryInline::FlatWrite32((r31 + 28), r0);
    r0 = MemoryInline::FlatRead32((r31 + 28));
}

loc_8010A54C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_8010A564;
    }
}

loc_8010A550:
{
    r0 = MemoryInline::FlatRead8((r30 + 8));
}

loc_8010A558:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_8010A564;
    }
}

loc_8010A55C:
{
    r0 = 4;
    MemoryInline::FlatWrite8((r30 + 8), static_cast<uint8_t>(r0));
}

loc_8010A564:
{
    r4 = MemoryInline::FlatRead8((r30 + 7));
}

loc_8010A56C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8010A584;
    }
}

loc_8010A570:
{
}

loc_8010A574:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(1))) {
        goto loc_8010A638;
    }
}

loc_8010A578:
{
}

loc_8010A57C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(2))) {
        goto loc_8010A698;
    }
}

loc_8010A580:
{
    goto loc_8010A6E8;
}

loc_8010A584:
{
    r0 = MemoryInline::FlatRead8((r30 + 8));
}

loc_8010A58C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(5))) {
        goto loc_8010A5E8;
    }
}

loc_8010A590:
{
    r0 = MemoryInline::FlatRead8((r29 + 10));
}

loc_8010A598:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(6))) {
        goto loc_8010A5C4;
    }
}

loc_8010A59C:
{
    r0 = MemoryInline::FlatRead16((r29 + 1090));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8010A5A4:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_8010A5C4;
    }
}

loc_8010A5A8:
{
    r0 = (r3 & 65535);
}

loc_8010A5B0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(207))) {
        goto loc_8010A5C4;
    }
}

loc_8010A5B4:
{
}

loc_8010A5B8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(216))) {
        goto loc_8010A5C4;
    }
}

loc_8010A5BC:
{
}

loc_8010A5C0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(229))) {
        goto loc_8010A5E8;
    }
}

loc_8010A5C4:
{
    r0 = MemoryInline::FlatRead32((r31 + 28));
}

loc_8010A5CC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_8010A5E8;
    }
}

loc_8010A5D0:
{
    r0 = 11;
    MemoryInline::FlatWrite32((r31 + 32), r0);
    r0 = 27;
    MemoryInline::FlatWrite32((r31 + 28), r0);
    r0 = 2;
    MemoryInline::FlatWrite8((r30 + 8), static_cast<uint8_t>(r0));
}

loc_8010A5E8:
{
    r3 = MemoryInline::FlatRead32((r31 + 32));
    r3 = MH3_TickLoad(r3, 2148574696);
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r31 + 32), r0);
    r0 = MemoryInline::FlatRead32((r31 + 32));
}

loc_8010A5FC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_8010A6E8;
    }
}

loc_8010A600:
{
    r0 = MemoryInline::FlatRead8((r30 + 8));
}

loc_8010A608:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_8010A6E8;
    }
}

loc_8010A60C:
{
    r0 = 3;
    MemoryInline::FlatWrite8((r30 + 8), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r30 + 7));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r30 + 7), static_cast<uint8_t>(r0));
    r0 = 4;
    MemoryInline::FlatWrite32((r31 + 36), r0);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29432));
    MemoryInline::FlatWriteFloat32((r31 + 44), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 40), f0.d);
    goto loc_8010A6E8;
}

loc_8010A638:
{
    r0 = MemoryInline::FlatRead32((r31 + 36));
}

loc_8010A640:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_8010A668;
    }
}

loc_8010A644:
{
    r0 = 10;
    MemoryInline::FlatWrite32((r31 + 36), r0);
    r3 = MemoryInline::FlatRead8((r30 + 7));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r30 + 7), static_cast<uint8_t>(r0));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29392));
    MemoryInline::FlatWriteFloat32((r31 + 40), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 44), f0.d);
    goto loc_8010A684;
}

loc_8010A668:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 40));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -29388));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r31 + 40), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 44));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r31 + 44), f0.d);
}

loc_8010A684:
{
    r3 = MemoryInline::FlatRead32((r31 + 12));
    r4 = (r31 + 40);
    r5 = 0;
    ctx->lr = 0x8010A694u;
    if constexpr (KnownRegArgsCpuCall<0x800FCF14u>(&func_800FCF14)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_800FCF14_1A05 = func_800FCF14_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800FCF14_1A05);
        r4 = static_cast<uint32_t>(regargs_result_800FCF14_1A05 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x800FCF14u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_8010A6E8;
}

loc_8010A698:
{
    r0 = MemoryInline::FlatRead32((r31 + 36));
}

loc_8010A6A0:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_8010A6BC;
    }
}

loc_8010A6A4:
{
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r30 + 7), static_cast<uint8_t>(r0));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29432));
    MemoryInline::FlatWriteFloat32((r31 + 40), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 44), f0.d);
    goto loc_8010A6D8;
}

loc_8010A6BC:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 40));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -29384));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteFloat32((r31 + 40), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 44));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteFloat32((r31 + 44), f0.d);
}

loc_8010A6D8:
{
    r3 = MemoryInline::FlatRead32((r31 + 12));
    r4 = (r31 + 40);
    r5 = 0;
    ctx->lr = 0x8010A6E8u;
    if constexpr (KnownRegArgsCpuCall<0x800FCF14u>(&func_800FCF14)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_800FCF14_2426 = func_800FCF14_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800FCF14_2426);
        r4 = static_cast<uint32_t>(regargs_result_800FCF14_2426 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x800FCF14u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
}

loc_8010A6E8:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8010A500(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8010A500_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FBF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8010A500 func_8010A500 preserves=true fpr_mask=0x00000000
