#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80141860_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
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
    uint32_t ctr = ctx->ctr;

    goto loc_80141860;

loc_80141860:
{
    r3 = 0x806A0000u;
    r3 = (r3 + 27152);
    r8 = (r3 + 144);
    r9 = 0;
    r4 = 2;
    r3 = 0;
    r7 = 1;
    r6 = 3;
    r0 = 4;
    ctr = r0;
}

loc_80141888:
{
    r0 = MemoryInline::FlatRead8((r8 + 19));
}

loc_80141890:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801418A0;
    }
}

loc_80141894:
{
}

loc_80141898:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_801418C4;
    }
}

loc_8014189C:
{
    goto loc_801418E4;
}

loc_801418A0:
{
    r5 = MemoryInline::FlatRead16((r8 + 16));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r0 = (r5 + -1);
    MemoryInline::FlatWrite16((r8 + 16), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_801418B4:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_801418E4;
    }
}

loc_801418B8:
{
    MemoryInline::FlatWrite8((r8 + 19), static_cast<uint8_t>(r7));
    MemoryInline::FlatWrite16((r8 + 16), static_cast<uint16_t>(r6));
    goto loc_801418E4;
}

loc_801418C4:
{
    r5 = MemoryInline::FlatRead16((r8 + 16));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r0 = (r5 + -1);
    MemoryInline::FlatWrite16((r8 + 16), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_801418D8:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_801418E4;
    }
}

loc_801418DC:
{
    MemoryInline::FlatWrite8((r8 + 19), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite16((r8 + 16), static_cast<uint16_t>(r3));
}

loc_801418E4:
{
    r0 = MemoryInline::FlatRead8((r8 + 39));
}

loc_801418EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801418FC;
    }
}

loc_801418F0:
{
}

loc_801418F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80141920;
    }
}

loc_801418F8:
{
    goto loc_80141940;
}

loc_801418FC:
{
    r5 = MemoryInline::FlatRead16((r8 + 36));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r0 = (r5 + -1);
    MemoryInline::FlatWrite16((r8 + 36), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_80141910:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_80141940;
    }
}

loc_80141914:
{
    MemoryInline::FlatWrite8((r8 + 39), static_cast<uint8_t>(r7));
    MemoryInline::FlatWrite16((r8 + 36), static_cast<uint16_t>(r6));
    goto loc_80141940;
}

loc_80141920:
{
    r5 = MemoryInline::FlatRead16((r8 + 36));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r0 = (r5 + -1);
    MemoryInline::FlatWrite16((r8 + 36), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_80141934:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_80141940;
    }
}

loc_80141938:
{
    MemoryInline::FlatWrite8((r8 + 39), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite16((r8 + 36), static_cast<uint16_t>(r3));
}

loc_80141940:
{
    r9 = (r9 + 1);
    r8 = (r8 + 40);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80141888;
    }
}

loc_8014194C:
{
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

extern "C" void func_80141860(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80141860_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000003F9 gpr_write=0x000003F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80141860 func_80141860 preserves=true fpr_mask=0x00000000
