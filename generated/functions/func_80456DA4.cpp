#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80456DA4_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];

    MKW_GUEST_ENTER(0x80456DA4u);
    goto loc_80456DA4;

loc_80456DA4:
{
}

loc_80456DA8:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r5, r0);
    r7 = r4;
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80456DC0;
    }
}

loc_80456DB8:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80456DC0:
{
    r0 = MemoryInline::FlatRead8(r4);
    r6 = r3;
}

loc_80456DCC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(80))) {
        goto loc_80456E24;
    }
}

loc_80456DD0:
{
    r0 = MemoryInline::FlatRead8((r4 + 1));
    r7 = (r4 + 1);
}

loc_80456DDC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(67))) {
        goto loc_80456DE4;
    }
}

loc_80456DE0:
{
    r7 = (r7 + 1);
}

loc_80456DE4:
{
    r0 = MemoryInline::FlatRead8(r7);
}

loc_80456DEC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(86))) {
        goto loc_80456DF4;
    }
}

loc_80456DF0:
{
    r7 = (r7 + 1);
}

loc_80456DF4:
{
    r0 = MemoryInline::FlatRead8(r7);
}

loc_80456DFC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(118))) {
        goto loc_80456E20;
    }
}

loc_80456E00:
{
    r0 = MemoryInline::FlatRead8(r3);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80456E0C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(80))) {
        goto loc_80456E18;
    }
}

loc_80456E10:
{
}

loc_80456E14:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(42))) {
        goto loc_80456E20;
    }
}

loc_80456E18:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80456E20:
{
    r7 = r4;
}

loc_80456E24:
{
    r0 = MemoryInline::FlatRead8(r3);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80456E30:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(42))) {
        goto loc_80456E3C;
    }
}

loc_80456E34:
{
}

loc_80456E38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(33))) {
        goto loc_80456F70;
    }
}

loc_80456E3C:
{
    r0 = MemoryInline::FlatRead8(r7);
    r6 = (r3 + 1);
    r3 = MemoryInline::FlatRead8(r3);
    r7 = (r7 + 1);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_80456E58:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(r0))) {
        goto loc_80456E64;
    }
}

loc_80456E5C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80456E64:
{
    r0 = MemoryInline::FlatRead8(r7);
    r7 = (r7 + 1);
    r3 = MemoryInline::FlatRead8(r6);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_80456E7C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_80456EC4;
    }
}

loc_80456E80:
{
}

loc_80456E84:
{
    r6 = (r6 + 1);
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(33))) {
        goto loc_80456E64;
    }
}

loc_80456E8C:
{
    r4 = 0;
    goto loc_80456EAC;
}

loc_80456E94:
{
    r3 = MemoryInline::FlatRead8(r6);
    r0 = (r4 * 10);
    r6 = (r6 + 1);
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r4 = (r3 + r0);
    r4 = (r4 + -48);
}

loc_80456EAC:
{
    r0 = MemoryInline::FlatRead8(r6);
}

loc_80456EB4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(33))) {
        goto loc_80456E94;
    }
}

loc_80456EB8:
{
    MemoryInline::FlatWrite32(r5, r4);
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80456EC4:
{
    r0 = MemoryInline::FlatRead8(r6);
    r6 = (r6 + 1);
}

loc_80456ED0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(33))) {
        goto loc_80456EC4;
    }
}

loc_80456ED4:
{
    r0 = MemoryInline::FlatRead8(r6);
    r6 = (r6 + 1);
}

loc_80456EE0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(33))) {
        goto loc_80456ED4;
    }
}

loc_80456EE4:
{
    r0 = MemoryInline::FlatRead8(r6);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80456EF8;
    }
}

loc_80456EF0:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80456EF8:
{
    r7 = (r4 + 1);
    goto loc_80456E64;
}

loc_80456F04:
{
    r7 = (r7 + 1);
    r0 = MemoryInline::FlatRead8(r7);
    r6 = (r6 + 1);
}

loc_80456F10:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(67))) {
        goto loc_80456F28;
    }
}

loc_80456F14:
{
    r0 = MemoryInline::FlatRead8(r6);
}

loc_80456F1C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(67))) {
        goto loc_80456F24;
    }
}

loc_80456F20:
{
    r6 = (r6 + 1);
}

loc_80456F24:
{
    r7 = (r7 + 1);
}

loc_80456F28:
{
    r0 = MemoryInline::FlatRead8(r6);
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80456F34:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(67))) {
        goto loc_80456F40;
    }
}

loc_80456F38:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80456F40:
{
    r0 = MemoryInline::FlatRead8(r7);
}

loc_80456F48:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(86))) {
        goto loc_80456F5C;
    }
}

loc_80456F4C:
{
}

loc_80456F50:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(86))) {
        goto loc_80456F58;
    }
}

loc_80456F54:
{
    r6 = (r6 + 1);
}

loc_80456F58:
{
    r7 = (r7 + 1);
}

loc_80456F5C:
{
    r0 = MemoryInline::FlatRead8(r6);
}

loc_80456F64:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(86))) {
        goto loc_80456F70;
    }
}

loc_80456F68:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80456F70:
{
    r3 = MemoryInline::FlatRead8(r6);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_80456F7C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(80))) {
        goto loc_80456F88;
    }
}

loc_80456F80:
{
}

loc_80456F84:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(82))) {
        goto loc_80456FB8;
    }
}

loc_80456F88:
{
    r0 = MemoryInline::FlatRead8(r7);
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80456F98:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(r0))) {
        goto loc_80456F04;
    }
}

loc_80456F9C:
{
    goto loc_80456FB8;
}

loc_80456FA0:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80456FB0;
    }
}

loc_80456FA8:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80456FB0:
{
    r6 = (r6 + 1);
    r7 = (r7 + 1);
}

loc_80456FB8:
{
    r4 = MemoryInline::FlatRead8(r6);
    r0 = MemoryInline::FlatRead8(r7);
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80456FCC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(r0))) {
        goto loc_80456FA0;
    }
}

loc_80456FD0:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80456DA4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80456DA4_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x000000D9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80456DA4 func_80456DA4 preserves=true fpr_mask=0x00000000
