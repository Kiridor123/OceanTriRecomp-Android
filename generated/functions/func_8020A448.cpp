#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80376A38(CpuContext* ctx);
extern "C" uint32_t func_80376A38_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_80376DC0(CpuContext* ctx);
extern "C" uint64_t func_80376DC0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80377D58(CpuContext* ctx);
extern "C" uint64_t func_80377D58_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8045FBD4(CpuContext* ctx);
extern "C" uint32_t func_8045FBD4_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_8020A448(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
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

    goto loc_8020A448;

loc_8020A448:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r30 = r6;
    r7 = 0;
    MemoryInline::FlatWrite32((r3 + 860), r7);
    MemoryInline::FlatWrite32((r3 + 864), r7);
    MemoryInline::FlatWrite8((r3 + 5), static_cast<uint8_t>(r7));
    MemoryInline::FlatWrite8((r3 + 6), static_cast<uint8_t>(r7));
    MemoryInline::FlatWrite8((r3 + 7), static_cast<uint8_t>(r7));
    r0 = MemoryInline::FlatRead8((r3 + 10));
    MemoryInline::FlatWrite8((r3 + 15), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 12));
    MemoryInline::FlatWrite16((r3 + 16), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite8((r3 + 10), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite16((r3 + 12), static_cast<uint16_t>(r5));
    MemoryInline::FlatWrite16((r3 + 612), static_cast<uint16_t>(r7));
    r0 = (r6 & 65535);
    r0 = (r0 & 32);
}

loc_8020A4A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8020A4CC;
    }
}

loc_8020A4AC:
{
    r0 = MemoryInline::FlatRead16((r3 + 182));
    r31 = (r0 & 255);
    r3 = 1;
    // inline leaf 0x800CEF20 (23 guest instruction(s))
}

loc_inl0_0x800CEF20:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & -2);
    r6 = (r4 + r0);
    r0 = MemoryInline::FlatRead16((r6 + 24));
}

loc_inl0_0x800CEF38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x800CEF40;
    }
}

loc_inl0_0x800CEF3C:
{
    r0 = 1;
}

loc_inl0_0x800CEF40:
{
    r5 = (r0 * 176);
    r3 = 11337728;
    r0 = (r3 + 30009);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r5)) >> 32));
    r0 = (r5 - r3);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_1 & 2147483647);
    r0 = (r0 + r3);
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_0 & 131071);
    r3 = 65536;
    r0 = (r3 + -173);
    r0 = (r4 * r0);
    r0 = (r5 - r0);
    r3 = (r0 & 65535);
    MemoryInline::FlatWriteRam16((r6 + 24), static_cast<uint16_t>(r3));
}

loc_inl0_cont_800CEF20:
{
    // end of inlined leaf 0x800CEF20
    r0 = (r3 & 65280);
    r0 = (r0 | r31);
    MemoryInline::FlatWrite16((r29 + 182), static_cast<uint16_t>(r0));
    goto loc_8020A4D8;
}

loc_8020A4CC:
{
    r3 = 1;
    // inline leaf 0x800CEF20 (23 guest instruction(s))
}

loc_inl1_0x800CEF20:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    r6 = (r4 + r0);
    r0 = MemoryInline::FlatRead16((r6 + 24));
}

loc_inl1_0x800CEF38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x800CEF40;
    }
}

loc_inl1_0x800CEF3C:
{
    r0 = 1;
}

loc_inl1_0x800CEF40:
{
    r5 = (r0 * 176);
    r3 = 11337728;
    r0 = (r3 + 30009);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r5)) >> 32));
    r0 = (r5 - r3);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_3 & 2147483647);
    r0 = (r0 + r3);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_1 & 131071);
    r3 = 65536;
    r0 = (r3 + -173);
    r0 = (r4 * r0);
    r0 = (r5 - r0);
    r3 = (r0 & 65535);
    MemoryInline::FlatWriteRam16((r6 + 24), static_cast<uint16_t>(r3));
}

loc_inl1_cont_800CEF20:
{
    // end of inlined leaf 0x800CEF20
    MemoryInline::FlatWrite16((r29 + 182), static_cast<uint16_t>(r3));
}

loc_8020A4D8:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -16248));
    guest_range_0 = MemoryInline::ResolveRangeHost((r29 + 787), 0, 69u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 65u, (r29 + 852), f0.d);
    r0 = 0;
    MemoryInline::WriteResolved32(guest_range_0, 5u, (r29 + 792), r0);
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r29 + 787), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 9u, (r29 + 796), static_cast<uint16_t>(r0));
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 11u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 13u, (r29 + 800), r0);
        MemoryInline::WriteResolved16(guest_range_0, 11u, (r29 + 798), r0);
    }
    MemoryInline::WriteResolved8(guest_range_0, 15u, (r29 + 802), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 16u, (r29 + 803), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 17u, (r29 + 804), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 18u, (r29 + 805), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 19u, (r29 + 806), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 20u, (r29 + 807), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 21u, (r29 + 808), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 22u, (r29 + 809), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 23u, (r29 + 810), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 24u, (r29 + 811), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 25u, (r29 + 812), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 26u, (r29 + 813), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 27u, (r29 + 814), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 28u, (r29 + 815), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 29u, (r29 + 816), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 30u, (r29 + 817), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 31u, (r29 + 818), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 32u, (r29 + 819), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 33u, (r29 + 820), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 34u, (r29 + 821), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 35u, (r29 + 822), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 36u, (r29 + 823), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 37u, (r29 + 824), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 38u, (r29 + 825), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 39u, (r29 + 826), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 40u, (r29 + 827), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 41u, (r29 + 828), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 42u, (r29 + 829), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 43u, (r29 + 830), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 44u, (r29 + 831), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 45u, (r29 + 832), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 46u, (r29 + 833), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 47u, (r29 + 834), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 48u, (r29 + 835), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 49u, (r29 + 836), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 50u, (r29 + 837), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 51u, (r29 + 838), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 52u, (r29 + 839), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 53u, (r29 + 840), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 54u, (r29 + 841), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 55u, (r29 + 842), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 56u, (r29 + 843), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 57u, (r29 + 844), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 58u, (r29 + 845), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 59u, (r29 + 846), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 60u, (r29 + 847), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 61u, (r29 + 848), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 62u, (r29 + 849), static_cast<uint8_t>(r0));
    r3 = r29;
    // inline leaf 0x8026A340 (4 guest instruction(s))
    r0 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 316));
    MemoryInline::FlatWrite8((r3 + 245), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8026A340
    r3 = r29;
    // inline leaf 0x8026A35C (4 guest instruction(s))
    r0 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 316));
    MemoryInline::FlatWrite8((r3 + 246), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8026A35C
    r3 = r29;
    ctx->lr = 0x8020A5D0u;
    if constexpr (KnownRegArgsCpuCall<0x80376A38u>(&func_80376A38)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_80376A38_2DEB = func_80376A38_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80376A38_2DEB;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80376A38u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_8020A5D4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8020A61C;
    }
}

loc_8020A5D8:
{
    r4 = (r30 & 65535);
    r0 = (r4 & 2);
}

loc_8020A5E4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8020A61C;
    }
}

loc_8020A5E8:
{
    r0 = (r4 & 16);
}

loc_8020A5F0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8020A614;
    }
}

loc_8020A5F4:
{
    r3 = (r29 + 2831);
    r4 = 0x806B0000u;
    r4 = (r4 + -4792);
    r4 = (r4 + 456);
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_8045FBD4_32E3 = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_32E3;
        r0 = ctx->gpr[0];
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
        InvokeDirectCpu<0x8045FBD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r3 = r29;
    ctx->lr = 0x8020A610u;
    if constexpr (KnownRegArgsCpuCall<0x80377D58u>(&func_80377D58)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        const auto regargs_result_80377D58_3658 = func_80377D58_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80377D58_3658);
        r4 = static_cast<uint32_t>(regargs_result_80377D58_3658 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
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
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x80377D58u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_8020A61C;
}

loc_8020A614:
{
    r3 = r29;
    ctx->lr = 0x8020A61Cu;
    if constexpr (KnownRegArgsCpuCall<0x80376DC0u>(&func_80376DC0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        const auto regargs_result_80376DC0_3CE0 = func_80376DC0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80376DC0_3CE0);
        r4 = static_cast<uint32_t>(regargs_result_80376DC0_3CE0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
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
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x80376DC0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
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

loc_8020A61C:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8020A448 func_8020A448 preserves=true fpr_mask=0x00000000
