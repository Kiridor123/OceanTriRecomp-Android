#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804B61B0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mdest_3 = 0;
    uint32_t r0_mdest_4 = 0;
    uint32_t r0_mdest_5 = 0;
    uint32_t r0_mdest_6 = 0;
    uint32_t r0_mdest_7 = 0;
    uint32_t r0_mdest_8 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_mrot_3 = 0;
    uint32_t r0_mrot_4 = 0;
    uint32_t r0_mrot_5 = 0;
    uint32_t r0_mrot_6 = 0;
    uint32_t r0_mrot_7 = 0;
    uint32_t r0_mrot_8 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r10_mdest_0 = 0;
    uint32_t r10_mdest_1 = 0;
    uint32_t r10_mdest_10 = 0;
    uint32_t r10_mdest_11 = 0;
    uint32_t r10_mdest_12 = 0;
    uint32_t r10_mdest_13 = 0;
    uint32_t r10_mdest_14 = 0;
    uint32_t r10_mdest_15 = 0;
    uint32_t r10_mdest_2 = 0;
    uint32_t r10_mdest_3 = 0;
    uint32_t r10_mdest_4 = 0;
    uint32_t r10_mdest_5 = 0;
    uint32_t r10_mdest_6 = 0;
    uint32_t r10_mdest_7 = 0;
    uint32_t r10_mdest_8 = 0;
    uint32_t r10_mdest_9 = 0;
    uint32_t r10_mrot_0 = 0;
    uint32_t r10_mrot_1 = 0;
    uint32_t r10_mrot_10 = 0;
    uint32_t r10_mrot_11 = 0;
    uint32_t r10_mrot_12 = 0;
    uint32_t r10_mrot_13 = 0;
    uint32_t r10_mrot_14 = 0;
    uint32_t r10_mrot_15 = 0;
    uint32_t r10_mrot_2 = 0;
    uint32_t r10_mrot_3 = 0;
    uint32_t r10_mrot_4 = 0;
    uint32_t r10_mrot_5 = 0;
    uint32_t r10_mrot_6 = 0;
    uint32_t r10_mrot_7 = 0;
    uint32_t r10_mrot_8 = 0;
    uint32_t r10_mrot_9 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r10_rot_1 = 0;
    uint32_t r10_rot_10 = 0;
    uint32_t r10_rot_11 = 0;
    uint32_t r10_rot_12 = 0;
    uint32_t r10_rot_13 = 0;
    uint32_t r10_rot_14 = 0;
    uint32_t r10_rot_15 = 0;
    uint32_t r10_rot_2 = 0;
    uint32_t r10_rot_3 = 0;
    uint32_t r10_rot_4 = 0;
    uint32_t r10_rot_5 = 0;
    uint32_t r10_rot_6 = 0;
    uint32_t r10_rot_7 = 0;
    uint32_t r10_rot_8 = 0;
    uint32_t r10_rot_9 = 0;
    uint32_t r4_mdest_0 = 0;
    uint32_t r4_mdest_1 = 0;
    uint32_t r4_mrot_0 = 0;
    uint32_t r4_mrot_1 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r9_addr_0 = 0;
    uint32_t r9_addr_1 = 0;
    uint32_t r9_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x804B61B0u);
    goto loc_804B61B0;

loc_804B61B0:
{
}

loc_804B61B4:
{
    r10 = 0;
    r12 = 0;
    r11 = 5;
    if ((static_cast<uint32_t>(r5) > static_cast<uint32_t>(20))) {
        goto loc_804B6258;
    }
}

loc_804B61C4:
{
    r9 = 0x80620000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r9 = (r9 + -19924);
    r9_addr_1 = (r9 + r0);
    r9 = MemoryAlias::FlatRead32(r9_addr_1);
    ctr = r9;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x804B61DCu:
        goto loc_804B61DC;
        break;
    case 0x804B61E8u:
        goto loc_804B61E8;
        break;
    case 0x804B61F4u:
        goto loc_804B61F4;
        break;
    case 0x804B6200u:
        goto loc_804B6200;
        break;
    case 0x804B621Cu:
        goto loc_804B621C;
        break;
    case 0x804B6224u:
        goto loc_804B6224;
        break;
    case 0x804B622Cu:
        goto loc_804B622C;
        break;
    case 0x804B6234u:
        goto loc_804B6234;
        break;
    case 0x804B623Cu:
        goto loc_804B623C;
        break;
    case 0x804B6244u:
        goto loc_804B6244;
        break;
    case 0x804B624Cu:
        goto loc_804B624C;
        break;
    case 0x804B6254u:
        goto loc_804B6254;
        break;
    case 0x804B6258u:
        goto loc_804B6258;
        break;
    case 0x804B620Cu:
        goto loc_804B620C;
        break;
    case 0x804B6214u:
        goto loc_804B6214;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_804B61DC:
{
    r11 = 0;
    r12 = 1;
    goto loc_804B6258;
}

loc_804B61E8:
{
    r11 = 1;
    r12 = 1;
    goto loc_804B6258;
}

loc_804B61F4:
{
    r11 = 3;
    r12 = 1;
    goto loc_804B6258;
}

loc_804B6200:
{
    r11 = 4;
    r12 = 1;
    goto loc_804B6258;
}

loc_804B620C:
{
    r11 = 2;
    goto loc_804B6258;
}

loc_804B6214:
{
    r11 = 2;
    goto loc_804B6258;
}

loc_804B621C:
{
    r11 = 5;
    goto loc_804B6258;
}

loc_804B6224:
{
    r11 = 6;
    goto loc_804B6258;
}

loc_804B622C:
{
    r11 = 7;
    goto loc_804B6258;
}

loc_804B6234:
{
    r11 = 8;
    goto loc_804B6258;
}

loc_804B623C:
{
    r11 = 9;
    goto loc_804B6258;
}

loc_804B6244:
{
    r11 = 10;
    goto loc_804B6258;
}

loc_804B624C:
{
    r11 = 11;
    goto loc_804B6258;
}

loc_804B6254:
{
    r11 = 12;
}

loc_804B6258:
{
    r9 = (r4 + -2);
}

loc_804B6260:
{
    if ((static_cast<uint32_t>(r9) <= static_cast<uint32_t>(7))) {
        goto loc_804B62A4;
    }
}

loc_804B6264:
{
}

loc_804B6268:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(1))) {
        goto loc_804B6280;
    }
}

loc_804B626C:
{
}

loc_804B6270:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_804B6290;
    }
}

loc_804B6274:
{
}

loc_804B6278:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(10))) {
        goto loc_804B62C8;
    }
}

loc_804B627C:
{
    goto loc_804B62F4;
}

loc_804B6280:
{
    r10 = 0;
    r10_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(2));
    r10_mrot_8 = (r10_rot_8 & 4);
    r10_mdest_8 = (r10 & -5);
    r10 = (r10_mdest_8 | r10_mrot_8);
    r10_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(7));
    r10_mrot_9 = (r10_rot_9 & 3968);
    r10_mdest_9 = (r10 & -3969);
    r10 = (r10_mdest_9 | r10_mrot_9);
    goto loc_804B62F4;
}

loc_804B6290:
{
    r0 = 0;
    r10 = (r0 | 2);
    r10_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(2));
    r10_mrot_6 = (r10_rot_6 & 4);
    r10_mdest_6 = (r10 & -5);
    r10 = (r10_mdest_6 | r10_mrot_6);
    r10_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(7));
    r10_mrot_7 = (r10_rot_7 & 3968);
    r10_mdest_7 = (r10 & -3969);
    r10 = (r10_mdest_7 | r10_mrot_7);
    goto loc_804B62F4;
}

loc_804B62A4:
{
    r4 = 1;
    r0 = (r5 + -12);
    r10 = 0;
    r10_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(2));
    r10_mrot_10 = (r10_rot_10 & 4);
    r10_mdest_10 = (r10 & -5);
    r10 = (r10_mdest_10 | r10_mrot_10);
    r10_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r10_mrot_11 = (r10_rot_11 & 112);
    r10_mdest_11 = (r10 & -113);
    r10 = (r10_mdest_11 | r10_mrot_11);
    r10_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(7));
    r10_mrot_12 = (r10_rot_12 & 3968);
    r10_mdest_12 = (r10 & -3969);
    r10 = (r10_mdest_12 | r10_mrot_12);
    r10_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(12));
    r10_mrot_13 = (r10_rot_13 & 28672);
    r10_mdest_13 = (r10 & -28673);
    r10 = (r10_mdest_13 | r10_mrot_13);
    r10_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(15));
    r10_mrot_14 = (r10_rot_14 & 229376);
    r10_mdest_14 = (r10 & -229377);
    r10 = (r10_mdest_14 | r10_mrot_14);
    goto loc_804B62F4;
}

loc_804B62C8:
{
}

loc_804B62CC:
{
    r10 = 0;
    r10_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(2));
    r10_mrot_1 = (r10_rot_1 & 4);
    r10_mdest_1 = (r10 & -5);
    r10 = (r10_mdest_1 | r10_mrot_1);
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(19))) {
        goto loc_804B62E4;
    }
}

loc_804B62D8:
{
    r0 = 2;
    r10_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r10_mrot_2 = (r10_rot_2 & 112);
    r10_mdest_2 = (r10 & -113);
    r10 = (r10_mdest_2 | r10_mrot_2);
    goto loc_804B62EC;
}

loc_804B62E4:
{
    r0 = 3;
    r10_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r10_mrot_3 = (r10_rot_3 & 112);
    r10_mdest_3 = (r10 & -113);
    r10 = (r10_mdest_3 | r10_mrot_3);
}

loc_804B62EC:
{
    r0 = 2;
    r10_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(7));
    r10_mrot_5 = (r10_rot_5 & 3968);
    r10_mdest_5 = (r10 & -3969);
    r10 = (r10_mdest_5 | r10_mrot_5);
}

loc_804B62F4:
{
    r9 = MemoryAlias::FlatRead32((r2 + -2480));
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r4 = (r4_rot_0 & -4);
    r0 = (r8 + -64);
    r5 = 65536;
    r8 = (r9 + r4);
    r4 = 0;
    MemoryAlias::FlatWrite32((r8 + 200), r10);
    r4_mrot_0 = (r0 & 63);
    r4_mdest_0 = (r4 & -64);
    r4 = (r4_mdest_0 | r4_mrot_0);
    r0 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r3));
}

loc_804B631C:
{
    r5 = MemoryAlias::FlatRead32((r9 + 1532));
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(8));
    r4_mrot_1 = (r4_rot_1 & 256);
    r4_mdest_1 = (r4 & -257);
    r4 = (r4_mdest_1 | r4_mrot_1);
    r0 = (r5 | r0);
    MemoryAlias::FlatWrite32((r9 + 1532), r0);
    MemoryAlias::FlatWrite32((r8 + 232), r4);
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804B6368;
    }
}

loc_804B6334:
{
}

loc_804B6338:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_804B6378;
    }
}

loc_804B633C:
{
}

loc_804B6340:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(2))) {
        goto loc_804B6388;
    }
}

loc_804B6344:
{
}

loc_804B6348:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(3))) {
        goto loc_804B6398;
    }
}

loc_804B634C:
{
}

loc_804B6350:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(4))) {
        goto loc_804B63A8;
    }
}

loc_804B6354:
{
}

loc_804B6358:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(5))) {
        goto loc_804B63B8;
    }
}

loc_804B635C:
{
}

loc_804B6360:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(6))) {
        goto loc_804B63C8;
    }
}

loc_804B6364:
{
    goto loc_804B63D8;
}

loc_804B6368:
{
    r0 = MemoryAlias::FlatRead32((r9 + 128));
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(6));
    r0_mrot_7 = (r0_rot_9 & 4032);
    r0_mdest_7 = (r0 & -4033);
    r0 = (r0_mdest_7 | r0_mrot_7);
    MemoryAlias::FlatWrite32((r9 + 128), r0);
    goto loc_804B63E4;
}

loc_804B6378:
{
    r0 = MemoryAlias::FlatRead32((r9 + 128));
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(12));
    r0_mrot_6 = (r0_rot_8 & 258048);
    r0_mdest_6 = (r0 & -258049);
    r0 = (r0_mdest_6 | r0_mrot_6);
    MemoryAlias::FlatWrite32((r9 + 128), r0);
    goto loc_804B63E4;
}

loc_804B6388:
{
    r0 = MemoryAlias::FlatRead32((r9 + 128));
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(18));
    r0_mrot_5 = (r0_rot_7 & 16515072);
    r0_mdest_5 = (r0 & -16515073);
    r0 = (r0_mdest_5 | r0_mrot_5);
    MemoryAlias::FlatWrite32((r9 + 128), r0);
    goto loc_804B63E4;
}

loc_804B6398:
{
    r0 = MemoryAlias::FlatRead32((r9 + 128));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(24));
    r0_mrot_4 = (r0_rot_6 & 1056964608);
    r0_mdest_4 = (r0 & -1056964609);
    r0 = (r0_mdest_4 | r0_mrot_4);
    MemoryAlias::FlatWrite32((r9 + 128), r0);
    goto loc_804B63E4;
}

loc_804B63A8:
{
    r0 = MemoryAlias::FlatRead32((r9 + 132));
    r0_mrot_3 = (r6 & 63);
    r0_mdest_3 = (r0 & -64);
    r0 = (r0_mdest_3 | r0_mrot_3);
    MemoryAlias::FlatWrite32((r9 + 132), r0);
    goto loc_804B63E4;
}

loc_804B63B8:
{
    r0 = MemoryAlias::FlatRead32((r9 + 132));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(6));
    r0_mrot_2 = (r0_rot_5 & 4032);
    r0_mdest_2 = (r0 & -4033);
    r0 = (r0_mdest_2 | r0_mrot_2);
    MemoryAlias::FlatWrite32((r9 + 132), r0);
    goto loc_804B63E4;
}

loc_804B63C8:
{
    r0 = MemoryAlias::FlatRead32((r9 + 132));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(12));
    r0_mrot_1 = (r0_rot_4 & 258048);
    r0_mdest_1 = (r0 & -258049);
    r0 = (r0_mdest_1 | r0_mrot_1);
    MemoryAlias::FlatWrite32((r9 + 132), r0);
    goto loc_804B63E4;
}

loc_804B63D8:
{
    r0 = MemoryAlias::FlatRead32((r9 + 132));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(18));
    r0_mrot_0 = (r0_rot_3 & 16515072);
    r0_mdest_0 = (r0 & -16515073);
    r0 = (r0_mdest_0 | r0_mrot_0);
    MemoryAlias::FlatWrite32((r9 + 132), r0);
}

loc_804B63E4:
{
    r0 = MemoryAlias::FlatRead32((r9 + 1532));
    r0 = (r0 | 67108864);
    MemoryAlias::FlatWrite32((r9 + 1532), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00001FFD gpr_write=0x00001F31 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804B61B0 func_804B61B0 preserves=true fpr_mask=0x00000000
