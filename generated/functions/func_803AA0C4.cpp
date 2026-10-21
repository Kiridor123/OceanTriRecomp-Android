#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803AA0C4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_subfc_sub_0 = 0;
    uint32_t r3_adde_right_0 = 0;
    uint32_t r3_ca_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x803AA0C4u);
    goto loc_803AA0C4;

loc_803AA0C4:
{
}

loc_803AA0C8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(4))) {
        goto loc_803AA1B8;
    }
}

loc_803AA0CC:
{
    r6 = 0;
    r4 = (r5 & 255);
    r0 = MemoryInline::FlatRead32((r3 + 148));
}

loc_803AA0DC:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_803AA0E8;
    }
}

loc_803AA0E0:
{
    r5 = r0;
    goto loc_803AA0EC;
}

loc_803AA0E8:
{
    r5 = MemoryInline::FlatRead32((r3 + 728));
}

loc_803AA0EC:
{
}

loc_803AA0F0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803AA0FC;
    }
}

loc_803AA0F4:
{
    r6 = 1;
    goto loc_803AA118;
}

loc_803AA0FC:
{
    r0 = (r0 & 8);
}

loc_803AA104:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803AA118;
    }
}

loc_803AA108:
{
    r0 = (r5 & 32);
}

loc_803AA110:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803AA118;
    }
}

loc_803AA114:
{
    r6 = 1;
}

loc_803AA118:
{
    r0 = MemoryInline::FlatRead32((r3 + 244));
}

loc_803AA120:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_803AA12C;
    }
}

loc_803AA124:
{
    r5 = r0;
    goto loc_803AA130;
}

loc_803AA12C:
{
    r5 = MemoryInline::FlatRead32((r3 + 732));
}

loc_803AA130:
{
}

loc_803AA134:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803AA140;
    }
}

loc_803AA138:
{
    r6 = (r6 + 1);
    goto loc_803AA15C;
}

loc_803AA140:
{
    r0 = (r0 & 8);
}

loc_803AA148:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803AA15C;
    }
}

loc_803AA14C:
{
    r0 = (r5 & 32);
}

loc_803AA154:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803AA15C;
    }
}

loc_803AA158:
{
    r6 = (r6 + 1);
}

loc_803AA15C:
{
    r0 = MemoryInline::FlatRead32((r3 + 340));
}

loc_803AA164:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_803AA170;
    }
}

loc_803AA168:
{
    r5 = r0;
    goto loc_803AA174;
}

loc_803AA170:
{
    r5 = MemoryInline::FlatRead32((r3 + 736));
}

loc_803AA174:
{
}

loc_803AA178:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803AA184;
    }
}

loc_803AA17C:
{
    r6 = (r6 + 1);
    goto loc_803AA1A0;
}

loc_803AA184:
{
    r0 = (r0 & 8);
}

loc_803AA18C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803AA1A0;
    }
}

loc_803AA190:
{
    r0 = (r5 & 32);
}

loc_803AA198:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803AA1A0;
    }
}

loc_803AA19C:
{
    r6 = (r6 + 1);
}

loc_803AA1A0:
{
    r0 = 3;
    r4 = (static_cast<int32_t>(r6) >> 31);
    r3 = 0;
    r0_subfc_sub_0 = r0;
    r0 = (r6 - r0_subfc_sub_0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r6) >= static_cast<uint32_t>(r0_subfc_sub_0) ? 1u : 0u) << 29);
    r3_adde_right_0 = r3;
    r3_ca_0 = (xer >> 29) & 1u;
    r3 = (r4 + r3_adde_right_0);
    r3 = (r3 + r3_ca_0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->xer = xer;
    return;
}

loc_803AA1B8:
{
    r0 = (r4 * 96);
    r6 = (r3 + r0);
    r6 = MemoryInline::FlatRead32((r6 + 148));
    r0 = (r6 & 8);
}

loc_803AA1CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803AA214;
    }
}

loc_803AA1D0:
{
    r0 = (r6 & 64);
}

loc_803AA1D8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(64))) {
        goto loc_803AA1E4;
    }
}

loc_803AA1DC:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->xer = xer;
    return;
}

loc_803AA1E4:
{
    r0 = (r5 & 255);
}

loc_803AA1EC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803AA1F4;
    }
}

loc_803AA1F0:
{
    goto loc_803AA200;
}

loc_803AA1F4:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r3 + r0);
    r6 = MemoryInline::FlatRead32((r3 + 728));
}

loc_803AA200:
{
    r0 = (r6 & 32);
}

loc_803AA208:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803AA214;
    }
}

loc_803AA20C:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->xer = xer;
    return;
}

loc_803AA214:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803AA0C4 func_803AA0C4 preserves=true fpr_mask=0x00000000
