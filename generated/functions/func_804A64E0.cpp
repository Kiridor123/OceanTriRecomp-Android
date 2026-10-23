#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804A6160(CpuContext* ctx);
extern "C" uint64_t func_804A6160_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804A67D0(CpuContext* ctx);
extern "C" uint64_t func_804A67D0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804CDCA0(CpuContext* ctx);
extern "C" uint64_t func_804CDCA0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_804A64E0_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_10 = 0;
    uint32_t r3_addr_11 = 0;
    uint32_t r3_addr_12 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r5_addr_4 = 0;
    uint32_t r5_addr_5 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r6_addr_3 = 0;
    uint32_t r6_addr_4 = 0;
    uint32_t r6_addr_5 = 0;
    uint32_t r6_addr_6 = 0;
    uint32_t r6_addr_7 = 0;
    uint32_t r8_addr_0 = 0;
    uint32_t r8_addr_1 = 0;
    uint32_t r8_addr_2 = 0;
    uint32_t r8_addr_3 = 0;
    uint32_t r8_addr_4 = 0;
    uint32_t r8_addr_5 = 0;
    uint32_t r8_addr_6 = 0;
    uint32_t r8_addr_7 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
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
    uint32_t cr = ctx->cr;

    goto loc_804A64E0;

loc_804A64E0:
{
    MemoryInline::FlatWriteRam32((r1 + -160), r1);
    r1 = (r1 + -160);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 164), r0);
    r11 = (r1 + 160);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r28 = r3;
    r27 = r4;
    ctx->lr = 0x804A6500u;
    if constexpr (KnownRegArgsCpuCall<0x804A6160u>(&func_804A6160)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_804A6160_D26 = func_804A6160_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804A6160_D26);
        r4 = static_cast<uint32_t>(regargs_result_804A6160_D26 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        InvokeDirectCpu<0x804A6160u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    }
}

loc_804A6504:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_804A672C;
    }
}

loc_804A6508:
{
    r29 = MemoryInline::FlatRead32((r13 + -15792));
}

loc_804A6510:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_804A651C;
    }
}

loc_804A6514:
{
    r4 = 0;
    goto loc_804A66B0;
}

loc_804A651C:
{
    r8 = MemoryInline::FlatRead32((r13 + -15768));
    r0 = (r29 * 12);
    r7 = MemoryInline::FlatRead32((r13 + -15772));
    r6 = (r8 + 4);
    r6_addr_1 = (r6 + r0);
    r3 = MemoryInline::FlatRead32(r6_addr_1);
    r8_addr_1 = (r8 + r0);
    r0 = MemoryInline::FlatRead32(r8_addr_1);
}

loc_804A6538:
{
    r0 = (r0 & 16777215);
    r30 = (r7 + r0);
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804A654C;
    }
}

loc_804A6544:
{
    r4 = 0;
    goto loc_804A6650;
}

loc_804A654C:
{
    r0 = (r3 * 12);
    r6_addr_2 = (r6 + r0);
    r3 = MemoryInline::FlatRead32(r6_addr_2);
    r8_addr_2 = (r8 + r0);
    r0 = MemoryInline::FlatRead32(r8_addr_2);
}

loc_804A655C:
{
    r0 = (r0 & 16777215);
    r31 = (r7 + r0);
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804A6570;
    }
}

loc_804A6568:
{
    r4 = 0;
    goto loc_804A65F0;
}

loc_804A6570:
{
    r3 = (r3 * 12);
    r4 = (r1 + 8);
    r5 = 128;
    r8_addr_3 = (r8 + r3);
    r0 = MemoryInline::FlatRead32(r8_addr_3);
    r6_addr_3 = (r6 + r3);
    r3 = MemoryInline::FlatRead32(r6_addr_3);
    r0 = (r0 & 16777215);
    r27 = (r7 + r0);
    ctx->lr = 0x804A6590u;
    if constexpr (KnownRegArgsCpuCall<0x804A67D0u>(&func_804A67D0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_804A67D0_18C5 = func_804A67D0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804A67D0_18C5);
        r4 = static_cast<uint32_t>(regargs_result_804A67D0_18C5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x804A67D0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    }
}

loc_804A6594:
{
    r4 = r3;
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(128))) {
        goto loc_804A65A0;
    }
}

loc_804A659C:
{
    goto loc_804A65F0;
}

loc_804A65A0:
{
    r4 = (r3 + 1);
    r5 = (r1 + 8);
    r0 = 47;
    r5_addr_1 = (r5 + r3);
    MemoryInline::FlatWrite8(r5_addr_1, static_cast<uint8_t>(r0));
    r6 = (128 - r4);
    r5 = (r5 + r4);
    r3 = r6;
    goto loc_804A65D4;
}

loc_804A65C0:
{
    r0 = MemoryInline::FlatRead8(r27);
    r27 = (r27 + 1);
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    r5 = (r5 + 1);
    r3 = (r3 + -1);
}

loc_804A65D4:
{
}

loc_804A65D8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804A65E8;
    }
}

loc_804A65DC:
{
    r0 = MemoryInline::FlatRead8(r27);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804A65C0;
    }
}

loc_804A65E8:
{
    r0 = (r6 - r3);
    r4 = (r4 + r0);
}

loc_804A65F0:
{
}

loc_804A65F4:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(128))) {
        goto loc_804A65FC;
    }
}

loc_804A65F8:
{
    goto loc_804A6650;
}

loc_804A65FC:
{
    r5 = (r4 + 1);
    r3 = (r1 + 8);
    r0 = 47;
    r3_addr_1 = (r3 + r4);
    MemoryInline::FlatWrite8(r3_addr_1, static_cast<uint8_t>(r0));
    r6 = (128 - r5);
    r3 = (r3 + r5);
    r4 = r6;
    goto loc_804A6634;
}

loc_804A6620:
{
    r0 = MemoryInline::FlatRead8(r31);
    r31 = (r31 + 1);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r3 = (r3 + 1);
    r4 = (r4 + -1);
}

loc_804A6634:
{
}

loc_804A6638:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_804A6648;
    }
}

loc_804A663C:
{
    r0 = MemoryInline::FlatRead8(r31);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804A6620;
    }
}

loc_804A6648:
{
    r0 = (r6 - r4);
    r4 = (r5 + r0);
}

loc_804A6650:
{
}

loc_804A6654:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(128))) {
        goto loc_804A665C;
    }
}

loc_804A6658:
{
    goto loc_804A66B0;
}

loc_804A665C:
{
    r5 = (r4 + 1);
    r3 = (r1 + 8);
    r0 = 47;
    r3_addr_3 = (r3 + r4);
    MemoryInline::FlatWrite8(r3_addr_3, static_cast<uint8_t>(r0));
    r6 = (128 - r5);
    r3 = (r3 + r5);
    r4 = r6;
    goto loc_804A6694;
}

loc_804A6680:
{
    r0 = MemoryInline::FlatRead8(r30);
    r30 = (r30 + 1);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r3 = (r3 + 1);
    r4 = (r4 + -1);
}

loc_804A6694:
{
}

loc_804A6698:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_804A66A8;
    }
}

loc_804A669C:
{
    r0 = MemoryInline::FlatRead8(r30);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804A6680;
    }
}

loc_804A66A8:
{
    r0 = (r6 - r4);
    r4 = (r5 + r0);
}

loc_804A66B0:
{
}

loc_804A66B4:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(128))) {
        goto loc_804A66C4;
    }
}

loc_804A66B8:
{
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 135), static_cast<uint8_t>(r0));
    goto loc_804A670C;
}

loc_804A66C4:
{
    r0 = (r29 * 12);
    r3 = MemoryInline::FlatRead32((r13 + -15768));
    r3_addr_5 = (r3 + r0);
    r0 = MemoryInline::FlatRead32(r3_addr_5);
    r0 = (r0 & -16777216);
}

loc_804A66D4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804A6700;
    }
}

loc_804A66D8:
{
}

loc_804A66DC:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(127))) {
        goto loc_804A66F0;
    }
}

loc_804A66E0:
{
    r3 = (r1 + 8);
    r0 = 0;
    r3_addr_6 = (r3 + r4);
    MemoryInline::FlatWrite8(r3_addr_6, static_cast<uint8_t>(r0));
    goto loc_804A670C;
}

loc_804A66F0:
{
    r3 = (r1 + 8);
    r0 = 47;
    r3_addr_7 = (r3 + r4);
    MemoryInline::FlatWrite8(r3_addr_7, static_cast<uint8_t>(r0));
    r4 = (r4 + 1);
}

loc_804A6700:
{
    r3 = (r1 + 8);
    r0 = 0;
    r3_addr_9 = (r3 + r4);
    MemoryInline::FlatWrite8(r3_addr_9, static_cast<uint8_t>(r0));
}

loc_804A670C:
{
    r3 = 0x80620000u;
    r4 = r28;
    r3 = (r3 + -28592);
    r5 = (r1 + 8);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x804A6724u;
    if constexpr (KnownRegArgsCpuCall<0x804CDCA0u>(&func_804CDCA0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_804CDCA0_3175 = func_804CDCA0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804CDCA0_3175);
        r4 = static_cast<uint32_t>(regargs_result_804CDCA0_3175 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x804CDCA0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    }
    r3 = 0;
    goto loc_804A677C;
}

loc_804A672C:
{
    r6 = (r3 * 12);
    r3 = MemoryInline::FlatRead32((r13 + -15768));
    r3_addr_11 = (r3 + r6);
    r0 = MemoryInline::FlatRead32(r3_addr_11);
    r0 = (r0 & -16777216);
}

loc_804A673C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804A6748;
    }
}

loc_804A6740:
{
    r3 = 0;
    goto loc_804A677C;
}

loc_804A6748:
{
    r3 = (r3 + r6);
    r4 = MemoryInline::FlatRead32((r13 + -15688));
    r5 = MemoryInline::FlatRead32((r3 + 4));
    r0 = 0;
    r3 = 1;
    r4 = PPC_Srw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r4));
    MemoryInline::FlatWrite32((r27 + 48), r4);
    r4 = MemoryInline::FlatRead32((r13 + -15768));
    r4 = (r4 + r6);
    r4 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWrite32((r27 + 52), r4);
    MemoryInline::FlatWrite32((r27 + 56), r0);
    MemoryInline::FlatWrite32((r27 + 12), r0);
}

loc_804A677C:
{
    r11 = (r1 + 160);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 164));
    ctx->lr = r0;
    r1 = (r1 + 160);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804A64E0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804A64E0_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000037FF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804A64E0 func_804A64E0 preserves=true fpr_mask=0x00000000
