#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_803E1A78_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t addr_lhax_803E1AE8_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];

    goto loc_803E1A78;

loc_803E1A78:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = r4;
    r28 = r5;
    r31 = r6;
    r29 = r7;
    // inline leaf 0x800E8A3C (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16732));
    // end of inlined leaf 0x800E8A3C
    // inline leaf 0x80417788 (2 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r3 + 28116));
    // end of inlined leaf 0x80417788
    f0.d = MemoryInline::FlatReadFloat32((r2 + -4888));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r8 = fctiwzword0;
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & -2);
}

loc_803E1AC8:
{
    if ((static_cast<int32_t>(r28) >= static_cast<int32_t>(r3))) {
        goto loc_803E1AD4;
    }
}

loc_803E1ACC:
{
    r3 = 0;
    goto loc_803E1B70;
}

loc_803E1AD4:
{
    r5 = MemoryInline::FlatRead16(r31);
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r10 = 0;
    r4 = 0;
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(31));
    r7 = (r7_rot_1 & 2147483647);
    goto loc_803E1B64;
}

loc_803E1AE8:
{
    addr_lhax_803E1AE8_loc_0 = (r31 + r4);
    r9 = MemoryInline::FlatRead16(addr_lhax_803E1AE8_loc_0);
    r9 = (r9 << 16);
    r9 = (static_cast<int32_t>(r9) >> 16);
    r6 = MemoryInline::FlatRead16(r30);
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r5 = (r5 + r9);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 1);
    r0 = (r0 + r5);
    r0 = (static_cast<int32_t>(r0) >> 1);
    r0 = (r8 * r0);
    r0 = (r6 + r0);
}

loc_803E1B0C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(32767))) {
        goto loc_803E1B14;
    }
}

loc_803E1B10:
{
    r0 = 32767;
}

loc_803E1B14:
{
}

loc_803E1B18:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(-32768))) {
        goto loc_803E1B20;
    }
}

loc_803E1B1C:
{
    r0 = -32768;
}

loc_803E1B20:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r0));
    r5 = MemoryInline::FlatRead16((r30 + 2));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r0 = (r9 * r8);
    r0 = (r5 + r0);
}

loc_803E1B38:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(32767))) {
        goto loc_803E1B40;
    }
}

loc_803E1B3C:
{
    r0 = 32767;
}

loc_803E1B40:
{
}

loc_803E1B44:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(-32768))) {
        goto loc_803E1B4C;
    }
}

loc_803E1B48:
{
    r0 = -32768;
}

loc_803E1B4C:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWrite16((r30 + 2), static_cast<uint16_t>(r0));
    r5 = r9;
    r4 = (r4 + 2);
    r30 = (r30 + 4);
    r10 = (r10 + 2);
}

loc_803E1B64:
{
    r0 = (r10 + 1);
}

loc_803E1B6C:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r7))) {
        goto loc_803E1AE8;
    }
}

loc_803E1B70:
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
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803E1A78(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803E1A78_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000027FF gpr_write=0x000007FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803E1A78 func_803E1A78 preserves=true fpr_mask=0x00000000
