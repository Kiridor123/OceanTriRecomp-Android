#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_803010EC_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r6_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x803010ECu);
    goto loc_803010EC;

loc_803010EC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r30 = r4;
    r31 = (r3 + 1096);
    r3 = r31;
    r4 = 0;
    r5 = 60;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r0 = 0;
    MemoryInline::FlatWrite16((r29 + 76), static_cast<uint16_t>(r0));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r0 = (r0 + r30);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r29 + r0);
    r5 = (r3 + 326);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r30)));
    r0 = MemoryInline::FlatRead16((r29 + 64));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8030114C:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r0))) {
        goto loc_80301168;
    }
}

loc_80301150:
{
    r0 = MemoryInline::FlatRead8((r29 + 8));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = 0x805E0000u;
    r3 = (r3 + -18544);
    r3_addr_0 = (r3 + r0);
    r6 = MemoryInline::FlatRead32(r3_addr_0);
    goto loc_8030117C;
}

loc_80301168:
{
    r0 = MemoryInline::FlatRead8((r29 + 8));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3 = 0x805E0000u;
    r3 = (r3 + -18532);
    r3_addr_1 = (r3 + r0);
    r6 = MemoryInline::FlatRead32(r3_addr_1);
}

loc_8030117C:
{
    r7 = 0;
    r3 = 0x80790000u;
    r3 = (r3 + 20216);
    r4 = MemoryInline::FlatRead8((r3 + 1));
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r30)));
    r9 = 0;
    r0 = 1;
    r8 = 5;
    ctr = r8;
}

loc_803011A0:
{
    r8 = MemoryInline::FlatRead16(r5);
}

loc_803011A8:
{
    if ((static_cast<uint32_t>(r8) == static_cast<uint32_t>(65535))) {
        goto loc_80301244;
    }
}

loc_803011AC:
{
    r8 = (r8 * 12);
    r6_addr_2 = (r6 + r8);
    r8 = MemoryInline::FlatRead16(r6_addr_2);
    MemoryInline::FlatWrite16(r31, static_cast<uint16_t>(r8));
    r8 = MemoryInline::FlatRead16((r29 + 64));
    r8 = (r8 << 16);
    r8 = (static_cast<int32_t>(r8) >> 16);
}

loc_803011C0:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r8))) {
        goto loc_803011E8;
    }
}

loc_803011C4:
{
    MemoryInline::FlatWrite32((r31 + 4), r0);
    MemoryInline::FlatWrite8((r31 + 8), static_cast<uint8_t>(r4));
    r8 = MemoryInline::FlatRead16(r5);
    r8 = (r8 * 12);
    r8 = (r6 + r8);
    r8 = MemoryInline::FlatRead16((r8 + 4));
    MemoryInline::FlatWrite16((r31 + 2), static_cast<uint16_t>(r8));
    MemoryInline::FlatWrite8((r31 + 9), static_cast<uint8_t>(r9));
    goto loc_80301228;
}

loc_803011E8:
{
    r8 = MemoryInline::FlatRead16(r5);
    r8 = (r8 * 12);
    r8 = (r6 + r8);
    r8 = MemoryInline::FlatRead16((r8 + 2));
    MemoryInline::FlatWrite32((r31 + 4), r8);
    MemoryInline::FlatWrite8((r31 + 8), static_cast<uint8_t>(r9));
    r8 = MemoryInline::FlatRead16(r5);
    r8 = (r8 * 12);
    r8 = (r6 + r8);
    r8 = MemoryInline::FlatRead16((r8 + 4));
    MemoryInline::FlatWrite16((r31 + 2), static_cast<uint16_t>(r8));
    r8 = MemoryInline::FlatRead16(r5);
    r8 = (r8 * 12);
    r8 = (r6 + r8);
    r8 = MemoryInline::FlatRead8((r8 + 10));
    MemoryInline::FlatWrite8((r31 + 9), static_cast<uint8_t>(r8));
}

loc_80301228:
{
    r8 = MemoryInline::FlatRead16((r29 + 76));
    r8 = (r8 << 16);
    r8 = (static_cast<int32_t>(r8) >> 16);
    r8 = (r8 + 1);
    MemoryInline::FlatWrite16((r29 + 76), static_cast<uint16_t>(r8));
    r5 = (r5 + 4);
    r31 = (r31 + 12);
    r7 = (r7 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803011A0;
    }
}

loc_80301244:
{
    MemoryInline::FlatWrite16((r29 + 60), static_cast<uint16_t>(r30));
    r3 = MemoryInline::FlatRead16((r29 + 76));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead16((r29 + 66));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80301254:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r3))) {
        goto loc_80301264;
    }
}

loc_80301258:
{
    r0 = (r3 + -1);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWrite16((r29 + 66), static_cast<uint16_t>(r0));
}

loc_80301264:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803010EC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803010EC_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000003FB gpr_write=0x000003FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803010EC func_803010EC preserves=true fpr_mask=0x00000000
