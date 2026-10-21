#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80517A0C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
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
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x80517A0Cu);
    goto loc_80517A0C;

loc_80517A0C:
{
}

loc_80517A10:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r6))) {
        goto loc_80517A1C;
    }
}

loc_80517A14:
{
    r3 = -1;
    ctx->gpr[0] = r0;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80517A1C:
{
    r7 = (r4 - r6);
    r4 = r3;
    r10 = (r7 + 1);
    r11 = 0;
    goto loc_80517AA8;
}

loc_80517A30:
{
    r7 = MemoryInline::FlatRead8(r5);
    r0 = MemoryInline::FlatRead8(r4);
    r7 = (static_cast<int32_t>(static_cast<int8_t>(r7)));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80517A44:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(r0))) {
        goto loc_80517AA0;
    }
}

loc_80517A48:
{
    r7 = (r3 + r11);
    r0 = (r6 + -1);
    r8 = (r7 + 1);
    r12 = 1;
    r7 = (r5 + 1);
    ctr = r0;
}

loc_80517A64:
{
    if ((static_cast<int32_t>(r6) <= static_cast<int32_t>(1))) {
        goto loc_80517A90;
    }
}

loc_80517A68:
{
    r9 = MemoryInline::FlatRead8(r8);
    r0 = MemoryInline::FlatRead8(r7);
    r9 = (static_cast<int32_t>(static_cast<int8_t>(r9)));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80517A7C:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(r0))) {
        goto loc_80517A90;
    }
}

loc_80517A80:
{
    r12 = (r12 + 1);
    r7 = (r7 + 1);
    r8 = (r8 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80517A68;
    }
}

loc_80517A90:
{
}

loc_80517A94:
{
    if ((static_cast<int32_t>(r12) != static_cast<int32_t>(r6))) {
        goto loc_80517AA0;
    }
}

loc_80517A98:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80517AA0:
{
    r11 = (r11 + 1);
    r4 = (r4 + 1);
}

loc_80517AA8:
{
}

loc_80517AAC:
{
    if ((static_cast<int32_t>(r11) < static_cast<int32_t>(r10))) {
        goto loc_80517A30;
    }
}

loc_80517AB0:
{
    r3 = -1;
    ctx->gpr[0] = r0;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80517A0C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80517A0C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00001BF9 gpr_write=0x00001F99 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80517A0C func_80517A0C preserves=true fpr_mask=0x00000000
