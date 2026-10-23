#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800439CC(CpuContext* ctx);
extern "C" uint64_t func_800439CC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80043A58(CpuContext* ctx);
extern "C" uint64_t func_80043A58_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80043AE4(CpuContext* ctx);
extern "C" uint32_t func_80043AE4_ra8_2_8_0(CpuContext*, uint32_t, double);
extern "C" void func_80043B48(CpuContext* ctx);
extern "C" uint32_t func_80043B48_ra8_2_8_0(CpuContext*, uint32_t, double);
extern "C" void func_80043BAC(CpuContext* ctx);
extern "C" uint32_t func_80043BAC_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_8026A79C(CpuContext* ctx);
extern "C" uint64_t func_8026A79C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8026A8C8(CpuContext* ctx);
extern "C" uint64_t func_8026A8C8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8026A9B8(CpuContext* ctx);
extern "C" uint64_t func_8026A9B8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8026AC14(CpuContext* ctx);
extern "C" uint64_t func_8026AC14_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8026AC90(CpuContext* ctx);
extern "C" uint64_t func_8026AC90_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8026AEC0(CpuContext* ctx);
extern "C" uint64_t func_8026AEC0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8026BFFC(CpuContext* ctx);
extern "C" uint64_t func_8026BFFC_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_8026CCE0(CpuContext* ctx);
extern "C" uint64_t func_8026CCE0_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_8026F96C(CpuContext* ctx);
extern "C" uint64_t func_8026F96C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8026FA08(CpuContext* ctx);
extern "C" uint64_t func_8026FA08_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8026FCA4(CpuContext* ctx);
extern "C" uint64_t func_8026FCA4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8028BDB8(CpuContext* ctx);
extern "C" uint32_t func_8028BDB8_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_802A0368(CpuContext* ctx);
extern "C" uint64_t func_802A0368_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_802BE09C(CpuContext* ctx);
extern "C" uint32_t func_802BE09C_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_802BE450(CpuContext* ctx);
extern "C" uint32_t func_802BE450_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_803BED2C(CpuContext* ctx);
extern "C" uint64_t func_803BED2C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8026AF6C_ra38_a_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f3)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
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
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    ctx->fpr[3].d = arg_f3;
    uint32_t cr = ctx->cr;

    goto loc_8026AF6C;

loc_8026AF6C:
{
    MemoryInline::FlatWriteRam32((r1 + -240), r1);
    r1 = (r1 + -240);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 244), r0);
    r11 = (r1 + 240);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r28 = r3;
    r29 = r4;
    r31 = (r3 + 184);
    r30 = (r1 + 24);
    r27 = (r1 + 216);
}

loc_8026AF94:
{
    r3 = r30;
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r30 = (r30 + 12);
}

loc_8026AFA4:
{
    if ((static_cast<uint32_t>(r30) < static_cast<uint32_t>(r27))) {
        goto loc_8026AF94;
    }
}

loc_8026AFA8:
{
    r3 = (r1 + 8);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = 0;
    // inline leaf 0x800CFAF4 (16 guest instruction(s))
}

loc_inl3_0x800CFAF4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl3_0x800CFB04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl3_0x800CFB10;
    }
}

loc_inl3_0x800CFB08:
{
    r3 = 0;
    goto loc_inl3_cont_800CFAF4;
}

loc_inl3_0x800CFB10:
{
    r0 = (r3 & 255);
}

loc_inl3_0x800CFB18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl3_0x800CFB24;
    }
}

loc_inl3_0x800CFB1C:
{
    r3 = 0;
    goto loc_inl3_cont_800CFAF4;
}

loc_inl3_0x800CFB24:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl3_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    r27 = r3;
    r30 = 0;
    MemoryInline::FlatWrite32((r31 + 36), r30);
    MemoryInline::FlatWrite8((r31 + 112), static_cast<uint8_t>(r30));
    r3 = MemoryInline::FlatRead8((r28 + 8));
    r4 = 6;
    r5 = 0;
    ctx->lr = 0x8026AFD8u;
    if constexpr (KnownRegArgsCpuCall<0x803BED2Cu>(&func_803BED2C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_803BED2C_1979 = func_803BED2C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803BED2C_1979);
        r4 = static_cast<uint32_t>(regargs_result_803BED2C_1979 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x803BED2Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
}

loc_8026AFDC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8026AFE8;
    }
}

loc_8026AFE0:
{
    MemoryInline::FlatWrite8((r31 + 113), static_cast<uint8_t>(r30));
    goto loc_8026AFF0;
}

loc_8026AFE8:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 113), static_cast<uint8_t>(r0));
}

loc_8026AFF0:
{
    r0 = 0;
    guest_range_2 = MemoryInline::ResolveRangeHost((r31 + 40), 0, 85u, false, true);
    MemoryInline::WriteResolved8(guest_range_2, 84u, (r31 + 124), static_cast<uint8_t>(r0));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 0u, (r31 + 40), r0);
        MemoryInline::WriteResolved32(guest_range_2, 4u, (r31 + 44), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 8u, (r31 + 48), r0);
        MemoryInline::WriteResolved32(guest_range_2, 12u, (r31 + 52), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 16u, (r31 + 56), r0);
        MemoryInline::WriteResolved32(guest_range_2, 20u, (r31 + 60), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 24u, (r31 + 64), r0);
        MemoryInline::WriteResolved32(guest_range_2, 28u, (r31 + 68), r0);
    }
    r3 = MemoryInline::FlatRead16((r28 + 850));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r3 = MH3_TickLoad(r3, 2150019096);
}

loc_8026B020:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_8026B02C;
    }
}

loc_8026B024:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r28 + 850), static_cast<uint16_t>(r0));
}

loc_8026B02C:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r28 + 1135), static_cast<uint8_t>(r0));
    // inline leaf 0x800CF26C (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 36));
    // end of inlined leaf 0x800CF26C
    r0 = (r3 & 255);
}

loc_8026B040:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8026B0C0;
    }
}

loc_8026B044:
{
}

loc_8026B048:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_8026B0C0;
    }
}

loc_8026B04C:
{
    ctx->lr = 0x8026B050u;
    if constexpr (KnownRegArgsCpuCall<0x8028BDB8u>(&func_8028BDB8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        const auto regargs_result_8028BDB8_281F = func_8028BDB8_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8028BDB8_281F;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x8028BDB8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_8026B054:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8026B0B8;
    }
}

loc_8026B058:
{
    // inline leaf 0x800CF27C (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 37));
    // end of inlined leaf 0x800CF27C
    r0 = (r3 & 255);
}

loc_8026B064:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_8026B080;
    }
}

loc_8026B068:
{
    r0 = MemoryInline::FlatRead8((r28 + 8));
    r0 = (r0 & 1);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & -2);
    r3 = (r27 + r0);
    r3 = MemoryInline::FlatRead16((r3 + 4));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    goto loc_8026B084;
}

loc_8026B080:
{
    r3 = MemoryInline::FlatRead16((r27 + 4));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_8026B084:
{
    r0 = MemoryInline::FlatRead8((r27 + 1));
}

loc_8026B08C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8026B0C0;
    }
}

loc_8026B090:
{
}

loc_8026B094:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(0))) {
        goto loc_8026B0A4;
    }
}

loc_8026B098:
{
    r0 = MemoryInline::FlatRead8((r28 + 1107));
}

loc_8026B0A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026B0AC;
    }
}

loc_8026B0A4:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r28 + 1135), static_cast<uint8_t>(r0));
}

loc_8026B0AC:
{
    r0 = (r3 & 255);
    MemoryInline::FlatWrite8((r28 + 1107), static_cast<uint8_t>(r0));
    goto loc_8026B0C0;
}

loc_8026B0B8:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r28 + 1135), static_cast<uint8_t>(r0));
}

loc_8026B0C0:
{
    r0 = MemoryInline::FlatRead16((r28 + 850));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8026B0C8:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_8026B108;
    }
}

loc_8026B0CC:
{
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r0 = MemoryInline::FlatRead8((r3 + 42));
}

loc_8026B0DC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8026B108;
    }
}

loc_8026B0E0:
{
    r0 = MemoryInline::FlatRead8((r28 + 1135));
}

loc_8026B0E8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_8026B108;
    }
}

loc_8026B0EC:
{
    // inline leaf 0x800CF26C (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 36));
    // end of inlined leaf 0x800CF26C
    r0 = (r3 & 255);
}

loc_8026B0F8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8026B148;
    }
}

loc_8026B0FC:
{
    ctx->lr = 0x8026B100u;
    if constexpr (KnownRegArgsCpuCall<0x8028BDB8u>(&func_8028BDB8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        const auto regargs_result_8028BDB8_36A4 = func_8028BDB8_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8028BDB8_36A4;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x8028BDB8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_8026B104:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8026B148;
    }
}

loc_8026B108:
{
    r27 = MemoryInline::FlatRead8((r31 + 110));
    r27 = (static_cast<int32_t>(static_cast<int8_t>(r27)));
    r30 = MemoryInline::FlatRead8((r31 + 102));
    r3 = r31;
    r4 = 0;
    r5 = 132;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWrite8((r31 + 110), static_cast<uint8_t>(r27));
    MemoryInline::FlatWrite8((r31 + 102), static_cast<uint8_t>(r30));
    r0 = MemoryInline::FlatRead16((r28 + 850));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8026B134:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_8026B980;
    }
}

loc_8026B138:
{
    r3 = r28;
    r4 = (r29 & 255);
    ctx->lr = 0x8026B144u;
    if constexpr (KnownRegArgsCpuCall<0x8026AEC0u>(&func_8026AEC0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8026AEC0_3D51 = func_8026AEC0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026AEC0_3D51);
        r4 = static_cast<uint32_t>(regargs_result_8026AEC0_3D51 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x8026AEC0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    goto loc_8026B980;
}

loc_8026B148:
{
    r3 = MemoryInline::FlatRead8((r28 + 8));
    r4 = 7;
    r5 = 1;
    ctx->lr = 0x8026B158u;
    if constexpr (KnownRegArgsCpuCall<0x803BED2Cu>(&func_803BED2C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_803BED2C_4199 = func_803BED2C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803BED2C_4199);
        r4 = static_cast<uint32_t>(regargs_result_803BED2C_4199 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x803BED2Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
}

loc_8026B15C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8026B16C;
    }
}

loc_8026B160:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r28 + 1477), static_cast<uint8_t>(r0));
    goto loc_8026B174;
}

loc_8026B16C:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r28 + 1477), static_cast<uint8_t>(r0));
}

loc_8026B174:
{
    r3 = r28;
    r4 = (r29 & 255);
    ctx->lr = 0x8026B180u;
    if constexpr (KnownRegArgsCpuCall<0x8026AEC0u>(&func_8026AEC0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8026AEC0_46DD = func_8026AEC0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026AEC0_46DD);
        r4 = static_cast<uint32_t>(regargs_result_8026AEC0_46DD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x8026AEC0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r3 = (r29 & 255);
    if constexpr (KnownRegArgsCpuCall<0x80043BACu>(&func_80043BAC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        const auto regargs_result_80043BAC_4AC4 = func_80043BAC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80043BAC_4AC4;
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80043BACu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r0 = (r3 & 255);
}

loc_8026B190:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8026B4FC;
    }
}

loc_8026B194:
{
    r5 = (r29 & 255);
    r4 = (r5 * 848);
    r3 = 0x80660000u;
    r0 = (r3 + -18480);
    r30 = (r0 + r4);
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 112), static_cast<uint8_t>(r0));
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 252), 0, 36u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 10u, (r30 + 262));
    MemoryInline::FlatWrite16((r31 + 18), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 8u, (r30 + 260));
    MemoryInline::FlatWrite16((r31 + 16), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r31 + 20));
    MemoryInline::FlatWrite16((r31 + 22), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 12u, (r30 + 264));
    MemoryInline::FlatWrite16((r31 + 20), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 16u, (r30 + 268));
    MemoryInline::FlatWrite16((r31 + 24), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 18u, (r30 + 270));
    MemoryInline::FlatWrite16((r31 + 26), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 28u, (r30 + 280));
    MemoryInline::FlatWrite16((r31 + 28), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 30u, (r30 + 282));
    MemoryInline::FlatWrite16((r31 + 30), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 2u, (r30 + 254));
    r0 = (r0 & -32769);
    r7 = (r0 & 65535);
    MemoryInline::FlatWrite16((r31 + 2), static_cast<uint16_t>(r7));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, (r30 + 252));
    r0 = (r0 & -32769);
    r6 = (r0 & 65535);
    MemoryInline::FlatWrite16(r31, static_cast<uint16_t>(r6));
    r0 = MemoryInline::FlatRead16((r31 + 4));
    r0 = (r0 & -32769);
    r4 = (r0 & 65535);
    MemoryInline::FlatWrite16((r31 + 6), static_cast<uint16_t>(r4));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r30 + 256));
    r0 = (r0 & -32769);
    r3 = (r0 & 65535);
    MemoryInline::FlatWrite16((r31 + 4), static_cast<uint16_t>(r3));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 34u, (r30 + 286));
    r0 = (r0 & -32769);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16((r31 + 114), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r31 + 8), static_cast<uint16_t>(r6));
    MemoryInline::FlatWrite16((r31 + 10), static_cast<uint16_t>(r7));
    MemoryInline::FlatWrite16((r31 + 12), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r31 + 14), static_cast<uint16_t>(r4));
    r3 = r28;
    r4 = r31;
    ctx->lr = 0x8026B25Cu;
    if constexpr (KnownRegArgsCpuCall<0x8026A79Cu>(&func_8026A79C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8026A79C_588F = func_8026A79C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026A79C_588F);
        r4 = static_cast<uint32_t>(regargs_result_8026A79C_588F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x8026A79Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r3 = r28;
    r4 = r31;
    r5 = (r29 & 255);
    ctx->lr = 0x8026B26Cu;
    if constexpr (KnownRegArgsCpuCall<0x8026A8C8u>(&func_8026A8C8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8026A8C8_5CB0 = func_8026A8C8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026A8C8_5CB0);
        r4 = static_cast<uint32_t>(regargs_result_8026A8C8_5CB0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x8026A8C8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r3 = r28;
    r4 = r31;
    ctx->lr = 0x8026B278u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x8026AB00u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    r3 = r28;
    r4 = r31;
    ctx->lr = 0x8026B284u;
    if constexpr (KnownRegArgsCpuCall<0x8026AC14u>(&func_8026AC14)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8026AC14_62FB = func_8026AC14_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026AC14_62FB);
        r4 = static_cast<uint32_t>(regargs_result_8026AC14_62FB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x8026AC14u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r3 = r28;
    r4 = r31;
    ctx->lr = 0x8026B290u;
    if constexpr (KnownRegArgsCpuCall<0x8026A9B8u>(&func_8026A9B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8026A9B8_6720 = func_8026A9B8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026A9B8_6720);
        r4 = static_cast<uint32_t>(regargs_result_8026A9B8_6720 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        InvokeDirectCpu<0x8026A9B8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    }
    r3 = r28;
    r4 = 11;
    // inline leaf 0x8026A758 (9 guest instruction(s))
    r5 = MemoryInline::FlatRead32((r3 + 220));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r3 = (r5 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x8026A758
}

loc_8026B2A0:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_8026B394;
    }
}

loc_8026B2A4:
{
    r3 = r28;
    ctx->lr = 0x8026B2ACu;
    if constexpr (KnownRegArgsCpuCall<0x802A0368u>(&func_802A0368)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_802A0368_6DAB = func_802A0368_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802A0368_6DAB);
        r4 = static_cast<uint32_t>(regargs_result_802A0368_6DAB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x802A0368u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_8026B2B0:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_8026B394;
    }
}

loc_8026B2B4:
{
    r3 = (r29 & 255);
    r4 = (r1 + 24);
    r5 = 4;
    ctx->lr = 0x8026B2C4u;
    if constexpr (KnownRegArgsCpuCall<0x800439CCu>(&func_800439CC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_800439CC_71F7 = func_800439CC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800439CC_71F7);
        r4 = static_cast<uint32_t>(regargs_result_800439CC_71F7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        InvokeDirectCpu<0x800439CCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    }
    r3 = (r31 + 84);
    r4 = (r1 + 24);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r29 & 255);
    if constexpr (KnownRegArgsCpuCall<0x80043AE4u>(&func_80043AE4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80043AE4_771E = func_80043AE4_ra8_2_8_0(ctx, r3, f1.d);
        r3 = regargs_result_80043AE4_771E;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x80043AE4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    MemoryInline::FlatWrite32((r31 + 120), r3);
    r3 = (r31 + 84);
    ctx->lr = 0x8026B2E4u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80050F88u>(ctx);
    f1 = ctx->fpr[1];
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14984));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8026B2EC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8026B324;
    }
}

loc_8026B2F4:
{
    r0 = MemoryInline::FlatRead8((r31 + 124));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite8((r31 + 124), static_cast<uint8_t>(r0));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 88));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15008));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8026B30C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8026B31C;
    }
}

loc_8026B310:
{
    r0 = (r0 | 4);
    MemoryInline::FlatWrite8((r31 + 124), static_cast<uint8_t>(r0));
    goto loc_8026B324;
}

loc_8026B31C:
{
    r0 = (r0 | 16);
    MemoryInline::FlatWrite8((r31 + 124), static_cast<uint8_t>(r0));
}

loc_8026B324:
{
    r3 = (r29 & 255);
    r4 = (r1 + 24);
    r5 = 4;
    ctx->lr = 0x8026B334u;
    if constexpr (KnownRegArgsCpuCall<0x80043A58u>(&func_80043A58)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80043A58_806C = func_80043A58_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80043A58_806C);
        r4 = static_cast<uint32_t>(regargs_result_80043A58_806C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        InvokeDirectCpu<0x80043A58u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    }
    r3 = (r31 + 72);
    r4 = (r1 + 24);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r29 & 255);
    if constexpr (KnownRegArgsCpuCall<0x80043B48u>(&func_80043B48)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80043B48_8593 = func_80043B48_ra8_2_8_0(ctx, r3, f1.d);
        r3 = regargs_result_80043B48_8593;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x80043B48u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    MemoryInline::FlatWrite32((r31 + 116), r3);
    r3 = (r31 + 72);
    ctx->lr = 0x8026B354u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80050F88u>(ctx);
    f1 = ctx->fpr[1];
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14980));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8026B35C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8026B394;
    }
}

loc_8026B364:
{
    r0 = MemoryInline::FlatRead8((r31 + 124));
    r0 = (r0 | 2);
    MemoryInline::FlatWrite8((r31 + 124), static_cast<uint8_t>(r0));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 88));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15008));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8026B37C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8026B38C;
    }
}

loc_8026B380:
{
    r0 = (r0 | 8);
    MemoryInline::FlatWrite8((r31 + 124), static_cast<uint8_t>(r0));
    goto loc_8026B394;
}

loc_8026B38C:
{
    r0 = (r0 | 32);
    MemoryInline::FlatWrite8((r31 + 124), static_cast<uint8_t>(r0));
}

loc_8026B394:
{
    r3 = r28;
    r4 = 11;
    // inline leaf 0x8026A758 (9 guest instruction(s))
    r5 = MemoryInline::FlatRead32((r3 + 220));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r3 = (r5 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x8026A758
}

loc_8026B3A4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8026B428;
    }
}

loc_8026B3A8:
{
    r3 = MemoryInline::FlatRead16((r31 + 4));
    r0 = MemoryInline::FlatRead16((r30 + 286));
    r3 = (r3 | r0);
    r0 = (r3 & 1024);
}

loc_8026B3BC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026B3D0;
    }
}

loc_8026B3C0:
{
    r3 = r28;
    r4 = 15;
    // inline leaf 0x8026A73C (7 guest instruction(s))
    r6 = MemoryInline::FlatRead32((r3 + 220));
    r5 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    r0 = (r6 | r0);
    MemoryInline::FlatWrite32((r3 + 220), r0);
    // end of inlined leaf 0x8026A73C
    goto loc_8026B3E8;
}

loc_8026B3D0:
{
    r0 = (r3 & 2048);
}

loc_8026B3D8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026B3E8;
    }
}

loc_8026B3DC:
{
    r3 = r28;
    r4 = 14;
    // inline leaf 0x8026A73C (7 guest instruction(s))
    r6 = MemoryInline::FlatRead32((r3 + 220));
    r5 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    r0 = (r6 | r0);
    MemoryInline::FlatWrite32((r3 + 220), r0);
    // end of inlined leaf 0x8026A73C
}

loc_8026B3E8:
{
    r3 = MemoryInline::FlatRead16((r31 + 4));
    r0 = MemoryInline::FlatRead16((r30 + 286));
    r3 = (r3 | r0);
    r0 = (r3 & 4096);
}

loc_8026B3FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026B410;
    }
}

loc_8026B400:
{
    r3 = r28;
    r4 = 13;
    // inline leaf 0x8026A73C (7 guest instruction(s))
    r6 = MemoryInline::FlatRead32((r3 + 220));
    r5 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    r0 = (r6 | r0);
    MemoryInline::FlatWrite32((r3 + 220), r0);
    // end of inlined leaf 0x8026A73C
    goto loc_8026B428;
}

loc_8026B410:
{
    r0 = (r3 & 8192);
}

loc_8026B418:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026B428;
    }
}

loc_8026B41C:
{
    r3 = r28;
    r4 = 12;
    // inline leaf 0x8026A73C (7 guest instruction(s))
    r6 = MemoryInline::FlatRead32((r3 + 220));
    r5 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    r0 = (r6 | r0);
    MemoryInline::FlatWrite32((r3 + 220), r0);
    // end of inlined leaf 0x8026A73C
}

loc_8026B428:
{
    r3 = r28;
    r4 = 11;
    // inline leaf 0x8026A758 (9 guest instruction(s))
    r5 = MemoryInline::FlatRead32((r3 + 220));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r3 = (r5 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    // end of inlined leaf 0x8026A758
}

loc_8026B438:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8026B480;
    }
}

loc_8026B43C:
{
    r3 = r28;
    r4 = r31;
    ctx->lr = 0x8026B448u;
    if constexpr (KnownRegArgsCpuCall<0x8026AC90u>(&func_8026AC90)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8026AC90_9CCE = func_8026AC90_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026AC90_9CCE);
        r4 = static_cast<uint32_t>(regargs_result_8026AC90_9CCE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x8026AC90u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r3 = MemoryInline::FlatRead16(r31);
    r0 = (r3 & 9216);
}

loc_8026B450:
{
}

loc_8026B454:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026B468;
    }
}

loc_8026B458:
{
    r3 = r28;
    r4 = 16;
    // inline leaf 0x8026A73C (7 guest instruction(s))
    r6 = MemoryInline::FlatRead32((r3 + 220));
    r5 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    r0 = (r6 | r0);
    MemoryInline::FlatWrite32((r3 + 220), r0);
    // end of inlined leaf 0x8026A73C
    goto loc_8026B480;
}

loc_8026B468:
{
    r0 = (r3 & 6144);
}

loc_8026B470:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026B480;
    }
}

loc_8026B474:
{
    r3 = r28;
    r4 = 17;
    // inline leaf 0x8026A73C (7 guest instruction(s))
    r6 = MemoryInline::FlatRead32((r3 + 220));
    r5 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    r0 = (r6 | r0);
    MemoryInline::FlatWrite32((r3 + 220), r0);
    // end of inlined leaf 0x8026A73C
}

loc_8026B480:
{
    r0 = MemoryInline::FlatRead8((r28 + 776));
}

loc_8026B488:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026B4BC;
    }
}

loc_8026B48C:
{
    r0 = MemoryInline::FlatRead16(r31);
    r0 = (r0 & 812);
}

loc_8026B494:
{
    MemoryInline::FlatWrite16(r31, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r31 + 2));
    r0 = (r0 & 812);
}

loc_8026B4A0:
{
    MemoryInline::FlatWrite16((r31 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r31 + 4));
    r0 = (r0 & 812);
}

loc_8026B4AC:
{
    MemoryInline::FlatWrite16((r31 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r31 + 6));
    r0 = (r0 & 812);
}

loc_8026B4B8:
{
    MemoryInline::FlatWrite16((r31 + 6), static_cast<uint16_t>(r0));
}

loc_8026B4BC:
{
    ctx->lr = 0x8026B4C0u;
    if constexpr (KnownRegArgsCpuCall<0x802BE450u>(&func_802BE450)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_802BE450_A887 = func_802BE450_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_802BE450_A887;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->cr = cr;
        InvokeDirectCpu<0x802BE450u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    }
}

loc_8026B4C4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8026B944;
    }
}

loc_8026B4C8:
{
    r0 = MemoryInline::FlatRead16(r31);
    r0 = (r0 & 65471);
}

loc_8026B4D0:
{
    MemoryInline::FlatWrite16(r31, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r31 + 2));
    r0 = (r0 & 65471);
}

loc_8026B4DC:
{
    MemoryInline::FlatWrite16((r31 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r31 + 4));
    r0 = (r0 & 65471);
}

loc_8026B4E8:
{
    MemoryInline::FlatWrite16((r31 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r31 + 6));
    r0 = (r0 & 65471);
}

loc_8026B4F4:
{
    MemoryInline::FlatWrite16((r31 + 6), static_cast<uint16_t>(r0));
    goto loc_8026B944;
}

loc_8026B4FC:
{
    r5 = (r29 & 255);
    r4 = (r5 * 848);
    r3 = 0x80660000u;
    r0 = (r3 + -18480);
    r7 = (r0 + r4);
    r0 = 2;
    MemoryInline::FlatWrite8((r31 + 112), static_cast<uint8_t>(r0));
    guest_range_1 = MemoryInline::ResolveRangeHost((r7 + 214), 0, 36u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_1, 10u, (r7 + 224));
    MemoryInline::FlatWrite16((r31 + 18), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 8u, (r7 + 222));
    MemoryInline::FlatWrite16((r31 + 16), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r31 + 20));
    MemoryInline::FlatWrite16((r31 + 22), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 12u, (r7 + 226));
    MemoryInline::FlatWrite16((r31 + 20), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 16u, (r7 + 230));
    MemoryInline::FlatWrite16((r31 + 24), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 18u, (r7 + 232));
    MemoryInline::FlatWrite16((r31 + 26), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 28u, (r7 + 242));
    MemoryInline::FlatWrite16((r31 + 28), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 30u, (r7 + 244));
    MemoryInline::FlatWrite16((r31 + 30), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 2u, (r7 + 216));
    r0 = (r0 & -3);
    r6 = (r0 & 65535);
    MemoryInline::FlatWrite16((r31 + 2), static_cast<uint16_t>(r6));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 0u, (r7 + 214));
    r0 = (r0 & -3);
    r4 = (r0 & 65535);
    MemoryInline::FlatWrite16(r31, static_cast<uint16_t>(r4));
    r0 = MemoryInline::FlatRead16((r31 + 4));
    r0 = (r0 & -3);
    r3 = (r0 & 65535);
    MemoryInline::FlatWrite16((r31 + 6), static_cast<uint16_t>(r3));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 4u, (r7 + 218));
    r0 = (r0 & -3);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16((r31 + 4), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r31 + 8), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite16((r31 + 10), static_cast<uint16_t>(r6));
    MemoryInline::FlatWrite16((r31 + 12), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r31 + 14), static_cast<uint16_t>(r3));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 34u, (r7 + 248));
    MemoryInline::FlatWrite16((r31 + 114), static_cast<uint16_t>(r0));
    r3 = r28;
    r4 = r31;
    ctx->lr = 0x8026B5BCu;
    if constexpr (KnownRegArgsCpuCall<0x8026A79Cu>(&func_8026A79C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8026A79C_B886 = func_8026A79C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026A79C_B886);
        r4 = static_cast<uint32_t>(regargs_result_8026A79C_B886 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x8026A79Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r3 = r28;
    r4 = r31;
    r5 = (r29 & 255);
    ctx->lr = 0x8026B5CCu;
    if constexpr (KnownRegArgsCpuCall<0x8026A8C8u>(&func_8026A8C8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8026A8C8_BCA7 = func_8026A8C8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026A8C8_BCA7);
        r4 = static_cast<uint32_t>(regargs_result_8026A8C8_BCA7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x8026A8C8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r3 = r28;
    r4 = r31;
    ctx->lr = 0x8026B5D8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x8026AB00u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    r3 = r28;
    r4 = r31;
    ctx->lr = 0x8026B5E4u;
    if constexpr (KnownRegArgsCpuCall<0x8026AC14u>(&func_8026AC14)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8026AC14_C2F2 = func_8026AC14_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026AC14_C2F2);
        r4 = static_cast<uint32_t>(regargs_result_8026AC14_C2F2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x8026AC14u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r3 = r28;
    r4 = r31;
    ctx->lr = 0x8026B5F0u;
    if constexpr (KnownRegArgsCpuCall<0x8026A9B8u>(&func_8026A9B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8026A9B8_C717 = func_8026A9B8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026A9B8_C717);
        r4 = static_cast<uint32_t>(regargs_result_8026A9B8_C717 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        InvokeDirectCpu<0x8026A9B8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    }
    r3 = r28;
    r4 = 11;
    // inline leaf 0x8026A758 (9 guest instruction(s))
    r5 = MemoryInline::FlatRead32((r3 + 220));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r3 = (r5 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & 1);
    // end of inlined leaf 0x8026A758
}

loc_8026B600:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8026B674;
    }
}

loc_8026B604:
{
    r3 = MemoryInline::FlatRead16((r31 + 4));
    r0 = (r3 & 32);
}

loc_8026B610:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026B624;
    }
}

loc_8026B614:
{
    r3 = r28;
    r4 = 15;
    // inline leaf 0x8026A73C (7 guest instruction(s))
    r6 = MemoryInline::FlatRead32((r3 + 220));
    r5 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    r0 = (r6 | r0);
    MemoryInline::FlatWrite32((r3 + 220), r0);
    // end of inlined leaf 0x8026A73C
    goto loc_8026B63C;
}

loc_8026B624:
{
    r0 = (r3 & 512);
}

loc_8026B62C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026B63C;
    }
}

loc_8026B630:
{
    r3 = r28;
    r4 = 14;
    // inline leaf 0x8026A73C (7 guest instruction(s))
    r6 = MemoryInline::FlatRead32((r3 + 220));
    r5 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    r0 = (r6 | r0);
    MemoryInline::FlatWrite32((r3 + 220), r0);
    // end of inlined leaf 0x8026A73C
}

loc_8026B63C:
{
    r3 = MemoryInline::FlatRead16((r31 + 4));
    r0 = (r3 & 64);
}

loc_8026B648:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026B65C;
    }
}

loc_8026B64C:
{
    r3 = r28;
    r4 = 13;
    // inline leaf 0x8026A73C (7 guest instruction(s))
    r6 = MemoryInline::FlatRead32((r3 + 220));
    r5 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    r0 = (r6 | r0);
    MemoryInline::FlatWrite32((r3 + 220), r0);
    // end of inlined leaf 0x8026A73C
    goto loc_8026B674;
}

loc_8026B65C:
{
    r0 = (r3 & 256);
}

loc_8026B664:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026B674;
    }
}

loc_8026B668:
{
    r3 = r28;
    r4 = 12;
    // inline leaf 0x8026A73C (7 guest instruction(s))
    r6 = MemoryInline::FlatRead32((r3 + 220));
    r5 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    r0 = (r6 | r0);
    MemoryInline::FlatWrite32((r3 + 220), r0);
    // end of inlined leaf 0x8026A73C
}

loc_8026B674:
{
    r3 = r28;
    r4 = r31;
    ctx->lr = 0x8026B680u;
    if constexpr (KnownRegArgsCpuCall<0x8026AC90u>(&func_8026AC90)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8026AC90_D6C8 = func_8026AC90_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026AC90_D6C8);
        r4 = static_cast<uint32_t>(regargs_result_8026AC90_D6C8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x8026AC90u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r3 = r28;
    r4 = 1;
    r5 = 24576;
    r30 = 65536;
    r6 = (r30 + -24576);
    r6 = (r6 & 65535);
    // inline leaf 0x8026FD30 (16 guest instruction(s))
}

loc_inl21_0x8026FD30:
{
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_6 & -2);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead16((r3 + 212));
}

loc_inl21_0x8026FD40:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(50))) {
        goto loc_inl21_0x8026FD68;
    }
}

loc_inl21_0x8026FD44:
{
    r0 = MemoryInline::FlatRead16((r3 + 208));
    r0 = (r0 - r5);
    r3 = (r0 & 65535);
    r0 = (r6 - r5);
    r0 = (r0 & 65535);
}

loc_inl21_0x8026FD5C:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(r0))) {
        goto loc_inl21_0x8026FD68;
    }
}

loc_inl21_0x8026FD60:
{
    r3 = 1;
    goto loc_inl21_cont_8026FD30;
}

loc_inl21_0x8026FD68:
{
    r3 = 0;
}

loc_inl21_cont_8026FD30:
{
    // end of inlined leaf 0x8026FD30
}

loc_8026B6A0:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_8026B6B4;
    }
}

loc_8026B6A4:
{
    r0 = MemoryInline::FlatRead16(r31);
    r0 = (r0 & 6144);
}

loc_8026B6B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026B6C4;
    }
}

loc_8026B6B4:
{
    r3 = r28;
    r4 = 17;
    // inline leaf 0x8026A73C (7 guest instruction(s))
    r6 = MemoryInline::FlatRead32((r3 + 220));
    r5 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    r0 = (r6 | r0);
    MemoryInline::FlatWrite32((r3 + 220), r0);
    // end of inlined leaf 0x8026A73C
    goto loc_8026B700;
}

loc_8026B6C4:
{
    r3 = r28;
    r4 = 1;
    r5 = (r30 + -8192);
    r5 = (r5 & 65535);
    r6 = 8192;
    // inline leaf 0x8026FD30 (16 guest instruction(s))
}

loc_inl23_0x8026FD30:
{
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_7 & -2);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead16((r3 + 212));
}

loc_inl23_0x8026FD40:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(50))) {
        goto loc_inl23_0x8026FD68;
    }
}

loc_inl23_0x8026FD44:
{
    r0 = MemoryInline::FlatRead16((r3 + 208));
    r0 = (r0 - r5);
    r3 = (r0 & 65535);
    r0 = (r6 - r5);
    r0 = (r0 & 65535);
}

loc_inl23_0x8026FD5C:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(r0))) {
        goto loc_inl23_0x8026FD68;
    }
}

loc_inl23_0x8026FD60:
{
    r3 = 1;
    goto loc_inl23_cont_8026FD30;
}

loc_inl23_0x8026FD68:
{
    r3 = 0;
}

loc_inl23_cont_8026FD30:
{
    // end of inlined leaf 0x8026FD30
}

loc_8026B6E0:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_8026B6F4;
    }
}

loc_8026B6E4:
{
    r0 = MemoryInline::FlatRead16(r31);
    r0 = (r0 & 9216);
}

loc_8026B6EC:
{
}

loc_8026B6F0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026B700;
    }
}

loc_8026B6F4:
{
    r3 = r28;
    r4 = 16;
    // inline leaf 0x8026A73C (7 guest instruction(s))
    r6 = MemoryInline::FlatRead32((r3 + 220));
    r5 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    r0 = (r6 | r0);
    MemoryInline::FlatWrite32((r3 + 220), r0);
    // end of inlined leaf 0x8026A73C
}

loc_8026B700:
{
    r0 = MemoryInline::FlatRead8((r28 + 1477));
}

loc_8026B708:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026B8CC;
    }
}

loc_8026B70C:
{
    r3 = r28;
    r4 = 1;
    if constexpr (KnownRegArgsCpuCall<0x8026F96Cu>(&func_8026F96C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8026F96C_E959 = func_8026F96C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026F96C_E959);
        r4 = static_cast<uint32_t>(regargs_result_8026F96C_E959 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x8026F96Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r0 = (r3 & 255);
}

loc_8026B720:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(1))) {
        goto loc_8026B8CC;
    }
}

loc_8026B724:
{
    r27 = 0;
    r3 = r28;
    r4 = 1;
    r5 = 21845;
    r30 = 65536;
    r6 = (r30 + -21845);
    r6 = (r6 & 65535);
    ctx->lr = 0x8026B744u;
    if constexpr (KnownRegArgsCpuCall<0x8026FA08u>(&func_8026FA08)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8026FA08_EE38 = func_8026FA08_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026FA08_EE38);
        r4 = static_cast<uint32_t>(regargs_result_8026FA08_EE38 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x8026FA08u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
}

loc_8026B748:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8026B760;
    }
}

loc_8026B74C:
{
    r3 = r28;
    r4 = 5;
    // inline leaf 0x8026A73C (7 guest instruction(s))
    r6 = MemoryInline::FlatRead32((r3 + 220));
    r5 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    r0 = (r6 | r0);
    MemoryInline::FlatWrite32((r3 + 220), r0);
    // end of inlined leaf 0x8026A73C
    r27 = 1;
    goto loc_8026B790;
}

loc_8026B760:
{
    r3 = r28;
    r4 = 1;
    r5 = (r30 + -10923);
    r5 = (r5 & 65535);
    r6 = 10923;
    ctx->lr = 0x8026B778u;
    if constexpr (KnownRegArgsCpuCall<0x8026FA08u>(&func_8026FA08)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8026FA08_F4B0 = func_8026FA08_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026FA08_F4B0);
        r4 = static_cast<uint32_t>(regargs_result_8026FA08_F4B0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x8026FA08u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
}

loc_8026B77C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8026B790;
    }
}

loc_8026B780:
{
    r3 = r28;
    r4 = 7;
    // inline leaf 0x8026A73C (7 guest instruction(s))
    r6 = MemoryInline::FlatRead32((r3 + 220));
    r5 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    r0 = (r6 | r0);
    MemoryInline::FlatWrite32((r3 + 220), r0);
    // end of inlined leaf 0x8026A73C
    r27 = 1;
}

loc_8026B790:
{
    r3 = r28;
    r4 = 1;
    r5 = 21845;
    r30 = 65536;
    r6 = (r30 + -21845);
    r6 = (r6 & 65535);
    ctx->lr = 0x8026B7ACu;
    if constexpr (KnownRegArgsCpuCall<0x8026FCA4u>(&func_8026FCA4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8026FCA4_FB22 = func_8026FCA4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026FCA4_FB22);
        r4 = static_cast<uint32_t>(regargs_result_8026FCA4_FB22 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x8026FCA4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
}

loc_8026B7B0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8026B7C8;
    }
}

loc_8026B7B4:
{
    r3 = r28;
    r4 = 6;
    // inline leaf 0x8026A73C (7 guest instruction(s))
    r6 = MemoryInline::FlatRead32((r3 + 220));
    r5 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    r0 = (r6 | r0);
    MemoryInline::FlatWrite32((r3 + 220), r0);
    // end of inlined leaf 0x8026A73C
    r27 = 1;
    goto loc_8026B7F8;
}

loc_8026B7C8:
{
    r3 = r28;
    r4 = 1;
    r5 = (r30 + -10923);
    r5 = (r5 & 65535);
    r6 = 10923;
    ctx->lr = 0x8026B7E0u;
    if constexpr (KnownRegArgsCpuCall<0x8026FCA4u>(&func_8026FCA4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8026FCA4_1019A = func_8026FCA4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026FCA4_1019A);
        r4 = static_cast<uint32_t>(regargs_result_8026FCA4_1019A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x8026FCA4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
}

loc_8026B7E4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8026B7F8;
    }
}

loc_8026B7E8:
{
    r3 = r28;
    r4 = 8;
    // inline leaf 0x8026A73C (7 guest instruction(s))
    r6 = MemoryInline::FlatRead32((r3 + 220));
    r5 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    r0 = (r6 | r0);
    MemoryInline::FlatWrite32((r3 + 220), r0);
    // end of inlined leaf 0x8026A73C
    r27 = 1;
}

loc_8026B7F8:
{
}

loc_8026B7FC:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_8026B80C;
    }
}

loc_8026B800:
{
    r0 = MemoryInline::FlatRead8((r28 + 9));
}

loc_8026B808:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_8026B8CC;
    }
}

loc_8026B80C:
{
    r3 = r28;
    r4 = 1;
    r5 = 10923;
    r6 = 21845;
    ctx->lr = 0x8026B820u;
    if constexpr (KnownRegArgsCpuCall<0x8026FA08u>(&func_8026FA08)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8026FA08_10933 = func_8026FA08_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026FA08_10933);
        r4 = static_cast<uint32_t>(regargs_result_8026FA08_10933 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x8026FA08u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
}

loc_8026B824:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8026B838;
    }
}

loc_8026B828:
{
    r3 = r28;
    r4 = 1;
    // inline leaf 0x8026A73C (7 guest instruction(s))
    r6 = MemoryInline::FlatRead32((r3 + 220));
    r5 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    r0 = (r6 | r0);
    MemoryInline::FlatWrite32((r3 + 220), r0);
    // end of inlined leaf 0x8026A73C
    goto loc_8026B86C;
}

loc_8026B838:
{
    r3 = r28;
    r4 = 1;
    r6 = 65536;
    r5 = (r6 + -21845);
    r5 = (r5 & 65535);
    r6 = (r6 + -10923);
    r6 = (r6 & 65535);
    ctx->lr = 0x8026B858u;
    if constexpr (KnownRegArgsCpuCall<0x8026FA08u>(&func_8026FA08)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8026FA08_10FD0 = func_8026FA08_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026FA08_10FD0);
        r4 = static_cast<uint32_t>(regargs_result_8026FA08_10FD0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x8026FA08u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
}

loc_8026B85C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8026B86C;
    }
}

loc_8026B860:
{
    r3 = r28;
    r4 = 3;
    // inline leaf 0x8026A73C (7 guest instruction(s))
    r6 = MemoryInline::FlatRead32((r3 + 220));
    r5 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    r0 = (r6 | r0);
    MemoryInline::FlatWrite32((r3 + 220), r0);
    // end of inlined leaf 0x8026A73C
}

loc_8026B86C:
{
    r3 = r28;
    r4 = 1;
    r5 = 10923;
    r6 = 21845;
    ctx->lr = 0x8026B880u;
    if constexpr (KnownRegArgsCpuCall<0x8026FCA4u>(&func_8026FCA4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8026FCA4_11604 = func_8026FCA4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026FCA4_11604);
        r4 = static_cast<uint32_t>(regargs_result_8026FCA4_11604 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x8026FCA4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
}

loc_8026B884:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8026B898;
    }
}

loc_8026B888:
{
    r3 = r28;
    r4 = 2;
    // inline leaf 0x8026A73C (7 guest instruction(s))
    r6 = MemoryInline::FlatRead32((r3 + 220));
    r5 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    r0 = (r6 | r0);
    MemoryInline::FlatWrite32((r3 + 220), r0);
    // end of inlined leaf 0x8026A73C
    goto loc_8026B8CC;
}

loc_8026B898:
{
    r3 = r28;
    r4 = 1;
    r6 = 65536;
    r5 = (r6 + -21845);
    r5 = (r5 & 65535);
    r6 = (r6 + -10923);
    r6 = (r6 & 65535);
    ctx->lr = 0x8026B8B8u;
    if constexpr (KnownRegArgsCpuCall<0x8026FCA4u>(&func_8026FCA4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8026FCA4_11CA1 = func_8026FCA4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026FCA4_11CA1);
        r4 = static_cast<uint32_t>(regargs_result_8026FCA4_11CA1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x8026FCA4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
}

loc_8026B8BC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8026B8CC;
    }
}

loc_8026B8C0:
{
    r3 = r28;
    r4 = 4;
    // inline leaf 0x8026A73C (7 guest instruction(s))
    r6 = MemoryInline::FlatRead32((r3 + 220));
    r5 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    r0 = (r6 | r0);
    MemoryInline::FlatWrite32((r3 + 220), r0);
    // end of inlined leaf 0x8026A73C
}

loc_8026B8CC:
{
    r0 = MemoryInline::FlatRead8((r28 + 776));
}

loc_8026B8D4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026B908;
    }
}

loc_8026B8D8:
{
    r0 = MemoryInline::FlatRead16(r31);
    r0 = (r0 & 148);
}

loc_8026B8E0:
{
    MemoryInline::FlatWrite16(r31, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r31 + 2));
    r0 = (r0 & 148);
}

loc_8026B8EC:
{
    MemoryInline::FlatWrite16((r31 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r31 + 4));
    r0 = (r0 & 148);
}

loc_8026B8F8:
{
    MemoryInline::FlatWrite16((r31 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r31 + 6));
    r0 = (r0 & 148);
}

loc_8026B904:
{
    MemoryInline::FlatWrite16((r31 + 6), static_cast<uint16_t>(r0));
}

loc_8026B908:
{
    ctx->lr = 0x8026B90Cu;
    if constexpr (KnownRegArgsCpuCall<0x802BE450u>(&func_802BE450)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_802BE450_125D2 = func_802BE450_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_802BE450_125D2;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->cr = cr;
        InvokeDirectCpu<0x802BE450u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    }
}

loc_8026B910:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8026B944;
    }
}

loc_8026B914:
{
    r0 = MemoryInline::FlatRead16(r31);
    r0 = (r0 & 32767);
    MemoryInline::FlatWrite16(r31, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r31 + 2));
    r0 = (r0 & 32767);
    MemoryInline::FlatWrite16((r31 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r31 + 4));
    r0 = (r0 & 32767);
    MemoryInline::FlatWrite16((r31 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r31 + 6));
    r0 = (r0 & 32767);
    MemoryInline::FlatWrite16((r31 + 6), static_cast<uint16_t>(r0));
}

loc_8026B944:
{
    r3 = r28;
    r4 = (r29 & 255);
    ctx->lr = 0x8026B950u;
    if constexpr (KnownRegArgsCpuCall<0x8026BFFCu>(&func_8026BFFC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8026BFFC_12B93 = func_8026BFFC_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_8026BFFC_12B93);
        r4 = static_cast<uint32_t>(regargs_result_8026BFFC_12B93 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x8026BFFCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    r3 = r28;
    r4 = (r29 & 255);
    ctx->lr = 0x8026B95Cu;
    if constexpr (KnownRegArgsCpuCall<0x8026CCE0u>(&func_8026CCE0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8026CCE0_1306B = func_8026CCE0_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_8026CCE0_1306B);
        r4 = static_cast<uint32_t>(regargs_result_8026CCE0_1306B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x8026CCE0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    ctx->lr = 0x8026B960u;
    if constexpr (KnownRegArgsCpuCall<0x802BE09Cu>(&func_802BE09C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_802BE09C_134E7 = func_802BE09C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_802BE09C_134E7;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->cr = cr;
        InvokeDirectCpu<0x802BE09Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    }
    r0 = MemoryInline::FlatRead16((r31 + 24));
    r0 = (r0 + r3);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16((r31 + 32), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r31 + 26));
    r0 = (r0 + r3);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16((r31 + 34), static_cast<uint16_t>(r0));
}

loc_8026B980:
{
    r11 = (r1 + 240);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 244));
    ctx->lr = r0;
    r1 = (r1 + 240);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8026AF6C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8026AF6C_ra38_a_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[3].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8026AF6C func_8026AF6C preserves=true fpr_mask=0x00000000
