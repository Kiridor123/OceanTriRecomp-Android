#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80515A3C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r10_ca_0 = 0;
    uint32_t r10_ca_1 = 0;
    uint32_t r10_ca_2 = 0;
    uint32_t r10_ca_3 = 0;
    uint32_t r10_ca_4 = 0;
    uint32_t r10_ca_5 = 0;
    uint32_t r11_rot_0 = 0;
    uint32_t r11_rot_1 = 0;
    uint32_t r11_rot_2 = 0;
    uint32_t r11_rot_3 = 0;
    uint32_t r11_rot_4 = 0;
    uint32_t r11_rot_5 = 0;
    uint32_t r27_ca_0 = 0;
    uint32_t r27_ca_1 = 0;
    uint32_t r27_ca_2 = 0;
    uint32_t r27_ca_3 = 0;
    uint32_t r27_ca_4 = 0;
    uint32_t r30_ca_0 = 0;
    uint32_t r30_ca_1 = 0;
    uint32_t r30_ca_2 = 0;
    uint32_t r30_ca_3 = 0;
    uint32_t r30_ca_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
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
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80515A3C;

loc_80515A3C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457480 (8 guest instruction(s))
    // end of inlined leaf 0x80457480
}

loc_80515A54:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r5))) {
        goto loc_80515C10;
    }
}

loc_80515A58:
{
}

loc_80515A5C:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(1024))) {
        goto loc_80515A6C;
    }
}

loc_80515A60:
{
    r9 = r4;
    r8 = 0;
    goto loc_80515AC8;
}

loc_80515A6C:
{
    r0 = (r4 + -1024);
    r8 = MemoryInline::FlatRead32((r3 + 52));
    r9 = (static_cast<int32_t>(r0) >> 9);
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_80515AC0;
    }
}

loc_80515A7C:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
}

loc_80515A80:
{
    ctr = r0;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80515AB4;
    }
}

loc_80515A88:
{
    r8 = MemoryInline::FlatRead32(r8);
    r8 = MemoryInline::FlatRead32(r8);
    r8 = MemoryInline::FlatRead32(r8);
    r8 = MemoryInline::FlatRead32(r8);
    r8 = MemoryInline::FlatRead32(r8);
    r8 = MemoryInline::FlatRead32(r8);
    r8 = MemoryInline::FlatRead32(r8);
    r8 = MemoryInline::FlatRead32(r8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80515A88;
    }
}

loc_80515AAC:
{
    r9 = (r9 & 7);
}

loc_80515AB0:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_80515AC0;
    }
}

loc_80515AB4:
{
    ctr = r9;
}

loc_80515AB8:
{
    r8 = MemoryInline::FlatRead32(r8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80515AB8;
    }
}

loc_80515AC0:
{
    r0 = (r4 + -1024);
    r9 = (r0 & 511);
}

loc_80515AC8:
{
}

loc_80515ACC:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_80515AF8;
    }
}

loc_80515AD0:
{
}

loc_80515AD4:
{
    if ((static_cast<int32_t>(r9) >= static_cast<int32_t>(1024))) {
        goto loc_80515AEC;
    }
}

loc_80515AD8:
{
    r10 = (r3 + r9);
    r9 = (r9 + 1);
    r0 = MemoryInline::FlatRead8((r10 + 56));
    r25 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    goto loc_80515B14;
}

loc_80515AEC:
{
    r8 = MemoryInline::FlatRead32((r3 + 52));
    r9 = 0;
    goto loc_80515B08;
}

loc_80515AF8:
{
}

loc_80515AFC:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(512))) {
        goto loc_80515B08;
    }
}

loc_80515B00:
{
    r9 = 0;
    r8 = MemoryInline::FlatRead32(r8);
}

loc_80515B08:
{
    r10 = (r8 + r9);
    r9 = (r9 + 1);
    r25 = MemoryInline::FlatRead8((r10 + 4));
}

loc_80515B14:
{
    r7 = (static_cast<int32_t>(static_cast<int8_t>(r7)));
    r0 = (r5 + -1);
    r28 = 65;
    r29 = 0;
    r31 = 90;
    goto loc_80515BA8;
}

loc_80515B2C:
{
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80515B4C;
    }
}

loc_80515B34:
{
}

loc_80515B38:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(32))) {
        goto loc_80515B4C;
    }
}

loc_80515B3C:
{
}

loc_80515B40:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(r7))) {
        goto loc_80515B4C;
    }
}

loc_80515B44:
{
}

loc_80515B48:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(r0))) {
        goto loc_80515B54;
    }
}

loc_80515B4C:
{
    r3 = 0;
    goto loc_80515C14;
}

loc_80515B54:
{
}

loc_80515B58:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_80515B84;
    }
}

loc_80515B5C:
{
}

loc_80515B60:
{
    if ((static_cast<int32_t>(r9) >= static_cast<int32_t>(1024))) {
        goto loc_80515B78;
    }
}

loc_80515B64:
{
    r5 = (r3 + r9);
    r9 = (r9 + 1);
    r5 = MemoryInline::FlatRead8((r5 + 56));
    r25 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
    goto loc_80515BA0;
}

loc_80515B78:
{
    r8 = MemoryInline::FlatRead32((r3 + 52));
    r9 = 0;
    goto loc_80515B94;
}

loc_80515B84:
{
}

loc_80515B88:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(512))) {
        goto loc_80515B94;
    }
}

loc_80515B8C:
{
    r9 = 0;
    r8 = MemoryInline::FlatRead32(r8);
}

loc_80515B94:
{
    r5 = (r8 + r9);
    r9 = (r9 + 1);
    r25 = MemoryInline::FlatRead8((r5 + 4));
}

loc_80515BA0:
{
    r4 = (r4 + 1);
    r6 = (r6 + 1);
}

loc_80515BA8:
{
    r5 = MemoryInline::FlatRead8(r6);
    r30 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
    r12 = (static_cast<int32_t>(r30) >> 31);
    r10 = (r30 - r28);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r30) >= static_cast<uint32_t>(r28) ? 1u : 0u) << 29);
    r11_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(1));
    r11 = (r11_rot_2 & 1);
    r27_ca_2 = (xer >> 29) & 1u;
    r27 = (r12 + r29);
    r27 = (r27 + r27_ca_2);
    r26 = (r30 + 32);
    r12 = (static_cast<int32_t>(r31) >> 31);
    r10 = (r31 - r30);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r31) >= static_cast<uint32_t>(r30) ? 1u : 0u) << 29);
    r10_ca_2 = (xer >> 29) & 1u;
    r10 = (r12 + r11);
    r10 = (r10 + r10_ca_2);
    r10 = (r27 & r10);
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_80515BDC;
    }
}

loc_80515BD8:
{
    r26 = r30;
}

loc_80515BDC:
{
    r27 = (static_cast<int32_t>(static_cast<int8_t>(r25)));
    r12 = (static_cast<int32_t>(r27) >> 31);
    r10 = (r27 - r28);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r27) >= static_cast<uint32_t>(r28) ? 1u : 0u) << 29);
    r11_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(1));
    r11 = (r11_rot_3 & 1);
    r30_ca_2 = (xer >> 29) & 1u;
    r30 = (r12 + r29);
    r30 = (r30 + r30_ca_2);
    r12 = (static_cast<int32_t>(r31) >> 31);
    r10 = (r31 - r27);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r31) >= static_cast<uint32_t>(r27) ? 1u : 0u) << 29);
    r10_ca_3 = (xer >> 29) & 1u;
    r10 = (r12 + r11);
    r10 = (r10 + r10_ca_3);
    r10 = (r30 & r10);
    if ((static_cast<int32_t>(r10) == static_cast<int32_t>(0))) {
        goto loc_80515C08;
    }
}

loc_80515C04:
{
    r27 = (r27 + 32);
}

loc_80515C08:
{
}

loc_80515C0C:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(r26))) {
        goto loc_80515B2C;
    }
}

loc_80515C10:
{
    r3 = -1;
}

loc_80515C14:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574CC (8 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -28), 0, 36u, true, false);
    // end of inlined leaf 0x804574CC
    r0 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80515A3C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80515A3C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00001FFB gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80515A3C func_80515A3C preserves=true fpr_mask=0x00000000
