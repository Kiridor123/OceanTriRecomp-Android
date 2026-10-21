#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802AA7C8(CpuContext* ctx);
extern "C" uint64_t func_802AA7C8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80366A04(CpuContext* ctx);
extern "C" uint64_t func_80366A04_ra38_1a_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);

extern "C" void func_80A05DE4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];

    MKW_GUEST_ENTER(0x80A05DE4u);
    goto loc_80A05DE4;

loc_80A05DE4:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -64), 0, 72u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 68u, (r1 + 68), r0);
    r31 = r3;
    r3 = (r1 + 32);
    r30 = 0x80A20000u;
    f1.d = MemoryInline::FlatReadFloat32((r30 + -5452));
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x80A05DD4 (4 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, r3, f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r3 + 4), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r3 + 8), f3.d);
    // end of inlined leaf 0x80A05DD4
    r3 = (r1 + 20);
    f1.d = MemoryInline::FlatReadFloat32((r30 + -5452));
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x80A05DD4 (4 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, r3, f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r3 + 4), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r3 + 8), f3.d);
    // end of inlined leaf 0x80A05DD4
    r3 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r30 + -5452));
    f2.d = f1.d;
    r4 = 0x80A20000u;
    f3.d = MemoryInline::FlatReadFloat32((r4 + -5448));
    // inline leaf 0x80A05DD4 (4 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, r3, f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r3 + 4), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r3 + 8), f3.d);
    // end of inlined leaf 0x80A05DD4
    r3 = r31;
    r4 = 6;
    r5 = (r1 + 32);
    r6 = (r1 + 20);
    r7 = (r1 + 8);
    ctx->lr = 0x80A05E5Cu;
    if constexpr (KnownRegArgsCpuCall<0x80366A04u>(&func_80366A04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[2] = f2;
        const auto regargs_result_80366A04_E61 = func_80366A04_ra38_1a_18_0(ctx, r3, r4, r5, f1.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_80366A04_E61);
        r4 = static_cast<uint32_t>(regargs_result_80366A04_E61 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x80366A04u>(ctx);
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
    }
}

loc_80A05E60:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80A05EFC;
    }
}

loc_80A05E64:
{
    r3 = 16;
    ctx->lr = 0x80A05E6Cu;
    if constexpr (KnownRegArgsCpuCall<0x802AA7C8u>(&func_802AA7C8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_802AA7C8_1401 = func_802AA7C8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802AA7C8_1401);
        r4 = static_cast<uint32_t>(regargs_result_802AA7C8_1401 >> 32);
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
        InvokeDirectCpu<0x802AA7C8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r29 = r3;
}

loc_80A05E74:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80A05EFC;
    }
}

loc_80A05E78:
{
    r30 = 0;
    MemoryInline::FlatWriteRam32((r3 + 252), r30);
    r4 = 1;
    r5 = 0;
    // inline leaf 0x802AB3F8 (4 guest instruction(s))
    r0 = (r4 | r5);
    r0 = (r0 & 255);
    MemoryInline::FlatWriteRam8((r3 + 10), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x802AB3F8
    r3 = r29;
    r4 = 0;
    r5 = 3;
    // inline leaf 0x802AB270 (3 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 1), 0, 251u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 11u, (r3 + 12), r4);
    MemoryInline::WriteResolved8(guest_range_1, 8u, (r3 + 9), static_cast<uint8_t>(r5));
    // end of inlined leaf 0x802AB270
    r0 = 17;
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r29 + 3), static_cast<uint8_t>(r0));
    r3 = 0x80A00000u;
    r0 = (r3 + 26280);
    MemoryInline::WriteResolved32(guest_range_1, 247u, (r29 + 248), r0);
    r0 = MemoryInline::FlatRead8((r31 + 22));
    MemoryInline::WriteResolved8(guest_range_1, 7u, (r29 + 8), static_cast<uint8_t>(r0));
    r31 = 1;
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r29 + 1), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved32(guest_range_1, 15u, (r29 + 16), r30);
    r0 = 3;
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r29 + 2), static_cast<uint8_t>(r0));
    r3 = 65536;
    r0 = (r3 + -1);
    MemoryInline::WriteResolved16(guest_range_1, 103u, (r29 + 104), static_cast<uint16_t>(r0));
    r3 = (r29 + 48);
    r4 = (r1 + 32);
    ctx->lr = 0x80A05EE4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x809EB13Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r3 = (r29 + 24);
    r4 = (r1 + 32);
    ctx->lr = 0x80A05EF0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x809EB13Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r3 = MemoryInline::FlatRead32((r29 + 256));
    MemoryInline::FlatWrite8((r3 + 8), static_cast<uint8_t>(r31));
    MemoryInline::FlatWrite32((r3 + 4), r30);
}

loc_80A05EFC:
{
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000007FF gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0xFF800011 fpr_write=0xFF80007F fpr_return=0x00000002 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80A05DE4 func_80A05DE4 preserves=true fpr_mask=0x00000000
