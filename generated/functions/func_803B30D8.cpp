#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803B2B40(CpuContext* ctx);
extern "C" uint32_t func_803B2B40_rac8_1fe_8_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803B6054(CpuContext* ctx);
extern "C" uint64_t func_803B6054_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_803B6240(CpuContext* ctx);
extern "C" uint64_t func_803B6240_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_803B30D8_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
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
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x803B30D8u);
    goto loc_803B30D8;

loc_803B30D8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = r4;
    r8 = 0;
    r0 = (r3 & 255);
    r7 = (r0 * 12);
    r3 = 0x806C0000u;
    r0 = (r3 + 31960);
    r6 = (r0 + r7);
    r3 = (r4 & 65535);
    r0 = MemoryInline::FlatRead16((r6 + 27242));
}

loc_803B3118:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_803B3120;
    }
}

loc_803B311C:
{
    r8 = MemoryInline::FlatRead16((r6 + 27244));
    r8 = (r8 << 16);
    r8 = (static_cast<int32_t>(r8) >> 16);
}

loc_803B3120:
{
    r0 = MemoryInline::FlatRead16((r6 + 27246));
}

loc_803B3128:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_803B3130;
    }
}

loc_803B312C:
{
    r8 = MemoryInline::FlatRead16((r6 + 27248));
    r8 = (r8 << 16);
    r8 = (static_cast<int32_t>(r8) >> 16);
}

loc_803B3130:
{
    r0 = MemoryInline::FlatRead16((r6 + 27250));
}

loc_803B3138:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_803B3140;
    }
}

loc_803B313C:
{
    r8 = MemoryInline::FlatRead16((r6 + 27252));
    r8 = (r8 << 16);
    r8 = (static_cast<int32_t>(r8) >> 16);
}

loc_803B3140:
{
}

loc_803B3144:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_803B3194;
    }
}

loc_803B3148:
{
    r3 = 0;
    r0 = 3;
    ctr = r0;
}

loc_803B3154:
{
    r0 = MemoryInline::FlatRead16((r6 + 27242));
}

loc_803B315C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803B3184;
    }
}

loc_803B3160:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r6 = (r6_rot_0 & -4);
    r3 = 0x806C0000u;
    r0 = (r3 + 31960);
    r0 = (r0 + r7);
    r3 = (r0 + r6);
    MemoryInline::FlatWrite16((r3 + 27242), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite16((r3 + 27244), static_cast<uint16_t>(r5));
    goto loc_803B31DC;
}

loc_803B3184:
{
    r6 = (r6 + 4);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803B3154;
    }
}

loc_803B3190:
{
    goto loc_803B31DC;
}

loc_803B3194:
{
    r8 = 0;
    r3 = (r4 & 65535);
    r0 = 3;
    ctr = r0;
}

loc_803B31A4:
{
    r0 = MemoryInline::FlatRead16((r6 + 27242));
}

loc_803B31AC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_803B31D0;
    }
}

loc_803B31B0:
{
    r3 = 0x806C0000u;
    r0 = (r3 + 31960);
    r3 = (r0 + r7);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r8)));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite16((r3 + 27244), static_cast<uint16_t>(r5));
    goto loc_803B31DC;
}

loc_803B31D0:
{
    r6 = (r6 + 4);
    r8 = (r8 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803B31A4;
    }
}

loc_803B31DC:
{
    r29 = 0;
}

loc_803B31E0:
{
    r3 = (r31 & 65535);
    r4 = (r29 & 65535);
    ctx->lr = 0x803B31ECu;
    if constexpr (KnownRegArgsCpuCall<0x803B6054u>(&func_803B6054)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803B6054_1360 = func_803B6054_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_803B6054_1360);
        r4 = static_cast<uint32_t>(regargs_result_803B6054_1360 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803B6054u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r30 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
}

loc_803B31F4:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(0))) {
        goto loc_803B321C;
    }
}

loc_803B31F8:
{
    r3 = (r31 & 65535);
    if constexpr (KnownRegArgsCpuCall<0x803B6240u>(&func_803B6240)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_803B6240_1728 = func_803B6240_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803B6240_1728);
        r4 = static_cast<uint32_t>(regargs_result_803B6240_1728 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803B6240u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        ctr = ctx->ctr;
    }
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r30 = (r30 - r0);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r30)));
}

loc_803B3210:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_803B321C;
    }
}

loc_803B3214:
{
    r3 = (r29 & 255);
    ctx->lr = 0x803B321Cu;
    if constexpr (KnownRegArgsCpuCall<0x803B2B40u>(&func_803B2B40)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        const auto regargs_result_803B2B40_1C75 = func_803B2B40_rac8_1fe_8_0(ctx, r3, r6, r7, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = regargs_result_803B2B40_1C75;
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803B2B40u>(ctx);
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
        ctr = ctx->ctr;
    }
}

loc_803B321C:
{
    r29 = (r29 + 1);
}

loc_803B3224:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(3))) {
        goto loc_803B31E0;
    }
}

loc_803B3228:
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
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803B30D8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803B30D8_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x003FFFFF gpr_return=0x00000018 fpr_read=0xF8003FFF fpr_write=0xF8003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803B30D8 func_803B30D8 preserves=true fpr_mask=0x00000000
