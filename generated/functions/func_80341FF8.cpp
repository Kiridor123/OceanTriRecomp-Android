#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80341FF8_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
    uint32_t r4_addr_6 = 0;
    uint32_t r4_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x80341FF8u);
    goto loc_80341FF8;

loc_80341FF8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r28 = r3;
    r30 = MemoryInline::FlatRead32((r3 + 56));
    // inline leaf 0x802AFCD8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3013));
    // end of inlined leaf 0x802AFCD8
    r31 = r3;
    r0 = MemoryInline::FlatRead16((r30 + 92));
}

loc_8034202C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(389))) {
        goto loc_80342054;
    }
}

loc_80342030:
{
}

loc_80342034:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(351))) {
        goto loc_80342068;
    }
}

loc_80342038:
{
}

loc_8034203C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(353))) {
        goto loc_80342114;
    }
}

loc_80342040:
{
}

loc_80342044:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(390))) {
        goto loc_80342190;
    }
}

loc_80342048:
{
}

loc_8034204C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(355))) {
        goto loc_803421A4;
    }
}

loc_80342050:
{
    goto loc_803421B8;
}

loc_80342054:
{
    r3 = 0x805E0000u;
    r3 = (r3 + 32336);
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 96), static_cast<uint8_t>(r0));
    goto loc_803421C4;
}

loc_80342068:
{
    r3 = (r3 & 255);
    // inline leaf 0x802B06CC (8 guest instruction(s))
}

loc_inl1_0x802B06CC:
{
    r0 = (r3 & 255);
    r4 = 0x805D0000u;
    r4 = (r4 + -2816);
    r4_addr_2 = (r4 + r0);
    r0 = MemoryInline::FlatRead8(r4_addr_2);
}

loc_inl1_0x802B06E0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x802B06E4:
{
    r3 = r0;
    goto loc_inl1_cont_802B06CC;
}

loc_inl1_return:
{
}

loc_inl1_cont_802B06CC:
{
    // end of inlined leaf 0x802B06CC
    r0 = (r3 & 255);
}

loc_80342078:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80342088;
    }
}

loc_8034207C:
{
}

loc_80342080:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_803420DC;
    }
}

loc_80342084:
{
    goto loc_80342100;
}

loc_80342088:
{
    r0 = MemoryInline::FlatRead8((r28 + 2));
}

loc_80342090:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803420B8;
    }
}

loc_80342094:
{
    r0 = MemoryInline::FlatRead8((r28 + 68));
}

loc_8034209C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803420AC;
    }
}

loc_803420A0:
{
    r3 = 0x805E0000u;
    r3 = (r3 + 32368);
    goto loc_80342108;
}

loc_803420AC:
{
    r3 = 0x805E0000u;
    r3 = (r3 + 32348);
    goto loc_80342108;
}

loc_803420B8:
{
    r0 = MemoryInline::FlatRead8((r28 + 68));
}

loc_803420C0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(12))) {
        goto loc_803420D0;
    }
}

loc_803420C4:
{
    r3 = 0x805E0000u;
    r3 = (r3 + 32368);
    goto loc_80342108;
}

loc_803420D0:
{
    r3 = 0x805E0000u;
    r3 = (r3 + 32348);
    goto loc_80342108;
}

loc_803420DC:
{
    r0 = MemoryInline::FlatRead8((r28 + 68));
}

loc_803420E4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803420F4;
    }
}

loc_803420E8:
{
    r3 = 0x805E0000u;
    r3 = (r3 + 32368);
    goto loc_80342108;
}

loc_803420F4:
{
    r3 = 0x805E0000u;
    r3 = (r3 + 32348);
    goto loc_80342108;
}

loc_80342100:
{
    r3 = 0x805E0000u;
    r3 = (r3 + 32348);
}

loc_80342108:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 96), static_cast<uint8_t>(r0));
    goto loc_803421C4;
}

loc_80342114:
{
    r3 = (r3 & 255);
    // inline leaf 0x802B06CC (8 guest instruction(s))
}

loc_inl2_0x802B06CC:
{
    r0 = (r3 & 255);
    r4 = 0x805D0000u;
    r4 = (r4 + -2816);
    r4_addr_1 = (r4 + r0);
    r0 = MemoryInline::FlatRead8(r4_addr_1);
}

loc_inl2_0x802B06E0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x802B06E4:
{
    r3 = r0;
    goto loc_inl2_cont_802B06CC;
}

loc_inl2_return:
{
}

loc_inl2_cont_802B06CC:
{
    // end of inlined leaf 0x802B06CC
    r0 = (r3 & 255);
}

loc_80342124:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_80342134;
    }
}

loc_80342128:
{
}

loc_8034212C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_80342158;
    }
}

loc_80342130:
{
    goto loc_8034217C;
}

loc_80342134:
{
    r0 = MemoryInline::FlatRead8((r28 + 68));
}

loc_8034213C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8034214C;
    }
}

loc_80342140:
{
    r3 = 0x805E0000u;
    r3 = (r3 + 32400);
    goto loc_80342184;
}

loc_8034214C:
{
    r3 = 0x805E0000u;
    r3 = (r3 + 32380);
    goto loc_80342184;
}

loc_80342158:
{
    r0 = MemoryInline::FlatRead8((r28 + 68));
}

loc_80342160:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(6))) {
        goto loc_80342170;
    }
}

loc_80342164:
{
    r3 = 0x805E0000u;
    r3 = (r3 + 32412);
    goto loc_80342184;
}

loc_80342170:
{
    r3 = 0x805E0000u;
    r3 = (r3 + 32380);
    goto loc_80342184;
}

loc_8034217C:
{
    r3 = 0x805E0000u;
    r3 = (r3 + 32380);
}

loc_80342184:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 96), static_cast<uint8_t>(r0));
    goto loc_803421C4;
}

loc_80342190:
{
    r3 = 0x805E0000u;
    r3 = (r3 + 32424);
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 96), static_cast<uint8_t>(r0));
    goto loc_803421C4;
}

loc_803421A4:
{
    r3 = 0x805E0000u;
    r3 = (r3 + 32436);
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 96), static_cast<uint8_t>(r0));
    goto loc_803421C4;
}

loc_803421B8:
{
    r3 = MemoryInline::FlatRead32((r30 + 60));
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 96), static_cast<uint8_t>(r0));
}

loc_803421C4:
{
    r29 = 0;
    goto loc_803421D8;
}

loc_803421CC:
{
    r0 = MemoryInline::FlatRead32(r3);
    r29 = (r29 + r0);
    r3 = (r3 + 8);
}

loc_803421D8:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_803421E0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(255))) {
        goto loc_803421CC;
    }
}

loc_803421E4:
{
    r3 = 0;
    // inline leaf 0x800CEF20 (23 guest instruction(s))
}

loc_inl3_0x800CEF20:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & -2);
    r6 = (r4 + r0);
    r0 = MemoryInline::FlatRead16((r6 + 24));
}

loc_inl3_0x800CEF38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl3_0x800CEF40;
    }
}

loc_inl3_0x800CEF3C:
{
    r0 = 1;
}

loc_inl3_0x800CEF40:
{
    r5 = (r0 * 176);
    r3 = 11337728;
    r0 = (r3 + 30009);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r5)) >> 32));
    r0 = (r5 - r3);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_1 & 2147483647);
    r0 = (r0 + r3);
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_0 & 131071);
    r3 = 65536;
    r0 = (r3 + -173);
    r0 = (r4 * r0);
    r0 = (r5 - r0);
    r3 = (r0 & 65535);
    MemoryInline::FlatWriteRam16((r6 + 24), static_cast<uint16_t>(r3));
}

loc_inl3_cont_800CEF20:
{
    // end of inlined leaf 0x800CEF20
    r3 = (r3 & 65535);
    r0 = PPC_Divwu(static_cast<uint32_t>(r3), static_cast<uint32_t>(r29));
    r0 = (r0 * r29);
    r29 = (r3 - r0);
    r0 = MemoryInline::FlatRead16((r30 + 92));
}

loc_80342204:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(389))) {
        goto loc_8034222C;
    }
}

loc_80342208:
{
}

loc_8034220C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(351))) {
        goto loc_80342238;
    }
}

loc_80342210:
{
}

loc_80342214:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(353))) {
        goto loc_803422DC;
    }
}

loc_80342218:
{
}

loc_8034221C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(390))) {
        goto loc_80342350;
    }
}

loc_80342220:
{
}

loc_80342224:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(355))) {
        goto loc_8034235C;
    }
}

loc_80342228:
{
    goto loc_80342368;
}

loc_8034222C:
{
    r3 = 0x805E0000u;
    r3 = (r3 + 32336);
    goto loc_8034236C;
}

loc_80342238:
{
    r3 = (r31 & 255);
    // inline leaf 0x802B06CC (8 guest instruction(s))
}

loc_inl4_0x802B06CC:
{
    r0 = (r3 & 255);
    r4 = 0x805D0000u;
    r4 = (r4 + -2816);
    r4_addr_5 = (r4 + r0);
    r0 = MemoryInline::FlatRead8(r4_addr_5);
}

loc_inl4_0x802B06E0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_inl4_return;
    }
}

loc_inl4_0x802B06E4:
{
    r3 = r0;
    goto loc_inl4_cont_802B06CC;
}

loc_inl4_return:
{
}

loc_inl4_cont_802B06CC:
{
    // end of inlined leaf 0x802B06CC
    r0 = (r3 & 255);
}

loc_80342248:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80342258;
    }
}

loc_8034224C:
{
}

loc_80342250:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_803422AC;
    }
}

loc_80342254:
{
    goto loc_803422D0;
}

loc_80342258:
{
    r0 = MemoryInline::FlatRead8((r28 + 2));
}

loc_80342260:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80342288;
    }
}

loc_80342264:
{
    r0 = MemoryInline::FlatRead8((r28 + 68));
}

loc_8034226C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8034227C;
    }
}

loc_80342270:
{
    r3 = 0x805E0000u;
    r3 = (r3 + 32368);
    goto loc_8034236C;
}

loc_8034227C:
{
    r3 = 0x805E0000u;
    r3 = (r3 + 32348);
    goto loc_8034236C;
}

loc_80342288:
{
    r0 = MemoryInline::FlatRead8((r28 + 68));
}

loc_80342290:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(12))) {
        goto loc_803422A0;
    }
}

loc_80342294:
{
    r3 = 0x805E0000u;
    r3 = (r3 + 32368);
    goto loc_8034236C;
}

loc_803422A0:
{
    r3 = 0x805E0000u;
    r3 = (r3 + 32348);
    goto loc_8034236C;
}

loc_803422AC:
{
    r0 = MemoryInline::FlatRead8((r28 + 68));
}

loc_803422B4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803422C4;
    }
}

loc_803422B8:
{
    r3 = 0x805E0000u;
    r3 = (r3 + 32368);
    goto loc_8034236C;
}

loc_803422C4:
{
    r3 = 0x805E0000u;
    r3 = (r3 + 32348);
    goto loc_8034236C;
}

loc_803422D0:
{
    r3 = 0x805E0000u;
    r3 = (r3 + 32348);
    goto loc_8034236C;
}

loc_803422DC:
{
    r3 = (r31 & 255);
    // inline leaf 0x802B06CC (8 guest instruction(s))
}

loc_inl5_0x802B06CC:
{
    r0 = (r3 & 255);
    r4 = 0x805D0000u;
    r4 = (r4 + -2816);
    r4_addr_4 = (r4 + r0);
    r0 = MemoryInline::FlatRead8(r4_addr_4);
}

loc_inl5_0x802B06E0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_inl5_return;
    }
}

loc_inl5_0x802B06E4:
{
    r3 = r0;
    goto loc_inl5_cont_802B06CC;
}

loc_inl5_return:
{
}

loc_inl5_cont_802B06CC:
{
    // end of inlined leaf 0x802B06CC
    r0 = (r3 & 255);
}

loc_803422EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_803422FC;
    }
}

loc_803422F0:
{
}

loc_803422F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_80342320;
    }
}

loc_803422F8:
{
    goto loc_80342344;
}

loc_803422FC:
{
    r0 = MemoryInline::FlatRead8((r28 + 68));
}

loc_80342304:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80342314;
    }
}

loc_80342308:
{
    r3 = 0x805E0000u;
    r3 = (r3 + 32400);
    goto loc_8034236C;
}

loc_80342314:
{
    r3 = 0x805E0000u;
    r3 = (r3 + 32380);
    goto loc_8034236C;
}

loc_80342320:
{
    r0 = MemoryInline::FlatRead8((r28 + 68));
}

loc_80342328:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(6))) {
        goto loc_80342338;
    }
}

loc_8034232C:
{
    r3 = 0x805E0000u;
    r3 = (r3 + 32412);
    goto loc_8034236C;
}

loc_80342338:
{
    r3 = 0x805E0000u;
    r3 = (r3 + 32380);
    goto loc_8034236C;
}

loc_80342344:
{
    r3 = 0x805E0000u;
    r3 = (r3 + 32380);
    goto loc_8034236C;
}

loc_80342350:
{
    r3 = 0x805E0000u;
    r3 = (r3 + 32424);
    goto loc_8034236C;
}

loc_8034235C:
{
    r3 = 0x805E0000u;
    r3 = (r3 + 32436);
    goto loc_8034236C;
}

loc_80342368:
{
    r3 = MemoryInline::FlatRead32((r30 + 60));
}

loc_8034236C:
{
    r4 = 0;
    goto loc_80342390;
}

loc_80342374:
{
    r0 = MemoryInline::FlatRead32(r3);
    r4 = (r4 + r0);
}

loc_80342380:
{
    if ((static_cast<uint32_t>(r29) >= static_cast<uint32_t>(r4))) {
        goto loc_8034238C;
    }
}

loc_80342384:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    goto loc_803423A0;
}

loc_8034238C:
{
    r3 = (r3 + 8);
}

loc_80342390:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_80342398:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(255))) {
        goto loc_80342374;
    }
}

loc_8034239C:
{
    r3 = 0;
}

loc_803423A0:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80341FF8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80341FF8_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80341FF8 func_80341FF8 preserves=true fpr_mask=0x00000000
