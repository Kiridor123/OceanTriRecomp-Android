#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800F64D8(CpuContext* ctx);
extern "C" uint64_t func_800F64D8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80131C38(CpuContext* ctx);
extern "C" uint64_t func_80131C38_ra18_2_18_0(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_80144644(CpuContext* ctx);
extern "C" uint64_t func_80144644_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_800F3B0C_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
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
    uint32_t ctr = ctx->ctr;

    goto loc_800F3B0C;

loc_800F3B0C:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r29 = r3;
    r30 = r4;
    r31 = r5;
    r5 = (r4 & 65535);
    r0 = MemoryInline::FlatRead16((r3 + 90));
}

loc_800F3B38:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r0))) {
        goto loc_800F3B44;
    }
}

loc_800F3B3C:
{
    r3 = 0;
    goto loc_800F3CA4;
}

loc_800F3B44:
{
    r0 = MemoryInline::FlatRead16((r3 + 92));
}

loc_800F3B4C:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r0))) {
        goto loc_800F3B58;
    }
}

loc_800F3B50:
{
    r3 = 1;
    goto loc_800F3CA4;
}

loc_800F3B58:
{
    r6 = 0;
    r5 = r29;
    r0 = 2;
    ctr = r0;
}

loc_800F3B68:
{
    r0 = MemoryInline::FlatRead16((r5 + 90));
}

loc_800F3B70:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_800F3B88;
    }
}

loc_800F3B74:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite16((r3 + 90), static_cast<uint16_t>(r4));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    goto loc_800F3CA4;
}

loc_800F3B88:
{
    r5 = (r5 + 2);
    r6 = (r6 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800F3B68;
    }
}

loc_800F3B94:
{
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r27 = 0;
    r28 = r29;
}

loc_800F3BA8:
{
    r3 = MemoryInline::FlatRead16((r28 + 90));
    r4 = (r1 + 12);
    r5 = (r1 + 8);
    ctx->lr = 0x800F3BB8u;
    if constexpr (KnownRegArgsCpuCall<0x80144644u>(&func_80144644)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_80144644_EC4 = func_80144644_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80144644_EC4);
        r4 = static_cast<uint32_t>(regargs_result_80144644_EC4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80144644u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    }
    r0 = (r3 & 255);
}

loc_800F3BC0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800F3BD0;
    }
}

loc_800F3BC4:
{
    r0 = MemoryInline::FlatRead32((r1 + 12));
}

loc_800F3BCC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800F3BEC;
    }
}

loc_800F3BD0:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & -2);
    r29 = (r29 + r0);
    r3 = MemoryInline::FlatRead16((r29 + 90));
    ctx->lr = 0x800F3BE0u;
    if constexpr (KnownRegArgsCpuCall<0x800F64D8u>(&func_800F64D8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        const auto regargs_result_800F64D8_14A5 = func_800F64D8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800F64D8_14A5);
        r4 = static_cast<uint32_t>(regargs_result_800F64D8_14A5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
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
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800F64D8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
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
    MemoryInline::FlatWrite16((r29 + 90), static_cast<uint16_t>(r30));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r27)));
    goto loc_800F3CA4;
}

loc_800F3BEC:
{
    r28 = (r28 + 2);
    r27 = (r27 + 1);
}

loc_800F3BF8:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(2))) {
        goto loc_800F3BA8;
    }
}

loc_800F3BFC:
{
    r27 = 0;
    r28 = r29;
}

loc_800F3C04:
{
    r3 = MemoryInline::FlatRead16((r28 + 90));
    r4 = (r1 + 12);
    r5 = (r1 + 8);
    ctx->lr = 0x800F3C14u;
    if constexpr (KnownRegArgsCpuCall<0x80144644u>(&func_80144644)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_80144644_1D8F = func_80144644_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80144644_1D8F);
        r4 = static_cast<uint32_t>(regargs_result_80144644_1D8F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80144644u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    }
    r0 = (r3 & 255);
}

loc_800F3C1C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800F3C54;
    }
}

loc_800F3C20:
{
    r3 = MemoryInline::FlatRead32((r1 + 12));
}

loc_800F3C28:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800F3C54;
    }
}

loc_800F3C2C:
{
    ctx->lr = 0x800F3C30u;
    if constexpr (KnownRegArgsCpuCall<0x80131C38u>(&func_80131C38)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_80131C38_2284 = func_80131C38_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80131C38_2284);
        r4 = static_cast<uint32_t>(regargs_result_80131C38_2284 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x80131C38u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    }
}

loc_800F3C34:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F3C54;
    }
}

loc_800F3C38:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    r29 = (r29 + r0);
    r3 = MemoryInline::FlatRead16((r29 + 90));
    ctx->lr = 0x800F3C48u;
    if constexpr (KnownRegArgsCpuCall<0x800F64D8u>(&func_800F64D8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        const auto regargs_result_800F64D8_2798 = func_800F64D8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800F64D8_2798);
        r4 = static_cast<uint32_t>(regargs_result_800F64D8_2798 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
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
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800F64D8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
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
    MemoryInline::FlatWrite16((r29 + 90), static_cast<uint16_t>(r30));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r27)));
    goto loc_800F3CA4;
}

loc_800F3C54:
{
    r28 = (r28 + 2);
    r27 = (r27 + 1);
}

loc_800F3C60:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(2))) {
        goto loc_800F3C04;
    }
}

loc_800F3C64:
{
    r5 = 0;
    r3 = (r31 & 255);
    r0 = 2;
    ctr = r0;
}

loc_800F3C74:
{
    r4 = (r29 + r5);
    r0 = MemoryInline::FlatRead8((r4 + 98));
}

loc_800F3C80:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r3))) {
        goto loc_800F3C98;
    }
}

loc_800F3C84:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & -2);
    r3 = (r29 + r0);
    MemoryInline::FlatWrite16((r3 + 90), static_cast<uint16_t>(r30));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
    goto loc_800F3CA4;
}

loc_800F3C98:
{
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800F3C74;
    }
}

loc_800F3CA0:
{
    r3 = -1;
}

loc_800F3CA4:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
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

extern "C" void func_800F3B0C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800F3B0C_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x003FFFFF gpr_return=0x00000018 fpr_read=0xF8003FFF fpr_write=0xF8003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800F3B0C func_800F3B0C preserves=true fpr_mask=0x00000000
