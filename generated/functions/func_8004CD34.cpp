#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8027E3A8(CpuContext* ctx);
extern "C" uint64_t func_8027E3A8_ra28_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" void func_8004CD34(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8004CD34;

loc_8004CD34:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r30 = r4;
    // inline leaf 0x8004CCFC (14 guest instruction(s))
}

loc_inl0_0x8004CCFC:
{
    r5 = 0;
    r0 = MemoryInline::FlatRead8(r3);
}

loc_inl0_0x8004CD08:
{
    r4 = (r5 | 2);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x8004CD14;
    }
}

loc_inl0_0x8004CD10:
{
    r4 = (r5 | 1);
}

loc_inl0_0x8004CD14:
{
    r0 = MemoryInline::FlatRead8((r3 + 32));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(11));
}

loc_inl0_0x8004CD1C:
{
    r0 = (r4 | 4);
    r3 = (r0 & 255);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x8004CD28:
{
    r0 = (r4 | 8);
    r3 = (r0 & 255);
    goto loc_inl0_cont_8004CCFC;
}

loc_inl0_return:
{
}

loc_inl0_cont_8004CCFC:
{
    // end of inlined leaf 0x8004CCFC
    r31 = r3;
    r3 = MemoryInline::FlatRead8(r30);
    r0 = (r3 + -12);
}

loc_8004CD68:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_8004CD80;
    }
}

loc_8004CD6C:
{
    r0 = MemoryInline::FlatRead8((r29 + 32));
}

loc_8004CD74:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(11))) {
        goto loc_8004CDB4;
    }
}

loc_8004CD78:
{
    r3 = 0;
    goto loc_8004CDB8;
}

loc_8004CD80:
{
    r3 = r30;
    ctx->lr = 0x8004CD88u;
    if constexpr (KnownRegArgsCpuCall<0x8027E3A8u>(&func_8027E3A8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8027E3A8_975 = func_8027E3A8_ra28_0_18_0(ctx, r3, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027E3A8_975);
        r4 = static_cast<uint32_t>(regargs_result_8027E3A8_975 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x8027E3A8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
}

loc_8004CD8C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8004CD98;
    }
}

loc_8004CD90:
{
    r3 = 0;
    goto loc_8004CDB8;
}

loc_8004CD98:
{
    r4 = (r31 & 255);
    r0 = MemoryInline::FlatRead8((r3 + 6));
    r0 = (r4 & r0);
}

loc_8004CDA8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(r0))) {
        goto loc_8004CDB4;
    }
}

loc_8004CDAC:
{
    r3 = 0;
    goto loc_8004CDB8;
}

loc_8004CDB4:
{
    r3 = 1;
}

loc_8004CDB8:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8004CD34 func_8004CD34 preserves=true fpr_mask=0x00000000
