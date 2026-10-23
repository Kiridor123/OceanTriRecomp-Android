#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800F87EC(CpuContext* ctx);
extern "C" uint64_t func_800F87EC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80331274(CpuContext* ctx);
extern "C" uint64_t func_80331274_ra8_0_18_0(CpuContext*, uint32_t);

extern "C" uint64_t func_801029F8_ra38_e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3)
{
    uint32_t addr_psqx_80102B6C_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f31 = ctx->fpr[31];

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_801029F8;

loc_801029F8:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 52u, (r1 + 52), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_1, 32u, (r1 + 32), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 40);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 32);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r28 = r3;
    r29 = r4;
    r30 = r5;
    r26 = r6;
    r27 = r7;
    f31.d = f1.d;
    // inline leaf 0x802AFCE8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3014));
    // end of inlined leaf 0x802AFCE8
    r3 = (r3 & 255);
    r0 = MemoryInline::FlatRead8((r28 + 22));
}

loc_80102A3C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_80102B68;
    }
}

loc_80102A40:
{
    r3 = 44;
    ctx->lr = 0x80102A48u;
    if constexpr (KnownRegArgsCpuCall<0x800F87ECu>(&func_800F87EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800F87EC_B5A = func_800F87EC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800F87EC_B5A);
        r4 = static_cast<uint32_t>(regargs_result_800F87EC_B5A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x800F87ECu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r31 = r3;
}

loc_80102A50:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80102B68;
    }
}

loc_80102A54:
{
    r3 = MemoryInline::FlatRead32((r3 + 56));
    r0 = 1;
    MemoryInline::FlatWrite32(r3, r0);
    MemoryInline::FlatWrite32((r3 + 16), r26);
    MemoryInline::FlatWriteFloat32((r3 + 12), f31.d);
}

loc_80102A6C:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_80102A80;
    }
}

loc_80102A70:
{
    r3 = (r3 + 20);
    r4 = r27;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    goto loc_80102A94;
}

loc_80102A80:
{
    r3 = (r3 + 20);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -29536));
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
}

loc_80102A94:
{
    r3 = r28;
    ctx->lr = 0x80102A9Cu;
    if constexpr (KnownRegArgsCpuCall<0x80331274u>(&func_80331274)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80331274_1339 = func_80331274_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_80331274_1339);
        r4 = static_cast<uint32_t>(regargs_result_80331274_1339 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80331274u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r4 = (r29 & 255);
    r0 = (r4 + -3);
}

loc_80102AA8:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_80102AC4;
    }
}

loc_80102AAC:
{
}

loc_80102AB0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(6))) {
        goto loc_80102AC4;
    }
}

loc_80102AB4:
{
}

loc_80102AB8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(9))) {
        goto loc_80102AC4;
    }
}

loc_80102ABC:
{
}

loc_80102AC0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(16))) {
        goto loc_80102B14;
    }
}

loc_80102AC4:
{
    r0 = (r3 & 255);
}

loc_80102ACC:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_80102ADC;
    }
}

loc_80102AD0:
{
}

loc_80102AD4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_80102AE4;
    }
}

loc_80102AD8:
{
    goto loc_80102B14;
}

loc_80102ADC:
{
    r30 = r3;
    goto loc_80102B14;
}

loc_80102AE4:
{
    r5 = (r29 & 255);
    r4 = (3 - r5);
    r0 = (r5 + -3);
    r0 = (r4 | r0);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_1 & 1);
}

loc_80102AFC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80102B08;
    }
}

loc_80102B00:
{
    r0 = (r29 + 1);
    r29 = (r0 & 255);
}

loc_80102B08:
{
}

loc_80102B0C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80102B14;
    }
}

loc_80102B10:
{
    r30 = r3;
}

loc_80102B14:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 1), 0, 68u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 47u, (r31 + 48), r28);
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r31 + 2), static_cast<uint8_t>(r29));
    r0 = 2;
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r31 + 3), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::WriteResolved32(guest_range_0, 11u, (r31 + 12), r0);
    r0 = 1;
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r31 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r28 + 22));
    MemoryInline::WriteResolved8(guest_range_0, 67u, (r31 + 68), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r31 + 8), static_cast<uint8_t>(r30));
    r3 = r31;
    r4 = 0;
    r5 = 0;
    // inline leaf 0x800F9E58 (4 guest instruction(s))
    r0 = (r4 | r5);
    r0 = (r0 & 255);
    MemoryInline::FlatWriteRam8((r3 + 4), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x800F9E58
    r3 = 0x80100000u;
    r0 = (r3 + 11572);
    MemoryInline::WriteResolved32(guest_range_0, 63u, (r31 + 64), r0);
    r3 = 0x80100000u;
    r0 = (r3 + 11632);
    MemoryInline::WriteResolved32(guest_range_0, 51u, (r31 + 52), r0);
}

loc_80102B68:
{
    r0 = 40;
    addr_psqx_80102B6C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80102B6C_loc_0));
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 48u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 24u, (r1 + 32));
    r11 = (r1 + 32);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::ReadResolved32(guest_range_2, 44u, (r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801029F8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801029F8_ra38_e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000007FF gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x8000000E fpr_write=0x8000000E fpr_return=0x00000002 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801029F8 func_801029F8 preserves=true fpr_mask=0x00000000
