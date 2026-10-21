#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80050F58(CpuContext* ctx);
extern "C" uint64_t func_80050F58_ra18_8_18_0(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_801262DC(CpuContext* ctx);
extern "C" uint64_t func_801262DC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_802F68E4_ra38_a_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f3)
{
    uint32_t addr_psqx_802F6A98_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    MKW_GUEST_ENTER(0x802F68E4u);
    goto loc_802F68E4;

loc_802F68E4:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -64), 0, 72u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 68u, (r1 + 68), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 48u, (r1 + 48), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 48);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r27 = r3;
    r31 = 0;
    r30 = 0;
    f31.d = MemoryInline::FlatReadFloat32((r2 + -12272));
    r3 = (r1 + 8);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r28 = 0;
    r3 = MemoryInline::FlatRead8((r27 + 480));
    // inline leaf 0x802B06CC (8 guest instruction(s))
}

loc_inl2_0x802B06CC:
{
    r0 = (r3 & 255);
    r4 = 0x805D0000u;
    r4 = (r4 + -2816);
    r4_addr_0 = (r4 + r0);
    r0 = MemoryInline::FlatRead8(r4_addr_0);
}

loc_inl2_0x802B06E0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x802B06E4:
{
    r3 = r0;
    goto loc_inl2_cont_802B06CC;
}

loc_inl2_return:
{
}

loc_inl2_cont_802B06CC:
{
    // end of inlined leaf 0x802B06CC
    r0 = MemoryInline::FlatRead8((r27 + 10));
}

loc_802F692C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802F6938;
    }
}

loc_802F6930:
{
}

loc_802F6934:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(5))) {
        goto loc_802F6A24;
    }
}

loc_802F6938:
{
    r0 = (r3 & 255);
}

loc_802F6940:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_802F6950;
    }
}

loc_802F6944:
{
}

loc_802F6948:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_802F69BC;
    }
}

loc_802F694C:
{
    goto loc_802F6A24;
}

loc_802F6950:
{
    r0 = MemoryInline::FlatRead8((r27 + 16));
}

loc_802F6958:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802F698C;
    }
}

loc_802F695C:
{
    r0 = MemoryInline::FlatRead8((r27 + 481));
}

loc_802F6964:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(7))) {
        goto loc_802F6974;
    }
}

loc_802F6968:
{
}

loc_802F696C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(12))) {
        goto loc_802F6980;
    }
}

loc_802F6970:
{
    goto loc_802F6A24;
}

loc_802F6974:
{
    r31 = 3;
    r30 = 9;
    goto loc_802F6A24;
}

loc_802F6980:
{
    r31 = 4;
    r30 = 10;
    goto loc_802F6A24;
}

loc_802F698C:
{
    r0 = MemoryInline::FlatRead8((r27 + 481));
}

loc_802F6994:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(7))) {
        goto loc_802F69A4;
    }
}

loc_802F6998:
{
}

loc_802F699C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(12))) {
        goto loc_802F69B0;
    }
}

loc_802F69A0:
{
    goto loc_802F6A24;
}

loc_802F69A4:
{
    r31 = 4;
    r30 = 17;
    goto loc_802F6A24;
}

loc_802F69B0:
{
    r31 = 3;
    r30 = 14;
    goto loc_802F6A24;
}

loc_802F69BC:
{
    r0 = MemoryInline::FlatRead8((r27 + 481));
}

loc_802F69C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_802F69EC;
    }
}

loc_802F69C8:
{
}

loc_802F69CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_802F69F8;
    }
}

loc_802F69D0:
{
}

loc_802F69D4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_802F6A04;
    }
}

loc_802F69D8:
{
}

loc_802F69DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_802F6A10;
    }
}

loc_802F69E0:
{
}

loc_802F69E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(8))) {
        goto loc_802F6A1C;
    }
}

loc_802F69E8:
{
    goto loc_802F6A24;
}

loc_802F69EC:
{
    r31 = 3;
    r30 = 7;
    goto loc_802F6A24;
}

loc_802F69F8:
{
    r31 = 3;
    r30 = 2;
    goto loc_802F6A24;
}

loc_802F6A04:
{
    r31 = 3;
    r30 = 7;
    goto loc_802F6A24;
}

loc_802F6A10:
{
    r31 = 4;
    r30 = 10;
    goto loc_802F6A24;
}

loc_802F6A1C:
{
    r31 = 3;
    r30 = 2;
}

loc_802F6A24:
{
    r29 = 0;
    goto loc_802F6A88;
}

loc_802F6A2C:
{
    r3 = r27;
    r0 = MemoryInline::FlatRead8((r27 + 481));
    r0 = (r0 & 15);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r4 = (r4_rot_2 & -256);
    r0 = (r30 & 255);
    r0 = (r4 | r0);
    r4 = (r0 & 65535);
    r5 = (r1 + 8);
    ctx->lr = 0x802F6A50u;
    if constexpr (KnownRegArgsCpuCall<0x801262DCu>(&func_801262DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[1] = f1;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        const auto regargs_result_801262DC_1897 = func_801262DC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_801262DC_1897);
        r4 = static_cast<uint32_t>(regargs_result_801262DC_1897 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x801262DCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
    r3 = (r27 + 392);
    r4 = (r1 + 8);
    ctx->lr = 0x802F6A5Cu;
    if constexpr (KnownRegArgsCpuCall<0x80050F58u>(&func_80050F58)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_80050F58_1CF5 = func_80050F58_ra18_8_18_0(ctx, r3, r4, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_80050F58_1CF5);
        r4 = static_cast<uint32_t>(regargs_result_80050F58_1CF5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x80050F58u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
}

loc_802F6A60:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_802F6A70;
    }
}

loc_802F6A64:
{
    f31.d = f1.d;
    r28 = (r29 & 255);
    goto loc_802F6A80;
}

loc_802F6A70:
{
    SetCRFloatResident(cr, 0, f31.d, f1.d);
}

loc_802F6A74:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_802F6A80;
    }
}

loc_802F6A78:
{
    f31.d = f1.d;
    r28 = (r29 & 255);
}

loc_802F6A80:
{
    r30 = (r30 + 1);
    r29 = (r29 + 1);
}

loc_802F6A88:
{
}

loc_802F6A8C:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(r31))) {
        goto loc_802F6A2C;
    }
}

loc_802F6A90:
{
    MemoryInline::FlatWrite8((r27 + 808), static_cast<uint8_t>(r28));
    r0 = 56;
    addr_psqx_802F6A98_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_802F6A98_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 48));
    r11 = (r1 + 48);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802F68E4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802F68E4_ra38_a_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[3].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003F gpr_write=0x0000083B gpr_return=0x00000018 fpr_read=0x8000000A fpr_write=0x8000001F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802F68E4 func_802F68E4 preserves=true fpr_mask=0x00000000
