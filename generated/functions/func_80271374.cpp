#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80271374(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x80271374u);
    goto loc_80271374;

loc_80271374:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r30 = r4;
    r31 = 0;
    // inline leaf 0x800CF26C (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 36));
    // end of inlined leaf 0x800CF26C
    r0 = (r3 & 255);
}

loc_802713A4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_802713D8;
    }
}

loc_802713A8:
{
    r3 = 0x806B0000u;
    r0 = MemoryInline::FlatRead8((r3 + -12348));
}

loc_802713B4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(6))) {
        goto loc_802713C0;
    }
}

loc_802713B8:
{
    r31 = 1;
    goto loc_802713D8;
}

loc_802713C0:
{
}

loc_802713C4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(15))) {
        goto loc_802713D8;
    }
}

loc_802713C8:
{
    // inline leaf 0x80363A90 (12 guest instruction(s))
}

loc_inl1_0x80363A90:
{
    r3 = 0x806B0000u;
    r3 = (r3 + -12348);
    r3 = MemoryInline::FlatRead32((r3 + 172));
    r3 = MemoryInline::FlatRead8(r3);
}

loc_inl1_0x80363AA4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(7))) {
        goto loc_inl1_0x80363AB0;
    }
}

loc_inl1_0x80363AA8:
{
    r3 = 1;
    goto loc_inl1_cont_80363A90;
}

loc_inl1_0x80363AB0:
{
    r0 = (r3 + -8);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 134217727);
}

loc_inl1_cont_80363A90:
{
    // end of inlined leaf 0x80363A90
}

loc_802713D0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802713D8;
    }
}

loc_802713D4:
{
    r31 = 1;
}

loc_802713D8:
{
}

loc_802713DC:
{
    if ((static_cast<uint32_t>(r31) != static_cast<uint32_t>(1))) {
        goto loc_8027148C;
    }
}

loc_802713E0:
{
    r3 = (r30 & 65535);
    r0 = MemoryInline::FlatRead16((r29 + 1562));
}

loc_802713EC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_802713F8;
    }
}

loc_802713F0:
{
    r3 = 1;
    goto loc_80271538;
}

loc_802713F8:
{
    r0 = MemoryInline::FlatRead16((r29 + 1564));
}

loc_80271400:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_8027140C;
    }
}

loc_80271404:
{
    r3 = 1;
    goto loc_80271538;
}

loc_8027140C:
{
    r4 = (r29 + 4);
    r0 = MemoryInline::FlatRead16((r4 + 1562));
}

loc_80271418:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80271424;
    }
}

loc_8027141C:
{
    r3 = 1;
    goto loc_80271538;
}

loc_80271424:
{
    r0 = MemoryInline::FlatRead16((r4 + 1564));
}

loc_8027142C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80271438;
    }
}

loc_80271430:
{
    r3 = 1;
    goto loc_80271538;
}

loc_80271438:
{
    r0 = MemoryInline::FlatRead16((r4 + 1566));
}

loc_80271440:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_8027144C;
    }
}

loc_80271444:
{
    r3 = 1;
    goto loc_80271538;
}

loc_8027144C:
{
    r0 = MemoryInline::FlatRead16((r4 + 1568));
}

loc_80271454:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80271460;
    }
}

loc_80271458:
{
    r3 = 1;
    goto loc_80271538;
}

loc_80271460:
{
    r0 = MemoryInline::FlatRead16((r4 + 1570));
}

loc_80271468:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80271474;
    }
}

loc_8027146C:
{
    r3 = 1;
    goto loc_80271538;
}

loc_80271474:
{
    r0 = MemoryInline::FlatRead16((r4 + 1572));
}

loc_8027147C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80271534;
    }
}

loc_80271480:
{
    r3 = 1;
    goto loc_80271538;
}

loc_8027148C:
{
    r3 = (r30 & 65535);
    r0 = MemoryInline::FlatRead16((r29 + 1522));
}

loc_80271498:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_802714A4;
    }
}

loc_8027149C:
{
    r3 = 1;
    goto loc_80271538;
}

loc_802714A4:
{
    r0 = MemoryInline::FlatRead16((r29 + 1524));
}

loc_802714AC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_802714B8;
    }
}

loc_802714B0:
{
    r3 = 1;
    goto loc_80271538;
}

loc_802714B8:
{
    r4 = (r29 + 4);
    r0 = MemoryInline::FlatRead16((r4 + 1522));
}

loc_802714C4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_802714D0;
    }
}

loc_802714C8:
{
    r3 = 1;
    goto loc_80271538;
}

loc_802714D0:
{
    r0 = MemoryInline::FlatRead16((r4 + 1524));
}

loc_802714D8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_802714E4;
    }
}

loc_802714DC:
{
    r3 = 1;
    goto loc_80271538;
}

loc_802714E4:
{
    r0 = MemoryInline::FlatRead16((r4 + 1526));
}

loc_802714EC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_802714F8;
    }
}

loc_802714F0:
{
    r3 = 1;
    goto loc_80271538;
}

loc_802714F8:
{
    r0 = MemoryInline::FlatRead16((r4 + 1528));
}

loc_80271500:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_8027150C;
    }
}

loc_80271504:
{
    r3 = 1;
    goto loc_80271538;
}

loc_8027150C:
{
    r0 = MemoryInline::FlatRead16((r4 + 1530));
}

loc_80271514:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80271520;
    }
}

loc_80271518:
{
    r3 = 1;
    goto loc_80271538;
}

loc_80271520:
{
    r0 = MemoryInline::FlatRead16((r4 + 1532));
}

loc_80271528:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80271534;
    }
}

loc_8027152C:
{
    r3 = 1;
    goto loc_80271538;
}

loc_80271534:
{
    r3 = 0;
}

loc_80271538:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80271374 func_80271374 preserves=true fpr_mask=0x00000000
