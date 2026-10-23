#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_803839A8_rac8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r6, uint32_t arg_r7)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    ctx->gpr[6] = arg_r6;
    ctx->gpr[7] = arg_r7;

    goto loc_803839A8;

loc_803839A8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    // inline leaf 0x804517B4 (7 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16440));
    r3 = (r3 + 65536);
    r3 = MemoryInline::FlatRead8((r3 + -15374));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_0 & 134217727);
    // end of inlined leaf 0x804517B4
}

loc_803839BC:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_803839F0;
    }
}

loc_803839C0:
{
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r0 = MemoryInline::FlatRead8((r3 + 2225));
}

loc_803839D0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803839F0;
    }
}

loc_803839D4:
{
    r3 = 0x806C0000u;
    r3 = (r3 + 18584);
    r4 = 0;
    r5 = 9836;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    // inline leaf 0x80383A24 (11 guest instruction(s))
    r4 = 0;
    r3 = 0x806C0000u;
    r3 = (r3 + 18584);
    MemoryInline::FlatWriteRam8((r3 + 4), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r3 + 5), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r3 + 6), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r3 + 7), static_cast<uint8_t>(r4));
    r0 = 4;
    MemoryInline::FlatWriteRam8((r3 + 8), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r3 + 9), static_cast<uint8_t>(r4));
    // end of inlined leaf 0x80383A24
    goto loc_80383A14;
}

loc_803839F0:
{
    r0 = 0;
    r4 = 0x806C0000u;
    r3 = (r4 + 18584);
    MemoryInline::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam16((r4 + 18584), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam8((r3 + 9), static_cast<uint8_t>(r0));
    r0 = 4;
    MemoryInline::FlatWriteRam8((r3 + 8), static_cast<uint8_t>(r0));
}

loc_80383A14:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return r3;
}

}

extern "C" void func_803839A8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_803839A8_rac8_0_8_0(ctx, ctx->gpr[3], ctx->gpr[6], ctx->gpr[7]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000200B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803839A8 func_803839A8 preserves=true fpr_mask=0x00000000
