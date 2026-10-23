#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8026FB84(CpuContext* ctx);
extern "C" uint64_t func_8026FB84_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80335D4C(CpuContext* ctx);
extern "C" uint64_t func_80335D4C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" void func_80275754(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_80275754;

loc_80275754:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = r3;
    r31 = r6;
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
    MemoryInline::FlatWrite16((r3 + 48), static_cast<uint16_t>(r7));
    r0 = (r6 & 65535);
    r0 = (r0 & 32);
}

loc_802757B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802757DC;
    }
}

loc_802757BC:
{
    r0 = MemoryInline::FlatRead16((r3 + 182));
    r29 = (r0 & 255);
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
    r0 = (r0 | r29);
    MemoryInline::FlatWrite16((r30 + 182), static_cast<uint16_t>(r0));
    goto loc_802757E8;
}

loc_802757DC:
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
    MemoryInline::FlatWrite16((r30 + 182), static_cast<uint16_t>(r3));
}

loc_802757E8:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14880));
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 787), 0, 118u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 65u, (r30 + 852), f0.d);
    r0 = 0;
    MemoryInline::WriteResolved32(guest_range_0, 5u, (r30 + 792), r0);
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r30 + 787), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r30 + 788), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 9u, (r30 + 796), static_cast<uint16_t>(r0));
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 11u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 13u, (r30 + 800), r0);
        MemoryInline::WriteResolved16(guest_range_0, 11u, (r30 + 798), r0);
    }
    MemoryInline::WriteResolved8(guest_range_0, 87u, (r30 + 874), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 117u, (r30 + 904), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 15u, (r30 + 802), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 16u, (r30 + 803), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 17u, (r30 + 804), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 18u, (r30 + 805), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 19u, (r30 + 806), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 20u, (r30 + 807), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 21u, (r30 + 808), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 22u, (r30 + 809), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 23u, (r30 + 810), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 24u, (r30 + 811), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 25u, (r30 + 812), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 26u, (r30 + 813), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 27u, (r30 + 814), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 28u, (r30 + 815), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 29u, (r30 + 816), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 30u, (r30 + 817), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 31u, (r30 + 818), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 32u, (r30 + 819), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 33u, (r30 + 820), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 34u, (r30 + 821), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 35u, (r30 + 822), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 36u, (r30 + 823), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 37u, (r30 + 824), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 38u, (r30 + 825), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 39u, (r30 + 826), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 40u, (r30 + 827), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 41u, (r30 + 828), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 42u, (r30 + 829), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 43u, (r30 + 830), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 44u, (r30 + 831), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 45u, (r30 + 832), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 46u, (r30 + 833), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 47u, (r30 + 834), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 48u, (r30 + 835), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 49u, (r30 + 836), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 50u, (r30 + 837), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 51u, (r30 + 838), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 52u, (r30 + 839), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 53u, (r30 + 840), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 54u, (r30 + 841), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 55u, (r30 + 842), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 56u, (r30 + 843), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 57u, (r30 + 844), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 58u, (r30 + 845), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 59u, (r30 + 846), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 60u, (r30 + 847), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 61u, (r30 + 848), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 62u, (r30 + 849), static_cast<uint8_t>(r0));
    r0 = (r31 & 65535);
    r0 = (r0 & 1024);
}

loc_802758E0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802758F4;
    }
}

loc_802758E4:
{
    r3 = MemoryInline::FlatRead32((r30 + 88));
    r0 = (r3 + -8192);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite32((r30 + 168), r0);
}

loc_802758F4:
{
    r0 = (r31 & 65535);
    r0 = (r0 & 2048);
}

loc_80275900:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80275914;
    }
}

loc_80275904:
{
    r3 = MemoryInline::FlatRead32((r30 + 88));
    r0 = (r3 + 8192);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite32((r30 + 168), r0);
}

loc_80275914:
{
    r3 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8026FE38u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80275920:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802759D8;
    }
}

loc_80275924:
{
    r0 = (r31 & 65535);
    r0 = (r0 & 4096);
}

loc_80275930:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802759D8;
    }
}

loc_80275934:
{
    r31 = (r31 & 61439);
}

loc_80275938:
{
    r0 = MemoryInline::FlatRead8((r30 + 2));
}

loc_80275940:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80275960;
    }
}

loc_80275944:
{
}

loc_80275948:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(7))) {
        goto loc_80275968;
    }
}

loc_8027594C:
{
}

loc_80275950:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(8))) {
        goto loc_80275970;
    }
}

loc_80275954:
{
}

loc_80275958:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_80275978;
    }
}

loc_8027595C:
{
    goto loc_80275980;
}

loc_80275960:
{
    r29 = 4096;
    goto loc_80275984;
}

loc_80275968:
{
    r29 = 4096;
    goto loc_80275984;
}

loc_80275970:
{
    r29 = 4096;
    goto loc_80275984;
}

loc_80275978:
{
    r29 = 4096;
    goto loc_80275984;
}

loc_80275980:
{
    r29 = 0;
}

loc_80275984:
{
    r3 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8026FE38u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80275990:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802759D8;
    }
}

loc_80275994:
{
    r3 = r30;
    r4 = 2048;
    ctx->lr = 0x802759A0u;
    if constexpr (KnownRegArgsCpuCall<0x8026FB84u>(&func_8026FB84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        const auto regargs_result_8026FB84_3602 = func_8026FB84_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8026FB84_3602);
        r4 = static_cast<uint32_t>(regargs_result_8026FB84_3602 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8026FB84u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_802759A4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802759B8;
    }
}

loc_802759A8:
{
    r0 = MemoryInline::FlatRead32((r30 + 168));
    r0 = (r0 + r29);
    MemoryInline::FlatWrite32((r30 + 168), r0);
    goto loc_802759D8;
}

loc_802759B8:
{
    r3 = r30;
    r4 = 1024;
    ctx->lr = 0x802759C4u;
    if constexpr (KnownRegArgsCpuCall<0x8026FB84u>(&func_8026FB84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        const auto regargs_result_8026FB84_3B04 = func_8026FB84_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8026FB84_3B04);
        r4 = static_cast<uint32_t>(regargs_result_8026FB84_3B04 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8026FB84u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_802759C8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802759D8;
    }
}

loc_802759CC:
{
    r0 = MemoryInline::FlatRead32((r30 + 168));
    r0 = (r0 - r29);
    MemoryInline::FlatWrite32((r30 + 168), r0);
}

loc_802759D8:
{
    r0 = (r31 & 65535);
    r0 = (r0 & 16384);
}

loc_802759E4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802759F0;
    }
}

loc_802759E8:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 1093), static_cast<uint8_t>(r0));
}

loc_802759F0:
{
    r0 = (r31 & 65535);
    r0 = (r0 & 128);
}

loc_802759FC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80275A08;
    }
}

loc_80275A00:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 172), r0);
}

loc_80275A08:
{
    r0 = (r31 & 65535);
    r0 = (r0 & 256);
}

loc_80275A14:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80275A24;
    }
}

loc_80275A18:
{
    r0 = MemoryInline::FlatRead8((r30 + 1383));
    r0 = (r0 & 254);
    MemoryInline::FlatWrite8((r30 + 1383), static_cast<uint8_t>(r0));
}

loc_80275A24:
{
    r0 = (r31 & 65535);
    r0 = (r0 & 1);
}

loc_80275A30:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80275A48;
    }
}

loc_80275A34:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r30 + 1606), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r30 + 1608), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r30 + 1610), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite8((r30 + 1615), static_cast<uint8_t>(r0));
}

loc_80275A48:
{
    r0 = (r31 & 65535);
    r0 = (r0 & 8192);
}

loc_80275A54:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80275A68;
    }
}

loc_80275A58:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14876));
    MemoryInline::FlatWriteFloat32((r30 + 104), f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 108), f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 112), f0.d);
}

loc_80275A68:
{
    r3 = r30;
    // inline leaf 0x8026A340 (4 guest instruction(s))
    r0 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 316));
    MemoryInline::FlatWrite8((r3 + 245), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8026A340
    r3 = r30;
    // inline leaf 0x8026A35C (4 guest instruction(s))
    r0 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 316));
    MemoryInline::FlatWrite8((r3 + 246), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8026A35C
    r3 = r30;
    r4 = 255;
    r5 = 255;
    ctx->lr = 0x80275A88u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    InvokeDirectCpu<0x8027AC90u>(ctx);
    r0 = ctx->gpr[0];
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
    r0 = 0;
    MemoryInline::FlatWrite16((r30 + 1634), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite8((r30 + 931), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r30 + 930), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r30 + 1381), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r30 + 1382), static_cast<uint8_t>(r0));
    r3 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8026FE38u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80275AAC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80275B0C;
    }
}

loc_80275AB0:
{
    r5 = (r31 & 65535);
    r0 = (r5 & 2);
}

loc_80275ABC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80275B0C;
    }
}

loc_80275AC0:
{
    r0 = (r5 & 16);
}

loc_80275AC8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80275ADC;
    }
}

loc_80275ACC:
{
    r3 = r30;
    r4 = 6;
    ctx->lr = 0x80275AD8u;
    if constexpr (KnownRegArgsCpuCall<0x80335D4Cu>(&func_80335D4C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        const auto regargs_result_80335D4C_4FC0 = func_80335D4C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80335D4C_4FC0);
        r4 = static_cast<uint32_t>(regargs_result_80335D4C_4FC0 >> 32);
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
        InvokeDirectCpu<0x80335D4Cu>(ctx);
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
    goto loc_80275B04;
}

loc_80275ADC:
{
    r0 = (r5 & 64);
}

loc_80275AE4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80275AF8;
    }
}

loc_80275AE8:
{
    r3 = r30;
    r4 = 9;
    ctx->lr = 0x80275AF4u;
    if constexpr (KnownRegArgsCpuCall<0x80335D4Cu>(&func_80335D4C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        const auto regargs_result_80335D4C_56FD = func_80335D4C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80335D4C_56FD);
        r4 = static_cast<uint32_t>(regargs_result_80335D4C_56FD >> 32);
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
        InvokeDirectCpu<0x80335D4Cu>(ctx);
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
    goto loc_80275B04;
}

loc_80275AF8:
{
    r3 = r30;
    r4 = 1;
    ctx->lr = 0x80275B04u;
    if constexpr (KnownRegArgsCpuCall<0x80335D4Cu>(&func_80335D4C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        const auto regargs_result_80335D4C_5D92 = func_80335D4C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80335D4C_5D92);
        r4 = static_cast<uint32_t>(regargs_result_80335D4C_5D92 >> 32);
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
        InvokeDirectCpu<0x80335D4Cu>(ctx);
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

loc_80275B04:
{
    r0 = 15;
    MemoryInline::FlatWrite16((r30 + 18), static_cast<uint16_t>(r0));
}

loc_80275B0C:
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

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80275754 func_80275754 preserves=true fpr_mask=0x00000000
