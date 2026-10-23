#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800F87EC(CpuContext* ctx);
extern "C" uint64_t func_800F87EC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_801066F8_ra38_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1)
{
    uint32_t addr_psqx_80106838_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
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

    goto loc_801066F8;

loc_801066F8:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 32u, (r1 + 32), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 40);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 32);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r26 = r3;
    r27 = r4;
    r28 = r5;
    f31.d = f1.d;
    // inline leaf 0x802AFCE8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3014));
    // end of inlined leaf 0x802AFCE8
    r3 = (r3 & 255);
    r0 = MemoryInline::FlatRead8((r26 + 481));
}

loc_80106734:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_80106834;
    }
}

loc_80106738:
{
    r0 = MemoryInline::FlatRead16((r26 + 552));
    r0 = (r0 & 6);
}

loc_80106744:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80106788;
    }
}

loc_80106748:
{
}

loc_8010674C:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_80106764;
    }
}

loc_80106750:
{
}

loc_80106754:
{
    if ((static_cast<uint32_t>(r28) == static_cast<uint32_t>(1))) {
        goto loc_8010676C;
    }
}

loc_80106758:
{
}

loc_8010675C:
{
    if ((static_cast<uint32_t>(r28) == static_cast<uint32_t>(4))) {
        goto loc_80106774;
    }
}

loc_80106760:
{
    goto loc_80106778;
}

loc_80106764:
{
    r28 = 2;
    goto loc_80106778;
}

loc_8010676C:
{
    r28 = 3;
    goto loc_80106778;
}

loc_80106774:
{
    r28 = 5;
}

loc_80106778:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -29448));
    f0.d = MemoryInline::FlatReadFloat32((r26 + 528));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r27 + 4), f0.d);
}

loc_80106788:
{
    r3 = 16;
    ctx->lr = 0x80106790u;
    if constexpr (KnownRegArgsCpuCall<0x800F87ECu>(&func_800F87EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800F87EC_E1E = func_800F87EC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800F87EC_E1E);
        r4 = static_cast<uint32_t>(regargs_result_800F87EC_E1E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
    }
    r30 = r3;
}

loc_80106798:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80106834;
    }
}

loc_8010679C:
{
    r29 = MemoryInline::FlatRead32((r3 + 56));
    r31 = 1;
    MemoryInline::FlatWrite32(r29, r31);
    r3 = r26;
    // inline leaf 0x801359A4 (4 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r3 + 460));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 464));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    // end of inlined leaf 0x801359A4
    f0.d = PpcFmulsInline(f31.d, f1.d);
    MemoryInline::FlatWriteFloat32((r29 + 8), f0.d);
    MemoryInline::FlatWriteRam8((r30 + 1), static_cast<uint8_t>(r31));
    r0 = 11;
    MemoryInline::FlatWriteRam8((r30 + 3), static_cast<uint8_t>(r0));
    r0 = (r28 & 255);
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r0));
    r3 = (r30 + 24);
    r4 = r27;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    MemoryInline::FlatWriteRam32((r30 + 48), r26);
    r0 = MemoryInline::FlatRead8((r26 + 481));
    MemoryInline::FlatWriteRam8((r30 + 68), static_cast<uint8_t>(r0));
    r3 = r30;
    r4 = 0;
    r5 = 0;
    // inline leaf 0x800F9E58 (4 guest instruction(s))
    r0 = (r4 | r5);
    r0 = (r0 & 255);
    MemoryInline::FlatWriteRam8((r3 + 4), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x800F9E58
    r3 = 0;
    MemoryInline::FlatWriteRam32((r30 + 36), r3);
    r0 = MemoryInline::FlatRead32((r26 + 448));
    MemoryInline::FlatWriteRam32((r30 + 40), r0);
    MemoryInline::FlatWriteRam32((r30 + 44), r3);
    MemoryInline::FlatWriteRam32((r30 + 12), r3);
    ctx->lr = 0x80106810u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x803C4878u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80106814:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8010681C;
    }
}

loc_80106818:
{
    MemoryInline::FlatWriteRam8((r30 + 8), static_cast<uint8_t>(r31));
}

loc_8010681C:
{
    r3 = 0x80100000u;
    r0 = (r3 + 26952);
    MemoryInline::FlatWriteRam32((r30 + 64), r0);
    r3 = 0x80100000u;
    r0 = (r3 + 27012);
    MemoryInline::FlatWriteRam32((r30 + 52), r0);
}

loc_80106834:
{
    r0 = 40;
    addr_psqx_80106838_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80106838_loc_0));
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 48u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 24u, (r1 + 32));
    r11 = (r1 + 32);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
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

extern "C" void func_801066F8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801066F8_ra38_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000007FF gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x80000003 fpr_write=0x80000003 fpr_return=0x00000002 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801066F8 func_801066F8 preserves=true fpr_mask=0x00000000
