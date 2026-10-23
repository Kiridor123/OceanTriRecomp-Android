#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8005D48C(CpuContext* ctx);
extern "C" uint64_t func_8005D48C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80080FA8(CpuContext* ctx);
extern "C" uint32_t func_80080FA8_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_800812C4_ra98_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r7)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    ctx->gpr[7] = arg_r7;

    goto loc_800812C4;

loc_800812C4:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r29 = r3;
    r5 = 0;
    ctx->lr = 0x800812E8u;
    if constexpr (KnownRegArgsCpuCall<0x8005D48Cu>(&func_8005D48C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8005D48C_54C = func_8005D48C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8005D48C_54C);
        r4 = static_cast<uint32_t>(regargs_result_8005D48C_54C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8005D48Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = 0x80590000u;
    r0 = (r3 + -836);
    MemoryInline::FlatWrite32(r29, r0);
    r31 = (r29 + 12);
    r30 = (r29 + 156);
}

loc_800812FC:
{
    r3 = r31;
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    r31 = (r31 + 48);
}

loc_8008130C:
{
    if ((static_cast<uint32_t>(r31) < static_cast<uint32_t>(r30))) {
        goto loc_800812FC;
    }
}

loc_80081310:
{
    r31 = (r29 + 204);
}

loc_80081314:
{
    r3 = r30;
    ctx->lr = 0x8008131Cu;
    if constexpr (KnownRegArgsCpuCall<0x80080FA8u>(&func_80080FA8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80080FA8_A64 = func_80080FA8_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80080FA8_A64;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x80080FA8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r30 = (r30 + 24);
}

loc_80081324:
{
    if ((static_cast<uint32_t>(r30) < static_cast<uint32_t>(r31))) {
        goto loc_80081314;
    }
}

loc_80081328:
{
    r3 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r29 + 204), 0, 16u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r29 + 204), r3);
    r0 = 128;
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r29 + 208), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r29 + 209), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r29 + 210), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r29 + 211), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r29 + 212), r3);
    MemoryInline::WriteResolved8(guest_range_0, 12u, (r29 + 216), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 13u, (r29 + 217), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved16(guest_range_0, 14u, (r29 + 218), static_cast<uint16_t>(r3));
    r3 = r29;
    r4 = 0x80000000u;
    r5 = 1;
    // inline leaf 0x8007BA38 (11 guest instruction(s))
}

loc_inl1_0x8007BA38:
{
}

loc_inl1_0x8007BA3C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_inl1_0x8007BA50;
    }
}

loc_inl1_0x8007BA40:
{
    r0 = MemoryInline::FlatRead32((r3 + 204));
    r0 = (r0 | r4);
    MemoryInline::FlatWrite32((r3 + 204), r0);
    goto loc_inl1_cont_8007BA38;
}

loc_inl1_0x8007BA50:
{
    r5 = MemoryInline::FlatRead32((r3 + 204));
    r0 = ~(r4 | r4);
    r0 = (r5 & r0);
    MemoryInline::FlatWrite32((r3 + 204), r0);
}

loc_inl1_cont_8007BA38:
{
    // end of inlined leaf 0x8007BA38
    r3 = (r29 + 12);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80050538u>(ctx);
    r3 = (r29 + 60);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80050538u>(ctx);
    r3 = (r29 + 108);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80050538u>(ctx);
    r3 = (r1 + 44);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -31808));
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    r4 = r3;
    r3 = (r29 + 156);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 32);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -31808));
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    r4 = r3;
    r3 = (r29 + 168);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 20);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -31808));
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    r4 = r3;
    r3 = (r29 + 180);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -31808));
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    r4 = r3;
    r3 = (r29 + 192);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = r29;
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800812C4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800812C4_ra98_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[7]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00001F9E gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x0000000E fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800812C4 func_800812C4 preserves=true fpr_mask=0x00000000
