#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80869B6C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t ctr = ctx->ctr;

    goto loc_80869B6C;

loc_80869B6C:
{
    r5 = r3;
    r4 = 0;
}

loc_80869B74:
{
    r6 = MemoryInline::FlatRead32(r5);
    r0 = MemoryInline::FlatRead32((r5 + 4));
    r5 = (r5 + 8);
    r6 = (r6 + r3);
    ctr = r0;
}

loc_80869B8C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80869BAC;
    }
}

loc_80869B90:
{
    r0 = MemoryInline::FlatRead32(r6);
}

loc_80869B98:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80869BA4;
    }
}

loc_80869B9C:
{
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32(r6, r0);
}

loc_80869BA4:
{
    r6 = (r6 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80869B90;
    }
}

loc_80869BAC:
{
    r4 = (r4 + 1);
}

loc_80869BB4:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(50))) {
        goto loc_80869B74;
    }
}

loc_80869BB8:
{
    r4 = 0x808B0000u;
    r5 = (r4 + -17320);
    goto loc_80869BFC;
}

loc_80869BC4:
{
    r4 = MemoryInline::FlatRead32(r5);
    r6 = MemoryInline::FlatRead32((r5 + 4));
    r5 = (r5 + 8);
    goto loc_80869BF0;
}

loc_80869BD4:
{
    r0 = MemoryInline::FlatRead8(r6);
    r6 = (r6 + 1);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_3 & -8);
    r3_addr_3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32(r3_addr_3);
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32(r4, r0);
    r4 = (r4 + 4);
}

loc_80869BF0:
{
    r0 = MemoryInline::FlatRead8(r6);
}

loc_80869BF8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(255))) {
        goto loc_80869BD4;
    }
}

loc_80869BFC:
{
    r0 = MemoryInline::FlatRead32(r5);
}

loc_80869C04:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80869BC4;
    }
}

loc_80869C08:
{
    r0 = MemoryInline::FlatRead32((r3 + 376));
    r0 = (r0 + r3);
    r4 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r4 + 28816), r0);
    r0 = MemoryInline::FlatRead32((r3 + 384));
    r0 = (r0 + r3);
    r4 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r4 + 28820), r0);
    r0 = MemoryInline::FlatRead32((r3 + 392));
    r0 = (r0 + r3);
    r4 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r4 + 28824), r0);
    r0 = MemoryInline::FlatRead32((r3 + 400));
    r0 = (r0 + r3);
    r3 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r3 + 28828), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80869B6C func_80869B6C preserves=true fpr_mask=0x00000000
