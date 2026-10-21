#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80077E54(CpuContext* ctx);
extern "C" void func_80077E54_ra8_1fe_0_0(CpuContext*, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint32_t func_800C94EC_ra0_0_8_0(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];

    MKW_GUEST_ENTER(0x800C94ECu);
    goto loc_800C94EC;

loc_800C94EC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r3 = 0x80690000u;
    r3 = (r3 + 28808);
    guest_range_0 = MemoryInline::ResolveRangeHost((r2 + -30912), 0, 8u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 0u);
        if (resolved_pair.valid) {
            f1.d = PpcBitCastToFloatInline(resolved_pair.first);
            f2.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -30912));
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -30908));
        }
    }
    f3.d = f2.d;
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    r3 = 0x80690000u;
    r3 = (r3 + 28820);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 0u);
        if (resolved_pair.valid) {
            f1.d = PpcBitCastToFloatInline(resolved_pair.second);
            f2.d = PpcBitCastToFloatInline(resolved_pair.first);
        } else {
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -30908));
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -30912));
        }
    }
    f3.d = f1.d;
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    r3 = 0x80690000u;
    r3 = (r3 + 28832);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -30908));
    f2.d = f1.d;
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -30912));
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    r3 = 0x80690000u;
    r3 = (r3 + 28844);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -30908));
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -30908));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f2.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -30912));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f2.d);
    r3 = 0x80690000u;
    r3 = (r3 + 28856);
    f3.d = f2.d;
    f4.d = f2.d;
    f5.d = f2.d;
    f6.d = f1.d;
    f7.d = f2.d;
    f8.d = f2.d;
    if constexpr (KnownRegArgsCpuCall<0x80077E54u>(&func_80077E54)) {
        ctx->gpr[1] = r1;
        func_80077E54_ra8_1fe_0_0(ctx, r3, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80077E54u>(ctx);
    }
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    return r3;
}

}

extern "C" void func_800C94EC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_800C94EC_ra0_0_8_0(ctx);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000006 gpr_write=0x0000000B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000FFF fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800C94EC func_800C94EC preserves=true fpr_mask=0x00000000
