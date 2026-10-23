#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8045A0A4_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t ctr = ctx->ctr;

    goto loc_8045A0A4;

loc_8045A0A4:
{
    r5 = MemoryInline::FlatRead8((r3 + 5));
}

loc_8045A0AC:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8045A0C0;
    }
}

loc_8045A0B0:
{
    r0 = MemoryInline::FlatRead8((r4 + 5));
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_0 & 134217727);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8045A0C0:
{
    r0 = MemoryInline::FlatRead8((r4 + 5));
}

loc_8045A0C8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8045A0D8;
    }
}

loc_8045A0CC:
{
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r5));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 134217727);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8045A0D8:
{
    r5 = MemoryInline::FlatRead16((r3 + 2));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r0 = MemoryInline::FlatRead16((r4 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8045A0E4:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(r0))) {
        goto loc_8045A180;
    }
}

loc_8045A0E8:
{
    r7 = MemoryInline::FlatRead8((r3 + 4));
    r0 = MemoryInline::FlatRead8((r4 + 4));
    r9 = r7;
}

loc_8045A0F8:
{
    if ((static_cast<int32_t>(r7) <= static_cast<int32_t>(r0))) {
        goto loc_8045A100;
    }
}

loc_8045A0FC:
{
    r9 = r0;
}

loc_8045A100:
{
    r8 = 0;
    ctr = r9;
}

loc_8045A10C:
{
    if ((static_cast<int32_t>(r9) <= static_cast<int32_t>(0))) {
        goto loc_8045A138;
    }
}

loc_8045A110:
{
    r6 = (r3 + r8);
    r5 = (r4 + r8);
    r6 = MemoryInline::FlatRead8((r6 + 5));
    r0 = MemoryInline::FlatRead8((r5 + 5));
}

loc_8045A124:
{
    if ((static_cast<uint32_t>(r6) == static_cast<uint32_t>(r0))) {
        goto loc_8045A130;
    }
}

loc_8045A128:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8045A130:
{
    r8 = (r8 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8045A110;
    }
}

loc_8045A138:
{
}

loc_8045A13C:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(r7))) {
        goto loc_8045A144;
    }
}

loc_8045A140:
{
    r3 = r4;
}

loc_8045A144:
{
    r4 = MemoryInline::FlatRead8((r3 + 4));
    r0 = (r4 - r8);
    ctr = r0;
}

loc_8045A154:
{
    if ((static_cast<int32_t>(r8) >= static_cast<int32_t>(r4))) {
        goto loc_8045A178;
    }
}

loc_8045A158:
{
    r4 = (r3 + r8);
    r0 = MemoryInline::FlatRead8((r4 + 5));
}

loc_8045A164:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8045A170;
    }
}

loc_8045A168:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8045A170:
{
    r8 = (r8 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8045A158;
    }
}

loc_8045A178:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8045A180:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8045A0A4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8045A0A4_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000003F9 gpr_write=0x000003F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8045A0A4 func_8045A0A4 preserves=true fpr_mask=0x00000000
