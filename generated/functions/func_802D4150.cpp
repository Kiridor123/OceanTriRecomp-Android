#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802D4150_ra38_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t ctr = ctx->ctr;

    goto loc_802D4150;

loc_802D4150:
{
    r8 = 8;
    r6 = (r4 & 65535);
    r0 = 4;
    ctr = r0;
}

loc_802D4160:
{
    r0 = (r8 & 255);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r7 = (r3 + r0);
    r0 = MemoryInline::FlatRead16((r7 + 912));
}

loc_802D4174:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_802D41A0;
    }
}

loc_802D4178:
{
    r0 = MemoryInline::FlatRead16((r7 + 914));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 + r5);
    MemoryInline::FlatWrite16((r7 + 914), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r7 + 914));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_802D418C:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_802D4190:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r7 + 914), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r7 + 912), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->ctr = ctr;
    return;
}

loc_802D41A0:
{
    r8 = (r8 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_802D4160;
    }
}

loc_802D41A8:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
    r6 = MemoryInline::FlatRead16((r3 + 944));
}

loc_802D41B4:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_802D41CC;
    }
}

loc_802D41B8:
{
}

loc_802D41BC:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_802D41CC;
    }
}

loc_802D41C0:
{
    MemoryInline::FlatWrite16((r3 + 944), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite16((r3 + 946), static_cast<uint16_t>(r5));
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->ctr = ctr;
    return;
}

loc_802D41CC:
{
    r6 = MemoryInline::FlatRead16((r3 + 948));
}

loc_802D41D4:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_802D41EC;
    }
}

loc_802D41D8:
{
}

loc_802D41DC:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_802D41EC;
    }
}

loc_802D41E0:
{
    MemoryInline::FlatWrite16((r3 + 948), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite16((r3 + 950), static_cast<uint16_t>(r5));
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->ctr = ctr;
    return;
}

loc_802D41EC:
{
    r6 = MemoryInline::FlatRead16((r3 + 952));
}

loc_802D41F4:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_802D420C;
    }
}

loc_802D41F8:
{
}

loc_802D41FC:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_802D420C;
    }
}

loc_802D4200:
{
    MemoryInline::FlatWrite16((r3 + 952), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite16((r3 + 954), static_cast<uint16_t>(r5));
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->ctr = ctr;
    return;
}

loc_802D420C:
{
    r6 = MemoryInline::FlatRead16((r3 + 956));
}

loc_802D4214:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_802D4218:
{
}

loc_802D421C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_802D4220:
{
    MemoryInline::FlatWrite16((r3 + 956), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite16((r3 + 958), static_cast<uint16_t>(r5));
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->ctr = ctr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->ctr = ctr;
    return;
}

}

extern "C" void func_802D4150(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_802D4150_ra38_0_0_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
}

// RECOMP_GUEST_ABI gpr_read=0x000001F9 gpr_write=0x000001C1 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802D4150 func_802D4150 preserves=true fpr_mask=0x00000000
