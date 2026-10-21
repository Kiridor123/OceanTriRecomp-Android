#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_802EDB70_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];

    MKW_GUEST_ENTER(0x802EDB70u);
    goto loc_802EDB70;

loc_802EDB70:
{
    r0 = MemoryInline::FlatRead16((r3 + 772));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r6 = (r3 + r0);
    r6 = MemoryInline::FlatRead16((r6 + 632));
    r0 = (r6 + -223);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_1 & 134217727);
    r0 = (r0 & 255);
    r6 = MemoryInline::FlatRead8((r3 + 776));
}

loc_802EDB98:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_802EDC5C;
    }
}

loc_802EDB9C:
{
    r3 = MemoryInline::FlatRead8((r4 + 1));
}

loc_802EDBA4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802EDBB0;
    }
}

loc_802EDBA8:
{
    r3 = (r3 + -1);
    MemoryInline::FlatWrite8((r4 + 1), static_cast<uint8_t>(r3));
}

loc_802EDBB0:
{
    r3 = 0;
    MemoryInline::FlatWrite8((r4 + 2), static_cast<uint8_t>(r3));
    r3 = MemoryInline::FlatRead8(r4);
}

loc_802EDBC0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r3))) {
        goto loc_802EDBDC;
    }
}

loc_802EDBC4:
{
    r3 = (0 - r0);
    r3 = (r3 | r0);
    r3 = (static_cast<int32_t>(r3) >> 31);
    r3 = (r3 & 16);
    MemoryInline::FlatWrite8((r4 + 3), static_cast<uint8_t>(r3));
    goto loc_802EDC38;
}

loc_802EDBDC:
{
}

loc_802EDBE0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802EDC10;
    }
}

loc_802EDBE4:
{
    r3 = MemoryInline::FlatRead8((r4 + 3));
}

loc_802EDBEC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802EDBF8;
    }
}

loc_802EDBF0:
{
    r3 = (r3 + -1);
    MemoryInline::FlatWrite8((r4 + 3), static_cast<uint8_t>(r3));
}

loc_802EDBF8:
{
    r3 = MemoryInline::FlatRead8((r4 + 3));
}

loc_802EDC00:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(3))) {
        goto loc_802EDC38;
    }
}

loc_802EDC04:
{
    r3 = 3;
    MemoryInline::FlatWrite8((r4 + 3), static_cast<uint8_t>(r3));
    goto loc_802EDC38;
}

loc_802EDC10:
{
    r3 = MemoryInline::FlatRead8((r4 + 3));
}

loc_802EDC18:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(16))) {
        goto loc_802EDC24;
    }
}

loc_802EDC1C:
{
    r3 = (r3 + 1);
    MemoryInline::FlatWrite8((r4 + 3), static_cast<uint8_t>(r3));
}

loc_802EDC24:
{
    r3 = MemoryInline::FlatRead8((r4 + 3));
}

loc_802EDC2C:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(16))) {
        goto loc_802EDC38;
    }
}

loc_802EDC30:
{
    r3 = 16;
    MemoryInline::FlatWrite8((r4 + 3), static_cast<uint8_t>(r3));
}

loc_802EDC38:
{
    r3 = MemoryInline::FlatRead8((r5 + 1));
}

loc_802EDC40:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(16))) {
        goto loc_802EDC50;
    }
}

loc_802EDC44:
{
    r3 = (r3 + -16);
    MemoryInline::FlatWrite8((r5 + 1), static_cast<uint8_t>(r3));
    goto loc_802EDD40;
}

loc_802EDC50:
{
    r3 = 0;
    MemoryInline::FlatWrite8((r5 + 1), static_cast<uint8_t>(r3));
    goto loc_802EDD40;
}

loc_802EDC5C:
{
    r6 = MemoryInline::FlatRead8((r4 + 1));
}

loc_802EDC64:
{
    if ((static_cast<uint32_t>(r6) >= static_cast<uint32_t>(10))) {
        goto loc_802EDC70;
    }
}

loc_802EDC68:
{
    r6 = (r6 + 1);
    MemoryInline::FlatWrite8((r4 + 1), static_cast<uint8_t>(r6));
}

loc_802EDC70:
{
    r6 = MemoryInline::FlatRead8((r4 + 2));
    r6 = (r6 + 1);
    MemoryInline::FlatWrite8((r4 + 2), static_cast<uint8_t>(r6));
    r6 = (r6 & 255);
}

loc_802EDC84:
{
    if ((static_cast<uint32_t>(r6) < static_cast<uint32_t>(190))) {
        goto loc_802EDC94;
    }
}

loc_802EDC88:
{
    r6 = 40;
    MemoryInline::FlatWrite8((r4 + 2), static_cast<uint8_t>(r6));
    goto loc_802EDCAC;
}

loc_802EDC94:
{
    r6 = (r6 + 166);
    r6 = (r6 & 255);
}

loc_802EDCA0:
{
    if ((static_cast<uint32_t>(r6) > static_cast<uint32_t>(9))) {
        goto loc_802EDCAC;
    }
}

loc_802EDCA4:
{
    r6 = 40;
    MemoryInline::FlatWrite8((r4 + 2), static_cast<uint8_t>(r6));
}

loc_802EDCAC:
{
    r3 = MemoryInline::FlatRead8((r3 + 777));
    r3 = (r3 & 32);
}

loc_802EDCB8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802EDCC4;
    }
}

loc_802EDCBC:
{
    r3 = 100;
    MemoryInline::FlatWrite8((r4 + 2), static_cast<uint8_t>(r3));
}

loc_802EDCC4:
{
}

loc_802EDCC8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802EDCF8;
    }
}

loc_802EDCCC:
{
    r3 = MemoryInline::FlatRead8((r4 + 3));
}

loc_802EDCD4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802EDCE0;
    }
}

loc_802EDCD8:
{
    r3 = (r3 + -1);
    MemoryInline::FlatWrite8((r4 + 3), static_cast<uint8_t>(r3));
}

loc_802EDCE0:
{
    r3 = MemoryInline::FlatRead8((r4 + 3));
}

loc_802EDCE8:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(3))) {
        goto loc_802EDD20;
    }
}

loc_802EDCEC:
{
    r3 = 3;
    MemoryInline::FlatWrite8((r4 + 3), static_cast<uint8_t>(r3));
    goto loc_802EDD20;
}

loc_802EDCF8:
{
    r3 = MemoryInline::FlatRead8((r4 + 3));
}

loc_802EDD00:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(3))) {
        goto loc_802EDD0C;
    }
}

loc_802EDD04:
{
    r3 = (r3 + 1);
    MemoryInline::FlatWrite8((r4 + 3), static_cast<uint8_t>(r3));
}

loc_802EDD0C:
{
    r3 = MemoryInline::FlatRead8((r4 + 3));
}

loc_802EDD14:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(3))) {
        goto loc_802EDD20;
    }
}

loc_802EDD18:
{
    r3 = (r3 + -1);
    MemoryInline::FlatWrite8((r4 + 3), static_cast<uint8_t>(r3));
}

loc_802EDD20:
{
    r3 = MemoryInline::FlatRead8((r5 + 1));
    r3 = (r3 + 10);
    MemoryInline::FlatWrite8((r5 + 1), static_cast<uint8_t>(r3));
    r3 = (r3 & 255);
}

loc_802EDD34:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(150))) {
        goto loc_802EDD40;
    }
}

loc_802EDD38:
{
    r3 = 150;
    MemoryInline::FlatWrite8((r5 + 1), static_cast<uint8_t>(r3));
}

loc_802EDD40:
{
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    return r3;
}

}

extern "C" void func_802EDB70(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_802EDB70_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000049 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802EDB70 func_802EDB70 preserves=true fpr_mask=0x00000000
