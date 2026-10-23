#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_800D9BD0_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_800D9BD0;

loc_800D9BD0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r28 = r4;
    r0 = 0;
    MemoryInline::FlatWrite8((r4 + 37), static_cast<uint8_t>(r0));
    r30 = 0;
    r5 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r5 + -9);
}

loc_800D9C08:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_800D9D04;
    }
}

loc_800D9C0C:
{
}

loc_800D9C10:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(1))) {
        goto loc_800D9C30;
    }
}

loc_800D9C14:
{
}

loc_800D9C18:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(3))) {
        goto loc_800D9C30;
    }
}

loc_800D9C1C:
{
}

loc_800D9C20:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(4))) {
        goto loc_800D9C88;
    }
}

loc_800D9C24:
{
}

loc_800D9C28:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(12))) {
        goto loc_800D9D04;
    }
}

loc_800D9C2C:
{
    goto loc_800D9D0C;
}

loc_800D9C30:
{
    r31 = MemoryInline::FlatRead32((r3 + 4));
    r29 = (r13 + -31208);
    r3 = r31;
    // inline leaf 0x8026A36C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 316));
    r3 = MemoryInline::FlatRead16((r3 + 84));
    // end of inlined leaf 0x8026A36C
    r0 = (r3 & 65535);
    goto loc_800D9C5C;
}

loc_800D9C48:
{
}

loc_800D9C4C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_800D9C58;
    }
}

loc_800D9C50:
{
    r30 = 1;
    goto loc_800D9C68;
}

loc_800D9C58:
{
    r29 = (r29 + 2);
}

loc_800D9C5C:
{
    r3 = MemoryInline::FlatRead16(r29);
}

loc_800D9C64:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(65535))) {
        goto loc_800D9C48;
    }
}

loc_800D9C68:
{
}

loc_800D9C6C:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_800D9C7C;
    }
}

loc_800D9C70:
{
    r0 = MemoryInline::FlatRead8((r31 + 8));
    MemoryInline::FlatWrite8((r28 + 37), static_cast<uint8_t>(r0));
    goto loc_800D9D0C;
}

loc_800D9C7C:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r28 + 37), static_cast<uint8_t>(r0));
    goto loc_800D9D0C;
}

loc_800D9C88:
{
    r5 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r5 + 456));
    r0 = (r0 & 1);
}

loc_800D9C98:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800D9CAC;
    }
}

loc_800D9C9C:
{
    r0 = MemoryInline::FlatRead16((r5 + 26));
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8((r4 + 37), static_cast<uint8_t>(r0));
    goto loc_800D9D0C;
}

loc_800D9CAC:
{
    r3 = 0x805A0000u;
    r6 = (r3 + -32340);
    goto loc_800D9CD0;
}

loc_800D9CB8:
{
    r0 = MemoryInline::FlatRead8((r5 + 3));
}

loc_800D9CC0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_800D9CCC;
    }
}

loc_800D9CC4:
{
    r30 = 1;
    goto loc_800D9CDC;
}

loc_800D9CCC:
{
    r6 = (r6 + 1);
}

loc_800D9CD0:
{
    r3 = MemoryInline::FlatRead8(r6);
}

loc_800D9CD8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800D9CB8;
    }
}

loc_800D9CDC:
{
}

loc_800D9CE0:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_800D9CF8;
    }
}

loc_800D9CE4:
{
    r3 = MemoryInline::FlatRead16((r5 + 26));
    r0 = (r3 + -32);
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8((r4 + 37), static_cast<uint8_t>(r0));
    goto loc_800D9D0C;
}

loc_800D9CF8:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r4 + 37), static_cast<uint8_t>(r0));
    goto loc_800D9D0C;
}

loc_800D9D04:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r4 + 37), static_cast<uint8_t>(r0));
}

loc_800D9D0C:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return r3;
}

}

extern "C" void func_800D9BD0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_800D9BD0_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000207B gpr_write=0x0000006B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800D9BD0 func_800D9BD0 preserves=true fpr_mask=0x00000000
