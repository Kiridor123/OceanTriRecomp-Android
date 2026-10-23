#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004392C(CpuContext* ctx);
extern "C" uint32_t func_8004392C_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_800580A8(CpuContext* ctx);
extern "C" uint64_t func_800580A8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_803C4BD8(CpuContext* ctx);
extern "C" uint64_t func_803C4BD8_ra0_0_18_0(CpuContext*);
extern "C" void func_80447248(CpuContext* ctx);
extern "C" uint64_t func_80447248_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" MkwStateFreeResult2 func_803C4BD8_statefree();

extern "C" uint64_t func_804470AC_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;

    goto loc_804470AC;

loc_804470AC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r3 = 1;
    if constexpr (KnownRegArgsCpuCall<0x8004392Cu>(&func_8004392C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_8004392C_7C1 = func_8004392C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8004392C_7C1;
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8004392Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r3 = MemoryInline::FlatRead16((r31 + 4));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_804470D0:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_804470E4;
    }
}

loc_804470D4:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r31 + 4), static_cast<uint16_t>(r0));
    r3 = 0;
    // inline leaf 0x800427F0 (40 guest instruction(s))
    r4 = (r3 * 848);
    r3 = 0x80660000u;
    r0 = (r3 + -18480);
    r4 = (r0 + r4);
    r3 = 0;
    MemoryInline::FlatWrite16((r4 + 214), static_cast<uint16_t>(r3));
    r0 = MemoryInline::FlatRead16((r4 + 218));
    r0 = (r0 & 2);
    MemoryInline::FlatWrite16((r4 + 218), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r4 + 220), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r4 + 222), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r4 + 226), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r4 + 228), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r4 + 232), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r4 + 230), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r4 + 236), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r4 + 234), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r4 + 240), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r4 + 238), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r4 + 244), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r4 + 242), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite8((r4 + 247), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r4 + 246), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite16((r4 + 252), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r4 + 256), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r4 + 258), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r4 + 260), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r4 + 264), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r4 + 266), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r4 + 270), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r4 + 268), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r4 + 274), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r4 + 272), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r4 + 278), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r4 + 276), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r4 + 282), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r4 + 280), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite8((r4 + 285), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r4 + 284), static_cast<uint8_t>(r3));
    // end of inlined leaf 0x800427F0
}

loc_804470E4:
{
    r3 = r31;
    ctx->lr = 0x804470ECu;
    if constexpr (KnownRegArgsCpuCall<0x80447248u>(&func_80447248)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80447248_1583 = func_80447248_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80447248_1583);
        r4 = static_cast<uint32_t>(regargs_result_80447248_1583 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80447248u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r0 = MemoryInline::FlatRead8((r31 + 3));
}

loc_804470F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8044710C;
    }
}

loc_804470F8:
{
}

loc_804470FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8044712C;
    }
}

loc_80447100:
{
}

loc_80447104:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_804471FC;
    }
}

loc_80447108:
{
    goto loc_80447230;
}

loc_8044710C:
{
    ctx->lr = 0x80447110u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x803C4878u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80447114:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80447230;
    }
}

loc_80447118:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 3), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite16((r31 + 10), static_cast<uint16_t>(r0));
    goto loc_80447230;
}

loc_8044712C:
{
    ctx->lr = 0x80447130u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x803C4878u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80447134:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8044714C;
    }
}

loc_80447138:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r31 + 3), static_cast<uint8_t>(r0));
    r0 = 20;
    MemoryInline::FlatWrite16((r31 + 8), static_cast<uint16_t>(r0));
    goto loc_80447230;
}

loc_8044714C:
{
    r0 = MemoryInline::FlatRead16((r31 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80447154:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80447198;
    }
}

loc_80447158:
{
    r3 = 0;
    // inline leaf 0x800582D4 (6 guest instruction(s))
    r4 = 0x80670000u;
    r4 = (r4 + -12024);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
    // end of inlined leaf 0x800582D4
}

loc_80447164:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(2))) {
        goto loc_80447230;
    }
}

loc_80447168:
{
}

loc_8044716C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_80447184;
    }
}

loc_80447170:
{
}

loc_80447174:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(3))) {
        goto loc_80447184;
    }
}

loc_80447178:
{
    r3 = 0;
    r4 = 1;
    if constexpr (KnownRegArgsCpuCall<0x800580A8u>(&func_800580A8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800580A8_2566 = func_800580A8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800580A8_2566);
        r4 = static_cast<uint32_t>(regargs_result_800580A8_2566 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x800580A8u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_80447184:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r31 + 3), static_cast<uint8_t>(r0));
    r0 = 20;
    MemoryInline::FlatWrite16((r31 + 8), static_cast<uint16_t>(r0));
    goto loc_80447230;
}

loc_80447198:
{
    r3 = 0x80660000u;
    r3 = (r3 + -18480);
    r0 = MemoryInline::FlatRead16((r3 + 708));
    r0 = (r0 & 32);
}

loc_804471AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80447230;
    }
}

loc_804471B0:
{
    r3 = 0;
    // inline leaf 0x800582D4 (6 guest instruction(s))
    r4 = 0x80670000u;
    r4 = (r4 + -12024);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
    // end of inlined leaf 0x800582D4
}

loc_804471BC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(2))) {
        goto loc_804471CC;
    }
}

loc_804471C0:
{
    r0 = 1;
    MemoryInline::FlatWrite16((r31 + 10), static_cast<uint16_t>(r0));
    goto loc_80447230;
}

loc_804471CC:
{
}

loc_804471D0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_804471E8;
    }
}

loc_804471D4:
{
}

loc_804471D8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(3))) {
        goto loc_804471E8;
    }
}

loc_804471DC:
{
    r3 = 0;
    r4 = 1;
    if constexpr (KnownRegArgsCpuCall<0x800580A8u>(&func_800580A8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800580A8_2DD2 = func_800580A8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800580A8_2DD2);
        r4 = static_cast<uint32_t>(regargs_result_800580A8_2DD2 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x800580A8u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_804471E8:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r31 + 3), static_cast<uint8_t>(r0));
    r0 = 20;
    MemoryInline::FlatWrite16((r31 + 8), static_cast<uint16_t>(r0));
    goto loc_80447230;
}

loc_804471FC:
{
    r3 = MemoryInline::FlatRead16((r31 + 8));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r31 + 8), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_80447210:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_80447230;
    }
}

loc_80447214:
{
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x803C4BD8u) && KnownTranslatedCpuCall<0x803C4BD8u>::kAvailable && !KnownTranslatedCpuCall<0x803C4BD8u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x803C4BD8u>()) {
        const auto state_free_result_803C4BD8_33A4 = func_803C4BD8_statefree();
        r4 = static_cast<uint32_t>(state_free_result_803C4BD8_33A4[0]);
        r5 = static_cast<uint32_t>(state_free_result_803C4BD8_33A4[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x803C4BD8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r0 = 4;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 1), static_cast<uint8_t>(r0));
    r3 = 0;
    goto loc_80447234;
}

loc_80447230:
{
    r3 = 1;
}

loc_80447234:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
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

extern "C" void func_804470AC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804470AC_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x07FFFFFF gpr_return=0x00000018 fpr_read=0xFFC0FFFF fpr_write=0xFFC0FFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804470AC func_804470AC preserves=true fpr_mask=0x00000000
