#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_809ED8E0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];

    goto loc_809ED8E0;

loc_809ED8E0:
{
    r5 = MemoryInline::FlatRead32((r3 + 256));
    r3 = 0;
    r0 = (r4 & 255);
}

loc_809ED8F0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_809ED900;
    }
}

loc_809ED8F4:
{
}

loc_809ED8F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_809ED964;
    }
}

loc_809ED8FC:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    return;
}

loc_809ED900:
{
    r0 = MemoryInline::FlatRead8((r5 + 24));
}

loc_809ED908:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(3))) {
        goto loc_809ED910;
    }
}

loc_809ED90C:
{
    r3 = 1;
}

loc_809ED910:
{
    r0 = MemoryInline::FlatRead8((r5 + 48));
}

loc_809ED918:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(3))) {
        goto loc_809ED924;
    }
}

loc_809ED91C:
{
    r0 = (r3 + 1);
    r3 = (r0 & 255);
}

loc_809ED924:
{
    r0 = MemoryInline::FlatRead8((r5 + 72));
}

loc_809ED92C:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(3))) {
        goto loc_809ED938;
    }
}

loc_809ED930:
{
    r0 = (r3 + 1);
    r3 = (r0 & 255);
}

loc_809ED938:
{
    r0 = MemoryInline::FlatRead8((r5 + 96));
}

loc_809ED940:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(3))) {
        goto loc_809ED94C;
    }
}

loc_809ED944:
{
    r0 = (r3 + 1);
    r3 = (r0 & 255);
}

loc_809ED94C:
{
    r0 = MemoryInline::FlatRead8((r5 + 120));
}

loc_809ED954:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(3))) {
        goto loc_return;
    }
}

loc_809ED958:
{
    r0 = (r3 + 1);
    r3 = (r0 & 255);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    return;
}

loc_809ED964:
{
    r0 = MemoryInline::FlatRead8((r5 + 24));
}

loc_809ED96C:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(2))) {
        goto loc_809ED974;
    }
}

loc_809ED970:
{
    r3 = 1;
}

loc_809ED974:
{
    r0 = MemoryInline::FlatRead8((r5 + 48));
}

loc_809ED97C:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(2))) {
        goto loc_809ED988;
    }
}

loc_809ED980:
{
    r0 = (r3 + 1);
    r3 = (r0 & 255);
}

loc_809ED988:
{
    r0 = MemoryInline::FlatRead8((r5 + 72));
}

loc_809ED990:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(2))) {
        goto loc_809ED99C;
    }
}

loc_809ED994:
{
    r0 = (r3 + 1);
    r3 = (r0 & 255);
}

loc_809ED99C:
{
    r0 = MemoryInline::FlatRead8((r5 + 96));
}

loc_809ED9A4:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(2))) {
        goto loc_809ED9B0;
    }
}

loc_809ED9A8:
{
    r0 = (r3 + 1);
    r3 = (r0 & 255);
}

loc_809ED9B0:
{
    r0 = MemoryInline::FlatRead8((r5 + 120));
}

loc_809ED9B8:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(2))) {
        goto loc_return;
    }
}

loc_809ED9BC:
{
    r0 = (r3 + 1);
    r3 = (r0 & 255);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000029 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x809ED8E0 func_809ED8E0 preserves=true fpr_mask=0x00000000
