#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80412B5C(CpuContext* ctx);
extern "C" uint64_t func_80412B5C_rac8_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8041E2B4(CpuContext* ctx);
extern "C" uint64_t func_8041E2B4_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_8041E33C(CpuContext* ctx);
extern "C" void func_8041E33C_ra68_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80412A68_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

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
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;

    MKW_GUEST_ENTER(0x80412A68u);
    goto loc_80412A68;

loc_80412A68:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r27 = r3;
    r28 = r4;
    r31 = r5;
    r29 = r6;
    r30 = r7;
    ctx->lr = 0x80412A94u;
    if constexpr (KnownRegArgsCpuCall<0x80412B5Cu>(&func_80412B5C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_80412B5C_7E3 = func_80412B5C_rac8_0_18_0(ctx, r3, r6, r7);
        r3 = static_cast<uint32_t>(regargs_result_80412B5C_7E3);
        r4 = static_cast<uint32_t>(regargs_result_80412B5C_7E3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
        InvokeDirectCpu<0x80412B5Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    MemoryInline::FlatWrite32((r27 + 4), r28);
    MemoryInline::FlatWrite32((r27 + 8), r31);
}

loc_80412AA0:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_80412B44;
    }
}

loc_80412AA4:
{
    r3 = (r27 + 12);
    r4 = r29;
    r5 = 16;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r31 = 0;
    MemoryInline::FlatWrite8((r27 + 28), static_cast<uint8_t>(r31));
    r3 = (r27 + 29);
    r4 = (r29 + 17);
    r5 = 10;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    guest_range_0 = MemoryInline::ResolveRangeHost((r27 + 39), 0, 41u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r27 + 39), static_cast<uint8_t>(r31));
    r0 = MemoryInline::FlatRead32((r29 + 32));
    r3 = MemoryInline::FlatRead32((r29 + 36));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 5u, (r27 + 44), r3);
        MemoryInline::WriteResolved32(guest_range_0, 1u, (r27 + 40), r0);
    }
    r0 = MemoryInline::FlatRead32((r29 + 40));
    MemoryInline::WriteResolved32(guest_range_0, 13u, (r27 + 52), r0);
    r0 = MemoryInline::FlatRead32((r29 + 44));
    MemoryInline::WriteResolved32(guest_range_0, 17u, (r27 + 56), r0);
    r0 = MemoryInline::FlatRead32((r29 + 48));
    MemoryInline::WriteResolved32(guest_range_0, 21u, (r27 + 60), r0);
    r0 = MemoryInline::FlatRead32((r29 + 52));
    MemoryInline::WriteResolved32(guest_range_0, 25u, (r27 + 64), r0);
    MemoryInline::WriteResolved32(guest_range_0, 37u, (r27 + 76), r30);
}

loc_80412B08:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_80412B44;
    }
}

loc_80412B0C:
{
    r0 = MemoryInline::FlatRead32((r27 + 80));
}

loc_80412B14:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80412B44;
    }
}

loc_80412B18:
{
    r3 = 32;
    ctx->lr = 0x80412B20u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    InvokeDirectCpu<0x800404DCu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r31 = r3;
}

loc_80412B28:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80412B30;
    }
}

loc_80412B2C:
{
    ctx->lr = 0x80412B30u;
    if constexpr (KnownRegArgsCpuCall<0x8041E2B4u>(&func_8041E2B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        const auto regargs_result_8041E2B4_162C = func_8041E2B4_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8041E2B4_162C);
        r4 = static_cast<uint32_t>(regargs_result_8041E2B4_162C >> 32);
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
        InvokeDirectCpu<0x8041E2B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_80412B30:
{
    MemoryInline::FlatWrite32((r27 + 80), r31);
    r3 = r31;
    r5 = MemoryInline::FlatRead32((r29 + 32));
    r6 = MemoryInline::FlatRead32((r29 + 36));
    ctx->lr = 0x80412B44u;
    if constexpr (KnownRegArgsCpuCall<0x8041E33Cu>(&func_8041E33C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        func_8041E33C_ra68_0_0_0(ctx, r3, r5, r6);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8041E33Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    }
}

loc_80412B44:
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
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80412A68(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80412A68_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80412A68 func_80412A68 preserves=true fpr_mask=0x00000000
