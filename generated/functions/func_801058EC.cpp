#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800F87EC(CpuContext* ctx);
extern "C" uint64_t func_800F87EC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_801058EC_ra38_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f31 = ctx->fpr[31];

    goto loc_801058EC;

loc_801058EC:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 52u, (r1 + 52), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_1, 40u, (r1 + 40), f31.d);
    r11 = (r1 + 40);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r26 = r3;
    r27 = r4;
    r28 = r5;
    r29 = r6;
    f31.d = f1.d;
    r3 = 36;
    ctx->lr = 0x80105920u;
    if constexpr (KnownRegArgsCpuCall<0x800F87ECu>(&func_800F87EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800F87EC_75A = func_800F87EC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800F87EC_75A);
        r4 = static_cast<uint32_t>(regargs_result_800F87EC_75A >> 32);
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
        InvokeDirectCpu<0x800F87ECu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r31 = r3;
}

loc_80105928:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80105934;
    }
}

loc_8010592C:
{
    r3 = 0;
    goto loc_801059B8;
}

loc_80105934:
{
    r30 = MemoryInline::FlatRead32((r3 + 56));
    r0 = (r27 & 255);
    r3 = 0x805A0000u;
    r3 = (r3 + -4536);
    r3_addr_1 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_1);
    MemoryInline::FlatWrite32(r30, r0);
    MemoryInline::FlatWrite32((r30 + 16), r28);
    r3 = (r30 + 20);
    r4 = r29;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    MemoryInline::FlatWriteFloat32((r30 + 32), f31.d);
    r0 = 10;
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 2), 0, 67u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r31 + 3), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r31 + 2), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved32(guest_range_0, 46u, (r31 + 48), r26);
    r0 = MemoryInline::FlatRead8((r26 + 481));
    MemoryInline::WriteResolved8(guest_range_0, 66u, (r31 + 68), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r26 + 444));
    MemoryInline::WriteResolved32(guest_range_0, 34u, (r31 + 36), r0);
    r0 = MemoryInline::FlatRead32((r26 + 448));
    MemoryInline::WriteResolved32(guest_range_0, 38u, (r31 + 40), r0);
    r0 = MemoryInline::FlatRead32((r26 + 452));
    MemoryInline::WriteResolved32(guest_range_0, 42u, (r31 + 44), r0);
    r0 = 0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 10u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 10u, (r31 + 12), r0);
        MemoryInline::WriteResolved32(guest_range_0, 14u, (r31 + 16), r0);
    }
    r3 = 0x80100000u;
    r0 = (r3 + 22996);
    MemoryInline::WriteResolved32(guest_range_0, 62u, (r31 + 64), r0);
    r3 = 0x80100000u;
    r0 = (r3 + 23056);
    MemoryInline::WriteResolved32(guest_range_0, 50u, (r31 + 52), r0);
    r3 = r31;
}

loc_801059B8:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 16), 0, 40u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 24u, (r1 + 40));
    r11 = (r1 + 40);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::ReadResolved32(guest_range_2, 36u, (r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[31] = f31;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801058EC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801058EC_ra38_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000007FB gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x80000002 fpr_write=0x80000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801058EC func_801058EC preserves=true fpr_mask=0x00000000
