#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8050CC30(CpuContext* ctx);
extern "C" uint64_t func_8050CC30_ra58_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_8050B2F0_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
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

    goto loc_8050B2F0;

loc_8050B2F0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
}

loc_8050B2FC:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = r4;
    r29 = r3;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8050B3F8;
    }
}

loc_8050B318:
{
    r31 = MemoryInline::FlatRead32(r3);
    r5 = MemoryInline::FlatRead32((r3 + 4));
}

loc_8050B324:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(r5))) {
        goto loc_8050B348;
    }
}

loc_8050B328:
{
    r4 = MemoryInline::FlatRead32((r3 + 12));
    r0 = MemoryInline::FlatRead32((r29 + 8));
    r4 = (r5 + r4);
    MemoryInline::FlatWrite32((r3 + 4), r4);
    r4 = (r4 * r0);
    r3 = MemoryInline::FlatRead32((r3 + 20));
    ctx->lr = 0x8050B344u;
    if constexpr (KnownRegArgsCpuCall<0x8050CC30u>(&func_8050CC30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8050CC30_86F = func_8050CC30_ra58_1fe_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8050CC30_86F);
        r4 = static_cast<uint32_t>(regargs_result_8050CC30_86F >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8050CC30u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    MemoryInline::FlatWrite32((r29 + 20), r3);
}

loc_8050B348:
{
    r3 = MemoryInline::FlatRead32(r29);
    r5 = (r3 + 1);
    MemoryInline::FlatWrite32(r29, r5);
    r6 = (r5 + -1);
}

loc_8050B35C:
{
    if ((static_cast<int32_t>(r31) >= static_cast<int32_t>(r6))) {
        goto loc_8050B3C0;
    }
}

loc_8050B360:
{
    r4 = (r31 + 1);
}

loc_8050B364:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(0))) {
        goto loc_8050B370;
    }
}

loc_8050B368:
{
}

loc_8050B36C:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r5))) {
        goto loc_8050B378;
    }
}

loc_8050B370:
{
    r3 = 0;
    goto loc_8050B388;
}

loc_8050B378:
{
    r0 = MemoryInline::FlatRead32((r29 + 8));
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r0 = (r0 * r4);
    r3 = (r3 + r0);
}

loc_8050B388:
{
}

loc_8050B38C:
{
    if ((static_cast<int32_t>(r31) < static_cast<int32_t>(0))) {
        goto loc_8050B398;
    }
}

loc_8050B390:
{
}

loc_8050B394:
{
    if ((static_cast<int32_t>(r31) < static_cast<int32_t>(r5))) {
        goto loc_8050B3A0;
    }
}

loc_8050B398:
{
    r4 = 0;
    goto loc_8050B3B0;
}

loc_8050B3A0:
{
    r0 = MemoryInline::FlatRead32((r29 + 8));
    r4 = MemoryInline::FlatRead32((r29 + 20));
    r0 = (r0 * r31);
    r4 = (r4 + r0);
}

loc_8050B3B0:
{
    r5 = MemoryInline::FlatRead32((r29 + 8));
    r0 = (r6 - r31);
    r5 = (r5 * r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x8045BC18u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8050B3C0:
{
}

loc_8050B3C4:
{
    if ((static_cast<int32_t>(r31) < static_cast<int32_t>(0))) {
        goto loc_8050B3D4;
    }
}

loc_8050B3C8:
{
    r0 = MemoryInline::FlatRead32(r29);
}

loc_8050B3D0:
{
    if ((static_cast<int32_t>(r31) < static_cast<int32_t>(r0))) {
        goto loc_8050B3DC;
    }
}

loc_8050B3D4:
{
    r3 = 0;
    goto loc_8050B3EC;
}

loc_8050B3DC:
{
    r0 = MemoryInline::FlatRead32((r29 + 8));
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r0 = (r0 * r31);
    r3 = (r3 + r0);
}

loc_8050B3EC:
{
    r5 = MemoryInline::FlatRead32((r29 + 8));
    r4 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8050B3F8:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
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
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8050B2F0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8050B2F0_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8050B2F0 func_8050B2F0 preserves=true fpr_mask=0x00000000
