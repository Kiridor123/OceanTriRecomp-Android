#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_809FAEF0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x809FAEF0u);
    goto loc_809FAEF0;

loc_809FAEF0:
{
    r6 = MemoryInline::FlatRead32((r3 + 256));
    r8 = 255;
    r7 = 1;
    r0 = 2;
    ctr = r0;
}

loc_809FAF04:
{
    r0 = (r7 & 255);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r5 = (r6 + r0);
    r0 = MemoryInline::FlatRead32((r5 + 8));
}

loc_809FAF18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_809FAF24;
    }
}

loc_809FAF1C:
{
    r8 = r7;
    goto loc_809FAFE0;
}

loc_809FAF24:
{
    r7 = (r7 + 1);
    r0 = (r7 & 255);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r5 = (r6 + r0);
    r0 = MemoryInline::FlatRead32((r5 + 8));
}

loc_809FAF3C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_809FAF48;
    }
}

loc_809FAF40:
{
    r8 = r7;
    goto loc_809FAFE0;
}

loc_809FAF48:
{
    r7 = (r7 + 1);
    r0 = (r7 & 255);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r5 = (r6 + r0);
    r0 = MemoryInline::FlatRead32((r5 + 8));
}

loc_809FAF60:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_809FAF6C;
    }
}

loc_809FAF64:
{
    r8 = r7;
    goto loc_809FAFE0;
}

loc_809FAF6C:
{
    r7 = (r7 + 1);
    r0 = (r7 & 255);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r5 = (r6 + r0);
    r0 = MemoryInline::FlatRead32((r5 + 8));
}

loc_809FAF84:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_809FAF90;
    }
}

loc_809FAF88:
{
    r8 = r7;
    goto loc_809FAFE0;
}

loc_809FAF90:
{
    r7 = (r7 + 1);
    r0 = (r7 & 255);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r5 = (r6 + r0);
    r0 = MemoryInline::FlatRead32((r5 + 8));
}

loc_809FAFA8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_809FAFB4;
    }
}

loc_809FAFAC:
{
    r8 = r7;
    goto loc_809FAFE0;
}

loc_809FAFB4:
{
    r7 = (r7 + 1);
    r0 = (r7 & 255);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & -4);
    r5 = (r6 + r0);
    r0 = MemoryInline::FlatRead32((r5 + 8));
}

loc_809FAFCC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_809FAFD8;
    }
}

loc_809FAFD0:
{
    r8 = r7;
    goto loc_809FAFE0;
}

loc_809FAFD8:
{
    r7 = (r7 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_809FAF04;
    }
}

loc_809FAFE0:
{
    r5 = (r8 & 255);
}

loc_809FAFE8:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(255))) {
        goto loc_809FAFF4;
    }
}

loc_809FAFEC:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->ctr = ctr;
    return;
}

loc_809FAFF4:
{
    r4 = (r4 & 255);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x809FADF4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    ctr = ctx->ctr;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x809FAEF0 func_809FAEF0 preserves=true fpr_mask=0x00000000
