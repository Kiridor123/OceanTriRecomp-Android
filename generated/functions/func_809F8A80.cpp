#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8010BC44(CpuContext* ctx);
extern "C" uint64_t func_8010BC44_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80112674(CpuContext* ctx);
extern "C" uint64_t func_80112674_ra38_6_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double);
extern "C" void func_802AB408(CpuContext* ctx);
extern "C" uint64_t func_802AB408_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" void func_809F8A80(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    const uint32_t r27_entry = r27;
    const uint32_t r28_entry = r28;
    const uint32_t r29_entry = r29;
    const uint32_t r30_entry = r30;
    const uint32_t r31_entry = r31;
    uint32_t ctr = ctx->ctr;

    goto loc_809F8A80;

loc_809F8A80:
{
    MemoryInline::FlatWriteRam32((r1 + -208), r1);
    r1 = (r1 + -208);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 212), r0);
    r11 = (r1 + 208);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r28 = r3;
    r30 = MemoryInline::FlatRead32((r3 + 256));
    r0 = MemoryInline::FlatRead8((r3 + 2));
    r4 = (r0 * 40);
    r3 = 0x80A30000u;
    r0 = (r3 + -22424);
    r29 = (r0 + r4);
    r3 = (r1 + 128);
    // inline leaf 0x809ED8C4 (1 guest instruction(s))
    // end of inlined leaf 0x809ED8C4
    r3 = (r1 + 80);
    // inline leaf 0x809ED8C4 (1 guest instruction(s))
    // end of inlined leaf 0x809ED8C4
    r3 = (r1 + 68);
    // inline leaf 0x809EA85C (1 guest instruction(s))
    // end of inlined leaf 0x809EA85C
    r3 = (r1 + 56);
    // inline leaf 0x809EA85C (1 guest instruction(s))
    // end of inlined leaf 0x809EA85C
    r3 = (r1 + 44);
    // inline leaf 0x809EA85C (1 guest instruction(s))
    // end of inlined leaf 0x809EA85C
    r3 = (r1 + 32);
    // inline leaf 0x809EA85C (1 guest instruction(s))
    // end of inlined leaf 0x809EA85C
    r3 = (r1 + 20);
    // inline leaf 0x809EA85C (1 guest instruction(s))
    // end of inlined leaf 0x809EA85C
    r0 = MemoryInline::FlatRead8((r28 + 7));
}

loc_809F8AF0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(255))) {
        goto loc_809F8B08;
    }
}

loc_809F8AF4:
{
    r3 = r28;
    // inline leaf 0x802AB258 (3 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 97), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x802AB258
    r0 = 2;
    MemoryInline::FlatWrite8((r28 + 4), static_cast<uint8_t>(r0));
    goto loc_809F8D40;
}

loc_809F8B08:
{
    r27 = 1;
    MemoryInline::FlatWrite8((r30 + 39), static_cast<uint8_t>(r27));
    r31 = 0;
    MemoryInline::FlatWrite8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = (r1 + 32);
    r4 = (r28 + 24);
    ctx->lr = 0x809F8B24u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    InvokeDirectCpu<0x809EB13Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    f0 = ctx->fpr[0];
    r3 = 0x80A20000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + -6324));
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f0.d);
    r3 = (r1 + 8);
    r4 = (r28 + 36);
    // inline leaf 0x809EAAD4 (7 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWriteRam32(r3, r0);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWriteRam32((r3 + 4), r0);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWriteRam32((r3 + 8), r0);
    // end of inlined leaf 0x809EAAD4
    r0 = MemoryInline::FlatRead8((r29 + 38));
}

loc_809F8B4C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(11))) {
        goto loc_809F8B68;
    }
}

loc_809F8B50:
{
    r3 = 0x80A30000u;
    r3 = (r3 + -19824);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x809F8B68u:
        goto loc_809F8B68;
        break;
    case 0x809F8B74u:
        goto loc_809F8B74;
        break;
    case 0x809F8C44u:
        goto loc_809F8C44;
        break;
    case 0x809F8CB8u:
        goto loc_809F8CB8;
        break;
    case 0x809F8BF8u:
        goto loc_809F8BF8;
        break;
    case 0x809F8BB8u:
        goto loc_809F8BB8;
        break;
    case 0x809F8CB0u:
        goto loc_809F8CB0;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_809F8B68:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r28 + 4), static_cast<uint8_t>(r0));
    goto loc_809F8D40;
}

loc_809F8B74:
{
    MemoryInline::FlatWrite32((r28 + 16), r31);
    r3 = MemoryInline::FlatRead8((r28 + 6));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r28 + 6), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r30 + 38), static_cast<uint8_t>(r31));
    r3 = MemoryInline::FlatRead8(r30);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
    r3 = r28;
    ctx->lr = 0x809F8B9Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x809F9ED4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    r3 = r28;
    // inline leaf 0x802AB258 (3 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 97), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x802AB258
    r0 = MemoryInline::FlatRead8((r28 + 4));
}

loc_809F8BAC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_809F8D40;
    }
}

loc_809F8BB0:
{
    MemoryInline::FlatWrite8((r28 + 4), static_cast<uint8_t>(r27));
    goto loc_809F8D40;
}

loc_809F8BB8:
{
    r3 = MemoryInline::FlatRead8((r28 + 6));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r28 + 6), static_cast<uint8_t>(r0));
    r3 = (r0 & 255);
    r0 = MemoryInline::FlatRead8((r29 + 39));
}

loc_809F8BD0:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r0))) {
        goto loc_809F8BE0;
    }
}

loc_809F8BD4:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r30 + 3), static_cast<uint8_t>(r0));
    goto loc_809F8BE4;
}

loc_809F8BE0:
{
    MemoryInline::FlatWrite8((r30 + 38), static_cast<uint8_t>(r31));
}

loc_809F8BE4:
{
    r3 = r28;
    // inline leaf 0x802AB258 (3 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 97), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x802AB258
    r0 = 1;
    MemoryInline::FlatWrite8((r28 + 4), static_cast<uint8_t>(r0));
    goto loc_809F8D0C;
}

loc_809F8BF8:
{
    r3 = r28;
    r0 = MemoryInline::FlatRead8((r29 + 39));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r5 = (r5_rot_1 & -2);
    r4 = 0x80A30000u;
    r0 = (r4 + -20160);
    r4 = (r0 + r5);
    ctx->lr = 0x809F8C18u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x809F6874u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    ctr = ctx->ctr;
    r3 = (r28 + 24);
    r4 = MemoryInline::FlatRead8((r28 + 8));
    r5 = 30;
    r6 = 0x80A20000u;
    f1.d = MemoryInline::FlatReadFloat32((r6 + -6320));
    f2.d = f1.d;
    ctx->lr = 0x809F8C34u;
    if constexpr (KnownRegArgsCpuCall<0x80112674u>(&func_80112674)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_80112674_2AD7 = func_80112674_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_80112674_2AD7);
        r4 = static_cast<uint32_t>(regargs_result_80112674_2AD7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
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
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80112674u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        ctr = ctx->ctr;
    }
    MemoryInline::FlatWrite8((r30 + 38), static_cast<uint8_t>(r31));
    r0 = 2;
    MemoryInline::FlatWrite8((r28 + 4), static_cast<uint8_t>(r0));
    goto loc_809F8D40;
}

loc_809F8C44:
{
    // inline leaf 0x802AFCE8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3014));
    // end of inlined leaf 0x802AFCE8
    r3 = (r3 & 255);
    r0 = MemoryInline::FlatRead8((r28 + 8));
}

loc_809F8C54:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_809F8CA4;
    }
}

loc_809F8C58:
{
    r3 = r28;
    ctx->lr = 0x809F8C60u;
    if constexpr (KnownRegArgsCpuCall<0x802AB408u>(&func_802AB408)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        const auto regargs_result_802AB408_32E0 = func_802AB408_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802AB408_32E0);
        r4 = static_cast<uint32_t>(regargs_result_802AB408_32E0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x802AB408u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
}

loc_809F8C64:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_809F8C88;
    }
}

loc_809F8C68:
{
    r3 = (r28 + 24);
    r4 = MemoryInline::FlatRead8((r28 + 8));
    r5 = 13;
    r6 = 0x80A20000u;
    f1.d = MemoryInline::FlatReadFloat32((r6 + -6320));
    f2.d = f1.d;
    ctx->lr = 0x809F8C84u;
    if constexpr (KnownRegArgsCpuCall<0x80112674u>(&func_80112674)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_80112674_3887 = func_80112674_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_80112674_3887);
        r4 = static_cast<uint32_t>(regargs_result_80112674_3887 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
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
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80112674u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        ctr = ctx->ctr;
    }
    goto loc_809F8CA4;
}

loc_809F8C88:
{
    r3 = (r28 + 24);
    r4 = MemoryInline::FlatRead8((r28 + 8));
    r5 = 136;
    r6 = 0x80A20000u;
    f1.d = MemoryInline::FlatReadFloat32((r6 + -6320));
    f2.d = f1.d;
    ctx->lr = 0x809F8CA4u;
    if constexpr (KnownRegArgsCpuCall<0x80112674u>(&func_80112674)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_80112674_3F59 = func_80112674_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_80112674_3F59);
        r4 = static_cast<uint32_t>(regargs_result_80112674_3F59 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
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
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80112674u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        ctr = ctx->ctr;
    }
}

loc_809F8CA4:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r28 + 4), static_cast<uint8_t>(r0));
    goto loc_809F8D40;
}

loc_809F8CB0:
{
    MemoryInline::FlatWrite8((r28 + 4), static_cast<uint8_t>(r27));
    goto loc_809F8D0C;
}

loc_809F8CB8:
{
    r0 = MemoryInline::FlatRead32((r28 + 136));
}

loc_809F8CC0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_809F8CD0;
    }
}

loc_809F8CC4:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r28 + 4), static_cast<uint8_t>(r0));
    goto loc_809F8E00;
}

loc_809F8CD0:
{
    r3 = MemoryInline::FlatRead8((r28 + 6));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r28 + 6), static_cast<uint8_t>(r0));
    r3 = (r0 & 255);
    r0 = MemoryInline::FlatRead8((r29 + 39));
}

loc_809F8CE8:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r0))) {
        goto loc_809F8CF8;
    }
}

loc_809F8CEC:
{
    r0 = 4;
    MemoryInline::FlatWrite8((r30 + 3), static_cast<uint8_t>(r0));
    goto loc_809F8CFC;
}

loc_809F8CF8:
{
    MemoryInline::FlatWrite8((r30 + 38), static_cast<uint8_t>(r31));
}

loc_809F8CFC:
{
    r3 = r28;
    // inline leaf 0x802AB258 (3 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 97), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x802AB258
    r0 = 1;
    MemoryInline::FlatWrite8((r28 + 4), static_cast<uint8_t>(r0));
}

loc_809F8D0C:
{
    r3 = MemoryInline::FlatRead32((r28 + 16));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r28 + 16), r0);
}

loc_809F8D1C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(120))) {
        goto loc_809F8D34;
    }
}

loc_809F8D20:
{
    r3 = r28;
    // inline leaf 0x802AB258 (3 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 97), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x802AB258
    r0 = 2;
    MemoryInline::FlatWrite8((r28 + 4), static_cast<uint8_t>(r0));
    goto loc_809F8E00;
}

loc_809F8D34:
{
    r3 = r28;
    r4 = 1;
    ctx->lr = 0x809F8D40u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x809F73C4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
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

loc_809F8D40:
{
    r3 = r28;
    ctx->lr = 0x809F8D48u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x809F8E18u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    ctr = ctx->ctr;
    r3 = MemoryInline::FlatRead8((r30 + 22));
}

loc_809F8D50:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_809F8D60;
    }
}

loc_809F8D54:
{
}

loc_809F8D58:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_809F8DF8;
    }
}

loc_809F8D5C:
{
    goto loc_809F8E00;
}

loc_809F8D60:
{
    r4 = MemoryInline::FlatRead32((r28 + 16));
    r0 = MemoryInline::FlatRead8((r29 + 3));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_5 & -2);
    r3 = 0x80A30000u;
    r3 = (r3 + -20168);
    r3_addr_4 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_4);
}

loc_809F8D7C:
{
    if ((static_cast<int32_t>(r4) > static_cast<int32_t>(r0))) {
        goto loc_809F8D8C;
    }
}

loc_809F8D80:
{
    r0 = MemoryInline::FlatRead8((r28 + 6));
}

loc_809F8D88:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_809F8E00;
    }
}

loc_809F8D8C:
{
    r3 = MemoryInline::FlatRead8((r30 + 22));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r30 + 22), static_cast<uint8_t>(r0));
    r27 = MemoryInline::FlatRead8((r28 + 8));
    // inline leaf 0x802AFCE8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3014));
    // end of inlined leaf 0x802AFCE8
    r0 = (r3 & 255);
}

loc_809F8DA8:
{
    if ((static_cast<uint32_t>(r27) != static_cast<uint32_t>(r0))) {
        goto loc_809F8E00;
    }
}

loc_809F8DAC:
{
    r0 = MemoryInline::FlatRead8((r28 + 6));
}

loc_809F8DB4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_809F8DD8;
    }
}

loc_809F8DB8:
{
    r3 = r28;
    r4 = 1;
    r5 = (r1 + 32);
    r6 = (r1 + 20);
    r7 = (r1 + 8);
    r8 = r27;
    ctx->lr = 0x809F8DD4u;
    if constexpr (KnownRegArgsCpuCall<0x8010BC44u>(&func_8010BC44)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_8010BC44_5B3C = func_8010BC44_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8010BC44_5B3C);
        r4 = static_cast<uint32_t>(regargs_result_8010BC44_5B3C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
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
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8010BC44u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
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
    goto loc_809F8E00;
}

loc_809F8DD8:
{
    r3 = r28;
    r4 = 0;
    r5 = (r1 + 32);
    r6 = (r1 + 20);
    r7 = (r1 + 8);
    r8 = r27;
    ctx->lr = 0x809F8DF4u;
    if constexpr (KnownRegArgsCpuCall<0x8010BC44u>(&func_8010BC44)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_8010BC44_6398 = func_8010BC44_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8010BC44_6398);
        r4 = static_cast<uint32_t>(regargs_result_8010BC44_6398 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
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
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8010BC44u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
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
    goto loc_809F8E00;
}

loc_809F8DF8:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r30 + 22), static_cast<uint8_t>(r0));
}

loc_809F8E00:
{
    r11 = (r1 + 208);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 212));
    ctx->lr = r0;
    r1 = (r1 + 208);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->ctr = ctr;
    ctx->gpr[27] = r27_entry;
    ctx->gpr[28] = r28_entry;
    ctx->gpr[29] = r29_entry;
    ctx->gpr[30] = r30_entry;
    ctx->gpr[31] = r31_entry;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xE0003FFF fpr_write=0xE0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x809F8A80 func_809F8A80 preserves=true fpr_mask=0x00000000
