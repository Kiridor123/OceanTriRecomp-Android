#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8045BD3C(CpuContext* ctx);
extern "C" uint64_t func_8045BD3C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804F8730(CpuContext* ctx);
extern "C" uint32_t func_804F8730_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_804F6A60_ra38_1e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mdest_3 = 0;
    uint32_t r0_mdest_4 = 0;
    uint32_t r0_mdest_5 = 0;
    uint32_t r0_mdest_6 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_mrot_3 = 0;
    uint32_t r0_mrot_4 = 0;
    uint32_t r0_mrot_5 = 0;
    uint32_t r0_mrot_6 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r7_addr_0 = 0;
    uint32_t r8_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;

    goto loc_804F6A60;

loc_804F6A60:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r7 = 0x80760000u;
    r8_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r8 = (r8_rot_0 & 1020);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r7 = (r7 + -10352);
    r30 = r5;
    r29 = r4;
    r28 = r3;
    r6 = MemoryInline::FlatRead8((r4 + 2));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(8));
    r0_mrot_0 = (r0_rot_0 & 65280);
    r0_mdest_0 = (r0 & -65281);
    r0 = (r0_mdest_0 | r0_mrot_0);
    r7_addr_0 = (r7 + r8);
    r31 = MemoryInline::FlatRead32(r7_addr_0);
    r0 = (r0 & 40735);
}

loc_804F6AA8:
{
    MemoryInline::FlatWrite16(r5, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r31 + 2232));
}

loc_804F6AB4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(12))) {
        goto loc_804F6AC4;
    }
}

loc_804F6AB8:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r5 + 41), static_cast<uint8_t>(r0));
    goto loc_804F6ACC;
}

loc_804F6AC4:
{
    r0 = -4;
    MemoryInline::FlatWrite8((r5 + 41), static_cast<uint8_t>(r0));
}

loc_804F6ACC:
{
    r0 = MemoryInline::FlatRead8((r31 + 2241));
    r3 = 0x80760000u;
    MemoryInline::FlatWrite8((r5 + 40), static_cast<uint8_t>(r0));
    r3 = (r3 + 3856);
    r5 = 19;
    r0 = MemoryInline::FlatRead8((r4 + 1));
    r4 = (r4 + 3);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(25));
    r0 = (r0_rot_1 & 1);
    MemoryInline::FlatWrite32((r31 + 2120), r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r3 = r28;
    r4 = (r29 + 3);
    r5 = 19;
    r6 = 0;
    if constexpr (KnownRegArgsCpuCall<0x804F8730u>(&func_804F8730)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_804F8730_FFA = func_804F8730_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_804F8730_FFA;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x804F8730u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
    r0 = MemoryInline::FlatRead32((r31 + 2112));
}

loc_804F6B10:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804F6C20;
    }
}

loc_804F6B14:
{
    r0 = MemoryInline::FlatRead8((r31 + 2241));
}

loc_804F6B1C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_804F6BEC;
    }
}

loc_804F6B20:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r29 + 3), 0, 11u, true, false);
    r3 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r29 + 3));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r29 + 4));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r0_mrot_1 = (r0_rot_2 & 65280);
    r0_mdest_1 = (r0 & -65281);
    r0 = (r0_mdest_1 | r0_mrot_1);
    MemoryInline::FlatWrite16((r30 + 42), static_cast<uint16_t>(r0));
    r3 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r29 + 5));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r29 + 6));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r0_mrot_2 = (r0_rot_3 & 65280);
    r0_mdest_2 = (r0 & -65281);
    r0 = (r0_mdest_2 | r0_mrot_2);
    MemoryInline::FlatWrite16((r30 + 44), static_cast<uint16_t>(r0));
    r3 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r29 + 7));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r29 + 8));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r0_mrot_3 = (r0_rot_4 & 65280);
    r0_mdest_3 = (r0 & -65281);
    r0 = (r0_mdest_3 | r0_mrot_3);
    MemoryInline::FlatWrite16((r30 + 46), static_cast<uint16_t>(r0));
    r3 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r29 + 9));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r29 + 10));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r0_mrot_4 = (r0_rot_5 & 65280);
    r0_mdest_4 = (r0 & -65281);
    r0 = (r0_mdest_4 | r0_mrot_4);
    MemoryInline::FlatWrite16((r30 + 48), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 8u, (r29 + 11));
    MemoryInline::FlatWrite8((r30 + 50), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 10u, (r29 + 13));
    MemoryInline::FlatWrite8((r30 + 51), static_cast<uint8_t>(r0));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & -2);
}

loc_804F6B78:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(260))) {
        goto loc_804F6B88;
    }
}

loc_804F6B7C:
{
    r0 = 4;
    MemoryInline::FlatWrite8((r31 + 2447), static_cast<uint8_t>(r0));
    goto loc_804F6BD8;
}

loc_804F6B88:
{
    r0 = (r3 + -250);
}

loc_804F6B90:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(9))) {
        goto loc_804F6BA0;
    }
}

loc_804F6B94:
{
    r0 = 3;
    MemoryInline::FlatWrite8((r31 + 2447), static_cast<uint8_t>(r0));
    goto loc_804F6BD8;
}

loc_804F6BA0:
{
    r0 = (r3 + -240);
}

loc_804F6BA8:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(9))) {
        goto loc_804F6BB8;
    }
}

loc_804F6BAC:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r31 + 2447), static_cast<uint8_t>(r0));
    goto loc_804F6BD8;
}

loc_804F6BB8:
{
    r0 = (r3 + -212);
}

loc_804F6BC0:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(27))) {
        goto loc_804F6BD0;
    }
}

loc_804F6BC4:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 2447), static_cast<uint8_t>(r0));
    goto loc_804F6BD8;
}

loc_804F6BD0:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 2447), static_cast<uint8_t>(r0));
}

loc_804F6BD8:
{
    r0 = MemoryInline::FlatRead8((r31 + 2321));
}

loc_804F6BE0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804F6BEC;
    }
}

loc_804F6BE4:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 2321), static_cast<uint8_t>(r0));
}

loc_804F6BEC:
{
    r3 = 0x80760000u;
    r4 = 0x80570000u;
    r3 = (r3 + 3856);
    r5 = 19;
    r4 = (r4 + 17544);
    if constexpr (KnownRegArgsCpuCall<0x8045BD3Cu>(&func_8045BD3C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_8045BD3C_23CB = func_8045BD3C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8045BD3C_23CB);
        r4 = static_cast<uint32_t>(regargs_result_8045BD3C_23CB >> 32);
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

loc_804F6C08:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804F6C20;
    }
}

loc_804F6C0C:
{
    r0 = MemoryInline::FlatRead8((r30 + 41));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804F6C20;
    }
}

loc_804F6C18:
{
    r0 = -7;
    MemoryInline::FlatWrite8((r30 + 41), static_cast<uint8_t>(r0));
}

loc_804F6C20:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804F6A60(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804F6A60_ra38_1e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00001FFB gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804F6A60 func_804F6A60 preserves=true fpr_mask=0x00000000
