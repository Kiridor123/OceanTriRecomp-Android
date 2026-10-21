#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800DBC94(CpuContext* ctx);
extern "C" uint64_t func_800DBC94_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);

extern "C" uint64_t func_802A93CC_ra38_1f8_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;

    MKW_GUEST_ENTER(0x802A93CCu);
    goto loc_802A93CC;

loc_802A93CC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 8), static_cast<uint16_t>(r0));
    r30 = MemoryInline::FlatRead8((r3 + 3));
    r31 = MemoryInline::FlatRead8((r3 + 4));
    r6 = (r4 & 65535);
    r0 = (r6 & 12);
}

loc_802A9404:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802A94BC;
    }
}

loc_802A9408:
{
    r7 = MemoryInline::FlatRead8((r3 + 6));
}

loc_802A9410:
{
    if ((static_cast<uint32_t>(r7) <= static_cast<uint32_t>(1))) {
        goto loc_802A94BC;
    }
}

loc_802A9414:
{
    r0 = (r6 & 4);
}

loc_802A941C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802A9448;
    }
}

loc_802A9420:
{
    r31 = (r31 + -1);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
}

loc_802A942C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_802A9438;
    }
}

loc_802A9430:
{
    r0 = (r7 + -1);
    r31 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_802A9438:
{
    r0 = MemoryInline::FlatRead16((r3 + 8));
    r0 = (r0 | 4);
    MemoryInline::FlatWrite16((r3 + 8), static_cast<uint16_t>(r0));
    goto loc_802A9468;
}

loc_802A9448:
{
    r31 = (r31 + 1);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
}

loc_802A9454:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r7))) {
        goto loc_802A945C;
    }
}

loc_802A9458:
{
    r31 = 0;
}

loc_802A945C:
{
    r0 = MemoryInline::FlatRead16((r3 + 8));
    r0 = (r0 | 8);
    MemoryInline::FlatWrite16((r3 + 8), static_cast<uint16_t>(r0));
}

loc_802A9468:
{
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
    r4 = MemoryInline::FlatRead8((r3 + 6));
    r0 = (r4 + -1);
}

loc_802A9478:
{
    if ((static_cast<int32_t>(r6) < static_cast<int32_t>(r0))) {
        goto loc_802A9484;
    }
}

loc_802A947C:
{
    r4 = MemoryInline::FlatRead8((r3 + 7));
    goto loc_802A9488;
}

loc_802A9484:
{
    r4 = MemoryInline::FlatRead8((r3 + 2));
}

loc_802A9488:
{
    MemoryInline::FlatWrite8((r3 + 5), static_cast<uint8_t>(r4));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r30)));
}

loc_802A9494:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r4))) {
        goto loc_802A94A8;
    }
}

loc_802A9498:
{
    r0 = (r4 + -1);
    r30 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r30 & 255);
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
}

loc_802A94A8:
{
    r0 = (r31 & 255);
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r0));
    r3 = r5;
    ctx->lr = 0x802A94B8u;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_800DBC94_FA6 = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_FA6);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_FA6 >> 32);
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
    goto loc_802A953C;
}

loc_802A94BC:
{
    r4 = (r4 & 65535);
    r0 = (r4 & 3);
}

loc_802A94C8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802A953C;
    }
}

loc_802A94CC:
{
    r5 = MemoryInline::FlatRead8((r3 + 5));
}

loc_802A94D4:
{
    if ((static_cast<uint32_t>(r5) <= static_cast<uint32_t>(1))) {
        goto loc_802A9534;
    }
}

loc_802A94D8:
{
    r0 = (r4 & 1);
}

loc_802A94E0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802A950C;
    }
}

loc_802A94E4:
{
    r30 = (r30 + -1);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r30)));
}

loc_802A94F0:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_802A94FC;
    }
}

loc_802A94F4:
{
    r0 = (r5 + -1);
    r30 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_802A94FC:
{
    r0 = MemoryInline::FlatRead16((r3 + 8));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite16((r3 + 8), static_cast<uint16_t>(r0));
    goto loc_802A952C;
}

loc_802A950C:
{
    r30 = (r30 + 1);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r30)));
}

loc_802A9518:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r5))) {
        goto loc_802A9520;
    }
}

loc_802A951C:
{
    r30 = 0;
}

loc_802A9520:
{
    r0 = MemoryInline::FlatRead16((r3 + 8));
    r0 = (r0 | 2);
    MemoryInline::FlatWrite16((r3 + 8), static_cast<uint16_t>(r0));
}

loc_802A952C:
{
    r3 = 3;
    ctx->lr = 0x802A9534u;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_800DBC94_1B2E = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_1B2E);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_1B2E >> 32);
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
}

loc_802A9534:
{
    r0 = (r30 & 255);
    MemoryInline::FlatWrite8((r29 + 3), static_cast<uint8_t>(r0));
}

loc_802A953C:
{
    r0 = MemoryInline::FlatRead8((r29 + 2));
    r0 = (r0 * r31);
    r0 = (r30 + r0);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16(r29, static_cast<uint16_t>(r0));
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

extern "C" void func_802A93CC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802A93CC_ra38_1f8_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003EFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xE0003FF8 fpr_write=0xE0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802A93CC func_802A93CC preserves=true fpr_mask=0x00000000
