#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004B108(CpuContext* ctx);
extern "C" uint64_t func_8004B108_ra58_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_803595CC(CpuContext* ctx);
extern "C" uint64_t func_803595CC_ra58_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80300ECC_ra58_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r6)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = arg_r6;
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x80300ECCu);
    goto loc_80300ECC;

loc_80300ECC:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r31 = r3;
    r3 = (r3 + 2128);
    r4 = 0;
    r5 = 20;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r0 = 0;
    MemoryInline::FlatWrite16((r31 + 70), static_cast<uint16_t>(r0));
    r29 = 0;
    r3 = 0x80790000u;
    r30 = (r3 + 16520);
}

loc_80300F0C:
{
    r3 = MemoryInline::FlatRead16(r30);
    r4 = MemoryInline::FlatRead32((r13 + -17824));
    ctx->lr = 0x80300F18u;
    if constexpr (KnownRegArgsCpuCall<0x8004B108u>(&func_8004B108)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8004B108_739 = func_8004B108_ra58_0_18_0(ctx, r3, r4, r6);
        r3 = static_cast<uint32_t>(regargs_result_8004B108_739);
        r4 = static_cast<uint32_t>(regargs_result_8004B108_739 >> 32);
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
        InvokeDirectCpu<0x8004B108u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_80300F1C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80300F40;
    }
}

loc_80300F20:
{
    r4 = MemoryInline::FlatRead16(r30);
    r0 = MemoryInline::FlatRead16((r31 + 70));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    r3 = (r31 + r0);
    MemoryInline::FlatWrite16((r3 + 2128), static_cast<uint16_t>(r4));
    r3 = MemoryInline::FlatRead16((r31 + 70));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r31 + 70), static_cast<uint16_t>(r0));
}

loc_80300F40:
{
    r30 = (r30 + 2);
    r29 = (r29 + 1);
}

loc_80300F4C:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(2))) {
        goto loc_80300F0C;
    }
}

loc_80300F50:
{
    r3 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 25u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + 8), r3);
    r0 = 342;
    MemoryInline::WriteResolved16(guest_range_0, 4u, (r1 + 12), static_cast<uint16_t>(r0));
    r0 = 348;
    MemoryInline::WriteResolved16(guest_range_0, 6u, (r1 + 14), static_cast<uint16_t>(r0));
    r0 = -1;
    MemoryInline::WriteResolved16(guest_range_0, 10u, (r1 + 18), static_cast<uint16_t>(r0));
    r0 = 343;
    MemoryInline::WriteResolved16(guest_range_0, 8u, (r1 + 16), static_cast<uint16_t>(r0));
    r0 = 5093;
    MemoryInline::WriteResolved16(guest_range_0, 14u, (r1 + 22), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r31 + 4));
    MemoryInline::WriteResolved16(guest_range_0, 16u, (r1 + 24), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r31 + 70));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_0, 12u, (r1 + 20), static_cast<uint16_t>(r0));
    r0 = (r31 + 2128);
    MemoryInline::WriteResolved32(guest_range_0, 20u, (r1 + 28), r0);
    MemoryInline::WriteResolved8(guest_range_0, 24u, (r1 + 32), static_cast<uint8_t>(r3));
    r3 = (r1 + 8);
    r4 = 0;
    ctx->lr = 0x80300FA8u;
    if constexpr (KnownRegArgsCpuCall<0x803595CCu>(&func_803595CC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_803595CC_1307 = func_803595CC_ra58_0_18_0(ctx, r3, r4, r6);
        r3 = static_cast<uint32_t>(regargs_result_803595CC_1307);
        r4 = static_cast<uint32_t>(regargs_result_803595CC_1307 >> 32);
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
        InvokeDirectCpu<0x803595CCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80300ECC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80300ECC_ra58_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[6]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000020DB gpr_write=0x000008FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80300ECC func_80300ECC preserves=true fpr_mask=0x00000000
