#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800413D0(CpuContext* ctx);
extern "C" uint64_t func_800413D0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80052A04(CpuContext* ctx);
extern "C" uint32_t func_80052A04_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800CEB14(CpuContext* ctx);
extern "C" uint64_t func_800CEB14_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800CFE34(CpuContext* ctx);
extern "C" uint64_t func_800CFE34_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_803A8DB0(CpuContext* ctx);
extern "C" uint32_t func_803A8DB0_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_803AAF24(CpuContext* ctx);
extern "C" uint64_t func_803AAF24_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_803AD958(CpuContext* ctx);
extern "C" uint32_t func_803AD958_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_80055418_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80055418;

loc_80055418:
{
    MemoryInline::FlatWriteRam32((r1 + -144), r1);
    r1 = (r1 + -144);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 148), r0);
    r30 = r3;
    r3 = 0;
    // inline leaf 0x80055E94 (4 guest instruction(s))
    MemoryInline::FlatWrite8((r13 + -17792), static_cast<uint8_t>(r3));
    r0 = 0;
    MemoryInline::FlatWrite8((r13 + -17791), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x80055E94
    // inline leaf 0x800470BC (7 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -19268);
    r3 = MemoryInline::FlatRead8((r3 + 26));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x800470BC
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r4 = (r4_rot_0 & -8);
    r3 = 0x80590000u;
    r0 = (r3 + -19360);
    r31 = (r0 + r4);
    r3 = (r1 + 8);
    r4 = MemoryInline::FlatRead32((r31 + 4));
    ctx->lr = 0x80055458u;
    if constexpr (KnownRegArgsCpuCall<0x800413D0u>(&func_800413D0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_800413D0_B95 = func_800413D0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800413D0_B95);
        r4 = static_cast<uint32_t>(regargs_result_800413D0_B95 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x800413D0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
    r3 = MemoryInline::FlatRead32(r31);
    r4 = 0;
    r5 = (r13 + -32432);
    ctx->lr = 0x80055468u;
    if constexpr (KnownRegArgsCpuCall<0x800CFE34u>(&func_800CFE34)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_800CFE34_104A = func_800CFE34_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800CFE34_104A);
        r4 = static_cast<uint32_t>(regargs_result_800CFE34_104A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x800CFE34u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
    r4 = r3;
}

loc_80055470:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80055490;
    }
}

loc_80055474:
{
    r3 = (r1 + 8);
    r5 = MemoryInline::FlatRead32(r31);
    r6 = 0x80050000u;
    r6 = (r6 + 21912);
    r7 = 0;
    r8 = 0;
    ctx->lr = 0x80055490u;
    if constexpr (KnownRegArgsCpuCall<0x800CEB14u>(&func_800CEB14)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_800CEB14_15D9 = func_800CEB14_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800CEB14_15D9);
        r4 = static_cast<uint32_t>(regargs_result_800CEB14_15D9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x800CEB14u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
}

loc_80055490:
{
    r0 = (r30 & 255);
}

loc_80055498:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_80055574;
    }
}

loc_8005549C:
{
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r4 = (r4_rot_1 & -8);
    r3 = 0x80590000u;
    r0 = (r3 + -19080);
    r31 = (r0 + r4);
    ctx->lr = 0x800554B0u;
    if constexpr (KnownRegArgsCpuCall<0x803AAF24u>(&func_803AAF24)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803AAF24_1B6C = func_803AAF24_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_803AAF24_1B6C);
        r4 = static_cast<uint32_t>(regargs_result_803AAF24_1B6C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803AAF24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_800554B4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80055508;
    }
}

loc_800554B8:
{
    ctx->lr = 0x800554BCu;
    if constexpr (KnownRegArgsCpuCall<0x803A8DB0u>(&func_803A8DB0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_803A8DB0_1EE9 = func_803A8DB0_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803A8DB0_1EE9;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803A8DB0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (r3 & 65535);
}

loc_800554C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_800554DC;
    }
}

loc_800554C8:
{
}

loc_800554CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_800554E8;
    }
}

loc_800554D0:
{
}

loc_800554D4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_800554F8;
    }
}

loc_800554D8:
{
    goto loc_8005552C;
}

loc_800554DC:
{
    r3 = 0x80590000u;
    r31 = (r3 + -18848);
    goto loc_8005552C;
}

loc_800554E8:
{
    r3 = 0x80590000u;
    r3 = (r3 + -18848);
    r31 = (r3 + 8);
    goto loc_8005552C;
}

loc_800554F8:
{
    r3 = 0x80590000u;
    r3 = (r3 + -18848);
    r31 = (r3 + 16);
    goto loc_8005552C;
}

loc_80055508:
{
    r0 = (r30 & 255);
}

loc_80055510:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(9))) {
        goto loc_8005552C;
    }
}

loc_80055514:
{
    ctx->lr = 0x80055518u;
    if constexpr (KnownRegArgsCpuCall<0x803AD958u>(&func_803AD958)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_803AD958_257D = func_803AD958_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803AD958_257D;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803AD958u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (r3 & 255);
}

loc_80055520:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(10))) {
        goto loc_8005552C;
    }
}

loc_80055524:
{
    r3 = 0x80790000u;
    r31 = (r3 + 13728);
}

loc_8005552C:
{
    r3 = (r1 + 8);
    r4 = MemoryInline::FlatRead32((r31 + 4));
    ctx->lr = 0x80055538u;
    if constexpr (KnownRegArgsCpuCall<0x800413D0u>(&func_800413D0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_800413D0_2986 = func_800413D0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800413D0_2986);
        r4 = static_cast<uint32_t>(regargs_result_800413D0_2986 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x800413D0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
    r3 = MemoryInline::FlatRead32(r31);
    r4 = 0;
    r5 = (r13 + -32424);
    ctx->lr = 0x80055548u;
    if constexpr (KnownRegArgsCpuCall<0x800CFE34u>(&func_800CFE34)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_800CFE34_2E3E = func_800CFE34_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800CFE34_2E3E);
        r4 = static_cast<uint32_t>(regargs_result_800CFE34_2E3E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x800CFE34u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
    r4 = r3;
}

loc_80055550:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80055580;
    }
}

loc_80055554:
{
    r3 = (r1 + 8);
    r5 = MemoryInline::FlatRead32(r31);
    r6 = 0x80050000u;
    r6 = (r6 + 22232);
    r7 = 0;
    r8 = 0;
    ctx->lr = 0x80055570u;
    if constexpr (KnownRegArgsCpuCall<0x800CEB14u>(&func_800CEB14)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_800CEB14_33CD = func_800CEB14_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800CEB14_33CD);
        r4 = static_cast<uint32_t>(regargs_result_800CEB14_33CD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x800CEB14u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
    goto loc_80055580;
}

loc_80055574:
{
    r3 = 19;
    r4 = 19;
    if constexpr (KnownRegArgsCpuCall<0x80052A04u>(&func_80052A04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_80052A04_3864 = func_80052A04_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_80052A04_3864;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x80052A04u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
}

loc_80055580:
{
    r0 = MemoryInline::FlatRead32((r1 + 148));
    ctx->lr = r0;
    r1 = (r1 + 144);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80055418(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80055418_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFB gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80055418 func_80055418 preserves=true fpr_mask=0x00000000
