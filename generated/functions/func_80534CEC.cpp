#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80534CEC_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x80534CECu);
    goto loc_80534CEC;

loc_80534CEC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = r3;
    r30 = 0;
    r29 = r4;
    r4 = 1380712448;
    MemoryInline::FlatWrite32(r3, r30);
    r4 = (r4 + 16718);
    MemoryInline::FlatWrite32((r3 + 4), r30);
    MemoryInline::FlatWrite32((r3 + 8), r30);
    MemoryInline::FlatWrite32((r3 + 12), r30);
    r3 = r29;
    // inline leaf 0x80535B10 (10 guest instruction(s))
}

loc_inl0_0x80535B10:
{
    r0 = MemoryInline::FlatRead32(r3);
    r5 = 0;
}

loc_inl0_0x80535B1C:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_inl0_0x80535B30;
    }
}

loc_inl0_0x80535B20:
{
    r0 = MemoryInline::FlatRead16((r3 + 4));
}

loc_inl0_0x80535B28:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65279))) {
        goto loc_inl0_0x80535B30;
    }
}

loc_inl0_0x80535B2C:
{
    r5 = 1;
}

loc_inl0_0x80535B30:
{
    r3 = r5;
}

loc_inl0_cont_80535B10:
{
    // end of inlined leaf 0x80535B10
}

loc_80534D34:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80534DE0;
    }
}

loc_80534D38:
{
    r3 = MemoryInline::FlatRead16((r29 + 6));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(24));
    r0 = (r0_rot_1 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80534D40:
{
    r0 = (r3 & 255);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80534D5C;
    }
}

loc_80534D48:
{
}

loc_80534D4C:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(8))) {
        goto loc_80534D5C;
    }
}

loc_80534D50:
{
}

loc_80534D54:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(10))) {
        goto loc_80534D5C;
    }
}

loc_80534D58:
{
    r30 = 1;
}

loc_80534D5C:
{
}

loc_80534D60:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_80534DE0;
    }
}

loc_80534D64:
{
    r0 = MemoryInline::FlatRead16((r29 + 12));
    r3 = 1885405184;
    MemoryInline::FlatWrite32(r31, r29);
    r6 = (r3 + 26929);
    r7 = (r29 + r0);
    r4 = (r3 + 29745);
    r5 = (r3 + 26673);
    r8 = 0;
    goto loc_80534DD0;
}

loc_80534D88:
{
    r0 = MemoryInline::FlatRead32(r7);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r6));
}

loc_80534D90:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80534DC0;
    }
}

loc_80534D94:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80534DA4;
    }
}

loc_80534D98:
{
}

loc_80534D9C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(r5))) {
        goto loc_80534DB8;
    }
}

loc_80534DA0:
{
    goto loc_80534DC4;
}

loc_80534DA4:
{
}

loc_80534DA8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(r4))) {
        goto loc_80534DB0;
    }
}

loc_80534DAC:
{
    goto loc_80534DC4;
}

loc_80534DB0:
{
    MemoryInline::FlatWrite32((r31 + 8), r7);
    goto loc_80534DC4;
}

loc_80534DB8:
{
    MemoryInline::FlatWrite32((r31 + 12), r7);
    goto loc_80534DC4;
}

loc_80534DC0:
{
    MemoryInline::FlatWrite32((r31 + 4), r7);
}

loc_80534DC4:
{
    r0 = MemoryInline::FlatRead32((r7 + 4));
    r8 = (r8 + 1);
    r7 = (r7 + r0);
}

loc_80534DD0:
{
    r3 = MemoryInline::FlatRead32(r31);
    r0 = MemoryInline::FlatRead16((r3 + 14));
}

loc_80534DDC:
{
    if ((static_cast<int32_t>(r8) < static_cast<int32_t>(r0))) {
        goto loc_80534D88;
    }
}

loc_80534DE0:
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
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80534CEC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80534CEC_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000001FB gpr_write=0x000001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80534CEC func_80534CEC preserves=true fpr_mask=0x00000000
