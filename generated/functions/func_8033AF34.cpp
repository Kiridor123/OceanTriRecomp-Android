#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004AED4(CpuContext* ctx);
extern "C" uint32_t func_8004AED4_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_8004AF84(CpuContext* ctx);
extern "C" uint32_t func_8004AF84_ra28_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8004AFDC(CpuContext* ctx);
extern "C" uint32_t func_8004AFDC_ra28_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8004BA64(CpuContext* ctx);
extern "C" uint64_t func_8004BA64_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80271554(CpuContext* ctx);
extern "C" uint64_t func_80271554_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80272B14(CpuContext* ctx);
extern "C" uint64_t func_80272B14_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_802730A8(CpuContext* ctx);
extern "C" uint64_t func_802730A8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8033AF34_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x8033AF34u);
    goto loc_8033AF34;

loc_8033AF34:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r26 = r3;
    r30 = r4;
}

loc_8033AF54:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8033AF60;
    }
}

loc_8033AF58:
{
}

loc_8033AF5C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(2))) {
        goto loc_8033B298;
    }
}

loc_8033AF60:
{
    r3 = 2;
    // inline leaf 0x800CFAF4 (16 guest instruction(s))
}

loc_inl1_0x800CFAF4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl1_0x800CFB04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x800CFB10;
    }
}

loc_inl1_0x800CFB08:
{
    r3 = 0;
    goto loc_inl1_cont_800CFAF4;
}

loc_inl1_0x800CFB10:
{
    r0 = (r3 & 255);
}

loc_inl1_0x800CFB18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl1_0x800CFB24;
    }
}

loc_inl1_0x800CFB1C:
{
    r3 = 0;
    goto loc_inl1_cont_800CFAF4;
}

loc_inl1_0x800CFB24:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl1_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    r29 = r3;
}

loc_8033AF70:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8033AF7C;
    }
}

loc_8033AF74:
{
    r3 = -1;
    goto loc_8033B2E4;
}

loc_8033AF7C:
{
    // inline leaf 0x800CF3E8 (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 39));
    // end of inlined leaf 0x800CF3E8
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r0 = (r0 * 2848);
    r31 = (r29 + r0);
    r3 = r31;
    r4 = r26;
    // inline leaf 0x8033AEBC (10 guest instruction(s))
}

loc_inl3_0x8033AEBC:
{
}

loc_inl3_0x8033AEC0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl3_0x8033AEDC;
    }
}

loc_inl3_0x8033AEC4:
{
    r0 = MemoryInline::FlatRead8((r4 + 7));
    r0 = (r0 & 1);
}

loc_inl3_0x8033AED0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl3_0x8033AEDC;
    }
}

loc_inl3_0x8033AED4:
{
    r3 = 1;
    goto loc_inl3_cont_8033AEBC;
}

loc_inl3_0x8033AEDC:
{
    r3 = 0;
}

loc_inl3_cont_8033AEBC:
{
    // end of inlined leaf 0x8033AEBC
}

loc_8033AF9C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8033AFA8;
    }
}

loc_8033AFA0:
{
    r3 = -1;
    goto loc_8033B2E4;
}

loc_8033AFA8:
{
    r0 = MemoryInline::FlatRead8((r26 + 7));
    r0 = (r0 & 2);
}

loc_8033AFB4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8033AFD4;
    }
}

loc_8033AFB8:
{
    r3 = r31;
    r4 = 67;
    if constexpr (KnownRegArgsCpuCall<0x80271554u>(&func_80271554)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80271554_14D2 = func_80271554_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80271554_14D2);
        r4 = static_cast<uint32_t>(regargs_result_80271554_14D2 >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80271554u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_8033AFC8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8033AFD4;
    }
}

loc_8033AFCC:
{
    r3 = 100;
    goto loc_8033B2E4;
}

loc_8033AFD4:
{
    r0 = MemoryInline::FlatRead8((r26 + 7));
    r0 = (r0 & 4);
}

loc_8033AFE0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8033B000;
    }
}

loc_8033AFE4:
{
    r3 = r31;
    r4 = 184;
    if constexpr (KnownRegArgsCpuCall<0x80271554u>(&func_80271554)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80271554_193C = func_80271554_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80271554_193C);
        r4 = static_cast<uint32_t>(regargs_result_80271554_193C >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80271554u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_8033AFF4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8033B000;
    }
}

loc_8033AFF8:
{
    r3 = 100;
    goto loc_8033B2E4;
}

loc_8033B000:
{
    r0 = MemoryInline::FlatRead8((r26 + 7));
    r0 = (r0 & 8);
}

loc_8033B00C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8033B02C;
    }
}

loc_8033B010:
{
    r3 = r31;
    r4 = 42;
    if constexpr (KnownRegArgsCpuCall<0x80272B14u>(&func_80272B14)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80272B14_1DA5 = func_80272B14_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80272B14_1DA5);
        r4 = static_cast<uint32_t>(regargs_result_80272B14_1DA5 >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80272B14u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_8033B020:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8033B02C;
    }
}

loc_8033B024:
{
    r3 = 100;
    goto loc_8033B2E4;
}

loc_8033B02C:
{
    r0 = MemoryInline::FlatRead8((r26 + 7));
    r0 = (r0 & 16);
}

loc_8033B038:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8033B080;
    }
}

loc_8033B03C:
{
    r3 = r31;
    r4 = 204;
    if constexpr (KnownRegArgsCpuCall<0x80271554u>(&func_80271554)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80271554_2210 = func_80271554_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80271554_2210);
        r4 = static_cast<uint32_t>(regargs_result_80271554_2210 >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80271554u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_8033B04C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_8033B078;
    }
}

loc_8033B050:
{
    r3 = r31;
    r4 = 45;
    if constexpr (KnownRegArgsCpuCall<0x80272B14u>(&func_80272B14)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80272B14_2579 = func_80272B14_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80272B14_2579);
        r4 = static_cast<uint32_t>(regargs_result_80272B14_2579 >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80272B14u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_8033B060:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_8033B078;
    }
}

loc_8033B064:
{
    r3 = r31;
    r4 = 21;
    if constexpr (KnownRegArgsCpuCall<0x80272B14u>(&func_80272B14)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80272B14_28E2 = func_80272B14_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80272B14_28E2);
        r4 = static_cast<uint32_t>(regargs_result_80272B14_28E2 >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80272B14u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_8033B074:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8033B080;
    }
}

loc_8033B078:
{
    r3 = 100;
    goto loc_8033B2E4;
}

loc_8033B080:
{
    r0 = MemoryInline::FlatRead8((r26 + 4));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r3 = 0x80790000u;
    r3 = (r3 + 24232);
    r3_addr_2 = (r3 + r0);
    r27 = MemoryInline::FlatRead8(r3_addr_2);
    r27 = (static_cast<int32_t>(static_cast<int8_t>(r27)));
    r3 = r31;
    r4 = 156;
    if constexpr (KnownRegArgsCpuCall<0x80271554u>(&func_80271554)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80271554_2D9D = func_80271554_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80271554_2D9D);
        r4 = static_cast<uint32_t>(regargs_result_80271554_2D9D >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80271554u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_8033B0A8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8033B0B4;
    }
}

loc_8033B0AC:
{
    r27 = (r27 + 45);
    goto loc_8033B140;
}

loc_8033B0B4:
{
    r3 = r31;
    r4 = 155;
    if constexpr (KnownRegArgsCpuCall<0x80271554u>(&func_80271554)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80271554_3147 = func_80271554_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80271554_3147);
        r4 = static_cast<uint32_t>(regargs_result_80271554_3147 >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80271554u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_8033B0C4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8033B0D0;
    }
}

loc_8033B0C8:
{
    r27 = (r27 + 25);
    goto loc_8033B140;
}

loc_8033B0D0:
{
    r3 = r31;
    r4 = 154;
    if constexpr (KnownRegArgsCpuCall<0x80271554u>(&func_80271554)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80271554_34F1 = func_80271554_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80271554_34F1);
        r4 = static_cast<uint32_t>(regargs_result_80271554_34F1 >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80271554u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_8033B0E0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8033B0EC;
    }
}

loc_8033B0E4:
{
    r27 = (r27 + 15);
    goto loc_8033B140;
}

loc_8033B0EC:
{
    r3 = r31;
    r4 = 157;
    if constexpr (KnownRegArgsCpuCall<0x80271554u>(&func_80271554)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80271554_389B = func_80271554_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80271554_389B);
        r4 = static_cast<uint32_t>(regargs_result_80271554_389B >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80271554u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_8033B0FC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8033B108;
    }
}

loc_8033B100:
{
    r27 = (r27 + -5);
    goto loc_8033B140;
}

loc_8033B108:
{
    r3 = r31;
    r4 = 158;
    if constexpr (KnownRegArgsCpuCall<0x80271554u>(&func_80271554)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80271554_3C45 = func_80271554_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80271554_3C45);
        r4 = static_cast<uint32_t>(regargs_result_80271554_3C45 >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80271554u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_8033B118:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8033B124;
    }
}

loc_8033B11C:
{
    r27 = (r27 + -10);
    goto loc_8033B140;
}

loc_8033B124:
{
    r3 = r31;
    r4 = 159;
    if constexpr (KnownRegArgsCpuCall<0x80271554u>(&func_80271554)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80271554_3FF0 = func_80271554_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80271554_3FF0);
        r4 = static_cast<uint32_t>(regargs_result_80271554_3FF0 >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80271554u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_8033B134:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8033B140;
    }
}

loc_8033B138:
{
    r0 = (r27 + -15);
    r27 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_8033B140:
{
    r3 = r31;
    r4 = 12;
    if constexpr (KnownRegArgsCpuCall<0x80272B14u>(&func_80272B14)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80272B14_43BE = func_80272B14_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80272B14_43BE);
        r4 = static_cast<uint32_t>(regargs_result_80272B14_43BE >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80272B14u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_8033B150:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8033B15C;
    }
}

loc_8033B154:
{
    r0 = (r27 + 20);
    r27 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_8033B15C:
{
    r3 = r31;
    r4 = 13;
    if constexpr (KnownRegArgsCpuCall<0x80272B14u>(&func_80272B14)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80272B14_478B = func_80272B14_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80272B14_478B);
        r4 = static_cast<uint32_t>(regargs_result_80272B14_478B >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80272B14u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_8033B16C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8033B178;
    }
}

loc_8033B170:
{
    r0 = (r27 + 10);
    r27 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_8033B178:
{
    r26 = 0;
    r3 = 0x80600000u;
    r28 = (r3 + 18896);
}

loc_8033B184:
{
}

loc_8033B188:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_8033B1E8;
    }
}

loc_8033B18C:
{
    // inline leaf 0x800CF26C (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 36));
    // end of inlined leaf 0x800CF26C
    r0 = (r3 & 255);
}

loc_8033B198:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_8033B1CC;
    }
}

loc_8033B19C:
{
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    ctx->lr = 0x8033B1A4u;
    if constexpr (KnownRegArgsCpuCall<0x8004AF84u>(&func_8004AF84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        const auto regargs_result_8004AF84_4DD3 = func_8004AF84_ra28_0_8_0(ctx, r3, r5);
        r3 = regargs_result_8004AF84_4DD3;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x8004AF84u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r29 = r3;
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    ctx->lr = 0x8033B1B0u;
    if constexpr (KnownRegArgsCpuCall<0x8004AFDCu>(&func_8004AFDC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        const auto regargs_result_8004AFDC_5179 = func_8004AFDC_ra28_0_8_0(ctx, r3, r5);
        r3 = regargs_result_8004AFDC_5179;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x8004AFDCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r4 = r3;
    r3 = MemoryInline::FlatRead16(r28);
    r5 = r29;
    if constexpr (KnownRegArgsCpuCall<0x8004BA64u>(&func_8004BA64)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8004BA64_54EC = func_8004BA64_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004BA64_54EC);
        r4 = static_cast<uint32_t>(regargs_result_8004BA64_54EC >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x8004BA64u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_8033B1C4:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(0))) {
        goto loc_8033B284;
    }
}

loc_8033B1C8:
{
    goto loc_8033B274;
}

loc_8033B1CC:
{
    r3 = r31;
    r4 = MemoryInline::FlatRead16(r28);
    ctx->lr = 0x8033B1D8u;
    if constexpr (KnownRegArgsCpuCall<0x802730A8u>(&func_802730A8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_802730A8_58D0 = func_802730A8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802730A8_58D0);
        r4 = static_cast<uint32_t>(regargs_result_802730A8_58D0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x802730A8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r0 = (r3 & 65535);
}

loc_8033B1E0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_8033B284;
    }
}

loc_8033B1E4:
{
    goto loc_8033B274;
}

loc_8033B1E8:
{
}

loc_8033B1EC:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(2))) {
        goto loc_8033B274;
    }
}

loc_8033B1F0:
{
    r3 = 0;
    // inline leaf 0x8004AF70 (5 guest instruction(s))
}

loc_inl5_0x8004AF70:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_inl5_0x8004AF74:
{
    r3 = 24;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl5_return;
    }
}

loc_inl5_0x8004AF7C:
{
    r3 = 32;
    goto loc_inl5_cont_8004AF70;
}

loc_inl5_return:
{
}

loc_inl5_cont_8004AF70:
{
    // end of inlined leaf 0x8004AF70
    r29 = r3;
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    r4 = 0;
    // inline leaf 0x8004AFC4 (6 guest instruction(s))
}

loc_inl6_0x8004AFC4:
{
}

loc_inl6_0x8004AFC8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(1))) {
        goto loc_inl6_0x8004AFD4;
    }
}

loc_inl6_0x8004AFCC:
{
    r3 = (r3 + 256);
    goto loc_inl6_cont_8004AFC4;
}

loc_inl6_0x8004AFD4:
{
    r3 = (r3 + 160);
}

loc_inl6_cont_8004AFC4:
{
    // end of inlined leaf 0x8004AFC4
    r4 = r3;
    r3 = MemoryInline::FlatRead16(r28);
    r5 = r29;
    if constexpr (KnownRegArgsCpuCall<0x8004BA64u>(&func_8004BA64)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8004BA64_6188 = func_8004BA64_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004BA64_6188);
        r4 = static_cast<uint32_t>(regargs_result_8004BA64_6188 >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x8004BA64u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_8033B21C:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_8033B274;
    }
}

loc_8033B220:
{
    r3 = 1;
    // inline leaf 0x8004AF70 (5 guest instruction(s))
}

loc_inl7_0x8004AF70:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_inl7_0x8004AF74:
{
    r3 = 24;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl7_return;
    }
}

loc_inl7_0x8004AF7C:
{
    r3 = 32;
    goto loc_inl7_cont_8004AF70;
}

loc_inl7_return:
{
}

loc_inl7_cont_8004AF70:
{
    // end of inlined leaf 0x8004AF70
    r29 = r3;
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    r4 = 1;
    // inline leaf 0x8004AFC4 (6 guest instruction(s))
}

loc_inl8_0x8004AFC4:
{
}

loc_inl8_0x8004AFC8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(1))) {
        goto loc_inl8_0x8004AFD4;
    }
}

loc_inl8_0x8004AFCC:
{
    r3 = (r3 + 256);
    goto loc_inl8_cont_8004AFC4;
}

loc_inl8_0x8004AFD4:
{
    r3 = (r3 + 160);
}

loc_inl8_cont_8004AFC4:
{
    // end of inlined leaf 0x8004AFC4
    r4 = r3;
    r3 = MemoryInline::FlatRead16(r28);
    r5 = r29;
    if constexpr (KnownRegArgsCpuCall<0x8004BA64u>(&func_8004BA64)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8004BA64_68D8 = func_8004BA64_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004BA64_68D8);
        r4 = static_cast<uint32_t>(regargs_result_8004BA64_68D8 >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x8004BA64u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_8033B24C:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_8033B274;
    }
}

loc_8033B250:
{
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    ctx->lr = 0x8033B258u;
    if constexpr (KnownRegArgsCpuCall<0x8004AED4u>(&func_8004AED4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_8004AED4_6CC4 = func_8004AED4_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8004AED4_6CC4;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x8004AED4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r5 = (r3 & 65535);
    r3 = MemoryInline::FlatRead16(r28);
    r4 = MemoryInline::FlatRead32((r13 + -17824));
    r4 = (r4 + 384);
    ctx->lr = 0x8033B26Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    InvokeDirectCpu<0x8004B770u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8033B270:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_8033B284;
    }
}

loc_8033B274:
{
    r28 = (r28 + 2);
    r26 = (r26 + 1);
}

loc_8033B280:
{
    if ((static_cast<int32_t>(r26) < static_cast<int32_t>(5))) {
        goto loc_8033B184;
    }
}

loc_8033B284:
{
    r3 = 0x80790000u;
    r3 = (r3 + 24240);
    r3_addr_3 = (r3 + r26);
    r0 = MemoryInline::FlatRead8(r3_addr_3);
    r27 = (r27 + r0);
    goto loc_8033B2C0;
}

loc_8033B298:
{
}

loc_8033B29C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(1))) {
        goto loc_8033B2A8;
    }
}

loc_8033B2A0:
{
    r3 = 100;
    goto loc_8033B2E4;
}

loc_8033B2A8:
{
    r0 = MemoryInline::FlatRead8((r3 + 4));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r3 = 0x80790000u;
    r3 = (r3 + 24232);
    r3_addr_1 = (r3 + r0);
    r27 = MemoryInline::FlatRead8(r3_addr_1);
    r27 = (static_cast<int32_t>(static_cast<int8_t>(r27)));
}

loc_8033B2C0:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r27)));
}

loc_8033B2C8:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(100))) {
        goto loc_8033B2D4;
    }
}

loc_8033B2CC:
{
    r27 = 100;
    goto loc_8033B2E0;
}

loc_8033B2D4:
{
}

loc_8033B2D8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_8033B2E0;
    }
}

loc_8033B2DC:
{
    r27 = 0;
}

loc_8033B2E0:
{
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r27)));
}

loc_8033B2E4:
{
    r11 = (r1 + 32);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8033AF34(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8033AF34_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8033AF34 func_8033AF34 preserves=true fpr_mask=0x00000000
