#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8027F158(CpuContext* ctx);
extern "C" uint64_t func_8027F158_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_8027F628(CpuContext* ctx);
extern "C" uint64_t func_8027F628_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80314F7C(CpuContext* ctx);
extern "C" uint64_t func_80314F7C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80314FF4_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x80314FF4u);
    goto loc_80314FF4;

loc_80314FF4:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -64), 0, 72u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 68u, (r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r28 = r3;
    r27 = r4;
    r30 = r5;
    r0 = 0;
    MemoryInline::WriteResolved32(guest_range_0, 24u, (r1 + 24), r0);
    MemoryInline::WriteResolved16(guest_range_0, 28u, (r1 + 28), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r1 + 16), r0);
    MemoryInline::WriteResolved16(guest_range_0, 20u, (r1 + 20), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r1 + 8), r0);
    MemoryInline::WriteResolved16(guest_range_0, 12u, (r1 + 12), static_cast<uint16_t>(r0));
    r31 = 0;
    ctx->lr = 0x80315038u;
    if constexpr (KnownRegArgsCpuCall<0x80314F7Cu>(&func_80314F7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80314F7C_8B3 = func_80314F7C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80314F7C_8B3);
        r4 = static_cast<uint32_t>(regargs_result_80314F7C_8B3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80314F7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = r28;
    r4 = (r1 + 24);
    r5 = 1;
    ctx->lr = 0x80315048u;
    if constexpr (KnownRegArgsCpuCall<0x8027F628u>(&func_8027F628)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        const auto regargs_result_8027F628_C07 = func_8027F628_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027F628_C07);
        r4 = static_cast<uint32_t>(regargs_result_8027F628_C07 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x8027F628u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    }
    r0 = MemoryInline::FlatRead8(r28);
}

loc_80315050:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(12))) {
        goto loc_80315078;
    }
}

loc_80315054:
{
}

loc_80315058:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_80315078;
    }
}

loc_8031505C:
{
    r0 = MemoryInline::FlatRead8(r27);
}

loc_80315064:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(13))) {
        goto loc_80315078;
    }
}

loc_80315068:
{
    r3 = r27;
    r4 = (r1 + 16);
    r5 = 1;
    ctx->lr = 0x80315078u;
    if constexpr (KnownRegArgsCpuCall<0x8027F628u>(&func_8027F628)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        const auto regargs_result_8027F628_119C = func_8027F628_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027F628_119C);
        r4 = static_cast<uint32_t>(regargs_result_8027F628_119C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x8027F628u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    }
}

loc_80315078:
{
    r4 = 0;
    r3 = (r1 + 8);
    r0 = MemoryInline::FlatRead16((r1 + 24));
}

loc_80315088:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803150A0;
    }
}

loc_8031508C:
{
}

loc_80315090:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(3))) {
        goto loc_803150A0;
    }
}

loc_80315094:
{
    MemoryInline::FlatWriteRam16((r1 + 8), static_cast<uint16_t>(r0));
    r3 = (r3 + 2);
    r4 = 1;
}

loc_803150A0:
{
    r0 = MemoryInline::FlatRead16((r1 + 26));
}

loc_803150A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803150C0;
    }
}

loc_803150AC:
{
}

loc_803150B0:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(3))) {
        goto loc_803150C0;
    }
}

loc_803150B4:
{
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r3 = (r3 + 2);
    r4 = (r4 + 1);
}

loc_803150C0:
{
    r0 = MemoryInline::FlatRead16((r1 + 28));
}

loc_803150C8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803150DC;
    }
}

loc_803150CC:
{
}

loc_803150D0:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(3))) {
        goto loc_803150DC;
    }
}

loc_803150D4:
{
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r4 = (r4 + 1);
}

loc_803150DC:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & -2);
    r3 = (r1 + 8);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead16((r1 + 16));
}

loc_803150F0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80315108;
    }
}

loc_803150F4:
{
}

loc_803150F8:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(3))) {
        goto loc_80315108;
    }
}

loc_803150FC:
{
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r3 = (r3 + 2);
    r4 = (r4 + 1);
}

loc_80315108:
{
    r0 = MemoryInline::FlatRead16((r1 + 18));
}

loc_80315110:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80315128;
    }
}

loc_80315114:
{
}

loc_80315118:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(3))) {
        goto loc_80315128;
    }
}

loc_8031511C:
{
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r3 = (r3 + 2);
    r4 = (r4 + 1);
}

loc_80315128:
{
    r0 = MemoryInline::FlatRead16((r1 + 20));
}

loc_80315130:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80315140;
    }
}

loc_80315134:
{
}

loc_80315138:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(3))) {
        goto loc_80315140;
    }
}

loc_8031513C:
{
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
}

loc_80315140:
{
}

loc_80315144:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_80315160;
    }
}

loc_80315148:
{
    r0 = 0;
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r30 + 2), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r30 + 4), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r30 + 6), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r30 + 8), static_cast<uint16_t>(r0));
}

loc_80315160:
{
    r28 = 0;
    r29 = (r1 + 8);
}

loc_80315168:
{
    r3 = MemoryInline::FlatRead16(r29);
}

loc_80315170:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80315198;
    }
}

loc_80315174:
{
    ctx->lr = 0x80315178u;
    if constexpr (KnownRegArgsCpuCall<0x8027F158u>(&func_8027F158)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027F158_22AB = func_8027F158_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8027F158_22AB);
        r4 = static_cast<uint32_t>(regargs_result_8027F158_22AB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8027F158u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (r3 & 255);
}

loc_80315180:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_80315198;
    }
}

loc_80315184:
{
    r31 = (r31 | 16);
}

loc_8031518C:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_80315198;
    }
}

loc_80315190:
{
    r0 = MemoryInline::FlatRead16(r29);
    MemoryInline::FlatWrite16((r30 + 8), static_cast<uint16_t>(r0));
}

loc_80315198:
{
    r29 = (r29 + 2);
    r28 = (r28 + 1);
}

loc_803151A4:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(3))) {
        goto loc_80315168;
    }
}

loc_803151A8:
{
    r28 = 0;
    r29 = (r1 + 8);
}

loc_803151B0:
{
    r3 = MemoryInline::FlatRead16(r29);
}

loc_803151B8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803151E0;
    }
}

loc_803151BC:
{
    ctx->lr = 0x803151C0u;
    if constexpr (KnownRegArgsCpuCall<0x8027F158u>(&func_8027F158)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027F158_28B5 = func_8027F158_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8027F158_28B5);
        r4 = static_cast<uint32_t>(regargs_result_8027F158_28B5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8027F158u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (r3 & 255);
}

loc_803151C8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_803151E0;
    }
}

loc_803151CC:
{
    r31 = (r31 | 8);
}

loc_803151D4:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_803151E0;
    }
}

loc_803151D8:
{
    r0 = MemoryInline::FlatRead16(r29);
    MemoryInline::FlatWrite16((r30 + 6), static_cast<uint16_t>(r0));
}

loc_803151E0:
{
    r29 = (r29 + 2);
    r28 = (r28 + 1);
}

loc_803151EC:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(3))) {
        goto loc_803151B0;
    }
}

loc_803151F0:
{
    r27 = 0;
    r28 = 0;
    r29 = (r1 + 8);
}

loc_803151FC:
{
    r3 = MemoryInline::FlatRead16(r29);
}

loc_80315204:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803152AC;
    }
}

loc_80315208:
{
    ctx->lr = 0x8031520Cu;
    if constexpr (KnownRegArgsCpuCall<0x8027F158u>(&func_8027F158)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027F158_2ECB = func_8027F158_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8027F158_2ECB);
        r4 = static_cast<uint32_t>(regargs_result_8027F158_2ECB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8027F158u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (r3 & 255);
}

loc_80315214:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_803152AC;
    }
}

loc_80315218:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r27)));
}

loc_80315220:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80315268;
    }
}

loc_80315224:
{
    r0 = (r31 & 255);
    r0 = (r0 & 8);
}

loc_80315230:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8031524C;
    }
}

loc_80315234:
{
    r31 = (r31 | 4);
}

loc_8031523C:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_803152AC;
    }
}

loc_80315240:
{
    r0 = MemoryInline::FlatRead16(r29);
    MemoryInline::FlatWrite16((r30 + 4), static_cast<uint16_t>(r0));
    goto loc_803152AC;
}

loc_8031524C:
{
    r31 = (r31 | 1);
}

loc_80315254:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_80315260;
    }
}

loc_80315258:
{
    r0 = MemoryInline::FlatRead16(r29);
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r0));
}

loc_80315260:
{
    r27 = (r27 + 1);
    goto loc_803152AC;
}

loc_80315268:
{
}

loc_8031526C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_8031528C;
    }
}

loc_80315270:
{
    r31 = (r31 | 2);
}

loc_80315278:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_80315284;
    }
}

loc_8031527C:
{
    r0 = MemoryInline::FlatRead16(r29);
    MemoryInline::FlatWrite16((r30 + 2), static_cast<uint16_t>(r0));
}

loc_80315284:
{
    r27 = (r27 + 1);
    goto loc_803152AC;
}

loc_8031528C:
{
}

loc_80315290:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_803152AC;
    }
}

loc_80315294:
{
    r31 = (r31 | 4);
}

loc_8031529C:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_803152A8;
    }
}

loc_803152A0:
{
    r0 = MemoryInline::FlatRead16(r29);
    MemoryInline::FlatWrite16((r30 + 4), static_cast<uint16_t>(r0));
}

loc_803152A8:
{
    r27 = (r27 + 1);
}

loc_803152AC:
{
    r29 = (r29 + 2);
    r28 = (r28 + 1);
}

loc_803152B8:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(3))) {
        goto loc_803151FC;
    }
}

loc_803152BC:
{
    r3 = r31;
    r11 = (r1 + 64);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80314FF4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80314FF4_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000083B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80314FF4 func_80314FF4 preserves=true fpr_mask=0x00000000
