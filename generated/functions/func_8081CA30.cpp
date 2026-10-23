#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8081CA30(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8081CA30;

loc_8081CA30:
{
    r6 = MemoryInline::FlatRead32(r4);
}

loc_8081CA38:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_8081CA3C:
{
}

loc_8081CA40:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8081CA84;
    }
}

loc_8081CA44:
{
    r0 = MemoryInline::FlatRead8((r6 + 92));
}

loc_8081CA4C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_8081CA70;
    }
}

loc_8081CA50:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_8081CA58:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_8081CA70;
    }
}

loc_8081CA5C:
{
    f1.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    MemoryInline::FlatWriteFloat32((r3 + 8), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
    goto loc_8081CA84;
}

loc_8081CA70:
{
    f0.d = MemoryInline::FlatReadFloat32((r6 + 32));
    MemoryInline::FlatWriteFloat32((r3 + 8), f0.d);
    r5 = MemoryInline::FlatRead32(r4);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 36));
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_8081CA84:
{
    r7 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::FlatRead32((r7 + 4));
    MemoryInline::FlatWrite32((r3 + 16), r0);
    r6 = MemoryInline::FlatRead32(r7);
    MemoryInline::FlatWrite32((r3 + 20), r6);
    r0 = MemoryInline::FlatRead32((r7 + 8));
    MemoryInline::FlatWrite32((r3 + 24), r0);
    r0 = MemoryInline::FlatRead8((r7 + 92));
}

loc_8081CAA8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_return;
    }
}

loc_8081CAAC:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_8081CAB4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_return;
    }
}

loc_8081CAB8:
{
    r0 = MemoryInline::FlatRead32((r7 + 96));
    r4 = MemoryInline::FlatRead32((r7 + 100));
    r5 = (r0 & 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8081CAC4:
{
    r5 = MemoryInline::FlatRead32((r7 + 104));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8081CAD4;
    }
}

loc_8081CACC:
{
    r6 = (r6 | 2048);
    MemoryInline::FlatWrite32((r3 + 20), r6);
}

loc_8081CAD4:
{
    r6 = (r4 & 16);
}

loc_8081CAD8:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8081CAE8;
    }
}

loc_8081CADC:
{
    r6 = MemoryInline::FlatRead32((r3 + 16));
    r6 = (r6 | 2048);
    MemoryInline::FlatWrite32((r3 + 16), r6);
}

loc_8081CAE8:
{
    r6 = (r5 & 16);
}

loc_8081CAEC:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8081CAFC;
    }
}

loc_8081CAF0:
{
    r6 = MemoryInline::FlatRead32((r3 + 24));
    r6 = (r6 | 2048);
    MemoryInline::FlatWrite32((r3 + 24), r6);
}

loc_8081CAFC:
{
    r6 = (r0 & 1024);
}

loc_8081CB00:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8081CB10;
    }
}

loc_8081CB04:
{
    r6 = MemoryInline::FlatRead32((r3 + 20));
    r6 = (r6 | 16);
    MemoryInline::FlatWrite32((r3 + 20), r6);
}

loc_8081CB10:
{
    r6 = (r4 & 1024);
}

loc_8081CB14:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8081CB24;
    }
}

loc_8081CB18:
{
    r6 = MemoryInline::FlatRead32((r3 + 16));
    r6 = (r6 | 16);
    MemoryInline::FlatWrite32((r3 + 16), r6);
}

loc_8081CB24:
{
    r6 = (r5 & 1024);
}

loc_8081CB28:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8081CB38;
    }
}

loc_8081CB2C:
{
    r6 = MemoryInline::FlatRead32((r3 + 24));
    r6 = (r6 | 16);
    MemoryInline::FlatWrite32((r3 + 24), r6);
}

loc_8081CB38:
{
    r6 = (r0 & 4096);
}

loc_8081CB3C:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8081CB4C;
    }
}

loc_8081CB40:
{
    r6 = MemoryInline::FlatRead32((r3 + 20));
    r6 = (r6 | 4096);
    MemoryInline::FlatWrite32((r3 + 20), r6);
}

loc_8081CB4C:
{
    r6 = (r4 & 4096);
}

loc_8081CB50:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8081CB60;
    }
}

loc_8081CB54:
{
    r6 = MemoryInline::FlatRead32((r3 + 16));
    r6 = (r6 | 4096);
    MemoryInline::FlatWrite32((r3 + 16), r6);
}

loc_8081CB60:
{
    r6 = (r5 & 4096);
}

loc_8081CB64:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8081CB74;
    }
}

loc_8081CB68:
{
    r6 = MemoryInline::FlatRead32((r3 + 24));
    r6 = (r6 | 4096);
    MemoryInline::FlatWrite32((r3 + 24), r6);
}

loc_8081CB74:
{
    r0 = (r0 & 2048);
}

loc_8081CB78:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8081CB88;
    }
}

loc_8081CB7C:
{
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r0 | 32768);
    MemoryInline::FlatWrite32((r3 + 20), r0);
}

loc_8081CB88:
{
    r0 = (r4 & 2048);
}

loc_8081CB8C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8081CB9C;
    }
}

loc_8081CB90:
{
    r0 = MemoryInline::FlatRead32((r3 + 16));
    r0 = (r0 | 32768);
    MemoryInline::FlatWrite32((r3 + 16), r0);
}

loc_8081CB9C:
{
    r0 = (r5 & 2048);
}

loc_8081CBA0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_8081CBA4:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
    r0 = (r0 | 32768);
    MemoryInline::FlatWrite32((r3 + 24), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x000000F1 gpr_return=0x00000010 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8081CA30 func_8081CA30 preserves=true fpr_mask=0x00000000
