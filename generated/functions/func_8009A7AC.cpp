#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_8009A7AC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r31_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;

    goto loc_8009A7AC;

loc_8009A7AC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r30 = r4;
    r31 = r5;
    r4 = 0;
}

loc_8009A7D8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8009A7EC;
    }
}

loc_8009A7DC:
{
    r0 = (r3 & 3);
}

loc_8009A7E4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8009A7EC;
    }
}

loc_8009A7E8:
{
    r4 = 1;
}

loc_8009A7EC:
{
}

loc_8009A7F0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8009A810;
    }
}

loc_8009A7F4:
{
    r3 = 0x80590000u;
    r3 = (r3 + 8224);
    r4 = 28;
    r5 = 0x80590000u;
    r5 = (r5 + 8236);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8009A810u;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
}

loc_8009A810:
{
    r3 = 0;
}

loc_8009A818:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8009A82C;
    }
}

loc_8009A81C:
{
    r0 = (r30 & 3);
}

loc_8009A824:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8009A82C;
    }
}

loc_8009A828:
{
    r3 = 1;
}

loc_8009A82C:
{
}

loc_8009A830:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8009A850;
    }
}

loc_8009A834:
{
    r3 = 0x80590000u;
    r3 = (r3 + 8224);
    r4 = 29;
    r5 = 0x80590000u;
    r5 = (r5 + 8288);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8009A850u;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
}

loc_8009A850:
{
    r0 = (r31 & 31);
}

loc_8009A858:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8009A878;
    }
}

loc_8009A85C:
{
    r3 = 0x80590000u;
    r3 = (r3 + 8224);
    r4 = 30;
    r5 = 0x80590000u;
    r5 = (r5 + 8340);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8009A878u;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
}

loc_8009A878:
{
    r31_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(27));
    r31 = (r31_rot_0 & 134217727);
}

loc_8009A880:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_8009A958;
    }
}

loc_8009A884:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(30));
    r0 = (r0_rot_1 & 1073741823);
}

loc_8009A88C:
{
    ctr = r0;
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009A928;
    }
}

loc_8009A894:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r30, 0, 128u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 0u, r30);
    guest_range_1 = MemoryInline::ResolveRangeHost(r29, 0, 128u, false, true);
    MemoryInline::WriteResolvedFloat64(guest_range_1, 0u, r29, f0.d);
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 8u, (r30 + 8));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 8u, (r29 + 8), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 16u, (r30 + 16));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 16u, (r29 + 16), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 24u, (r30 + 24));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 24u, (r29 + 24), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 32u, (r30 + 32));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 32u, (r29 + 32), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 40u, (r30 + 40));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 40u, (r29 + 40), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 48u, (r30 + 48));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 48u, (r29 + 48), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 56u, (r30 + 56));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 56u, (r29 + 56), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 64u, (r30 + 64));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 64u, (r29 + 64), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 72u, (r30 + 72));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 72u, (r29 + 72), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 80u, (r30 + 80));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 80u, (r29 + 80), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 88u, (r30 + 88));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 88u, (r29 + 88), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 96u, (r30 + 96));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 96u, (r29 + 96), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 104u, (r30 + 104));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 104u, (r29 + 104), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 112u, (r30 + 112));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 112u, (r29 + 112), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 120u, (r30 + 120));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 120u, (r29 + 120), f0.d);
    r30 = (r30 + 128);
    r29 = (r29 + 128);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8009A894;
    }
}

loc_8009A920:
{
    r31 = (r31 & 3);
}

loc_8009A924:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_8009A958;
    }
}

loc_8009A928:
{
    ctr = r31;
}

loc_8009A92C:
{
    f0.d = MemoryInline::FlatReadFloat64(r30);
    MemoryInline::FlatWriteFloat64(r29, f0.d);
    f0.d = MemoryInline::FlatReadFloat64((r30 + 8));
    MemoryInline::FlatWriteFloat64((r29 + 8), f0.d);
    f0.d = MemoryInline::FlatReadFloat64((r30 + 16));
    MemoryInline::FlatWriteFloat64((r29 + 16), f0.d);
    f0.d = MemoryInline::FlatReadFloat64((r30 + 24));
    MemoryInline::FlatWriteFloat64((r29 + 24), f0.d);
    r30 = (r30 + 32);
    r29 = (r29 + 32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8009A92C;
    }
}

loc_8009A958:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000001 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8009A7AC func_8009A7AC preserves=true fpr_mask=0x00000000
