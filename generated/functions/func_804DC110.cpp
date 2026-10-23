#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_804DC110_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r28_addr_0 = 0;
    uint32_t r28_addr_1 = 0;
    uint32_t r28_addr_2 = 0;
    uint32_t r28_addr_3 = 0;
    uint32_t r28_addr_4 = 0;
    uint32_t r28_addr_5 = 0;
    uint32_t r28_addr_6 = 0;
    uint32_t r28_addr_7 = 0;
    uint32_t r28_addr_8 = 0;
    uint32_t r31_addr_0 = 0;
    uint32_t r31_addr_1 = 0;
    uint32_t r31_addr_2 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_804DC110;

loc_804DC110:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x8045747C (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    // end of inlined leaf 0x8045747C
    r0 = MemoryInline::FlatRead32((r13 + -14796));
    r31 = 0x80750000u;
    r31 = (r31 + 2752);
}

loc_804DC134:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r0))) {
        goto loc_804DC28C;
    }
}

loc_804DC138:
{
    r4 = MemoryInline::FlatRead32((r13 + -14792));
}

loc_804DC140:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_804DC28C;
    }
}

loc_804DC144:
{
    r0 = (0 - r3);
    r28 = (r31 + r4);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r28_addr_1 = (r28 + r0);
    r30 = MemoryInline::FlatRead16(r28_addr_1);
}

loc_804DC158:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_804DC28C;
    }
}

loc_804DC15C:
{
    r0 = MemoryInline::FlatRead32((r13 + -14800));
}

loc_804DC164:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804DC28C;
    }
}

loc_804DC168:
{
    r27 = (r31 + r30);
    r25 = (r31 + 6);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    r31_addr_1 = (r31 + r30);
    r5 = MemoryInline::FlatRead16(r31_addr_1);
    r24 = (r25 + r0);
    r3 = MemoryInline::FlatRead16((r27 + 2));
    r4 = r27;
    r0 = (r30 + 2);
    r6 = (r3 - r5);
    r26 = MemoryInline::FlatRead16(r24);
    r3 = r27;
    r5 = (r5 - r0);
    r29 = (r6 + 2);
    r4 = (r4 + 2);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x8045BC18u>(ctx);
    r3 = ctx->gpr[3];
    r4 = (r24 + -2);
    r0 = (r4 + 2);
    r0 = (r0 - r25);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_3 & 2147483647);
    ctr = r0;
}

loc_804DC1BC:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r25))) {
        goto loc_804DC1EC;
    }
}

loc_804DC1C0:
{
}

loc_804DC1C4:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r27))) {
        goto loc_804DC1D8;
    }
}

loc_804DC1C8:
{
    r3 = MemoryInline::FlatRead16(r4);
    r0 = (r3 + -2);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    goto loc_804DC1E4;
}

loc_804DC1D8:
{
    r0 = MemoryInline::FlatRead16(r4);
    r0 = (r0 - r29);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
}

loc_804DC1E4:
{
    r4 = (r4 + -2);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804DC1C0;
    }
}

loc_804DC1EC:
{
    r5 = MemoryInline::FlatRead16(r27);
    r4 = (r31 + r29);
    r0 = (r5 + r29);
    r3 = (r31 + r5);
    r4 = (r5 + r4);
    r5 = (r26 - r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x8045BC18u>(ctx);
    r3 = ctx->gpr[3];
    r0 = (r26 - r29);
    r5 = r29;
    r3 = (r31 + r0);
    r4 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead32((r13 + -14796));
    r6 = 0;
    r3 = 0;
    ctr = r0;
}

loc_804DC230:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(0))) {
        goto loc_804DC268;
    }
}

loc_804DC234:
{
    // nop
}

loc_804DC238:
{
    r0 = (0 - r6);
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r5 = (r5_rot_2 & -2);
    r28_addr_3 = (r28 + r5);
    r4 = MemoryInline::FlatRead16(r28_addr_3);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r30));
}

loc_804DC248:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_804DC260;
    }
}

loc_804DC24C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_804DC25C;
    }
}

loc_804DC250:
{
    r0 = (r4 + -2);
    r28_addr_4 = (r28 + r5);
    MemoryInline::FlatWrite16(r28_addr_4, static_cast<uint16_t>(r0));
    goto loc_804DC260;
}

loc_804DC25C:
{
    r28_addr_5 = (r28 + r5);
    MemoryInline::FlatWrite16(r28_addr_5, static_cast<uint16_t>(r3));
}

loc_804DC260:
{
    r6 = (r6 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804DC238;
    }
}

loc_804DC268:
{
    r4 = MemoryInline::FlatRead32((r13 + -14804));
    r0 = 1;
    r3 = MemoryInline::FlatRead32((r13 + -14800));
    r4 = (r4 + r29);
    MemoryInline::FlatWrite32((r13 + -14804), r4);
    r3 = (r3 + -1);
    MemoryInline::FlatWrite32((r13 + -14800), r3);
    MemoryInline::FlatWriteRam16((r31 + 4), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite8((r13 + -14787), static_cast<uint8_t>(r0));
}

loc_804DC28C:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574C8 (9 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, true, false);
    // end of inlined leaf 0x804574C8
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804DC110(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804DC110_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000207B gpr_write=0x0000087B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804DC110 func_804DC110 preserves=true fpr_mask=0x00000000
