#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_809FB3BC_statefree(uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_809FB3BC_statefree_v0(uint32_t, uint32_t, uint32_t, uint32_t);

extern "C" void func_809FB28C(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f31 = ctx->fpr[31];

    goto loc_809FB28C;

loc_809FB28C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -80), 0, 88u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 84u, (r1 + 84), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 72u, (r1 + 72), f31.d);
    r11 = (r1 + 72);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r26 = r3;
    r27 = r4;
    r28 = r5;
    r29 = r6;
    f31.d = f1.d;
    r30 = r7;
    r31 = r8;
    r3 = (r1 + 8);
    ctx->lr = 0x809FB2C8u;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x809FB3BCu) && KnownTranslatedCpuCall<0x809FB3BCu>::kAvailable && !KnownTranslatedCpuCall<0x809FB3BCu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x809FB3BCu>()) {
        const auto state_free_result_809FB3BC_777 = func_809FB3BC_statefree_v0(r1, r3, r31, 0x809FB2C8u);
        r1 = static_cast<uint32_t>(state_free_result_809FB3BC_777);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[31] = f31;
        InvokeDirectCpu<0x809FB3BCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
    }
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 16u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r1 + 8), static_cast<uint8_t>(r27));
    r3 = (r1 + 9);
    r4 = r28;
    // inline leaf 0x809F90C4 (9 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::WriteResolved8(guest_range_1, 1u, r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 2));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r3 + 3), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x809F90C4
    r3 = (r1 + 13);
    r4 = r29;
    // inline leaf 0x809F90C4 (9 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::WriteResolved8(guest_range_1, 5u, r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 2));
    MemoryInline::WriteResolved8(guest_range_1, 7u, (r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    MemoryInline::WriteResolved8(guest_range_1, 8u, (r3 + 3), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x809F90C4
    MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, (r1 + 20), f31.d);
    r3 = (r1 + 24);
    r4 = r30;
    ctx->lr = 0x809FB2F4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x809EB13Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r3 = r26;
    r4 = 0x80A00000u;
    r4 = (r4 + -19672);
    r5 = (r1 + 8);
    r6 = r31;
    ctx->lr = 0x809FB30Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    InvokeDirectCpu<0x800A52BCu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    f1 = ctx->fpr[1];
    f31.d = MemoryInline::FlatReadFloat64((r1 + 72));
    r11 = (r1 + 72);
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->fpr[31] = f31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000037FE gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFE fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x809FB28C func_809FB28C preserves=true fpr_mask=0x00000000
