#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800E41AC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_3 = 0;
    uint32_t r3_psq_tmp_4 = 0;
    uint32_t r4_psq_tmp_0 = 0;
    uint32_t r4_psq_tmp_1 = 0;
    uint32_t r4_psq_tmp_2 = 0;
    uint32_t r4_psq_tmp_3 = 0;
    uint32_t r4_psq_tmp_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    MKW_GUEST_ENTER(0x800E41ACu);
    goto loc_800E41AC;

loc_800E41AC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = r3;
    r31 = r4;
    r3 = (r1 + 8);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r0 = MemoryInline::FlatRead16((r30 + 30));
    r0 = (r0 & 1);
}

loc_800E41DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800E4200;
    }
}

loc_800E41E0:
{
    r3 = (r30 + 12);
    r4 = (r31 + 32);
    // inline leaf 0x80052278 (8 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_0 = (r3 + 4);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_0));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_0 = (r4 + 4);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_0));
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f1.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(f2.d, f1.d, f0.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f1.d, f0.d, f0.d));
    // end of inlined leaf 0x80052278
    f0.d = MemoryInline::FlatReadFloat32((r31 + 44));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + PPC_PsToScalarInline(f1.d)));
    f0.d = (-(f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 4), f0.d);
    goto loc_800E427C;
}

loc_800E4200:
{
    r0 = MemoryInline::FlatRead8((r30 + 28));
}

loc_800E4208:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_800E4218;
    }
}

loc_800E420C:
{
}

loc_800E4210:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_800E4234;
    }
}

loc_800E4214:
{
    goto loc_800E4274;
}

loc_800E4218:
{
    r3 = MemoryInline::FlatRead32((r30 + 24));
    r4 = 2;
    // inline leaf 0x8007B5A8 (8 guest instruction(s))
}

loc_inl2_0x8007B5A8:
{
}

loc_inl2_0x8007B5AC:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(3))) {
        goto loc_inl2_0x8007B5C0;
    }
}

loc_inl2_0x8007B5B0:
{
    r0 = (r4 * 48);
    r3 = (r3 + r0);
    r3 = (r3 + 12);
    goto loc_inl2_cont_8007B5A8;
}

loc_inl2_0x8007B5C0:
{
    r3 = 0;
}

loc_inl2_cont_8007B5A8:
{
    // end of inlined leaf 0x8007B5A8
    f0.d = MemoryInline::FlatReadFloat32((r3 + 44));
    f0.d = (-(f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 4), f0.d);
    goto loc_800E427C;
}

loc_800E4234:
{
    r3 = MemoryInline::FlatRead32((r30 + 24));
    // inline leaf 0x800A6124 (2 guest instruction(s))
    r3 = (r3 + 88);
    // end of inlined leaf 0x800A6124
    r4 = r3;
    r3 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 12));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 28));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 44));
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = (r1 + 8);
    r4 = (r31 + 32);
    // inline leaf 0x80052278 (8 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_2 = (r3 + 4);
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r3_psq_tmp_2));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_2 = (r4 + 4);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_2));
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f1.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<1u, 0u>(ctx, r3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(f2.d, f1.d, f0.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f1.d, f0.d, f0.d));
    // end of inlined leaf 0x80052278
    f0.d = MemoryInline::FlatReadFloat32((r31 + 44));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + PPC_PsToScalarInline(f1.d)));
    f0.d = (-(f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 4), f0.d);
    goto loc_800E427C;
}

loc_800E4274:
{
    r3 = 0;
    goto loc_800E42D0;
}

loc_800E427C:
{
    r3 = MemoryInline::FlatRead16((r30 + 30));
    r0 = (r3 & 128);
}

loc_800E4288:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800E42A8;
    }
}

loc_800E428C:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 36));
    f0.d = (-(f0.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800E429C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800E42A8;
    }
}

loc_800E42A0:
{
    r3 = 0;
    goto loc_800E42D0;
}

loc_800E42A8:
{
    r0 = (r3 & 256);
}

loc_800E42B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800E42CC;
    }
}

loc_800E42B4:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 40));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800E42C0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800E42CC;
    }
}

loc_800E42C4:
{
    r3 = 0;
    goto loc_800E42D0;
}

loc_800E42CC:
{
    r3 = 1;
}

loc_800E42D0:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x0000000F fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800E41AC func_800E41AC preserves=true fpr_mask=0x00000000
