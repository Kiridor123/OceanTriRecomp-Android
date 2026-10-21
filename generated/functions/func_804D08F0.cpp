#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_804D08F0_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r13 = ctx->gpr[13];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x804D08F0u);
    goto loc_804D08F0;

loc_804D08F0:
{
    r0 = MemoryHw::FlatRead16((r13 + -20072));
}

loc_804D08F8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_804D0900;
    }
}

loc_804D08FC:
{
    goto loc_804D093C;
}

loc_804D0900:
{
    r4 = 0x80000000u;
    r0 = MemoryHw::FlatRead32((r4 + 204));
}

loc_804D090C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804D0924;
    }
}

loc_804D0910:
{
    r4 = -872415232;
    r0 = MemoryHw::FlatRead16((r4 + 8302));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_1 & 1);
    MemoryHw::FlatWrite16((r13 + -20072), static_cast<uint16_t>(r0));
    goto loc_804D092C;
}

loc_804D0924:
{
    r0 = 0;
    MemoryHw::FlatWrite16((r13 + -20072), static_cast<uint16_t>(r0));
}

loc_804D092C:
{
    r4 = 0x804D0000u;
    r0 = (r0 & 65535);
    r4 = (r4 + 3488);
    MemoryHw::FlatWrite32((r13 + -15064), r4);
}

loc_804D093C:
{
    SetCRResident(cr, xer, 1, static_cast<uint32_t>(r3), static_cast<uint32_t>(5));
}

loc_804D0940:
{
    if (((cr & 0x04000000u) != 0)) {
        goto loc_804D0960;
    }
}

loc_804D0944:
{
}

loc_804D0948:
{
    MemoryHw::FlatWrite16((r13 + -20072), static_cast<uint16_t>(r3));
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(3))) {
        goto loc_804D0960;
    }
}

loc_804D0950:
{
    if (((cr & 0x04000000u) != 0)) {
        goto loc_804D0960;
    }
}

loc_804D0954:
{
    r3 = 0x804D0000u;
    r3 = (r3 + 3744);
    MemoryHw::FlatWrite32((r13 + -15064), r3);
}

loc_804D0960:
{
    r3 = r0;
    ctx->gpr[0] = r0;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804D08F0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804D08F0_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002019 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804D08F0 func_804D08F0 preserves=true fpr_mask=0x00000000
