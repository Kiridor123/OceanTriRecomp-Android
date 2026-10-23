#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80084040_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t addr_psqx_800840C8_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_80084040;

loc_80084040:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 40);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r29 = r3;
    r30 = r4;
    // inline leaf 0x800840EC (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 209));
    // end of inlined leaf 0x800840EC
    r31 = r3;
    r3 = r30;
    // inline leaf 0x800840EC (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 209));
    // end of inlined leaf 0x800840EC
}

loc_8008407C:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(r3))) {
        goto loc_800840B0;
    }
}

loc_80084080:
{
    r3 = r30;
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
    f31.d = MemoryInline::FlatReadFloat32((r3 + 44));
    r3 = r29;
    r4 = 2;
    // inline leaf 0x8007B5A8 (8 guest instruction(s))
}

loc_inl3_0x8007B5A8:
{
}

loc_inl3_0x8007B5AC:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(3))) {
        goto loc_inl3_0x8007B5C0;
    }
}

loc_inl3_0x8007B5B0:
{
    r0 = (r4 * 48);
    r3 = (r3 + r0);
    r3 = (r3 + 12);
    goto loc_inl3_cont_8007B5A8;
}

loc_inl3_0x8007B5C0:
{
    r3 = 0;
}

loc_inl3_cont_8007B5A8:
{
    // end of inlined leaf 0x8007B5A8
    f0.d = MemoryInline::FlatReadFloat32((r3 + 44));
    SetCRFloatResident(cr, 0, f0.d, f31.d);
}

loc_800840A4:
{
    r3 = cr;
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    goto loc_800840C4;
}

loc_800840B0:
{
    r0 = (r3 ^ r31);
    r4 = (static_cast<int32_t>(r0) >> 1);
    r0 = (r0 & r3);
    r0 = (r4 - r0);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
}

loc_800840C4:
{
    r0 = 40;
    addr_psqx_800840C8_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800840C8_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 32));
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80084040(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80084040_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x80000001 fpr_write=0x80000001 fpr_return=0x00000000 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80084040 func_80084040 preserves=true fpr_mask=0x00000000
