#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80521F70_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t ctr = ctx->ctr;

    goto loc_80521F70;

loc_80521F70:
{
    r0 = MemoryInline::FlatRead16(r3);
    r5 = (r0 & 255);
    r3 = (static_cast<int32_t>(r0) >> 8);
}

loc_80521F80:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(128))) {
        goto loc_80521FA4;
    }
}

loc_80521F84:
{
    r0 = (r3 & 255);
}

loc_80521F88:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80521FA4;
    }
}

loc_80521F8C:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r5));
    r3 = 1;
    MemoryInline::FlatWrite8((r4 + 1), static_cast<uint8_t>(r0));
    r4 = 2;
    // inline leaf 0x80521AC0 (3 guest instruction(s))
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0 = (r0_rot_0 & -65536);
    r3 = (r0 + r4);
    // end of inlined leaf 0x80521AC0
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80521FA4:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r0 = (r0_rot_1 & 65280);
    r0 = (r0 + r5);
    r9 = (r0 & 65535);
}

loc_80521FB4:
{
    if ((static_cast<uint32_t>(r9) < static_cast<uint32_t>(65377))) {
        goto loc_80521FE0;
    }
}

loc_80521FB8:
{
}

loc_80521FBC:
{
    if ((static_cast<uint32_t>(r9) > static_cast<uint32_t>(65439))) {
        goto loc_80521FE0;
    }
}

loc_80521FC0:
{
    r3 = (r9 + -65536);
    r0 = 0;
    r3 = (r3 + 320);
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r3));
    r3 = 1;
    MemoryInline::FlatWrite8((r4 + 1), static_cast<uint8_t>(r0));
    r4 = 2;
    // inline leaf 0x80521AC0 (3 guest instruction(s))
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0 = (r0_rot_2 & -65536);
    r3 = (r0 + r4);
    // end of inlined leaf 0x80521AC0
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80521FE0:
{
}

loc_80521FE4:
{
    if ((static_cast<uint32_t>(r9) != static_cast<uint32_t>(95))) {
        goto loc_80521FFC;
    }
}

loc_80521FE8:
{
    r0 = 95;
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    r3 = 1;
    r4 = 2;
    // inline leaf 0x80521AC0 (3 guest instruction(s))
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0 = (r0_rot_3 & -65536);
    r3 = (r0 + r4);
    // end of inlined leaf 0x80521AC0
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80521FFC:
{
    r5 = 0x80570000u;
    r6 = 0;
    r5 = (r5 + 21976);
    r0 = 21;
    // nop
}

loc_80522010:
{
    r8 = r5;
    r7 = 0;
    ctr = r0;
    // nop
}

loc_80522020:
{
    r3 = MemoryInline::FlatRead16(r8);
}

loc_80522028:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r9))) {
        goto loc_805220B8;
    }
}

loc_8052202C:
{
    r3 = MemoryInline::FlatRead16((r8 + 2));
    r7 = (r7 + 1);
}

loc_80522038:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r9))) {
        goto loc_805220B8;
    }
}

loc_8052203C:
{
    r3 = MemoryInline::FlatRead16((r8 + 4));
    r7 = (r7 + 1);
}

loc_80522048:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r9))) {
        goto loc_805220B8;
    }
}

loc_8052204C:
{
    r3 = MemoryInline::FlatRead16((r8 + 6));
    r7 = (r7 + 1);
}

loc_80522058:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r9))) {
        goto loc_805220B8;
    }
}

loc_8052205C:
{
    r3 = MemoryInline::FlatRead16((r8 + 8));
    r7 = (r7 + 1);
}

loc_80522068:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r9))) {
        goto loc_805220B8;
    }
}

loc_8052206C:
{
    r3 = MemoryInline::FlatRead16((r8 + 10));
    r7 = (r7 + 1);
}

loc_80522078:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r9))) {
        goto loc_805220B8;
    }
}

loc_8052207C:
{
    r3 = MemoryInline::FlatRead16((r8 + 12));
    r7 = (r7 + 1);
}

loc_80522088:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r9))) {
        goto loc_805220B8;
    }
}

loc_8052208C:
{
    r3 = MemoryInline::FlatRead16((r8 + 14));
    r7 = (r7 + 1);
}

loc_80522098:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r9))) {
        goto loc_805220B8;
    }
}

loc_8052209C:
{
    r3 = MemoryInline::FlatRead16((r8 + 16));
    r7 = (r7 + 1);
}

loc_805220A8:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r9))) {
        goto loc_805220B8;
    }
}

loc_805220AC:
{
    r7 = (r7 + 1);
    r8 = (r8 + 18);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80522020;
    }
}

loc_805220B8:
{
}

loc_805220BC:
{
    if ((static_cast<int32_t>(r7) < static_cast<int32_t>(189))) {
        goto loc_805220D0;
    }
}

loc_805220C0:
{
    r6 = (r6 + 1);
    r5 = (r5 + 378);
}

loc_805220CC:
{
    if ((static_cast<int32_t>(r6) < static_cast<int32_t>(45))) {
        goto loc_80522010;
    }
}

loc_805220D0:
{
}

loc_805220D4:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(189))) {
        goto loc_805220EC;
    }
}

loc_805220D8:
{
    r0 = 95;
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    r3 = 1;
    r4 = 2;
    // inline leaf 0x80521AC0 (3 guest instruction(s))
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0 = (r0_rot_4 & -65536);
    r3 = (r0 + r4);
    // end of inlined leaf 0x80521AC0
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_805220EC:
{
}

loc_805220F0:
{
    if ((static_cast<uint32_t>(r6) > static_cast<uint32_t>(3))) {
        goto loc_8052210C;
    }
}

loc_805220F4:
{
    r3 = (r6 + 129);
    r0 = (r7 + 64);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r3 = (r3_rot_0 & -256);
    r0 = (r3 | r0);
    r5 = (r0 & 65535);
    goto loc_805221B0;
}

loc_8052210C:
{
    r0 = (r6 + -4);
}

loc_80522114:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(24))) {
        goto loc_80522130;
    }
}

loc_80522118:
{
    r3 = (r6 + 131);
    r0 = (r7 + 64);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r3 = (r3_rot_1 & -256);
    r0 = (r3 | r0);
    r5 = (r0 & 65535);
    goto loc_805221B0;
}

loc_80522130:
{
    r0 = (r6 + -29);
}

loc_80522138:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(10))) {
        goto loc_80522154;
    }
}

loc_8052213C:
{
    r3 = (r6 + 195);
    r0 = (r7 + 64);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r3 = (r3_rot_2 & -256);
    r0 = (r3 | r0);
    r5 = (r0 & 65535);
    goto loc_805221B0;
}

loc_80522154:
{
    r0 = (r6 + -40);
}

loc_8052215C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_80522178;
    }
}

loc_80522160:
{
    r3 = (r6 + 197);
    r0 = (r7 + 64);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r3 = (r3_rot_3 & -256);
    r0 = (r3 | r0);
    r5 = (r0 & 65535);
    goto loc_805221B0;
}

loc_80522178:
{
    r0 = (r6 + -42);
}

loc_80522180:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(2))) {
        goto loc_8052219C;
    }
}

loc_80522184:
{
    r3 = (r6 + 208);
    r0 = (r7 + 64);
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r3 = (r3_rot_4 & -256);
    r0 = (r3 | r0);
    r5 = (r0 & 65535);
    goto loc_805221B0;
}

loc_8052219C:
{
    r0 = 95;
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    r3 = 1;
    r4 = 2;
    // inline leaf 0x80521AC0 (3 guest instruction(s))
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0 = (r0_rot_5 & -65536);
    r3 = (r0 + r4);
    // end of inlined leaf 0x80521AC0
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_805221B0:
{
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(24));
    r0 = (r0_rot_6 & 255);
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    r3 = 2;
    MemoryInline::FlatWrite8((r4 + 1), static_cast<uint8_t>(r5));
    r4 = 2;
    // inline leaf 0x80521AC0 (3 guest instruction(s))
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0 = (r0_rot_7 & -65536);
    r3 = (r0 + r4);
    // end of inlined leaf 0x80521AC0
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80521F70(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80521F70_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000003F9 gpr_write=0x000003F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80521F70 func_80521F70 preserves=true fpr_mask=0x00000000
