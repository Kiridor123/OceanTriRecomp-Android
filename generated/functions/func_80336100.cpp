#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80335F50(CpuContext* ctx);
extern "C" uint64_t func_80335F50_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_803364B0(CpuContext* ctx);
extern "C" uint32_t func_803364B0_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_804514C8(CpuContext* ctx);
extern "C" uint64_t func_804514C8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_803364B0_statefree(uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_803364B0_statefree_v0(uint32_t, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80336100_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;

    goto loc_80336100;

loc_80336100:
{
    MemoryInline::FlatWriteRam32((r1 + -144), r1);
    r1 = (r1 + -144);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 148), r0);
    r31 = r3;
    r28 = r4;
    r29 = r5;
    r30 = r6;
    r3 = (r1 + 8);
    ctx->lr = 0x80336134u;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x803364B0u) && KnownTranslatedCpuCall<0x803364B0u>::kAvailable && !KnownTranslatedCpuCall<0x803364B0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x803364B0u>()) {
        const auto state_free_result_803364B0_A06 = func_803364B0_statefree_v0(r1, r3, r31, 0x80336134u);
        r1 = static_cast<uint32_t>(state_free_result_803364B0_A06);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x803364B0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
    r3 = (r1 + 8);
    r4 = 0;
    r5 = 108;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r1 + 8);
    r4 = (r28 & 255);
    r5 = (r29 & 255);
    r6 = (r30 & 255);
    // inline leaf 0x80334A98 (6 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWriteRam8(r3, static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r6));
    // end of inlined leaf 0x80334A98
    r3 = r31;
    r4 = MemoryInline::FlatRead8((r31 + 30));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r31 + 30), static_cast<uint8_t>(r0));
    r5 = (r1 + 12);
    // inline leaf 0x80335F38 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead16((r3 + 26));
    MemoryInline::FlatWriteRam16(r5, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 22));
    MemoryInline::FlatWriteRam8((r5 + 2), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r5 + 3), static_cast<uint8_t>(r4));
    // end of inlined leaf 0x80335F38
    r0 = 0;
    MemoryInline::FlatWrite16((r31 + 1128), static_cast<uint16_t>(r0));
    r3 = (r1 + 16);
    r4 = (r31 + 392);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 428));
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f0.d);
    r3 = (r1 + 32);
    r4 = (r31 + 876);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 444), 0, 454u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + 444));
    r0 = (r0 & 65535);
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 44), 0, 16u, false, true);
    MemoryInline::WriteResolved16(guest_range_1, 0u, (r1 + 44), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r31 + 448));
    r0 = (r0 & 65535);
    MemoryInline::WriteResolved16(guest_range_1, 2u, (r1 + 46), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r31 + 452));
    r0 = (r0 & 65535);
    MemoryInline::WriteResolved16(guest_range_1, 4u, (r1 + 48), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 50u, (r31 + 494));
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r1 + 50), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 51u, (r31 + 495));
    MemoryInline::WriteResolved8(guest_range_1, 7u, (r1 + 51), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 52u, (r31 + 496));
    MemoryInline::WriteResolved16(guest_range_1, 8u, (r1 + 52), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 43u, (r31 + 487));
    MemoryInline::WriteResolved8(guest_range_1, 13u, (r1 + 57), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 40u, (r31 + 484));
    MemoryInline::WriteResolved8(guest_range_1, 10u, (r1 + 54), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved8(guest_range_0, 452u, (r31 + 896));
    MemoryInline::WriteResolved8(guest_range_1, 14u, (r1 + 58), static_cast<uint8_t>(r3));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 453u, (r31 + 897));
    MemoryInline::WriteResolved8(guest_range_1, 15u, (r1 + 59), static_cast<uint8_t>(r0));
}

loc_803361F8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(3))) {
        goto loc_8033625C;
    }
}

loc_803361FC:
{
}

loc_80336200:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_8033625C;
    }
}

loc_80336204:
{
    r0 = MemoryInline::FlatRead8((r31 + 898));
}

loc_8033620C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_8033624C;
    }
}

loc_80336210:
{
    r3 = 3;
    // inline leaf 0x800CFAF4 (16 guest instruction(s))
}

loc_inl2_0x800CFAF4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl2_0x800CFB04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl2_0x800CFB10;
    }
}

loc_inl2_0x800CFB08:
{
    r3 = 0;
    goto loc_inl2_cont_800CFAF4;
}

loc_inl2_0x800CFB10:
{
    r0 = (r3 & 255);
}

loc_inl2_0x800CFB18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl2_0x800CFB24;
    }
}

loc_inl2_0x800CFB1C:
{
    r3 = 0;
    goto loc_inl2_cont_800CFAF4;
}

loc_inl2_0x800CFB24:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl2_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    r0 = MemoryInline::FlatRead8((r31 + 898));
    r0 = (r0 * 2840);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3);
}

loc_8033622C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8033623C;
    }
}

loc_80336230:
{
    r0 = MemoryInline::FlatRead16((r3 + 26));
    MemoryInline::FlatWriteRam16((r1 + 60), static_cast<uint16_t>(r0));
    goto loc_80336288;
}

loc_8033623C:
{
    r3 = 65536;
    r0 = (r3 + -1);
    MemoryInline::FlatWriteRam16((r1 + 60), static_cast<uint16_t>(r0));
    goto loc_80336288;
}

loc_8033624C:
{
    r3 = 65536;
    r0 = (r3 + -1);
    MemoryInline::FlatWriteRam16((r1 + 60), static_cast<uint16_t>(r0));
    goto loc_80336288;
}

loc_8033625C:
{
}

loc_80336260:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(8))) {
        goto loc_80336280;
    }
}

loc_80336264:
{
    r3 = MemoryInline::FlatRead8((r31 + 898));
    r0 = MemoryInline::FlatRead8((r31 + 2458));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_3 & -256);
    r0 = (r3 | r0);
    r0 = (r0 & 65535);
    MemoryInline::FlatWriteRam16((r1 + 60), static_cast<uint16_t>(r0));
    goto loc_80336288;
}

loc_80336280:
{
    r0 = MemoryInline::FlatRead8((r31 + 898));
    MemoryInline::FlatWriteRam16((r1 + 60), static_cast<uint16_t>(r0));
}

loc_80336288:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r31 + 481), 0, 2072u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_2, 2071u, (r31 + 2552));
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 55), 0, 21u, false, true);
    MemoryInline::WriteResolved8(guest_range_3, 7u, (r1 + 62), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 418u, (r31 + 899));
    MemoryInline::WriteResolved8(guest_range_3, 8u, (r1 + 63), static_cast<uint8_t>(r0));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 419u, (r31 + 900));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 9u, (r1 + 64), f0.d);
    r0 = MemoryInline::ReadResolved16(guest_range_2, 423u, (r31 + 904));
    MemoryInline::WriteResolved16(guest_range_3, 13u, (r1 + 68), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 0u, (r31 + 481));
    MemoryInline::WriteResolved8(guest_range_3, 1u, (r1 + 56), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 2070u, (r31 + 2551));
    MemoryInline::WriteResolved8(guest_range_3, 15u, (r1 + 70), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 604u, (r31 + 1085));
    MemoryInline::WriteResolved8(guest_range_3, 0u, (r1 + 55), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 1902u, (r31 + 2383));
    MemoryInline::WriteResolved8(guest_range_3, 16u, (r1 + 71), static_cast<uint8_t>(r0));
    r3 = 0;
    MemoryInline::WriteResolved16(guest_range_3, 19u, (r1 + 74), static_cast<uint16_t>(r3));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 605u, (r31 + 1086));
}

loc_803362D8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_803362E4;
    }
}

loc_803362DC:
{
    r0 = (r3 | 1);
    MemoryInline::FlatWriteRam16((r1 + 74), static_cast<uint16_t>(r0));
}

loc_803362E4:
{
    r3 = r31;
    // inline leaf 0x8012ECC4 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2218));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_0 & 134217727);
    // end of inlined leaf 0x8012ECC4
}

loc_803362F0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80336300;
    }
}

loc_803362F4:
{
    r0 = MemoryInline::FlatRead16((r1 + 74));
    r0 = (r0 | 2);
    MemoryInline::FlatWriteRam16((r1 + 74), static_cast<uint16_t>(r0));
}

loc_80336300:
{
    r0 = MemoryInline::FlatRead8((r31 + 2207));
}

loc_80336308:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80336320;
    }
}

loc_8033630C:
{
}

loc_80336310:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80336330;
    }
}

loc_80336314:
{
}

loc_80336318:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_80336340;
    }
}

loc_8033631C:
{
    goto loc_8033634C;
}

loc_80336320:
{
    r0 = MemoryInline::FlatRead16((r1 + 74));
    r0 = (r0 | 4);
    MemoryInline::FlatWriteRam16((r1 + 74), static_cast<uint16_t>(r0));
    goto loc_8033634C;
}

loc_80336330:
{
    r0 = MemoryInline::FlatRead16((r1 + 74));
    r0 = (r0 | 8);
    MemoryInline::FlatWriteRam16((r1 + 74), static_cast<uint16_t>(r0));
    goto loc_8033634C;
}

loc_80336340:
{
    r0 = MemoryInline::FlatRead16((r1 + 74));
    r0 = (r0 | 12);
    MemoryInline::FlatWriteRam16((r1 + 74), static_cast<uint16_t>(r0));
}

loc_8033634C:
{
    r0 = MemoryInline::FlatRead16((r31 + 2326));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80336354:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80336364;
    }
}

loc_80336358:
{
    r0 = MemoryInline::FlatRead16((r1 + 74));
    r0 = (r0 | 16);
    MemoryInline::FlatWriteRam16((r1 + 74), static_cast<uint16_t>(r0));
}

loc_80336364:
{
    r3 = r31;
    // inline leaf 0x80133A10 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 2380));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (0 - r3);
    r0 = (r0 & ~r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x80133A10
}

loc_80336370:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80336380;
    }
}

loc_80336374:
{
    r0 = MemoryInline::FlatRead16((r1 + 74));
    r0 = (r0 | 32);
    MemoryInline::FlatWriteRam16((r1 + 74), static_cast<uint16_t>(r0));
}

loc_80336380:
{
    r3 = r31;
    r4 = 2;
    // inline leaf 0x80132330 (7 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2382));
    r0 = (r4 & 255);
    r3 = (r3 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    // end of inlined leaf 0x80132330
}

loc_80336390:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803363A0;
    }
}

loc_80336394:
{
    r0 = MemoryInline::FlatRead16((r1 + 74));
    r0 = (r0 | 64);
    MemoryInline::FlatWriteRam16((r1 + 74), static_cast<uint16_t>(r0));
}

loc_803363A0:
{
    r0 = MemoryInline::FlatRead8((r31 + 505));
}

loc_803363A8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_803363B8;
    }
}

loc_803363AC:
{
    r0 = MemoryInline::FlatRead16((r1 + 74));
    r0 = (r0 | 128);
    MemoryInline::FlatWriteRam16((r1 + 74), static_cast<uint16_t>(r0));
}

loc_803363B8:
{
    r0 = MemoryInline::FlatRead8((r31 + 506));
}

loc_803363C0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_803363D0;
    }
}

loc_803363C4:
{
    r0 = MemoryInline::FlatRead16((r1 + 74));
    r0 = (r0 | 256);
    MemoryInline::FlatWriteRam16((r1 + 74), static_cast<uint16_t>(r0));
}

loc_803363D0:
{
    r0 = MemoryInline::FlatRead8((r31 + 508));
}

loc_803363D8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803363E8;
    }
}

loc_803363DC:
{
    r0 = MemoryInline::FlatRead8((r31 + 509));
}

loc_803363E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80336420;
    }
}

loc_803363E8:
{
    r0 = MemoryInline::FlatRead8((r31 + 2552));
}

loc_803363F0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_80336420;
    }
}

loc_803363F4:
{
    r3 = MemoryInline::FlatRead8((r31 + 2551));
}

loc_803363FC:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(255))) {
        goto loc_80336420;
    }
}

loc_80336400:
{
    r0 = MemoryInline::FlatRead8((r31 + 481));
}

loc_80336408:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80336420;
    }
}

loc_8033640C:
{
    r0 = MemoryInline::FlatRead16((r1 + 74));
    r0 = (r0 | 512);
    MemoryInline::FlatWriteRam16((r1 + 74), static_cast<uint16_t>(r0));
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 509), static_cast<uint8_t>(r0));
}

loc_80336420:
{
    r0 = MemoryInline::FlatRead8((r31 + 2459));
}

loc_80336428:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80336438;
    }
}

loc_8033642C:
{
    r0 = MemoryInline::FlatRead16((r1 + 74));
    r0 = (r0 | 1024);
    MemoryInline::FlatWriteRam16((r1 + 74), static_cast<uint16_t>(r0));
}

loc_80336438:
{
    r0 = MemoryInline::FlatRead8((r31 + 1081));
}

loc_80336440:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80336450;
    }
}

loc_80336444:
{
    r0 = MemoryInline::FlatRead16((r1 + 74));
    r0 = (r0 | 2048);
    MemoryInline::FlatWriteRam16((r1 + 74), static_cast<uint16_t>(r0));
}

loc_80336450:
{
    r0 = MemoryInline::FlatRead8((r31 + 2332));
    MemoryInline::FlatWriteRam8((r1 + 76), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r31 + 2329));
    MemoryInline::FlatWriteRam8((r1 + 77), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r31 + 2210));
    MemoryInline::FlatWriteRam16((r1 + 72), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r31 + 2401));
    MemoryInline::FlatWriteRam8((r1 + 78), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r31 + 1952));
    MemoryInline::FlatWriteRam32((r1 + 80), r0);
    r3 = r31;
    r4 = (r1 + 84);
    ctx->lr = 0x80336484u;
    if constexpr (KnownRegArgsCpuCall<0x80335F50u>(&func_80335F50)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80335F50_4A84 = func_80335F50_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80335F50_4A84);
        r4 = static_cast<uint32_t>(regargs_result_80335F50_4A84 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80335F50u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = (r1 + 8);
    r4 = 108;
    ctx->lr = 0x80336490u;
    if constexpr (KnownRegArgsCpuCall<0x804514C8u>(&func_804514C8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        const auto regargs_result_804514C8_4E01 = func_804514C8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804514C8_4E01);
        r4 = static_cast<uint32_t>(regargs_result_804514C8_4E01 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x804514C8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
    r0 = MemoryInline::FlatRead32((r1 + 148));
    ctx->lr = r0;
    r1 = (r1 + 144);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80336100(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80336100_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80336100 func_80336100 preserves=true fpr_mask=0x00000000
