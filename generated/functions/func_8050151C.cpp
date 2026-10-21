#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8050151C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x8050151Cu);
    goto loc_8050151C;

loc_8050151C:
{
    f1.d = std::fabs(f1.d);
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -1536));
    goto loc_80501530;
}

loc_8050152C:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
}

loc_80501530:
{
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80501534:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8050152C;
    }
}

loc_80501538:
{
    // psq_store w=1 quant=3 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 12);
    PPC_PsqStStackInline<1u, 3u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f1.d));
    r0 = MemoryInline::FlatRead16((r1 + 12));
    MemoryInline::FlatWriteRam16((r1 + 8), static_cast<uint16_t>(r0));
    // psq_load w=1 quant=3 (using PPC_PsqL)
    r1_psq_tmp_1 = (r1 + 8);
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<1u, 3u>(ctx, r1_psq_tmp_1));
    r3 = 0x80570000u;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_0 & 4080);
    r3 = (r3 + 17568);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - PPC_PsToScalarInline(f0.d)));
    r3 = (r3 + r0);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000006 gpr_write=0x0000000B gpr_return=0x00000008 fpr_read=0x00000003 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8050151C func_8050151C preserves=true fpr_mask=0x00000000
