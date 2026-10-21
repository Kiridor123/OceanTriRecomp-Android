#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_804790F0_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];

    MKW_GUEST_ENTER(0x804790F0u);
    goto loc_804790F0;

loc_804790F0:
{
    r6 = MemoryInline::FlatRead32(r3);
    r7 = 0;
    goto loc_80479108;
}

loc_80479100:
{
    r6 = MemoryInline::FlatRead32(r6);
    r7 = (r7 + 1);
}

loc_80479108:
{
}

loc_8047910C:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8047911C;
    }
}

loc_80479110:
{
    r0 = MemoryInline::FlatRead32((r6 + 12));
}

loc_80479118:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80479100;
    }
}

loc_8047911C:
{
    r8 = r4;
    r0 = 0;
    goto loc_80479148;
}

loc_80479128:
{
    r9 = MemoryInline::FlatRead32((r6 + 12));
    r5 = (r9 - r8);
    MemoryInline::FlatWrite32((r6 + 12), r5);
    if ((static_cast<int32_t>(r5) > static_cast<int32_t>(0))) {
        goto loc_80479140;
    }
}

loc_80479138:
{
    MemoryInline::FlatWrite32((r6 + 12), r0);
    r7 = (r7 + 1);
}

loc_80479140:
{
    r8 = (r8 - r9);
    r6 = MemoryInline::FlatRead32(r6);
}

loc_80479148:
{
}

loc_8047914C:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80479158;
    }
}

loc_80479150:
{
}

loc_80479154:
{
    if ((static_cast<int32_t>(r8) > static_cast<int32_t>(0))) {
        goto loc_80479128;
    }
}

loc_80479158:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
}

loc_80479160:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80479178;
    }
}

loc_80479164:
{
    r0 = (r0 - r4);
    MemoryInline::FlatWrite32((r3 + 8), r0);
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_80479178;
    }
}

loc_80479170:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 8), r0);
}

loc_80479178:
{
    r3 = r7;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    return r3;
}

}

extern "C" void func_804790F0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_804790F0_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x000003F9 gpr_write=0x000003E9 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804790F0 func_804790F0 preserves=true fpr_mask=0x00000000
