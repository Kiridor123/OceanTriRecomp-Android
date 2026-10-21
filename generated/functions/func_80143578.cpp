#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803A7E80(CpuContext* ctx);
extern "C" uint32_t func_803A7E80_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_80143578_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];

    MKW_GUEST_ENTER(0x80143578u);
    goto loc_80143578;

loc_80143578:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r28 = r3;
    r29 = r4;
    r31 = r5;
    // inline leaf 0x801433E8 (11 guest instruction(s))
    r0 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 52u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, r3, static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r3 + 2), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r3 + 3), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r3 + 4), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r3 + 5), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r3 + 6), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r3 + 7), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 8u, (r3 + 8), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 48u, (r3 + 48), r0);
    // end of inlined leaf 0x801433E8
    r0 = 1;
    guest_range_1 = MemoryInline::ResolveRangeHost(r28, 0, 29u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, r28, static_cast<uint8_t>(r0));
    r30 = 0;
    MemoryInline::WriteResolved8(guest_range_1, 8u, (r28 + 8), static_cast<uint8_t>(r30));
    r0 = 254;
    MemoryInline::WriteResolved8(guest_range_1, 12u, (r28 + 12), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 10u, (r28 + 10), static_cast<uint8_t>(r31));
    r0 = 255;
    MemoryInline::WriteResolved8(guest_range_1, 11u, (r28 + 11), static_cast<uint8_t>(r0));
    r3 = 65536;
    r0 = (r3 + -1);
    MemoryInline::WriteResolved16(guest_range_1, 22u, (r28 + 22), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 28u, (r28 + 28), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_1, 17u, (r28 + 17), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_1, 18u, (r28 + 18), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved16(guest_range_1, 24u, (r28 + 24), static_cast<uint16_t>(r0));
    r31 = -1;
    MemoryInline::WriteResolved8(guest_range_1, 13u, (r28 + 13), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_1, 14u, (r28 + 14), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r28 + 2), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r28 + 3), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_1, 16u, (r28 + 16), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_1, 15u, (r28 + 15), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_1, 19u, (r28 + 19), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_1, 21u, (r28 + 21), static_cast<uint8_t>(r30));
    ctx->lr = 0x8014360Cu;
    if constexpr (KnownRegArgsCpuCall<0x803A7E80u>(&func_803A7E80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_803A7E80_FA5 = func_803A7E80_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803A7E80_FA5;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803A7E80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    MemoryInline::FlatWrite8((r28 + 29), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r28 + 30), static_cast<uint8_t>(r30));
    MemoryInline::FlatWrite8((r28 + 31), static_cast<uint8_t>(r30));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -27848));
    MemoryInline::FlatWriteFloat32((r28 + 36), f0.d);
    MemoryInline::FlatWrite32((r28 + 40), r31);
    MemoryInline::FlatWrite32((r28 + 44), r31);
    r3 = (r28 + 52);
    r4 = 0;
    r5 = 16;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80143578(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80143578_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003E gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80143578 func_80143578 preserves=true fpr_mask=0x00000000
