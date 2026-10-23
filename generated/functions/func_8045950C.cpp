#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8045925C(CpuContext* ctx);
extern "C" uint64_t func_8045925C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80459314(CpuContext* ctx);
extern "C" uint64_t func_80459314_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8045950C_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_addic_src_0 = 0;
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
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

    goto loc_8045950C;

loc_8045950C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r6 = 0x80570000u;
    r7 = 0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r6 = (r6 + 11504);
    r31 = r3;
    goto loc_8045953C;
}

loc_80459534:
{
    r6 = (r6 + 4);
    r7 = (r7 + 1);
}

loc_8045953C:
{
    r0 = MemoryInline::FlatRead32(r6);
}

loc_80459544:
{
    if ((static_cast<uint32_t>(r5) > static_cast<uint32_t>(r0))) {
        goto loc_80459534;
    }
}

loc_80459548:
{
    r6 = (r4 + -4);
    r4 = MemoryInline::FlatRead32((r4 + -4));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(3));
    r0 = (r0_rot_0 & -8);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_80459560:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804595CC;
    }
}

loc_80459564:
{
    r5 = MemoryInline::FlatRead32((r3 + 8));
}

loc_8045956C:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(r4))) {
        goto loc_804595CC;
    }
}

loc_80459570:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_80459578:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r4))) {
        goto loc_80459594;
    }
}

loc_8045957C:
{
    r0 = MemoryInline::FlatRead32(r5);
    MemoryInline::FlatWrite32((r3 + 8), r0);
    r5 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32(r5);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    goto loc_804595CC;
}

loc_80459594:
{
    r5 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite32((r5 + 4), r0);
    r5 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWrite32(r5, r0);
    r5 = MemoryInline::FlatRead32((r3 + 8));
    MemoryInline::FlatWrite32((r4 + 4), r5);
    r5 = MemoryInline::FlatRead32(r5);
    MemoryInline::FlatWrite32(r4, r5);
    MemoryInline::FlatWrite32((r5 + 4), r4);
    r5 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite32(r5, r4);
    MemoryInline::FlatWrite32((r3 + 8), r4);
}

loc_804595CC:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
    MemoryInline::FlatWrite32((r6 + 4), r0);
    MemoryInline::FlatWrite32((r4 + 12), r6);
    r0 = MemoryInline::FlatRead32((r4 + 16));
    r0_addic_src_0 = r0;
    r0 = (r0_addic_src_0 + -1);
}

loc_804595E0:
{
    MemoryInline::FlatWrite32((r4 + 16), r0);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804596E0;
    }
}

loc_804595E8:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
}

loc_804595F0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r4))) {
        goto loc_804595FC;
    }
}

loc_804595F4:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite32((r3 + 8), r0);
}

loc_804595FC:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_80459604:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r4))) {
        goto loc_80459610;
    }
}

loc_80459608:
{
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWrite32((r3 + 4), r0);
}

loc_80459610:
{
    r5 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite32((r5 + 4), r0);
    r5 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWrite32(r5, r0);
    r0 = MemoryInline::FlatRead32((r3 + 8));
}

loc_80459630:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r4))) {
        goto loc_8045963C;
    }
}

loc_80459634:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 8), r0);
}

loc_8045963C:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_80459644:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r4))) {
        goto loc_80459650;
    }
}

loc_80459648:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 4), r0);
}

loc_80459650:
{
    r4 = (r4 + -8);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    r30 = (r0 & -2);
    r3 = r30;
    ctx->lr = 0x80459664u;
    if constexpr (KnownRegArgsCpuCall<0x80459314u>(&func_80459314)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_80459314_1690 = func_80459314_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80459314_1690);
        r4 = static_cast<uint32_t>(regargs_result_80459314_1690 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x80459314u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r3 = MemoryInline::FlatRead32((r30 + 16));
    r5 = 0;
    r0 = (r3 & 2);
}

loc_80459670:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80459690;
    }
}

loc_80459674:
{
    r0 = MemoryInline::FlatRead32((r30 + 12));
    r4 = (r3 & -8);
    r3 = (r0 & -8);
    r0 = (r3 + -24);
}

loc_80459688:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_80459690;
    }
}

loc_8045968C:
{
    r5 = 1;
}

loc_80459690:
{
}

loc_80459694:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_804596E0;
    }
}

loc_80459698:
{
    r4 = MemoryInline::FlatRead32((r30 + 4));
}

loc_804596A0:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r30))) {
        goto loc_804596A8;
    }
}

loc_804596A4:
{
    r4 = 0;
}

loc_804596A8:
{
    r0 = MemoryInline::FlatRead32(r31);
}

loc_804596B0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r30))) {
        goto loc_804596B8;
    }
}

loc_804596B4:
{
    MemoryInline::FlatWrite32(r31, r4);
}

loc_804596B8:
{
}

loc_804596BC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_804596CC;
    }
}

loc_804596C0:
{
    r3 = MemoryInline::FlatRead32(r30);
    MemoryInline::FlatWrite32(r4, r3);
    MemoryInline::FlatWrite32((r3 + 4), r4);
}

loc_804596CC:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 4), r0);
    r3 = r30;
    MemoryInline::FlatWrite32(r30, r0);
    ctx->lr = 0x804596E0u;
    if constexpr (KnownRegArgsCpuCall<0x8045925Cu>(&func_8045925C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_8045925C_20B4 = func_8045925C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8045925C_20B4);
        r4 = static_cast<uint32_t>(regargs_result_8045925C_20B4 >> 32);
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
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8045925Cu>(ctx);
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
    }
}

loc_804596E0:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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

extern "C" void func_8045950C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8045950C_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000027FF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8045950C func_8045950C preserves=true fpr_mask=0x00000000
