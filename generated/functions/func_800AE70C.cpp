#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_800AE70C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r4_psq_tmp_0 = 0;
    uint32_t r4_psq_tmp_1 = 0;
    uint32_t r4_psq_tmp_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r5_psq_tmp_0 = 0;
    uint32_t r5_psq_tmp_1 = 0;
    uint32_t r5_psq_tmp_2 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_800AE70C;

loc_800AE70C:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r28 = r3;
    r29 = r4;
    r30 = r5;
    r31 = r6;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r11 = (r4 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_800AE754:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800AE76C;
    }
}

loc_800AE758:
{
    r3 = (r4 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800AE764:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800AE76C;
    }
}

loc_800AE768:
{
    r10 = 0;
}

loc_800AE76C:
{
}

loc_800AE770:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_800AE788;
    }
}

loc_800AE774:
{
    r3 = (r4 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800AE780:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800AE788;
    }
}

loc_800AE784:
{
    r9 = 0;
}

loc_800AE788:
{
}

loc_800AE78C:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800AE7A0;
    }
}

loc_800AE790:
{
    r0 = (r11 + 1073741824);
}

loc_800AE798:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800AE7A0;
    }
}

loc_800AE79C:
{
    r8 = 0;
}

loc_800AE7A0:
{
}

loc_800AE7A4:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800AE7BC;
    }
}

loc_800AE7A8:
{
    r3 = (r4 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800AE7B4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800AE7BC;
    }
}

loc_800AE7B8:
{
    r7 = 0;
}

loc_800AE7BC:
{
}

loc_800AE7C0:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800AE7D8;
    }
}

loc_800AE7C4:
{
    r3 = (r4 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800AE7D0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800AE7D8;
    }
}

loc_800AE7D4:
{
    r6 = 0;
}

loc_800AE7D8:
{
}

loc_800AE7DC:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800AE7F4;
    }
}

loc_800AE7E0:
{
    r3 = (r4 & -16384);
    r0 = (r3 + 536870912);
}

loc_800AE7EC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800AE7F4;
    }
}

loc_800AE7F0:
{
    r5 = 0;
}

loc_800AE7F4:
{
}

loc_800AE7F8:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800AE81C;
    }
}

loc_800AE7FC:
{
    r3 = 0x80590000u;
    r3 = (r3 + 14136);
    r4 = 848;
    r5 = 0x80590000u;
    r5 = (r5 + 15352);
    r6 = r29;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800AE81Cu;
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
    mkw_gqr0 = ctx->gqr[0];
}

loc_800AE81C:
{
    r4 = 1;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = (r30 & -16777216);
    r0 = (r10 + -2147483648);
}

loc_800AE840:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800AE858;
    }
}

loc_800AE844:
{
    r3 = (r30 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800AE850:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800AE858;
    }
}

loc_800AE854:
{
    r9 = 0;
}

loc_800AE858:
{
}

loc_800AE85C:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800AE874;
    }
}

loc_800AE860:
{
    r3 = (r30 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800AE86C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800AE874;
    }
}

loc_800AE870:
{
    r8 = 0;
}

loc_800AE874:
{
}

loc_800AE878:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800AE88C;
    }
}

loc_800AE87C:
{
    r0 = (r10 + 1073741824);
}

loc_800AE884:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800AE88C;
    }
}

loc_800AE888:
{
    r7 = 0;
}

loc_800AE88C:
{
}

loc_800AE890:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800AE8A8;
    }
}

loc_800AE894:
{
    r3 = (r30 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800AE8A0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800AE8A8;
    }
}

loc_800AE8A4:
{
    r6 = 0;
}

loc_800AE8A8:
{
}

loc_800AE8AC:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800AE8C4;
    }
}

loc_800AE8B0:
{
    r3 = (r30 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800AE8BC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800AE8C4;
    }
}

loc_800AE8C0:
{
    r5 = 0;
}

loc_800AE8C4:
{
}

loc_800AE8C8:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800AE8E0;
    }
}

loc_800AE8CC:
{
    r3 = (r30 & -16384);
    r0 = (r3 + 536870912);
}

loc_800AE8D8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800AE8E0;
    }
}

loc_800AE8DC:
{
    r4 = 0;
}

loc_800AE8E0:
{
}

loc_800AE8E4:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800AE908;
    }
}

loc_800AE8E8:
{
    r3 = 0x80590000u;
    r3 = (r3 + 14136);
    r4 = 849;
    r5 = 0x80590000u;
    r5 = (r5 + 15404);
    r6 = r30;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800AE908u;
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
    mkw_gqr0 = ctx->gqr[0];
}

loc_800AE908:
{
    r4 = 1;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = (r31 & -16777216);
    r0 = (r10 + -2147483648);
}

loc_800AE92C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800AE944;
    }
}

loc_800AE930:
{
    r3 = (r31 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800AE93C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800AE944;
    }
}

loc_800AE940:
{
    r9 = 0;
}

loc_800AE944:
{
}

loc_800AE948:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800AE960;
    }
}

loc_800AE94C:
{
    r3 = (r31 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800AE958:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800AE960;
    }
}

loc_800AE95C:
{
    r8 = 0;
}

loc_800AE960:
{
}

loc_800AE964:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800AE978;
    }
}

loc_800AE968:
{
    r0 = (r10 + 1073741824);
}

loc_800AE970:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800AE978;
    }
}

loc_800AE974:
{
    r7 = 0;
}

loc_800AE978:
{
}

loc_800AE97C:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800AE994;
    }
}

loc_800AE980:
{
    r3 = (r31 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800AE98C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800AE994;
    }
}

loc_800AE990:
{
    r6 = 0;
}

loc_800AE994:
{
}

loc_800AE998:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800AE9B0;
    }
}

loc_800AE99C:
{
    r3 = (r31 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800AE9A8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800AE9B0;
    }
}

loc_800AE9AC:
{
    r5 = 0;
}

loc_800AE9B0:
{
}

loc_800AE9B4:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800AE9CC;
    }
}

loc_800AE9B8:
{
    r3 = (r31 & -16384);
    r0 = (r3 + 536870912);
}

loc_800AE9C4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800AE9CC;
    }
}

loc_800AE9C8:
{
    r4 = 0;
}

loc_800AE9CC:
{
}

loc_800AE9D0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800AE9F4;
    }
}

loc_800AE9D4:
{
    r3 = 0x80590000u;
    r3 = (r3 + 14136);
    r4 = 850;
    r5 = 0x80590000u;
    r5 = (r5 + 15460);
    r6 = r31;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800AE9F4u;
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
    mkw_gqr0 = ctx->gqr[0];
}

loc_800AE9F4:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r28 + 108), 0, 16u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r28 + 108));
}

loc_800AE9FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_800AEA0C;
    }
}

loc_800AEA00:
{
}

loc_800AEA04:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_800AEAF0;
    }
}

loc_800AEA08:
{
    goto loc_800AEE58;
}

loc_800AEA0C:
{
    r3 = MemoryInline::FlatRead8(r30);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r28 + 109));
    r3 = (r3 * r0);
    r0 = (r3 + 128);
    r0 = (static_cast<int32_t>(r0) >> 8);
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r30 + 1));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r28 + 110));
    r3 = (r3 * r0);
    r0 = (r3 + 128);
    r0 = (static_cast<int32_t>(r0) >> 8);
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8((r30 + 1), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r30 + 2));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r28 + 111));
    r3 = (r3 * r0);
    r0 = (r3 + 128);
    r0 = (static_cast<int32_t>(r0) >> 8);
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8((r30 + 2), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r30 + 3));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r28 + 112));
    r3 = (r3 * r0);
    r0 = (r3 + 128);
    r0 = (static_cast<int32_t>(r0) >> 8);
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8((r30 + 3), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8(r31);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r28 + 109));
    r3 = (r3 * r0);
    r0 = (r3 + 128);
    r0 = (static_cast<int32_t>(r0) >> 8);
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r31 + 1));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r28 + 110));
    r3 = (r3 * r0);
    r0 = (r3 + 128);
    r0 = (static_cast<int32_t>(r0) >> 8);
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8((r31 + 1), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r31 + 2));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r28 + 111));
    r3 = (r3 * r0);
    r0 = (r3 + 128);
    r0 = (static_cast<int32_t>(r0) >> 8);
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8((r31 + 2), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r31 + 3));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r28 + 112));
    r3 = (r3 * r0);
    r0 = (r3 + 128);
    r0 = (static_cast<int32_t>(r0) >> 8);
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8((r31 + 3), static_cast<uint8_t>(r0));
    goto loc_800AEE58;
}

loc_800AEAF0:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r28 + 120));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31168));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800AEAFC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800AEBE4;
    }
}

loc_800AEB00:
{
    r3 = MemoryInline::FlatRead8(r30);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r28 + 109));
    r3 = (r3 * r0);
    r0 = (r3 + 128);
    r0 = (static_cast<int32_t>(r0) >> 8);
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r30 + 1));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r28 + 110));
    r3 = (r3 * r0);
    r0 = (r3 + 128);
    r0 = (static_cast<int32_t>(r0) >> 8);
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8((r30 + 1), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r30 + 2));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r28 + 111));
    r3 = (r3 * r0);
    r0 = (r3 + 128);
    r0 = (static_cast<int32_t>(r0) >> 8);
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8((r30 + 2), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r30 + 3));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r28 + 112));
    r3 = (r3 * r0);
    r0 = (r3 + 128);
    r0 = (static_cast<int32_t>(r0) >> 8);
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8((r30 + 3), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8(r31);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r28 + 109));
    r3 = (r3 * r0);
    r0 = (r3 + 128);
    r0 = (static_cast<int32_t>(r0) >> 8);
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r31 + 1));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r28 + 110));
    r3 = (r3 * r0);
    r0 = (r3 + 128);
    r0 = (static_cast<int32_t>(r0) >> 8);
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8((r31 + 1), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r31 + 2));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r28 + 111));
    r3 = (r3 * r0);
    r0 = (r3 + 128);
    r0 = (static_cast<int32_t>(r0) >> 8);
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8((r31 + 2), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r31 + 3));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r28 + 112));
    r3 = (r3 * r0);
    r0 = (r3 + 128);
    r0 = (static_cast<int32_t>(r0) >> 8);
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8((r31 + 3), static_cast<uint8_t>(r0));
    goto loc_800AEE58;
}

loc_800AEBE4:
{
    r3 = MemoryInline::FlatRead32((r29 + 200));
    // inline leaf 0x800AE6FC (3 guest instruction(s))
    r3 = 0x80690000u;
    r3 = (r3 + 27112);
    // end of inlined leaf 0x800AE6FC
    r27 = r3;
    r3 = (r1 + 8);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 8);
    r4 = r27;
    r5 = (r29 + 172);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80051560u>(ctx);
    r3 = (r1 + 8);
    r4 = r3;
    r5 = (r28 + 124);
    // inline leaf 0x80050D58 (9 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r4));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r5));
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f0.d, f1.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r3, f0.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_1 = (r4 + 8);
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<1u, 0u>(ctx, r4_psq_tmp_1));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r5_psq_tmp_1 = (r5 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_1));
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f0.d, f1.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_1 = (r3 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r3_psq_tmp_1, f0.d);
    // end of inlined leaf 0x80050D58
    r3 = (r1 + 8);
    ctx->lr = 0x800AEC20u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80050F88u>(ctx);
    f1 = ctx->fpr[1];
    guest_range_1 = MemoryInline::ResolveRangeHost((r28 + 109), 0, 15u, true, false);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 11u, (r28 + 120));
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_800AEC28:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800AED10;
    }
}

loc_800AEC2C:
{
    r3 = MemoryInline::FlatRead8(r30);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 0u, (r28 + 109));
    r3 = (r3 * r0);
    r0 = (r3 + 128);
    r0 = (static_cast<int32_t>(r0) >> 8);
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r30 + 1));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 1u, (r28 + 110));
    r3 = (r3 * r0);
    r0 = (r3 + 128);
    r0 = (static_cast<int32_t>(r0) >> 8);
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8((r30 + 1), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r30 + 2));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 2u, (r28 + 111));
    r3 = (r3 * r0);
    r0 = (r3 + 128);
    r0 = (static_cast<int32_t>(r0) >> 8);
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8((r30 + 2), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r30 + 3));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 3u, (r28 + 112));
    r3 = (r3 * r0);
    r0 = (r3 + 128);
    r0 = (static_cast<int32_t>(r0) >> 8);
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8((r30 + 3), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8(r31);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 0u, (r28 + 109));
    r3 = (r3 * r0);
    r0 = (r3 + 128);
    r0 = (static_cast<int32_t>(r0) >> 8);
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r31 + 1));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 1u, (r28 + 110));
    r3 = (r3 * r0);
    r0 = (r3 + 128);
    r0 = (static_cast<int32_t>(r0) >> 8);
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8((r31 + 1), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r31 + 2));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 2u, (r28 + 111));
    r3 = (r3 * r0);
    r0 = (r3 + 128);
    r0 = (static_cast<int32_t>(r0) >> 8);
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8((r31 + 2), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r31 + 3));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 3u, (r28 + 112));
    r3 = (r3 * r0);
    r0 = (r3 + 128);
    r0 = (static_cast<int32_t>(r0) >> 8);
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8((r31 + 3), static_cast<uint8_t>(r0));
    goto loc_800AEE58;
}

loc_800AED10:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31164));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f2.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword0;
    r5 = MemoryInline::ReadResolved8(guest_range_1, 4u, (r28 + 113));
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(8));
    r4 = (r4_rot_1 & -256);
    r3 = MemoryInline::ReadResolved8(guest_range_1, 0u, (r28 + 109));
    r3 = (r3 - r5);
    r3 = (r0 * r3);
    r3 = (r4 + r3);
    r3 = (r3 & 65535);
    r6 = MemoryInline::ReadResolved8(guest_range_1, 5u, (r28 + 114));
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(8));
    r5 = (r5_rot_1 & -256);
    r4 = MemoryInline::ReadResolved8(guest_range_1, 1u, (r28 + 110));
    r4 = (r4 - r6);
    r4 = (r0 * r4);
    r4 = (r5 + r4);
    r4 = (r4 & 65535);
    r7 = MemoryInline::ReadResolved8(guest_range_1, 6u, (r28 + 115));
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(8));
    r6 = (r6_rot_1 & -256);
    r5 = MemoryInline::ReadResolved8(guest_range_1, 2u, (r28 + 111));
    r5 = (r5 - r7);
    r5 = (r0 * r5);
    r5 = (r6 + r5);
    r5 = (r5 & 65535);
    r8 = MemoryInline::ReadResolved8(guest_range_1, 7u, (r28 + 116));
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(8));
    r7 = (r7_rot_1 & -256);
    r6 = MemoryInline::ReadResolved8(guest_range_1, 3u, (r28 + 112));
    r6 = (r6 - r8);
    r0 = (r0 * r6);
    r0 = (r7 + r0);
    r0 = (r0 & 65535);
    r6 = MemoryInline::FlatRead8(r30);
    r6 = (r6 * r3);
    r6 = (r6 + 128);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r6 = (r6 & 255);
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r6));
    r6 = MemoryInline::FlatRead8((r30 + 1));
    r6 = (r6 * r4);
    r6 = (r6 + 128);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r6 = (r6 & 255);
    MemoryInline::FlatWrite8((r30 + 1), static_cast<uint8_t>(r6));
    r6 = MemoryInline::FlatRead8((r30 + 2));
    r6 = (r6 * r5);
    r6 = (r6 + 128);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r6 = (r6 & 255);
    MemoryInline::FlatWrite8((r30 + 2), static_cast<uint8_t>(r6));
    r6 = MemoryInline::FlatRead8((r30 + 3));
    r6 = (r6 * r0);
    r6 = (r6 + 128);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r6 = (r6 & 255);
    MemoryInline::FlatWrite8((r30 + 3), static_cast<uint8_t>(r6));
    r6 = MemoryInline::FlatRead8(r31);
    r3 = (r6 * r3);
    r3 = (r3 + 128);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r3 = (r3 & 255);
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r3));
    r3 = MemoryInline::FlatRead8((r31 + 1));
    r3 = (r3 * r4);
    r3 = (r3 + 128);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r3 = (r3 & 255);
    MemoryInline::FlatWrite8((r31 + 1), static_cast<uint8_t>(r3));
    r3 = MemoryInline::FlatRead8((r31 + 2));
    r3 = (r3 * r5);
    r3 = (r3 + 128);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r3 = (r3 & 255);
    MemoryInline::FlatWrite8((r31 + 2), static_cast<uint8_t>(r3));
    r3 = MemoryInline::FlatRead8((r31 + 3));
    r3 = (r3 * r0);
    r0 = (r3 + 128);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8((r31 + 3), static_cast<uint8_t>(r0));
}

loc_800AEE58:
{
    r11 = (r1 + 64);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
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
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000FFF gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x00000007 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800AE70C func_800AE70C preserves=true fpr_mask=0x00000000
