#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80127EDC_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];

    goto loc_80127EDC;

loc_80127EDC:
{
    r4 = MemoryInline::FlatRead32((r3 + 456));
    r6 = (r4 & 1);
}

loc_80127EE8:
{
    r7 = 8;
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80127EF4;
    }
}

loc_80127EF0:
{
    r7 = 4;
}

loc_80127EF4:
{
    r0 = (r4 & 16);
}

loc_80127EFC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80127F30;
    }
}

loc_80127F00:
{
    r0 = MemoryInline::FlatRead8((r3 + 482));
}

loc_80127F08:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80127F18;
    }
}

loc_80127F0C:
{
}

loc_80127F10:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80127F28;
    }
}

loc_80127F14:
{
    goto loc_80127F20;
}

loc_80127F18:
{
    r7 = (r7 | 192);
    goto loc_80127F54;
}

loc_80127F20:
{
    r7 = (r7 | 64);
    goto loc_80127F54;
}

loc_80127F28:
{
    r7 = (r7 | 128);
    goto loc_80127F54;
}

loc_80127F30:
{
    r0 = (r4 & 4096);
}

loc_80127F38:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80127F44;
    }
}

loc_80127F3C:
{
    r7 = (r7 | 64);
    goto loc_80127F54;
}

loc_80127F44:
{
    r0 = (r4 & 8192);
}

loc_80127F4C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80127F54;
    }
}

loc_80127F50:
{
    r7 = (r7 | 128);
}

loc_80127F54:
{
    r5 = MemoryInline::FlatRead8((r3 + 482));
}

loc_80127F5C:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(1))) {
        goto loc_80127F6C;
    }
}

loc_80127F60:
{
    r0 = MemoryInline::FlatRead8((r3 + 483));
}

loc_80127F68:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_80127F70;
    }
}

loc_80127F6C:
{
    r7 = (r7 | 512);
}

loc_80127F70:
{
    r0 = (r4 & 256);
}

loc_80127F78:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80127F84;
    }
}

loc_80127F7C:
{
}

loc_80127F80:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(4))) {
        goto loc_80127F88;
    }
}

loc_80127F84:
{
    r7 = (r7 | 2048);
}

loc_80127F88:
{
}

loc_80127F8C:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80127FA4;
    }
}

loc_80127F90:
{
    r0 = MemoryInline::FlatRead8((r3 + 485));
}

loc_80127F98:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(11))) {
        goto loc_80127FA4;
    }
}

loc_80127F9C:
{
    r0 = (r7 | 4096);
    r7 = (r0 & 65535);
}

loc_80127FA4:
{
    r3 = r7;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80127EDC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80127EDC_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x000000F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80127EDC func_80127EDC preserves=true fpr_mask=0x00000000
