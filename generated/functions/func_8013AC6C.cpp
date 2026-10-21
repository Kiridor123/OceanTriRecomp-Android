#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8013AC6C_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x8013AC6Cu);
    goto loc_8013AC6C;

loc_8013AC6C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r27 = r3;
    r28 = r4;
    r29 = (r4 & 255);
    r3 = MemoryInline::FlatRead32((r3 + 2468));
}

loc_8013AC94:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8013AD0C;
    }
}

loc_8013AC98:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r29)));
    r0 = (r0 * 12);
    r30 = (r3 + r0);
    r31 = (r5 & 255);
    goto loc_8013AD00;
}

loc_8013ACB0:
{
    r0 = MemoryInline::FlatRead8((r30 + 11));
}

loc_8013ACB8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8013ACC4;
    }
}

loc_8013ACBC:
{
}

loc_8013ACC0:
{
    if ((static_cast<uint32_t>(r31) != static_cast<uint32_t>(r0))) {
        goto loc_8013ACF8;
    }
}

loc_8013ACC4:
{
    r3 = r27;
    // inline leaf 0x801302A0 (3 guest instruction(s))
    r0 = MemoryInline::FlatRead8((r3 + 554));
    r3 = (r0 & 127);
    // end of inlined leaf 0x801302A0
    r3 = (r3 & 255);
    r0 = MemoryInline::FlatRead8((r30 + 9));
}

loc_8013ACD8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r3))) {
        goto loc_8013ACE4;
    }
}

loc_8013ACDC:
{
    r3 = (r29 & 255);
    goto loc_8013AD10;
}

loc_8013ACE4:
{
    r0 = MemoryInline::FlatRead8((r30 + 10));
}

loc_8013ACEC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_8013ACF8;
    }
}

loc_8013ACF0:
{
    r3 = (r29 & 255);
    goto loc_8013AD10;
}

loc_8013ACF8:
{
    r30 = (r30 + -12);
    r29 = (r29 + -1);
}

loc_8013AD00:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r29)));
}

loc_8013AD08:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_8013ACB0;
    }
}

loc_8013AD0C:
{
    r3 = r28;
}

loc_8013AD10:
{
    r11 = (r1 + 32);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[11] = r11;
    return r3;
}

}

extern "C" void func_8013AC6C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8013AC6C_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000080B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8013AC6C func_8013AC6C preserves=true fpr_mask=0x00000000
