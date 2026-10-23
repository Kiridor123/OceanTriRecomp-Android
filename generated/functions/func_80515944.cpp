#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80515944_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t ctr = ctx->ctr;

    goto loc_80515944;

loc_80515944:
{
}

loc_80515948:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r5))) {
        goto loc_80515A34;
    }
}

loc_8051594C:
{
}

loc_80515950:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(1024))) {
        goto loc_80515960;
    }
}

loc_80515954:
{
    r6 = r4;
    r7 = 0;
    goto loc_805159BC;
}

loc_80515960:
{
    r0 = (r4 + -1024);
    r7 = MemoryInline::FlatRead32((r3 + 52));
    r6 = (static_cast<int32_t>(r0) >> 9);
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_805159B4;
    }
}

loc_80515970:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
}

loc_80515974:
{
    ctr = r0;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805159A8;
    }
}

loc_8051597C:
{
    r7 = MemoryInline::FlatRead32(r7);
    r7 = MemoryInline::FlatRead32(r7);
    r7 = MemoryInline::FlatRead32(r7);
    r7 = MemoryInline::FlatRead32(r7);
    r7 = MemoryInline::FlatRead32(r7);
    r7 = MemoryInline::FlatRead32(r7);
    r7 = MemoryInline::FlatRead32(r7);
    r7 = MemoryInline::FlatRead32(r7);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8051597C;
    }
}

loc_805159A0:
{
    r6 = (r6 & 7);
}

loc_805159A4:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_805159B4;
    }
}

loc_805159A8:
{
    ctr = r6;
}

loc_805159AC:
{
    r7 = MemoryInline::FlatRead32(r7);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_805159AC;
    }
}

loc_805159B4:
{
    r0 = (r4 + -1024);
    r6 = (r0 & 511);
}

loc_805159BC:
{
    r0 = (r5 - r4);
    ctr = r0;
}

loc_805159C8:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r5))) {
        goto loc_80515A34;
    }
}

loc_805159CC:
{
}

loc_805159D0:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_805159FC;
    }
}

loc_805159D4:
{
}

loc_805159D8:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(1024))) {
        goto loc_805159F0;
    }
}

loc_805159DC:
{
    r5 = (r3 + r6);
    r6 = (r6 + 1);
    r0 = MemoryInline::FlatRead8((r5 + 56));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    goto loc_80515A18;
}

loc_805159F0:
{
    r7 = MemoryInline::FlatRead32((r3 + 52));
    r6 = 0;
    goto loc_80515A0C;
}

loc_805159FC:
{
}

loc_80515A00:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(512))) {
        goto loc_80515A0C;
    }
}

loc_80515A04:
{
    r6 = 0;
    r7 = MemoryInline::FlatRead32(r7);
}

loc_80515A0C:
{
    r5 = (r7 + r6);
    r6 = (r6 + 1);
    r0 = MemoryInline::FlatRead8((r5 + 4));
}

loc_80515A18:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80515A20:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(32))) {
        goto loc_80515A2C;
    }
}

loc_80515A24:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80515A2C:
{
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_805159CC;
    }
}

loc_80515A34:
{
    r3 = -1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80515944(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80515944_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x000000F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80515944 func_80515944 preserves=true fpr_mask=0x00000000
