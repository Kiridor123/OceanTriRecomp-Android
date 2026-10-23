#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_800CFF3C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->gpr[5] = arg_r5;

    goto loc_800CFF3C;

loc_800CFF3C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r27 = r3;
    r3 = 0x80690000u;
    r29 = (r3 + 28984);
    r28 = 0;
    r31 = (r29 + 612);
    r30 = MemoryInline::FlatRead8((r29 + 32));
    goto loc_800CFFA0;
}

loc_800CFF6C:
{
    r3 = (r29 + r28);
    r0 = MemoryInline::FlatRead8((r3 + 33));
}

loc_800CFF78:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800CFF98;
    }
}

loc_800CFF7C:
{
    r3 = r31;
    r4 = r27;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8045FD04u>(ctx);
    r3 = ctx->gpr[3];
}

loc_800CFF8C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800CFF98;
    }
}

loc_800CFF90:
{
    r3 = r28;
    goto loc_800CFFAC;
}

loc_800CFF98:
{
    r31 = (r31 + 16);
    r28 = (r28 + 1);
}

loc_800CFFA0:
{
}

loc_800CFFA4:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(r30))) {
        goto loc_800CFF6C;
    }
}

loc_800CFFA8:
{
    r3 = -1;
}

loc_800CFFAC:
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
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800CFF3C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800CFF3C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000081B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800CFF3C func_800CFF3C preserves=true fpr_mask=0x00000000
