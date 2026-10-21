#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80057874(CpuContext* ctx);
extern "C" void func_80057874_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802AE970(CpuContext* ctx);
extern "C" void func_802AE970_ra18_0_0_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_802BE0EC(CpuContext* ctx);
extern "C" uint32_t func_802BE0EC_ra28_2_8_0(CpuContext*, uint32_t, uint32_t, double);

extern "C" MkwStateFreeResult2 func_802AE970_statefree(uint32_t, uint32_t, PPC_FPR);
extern "C" uint64_t func_802AE970_statefree_v0(uint32_t, uint32_t, PPC_FPR);

extern "C" uint32_t func_802AE87C_ra68_2_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r5, uint32_t arg_r6, double arg_f1)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = arg_r5;
    uint32_t r6 = arg_r6;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];

    MKW_GUEST_ENTER(0x802AE87Cu);
    goto loc_802AE87C;

loc_802AE87C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = 0x806C0000u;
    r31 = (r3 + -21440);
    // inline leaf 0x800CF26C (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 36));
    // end of inlined leaf 0x800CF26C
    r0 = (r3 & 255);
}

loc_802AE8A4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_802AE8DC;
    }
}

loc_802AE8A8:
{
    // inline leaf 0x8021F29C (4 guest instruction(s))
    r3 = 0x806B0000u;
    r3 = (r3 + -12536);
    r3 = MemoryInline::FlatRead32((r3 + 56));
    // end of inlined leaf 0x8021F29C
}

loc_802AE8B0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802AE8C8;
    }
}

loc_802AE8B4:
{
    r0 = MemoryInline::FlatRead8((r31 + 3014));
    r0 = (r0 * 476);
    r3 = (r31 + r0);
    r30 = (r3 + 3396);
    goto loc_802AE90C;
}

loc_802AE8C8:
{
    r0 = MemoryInline::FlatRead8((r31 + 3014));
    r0 = (r0 * 476);
    r3 = (r31 + r0);
    r30 = (r3 + 3472);
    goto loc_802AE90C;
}

loc_802AE8DC:
{
    ctx->lr = 0x802AE8E0u;
    if constexpr (KnownRegArgsCpuCall<0x802BE0ECu>(&func_802BE0EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        const auto regargs_result_802BE0EC_A72 = func_802BE0EC_ra28_2_8_0(ctx, r3, r5, f1.d);
        r3 = regargs_result_802BE0EC_A72;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x802BE0ECu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
}

loc_802AE8E4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802AE8FC;
    }
}

loc_802AE8E8:
{
    r0 = MemoryInline::FlatRead8((r31 + 3014));
    r0 = (r0 * 476);
    r3 = (r31 + r0);
    r30 = (r3 + 3396);
    goto loc_802AE90C;
}

loc_802AE8FC:
{
    r0 = MemoryInline::FlatRead8((r31 + 3014));
    r0 = (r0 * 476);
    r3 = (r31 + r0);
    r30 = (r3 + 3472);
}

loc_802AE90C:
{
    r3 = (r31 + 3015);
    r4 = r30;
    // inline leaf 0x802AE9E4 (13 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 6u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, r4);
    MemoryInline::FlatWriteRam8(r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r4 + 1));
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r4 + 2));
    MemoryInline::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r4 + 3));
    MemoryInline::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r4 + 4));
    MemoryInline::FlatWriteRam8((r3 + 4), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r4 + 5));
    MemoryInline::FlatWriteRam8((r3 + 5), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x802AE9E4
    r3 = MemoryInline::ReadResolved8(guest_range_0, 0u, r30);
    r4 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r30 + 1));
    r5 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r30 + 2));
    if constexpr (KnownRegArgsCpuCall<0x80057874u>(&func_80057874)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        func_80057874_ra38_0_0_0(ctx, r3, r4, r5);
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x80057874u>(ctx);
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
    }
    r3 = MemoryInline::FlatRead8((r30 + 3));
    r4 = MemoryInline::FlatRead8((r30 + 4));
    r5 = MemoryInline::FlatRead8((r30 + 5));
    // inline leaf 0x800578EC (6 guest instruction(s))
    r6 = 0x80670000u;
    r6 = (r6 + -11912);
    MemoryInline::FlatWriteRam8((r6 + 118), static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteRam8((r6 + 119), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r6 + 120), static_cast<uint8_t>(r5));
    // end of inlined leaf 0x800578EC
    r3 = (r31 + 3024);
    r4 = (r30 + 8);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x802AE970u) && KnownTranslatedCpuCall<0x802AE970u>::kAvailable && !KnownTranslatedCpuCall<0x802AE970u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x802AE970u>()) {
        const auto state_free_result_802AE970_18B1 = func_802AE970_statefree_v0(r3, r4, f0);
        f0.raw = static_cast<uint64_t>(state_free_result_802AE970_18B1);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x802AE970u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    r3 = (r31 + 3080);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 64));
    f2.d = MemoryInline::FlatReadFloat32((r30 + 68));
    f3.d = MemoryInline::FlatReadFloat32((r30 + 72));
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    return r3;
}

}

extern "C" void func_802AE87C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_802AE87C_ra68_2_8_0(ctx, ctx->gpr[3], ctx->gpr[5], ctx->gpr[6], ctx->fpr[1].d);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000206F gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802AE87C func_802AE87C preserves=true fpr_mask=0x00000000
