#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8045BD3C(CpuContext* ctx);
extern "C" uint64_t func_8045BD3C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804F5DF0(CpuContext* ctx);
extern "C" uint32_t func_804F5DF0_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804F8730(CpuContext* ctx);
extern "C" uint32_t func_804F8730_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_804F65F0_ra38_1e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mdest_3 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_mrot_3 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r7_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;

    goto loc_804F65F0;

loc_804F65F0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r6 = 0x80760000u;
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r7 = (r7_rot_0 & 1020);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r6 = (r6 + -10352);
    r31 = r5;
    r30 = r4;
    r29 = r3;
    MemoryInline::FlatWriteRam32((r1 + 8), r5);
    r6_addr_0 = (r6 + r7);
    r28 = MemoryInline::FlatRead32(r6_addr_0);
    r3 = MemoryInline::FlatRead8((r4 + 2));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r0_mrot_0 = (r0_rot_0 & 65280);
    r0_mdest_0 = (r0 & -65281);
    r0 = (r0_mdest_0 | r0_mrot_0);
    r0 = (r0 & 40735);
}

loc_804F663C:
{
    MemoryInline::FlatWrite16(r5, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r28 + 2232));
}

loc_804F6648:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804F6664;
    }
}

loc_804F664C:
{
}

loc_804F6650:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(3))) {
        goto loc_804F6664;
    }
}

loc_804F6654:
{
}

loc_804F6658:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(6))) {
        goto loc_804F6664;
    }
}

loc_804F665C:
{
}

loc_804F6660:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(10))) {
        goto loc_804F6670;
    }
}

loc_804F6664:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r5 + 41), static_cast<uint8_t>(r0));
    goto loc_804F6678;
}

loc_804F6670:
{
    r0 = -4;
    MemoryInline::FlatWrite8((r5 + 41), static_cast<uint8_t>(r0));
}

loc_804F6678:
{
    r0 = MemoryInline::FlatRead8((r28 + 2241));
    r3 = 0x80760000u;
    MemoryInline::FlatWrite8((r5 + 40), static_cast<uint8_t>(r0));
    r3 = (r3 + 3856);
    r5 = 8;
    r0 = MemoryInline::FlatRead8((r4 + 1));
    r4 = (r4 + 3);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(25));
    r0 = (r0_rot_1 & 1);
    MemoryInline::FlatWrite32((r28 + 2120), r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r3 = r29;
    r4 = (r30 + 3);
    r5 = 8;
    r6 = 0;
    if constexpr (KnownRegArgsCpuCall<0x804F8730u>(&func_804F8730)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_804F8730_124E = func_804F8730_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_804F8730_124E;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x804F8730u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r7 = ctx->gpr[7];
    }
    r0 = MemoryInline::FlatRead32((r28 + 2112));
}

loc_804F66BC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804F68E8;
    }
}

loc_804F66C0:
{
    r0 = MemoryInline::FlatRead8((r28 + 2241));
}

loc_804F66C8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_804F6860;
    }
}

loc_804F66CC:
{
    r3 = 0x80760000u;
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & 1020);
    r3 = (r3 + -10352);
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 3), 0, 6u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r30 + 3));
    MemoryInline::FlatWrite8((r4 + 48), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r30 + 4));
    MemoryInline::FlatWrite8((r4 + 49), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r30 + 5));
    r5 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r30 + 8));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r7 = MemoryInline::FlatRead16((r3 + 2190));
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r6 = (r4 & -4);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(30));
    r0 = (r0_rot_4 & 3);
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r6)));
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r6 | r0);
    r5 = (static_cast<int32_t>(r5) >> 2);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r0 - r7);
    MemoryInline::FlatWrite16((r4 + 42), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r30 + 6));
    r5 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r30 + 8));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r7 = MemoryInline::FlatRead16((r3 + 2192));
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r6 = (r4 & -4);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(28));
    r0 = (r0_rot_6 & 3);
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r6)));
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r6 | r0);
    r5 = (static_cast<int32_t>(r5) >> 4);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r0 - r7);
    MemoryInline::FlatWrite16((r4 + 44), static_cast<uint16_t>(r0));
    r4 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r30 + 7));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r30 + 8));
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r4 = (r4_rot_1 & -4);
    r6 = MemoryInline::FlatRead16((r3 + 2194));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    r0 = (static_cast<int32_t>(r0) >> 6);
    r5 = (r4 & -4);
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r5 | r0);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r0 - r6);
    MemoryInline::FlatWrite16((r4 + 46), static_cast<uint16_t>(r0));
    r5 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r30 + 8));
    r4 = MemoryInline::FlatRead16(r5);
    r0 = ~(r0 | r0);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(13));
    r0 = (r0_rot_7 & 24576);
    r0 = (r4 | r0);
    MemoryInline::FlatWrite16(r5, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 2321));
}

loc_804F67C0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804F67EC;
    }
}

loc_804F67C4:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 2321), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead8((r4 + 48));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::FlatWrite16((r3 + 2178), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead8((r4 + 49));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::FlatWrite16((r3 + 2184), static_cast<uint16_t>(r0));
}

loc_804F67EC:
{
    r5 = MemoryInline::FlatRead32((r1 + 8));
    r4 = MemoryInline::FlatRead16((r3 + 2178));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = MemoryInline::FlatRead8((r5 + 48));
    r4 = (r4 & 255);
    r0 = (r0 - r4);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_804F6808:
{
    r0 = r4;
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(-128))) {
        goto loc_804F6814;
    }
}

loc_804F6810:
{
    r0 = -128;
}

loc_804F6814:
{
}

loc_804F6818:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(127))) {
        goto loc_804F6820;
    }
}

loc_804F681C:
{
    r0 = 127;
}

loc_804F6820:
{
    MemoryInline::FlatWrite8((r5 + 48), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r3 = MemoryInline::FlatRead16((r3 + 2184));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead8((r4 + 49));
    r3 = (r3 & 255);
    r0 = (r0 - r3);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_804F6840:
{
    r0 = r3;
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(-128))) {
        goto loc_804F684C;
    }
}

loc_804F6848:
{
    r0 = -128;
}

loc_804F684C:
{
}

loc_804F6850:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(127))) {
        goto loc_804F6858;
    }
}

loc_804F6854:
{
    r0 = 127;
}

loc_804F6858:
{
    MemoryInline::FlatWrite8((r4 + 49), static_cast<uint8_t>(r0));
    goto loc_804F68B4;
}

loc_804F6860:
{
}

loc_804F6864:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_804F6884;
    }
}

loc_804F6868:
{
    r5 = MemoryInline::FlatRead8((r28 + 2242));
    r3 = r29;
    r4 = (r1 + 8);
    r6 = (r30 + 3);
    r7 = 8;
    if constexpr (KnownRegArgsCpuCall<0x804F5DF0u>(&func_804F5DF0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_804F5DF0_2F75 = func_804F5DF0_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_804F5DF0_2F75;
        r0 = ctx->gpr[0];
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
        InvokeDirectCpu<0x804F5DF0u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    goto loc_804F68B4;
}

loc_804F6884:
{
}

loc_804F6888:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(16))) {
        goto loc_804F68B4;
    }
}

loc_804F688C:
{
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead8((r30 + 5));
    MemoryInline::FlatWrite8((r4 + 44), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r30 + 6));
    MemoryInline::FlatWrite8((r4 + 45), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r30 + 9));
    r0 = MemoryInline::FlatRead8((r30 + 10));
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r0_mrot_1 = (r0_rot_8 & 65280);
    r0_mdest_1 = (r0 & -65281);
    r0 = (r0_mdest_1 | r0_mrot_1);
    r0 = (r0 ^ 65535);
    MemoryInline::FlatWrite16((r4 + 42), static_cast<uint16_t>(r0));
}

loc_804F68B4:
{
    r3 = 0x80760000u;
    r4 = 0x80570000u;
    r3 = (r3 + 3856);
    r5 = 8;
    r4 = (r4 + 17544);
    if constexpr (KnownRegArgsCpuCall<0x8045BD3Cu>(&func_8045BD3C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_8045BD3C_3676 = func_8045BD3C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8045BD3C_3676);
        r4 = static_cast<uint32_t>(regargs_result_8045BD3C_3676 >> 32);
        r0 = ctx->gpr[0];
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
        InvokeDirectCpu<0x8045BD3Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
}

loc_804F68D0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804F68E8;
    }
}

loc_804F68D4:
{
    r0 = MemoryInline::FlatRead8((r31 + 41));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804F68E8;
    }
}

loc_804F68E0:
{
    r0 = -7;
    MemoryInline::FlatWrite8((r31 + 41), static_cast<uint8_t>(r0));
}

loc_804F68E8:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804F65F0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804F65F0_ra38_1e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFB gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804F65F0 func_804F65F0 preserves=true fpr_mask=0x00000000
