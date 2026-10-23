#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80478000(CpuContext* ctx);
extern "C" uint64_t func_80478000_ra58_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80497A74_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;

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
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80497A74;

loc_80497A74:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = r6;
    r30 = r5;
    r29 = r4;
    r28 = r3;
    r3 = 2;
    ctx->lr = 0x80497AA8u;
    if constexpr (KnownRegArgsCpuCall<0x80478000u>(&func_80478000)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[7] = r7;
        const auto regargs_result_80478000_5B4 = func_80478000_ra58_0_18_0(ctx, r3, r4, r6);
        r3 = static_cast<uint32_t>(regargs_result_80478000_5B4);
        r4 = static_cast<uint32_t>(regargs_result_80478000_5B4 >> 32);
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
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x80478000u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
}

loc_80497AAC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80497AB8;
    }
}

loc_80497AB0:
{
    r3 = 0;
    goto loc_80497B18;
}

loc_80497AB8:
{
    r8 = 0;
    r5 = (r28 | 8192);
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 2), 0, 18u, false, true);
    MemoryInline::WriteResolved16(guest_range_0, 2u, (r3 + 4), static_cast<uint16_t>(r8));
    r0 = (r29 + 12);
    r7 = (static_cast<int32_t>(r5) >> 8);
    r9 = (r29 + 8);
    MemoryInline::WriteResolved16(guest_range_0, 0u, (r3 + 2), static_cast<uint16_t>(r0));
    r6 = (static_cast<int32_t>(r9) >> 8);
    r10 = (r29 + 4);
    r4 = 1;
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r3 + 8), static_cast<uint8_t>(r5));
    r5 = (static_cast<int32_t>(r10) >> 8);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(24));
    r0 = (r0_rot_1 & 255);
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r3 + 9), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 8u, (r3 + 10), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_0, 9u, (r3 + 11), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 10u, (r3 + 12), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_0, 11u, (r3 + 13), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 12u, (r3 + 14), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 13u, (r3 + 15), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_0, 14u, (r3 + 16), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_0, 15u, (r3 + 17), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 16u, (r3 + 18), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_0, 17u, (r3 + 19), static_cast<uint8_t>(r0));
}

loc_80497B18:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80497A74(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80497A74_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000007FB gpr_write=0x000007FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80497A74 func_80497A74 preserves=true fpr_mask=0x00000000
