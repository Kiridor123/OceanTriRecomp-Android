#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804E4C30(CpuContext* ctx);
extern "C" uint64_t func_804E4C30_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_8082ADC0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t stackword6 = 0;
    uint32_t stackword7 = 0;
    uint32_t stackword8 = 0;
    uint32_t stackword9 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x8082ADC0u);
    goto loc_8082ADC0;

loc_8082ADC0:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r0 = 0x80000000u;
    r31 = r3;
    r30 = r5;
    r29 = r4;
    r6 = MemoryInline::FlatRead32((r4 + 8));
}

loc_8082ADF0:
{
    if ((static_cast<uint32_t>(r6) >= static_cast<uint32_t>(r0))) {
        goto loc_8082ADFC;
    }
}

loc_8082ADF4:
{
    r3 = r29;
    ctx->lr = 0x8082ADFCu;
    if constexpr (KnownRegArgsCpuCall<0x804E4C30u>(&func_804E4C30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_804E4C30_716 = func_804E4C30_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804E4C30_716);
        r4 = static_cast<uint32_t>(regargs_result_804E4C30_716 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x804E4C30u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
}

loc_8082ADFC:
{
    r3 = r29;
    r4 = r30;
    // inline leaf 0x804E4D50 (8 guest instruction(s))
    r5 = MemoryInline::FlatRead32((r3 + 4));
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r0 = PPC_Divwu(static_cast<uint32_t>(r4), static_cast<uint32_t>(r5));
    r0 = (r0 * r5);
    r0 = (r4 - r0);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_0 & -8);
    r3 = (r3 + r0);
    // end of inlined leaf 0x804E4D50
    r9 = MemoryInline::FlatRead32(r3);
    r30 = r3;
    r0 = MemoryInline::FlatRead32((r3 + 4));
    guest_range_0 = MemoryInline::ResolveRangeHost(r9, 0, 35u, true, false);
    r5 = MemoryInline::ReadResolved8(guest_range_0, 33u, (r9 + 33));
    r4 = MemoryInline::ReadResolved8(guest_range_0, 34u, (r9 + 34));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8082AE20:
{
    r3 = (r4 - r5);
    r0 = (r5 - r4);
    r0 = (r3 | r0);
    r10_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r10 = (r10_rot_0 & 1);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8082AE6C;
    }
}

loc_8082AE34:
{
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = r31;
    r4 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r9 + 8));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_0, 0u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.second;
            r6 = resolved_pair.first;
        } else {
            r5 = MemoryInline::ReadResolved16(guest_range_0, 2u, (r9 + 2));
            r6 = MemoryInline::ReadResolved16(guest_range_0, 0u, r9);
        }
    }
    r7 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r9 + 4));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 12u);
        if (resolved_pair.valid) {
            r8 = resolved_pair.first;
            r9 = resolved_pair.second;
        } else {
            r8 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r9 + 12));
            r9 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r9 + 16));
        }
    }
    ctx->lr = 0x8082AE5Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B88B0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead32((r30 + 4));
    r3 = r31;
    ctx->lr = 0x8082AE68u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B8A40u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_8082AE8C;
}

loc_8082AE6C:
{
    r4 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r9 + 8));
    r3 = r31;
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_0, 0u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.second;
            r6 = resolved_pair.first;
        } else {
            r5 = MemoryInline::ReadResolved16(guest_range_0, 2u, (r9 + 2));
            r6 = MemoryInline::ReadResolved16(guest_range_0, 0u, r9);
        }
    }
    r7 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r9 + 4));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 12u);
        if (resolved_pair.valid) {
            r8 = resolved_pair.first;
            r9 = resolved_pair.second;
        } else {
            r8 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r9 + 12));
            r9 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r9 + 16));
        }
    }
    ctx->lr = 0x8082AE8Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B86A0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8082AE8C:
{
    r9 = MemoryInline::FlatRead32(r30);
    r5 = 1127219200;
    r4 = 0x80840000u;
    stackword6 = r5;
    MemoryInline::FlatWriteRam32((r1 + 16), r5);
    r7 = MemoryInline::FlatRead8((r9 + 33));
    r3 = r31;
    stackword7 = r7;
    MemoryInline::FlatWriteRam32((r1 + 20), r7);
    r6 = 0;
    r0 = MemoryInline::FlatRead8((r9 + 34));
    r8 = 0;
    f2.d = MemoryInline::FlatReadFloat64((r4 + 18560));
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword6), static_cast<uint32_t>(stackword7));
    stackword8 = r5;
    MemoryInline::FlatWriteRam32((r1 + 24), r5);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    r4 = MemoryInline::FlatRead32((r9 + 20));
    stackword9 = r0;
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    r5 = MemoryInline::FlatRead32((r9 + 24));
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword8), static_cast<uint32_t>(stackword9));
    f3.d = MemoryInline::FlatReadFloat32((r9 + 28));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    r7 = MemoryInline::FlatRead8((r9 + 32));
    ctx->lr = 0x8082AEE4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B8900u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003A7F gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8082ADC0 func_8082ADC0 preserves=true fpr_mask=0x00000000
