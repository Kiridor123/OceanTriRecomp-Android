#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800F87EC(CpuContext* ctx);
extern "C" uint64_t func_800F87EC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8011D5BC_ra38_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1)
{
    uint32_t addr_psqx_8011D6D4_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f31 = ctx->fpr[31];

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    MKW_GUEST_ENTER(0x8011D5BCu);
    goto loc_8011D5BC;

loc_8011D5BC:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -64), 0, 72u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 68u, (r1 + 68), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_1, 48u, (r1 + 48), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 48);
    // inline leaf 0x80457480 (8 guest instruction(s))
    // end of inlined leaf 0x80457480
    r25 = r3;
    r26 = r4;
    r27 = r5;
    r28 = r6;
    f31.d = f1.d;
    r29 = r7;
    // inline leaf 0x802AFCE8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3014));
    // end of inlined leaf 0x802AFCE8
    r3 = (r3 & 255);
    r0 = MemoryInline::FlatRead8((r25 + 481));
}

loc_8011D600:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r3))) {
        goto loc_8011D60C;
    }
}

loc_8011D604:
{
    r3 = 0;
    goto loc_8011D6D0;
}

loc_8011D60C:
{
    r3 = 168;
    ctx->lr = 0x8011D614u;
    if constexpr (KnownRegArgsCpuCall<0x800F87ECu>(&func_800F87EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800F87EC_A3C = func_800F87EC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800F87EC_A3C);
        r4 = static_cast<uint32_t>(regargs_result_800F87EC_A3C >> 32);
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

loc_8011D61C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8011D628;
    }
}

loc_8011D620:
{
    r3 = 0;
    goto loc_8011D6D0;
}

loc_8011D628:
{
    r30 = MemoryInline::FlatRead32((r3 + 56));
    r0 = 2;
    MemoryInline::FlatWrite32(r30, r0);
    r3 = r25;
    // inline leaf 0x801359A4 (4 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r3 + 460));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 464));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    // end of inlined leaf 0x801359A4
    f0.d = PpcFmulsInline(f31.d, f1.d);
    MemoryInline::FlatWriteFloat32((r30 + 140), f0.d);
    MemoryInline::FlatWrite32((r30 + 144), r27);
    MemoryInline::FlatWrite32((r30 + 148), r28);
    r0 = 31;
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 2), 0, 67u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r31 + 3), static_cast<uint8_t>(r0));
    r0 = (r26 & 255);
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r31 + 2), static_cast<uint8_t>(r0));
    r0 = (r29 & 255);
    MemoryInline::WriteResolved32(guest_range_0, 10u, (r31 + 12), r0);
    MemoryInline::WriteResolved32(guest_range_0, 46u, (r31 + 48), r25);
    r0 = MemoryInline::FlatRead8((r25 + 481));
    MemoryInline::WriteResolved8(guest_range_0, 66u, (r31 + 68), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r25 + 444));
    MemoryInline::WriteResolved32(guest_range_0, 34u, (r31 + 36), r0);
    r0 = MemoryInline::FlatRead32((r25 + 448));
    MemoryInline::WriteResolved32(guest_range_0, 38u, (r31 + 40), r0);
    r0 = MemoryInline::FlatRead32((r25 + 452));
    MemoryInline::WriteResolved32(guest_range_0, 42u, (r31 + 44), r0);
    r3 = r31;
    r4 = 0;
    r5 = 0;
    // inline leaf 0x800F9E58 (4 guest instruction(s))
    r0 = (r4 | r5);
    r0 = (r0 & 255);
    MemoryInline::FlatWriteRam8((r3 + 4), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x800F9E58
    r0 = MemoryInline::FlatRead8((r25 + 3));
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r31 + 8), static_cast<uint8_t>(r0));
    r3 = 0x80120000u;
    r0 = (r3 + -9948);
    MemoryInline::WriteResolved32(guest_range_0, 62u, (r31 + 64), r0);
    r3 = 0x80120000u;
    r0 = (r3 + -9700);
    MemoryInline::WriteResolved32(guest_range_0, 50u, (r31 + 52), r0);
    ctx->lr = 0x8011D6BCu;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x803C4878u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8011D6C0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8011D6CC;
    }
}

loc_8011D6C4:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r31 + 7), static_cast<uint8_t>(r0));
}

loc_8011D6CC:
{
    r3 = r31;
}

loc_8011D6D0:
{
    r0 = 56;
    addr_psqx_8011D6D4_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8011D6D4_loc_0));
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 20), 0, 52u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 28u, (r1 + 48));
    r11 = (r1 + 48);
    // inline leaf 0x804574CC (8 guest instruction(s))
    // end of inlined leaf 0x804574CC
    r0 = MemoryInline::ReadResolved32(guest_range_2, 48u, (r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8011D5BC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8011D5BC_ra38_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000007FB gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x80000003 fpr_write=0x80000003 fpr_return=0x00000002 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8011D5BC func_8011D5BC preserves=true fpr_mask=0x00000000
