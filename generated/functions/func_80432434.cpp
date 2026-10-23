#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800DBC94(CpuContext* ctx);
extern "C" uint64_t func_800DBC94_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);

extern "C" uint64_t func_80432434_ra38_1f8_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;

    goto loc_80432434;

loc_80432434:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = r3;
    r31 = 0;
    r4 = MemoryInline::FlatRead16((r3 + 4));
    r0 = MemoryInline::FlatRead16((r3 + 8));
    r0 = (r0 & 15);
    r0 = (r4 | r0);
    r6 = (r0 & 65535);
    r0 = MemoryInline::FlatRead8((r3 + 419));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r4 = 715849728;
    r5 = (r4 + -21845);
    r4 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r5)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & 1);
    r0 = (r4 + r0);
    r7 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = MemoryInline::FlatRead8((r3 + 418));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r3 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r5)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
    r3 = (r3 + r0);
    r0 = (r3 * 6);
    r0 = (r4 - r0);
    r29 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r28 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r0 = (r6 & 32);
}

loc_804324B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804324CC;
    }
}

loc_804324BC:
{
    r31 = 2;
    r3 = 1;
    ctx->lr = 0x804324C8u;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_800DBC94_B90 = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_B90);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_B90 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x800DBC94u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_8043255C;
}

loc_804324CC:
{
    r0 = (r6 & 1);
}

loc_804324D4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804324F4;
    }
}

loc_804324D8:
{
    r28 = (r28 + -1);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r28)));
}

loc_804324E4:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_8043255C;
    }
}

loc_804324E8:
{
    r0 = (r7 + -1);
    r28 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    goto loc_8043255C;
}

loc_804324F4:
{
    r0 = (r6 & 2);
}

loc_804324FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80432518;
    }
}

loc_80432500:
{
    r28 = (r28 + 1);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r28)));
}

loc_8043250C:
{
    if ((static_cast<int32_t>(r7) > static_cast<int32_t>(r0))) {
        goto loc_8043255C;
    }
}

loc_80432510:
{
    r28 = 0;
    goto loc_8043255C;
}

loc_80432518:
{
    r0 = (r6 & 4);
}

loc_80432520:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8043253C;
    }
}

loc_80432524:
{
    r29 = (r29 + -1);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r29)));
}

loc_80432530:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_8043255C;
    }
}

loc_80432534:
{
    r29 = 5;
    goto loc_8043255C;
}

loc_8043253C:
{
    r0 = (r6 & 8);
}

loc_80432544:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8043255C;
    }
}

loc_80432548:
{
    r29 = (r29 + 1);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r29)));
}

loc_80432554:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(6))) {
        goto loc_8043255C;
    }
}

loc_80432558:
{
    r29 = 0;
}

loc_8043255C:
{
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r29)));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r28)));
    r0 = (r0 * 6);
    r29 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r30 + 418));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80432578:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(r29))) {
        goto loc_8043258C;
    }
}

loc_8043257C:
{
    r3 = 3;
    ctx->lr = 0x80432584u;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_800DBC94_1AC3 = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_1AC3);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_1AC3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x800DBC94u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r29)));
    MemoryInline::FlatWrite8((r30 + 418), static_cast<uint8_t>(r0));
}

loc_8043258C:
{
    r3 = r31;
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80432434(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80432434_ra38_1f8_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003EFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xE0003FF8 fpr_write=0xE0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80432434 func_80432434 preserves=true fpr_mask=0x00000000
