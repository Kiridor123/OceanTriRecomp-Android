#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804E77E0(CpuContext* ctx);
extern "C" uint64_t func_804E77E0_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_804E7900_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_ca_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_subfc_min_0 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r30_rot_0 = 0;
    uint32_t r3_mdest_0 = 0;
    uint32_t r3_mdest_1 = 0;
    uint32_t r3_mdest_2 = 0;
    uint32_t r3_mrot_0 = 0;
    uint32_t r3_mrot_1 = 0;
    uint32_t r3_mrot_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r9_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x804E7900u);
    goto loc_804E7900;

loc_804E7900:
{
    MemoryHw::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r4 = 0x80000000u;
    MemoryHw::FlatWriteRam32((r1 + 36), r0);
    r31 = (r3 & 3);
    r30_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(30));
    r30 = (r30_rot_0 & 1073741823);
    MemoryHw::FlatWriteRam32((r4 + 204), r30);
    if constexpr (KnownRegArgsCpuCall<0x804E77E0u>(&func_804E77E0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_804E77E0_8BE = func_804E77E0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804E77E0_8BE);
        r4 = static_cast<uint32_t>(regargs_result_804E77E0_8BE >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x804E77E0u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r4 = -872415232;
    r0 = 2;
    MemoryHw::FlatWrite16((r4 + 8194), static_cast<uint16_t>(r0));
    r0 = 0;
    MemoryHw::FlatWriteRam32((r1 + 8), r0);
    goto loc_804E794C;
}

loc_804E7940:
{
    r4 = MemoryHw::FlatRead32((r1 + 8));
    r0 = (r4 + 1);
    MemoryHw::FlatWriteRam32((r1 + 8), r0);
}

loc_804E794C:
{
    r0 = MemoryHw::FlatRead32((r1 + 8));
}

loc_804E7954:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(1000))) {
        goto loc_804E7940;
    }
}

loc_804E7958:
{
    r5 = -872415232;
    r0 = 0;
    MemoryHw::FlatWrite16((r5 + 8194), static_cast<uint16_t>(r0));
    guest_range_0 = MemoryHw::ResolveRangeHost(r3, 0, 38u, true, false);
    r0 = MemoryHw::ReadResolved16(guest_range_0, 26u, (r3 + 26));
    MemoryHw::FlatWrite16((r5 + 8198), static_cast<uint16_t>(r0));
    r4 = MemoryHw::ReadResolved8(guest_range_0, 29u, (r3 + 29));
    r0 = MemoryHw::ReadResolved8(guest_range_0, 30u, (r3 + 30));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r0_mrot_0 = (r0_rot_0 & 65280);
    r0_mdest_0 = (r0 & -65281);
    r0 = (r0_mdest_0 | r0_mrot_0);
    MemoryHw::FlatWrite16((r5 + 8196), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved8(guest_range_0, 31u, (r3 + 31));
    r4 = MemoryHw::ReadResolved8(guest_range_0, 28u, (r3 + 28));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(7));
    r0 = (r0_rot_1 & -128);
    r0 = (r4 | r0);
    MemoryHw::FlatWrite16((r5 + 8202), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_0, 32u, (r3 + 32));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 65534);
    MemoryHw::FlatWrite16((r5 + 8200), static_cast<uint16_t>(r0));
    r0 = MemoryHw::FlatRead32((r13 + -14288));
}

loc_804E79A4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804E79BC;
    }
}

loc_804E79A8:
{
    r0 = MemoryHw::ReadResolved8(guest_range_0, 34u, (r3 + 34));
    r0 = (r0 | 32768);
    MemoryHw::FlatWrite16((r5 + 8306), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_0, 36u, (r3 + 36));
    MemoryHw::FlatWrite16((r5 + 8308), static_cast<uint16_t>(r0));
}

loc_804E79BC:
{
    r4 = -872415232;
    r0 = MemoryHw::ReadResolved8(guest_range_0, 0u, r3);
    MemoryHw::FlatWrite16((r4 + 8192), static_cast<uint16_t>(r0));
    r5 = (r30 + -1);
    r0 = 2;
    r8 = 10280;
    r10 = MemoryHw::ReadResolved16(guest_range_0, 2u, (r3 + 2));
    r0_subfc_min_0 = r0;
    r0 = (r0_subfc_min_0 - r5);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r0_subfc_min_0) >= static_cast<uint32_t>(r5) ? 1u : 0u) << 29);
    r9 = MemoryHw::ReadResolved16(guest_range_0, 4u, (r3 + 4));
    r7 = 1;
    r10_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(1));
    r10 = (r10_rot_0 & -2);
    r6 = 4097;
    r9 = (r9 + r10);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(1));
}

loc_804E79F4:
{
    r0 = (r9 + -2);
    MemoryHw::FlatWrite16((r4 + 8206), static_cast<uint16_t>(r0));
    r0_ca_0 = (xer >> 29) & 1u;
    r0 = (r5 + r0_ca_0);
    r9 = MemoryHw::ReadResolved16(guest_range_0, 8u, (r3 + 8));
    r0 = (r5 - r0);
    r0 = (r30 & r0);
    r5 = (r9 + 2);
    MemoryHw::FlatWrite16((r4 + 8204), static_cast<uint16_t>(r5));
    r9 = MemoryHw::ReadResolved16(guest_range_0, 2u, (r3 + 2));
    r5 = MemoryHw::ReadResolved16(guest_range_0, 6u, (r3 + 6));
    r9_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(1));
    r9 = (r9_rot_0 & -2);
    r5 = (r5 + r9);
    r5 = (r5 + -2);
    MemoryHw::FlatWrite16((r4 + 8210), static_cast<uint16_t>(r5));
    r5 = MemoryHw::ReadResolved16(guest_range_0, 10u, (r3 + 10));
    r5 = (r5 + 2);
    MemoryHw::FlatWrite16((r4 + 8208), static_cast<uint16_t>(r5));
    r5 = MemoryHw::ReadResolved16(guest_range_0, 16u, (r3 + 16));
    r9 = MemoryHw::ReadResolved8(guest_range_0, 12u, (r3 + 12));
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(5));
    r5 = (r5_rot_0 & -32);
    r5 = (r9 | r5);
    MemoryHw::FlatWrite16((r4 + 8214), static_cast<uint16_t>(r5));
    r5 = MemoryHw::ReadResolved16(guest_range_0, 20u, (r3 + 20));
    r9 = MemoryHw::ReadResolved8(guest_range_0, 14u, (r3 + 14));
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(5));
    r5 = (r5_rot_1 & -32);
    r5 = (r9 | r5);
    MemoryHw::FlatWrite16((r4 + 8212), static_cast<uint16_t>(r5));
    r5 = MemoryHw::ReadResolved16(guest_range_0, 18u, (r3 + 18));
    r9 = MemoryHw::ReadResolved8(guest_range_0, 13u, (r3 + 13));
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(5));
    r5 = (r5_rot_2 & -32);
    r5 = (r9 | r5);
    MemoryHw::FlatWrite16((r4 + 8218), static_cast<uint16_t>(r5));
    r5 = MemoryHw::ReadResolved16(guest_range_0, 22u, (r3 + 22));
    r9 = MemoryHw::ReadResolved8(guest_range_0, 15u, (r3 + 15));
    r5_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(5));
    r5 = (r5_rot_3 & -32);
    r5 = (r9 | r5);
    MemoryHw::FlatWrite16((r4 + 8216), static_cast<uint16_t>(r5));
    MemoryHw::FlatWrite16((r4 + 8264), static_cast<uint16_t>(r8));
    MemoryHw::FlatWrite16((r4 + 8246), static_cast<uint16_t>(r7));
    MemoryHw::FlatWrite16((r4 + 8244), static_cast<uint16_t>(r6));
    {
        const auto resolved_pair = MemoryHw::ReadResolvedPair16(guest_range_0, 24u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r3 = resolved_pair.second;
        } else {
            r5 = MemoryHw::ReadResolved16(guest_range_0, 24u, (r3 + 24));
            r3 = MemoryHw::ReadResolved16(guest_range_0, 26u, (r3 + 26));
        }
    }
    r5_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(31));
    r5 = (r5_rot_4 & 2147483647);
    r5 = (r5 + 1);
    r3 = (r3 + 1);
    r5 = (r5 & 65535);
    MemoryHw::FlatWrite16((r4 + 8242), static_cast<uint16_t>(r3));
    r3 = (r5 | 4096);
    MemoryHw::FlatWrite16((r4 + 8240), static_cast<uint16_t>(r3));
    if (((cr & 0x40000000u) != 0)) {
        goto loc_804E7AD8;
    }
}

loc_804E7ABC:
{
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r3 = (r3_rot_0 & -256);
    r0 = 0;
    r3 = (r3 | 1);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(2));
    r3_mrot_0 = (r3_rot_1 & 4);
    r3_mdest_0 = (r3 & -5);
    r3 = (r3_mdest_0 | r3_mrot_0);
    MemoryHw::FlatWrite16((r4 + 8194), static_cast<uint16_t>(r3));
    MemoryHw::FlatWrite16((r4 + 8300), static_cast<uint16_t>(r0));
    goto loc_804E7AE8;
}

loc_804E7AD8:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_3 & -256);
    r0 = (r0 | 5);
    MemoryHw::FlatWrite16((r4 + 8194), static_cast<uint16_t>(r0));
    MemoryHw::FlatWrite16((r4 + 8300), static_cast<uint16_t>(r7));
}

loc_804E7AE8:
{
    r0 = MemoryHw::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    ctx->xer = xer;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804E7900(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804E7900_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000023FB gpr_write=0x000007FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804E7900 func_804E7900 preserves=true fpr_mask=0x00000000
