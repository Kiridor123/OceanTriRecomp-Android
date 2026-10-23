#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802AA7C8(CpuContext* ctx);
extern "C" uint64_t func_802AA7C8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_80A0772C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f31 = ctx->fpr[31];

    goto loc_80A0772C;

loc_80A0772C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f31.d);
    r28 = r3;
    r29 = r4;
    f31.d = f1.d;
    r30 = r5;
    r3 = 0;
    ctx->lr = 0x80A07764u;
    if constexpr (KnownRegArgsCpuCall<0x802AA7C8u>(&func_802AA7C8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802AA7C8_4D2 = func_802AA7C8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802AA7C8_4D2);
        r4 = static_cast<uint32_t>(regargs_result_802AA7C8_4D2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802AA7C8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r31 = r3;
}

loc_80A0776C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80A07778;
    }
}

loc_80A07770:
{
    r3 = 0;
    goto loc_80A077D4;
}

loc_80A07778:
{
    r0 = 0;
    MemoryInline::FlatWriteRam32((r3 + 252), r0);
    r0 = 3;
    MemoryInline::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r0));
    r4 = 1;
    r5 = 0;
    // inline leaf 0x802AB3F8 (4 guest instruction(s))
    r0 = (r4 | r5);
    r0 = (r0 & 255);
    MemoryInline::FlatWriteRam8((r3 + 10), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x802AB3F8
    r3 = 0x80A00000u;
    r0 = (r3 + 30712);
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 2), 0, 250u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 246u, (r31 + 248), r0);
    r0 = MemoryInline::FlatRead8((r28 + 481));
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r31 + 8), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r31 + 2), static_cast<uint8_t>(r29));
    r3 = (r31 + 36);
    r4 = (r28 + 444);
    // inline leaf 0x809EAAD4 (7 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::WriteResolved32(guest_range_0, 34u, r3, r0);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::WriteResolved32(guest_range_0, 38u, (r3 + 4), r0);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 42u, (r3 + 8), r0);
    // end of inlined leaf 0x809EAAD4
    MemoryInline::WriteResolvedFloat32(guest_range_0, 82u, (r31 + 84), f31.d);
    MemoryInline::WriteResolved16(guest_range_0, 88u, (r31 + 90), static_cast<uint16_t>(r30));
    r3 = r31;
    r4 = r28;
    r5 = 1;
    // inline leaf 0x802AB270 (3 guest instruction(s))
    MemoryInline::WriteResolved32(guest_range_0, 10u, (r3 + 12), r4);
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r3 + 9), static_cast<uint8_t>(r5));
    // end of inlined leaf 0x802AB270
    r3 = r31;
}

loc_80A077D4:
{
    f31.d = MemoryInline::FlatReadFloat64((r1 + 24));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[31] = f31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000007FB gpr_write=0x000007FB gpr_return=0x00000018 fpr_read=0x80000002 fpr_write=0x80000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80A0772C func_80A0772C preserves=true fpr_mask=0x00000000
