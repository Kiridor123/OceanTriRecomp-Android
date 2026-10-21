#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80517320(CpuContext* ctx);
extern "C" uint32_t func_80517320_ra38_1e_10_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);

extern "C" uint64_t func_80515C2C_ra38_1e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4)
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
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
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
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x80515C2Cu);
    goto loc_80515C2C;

loc_80515C2C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r0 = MemoryInline::FlatRead32(r3);
    r7 = (r5 + r6);
    r30 = r3;
    r27 = r4;
}

loc_80515C54:
{
    r28 = r5;
    r29 = r6;
    if ((static_cast<int32_t>(r7) > static_cast<int32_t>(r0))) {
        goto loc_80515D54;
    }
}

loc_80515C60:
{
}

loc_80515C64:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80515D4C;
    }
}

loc_80515C68:
{
}

loc_80515C6C:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(1024))) {
        goto loc_80515CA4;
    }
}

loc_80515C70:
{
    r0 = (1024 - r5);
    r31 = r29;
}

loc_80515C7C:
{
    if ((static_cast<int32_t>(r6) <= static_cast<int32_t>(r0))) {
        goto loc_80515C84;
    }
}

loc_80515C80:
{
    r31 = r0;
}

loc_80515C84:
{
    r4 = (r30 + r5);
    r3 = r27;
    r5 = r31;
    r4 = (r4 + 56);
    if constexpr (KnownRegArgsCpuCall<0x80517320u>(&func_80517320)) {
        ctx->gpr[1] = r1;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        const auto regargs_result_80517320_9C2 = func_80517320_ra38_1e_10_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r4 = regargs_result_80517320_9C2;
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80517320u>(ctx);
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        ctr = ctx->ctr;
    }
    r28 = (r28 + r31);
    r29 = (r29 - r31);
    r27 = (r27 + r31);
}

loc_80515CA4:
{
}

loc_80515CA8:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_80515D4C;
    }
}

loc_80515CAC:
{
    r28 = (r28 + -1024);
    r30 = MemoryInline::FlatRead32((r30 + 52));
    r3 = (static_cast<int32_t>(r28) >> 9);
    r28 = (r28 & 511);
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80515D44;
    }
}

loc_80515CC0:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
}

loc_80515CC4:
{
    ctr = r0;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80515CF8;
    }
}

loc_80515CCC:
{
    r30 = MemoryInline::FlatRead32(r30);
    r30 = MemoryInline::FlatRead32(r30);
    r30 = MemoryInline::FlatRead32(r30);
    r30 = MemoryInline::FlatRead32(r30);
    r30 = MemoryInline::FlatRead32(r30);
    r30 = MemoryInline::FlatRead32(r30);
    r30 = MemoryInline::FlatRead32(r30);
    r30 = MemoryInline::FlatRead32(r30);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80515CCC;
    }
}

loc_80515CF0:
{
    r3 = (r3 & 7);
}

loc_80515CF4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80515D44;
    }
}

loc_80515CF8:
{
    ctr = r3;
}

loc_80515CFC:
{
    r30 = MemoryInline::FlatRead32(r30);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80515CFC;
    }
}

loc_80515D04:
{
    goto loc_80515D44;
}

loc_80515D08:
{
    r0 = (512 - r28);
    r31 = r29;
}

loc_80515D14:
{
    if ((static_cast<int32_t>(r29) <= static_cast<int32_t>(r0))) {
        goto loc_80515D1C;
    }
}

loc_80515D18:
{
    r31 = r0;
}

loc_80515D1C:
{
    r4 = (r30 + r28);
    r3 = r27;
    r5 = r31;
    r4 = (r4 + 4);
    if constexpr (KnownRegArgsCpuCall<0x80517320u>(&func_80517320)) {
        ctx->gpr[1] = r1;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        const auto regargs_result_80517320_1574 = func_80517320_ra38_1e_10_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r4 = regargs_result_80517320_1574;
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80517320u>(ctx);
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        ctr = ctx->ctr;
    }
    r28 = (r28 + r31);
    r30 = MemoryInline::FlatRead32(r30);
    r28 = (r28 & 511);
    r29 = (r29 - r31);
    r27 = (r27 + r31);
}

loc_80515D44:
{
}

loc_80515D48:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_80515D08;
    }
}

loc_80515D4C:
{
    r3 = 1;
    goto loc_80515D58;
}

loc_80515D54:
{
    r3 = 0;
}

loc_80515D58:
{
    r11 = (r1 + 32);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80515C2C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80515C2C_ra38_1e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00001F7B gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x0000001E fpr_write=0x0000001E fpr_return=0x00000002 cr_read=0x23 cr_write=0x23 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80515C2C func_80515C2C preserves=true fpr_mask=0x00000000
