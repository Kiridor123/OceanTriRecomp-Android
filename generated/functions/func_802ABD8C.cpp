#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8005001C(CpuContext* ctx);
extern "C" double func_8005001C_ra18_0_0_2(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_802ABD8C_ra58_e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r6, double arg_f1, double arg_f2, double arg_f3)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r19 = ctx->gpr[19];
    uint32_t r20 = ctx->gpr[20];
    uint32_t r21 = ctx->gpr[21];
    uint32_t r22 = ctx->gpr[22];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    ctx->gpr[6] = arg_r6;

    MKW_GUEST_ENTER(0x802ABD8Cu);
    goto loc_802ABD8C;

loc_802ABD8C:
{
    MemoryInline::FlatWriteRam32((r1 + -128), r1);
    r1 = (r1 + -128);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 132), r0);
    r11 = (r1 + 128);
    // inline leaf 0x80457468 (14 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -52), 0, 52u, false, true);
    // end of inlined leaf 0x80457468
    r19 = r3;
    r3 = (r1 + 8);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 24);
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    r3 = (r19 + 1424);
    r4 = 0;
    r5 = 432;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r20 = (r19 + 1424);
    r0 = MemoryInline::FlatRead8((r19 + 3));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & -2);
    r3 = 0x805D0000u;
    r4 = (r3 + -4176);
    r3 = (r4 + r0);
    r21 = MemoryInline::FlatRead8((r3 + 1));
    r21 = (static_cast<int32_t>(static_cast<int8_t>(r21)));
    r4_addr_0 = (r4 + r0);
    r22 = MemoryInline::FlatRead8(r4_addr_0);
    r22 = (static_cast<int32_t>(static_cast<int8_t>(r22)));
    r24 = 0;
    r4 = (r21 * 14);
    r3 = 0x805D0000u;
    r0 = (r3 + -4064);
    r29 = (r0 + r4);
    r3 = 0x805D0000u;
    r19 = (r3 + -4600);
    r30 = 1;
    r31 = 0;
    goto loc_802ABF08;
}

loc_802ABE14:
{
    guest_range_2 = MemoryInline::ResolveRangeHost(r20, 0, 16u, false, true);
    MemoryInline::WriteResolved8(guest_range_2, 0u, r20, static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_2, 3u, (r20 + 3), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_2, 6u, (r20 + 6), static_cast<uint8_t>(r30));
    r0 = (r21 + r24);
    r0 = (r0 & 255);
    MemoryInline::WriteResolved8(guest_range_2, 5u, (r20 + 5), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8(r29);
    MemoryInline::WriteResolved8(guest_range_2, 1u, (r20 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r29 + 1));
    MemoryInline::WriteResolved8(guest_range_2, 2u, (r20 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r29 + 2));
    MemoryInline::WriteResolved32(guest_range_2, 8u, (r20 + 8), r0);
    r0 = MemoryInline::FlatRead8((r29 + 4));
    MemoryInline::WriteResolved32(guest_range_2, 12u, (r20 + 12), r0);
    r0 = MemoryInline::FlatRead16((r29 + 12));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 & 255);
    MemoryInline::WriteResolved8(guest_range_2, 4u, (r20 + 4), static_cast<uint8_t>(r0));
    r23 = 0;
    r28 = r20;
    r27 = r29;
    r26 = (r20 + 84);
    r25 = (r20 + 60);
    goto loc_802ABEB8;
}

loc_802ABE70:
{
    r3 = (r29 + r23);
    r0 = MemoryInline::FlatRead8((r3 + 5));
    MemoryInline::FlatWrite32((r28 + 16), r0);
    r3 = r26;
    r0 = MemoryInline::FlatRead16((r27 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 * 12);
    r4 = (r19 + r0);
    if constexpr (KnownRegArgsCpuCall<0x8005001Cu>(&func_8005001C)) {
        ctx->gpr[1] = r1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        const auto regargs_result_8005001C_1240 = func_8005001C_ra18_0_0_2(ctx, r3, r4);
        f1.d = regargs_result_8005001C_1240;
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x8005001Cu>(ctx);
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    r3 = r25;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -13968));
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r28 = (r28 + 4);
    r27 = (r27 + 2);
    r26 = (r26 + 12);
    r25 = (r25 + 12);
    r23 = (r23 + 1);
}

loc_802ABEB8:
{
    r0 = MemoryInline::FlatRead32((r20 + 8));
}

loc_802ABEC0:
{
    if ((static_cast<uint32_t>(r23) < static_cast<uint32_t>(r0))) {
        goto loc_802ABE70;
    }
}

loc_802ABEC4:
{
    r25 = 0;
    r23 = (r20 + 24);
    goto loc_802ABEEC;
}

loc_802ABED0:
{
    r3 = r23;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -13968));
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r23 = (r23 + 12);
    r25 = (r25 + 1);
}

loc_802ABEEC:
{
    r3 = MemoryInline::FlatRead32((r20 + 8));
    r0 = (r3 + 1);
}

loc_802ABEF8:
{
    if ((static_cast<uint32_t>(r25) < static_cast<uint32_t>(r0))) {
        goto loc_802ABED0;
    }
}

loc_802ABEFC:
{
    r29 = (r29 + 14);
    r24 = (r24 + 1);
    r20 = (r20 + 144);
}

loc_802ABF08:
{
}

loc_802ABF0C:
{
    if ((static_cast<int32_t>(r24) < static_cast<int32_t>(r22))) {
        goto loc_802ABE14;
    }
}

loc_802ABF10:
{
    r11 = (r1 + 128);
    // inline leaf 0x804574B4 (14 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -52), 0, 52u, true, false);
    // end of inlined leaf 0x804574B4
    r0 = MemoryInline::FlatRead32((r1 + 132));
    ctx->lr = r0;
    r1 = (r1 + 128);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802ABD8C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802ABD8C_ra58_e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[6], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001F gpr_write=0x0000083B gpr_return=0x00000018 fpr_read=0x0000000E fpr_write=0x0000000E fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802ABD8C func_802ABD8C preserves=true fpr_mask=0x00000000
