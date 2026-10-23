#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804C7110(CpuContext* ctx);
extern "C" double func_804C7110_ra8_7e_0_2(CpuContext*, uint32_t, double, double, double, double, double, double);

extern "C" void func_8055CB18(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];

    goto loc_8055CB18;

loc_8055CB18:
{
    MemoryInline::FlatWriteRam32((r1 + -112), r1);
    r1 = (r1 + -112);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 116), r0);
    r31 = r3;
    r3 = (r1 + 24);
    r4 = MemoryInline::FlatRead32((r31 + 4));
    // inline leaf 0x8052C718 (14 guest instruction(s))
    f4.d = MemoryInline::FlatReadFloat32((r4 + 28));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 24));
    f3.d = (-(f4.d));
    guest_range_0 = MemoryInline::ResolveRangeHost((r2 + -1324), 0, 452u, true, false);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -1324));
    f0.d = (-(f1.d));
    f5.d = PpcFmulsInline(f1.d, f2.d);
    f3.d = PpcFmulsInline(f3.d, f2.d);
    f1.d = PpcFmulsInline(f4.d, f2.d);
    f0.d = PpcFmulsInline(f0.d, f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f5.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f1.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 12), f3.d);
    // end of inlined leaf 0x8052C718
    r0 = MemoryInline::FlatRead8((r31 + 137));
}

loc_8055CB40:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8055CB84;
    }
}

loc_8055CB44:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 396u, (r2 + -928));
    r3 = (r1 + 8);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f0.d);
    // inline leaf 0x8055FEA8 (9 guest instruction(s))
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 444u);
        if (resolved_pair.valid) {
            f3.d = PpcBitCastToFloatInline(resolved_pair.first);
            f2.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 444u, (r2 + -880));
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 448u, (r2 + -876));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 436u);
        if (resolved_pair.valid) {
            f1.d = PpcBitCastToFloatInline(resolved_pair.first);
            f0.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 436u, (r2 + -888));
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 440u, (r2 + -884));
        }
    }
    MemoryInline::FlatWriteRamFloat32(r3, f3.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 12), f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f0.d);
    // end of inlined leaf 0x8055FEA8
    f1.d = MemoryInline::FlatReadFloat32((r1 + 20));
    r3 = (r1 + 40);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f4.d = MemoryInline::FlatReadFloat32((r1 + 16));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 400u);
        if (resolved_pair.valid) {
            f5.d = PpcBitCastToFloatInline(resolved_pair.second);
            f6.d = PpcBitCastToFloatInline(resolved_pair.first);
        } else {
            f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 404u, (r2 + -920));
            f6.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 400u, (r2 + -924));
        }
    }
    if constexpr (KnownRegArgsCpuCall<0x804C7110u>(&func_804C7110)) {
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_804C7110_11C3 = func_804C7110_ra8_7e_0_2(ctx, r3, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d);
        f1.d = regargs_result_804C7110_11C3;
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        InvokeDirectCpu<0x804C7110u>(ctx);
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
    }
    goto loc_8055CBA4;
}

loc_8055CB84:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 28));
    r3 = (r1 + 40);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 36));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 24));
    f4.d = MemoryInline::FlatReadFloat32((r1 + 32));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 400u);
        if (resolved_pair.valid) {
            f5.d = PpcBitCastToFloatInline(resolved_pair.second);
            f6.d = PpcBitCastToFloatInline(resolved_pair.first);
        } else {
            f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 404u, (r2 + -920));
            f6.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 400u, (r2 + -924));
        }
    }
    if constexpr (KnownRegArgsCpuCall<0x804C7110u>(&func_804C7110)) {
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_804C7110_1878 = func_804C7110_ra8_7e_0_2(ctx, r3, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d);
        f1.d = regargs_result_804C7110_1878;
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        InvokeDirectCpu<0x804C7110u>(ctx);
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
    }
}

loc_8055CBA4:
{
    r3 = (r1 + 40);
    r4 = 1;
    ctx->lr = 0x8055CBB0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    InvokeDirectCpu<0x804BAA90u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    r0 = MemoryInline::FlatRead32((r1 + 116));
    ctx->lr = r0;
    r1 = (r1 + 112);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FEF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00002000 fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8055CB18 func_8055CB18 preserves=true fpr_mask=0x00000000
