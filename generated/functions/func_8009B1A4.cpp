#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8009ACA8(CpuContext* ctx);
extern "C" uint32_t func_8009ACA8_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8009ACA8_statefree(uint32_t, uint32_t, uint32_t, uint32_t);

extern "C" void func_8009B1A4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
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
    uint32_t r11 = ctx->gpr[11];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;

    goto loc_8009B1A4;

loc_8009B1A4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r11 = (r3 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_8009B1E0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009B1F8;
    }
}

loc_8009B1E4:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 2130706432);
}

loc_8009B1F0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009B1F8;
    }
}

loc_8009B1F4:
{
    r10 = 0;
}

loc_8009B1F8:
{
}

loc_8009B1FC:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_8009B214;
    }
}

loc_8009B200:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 1879048192);
}

loc_8009B20C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009B214;
    }
}

loc_8009B210:
{
    r9 = 0;
}

loc_8009B214:
{
}

loc_8009B218:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8009B22C;
    }
}

loc_8009B21C:
{
    r0 = (r11 + 1073741824);
}

loc_8009B224:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009B22C;
    }
}

loc_8009B228:
{
    r8 = 0;
}

loc_8009B22C:
{
}

loc_8009B230:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8009B248;
    }
}

loc_8009B234:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 1056964608);
}

loc_8009B240:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009B248;
    }
}

loc_8009B244:
{
    r7 = 0;
}

loc_8009B248:
{
}

loc_8009B24C:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8009B264;
    }
}

loc_8009B250:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 805306368);
}

loc_8009B25C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009B264;
    }
}

loc_8009B260:
{
    r6 = 0;
}

loc_8009B264:
{
}

loc_8009B268:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8009B280;
    }
}

loc_8009B26C:
{
    r3 = (r3 & -16384);
    r0 = (r3 + 536870912);
}

loc_8009B278:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009B280;
    }
}

loc_8009B27C:
{
    r5 = 0;
}

loc_8009B280:
{
}

loc_8009B284:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8009B2A8;
    }
}

loc_8009B288:
{
    r3 = 0x80590000u;
    r3 = (r3 + 8384);
    r4 = 255;
    r5 = 0x80590000u;
    r5 = (r5 + 8396);
    r6 = r31;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8009B2A8u;
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

loc_8009B2A8:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r31, 0, 32u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r31 + 12));
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r5 = (r5_rot_0 & -16777216);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r31 + 8));
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(18));
    r4 = (r4_rot_0 & -262144);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, r31);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(6));
    r3 = (r3_rot_0 & -64);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r31 + 4));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(12));
    r0 = (r0_rot_0 & -4096);
    r0 = (r3 | r0);
    r0 = (r4 | r0);
    r30 = (r5 | r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r31 + 28));
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(18));
    r5 = (r5_rot_1 & -262144);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r31 + 24));
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(12));
    r4 = (r4_rot_1 & -4096);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 16u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r31 + 16));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r31 + 20));
        }
    }
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(6));
    r0 = (r0_rot_1 & -64);
    r0 = (r3 | r0);
    r0 = (r4 | r0);
    r31 = (r5 | r0);
    r3 = 4120;
    r4 = 2;
    ctx->lr = 0x8009B308u;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8009ACA8u) && KnownTranslatedCpuCall<0x8009ACA8u>::kAvailable && !KnownTranslatedCpuCall<0x8009ACA8u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8009ACA8u>()) {
        const auto state_free_result_8009ACA8_1AC2 = func_8009ACA8_statefree(r1, r3, r4, 0x8009B308u);
        r1 = static_cast<uint32_t>(state_free_result_8009ACA8_1AC2);
    } else {
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
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        InvokeDirectCpu<0x8009ACA8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    }
    r3 = r30;
    // inline leaf 0x8009AB80 (3 guest instruction(s))
    r4 = -872349696;
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r3));
    // end of inlined leaf 0x8009AB80
    r3 = r31;
    // inline leaf 0x8009AB80 (3 guest instruction(s))
    r4 = -872349696;
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r3));
    // end of inlined leaf 0x8009AB80
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
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
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000FFB gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8009B1A4 func_8009B1A4 preserves=true fpr_mask=0x00000000
