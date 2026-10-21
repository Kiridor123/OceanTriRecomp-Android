#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8005BACC(CpuContext* ctx);
extern "C" uint64_t func_8005BACC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8005BB58_ra38_3e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5)
{
    uint32_t cr0_0 = 0;
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
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;

    MKW_GUEST_ENTER(0x8005BB58u);
    goto loc_8005BB58;

loc_8005BB58:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r27 = r3;
    r28 = r4;
    r29 = r5;
    r0 = 1127219200;
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r1 + 8), r0);
    r0 = 1127219200;
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r1 + 16), r0);
    r30 = MemoryInline::FlatRead32((r13 + -17736));
    r3 = r30;
    // inline leaf 0x8005BB14 (16 guest instruction(s))
}

loc_inl1_0x8005BB14:
{
    r4 = (r3 + 65536);
    r6 = MemoryInline::FlatRead32((r4 + 20572));
    r0 = MemoryInline::FlatRead32((r4 + 20568));
}

loc_inl1_0x8005BB24:
{
    if ((static_cast<uint32_t>(r6) < static_cast<uint32_t>(r0))) {
        goto loc_inl1_0x8005BB30;
    }
}

loc_inl1_0x8005BB28:
{
    r3 = 0;
    goto loc_inl1_cont_8005BB14;
}

loc_inl1_0x8005BB30:
{
    r5 = MemoryInline::FlatRead32((r3 + 80));
    r4 = 65536;
    r0 = (r4 + 20480);
    r0 = (r5 * r0);
    r3 = (r3 + r0);
    r0 = (r6 * 84);
    r3 = (r3 + r0);
    r3 = (r3 + 84);
}

loc_inl1_cont_8005BB14:
{
    // end of inlined leaf 0x8005BB14
    r31 = r3;
}

loc_8005BB9C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8005BD88;
    }
}

loc_8005BBA0:
{
    r3 = r30;
    r4 = r29;
    if constexpr (KnownRegArgsCpuCall<0x8005BACCu>(&func_8005BACC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8005BACC_C9A = func_8005BACC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8005BACC_C9A);
        r4 = static_cast<uint32_t>(regargs_result_8005BACC_C9A >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8005BACCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_8005BBB0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(-1))) {
        goto loc_8005BBF0;
    }
}

loc_8005BBB4:
{
    r6 = (r30 + 65536);
    r4 = MemoryInline::FlatRead32((r6 + 24728));
    r0 = MemoryInline::FlatRead32((r6 + 24732));
}

loc_8005BBC4:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r0))) {
        goto loc_8005BD88;
    }
}

loc_8005BBC8:
{
    r5 = (r29 & 65535);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r3 = (r6 + r0);
    MemoryInline::FlatWrite16((r3 + 24736), static_cast<uint16_t>(r5));
    r3 = MemoryInline::FlatRead32((r6 + 24728));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r6 + 24728), r0);
    r3 = r30;
    r5 = r29;
    // inline leaf 0x8005BB54 (1 guest instruction(s))
    // end of inlined leaf 0x8005BB54
}

loc_8005BBF0:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -32128));
    r3 = (r30 + 65536);
    r6 = MemoryInline::FlatRead32((r3 + 20576));
    r7 = MemoryInline::FlatRead32((r3 + 20580));
    f0.d = MemoryInline::FlatReadFloat64((r2 + -32112));
    r5 = (r27 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r5);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    MemoryInline::FlatWriteFloat32(r31, f2.d);
    r4 = (r28 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r4);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 4), f2.d);
    f5.d = MemoryInline::FlatReadFloat32((r2 + -32124));
    MemoryInline::FlatWriteFloat32((r31 + 8), f5.d);
    r0 = (r29 & 15);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
    r0 = (r0_rot_3 & -32);
    f4.d = MemoryInline::FlatReadFloat64((r2 + -32104));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f4.d));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -32120));
    f2.d = PpcFmulsInline(f2.d, f3.d);
    MemoryInline::FlatWriteFloat32((r31 + 48), f2.d);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(28));
    r0 = (r0_rot_4 & 268435455);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
    r0 = (r0_rot_5 & -32);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f4.d));
    f2.d = PpcFmulsInline(f2.d, f3.d);
    MemoryInline::FlatWriteFloat32((r31 + 52), f2.d);
    r0 = (r27 + r6);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 12), f2.d);
    MemoryInline::FlatWriteRam32((r1 + 20), r4);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 16), f2.d);
    MemoryInline::FlatWriteFloat32((r31 + 20), f5.d);
    f2.d = MemoryInline::FlatReadFloat32((r31 + 48));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    MemoryInline::FlatWriteFloat32((r31 + 56), f2.d);
    f2.d = MemoryInline::FlatReadFloat32((r31 + 52));
    MemoryInline::FlatWriteFloat32((r31 + 60), f2.d);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 24), f2.d);
    r0 = (r28 + r7);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 28), f2.d);
    MemoryInline::FlatWriteFloat32((r31 + 32), f5.d);
    f2.d = MemoryInline::FlatReadFloat32((r31 + 48));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    MemoryInline::FlatWriteFloat32((r31 + 64), f2.d);
    f2.d = MemoryInline::FlatReadFloat32((r31 + 52));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    MemoryInline::FlatWriteFloat32((r31 + 68), f2.d);
    MemoryInline::FlatWriteRam32((r1 + 12), r5);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 36), f2.d);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 40), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 44), f5.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 48));
    MemoryInline::FlatWriteFloat32((r31 + 72), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 52));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r31 + 76), f0.d);
    r0 = MemoryInline::FlatRead32((r3 + 20600));
    MemoryInline::FlatWrite32((r31 + 80), r0);
    r4 = MemoryInline::FlatRead32((r30 + 80));
    r0 = MemoryInline::FlatRead32((r3 + 20572));
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(11));
    r0 = (r0_rot_6 & -2048);
    r5 = (r3 + r0);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_7 & -2);
    r4 = (r3 + r0);
    r0 = MemoryInline::FlatRead16((r4 + 20628));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_8 & -2);
    r4 = (r5 + r0);
    MemoryInline::FlatWrite16((r4 + 20632), static_cast<uint16_t>(r6));
    r0 = MemoryInline::FlatRead32((r30 + 80));
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_9 & -2);
    r5 = (r3 + r0);
    r4 = MemoryInline::FlatRead16((r5 + 20628));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = (r4 + 1);
    MemoryInline::FlatWrite16((r5 + 20628), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r3 + 20572));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r3 + 20572), r0);
}

loc_8005BD88:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8005BB58(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8005BB58_ra38_3e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000020FF gpr_write=0x000008FB gpr_return=0x00000018 fpr_read=0x0000003F fpr_write=0x0000003F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8005BB58 func_8005BB58 preserves=true fpr_mask=0x00000000
