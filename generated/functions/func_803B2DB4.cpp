#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_803B2DB4_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    goto loc_803B2DB4;

loc_803B2DB4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r30 = r4;
    r31 = 0;
    r3 = 0;
    // inline leaf 0x800CFAF4 (16 guest instruction(s))
}

loc_inl0_0x800CFAF4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl0_0x800CFB04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x800CFB10;
    }
}

loc_inl0_0x800CFB08:
{
    r3 = 0;
    goto loc_inl0_cont_800CFAF4;
}

loc_inl0_0x800CFB10:
{
    r0 = (r3 & 255);
}

loc_inl0_0x800CFB18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl0_0x800CFB24;
    }
}

loc_inl0_0x800CFB1C:
{
    r3 = 0;
    goto loc_inl0_cont_800CFAF4;
}

loc_inl0_0x800CFB24:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl0_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
}

loc_803B2DE4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_803B2DF0;
    }
}

loc_803B2DE8:
{
    r3 = 0;
    goto loc_803B2F10;
}

loc_803B2DF0:
{
}

loc_803B2DF4:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_803B2E04;
    }
}

loc_803B2DF8:
{
}

loc_803B2DFC:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(1))) {
        goto loc_803B2E6C;
    }
}

loc_803B2E00:
{
    goto loc_803B2EC0;
}

loc_803B2E04:
{
    r4 = MemoryInline::FlatRead32((r13 + -16864));
    r3 = (r29 & 65535);
    r0 = 4;
    ctr = r0;
}

loc_803B2E14:
{
    r0 = MemoryInline::FlatRead16((r4 + 27242));
}

loc_803B2E1C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_803B2E2C;
    }
}

loc_803B2E20:
{
    r0 = MemoryInline::FlatRead16((r4 + 27244));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r31 + r0);
    r31 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_803B2E2C:
{
    r0 = MemoryInline::FlatRead16((r4 + 27246));
}

loc_803B2E34:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_803B2E44;
    }
}

loc_803B2E38:
{
    r0 = MemoryInline::FlatRead16((r4 + 27248));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r31 + r0);
    r31 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_803B2E44:
{
    r5 = (r4 + 8);
    r0 = MemoryInline::FlatRead16((r5 + 27242));
}

loc_803B2E50:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_803B2E60;
    }
}

loc_803B2E54:
{
    r0 = MemoryInline::FlatRead16((r5 + 27244));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r31 + r0);
    r31 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_803B2E60:
{
    r4 = (r4 + 12);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803B2E14;
    }
}

loc_803B2E68:
{
    goto loc_803B2F0C;
}

loc_803B2E6C:
{
    // inline leaf 0x800CF3E8 (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 39));
    // end of inlined leaf 0x800CF3E8
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r7 = 0;
    r6 = MemoryInline::FlatRead32((r13 + -16864));
    r5 = (r0 * 12);
    r4 = (r6 + r5);
    r3 = (r29 & 65535);
    r0 = 3;
    ctr = r0;
}

loc_803B2E90:
{
    r0 = MemoryInline::FlatRead16((r4 + 27242));
}

loc_803B2E98:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_803B2EB0;
    }
}

loc_803B2E9C:
{
    r3 = (r6 + r5);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead16((r3 + 27244));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    goto loc_803B2F10;
}

loc_803B2EB0:
{
    r4 = (r4 + 4);
    r7 = (r7 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803B2E90;
    }
}

loc_803B2EBC:
{
    goto loc_803B2F0C;
}

loc_803B2EC0:
{
    r7 = 0;
    r6 = MemoryInline::FlatRead32((r13 + -16864));
    r0 = (r30 + -2);
    r5 = (r0 * 12);
    r4 = (r6 + r5);
    r3 = (r29 & 65535);
    r0 = 3;
    ctr = r0;
}

loc_803B2EE0:
{
    r0 = MemoryInline::FlatRead16((r4 + 27242));
}

loc_803B2EE8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_803B2F00;
    }
}

loc_803B2EEC:
{
    r3 = (r6 + r5);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead16((r3 + 27244));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    goto loc_803B2F10;
}

loc_803B2F00:
{
    r4 = (r4 + 4);
    r7 = (r7 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803B2EE0;
    }
}

loc_803B2F0C:
{
    r3 = r31;
}

loc_803B2F10:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803B2DB4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803B2DB4_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000020FB gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803B2DB4 func_803B2DB4 preserves=true fpr_mask=0x00000000
