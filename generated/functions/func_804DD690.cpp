#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_804DD690_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
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
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_10 = 0;
    uint32_t r7_rot_11 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint32_t r7_rot_5 = 0;
    uint32_t r7_rot_6 = 0;
    uint32_t r7_rot_7 = 0;
    uint32_t r7_rot_8 = 0;
    uint32_t r7_rot_9 = 0;

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

    goto loc_804DD690;

loc_804DD690:
{
    r6 = 1941307392;
    r0 = 128;
    r11 = (r6 + -9222);
    r9 = 0;
    r12 = 0;
    r6 = 0;
    r10 = 0;
    ctr = r0;
}

loc_804DD6B0:
{
    r8 = (r10 + -2147483648);
    r8 = MemoryInline::FlatRead8((r8 + 14336));
}

loc_804DD6BC:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_804DD704;
    }
}

loc_804DD6C0:
{
    r3_addr_2 = (r3 + r12);
    r7 = MemoryInline::FlatRead8(r3_addr_2);
    r0 = (r8 ^ r11);
    r8 = (r0 & 255);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r7)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804DD6E4;
    }
}

loc_804DD6D4:
{
}

loc_804DD6D8:
{
    if ((static_cast<uint32_t>(r8) != static_cast<uint32_t>(61))) {
        goto loc_804DD6E4;
    }
}

loc_804DD6DC:
{
    r9 = 1;
    goto loc_804DD77C;
}

loc_804DD6E4:
{
    r7 = (static_cast<int32_t>(static_cast<int8_t>(r7)));
    r0 = (r12 + 1);
    r7 = (r8 ^ r7);
    r7 = (r7 & 223);
}

loc_804DD6F4:
{
    r7 = PPC_CntlzwInline(static_cast<uint32_t>(r7));
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(27));
    r7 = (r7_rot_2 & 1);
    r7 = (0 - r7);
    r12 = (r0 & r7);
}

loc_804DD704:
{
    r10 = (r10 + 1);
    r7_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(1));
    r7 = (r7_rot_4 & 1);
    r8 = (r10 + -2147483648);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    r8 = MemoryInline::FlatRead8((r8 + 14336));
    r11 = (r7 | r0);
}

loc_804DD720:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_804DD768;
    }
}

loc_804DD724:
{
    r3_addr_4 = (r3 + r12);
    r7 = MemoryInline::FlatRead8(r3_addr_4);
    r0 = (r8 ^ r11);
    r8 = (r0 & 255);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r7)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804DD748;
    }
}

loc_804DD738:
{
}

loc_804DD73C:
{
    if ((static_cast<uint32_t>(r8) != static_cast<uint32_t>(61))) {
        goto loc_804DD748;
    }
}

loc_804DD740:
{
    r9 = 1;
    goto loc_804DD77C;
}

loc_804DD748:
{
    r7 = (static_cast<int32_t>(static_cast<int8_t>(r7)));
    r0 = (r12 + 1);
    r7 = (r8 ^ r7);
    r7 = (r7 & 223);
}

loc_804DD758:
{
    r7 = PPC_CntlzwInline(static_cast<uint32_t>(r7));
    r7_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(27));
    r7 = (r7_rot_5 & 1);
    r7 = (0 - r7);
    r12 = (r0 & r7);
}

loc_804DD768:
{
    r7_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(1));
    r7 = (r7_rot_7 & 1);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & -2);
    r11 = (r7 | r0);
    r10 = (r10 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804DD6B0;
    }
}

loc_804DD77C:
{
}

loc_804DD780:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_804DD7F8;
    }
}

loc_804DD784:
{
    r10 = (r10 + 1);
    goto loc_804DD7E8;
}

loc_804DD790:
{
    r3 = (r10 + -2147483648);
    r7_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(1));
    r7 = (r7_rot_10 & 1);
    r3 = MemoryInline::FlatRead8((r3 + 14336));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(1));
    r0 = (r0_rot_6 & -2);
    r11 = (r7 | r0);
}

loc_804DD7A8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804DD7C8;
    }
}

loc_804DD7AC:
{
    r0 = (r3 ^ r11);
    r3 = (r0 & 255);
}

loc_804DD7B8:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(13))) {
        goto loc_804DD7C4;
    }
}

loc_804DD7BC:
{
}

loc_804DD7C0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(10))) {
        goto loc_804DD7C8;
    }
}

loc_804DD7C4:
{
    r3 = 0;
}

loc_804DD7C8:
{
}

loc_804DD7CC:
{
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r3));
    r6 = (r6 + 1);
    r4 = (r4 + 1);
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804DD7E4;
    }
}

loc_804DD7DC:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804DD7E4:
{
    r10 = (r10 + 1);
}

loc_804DD7E8:
{
}

loc_804DD7EC:
{
    if ((static_cast<uint32_t>(r10) >= static_cast<uint32_t>(256))) {
        goto loc_804DD7F8;
    }
}

loc_804DD7F0:
{
}

loc_804DD7F4:
{
    if ((static_cast<uint32_t>(r6) < static_cast<uint32_t>(r5))) {
        goto loc_804DD790;
    }
}

loc_804DD7F8:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
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

extern "C" void func_804DD690(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804DD690_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00001FF9 gpr_write=0x00001FD9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804DD690 func_804DD690 preserves=true fpr_mask=0x00000000
