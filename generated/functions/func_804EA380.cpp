#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804E9840(CpuContext* ctx);
extern "C" uint64_t func_804E9840_ra608_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_804EA380_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_10 = nullptr;
    uint8_t* guest_range_11 = nullptr;
    uint8_t* guest_range_12 = nullptr;
    uint8_t* guest_range_13 = nullptr;
    uint8_t* guest_range_14 = nullptr;
    uint8_t* guest_range_15 = nullptr;
    uint8_t* guest_range_16 = nullptr;
    uint8_t* guest_range_17 = nullptr;
    uint8_t* guest_range_18 = nullptr;
    uint8_t* guest_range_19 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_20 = nullptr;
    uint8_t* guest_range_21 = nullptr;
    uint8_t* guest_range_22 = nullptr;
    uint8_t* guest_range_23 = nullptr;
    uint8_t* guest_range_24 = nullptr;
    uint8_t* guest_range_25 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;
    uint8_t* guest_range_6 = nullptr;
    uint8_t* guest_range_7 = nullptr;
    uint8_t* guest_range_8 = nullptr;
    uint8_t* guest_range_9 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_804EA380;

loc_804EA380:
{
    MemoryInline::FlatWriteRam32((r1 + -400), r1);
    r1 = (r1 + -400);
    r0 = ctx->lr;
    r3 = 0x80630000u;
    MemoryInline::FlatWriteRam32((r1 + 404), r0);
    r3 = (r3 + -15904);
    r0 = MemoryInline::FlatRead32((r13 + -14208));
}

loc_804EA3AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_804EA3CC;
    }
}

loc_804EA3B0:
{
}

loc_804EA3B4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_804EA7D4;
    }
}

loc_804EA3B8:
{
}

loc_804EA3BC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_804EABDC;
    }
}

loc_804EA3C0:
{
}

loc_804EA3C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_804EAFE4;
    }
}

loc_804EA3C8:
{
    goto loc_804EB0D8;
}

loc_804EA3CC:
{
    r0 = MemoryInline::FlatRead32((r13 + -19600));
}

loc_804EA3D4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804EA3F4;
    }
}

loc_804EA3D8:
{
}

loc_804EA3DC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_804EA4EC;
    }
}

loc_804EA3E0:
{
}

loc_804EA3E4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_804EA5E4;
    }
}

loc_804EA3E8:
{
}

loc_804EA3EC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(5))) {
        goto loc_804EA6DC;
    }
}

loc_804EA3F0:
{
    goto loc_804EB0D8;
}

loc_804EA3F4:
{
    r30 = (r3 + 1056);
    r31 = 64;
    guest_range_0 = MemoryInline::ResolveRangeHost(r30, 0, 26u, true, false);
    r29 = MemoryInline::ReadResolved8(guest_range_0, 0u, r30);
    r4 = (r1 + 344);
    r28 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r30 + 1));
    r3 = 224;
    r12 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r30 + 2));
    r5 = 27;
    r11 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r30 + 3));
    r10 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r30 + 4));
    r9 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r30 + 5));
    r8 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r30 + 6));
    r7 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r30 + 7));
    guest_range_13 = MemoryInline::ResolveRangeHost((r1 + 344), 0, 27u, false, true);
    MemoryInline::WriteResolved8(guest_range_13, 1u, (r1 + 345), static_cast<uint8_t>(r29));
    r29 = MemoryInline::ReadResolved8(guest_range_0, 8u, (r30 + 8));
    MemoryInline::WriteResolved8(guest_range_13, 2u, (r1 + 346), static_cast<uint8_t>(r28));
    r28 = MemoryInline::ReadResolved8(guest_range_0, 9u, (r30 + 9));
    MemoryInline::WriteResolved8(guest_range_13, 3u, (r1 + 347), static_cast<uint8_t>(r12));
    r12 = MemoryInline::ReadResolved8(guest_range_0, 10u, (r30 + 10));
    MemoryInline::WriteResolved8(guest_range_13, 4u, (r1 + 348), static_cast<uint8_t>(r11));
    r11 = MemoryInline::ReadResolved8(guest_range_0, 11u, (r30 + 11));
    MemoryInline::WriteResolved8(guest_range_13, 5u, (r1 + 349), static_cast<uint8_t>(r10));
    r10 = MemoryInline::ReadResolved8(guest_range_0, 12u, (r30 + 12));
    MemoryInline::WriteResolved8(guest_range_13, 6u, (r1 + 350), static_cast<uint8_t>(r9));
    r9 = MemoryInline::ReadResolved8(guest_range_0, 13u, (r30 + 13));
    MemoryInline::WriteResolved8(guest_range_13, 7u, (r1 + 351), static_cast<uint8_t>(r8));
    r8 = MemoryInline::ReadResolved8(guest_range_0, 14u, (r30 + 14));
    MemoryInline::WriteResolved8(guest_range_13, 8u, (r1 + 352), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_0, 15u, (r30 + 15));
    MemoryInline::WriteResolved8(guest_range_13, 9u, (r1 + 353), static_cast<uint8_t>(r29));
    r29 = MemoryInline::ReadResolved8(guest_range_0, 16u, (r30 + 16));
    MemoryInline::WriteResolved8(guest_range_13, 10u, (r1 + 354), static_cast<uint8_t>(r28));
    r28 = MemoryInline::ReadResolved8(guest_range_0, 17u, (r30 + 17));
    MemoryInline::WriteResolved8(guest_range_13, 11u, (r1 + 355), static_cast<uint8_t>(r12));
    r12 = MemoryInline::ReadResolved8(guest_range_0, 18u, (r30 + 18));
    MemoryInline::WriteResolved8(guest_range_13, 12u, (r1 + 356), static_cast<uint8_t>(r11));
    r11 = MemoryInline::ReadResolved8(guest_range_0, 19u, (r30 + 19));
    MemoryInline::WriteResolved8(guest_range_13, 13u, (r1 + 357), static_cast<uint8_t>(r10));
    r10 = MemoryInline::ReadResolved8(guest_range_0, 20u, (r30 + 20));
    MemoryInline::WriteResolved8(guest_range_13, 14u, (r1 + 358), static_cast<uint8_t>(r9));
    r9 = MemoryInline::ReadResolved8(guest_range_0, 21u, (r30 + 21));
    MemoryInline::WriteResolved8(guest_range_13, 15u, (r1 + 359), static_cast<uint8_t>(r8));
    r8 = MemoryInline::ReadResolved8(guest_range_0, 22u, (r30 + 22));
    MemoryInline::WriteResolved8(guest_range_13, 16u, (r1 + 360), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_0, 23u, (r30 + 23));
    r6 = MemoryInline::ReadResolved8(guest_range_0, 24u, (r30 + 24));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 25u, (r30 + 25));
    MemoryInline::WriteResolved8(guest_range_13, 0u, (r1 + 344), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_13, 17u, (r1 + 361), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_13, 18u, (r1 + 362), static_cast<uint8_t>(r28));
    MemoryInline::WriteResolved8(guest_range_13, 19u, (r1 + 363), static_cast<uint8_t>(r12));
    MemoryInline::WriteResolved8(guest_range_13, 20u, (r1 + 364), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_13, 21u, (r1 + 365), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_13, 22u, (r1 + 366), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_13, 23u, (r1 + 367), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_13, 24u, (r1 + 368), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_13, 25u, (r1 + 369), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_13, 26u, (r1 + 370), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x804E9C20u>(ctx);
    r3 = ctx->gpr[3];
    r3 = 2;
    ctx->lr = 0x804EA4E8u;
    if constexpr (KnownRegArgsCpuCall<0x804E9840u>(&func_804E9840)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_804E9840_21ED = func_804E9840_ra608_0_18_0(ctx, r3, r9, r10);
        r3 = static_cast<uint32_t>(regargs_result_804E9840_21ED);
        r4 = static_cast<uint32_t>(regargs_result_804E9840_21ED >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        InvokeDirectCpu<0x804E9840u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
    }
    goto loc_804EB0D8;
}

loc_804EA4EC:
{
    r30 = (r3 + 1140);
    r31 = 64;
    guest_range_1 = MemoryInline::ResolveRangeHost(r30, 0, 26u, true, false);
    r29 = MemoryInline::ReadResolved8(guest_range_1, 0u, r30);
    r4 = (r1 + 316);
    r28 = MemoryInline::ReadResolved8(guest_range_1, 1u, (r30 + 1));
    r3 = 224;
    r12 = MemoryInline::ReadResolved8(guest_range_1, 2u, (r30 + 2));
    r5 = 27;
    r11 = MemoryInline::ReadResolved8(guest_range_1, 3u, (r30 + 3));
    r10 = MemoryInline::ReadResolved8(guest_range_1, 4u, (r30 + 4));
    r9 = MemoryInline::ReadResolved8(guest_range_1, 5u, (r30 + 5));
    r8 = MemoryInline::ReadResolved8(guest_range_1, 6u, (r30 + 6));
    r7 = MemoryInline::ReadResolved8(guest_range_1, 7u, (r30 + 7));
    guest_range_14 = MemoryInline::ResolveRangeHost((r1 + 316), 0, 27u, false, true);
    MemoryInline::WriteResolved8(guest_range_14, 1u, (r1 + 317), static_cast<uint8_t>(r29));
    r29 = MemoryInline::ReadResolved8(guest_range_1, 8u, (r30 + 8));
    MemoryInline::WriteResolved8(guest_range_14, 2u, (r1 + 318), static_cast<uint8_t>(r28));
    r28 = MemoryInline::ReadResolved8(guest_range_1, 9u, (r30 + 9));
    MemoryInline::WriteResolved8(guest_range_14, 3u, (r1 + 319), static_cast<uint8_t>(r12));
    r12 = MemoryInline::ReadResolved8(guest_range_1, 10u, (r30 + 10));
    MemoryInline::WriteResolved8(guest_range_14, 4u, (r1 + 320), static_cast<uint8_t>(r11));
    r11 = MemoryInline::ReadResolved8(guest_range_1, 11u, (r30 + 11));
    MemoryInline::WriteResolved8(guest_range_14, 5u, (r1 + 321), static_cast<uint8_t>(r10));
    r10 = MemoryInline::ReadResolved8(guest_range_1, 12u, (r30 + 12));
    MemoryInline::WriteResolved8(guest_range_14, 6u, (r1 + 322), static_cast<uint8_t>(r9));
    r9 = MemoryInline::ReadResolved8(guest_range_1, 13u, (r30 + 13));
    MemoryInline::WriteResolved8(guest_range_14, 7u, (r1 + 323), static_cast<uint8_t>(r8));
    r8 = MemoryInline::ReadResolved8(guest_range_1, 14u, (r30 + 14));
    MemoryInline::WriteResolved8(guest_range_14, 8u, (r1 + 324), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_1, 15u, (r30 + 15));
    MemoryInline::WriteResolved8(guest_range_14, 9u, (r1 + 325), static_cast<uint8_t>(r29));
    r29 = MemoryInline::ReadResolved8(guest_range_1, 16u, (r30 + 16));
    MemoryInline::WriteResolved8(guest_range_14, 10u, (r1 + 326), static_cast<uint8_t>(r28));
    r28 = MemoryInline::ReadResolved8(guest_range_1, 17u, (r30 + 17));
    MemoryInline::WriteResolved8(guest_range_14, 11u, (r1 + 327), static_cast<uint8_t>(r12));
    r12 = MemoryInline::ReadResolved8(guest_range_1, 18u, (r30 + 18));
    MemoryInline::WriteResolved8(guest_range_14, 12u, (r1 + 328), static_cast<uint8_t>(r11));
    r11 = MemoryInline::ReadResolved8(guest_range_1, 19u, (r30 + 19));
    MemoryInline::WriteResolved8(guest_range_14, 13u, (r1 + 329), static_cast<uint8_t>(r10));
    r10 = MemoryInline::ReadResolved8(guest_range_1, 20u, (r30 + 20));
    MemoryInline::WriteResolved8(guest_range_14, 14u, (r1 + 330), static_cast<uint8_t>(r9));
    r9 = MemoryInline::ReadResolved8(guest_range_1, 21u, (r30 + 21));
    MemoryInline::WriteResolved8(guest_range_14, 15u, (r1 + 331), static_cast<uint8_t>(r8));
    r8 = MemoryInline::ReadResolved8(guest_range_1, 22u, (r30 + 22));
    MemoryInline::WriteResolved8(guest_range_14, 16u, (r1 + 332), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_1, 23u, (r30 + 23));
    r6 = MemoryInline::ReadResolved8(guest_range_1, 24u, (r30 + 24));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 25u, (r30 + 25));
    MemoryInline::WriteResolved8(guest_range_14, 0u, (r1 + 316), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_14, 17u, (r1 + 333), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_14, 18u, (r1 + 334), static_cast<uint8_t>(r28));
    MemoryInline::WriteResolved8(guest_range_14, 19u, (r1 + 335), static_cast<uint8_t>(r12));
    MemoryInline::WriteResolved8(guest_range_14, 20u, (r1 + 336), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_14, 21u, (r1 + 337), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_14, 22u, (r1 + 338), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_14, 23u, (r1 + 339), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_14, 24u, (r1 + 340), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_14, 25u, (r1 + 341), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_14, 26u, (r1 + 342), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x804E9C20u>(ctx);
    r3 = ctx->gpr[3];
    r3 = 2;
    ctx->lr = 0x804EA5E0u;
    if constexpr (KnownRegArgsCpuCall<0x804E9840u>(&func_804E9840)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_804E9840_3A0C = func_804E9840_ra608_0_18_0(ctx, r3, r9, r10);
        r3 = static_cast<uint32_t>(regargs_result_804E9840_3A0C);
        r4 = static_cast<uint32_t>(regargs_result_804E9840_3A0C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        InvokeDirectCpu<0x804E9840u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
    }
    goto loc_804EB0D8;
}

loc_804EA5E4:
{
    r30 = (r3 + 1308);
    r31 = 64;
    guest_range_2 = MemoryInline::ResolveRangeHost(r30, 0, 26u, true, false);
    r29 = MemoryInline::ReadResolved8(guest_range_2, 0u, r30);
    r4 = (r1 + 288);
    r28 = MemoryInline::ReadResolved8(guest_range_2, 1u, (r30 + 1));
    r3 = 224;
    r12 = MemoryInline::ReadResolved8(guest_range_2, 2u, (r30 + 2));
    r5 = 27;
    r11 = MemoryInline::ReadResolved8(guest_range_2, 3u, (r30 + 3));
    r10 = MemoryInline::ReadResolved8(guest_range_2, 4u, (r30 + 4));
    r9 = MemoryInline::ReadResolved8(guest_range_2, 5u, (r30 + 5));
    r8 = MemoryInline::ReadResolved8(guest_range_2, 6u, (r30 + 6));
    r7 = MemoryInline::ReadResolved8(guest_range_2, 7u, (r30 + 7));
    guest_range_15 = MemoryInline::ResolveRangeHost((r1 + 288), 0, 27u, false, true);
    MemoryInline::WriteResolved8(guest_range_15, 1u, (r1 + 289), static_cast<uint8_t>(r29));
    r29 = MemoryInline::ReadResolved8(guest_range_2, 8u, (r30 + 8));
    MemoryInline::WriteResolved8(guest_range_15, 2u, (r1 + 290), static_cast<uint8_t>(r28));
    r28 = MemoryInline::ReadResolved8(guest_range_2, 9u, (r30 + 9));
    MemoryInline::WriteResolved8(guest_range_15, 3u, (r1 + 291), static_cast<uint8_t>(r12));
    r12 = MemoryInline::ReadResolved8(guest_range_2, 10u, (r30 + 10));
    MemoryInline::WriteResolved8(guest_range_15, 4u, (r1 + 292), static_cast<uint8_t>(r11));
    r11 = MemoryInline::ReadResolved8(guest_range_2, 11u, (r30 + 11));
    MemoryInline::WriteResolved8(guest_range_15, 5u, (r1 + 293), static_cast<uint8_t>(r10));
    r10 = MemoryInline::ReadResolved8(guest_range_2, 12u, (r30 + 12));
    MemoryInline::WriteResolved8(guest_range_15, 6u, (r1 + 294), static_cast<uint8_t>(r9));
    r9 = MemoryInline::ReadResolved8(guest_range_2, 13u, (r30 + 13));
    MemoryInline::WriteResolved8(guest_range_15, 7u, (r1 + 295), static_cast<uint8_t>(r8));
    r8 = MemoryInline::ReadResolved8(guest_range_2, 14u, (r30 + 14));
    MemoryInline::WriteResolved8(guest_range_15, 8u, (r1 + 296), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_2, 15u, (r30 + 15));
    MemoryInline::WriteResolved8(guest_range_15, 9u, (r1 + 297), static_cast<uint8_t>(r29));
    r29 = MemoryInline::ReadResolved8(guest_range_2, 16u, (r30 + 16));
    MemoryInline::WriteResolved8(guest_range_15, 10u, (r1 + 298), static_cast<uint8_t>(r28));
    r28 = MemoryInline::ReadResolved8(guest_range_2, 17u, (r30 + 17));
    MemoryInline::WriteResolved8(guest_range_15, 11u, (r1 + 299), static_cast<uint8_t>(r12));
    r12 = MemoryInline::ReadResolved8(guest_range_2, 18u, (r30 + 18));
    MemoryInline::WriteResolved8(guest_range_15, 12u, (r1 + 300), static_cast<uint8_t>(r11));
    r11 = MemoryInline::ReadResolved8(guest_range_2, 19u, (r30 + 19));
    MemoryInline::WriteResolved8(guest_range_15, 13u, (r1 + 301), static_cast<uint8_t>(r10));
    r10 = MemoryInline::ReadResolved8(guest_range_2, 20u, (r30 + 20));
    MemoryInline::WriteResolved8(guest_range_15, 14u, (r1 + 302), static_cast<uint8_t>(r9));
    r9 = MemoryInline::ReadResolved8(guest_range_2, 21u, (r30 + 21));
    MemoryInline::WriteResolved8(guest_range_15, 15u, (r1 + 303), static_cast<uint8_t>(r8));
    r8 = MemoryInline::ReadResolved8(guest_range_2, 22u, (r30 + 22));
    MemoryInline::WriteResolved8(guest_range_15, 16u, (r1 + 304), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_2, 23u, (r30 + 23));
    r6 = MemoryInline::ReadResolved8(guest_range_2, 24u, (r30 + 24));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 25u, (r30 + 25));
    MemoryInline::WriteResolved8(guest_range_15, 0u, (r1 + 288), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_15, 17u, (r1 + 305), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_15, 18u, (r1 + 306), static_cast<uint8_t>(r28));
    MemoryInline::WriteResolved8(guest_range_15, 19u, (r1 + 307), static_cast<uint8_t>(r12));
    MemoryInline::WriteResolved8(guest_range_15, 20u, (r1 + 308), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_15, 21u, (r1 + 309), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_15, 22u, (r1 + 310), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_15, 23u, (r1 + 311), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_15, 24u, (r1 + 312), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_15, 25u, (r1 + 313), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_15, 26u, (r1 + 314), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x804E9C20u>(ctx);
    r3 = ctx->gpr[3];
    r3 = 2;
    ctx->lr = 0x804EA6D8u;
    if constexpr (KnownRegArgsCpuCall<0x804E9840u>(&func_804E9840)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_804E9840_522B = func_804E9840_ra608_0_18_0(ctx, r3, r9, r10);
        r3 = static_cast<uint32_t>(regargs_result_804E9840_522B);
        r4 = static_cast<uint32_t>(regargs_result_804E9840_522B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        InvokeDirectCpu<0x804E9840u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
    }
    goto loc_804EB0D8;
}

loc_804EA6DC:
{
    r30 = (r3 + 1224);
    r31 = 64;
    guest_range_3 = MemoryInline::ResolveRangeHost(r30, 0, 26u, true, false);
    r29 = MemoryInline::ReadResolved8(guest_range_3, 0u, r30);
    r4 = (r1 + 260);
    r28 = MemoryInline::ReadResolved8(guest_range_3, 1u, (r30 + 1));
    r3 = 224;
    r12 = MemoryInline::ReadResolved8(guest_range_3, 2u, (r30 + 2));
    r5 = 27;
    r11 = MemoryInline::ReadResolved8(guest_range_3, 3u, (r30 + 3));
    r10 = MemoryInline::ReadResolved8(guest_range_3, 4u, (r30 + 4));
    r9 = MemoryInline::ReadResolved8(guest_range_3, 5u, (r30 + 5));
    r8 = MemoryInline::ReadResolved8(guest_range_3, 6u, (r30 + 6));
    r7 = MemoryInline::ReadResolved8(guest_range_3, 7u, (r30 + 7));
    guest_range_16 = MemoryInline::ResolveRangeHost((r1 + 260), 0, 27u, false, true);
    MemoryInline::WriteResolved8(guest_range_16, 1u, (r1 + 261), static_cast<uint8_t>(r29));
    r29 = MemoryInline::ReadResolved8(guest_range_3, 8u, (r30 + 8));
    MemoryInline::WriteResolved8(guest_range_16, 2u, (r1 + 262), static_cast<uint8_t>(r28));
    r28 = MemoryInline::ReadResolved8(guest_range_3, 9u, (r30 + 9));
    MemoryInline::WriteResolved8(guest_range_16, 3u, (r1 + 263), static_cast<uint8_t>(r12));
    r12 = MemoryInline::ReadResolved8(guest_range_3, 10u, (r30 + 10));
    MemoryInline::WriteResolved8(guest_range_16, 4u, (r1 + 264), static_cast<uint8_t>(r11));
    r11 = MemoryInline::ReadResolved8(guest_range_3, 11u, (r30 + 11));
    MemoryInline::WriteResolved8(guest_range_16, 5u, (r1 + 265), static_cast<uint8_t>(r10));
    r10 = MemoryInline::ReadResolved8(guest_range_3, 12u, (r30 + 12));
    MemoryInline::WriteResolved8(guest_range_16, 6u, (r1 + 266), static_cast<uint8_t>(r9));
    r9 = MemoryInline::ReadResolved8(guest_range_3, 13u, (r30 + 13));
    MemoryInline::WriteResolved8(guest_range_16, 7u, (r1 + 267), static_cast<uint8_t>(r8));
    r8 = MemoryInline::ReadResolved8(guest_range_3, 14u, (r30 + 14));
    MemoryInline::WriteResolved8(guest_range_16, 8u, (r1 + 268), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_3, 15u, (r30 + 15));
    MemoryInline::WriteResolved8(guest_range_16, 9u, (r1 + 269), static_cast<uint8_t>(r29));
    r29 = MemoryInline::ReadResolved8(guest_range_3, 16u, (r30 + 16));
    MemoryInline::WriteResolved8(guest_range_16, 10u, (r1 + 270), static_cast<uint8_t>(r28));
    r28 = MemoryInline::ReadResolved8(guest_range_3, 17u, (r30 + 17));
    MemoryInline::WriteResolved8(guest_range_16, 11u, (r1 + 271), static_cast<uint8_t>(r12));
    r12 = MemoryInline::ReadResolved8(guest_range_3, 18u, (r30 + 18));
    MemoryInline::WriteResolved8(guest_range_16, 12u, (r1 + 272), static_cast<uint8_t>(r11));
    r11 = MemoryInline::ReadResolved8(guest_range_3, 19u, (r30 + 19));
    MemoryInline::WriteResolved8(guest_range_16, 13u, (r1 + 273), static_cast<uint8_t>(r10));
    r10 = MemoryInline::ReadResolved8(guest_range_3, 20u, (r30 + 20));
    MemoryInline::WriteResolved8(guest_range_16, 14u, (r1 + 274), static_cast<uint8_t>(r9));
    r9 = MemoryInline::ReadResolved8(guest_range_3, 21u, (r30 + 21));
    MemoryInline::WriteResolved8(guest_range_16, 15u, (r1 + 275), static_cast<uint8_t>(r8));
    r8 = MemoryInline::ReadResolved8(guest_range_3, 22u, (r30 + 22));
    MemoryInline::WriteResolved8(guest_range_16, 16u, (r1 + 276), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_3, 23u, (r30 + 23));
    r6 = MemoryInline::ReadResolved8(guest_range_3, 24u, (r30 + 24));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 25u, (r30 + 25));
    MemoryInline::WriteResolved8(guest_range_16, 0u, (r1 + 260), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_16, 17u, (r1 + 277), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_16, 18u, (r1 + 278), static_cast<uint8_t>(r28));
    MemoryInline::WriteResolved8(guest_range_16, 19u, (r1 + 279), static_cast<uint8_t>(r12));
    MemoryInline::WriteResolved8(guest_range_16, 20u, (r1 + 280), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_16, 21u, (r1 + 281), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_16, 22u, (r1 + 282), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_16, 23u, (r1 + 283), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_16, 24u, (r1 + 284), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_16, 25u, (r1 + 285), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_16, 26u, (r1 + 286), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x804E9C20u>(ctx);
    r3 = ctx->gpr[3];
    r3 = 2;
    ctx->lr = 0x804EA7D0u;
    if constexpr (KnownRegArgsCpuCall<0x804E9840u>(&func_804E9840)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_804E9840_6A4A = func_804E9840_ra608_0_18_0(ctx, r3, r9, r10);
        r3 = static_cast<uint32_t>(regargs_result_804E9840_6A4A);
        r4 = static_cast<uint32_t>(regargs_result_804E9840_6A4A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        InvokeDirectCpu<0x804E9840u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
    }
    goto loc_804EB0D8;
}

loc_804EA7D4:
{
    r0 = MemoryInline::FlatRead32((r13 + -19600));
}

loc_804EA7DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804EA7FC;
    }
}

loc_804EA7E0:
{
}

loc_804EA7E4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_804EA8F4;
    }
}

loc_804EA7E8:
{
}

loc_804EA7EC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_804EA9EC;
    }
}

loc_804EA7F0:
{
}

loc_804EA7F4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(5))) {
        goto loc_804EAAE4;
    }
}

loc_804EA7F8:
{
    goto loc_804EB0D8;
}

loc_804EA7FC:
{
    r30 = (r3 + 1084);
    r31 = 64;
    guest_range_4 = MemoryInline::ResolveRangeHost(r30, 0, 26u, true, false);
    r29 = MemoryInline::ReadResolved8(guest_range_4, 0u, r30);
    r4 = (r1 + 232);
    r28 = MemoryInline::ReadResolved8(guest_range_4, 1u, (r30 + 1));
    r3 = 224;
    r12 = MemoryInline::ReadResolved8(guest_range_4, 2u, (r30 + 2));
    r5 = 27;
    r11 = MemoryInline::ReadResolved8(guest_range_4, 3u, (r30 + 3));
    r10 = MemoryInline::ReadResolved8(guest_range_4, 4u, (r30 + 4));
    r9 = MemoryInline::ReadResolved8(guest_range_4, 5u, (r30 + 5));
    r8 = MemoryInline::ReadResolved8(guest_range_4, 6u, (r30 + 6));
    r7 = MemoryInline::ReadResolved8(guest_range_4, 7u, (r30 + 7));
    guest_range_17 = MemoryInline::ResolveRangeHost((r1 + 232), 0, 27u, false, true);
    MemoryInline::WriteResolved8(guest_range_17, 1u, (r1 + 233), static_cast<uint8_t>(r29));
    r29 = MemoryInline::ReadResolved8(guest_range_4, 8u, (r30 + 8));
    MemoryInline::WriteResolved8(guest_range_17, 2u, (r1 + 234), static_cast<uint8_t>(r28));
    r28 = MemoryInline::ReadResolved8(guest_range_4, 9u, (r30 + 9));
    MemoryInline::WriteResolved8(guest_range_17, 3u, (r1 + 235), static_cast<uint8_t>(r12));
    r12 = MemoryInline::ReadResolved8(guest_range_4, 10u, (r30 + 10));
    MemoryInline::WriteResolved8(guest_range_17, 4u, (r1 + 236), static_cast<uint8_t>(r11));
    r11 = MemoryInline::ReadResolved8(guest_range_4, 11u, (r30 + 11));
    MemoryInline::WriteResolved8(guest_range_17, 5u, (r1 + 237), static_cast<uint8_t>(r10));
    r10 = MemoryInline::ReadResolved8(guest_range_4, 12u, (r30 + 12));
    MemoryInline::WriteResolved8(guest_range_17, 6u, (r1 + 238), static_cast<uint8_t>(r9));
    r9 = MemoryInline::ReadResolved8(guest_range_4, 13u, (r30 + 13));
    MemoryInline::WriteResolved8(guest_range_17, 7u, (r1 + 239), static_cast<uint8_t>(r8));
    r8 = MemoryInline::ReadResolved8(guest_range_4, 14u, (r30 + 14));
    MemoryInline::WriteResolved8(guest_range_17, 8u, (r1 + 240), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_4, 15u, (r30 + 15));
    MemoryInline::WriteResolved8(guest_range_17, 9u, (r1 + 241), static_cast<uint8_t>(r29));
    r29 = MemoryInline::ReadResolved8(guest_range_4, 16u, (r30 + 16));
    MemoryInline::WriteResolved8(guest_range_17, 10u, (r1 + 242), static_cast<uint8_t>(r28));
    r28 = MemoryInline::ReadResolved8(guest_range_4, 17u, (r30 + 17));
    MemoryInline::WriteResolved8(guest_range_17, 11u, (r1 + 243), static_cast<uint8_t>(r12));
    r12 = MemoryInline::ReadResolved8(guest_range_4, 18u, (r30 + 18));
    MemoryInline::WriteResolved8(guest_range_17, 12u, (r1 + 244), static_cast<uint8_t>(r11));
    r11 = MemoryInline::ReadResolved8(guest_range_4, 19u, (r30 + 19));
    MemoryInline::WriteResolved8(guest_range_17, 13u, (r1 + 245), static_cast<uint8_t>(r10));
    r10 = MemoryInline::ReadResolved8(guest_range_4, 20u, (r30 + 20));
    MemoryInline::WriteResolved8(guest_range_17, 14u, (r1 + 246), static_cast<uint8_t>(r9));
    r9 = MemoryInline::ReadResolved8(guest_range_4, 21u, (r30 + 21));
    MemoryInline::WriteResolved8(guest_range_17, 15u, (r1 + 247), static_cast<uint8_t>(r8));
    r8 = MemoryInline::ReadResolved8(guest_range_4, 22u, (r30 + 22));
    MemoryInline::WriteResolved8(guest_range_17, 16u, (r1 + 248), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_4, 23u, (r30 + 23));
    r6 = MemoryInline::ReadResolved8(guest_range_4, 24u, (r30 + 24));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 25u, (r30 + 25));
    MemoryInline::WriteResolved8(guest_range_17, 0u, (r1 + 232), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_17, 17u, (r1 + 249), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_17, 18u, (r1 + 250), static_cast<uint8_t>(r28));
    MemoryInline::WriteResolved8(guest_range_17, 19u, (r1 + 251), static_cast<uint8_t>(r12));
    MemoryInline::WriteResolved8(guest_range_17, 20u, (r1 + 252), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_17, 21u, (r1 + 253), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_17, 22u, (r1 + 254), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_17, 23u, (r1 + 255), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_17, 24u, (r1 + 256), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_17, 25u, (r1 + 257), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_17, 26u, (r1 + 258), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x804E9C20u>(ctx);
    r3 = ctx->gpr[3];
    r3 = 2;
    ctx->lr = 0x804EA8F0u;
    if constexpr (KnownRegArgsCpuCall<0x804E9840u>(&func_804E9840)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_804E9840_851E = func_804E9840_ra608_0_18_0(ctx, r3, r9, r10);
        r3 = static_cast<uint32_t>(regargs_result_804E9840_851E);
        r4 = static_cast<uint32_t>(regargs_result_804E9840_851E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        InvokeDirectCpu<0x804E9840u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
    }
    goto loc_804EB0D8;
}

loc_804EA8F4:
{
    r30 = (r3 + 1168);
    r31 = 64;
    guest_range_5 = MemoryInline::ResolveRangeHost(r30, 0, 26u, true, false);
    r29 = MemoryInline::ReadResolved8(guest_range_5, 0u, r30);
    r4 = (r1 + 204);
    r28 = MemoryInline::ReadResolved8(guest_range_5, 1u, (r30 + 1));
    r3 = 224;
    r12 = MemoryInline::ReadResolved8(guest_range_5, 2u, (r30 + 2));
    r5 = 27;
    r11 = MemoryInline::ReadResolved8(guest_range_5, 3u, (r30 + 3));
    r10 = MemoryInline::ReadResolved8(guest_range_5, 4u, (r30 + 4));
    r9 = MemoryInline::ReadResolved8(guest_range_5, 5u, (r30 + 5));
    r8 = MemoryInline::ReadResolved8(guest_range_5, 6u, (r30 + 6));
    r7 = MemoryInline::ReadResolved8(guest_range_5, 7u, (r30 + 7));
    guest_range_18 = MemoryInline::ResolveRangeHost((r1 + 204), 0, 27u, false, true);
    MemoryInline::WriteResolved8(guest_range_18, 1u, (r1 + 205), static_cast<uint8_t>(r29));
    r29 = MemoryInline::ReadResolved8(guest_range_5, 8u, (r30 + 8));
    MemoryInline::WriteResolved8(guest_range_18, 2u, (r1 + 206), static_cast<uint8_t>(r28));
    r28 = MemoryInline::ReadResolved8(guest_range_5, 9u, (r30 + 9));
    MemoryInline::WriteResolved8(guest_range_18, 3u, (r1 + 207), static_cast<uint8_t>(r12));
    r12 = MemoryInline::ReadResolved8(guest_range_5, 10u, (r30 + 10));
    MemoryInline::WriteResolved8(guest_range_18, 4u, (r1 + 208), static_cast<uint8_t>(r11));
    r11 = MemoryInline::ReadResolved8(guest_range_5, 11u, (r30 + 11));
    MemoryInline::WriteResolved8(guest_range_18, 5u, (r1 + 209), static_cast<uint8_t>(r10));
    r10 = MemoryInline::ReadResolved8(guest_range_5, 12u, (r30 + 12));
    MemoryInline::WriteResolved8(guest_range_18, 6u, (r1 + 210), static_cast<uint8_t>(r9));
    r9 = MemoryInline::ReadResolved8(guest_range_5, 13u, (r30 + 13));
    MemoryInline::WriteResolved8(guest_range_18, 7u, (r1 + 211), static_cast<uint8_t>(r8));
    r8 = MemoryInline::ReadResolved8(guest_range_5, 14u, (r30 + 14));
    MemoryInline::WriteResolved8(guest_range_18, 8u, (r1 + 212), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_5, 15u, (r30 + 15));
    MemoryInline::WriteResolved8(guest_range_18, 9u, (r1 + 213), static_cast<uint8_t>(r29));
    r29 = MemoryInline::ReadResolved8(guest_range_5, 16u, (r30 + 16));
    MemoryInline::WriteResolved8(guest_range_18, 10u, (r1 + 214), static_cast<uint8_t>(r28));
    r28 = MemoryInline::ReadResolved8(guest_range_5, 17u, (r30 + 17));
    MemoryInline::WriteResolved8(guest_range_18, 11u, (r1 + 215), static_cast<uint8_t>(r12));
    r12 = MemoryInline::ReadResolved8(guest_range_5, 18u, (r30 + 18));
    MemoryInline::WriteResolved8(guest_range_18, 12u, (r1 + 216), static_cast<uint8_t>(r11));
    r11 = MemoryInline::ReadResolved8(guest_range_5, 19u, (r30 + 19));
    MemoryInline::WriteResolved8(guest_range_18, 13u, (r1 + 217), static_cast<uint8_t>(r10));
    r10 = MemoryInline::ReadResolved8(guest_range_5, 20u, (r30 + 20));
    MemoryInline::WriteResolved8(guest_range_18, 14u, (r1 + 218), static_cast<uint8_t>(r9));
    r9 = MemoryInline::ReadResolved8(guest_range_5, 21u, (r30 + 21));
    MemoryInline::WriteResolved8(guest_range_18, 15u, (r1 + 219), static_cast<uint8_t>(r8));
    r8 = MemoryInline::ReadResolved8(guest_range_5, 22u, (r30 + 22));
    MemoryInline::WriteResolved8(guest_range_18, 16u, (r1 + 220), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_5, 23u, (r30 + 23));
    r6 = MemoryInline::ReadResolved8(guest_range_5, 24u, (r30 + 24));
    r0 = MemoryInline::ReadResolved8(guest_range_5, 25u, (r30 + 25));
    MemoryInline::WriteResolved8(guest_range_18, 0u, (r1 + 204), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_18, 17u, (r1 + 221), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_18, 18u, (r1 + 222), static_cast<uint8_t>(r28));
    MemoryInline::WriteResolved8(guest_range_18, 19u, (r1 + 223), static_cast<uint8_t>(r12));
    MemoryInline::WriteResolved8(guest_range_18, 20u, (r1 + 224), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_18, 21u, (r1 + 225), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_18, 22u, (r1 + 226), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_18, 23u, (r1 + 227), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_18, 24u, (r1 + 228), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_18, 25u, (r1 + 229), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_18, 26u, (r1 + 230), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x804E9C20u>(ctx);
    r3 = ctx->gpr[3];
    r3 = 2;
    ctx->lr = 0x804EA9E8u;
    if constexpr (KnownRegArgsCpuCall<0x804E9840u>(&func_804E9840)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_804E9840_9D3D = func_804E9840_ra608_0_18_0(ctx, r3, r9, r10);
        r3 = static_cast<uint32_t>(regargs_result_804E9840_9D3D);
        r4 = static_cast<uint32_t>(regargs_result_804E9840_9D3D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        InvokeDirectCpu<0x804E9840u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
    }
    goto loc_804EB0D8;
}

loc_804EA9EC:
{
    r30 = (r3 + 1336);
    r31 = 64;
    guest_range_6 = MemoryInline::ResolveRangeHost(r30, 0, 26u, true, false);
    r29 = MemoryInline::ReadResolved8(guest_range_6, 0u, r30);
    r4 = (r1 + 176);
    r28 = MemoryInline::ReadResolved8(guest_range_6, 1u, (r30 + 1));
    r3 = 224;
    r12 = MemoryInline::ReadResolved8(guest_range_6, 2u, (r30 + 2));
    r5 = 27;
    r11 = MemoryInline::ReadResolved8(guest_range_6, 3u, (r30 + 3));
    r10 = MemoryInline::ReadResolved8(guest_range_6, 4u, (r30 + 4));
    r9 = MemoryInline::ReadResolved8(guest_range_6, 5u, (r30 + 5));
    r8 = MemoryInline::ReadResolved8(guest_range_6, 6u, (r30 + 6));
    r7 = MemoryInline::ReadResolved8(guest_range_6, 7u, (r30 + 7));
    guest_range_19 = MemoryInline::ResolveRangeHost((r1 + 176), 0, 27u, false, true);
    MemoryInline::WriteResolved8(guest_range_19, 1u, (r1 + 177), static_cast<uint8_t>(r29));
    r29 = MemoryInline::ReadResolved8(guest_range_6, 8u, (r30 + 8));
    MemoryInline::WriteResolved8(guest_range_19, 2u, (r1 + 178), static_cast<uint8_t>(r28));
    r28 = MemoryInline::ReadResolved8(guest_range_6, 9u, (r30 + 9));
    MemoryInline::WriteResolved8(guest_range_19, 3u, (r1 + 179), static_cast<uint8_t>(r12));
    r12 = MemoryInline::ReadResolved8(guest_range_6, 10u, (r30 + 10));
    MemoryInline::WriteResolved8(guest_range_19, 4u, (r1 + 180), static_cast<uint8_t>(r11));
    r11 = MemoryInline::ReadResolved8(guest_range_6, 11u, (r30 + 11));
    MemoryInline::WriteResolved8(guest_range_19, 5u, (r1 + 181), static_cast<uint8_t>(r10));
    r10 = MemoryInline::ReadResolved8(guest_range_6, 12u, (r30 + 12));
    MemoryInline::WriteResolved8(guest_range_19, 6u, (r1 + 182), static_cast<uint8_t>(r9));
    r9 = MemoryInline::ReadResolved8(guest_range_6, 13u, (r30 + 13));
    MemoryInline::WriteResolved8(guest_range_19, 7u, (r1 + 183), static_cast<uint8_t>(r8));
    r8 = MemoryInline::ReadResolved8(guest_range_6, 14u, (r30 + 14));
    MemoryInline::WriteResolved8(guest_range_19, 8u, (r1 + 184), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_6, 15u, (r30 + 15));
    MemoryInline::WriteResolved8(guest_range_19, 9u, (r1 + 185), static_cast<uint8_t>(r29));
    r29 = MemoryInline::ReadResolved8(guest_range_6, 16u, (r30 + 16));
    MemoryInline::WriteResolved8(guest_range_19, 10u, (r1 + 186), static_cast<uint8_t>(r28));
    r28 = MemoryInline::ReadResolved8(guest_range_6, 17u, (r30 + 17));
    MemoryInline::WriteResolved8(guest_range_19, 11u, (r1 + 187), static_cast<uint8_t>(r12));
    r12 = MemoryInline::ReadResolved8(guest_range_6, 18u, (r30 + 18));
    MemoryInline::WriteResolved8(guest_range_19, 12u, (r1 + 188), static_cast<uint8_t>(r11));
    r11 = MemoryInline::ReadResolved8(guest_range_6, 19u, (r30 + 19));
    MemoryInline::WriteResolved8(guest_range_19, 13u, (r1 + 189), static_cast<uint8_t>(r10));
    r10 = MemoryInline::ReadResolved8(guest_range_6, 20u, (r30 + 20));
    MemoryInline::WriteResolved8(guest_range_19, 14u, (r1 + 190), static_cast<uint8_t>(r9));
    r9 = MemoryInline::ReadResolved8(guest_range_6, 21u, (r30 + 21));
    MemoryInline::WriteResolved8(guest_range_19, 15u, (r1 + 191), static_cast<uint8_t>(r8));
    r8 = MemoryInline::ReadResolved8(guest_range_6, 22u, (r30 + 22));
    MemoryInline::WriteResolved8(guest_range_19, 16u, (r1 + 192), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_6, 23u, (r30 + 23));
    r6 = MemoryInline::ReadResolved8(guest_range_6, 24u, (r30 + 24));
    r0 = MemoryInline::ReadResolved8(guest_range_6, 25u, (r30 + 25));
    MemoryInline::WriteResolved8(guest_range_19, 0u, (r1 + 176), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_19, 17u, (r1 + 193), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_19, 18u, (r1 + 194), static_cast<uint8_t>(r28));
    MemoryInline::WriteResolved8(guest_range_19, 19u, (r1 + 195), static_cast<uint8_t>(r12));
    MemoryInline::WriteResolved8(guest_range_19, 20u, (r1 + 196), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_19, 21u, (r1 + 197), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_19, 22u, (r1 + 198), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_19, 23u, (r1 + 199), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_19, 24u, (r1 + 200), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_19, 25u, (r1 + 201), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_19, 26u, (r1 + 202), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x804E9C20u>(ctx);
    r3 = ctx->gpr[3];
    r3 = 2;
    ctx->lr = 0x804EAAE0u;
    if constexpr (KnownRegArgsCpuCall<0x804E9840u>(&func_804E9840)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_804E9840_B55C = func_804E9840_ra608_0_18_0(ctx, r3, r9, r10);
        r3 = static_cast<uint32_t>(regargs_result_804E9840_B55C);
        r4 = static_cast<uint32_t>(regargs_result_804E9840_B55C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        InvokeDirectCpu<0x804E9840u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
    }
    goto loc_804EB0D8;
}

loc_804EAAE4:
{
    r30 = (r3 + 1252);
    r31 = 64;
    guest_range_7 = MemoryInline::ResolveRangeHost(r30, 0, 26u, true, false);
    r29 = MemoryInline::ReadResolved8(guest_range_7, 0u, r30);
    r4 = (r1 + 148);
    r28 = MemoryInline::ReadResolved8(guest_range_7, 1u, (r30 + 1));
    r3 = 224;
    r12 = MemoryInline::ReadResolved8(guest_range_7, 2u, (r30 + 2));
    r5 = 27;
    r11 = MemoryInline::ReadResolved8(guest_range_7, 3u, (r30 + 3));
    r10 = MemoryInline::ReadResolved8(guest_range_7, 4u, (r30 + 4));
    r9 = MemoryInline::ReadResolved8(guest_range_7, 5u, (r30 + 5));
    r8 = MemoryInline::ReadResolved8(guest_range_7, 6u, (r30 + 6));
    r7 = MemoryInline::ReadResolved8(guest_range_7, 7u, (r30 + 7));
    guest_range_20 = MemoryInline::ResolveRangeHost((r1 + 148), 0, 27u, false, true);
    MemoryInline::WriteResolved8(guest_range_20, 1u, (r1 + 149), static_cast<uint8_t>(r29));
    r29 = MemoryInline::ReadResolved8(guest_range_7, 8u, (r30 + 8));
    MemoryInline::WriteResolved8(guest_range_20, 2u, (r1 + 150), static_cast<uint8_t>(r28));
    r28 = MemoryInline::ReadResolved8(guest_range_7, 9u, (r30 + 9));
    MemoryInline::WriteResolved8(guest_range_20, 3u, (r1 + 151), static_cast<uint8_t>(r12));
    r12 = MemoryInline::ReadResolved8(guest_range_7, 10u, (r30 + 10));
    MemoryInline::WriteResolved8(guest_range_20, 4u, (r1 + 152), static_cast<uint8_t>(r11));
    r11 = MemoryInline::ReadResolved8(guest_range_7, 11u, (r30 + 11));
    MemoryInline::WriteResolved8(guest_range_20, 5u, (r1 + 153), static_cast<uint8_t>(r10));
    r10 = MemoryInline::ReadResolved8(guest_range_7, 12u, (r30 + 12));
    MemoryInline::WriteResolved8(guest_range_20, 6u, (r1 + 154), static_cast<uint8_t>(r9));
    r9 = MemoryInline::ReadResolved8(guest_range_7, 13u, (r30 + 13));
    MemoryInline::WriteResolved8(guest_range_20, 7u, (r1 + 155), static_cast<uint8_t>(r8));
    r8 = MemoryInline::ReadResolved8(guest_range_7, 14u, (r30 + 14));
    MemoryInline::WriteResolved8(guest_range_20, 8u, (r1 + 156), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_7, 15u, (r30 + 15));
    MemoryInline::WriteResolved8(guest_range_20, 9u, (r1 + 157), static_cast<uint8_t>(r29));
    r29 = MemoryInline::ReadResolved8(guest_range_7, 16u, (r30 + 16));
    MemoryInline::WriteResolved8(guest_range_20, 10u, (r1 + 158), static_cast<uint8_t>(r28));
    r28 = MemoryInline::ReadResolved8(guest_range_7, 17u, (r30 + 17));
    MemoryInline::WriteResolved8(guest_range_20, 11u, (r1 + 159), static_cast<uint8_t>(r12));
    r12 = MemoryInline::ReadResolved8(guest_range_7, 18u, (r30 + 18));
    MemoryInline::WriteResolved8(guest_range_20, 12u, (r1 + 160), static_cast<uint8_t>(r11));
    r11 = MemoryInline::ReadResolved8(guest_range_7, 19u, (r30 + 19));
    MemoryInline::WriteResolved8(guest_range_20, 13u, (r1 + 161), static_cast<uint8_t>(r10));
    r10 = MemoryInline::ReadResolved8(guest_range_7, 20u, (r30 + 20));
    MemoryInline::WriteResolved8(guest_range_20, 14u, (r1 + 162), static_cast<uint8_t>(r9));
    r9 = MemoryInline::ReadResolved8(guest_range_7, 21u, (r30 + 21));
    MemoryInline::WriteResolved8(guest_range_20, 15u, (r1 + 163), static_cast<uint8_t>(r8));
    r8 = MemoryInline::ReadResolved8(guest_range_7, 22u, (r30 + 22));
    MemoryInline::WriteResolved8(guest_range_20, 16u, (r1 + 164), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_7, 23u, (r30 + 23));
    r6 = MemoryInline::ReadResolved8(guest_range_7, 24u, (r30 + 24));
    r0 = MemoryInline::ReadResolved8(guest_range_7, 25u, (r30 + 25));
    MemoryInline::WriteResolved8(guest_range_20, 0u, (r1 + 148), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_20, 17u, (r1 + 165), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_20, 18u, (r1 + 166), static_cast<uint8_t>(r28));
    MemoryInline::WriteResolved8(guest_range_20, 19u, (r1 + 167), static_cast<uint8_t>(r12));
    MemoryInline::WriteResolved8(guest_range_20, 20u, (r1 + 168), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_20, 21u, (r1 + 169), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_20, 22u, (r1 + 170), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_20, 23u, (r1 + 171), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_20, 24u, (r1 + 172), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_20, 25u, (r1 + 173), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_20, 26u, (r1 + 174), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x804E9C20u>(ctx);
    r3 = ctx->gpr[3];
    r3 = 2;
    ctx->lr = 0x804EABD8u;
    if constexpr (KnownRegArgsCpuCall<0x804E9840u>(&func_804E9840)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_804E9840_CD7B = func_804E9840_ra608_0_18_0(ctx, r3, r9, r10);
        r3 = static_cast<uint32_t>(regargs_result_804E9840_CD7B);
        r4 = static_cast<uint32_t>(regargs_result_804E9840_CD7B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        InvokeDirectCpu<0x804E9840u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
    }
    goto loc_804EB0D8;
}

loc_804EABDC:
{
    r0 = MemoryInline::FlatRead32((r13 + -19600));
}

loc_804EABE4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804EAC04;
    }
}

loc_804EABE8:
{
}

loc_804EABEC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_804EACFC;
    }
}

loc_804EABF0:
{
}

loc_804EABF4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_804EADF4;
    }
}

loc_804EABF8:
{
}

loc_804EABFC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(5))) {
        goto loc_804EAEEC;
    }
}

loc_804EAC00:
{
    goto loc_804EB0D8;
}

loc_804EAC04:
{
    r30 = (r3 + 1112);
    r31 = 64;
    guest_range_8 = MemoryInline::ResolveRangeHost(r30, 0, 26u, true, false);
    r29 = MemoryInline::ReadResolved8(guest_range_8, 0u, r30);
    r4 = (r1 + 120);
    r28 = MemoryInline::ReadResolved8(guest_range_8, 1u, (r30 + 1));
    r3 = 224;
    r12 = MemoryInline::ReadResolved8(guest_range_8, 2u, (r30 + 2));
    r5 = 27;
    r11 = MemoryInline::ReadResolved8(guest_range_8, 3u, (r30 + 3));
    r10 = MemoryInline::ReadResolved8(guest_range_8, 4u, (r30 + 4));
    r9 = MemoryInline::ReadResolved8(guest_range_8, 5u, (r30 + 5));
    r8 = MemoryInline::ReadResolved8(guest_range_8, 6u, (r30 + 6));
    r7 = MemoryInline::ReadResolved8(guest_range_8, 7u, (r30 + 7));
    guest_range_21 = MemoryInline::ResolveRangeHost((r1 + 120), 0, 27u, false, true);
    MemoryInline::WriteResolved8(guest_range_21, 1u, (r1 + 121), static_cast<uint8_t>(r29));
    r29 = MemoryInline::ReadResolved8(guest_range_8, 8u, (r30 + 8));
    MemoryInline::WriteResolved8(guest_range_21, 2u, (r1 + 122), static_cast<uint8_t>(r28));
    r28 = MemoryInline::ReadResolved8(guest_range_8, 9u, (r30 + 9));
    MemoryInline::WriteResolved8(guest_range_21, 3u, (r1 + 123), static_cast<uint8_t>(r12));
    r12 = MemoryInline::ReadResolved8(guest_range_8, 10u, (r30 + 10));
    MemoryInline::WriteResolved8(guest_range_21, 4u, (r1 + 124), static_cast<uint8_t>(r11));
    r11 = MemoryInline::ReadResolved8(guest_range_8, 11u, (r30 + 11));
    MemoryInline::WriteResolved8(guest_range_21, 5u, (r1 + 125), static_cast<uint8_t>(r10));
    r10 = MemoryInline::ReadResolved8(guest_range_8, 12u, (r30 + 12));
    MemoryInline::WriteResolved8(guest_range_21, 6u, (r1 + 126), static_cast<uint8_t>(r9));
    r9 = MemoryInline::ReadResolved8(guest_range_8, 13u, (r30 + 13));
    MemoryInline::WriteResolved8(guest_range_21, 7u, (r1 + 127), static_cast<uint8_t>(r8));
    r8 = MemoryInline::ReadResolved8(guest_range_8, 14u, (r30 + 14));
    MemoryInline::WriteResolved8(guest_range_21, 8u, (r1 + 128), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_8, 15u, (r30 + 15));
    MemoryInline::WriteResolved8(guest_range_21, 9u, (r1 + 129), static_cast<uint8_t>(r29));
    r29 = MemoryInline::ReadResolved8(guest_range_8, 16u, (r30 + 16));
    MemoryInline::WriteResolved8(guest_range_21, 10u, (r1 + 130), static_cast<uint8_t>(r28));
    r28 = MemoryInline::ReadResolved8(guest_range_8, 17u, (r30 + 17));
    MemoryInline::WriteResolved8(guest_range_21, 11u, (r1 + 131), static_cast<uint8_t>(r12));
    r12 = MemoryInline::ReadResolved8(guest_range_8, 18u, (r30 + 18));
    MemoryInline::WriteResolved8(guest_range_21, 12u, (r1 + 132), static_cast<uint8_t>(r11));
    r11 = MemoryInline::ReadResolved8(guest_range_8, 19u, (r30 + 19));
    MemoryInline::WriteResolved8(guest_range_21, 13u, (r1 + 133), static_cast<uint8_t>(r10));
    r10 = MemoryInline::ReadResolved8(guest_range_8, 20u, (r30 + 20));
    MemoryInline::WriteResolved8(guest_range_21, 14u, (r1 + 134), static_cast<uint8_t>(r9));
    r9 = MemoryInline::ReadResolved8(guest_range_8, 21u, (r30 + 21));
    MemoryInline::WriteResolved8(guest_range_21, 15u, (r1 + 135), static_cast<uint8_t>(r8));
    r8 = MemoryInline::ReadResolved8(guest_range_8, 22u, (r30 + 22));
    MemoryInline::WriteResolved8(guest_range_21, 16u, (r1 + 136), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_8, 23u, (r30 + 23));
    r6 = MemoryInline::ReadResolved8(guest_range_8, 24u, (r30 + 24));
    r0 = MemoryInline::ReadResolved8(guest_range_8, 25u, (r30 + 25));
    MemoryInline::WriteResolved8(guest_range_21, 0u, (r1 + 120), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_21, 17u, (r1 + 137), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_21, 18u, (r1 + 138), static_cast<uint8_t>(r28));
    MemoryInline::WriteResolved8(guest_range_21, 19u, (r1 + 139), static_cast<uint8_t>(r12));
    MemoryInline::WriteResolved8(guest_range_21, 20u, (r1 + 140), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_21, 21u, (r1 + 141), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_21, 22u, (r1 + 142), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_21, 23u, (r1 + 143), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_21, 24u, (r1 + 144), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_21, 25u, (r1 + 145), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_21, 26u, (r1 + 146), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x804E9C20u>(ctx);
    r3 = ctx->gpr[3];
    r3 = 2;
    ctx->lr = 0x804EACF8u;
    if constexpr (KnownRegArgsCpuCall<0x804E9840u>(&func_804E9840)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_804E9840_E84F = func_804E9840_ra608_0_18_0(ctx, r3, r9, r10);
        r3 = static_cast<uint32_t>(regargs_result_804E9840_E84F);
        r4 = static_cast<uint32_t>(regargs_result_804E9840_E84F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        InvokeDirectCpu<0x804E9840u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
    }
    goto loc_804EB0D8;
}

loc_804EACFC:
{
    r30 = (r3 + 1196);
    r31 = 64;
    guest_range_9 = MemoryInline::ResolveRangeHost(r30, 0, 26u, true, false);
    r29 = MemoryInline::ReadResolved8(guest_range_9, 0u, r30);
    r4 = (r1 + 92);
    r28 = MemoryInline::ReadResolved8(guest_range_9, 1u, (r30 + 1));
    r3 = 224;
    r12 = MemoryInline::ReadResolved8(guest_range_9, 2u, (r30 + 2));
    r5 = 27;
    r11 = MemoryInline::ReadResolved8(guest_range_9, 3u, (r30 + 3));
    r10 = MemoryInline::ReadResolved8(guest_range_9, 4u, (r30 + 4));
    r9 = MemoryInline::ReadResolved8(guest_range_9, 5u, (r30 + 5));
    r8 = MemoryInline::ReadResolved8(guest_range_9, 6u, (r30 + 6));
    r7 = MemoryInline::ReadResolved8(guest_range_9, 7u, (r30 + 7));
    guest_range_22 = MemoryInline::ResolveRangeHost((r1 + 92), 0, 27u, false, true);
    MemoryInline::WriteResolved8(guest_range_22, 1u, (r1 + 93), static_cast<uint8_t>(r29));
    r29 = MemoryInline::ReadResolved8(guest_range_9, 8u, (r30 + 8));
    MemoryInline::WriteResolved8(guest_range_22, 2u, (r1 + 94), static_cast<uint8_t>(r28));
    r28 = MemoryInline::ReadResolved8(guest_range_9, 9u, (r30 + 9));
    MemoryInline::WriteResolved8(guest_range_22, 3u, (r1 + 95), static_cast<uint8_t>(r12));
    r12 = MemoryInline::ReadResolved8(guest_range_9, 10u, (r30 + 10));
    MemoryInline::WriteResolved8(guest_range_22, 4u, (r1 + 96), static_cast<uint8_t>(r11));
    r11 = MemoryInline::ReadResolved8(guest_range_9, 11u, (r30 + 11));
    MemoryInline::WriteResolved8(guest_range_22, 5u, (r1 + 97), static_cast<uint8_t>(r10));
    r10 = MemoryInline::ReadResolved8(guest_range_9, 12u, (r30 + 12));
    MemoryInline::WriteResolved8(guest_range_22, 6u, (r1 + 98), static_cast<uint8_t>(r9));
    r9 = MemoryInline::ReadResolved8(guest_range_9, 13u, (r30 + 13));
    MemoryInline::WriteResolved8(guest_range_22, 7u, (r1 + 99), static_cast<uint8_t>(r8));
    r8 = MemoryInline::ReadResolved8(guest_range_9, 14u, (r30 + 14));
    MemoryInline::WriteResolved8(guest_range_22, 8u, (r1 + 100), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_9, 15u, (r30 + 15));
    MemoryInline::WriteResolved8(guest_range_22, 9u, (r1 + 101), static_cast<uint8_t>(r29));
    r29 = MemoryInline::ReadResolved8(guest_range_9, 16u, (r30 + 16));
    MemoryInline::WriteResolved8(guest_range_22, 10u, (r1 + 102), static_cast<uint8_t>(r28));
    r28 = MemoryInline::ReadResolved8(guest_range_9, 17u, (r30 + 17));
    MemoryInline::WriteResolved8(guest_range_22, 11u, (r1 + 103), static_cast<uint8_t>(r12));
    r12 = MemoryInline::ReadResolved8(guest_range_9, 18u, (r30 + 18));
    MemoryInline::WriteResolved8(guest_range_22, 12u, (r1 + 104), static_cast<uint8_t>(r11));
    r11 = MemoryInline::ReadResolved8(guest_range_9, 19u, (r30 + 19));
    MemoryInline::WriteResolved8(guest_range_22, 13u, (r1 + 105), static_cast<uint8_t>(r10));
    r10 = MemoryInline::ReadResolved8(guest_range_9, 20u, (r30 + 20));
    MemoryInline::WriteResolved8(guest_range_22, 14u, (r1 + 106), static_cast<uint8_t>(r9));
    r9 = MemoryInline::ReadResolved8(guest_range_9, 21u, (r30 + 21));
    MemoryInline::WriteResolved8(guest_range_22, 15u, (r1 + 107), static_cast<uint8_t>(r8));
    r8 = MemoryInline::ReadResolved8(guest_range_9, 22u, (r30 + 22));
    MemoryInline::WriteResolved8(guest_range_22, 16u, (r1 + 108), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_9, 23u, (r30 + 23));
    r6 = MemoryInline::ReadResolved8(guest_range_9, 24u, (r30 + 24));
    r0 = MemoryInline::ReadResolved8(guest_range_9, 25u, (r30 + 25));
    MemoryInline::WriteResolved8(guest_range_22, 0u, (r1 + 92), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_22, 17u, (r1 + 109), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_22, 18u, (r1 + 110), static_cast<uint8_t>(r28));
    MemoryInline::WriteResolved8(guest_range_22, 19u, (r1 + 111), static_cast<uint8_t>(r12));
    MemoryInline::WriteResolved8(guest_range_22, 20u, (r1 + 112), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_22, 21u, (r1 + 113), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_22, 22u, (r1 + 114), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_22, 23u, (r1 + 115), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_22, 24u, (r1 + 116), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_22, 25u, (r1 + 117), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_22, 26u, (r1 + 118), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x804E9C20u>(ctx);
    r3 = ctx->gpr[3];
    r3 = 2;
    ctx->lr = 0x804EADF0u;
    if constexpr (KnownRegArgsCpuCall<0x804E9840u>(&func_804E9840)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_804E9840_10064 = func_804E9840_ra608_0_18_0(ctx, r3, r9, r10);
        r3 = static_cast<uint32_t>(regargs_result_804E9840_10064);
        r4 = static_cast<uint32_t>(regargs_result_804E9840_10064 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        InvokeDirectCpu<0x804E9840u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
    }
    goto loc_804EB0D8;
}

loc_804EADF4:
{
    r30 = (r3 + 1364);
    r31 = 64;
    guest_range_10 = MemoryInline::ResolveRangeHost(r30, 0, 26u, true, false);
    r29 = MemoryInline::ReadResolved8(guest_range_10, 0u, r30);
    r4 = (r1 + 64);
    r28 = MemoryInline::ReadResolved8(guest_range_10, 1u, (r30 + 1));
    r3 = 224;
    r12 = MemoryInline::ReadResolved8(guest_range_10, 2u, (r30 + 2));
    r5 = 27;
    r11 = MemoryInline::ReadResolved8(guest_range_10, 3u, (r30 + 3));
    r10 = MemoryInline::ReadResolved8(guest_range_10, 4u, (r30 + 4));
    r9 = MemoryInline::ReadResolved8(guest_range_10, 5u, (r30 + 5));
    r8 = MemoryInline::ReadResolved8(guest_range_10, 6u, (r30 + 6));
    r7 = MemoryInline::ReadResolved8(guest_range_10, 7u, (r30 + 7));
    guest_range_23 = MemoryInline::ResolveRangeHost((r1 + 64), 0, 27u, false, true);
    MemoryInline::WriteResolved8(guest_range_23, 1u, (r1 + 65), static_cast<uint8_t>(r29));
    r29 = MemoryInline::ReadResolved8(guest_range_10, 8u, (r30 + 8));
    MemoryInline::WriteResolved8(guest_range_23, 2u, (r1 + 66), static_cast<uint8_t>(r28));
    r28 = MemoryInline::ReadResolved8(guest_range_10, 9u, (r30 + 9));
    MemoryInline::WriteResolved8(guest_range_23, 3u, (r1 + 67), static_cast<uint8_t>(r12));
    r12 = MemoryInline::ReadResolved8(guest_range_10, 10u, (r30 + 10));
    MemoryInline::WriteResolved8(guest_range_23, 4u, (r1 + 68), static_cast<uint8_t>(r11));
    r11 = MemoryInline::ReadResolved8(guest_range_10, 11u, (r30 + 11));
    MemoryInline::WriteResolved8(guest_range_23, 5u, (r1 + 69), static_cast<uint8_t>(r10));
    r10 = MemoryInline::ReadResolved8(guest_range_10, 12u, (r30 + 12));
    MemoryInline::WriteResolved8(guest_range_23, 6u, (r1 + 70), static_cast<uint8_t>(r9));
    r9 = MemoryInline::ReadResolved8(guest_range_10, 13u, (r30 + 13));
    MemoryInline::WriteResolved8(guest_range_23, 7u, (r1 + 71), static_cast<uint8_t>(r8));
    r8 = MemoryInline::ReadResolved8(guest_range_10, 14u, (r30 + 14));
    MemoryInline::WriteResolved8(guest_range_23, 8u, (r1 + 72), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_10, 15u, (r30 + 15));
    MemoryInline::WriteResolved8(guest_range_23, 9u, (r1 + 73), static_cast<uint8_t>(r29));
    r29 = MemoryInline::ReadResolved8(guest_range_10, 16u, (r30 + 16));
    MemoryInline::WriteResolved8(guest_range_23, 10u, (r1 + 74), static_cast<uint8_t>(r28));
    r28 = MemoryInline::ReadResolved8(guest_range_10, 17u, (r30 + 17));
    MemoryInline::WriteResolved8(guest_range_23, 11u, (r1 + 75), static_cast<uint8_t>(r12));
    r12 = MemoryInline::ReadResolved8(guest_range_10, 18u, (r30 + 18));
    MemoryInline::WriteResolved8(guest_range_23, 12u, (r1 + 76), static_cast<uint8_t>(r11));
    r11 = MemoryInline::ReadResolved8(guest_range_10, 19u, (r30 + 19));
    MemoryInline::WriteResolved8(guest_range_23, 13u, (r1 + 77), static_cast<uint8_t>(r10));
    r10 = MemoryInline::ReadResolved8(guest_range_10, 20u, (r30 + 20));
    MemoryInline::WriteResolved8(guest_range_23, 14u, (r1 + 78), static_cast<uint8_t>(r9));
    r9 = MemoryInline::ReadResolved8(guest_range_10, 21u, (r30 + 21));
    MemoryInline::WriteResolved8(guest_range_23, 15u, (r1 + 79), static_cast<uint8_t>(r8));
    r8 = MemoryInline::ReadResolved8(guest_range_10, 22u, (r30 + 22));
    MemoryInline::WriteResolved8(guest_range_23, 16u, (r1 + 80), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_10, 23u, (r30 + 23));
    r6 = MemoryInline::ReadResolved8(guest_range_10, 24u, (r30 + 24));
    r0 = MemoryInline::ReadResolved8(guest_range_10, 25u, (r30 + 25));
    MemoryInline::WriteResolved8(guest_range_23, 0u, (r1 + 64), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_23, 17u, (r1 + 81), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_23, 18u, (r1 + 82), static_cast<uint8_t>(r28));
    MemoryInline::WriteResolved8(guest_range_23, 19u, (r1 + 83), static_cast<uint8_t>(r12));
    MemoryInline::WriteResolved8(guest_range_23, 20u, (r1 + 84), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_23, 21u, (r1 + 85), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_23, 22u, (r1 + 86), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_23, 23u, (r1 + 87), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_23, 24u, (r1 + 88), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_23, 25u, (r1 + 89), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_23, 26u, (r1 + 90), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x804E9C20u>(ctx);
    r3 = ctx->gpr[3];
    r3 = 2;
    ctx->lr = 0x804EAEE8u;
    if constexpr (KnownRegArgsCpuCall<0x804E9840u>(&func_804E9840)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_804E9840_11884 = func_804E9840_ra608_0_18_0(ctx, r3, r9, r10);
        r3 = static_cast<uint32_t>(regargs_result_804E9840_11884);
        r4 = static_cast<uint32_t>(regargs_result_804E9840_11884 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        InvokeDirectCpu<0x804E9840u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
    }
    goto loc_804EB0D8;
}

loc_804EAEEC:
{
    r30 = (r3 + 1280);
    r31 = 64;
    guest_range_11 = MemoryInline::ResolveRangeHost(r30, 0, 26u, true, false);
    r29 = MemoryInline::ReadResolved8(guest_range_11, 0u, r30);
    r4 = (r1 + 36);
    r28 = MemoryInline::ReadResolved8(guest_range_11, 1u, (r30 + 1));
    r3 = 224;
    r12 = MemoryInline::ReadResolved8(guest_range_11, 2u, (r30 + 2));
    r5 = 27;
    r11 = MemoryInline::ReadResolved8(guest_range_11, 3u, (r30 + 3));
    r10 = MemoryInline::ReadResolved8(guest_range_11, 4u, (r30 + 4));
    r9 = MemoryInline::ReadResolved8(guest_range_11, 5u, (r30 + 5));
    r8 = MemoryInline::ReadResolved8(guest_range_11, 6u, (r30 + 6));
    r7 = MemoryInline::ReadResolved8(guest_range_11, 7u, (r30 + 7));
    guest_range_24 = MemoryInline::ResolveRangeHost((r1 + 36), 0, 27u, false, true);
    MemoryInline::WriteResolved8(guest_range_24, 1u, (r1 + 37), static_cast<uint8_t>(r29));
    r29 = MemoryInline::ReadResolved8(guest_range_11, 8u, (r30 + 8));
    MemoryInline::WriteResolved8(guest_range_24, 2u, (r1 + 38), static_cast<uint8_t>(r28));
    r28 = MemoryInline::ReadResolved8(guest_range_11, 9u, (r30 + 9));
    MemoryInline::WriteResolved8(guest_range_24, 3u, (r1 + 39), static_cast<uint8_t>(r12));
    r12 = MemoryInline::ReadResolved8(guest_range_11, 10u, (r30 + 10));
    MemoryInline::WriteResolved8(guest_range_24, 4u, (r1 + 40), static_cast<uint8_t>(r11));
    r11 = MemoryInline::ReadResolved8(guest_range_11, 11u, (r30 + 11));
    MemoryInline::WriteResolved8(guest_range_24, 5u, (r1 + 41), static_cast<uint8_t>(r10));
    r10 = MemoryInline::ReadResolved8(guest_range_11, 12u, (r30 + 12));
    MemoryInline::WriteResolved8(guest_range_24, 6u, (r1 + 42), static_cast<uint8_t>(r9));
    r9 = MemoryInline::ReadResolved8(guest_range_11, 13u, (r30 + 13));
    MemoryInline::WriteResolved8(guest_range_24, 7u, (r1 + 43), static_cast<uint8_t>(r8));
    r8 = MemoryInline::ReadResolved8(guest_range_11, 14u, (r30 + 14));
    MemoryInline::WriteResolved8(guest_range_24, 8u, (r1 + 44), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_11, 15u, (r30 + 15));
    MemoryInline::WriteResolved8(guest_range_24, 9u, (r1 + 45), static_cast<uint8_t>(r29));
    r29 = MemoryInline::ReadResolved8(guest_range_11, 16u, (r30 + 16));
    MemoryInline::WriteResolved8(guest_range_24, 10u, (r1 + 46), static_cast<uint8_t>(r28));
    r28 = MemoryInline::ReadResolved8(guest_range_11, 17u, (r30 + 17));
    MemoryInline::WriteResolved8(guest_range_24, 11u, (r1 + 47), static_cast<uint8_t>(r12));
    r12 = MemoryInline::ReadResolved8(guest_range_11, 18u, (r30 + 18));
    MemoryInline::WriteResolved8(guest_range_24, 12u, (r1 + 48), static_cast<uint8_t>(r11));
    r11 = MemoryInline::ReadResolved8(guest_range_11, 19u, (r30 + 19));
    MemoryInline::WriteResolved8(guest_range_24, 13u, (r1 + 49), static_cast<uint8_t>(r10));
    r10 = MemoryInline::ReadResolved8(guest_range_11, 20u, (r30 + 20));
    MemoryInline::WriteResolved8(guest_range_24, 14u, (r1 + 50), static_cast<uint8_t>(r9));
    r9 = MemoryInline::ReadResolved8(guest_range_11, 21u, (r30 + 21));
    MemoryInline::WriteResolved8(guest_range_24, 15u, (r1 + 51), static_cast<uint8_t>(r8));
    r8 = MemoryInline::ReadResolved8(guest_range_11, 22u, (r30 + 22));
    MemoryInline::WriteResolved8(guest_range_24, 16u, (r1 + 52), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_11, 23u, (r30 + 23));
    r6 = MemoryInline::ReadResolved8(guest_range_11, 24u, (r30 + 24));
    r0 = MemoryInline::ReadResolved8(guest_range_11, 25u, (r30 + 25));
    MemoryInline::WriteResolved8(guest_range_24, 0u, (r1 + 36), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_24, 17u, (r1 + 53), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_24, 18u, (r1 + 54), static_cast<uint8_t>(r28));
    MemoryInline::WriteResolved8(guest_range_24, 19u, (r1 + 55), static_cast<uint8_t>(r12));
    MemoryInline::WriteResolved8(guest_range_24, 20u, (r1 + 56), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_24, 21u, (r1 + 57), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_24, 22u, (r1 + 58), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_24, 23u, (r1 + 59), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_24, 24u, (r1 + 60), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_24, 25u, (r1 + 61), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_24, 26u, (r1 + 62), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x804E9C20u>(ctx);
    r3 = ctx->gpr[3];
    r3 = 2;
    ctx->lr = 0x804EAFE0u;
    if constexpr (KnownRegArgsCpuCall<0x804E9840u>(&func_804E9840)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_804E9840_130A4 = func_804E9840_ra608_0_18_0(ctx, r3, r9, r10);
        r3 = static_cast<uint32_t>(regargs_result_804E9840_130A4);
        r4 = static_cast<uint32_t>(regargs_result_804E9840_130A4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        InvokeDirectCpu<0x804E9840u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
    }
    goto loc_804EB0D8;
}

loc_804EAFE4:
{
    r29 = 0x80760000u;
    r29 = (r29 + -10432);
    guest_range_12 = MemoryInline::ResolveRangeHost(r29, 0, 26u, true, false);
    r30 = MemoryInline::ReadResolved8(guest_range_12, 0u, r29);
    guest_range_25 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 27u, false, true);
    MemoryInline::WriteResolved8(guest_range_25, 1u, (r1 + 9), static_cast<uint8_t>(r30));
    r28 = 64;
    r31 = MemoryInline::ReadResolved8(guest_range_12, 1u, (r29 + 1));
    r4 = (r1 + 8);
    r12 = MemoryInline::ReadResolved8(guest_range_12, 2u, (r29 + 2));
    r3 = 224;
    r11 = MemoryInline::ReadResolved8(guest_range_12, 3u, (r29 + 3));
    r5 = 27;
    r10 = MemoryInline::ReadResolved8(guest_range_12, 4u, (r29 + 4));
    r9 = MemoryInline::ReadResolved8(guest_range_12, 5u, (r29 + 5));
    r8 = MemoryInline::ReadResolved8(guest_range_12, 6u, (r29 + 6));
    r7 = MemoryInline::ReadResolved8(guest_range_12, 7u, (r29 + 7));
    r30 = MemoryInline::ReadResolved8(guest_range_12, 8u, (r29 + 8));
    MemoryInline::WriteResolved8(guest_range_25, 2u, (r1 + 10), static_cast<uint8_t>(r31));
    r31 = MemoryInline::ReadResolved8(guest_range_12, 9u, (r29 + 9));
    MemoryInline::WriteResolved8(guest_range_25, 3u, (r1 + 11), static_cast<uint8_t>(r12));
    r12 = MemoryInline::ReadResolved8(guest_range_12, 10u, (r29 + 10));
    MemoryInline::WriteResolved8(guest_range_25, 4u, (r1 + 12), static_cast<uint8_t>(r11));
    r11 = MemoryInline::ReadResolved8(guest_range_12, 11u, (r29 + 11));
    MemoryInline::WriteResolved8(guest_range_25, 5u, (r1 + 13), static_cast<uint8_t>(r10));
    r10 = MemoryInline::ReadResolved8(guest_range_12, 12u, (r29 + 12));
    MemoryInline::WriteResolved8(guest_range_25, 6u, (r1 + 14), static_cast<uint8_t>(r9));
    r9 = MemoryInline::ReadResolved8(guest_range_12, 13u, (r29 + 13));
    MemoryInline::WriteResolved8(guest_range_25, 7u, (r1 + 15), static_cast<uint8_t>(r8));
    r8 = MemoryInline::ReadResolved8(guest_range_12, 14u, (r29 + 14));
    MemoryInline::WriteResolved8(guest_range_25, 8u, (r1 + 16), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_12, 15u, (r29 + 15));
    MemoryInline::WriteResolved8(guest_range_25, 9u, (r1 + 17), static_cast<uint8_t>(r30));
    r30 = MemoryInline::ReadResolved8(guest_range_12, 16u, (r29 + 16));
    MemoryInline::WriteResolved8(guest_range_25, 10u, (r1 + 18), static_cast<uint8_t>(r31));
    r31 = MemoryInline::ReadResolved8(guest_range_12, 17u, (r29 + 17));
    MemoryInline::WriteResolved8(guest_range_25, 11u, (r1 + 19), static_cast<uint8_t>(r12));
    r12 = MemoryInline::ReadResolved8(guest_range_12, 18u, (r29 + 18));
    MemoryInline::WriteResolved8(guest_range_25, 12u, (r1 + 20), static_cast<uint8_t>(r11));
    r11 = MemoryInline::ReadResolved8(guest_range_12, 19u, (r29 + 19));
    MemoryInline::WriteResolved8(guest_range_25, 13u, (r1 + 21), static_cast<uint8_t>(r10));
    r10 = MemoryInline::ReadResolved8(guest_range_12, 20u, (r29 + 20));
    MemoryInline::WriteResolved8(guest_range_25, 14u, (r1 + 22), static_cast<uint8_t>(r9));
    r9 = MemoryInline::ReadResolved8(guest_range_12, 21u, (r29 + 21));
    MemoryInline::WriteResolved8(guest_range_25, 15u, (r1 + 23), static_cast<uint8_t>(r8));
    r8 = MemoryInline::ReadResolved8(guest_range_12, 22u, (r29 + 22));
    MemoryInline::WriteResolved8(guest_range_25, 16u, (r1 + 24), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_12, 23u, (r29 + 23));
    r6 = MemoryInline::ReadResolved8(guest_range_12, 24u, (r29 + 24));
    r0 = MemoryInline::ReadResolved8(guest_range_12, 25u, (r29 + 25));
    MemoryInline::WriteResolved8(guest_range_25, 0u, (r1 + 8), static_cast<uint8_t>(r28));
    MemoryInline::WriteResolved8(guest_range_25, 17u, (r1 + 25), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_25, 18u, (r1 + 26), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_25, 19u, (r1 + 27), static_cast<uint8_t>(r12));
    MemoryInline::WriteResolved8(guest_range_25, 20u, (r1 + 28), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_25, 21u, (r1 + 29), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_25, 22u, (r1 + 30), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_25, 23u, (r1 + 31), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_25, 24u, (r1 + 32), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_25, 25u, (r1 + 33), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_25, 26u, (r1 + 34), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x804E9C20u>(ctx);
    r3 = ctx->gpr[3];
    r3 = 2;
    ctx->lr = 0x804EB0D8u;
    if constexpr (KnownRegArgsCpuCall<0x804E9840u>(&func_804E9840)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_804E9840_148DB = func_804E9840_ra608_0_18_0(ctx, r3, r9, r10);
        r3 = static_cast<uint32_t>(regargs_result_804E9840_148DB);
        r4 = static_cast<uint32_t>(regargs_result_804E9840_148DB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        InvokeDirectCpu<0x804E9840u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
    }
}

loc_804EB0D8:
{
    r0 = MemoryInline::FlatRead32((r1 + 404));
    ctx->lr = r0;
    r1 = (r1 + 400);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804EA380(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804EA380_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFB gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804EA380 func_804EA380 preserves=true fpr_mask=0x00000000
