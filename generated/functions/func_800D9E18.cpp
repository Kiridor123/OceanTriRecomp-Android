#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800D84A0(CpuContext* ctx);
extern "C" uint32_t func_800D84A0_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_800D8EBC(CpuContext* ctx);
extern "C" uint32_t func_800D8EBC_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_800D8F0C(CpuContext* ctx);
extern "C" uint64_t func_800D8F0C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_800D9BD0(CpuContext* ctx);
extern "C" uint32_t func_800D9BD0_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_800D9E18_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;

    goto loc_800D9E18;

loc_800D9E18:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r26 = r3;
    r27 = r4;
    r28 = r5;
    r29 = r6;
    r30 = r7;
}

loc_800D9E44:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800D9EF4;
    }
}

loc_800D9E48:
{
    ctx->lr = 0x800D9E4Cu;
    if constexpr (KnownRegArgsCpuCall<0x800D84A0u>(&func_800D84A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_800D84A0_A80 = func_800D84A0_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800D84A0_A80;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800D84A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_800D9E50:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_800D9EF4;
    }
}

loc_800D9E54:
{
    r3 = r26;
    r4 = r27;
    if constexpr (KnownRegArgsCpuCall<0x800D8EBCu>(&func_800D8EBC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800D8EBC_D99 = func_800D8EBC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800D8EBC_D99;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x800D8EBCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
    r31 = r3;
}

loc_800D9E68:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800D9EF4;
    }
}

loc_800D9E6C:
{
    r0 = 1;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 1), 0, 59u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 35u, (r3 + 36), static_cast<uint8_t>(r0));
    r0 = (r29 & -16777216);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r4 = (r4_rot_1 & 255);
    r29 = (r29 & 16777215);
    r0 = MemoryInline::FlatRead8((r26 + 2));
}

loc_800D9E88:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800D9EA0;
    }
}

loc_800D9E8C:
{
    r0 = 3;
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r3 + 1), static_cast<uint8_t>(r0));
    r0 = 2;
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r3 + 2), static_cast<uint8_t>(r0));
    goto loc_800D9EB0;
}

loc_800D9EA0:
{
    r0 = 3;
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r3 + 1), static_cast<uint8_t>(r0));
    r0 = (r29 & 255);
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r3 + 2), static_cast<uint8_t>(r0));
}

loc_800D9EB0:
{
}

loc_800D9EB4:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800D9EC4;
    }
}

loc_800D9EB8:
{
    r0 = MemoryInline::FlatRead32((r26 + 12));
    MemoryInline::WriteResolved32(guest_range_0, 39u, (r3 + 40), r0);
    goto loc_800D9EC8;
}

loc_800D9EC4:
{
    MemoryInline::WriteResolved32(guest_range_0, 39u, (r3 + 40), r4);
}

loc_800D9EC8:
{
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 43u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 43u, (r3 + 44), r27);
        MemoryInline::WriteResolved32(guest_range_0, 47u, (r3 + 48), r28);
    }
    MemoryInline::WriteResolved32(guest_range_0, 51u, (r3 + 52), r30);
    r0 = 0;
    MemoryInline::WriteResolved32(guest_range_0, 55u, (r3 + 56), r0);
    r3 = r26;
    r4 = r31;
    ctx->lr = 0x800D9EE8u;
    if constexpr (KnownRegArgsCpuCall<0x800D9BD0u>(&func_800D9BD0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800D9BD0_17D9 = func_800D9BD0_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_800D9BD0_17D9;
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
        InvokeDirectCpu<0x800D9BD0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r3 = r26;
    r4 = r31;
    ctx->lr = 0x800D9EF4u;
    if constexpr (KnownRegArgsCpuCall<0x800D8F0Cu>(&func_800D8F0C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800D8F0C_1AD5 = func_800D8F0C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800D8F0C_1AD5);
        r4 = static_cast<uint32_t>(regargs_result_800D8F0C_1AD5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x800D8F0Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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

loc_800D9EF4:
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

extern "C" void func_800D9E18(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800D9E18_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000021FF gpr_write=0x000009FB gpr_return=0x00000018 fpr_read=0xC00003FF fpr_write=0xC0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800D9E18 func_800D9E18 preserves=true fpr_mask=0x00000000
