#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802730A8(CpuContext* ctx);
extern "C" uint64_t func_802730A8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8027328C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    goto loc_8027328C;

loc_8027328C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r28 = r3;
    r29 = r4;
    r31 = r5;
    r4 = (r4 & 65535);
    ctx->lr = 0x802732BCu;
    if constexpr (KnownRegArgsCpuCall<0x802730A8u>(&func_802730A8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_802730A8_5D3 = func_802730A8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802730A8_5D3);
        r4 = static_cast<uint32_t>(regargs_result_802730A8_5D3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x802730A8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    }
    r30 = r3;
    r3 = (r29 & 65535);
    // inline leaf 0x8029F740 (10 guest instruction(s))
}

loc_inl0_0x8029F740:
{
    r4 = 0x806B0000u;
    r4 = MemoryInline::FlatRead32((r4 + -4808));
    r0 = (r3 & 65535);
}

loc_inl0_0x8029F750:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(747))) {
        goto loc_inl0_0x8029F758;
    }
}

loc_inl0_0x8029F754:
{
    r3 = 0;
}

loc_inl0_0x8029F758:
{
    r0 = (r3 & 65535);
    r0 = (r0 * 20);
    r3 = (r4 + r0);
}

loc_inl0_cont_8029F740:
{
    // end of inlined leaf 0x8029F740
    r4 = (r30 & 65535);
}

loc_802732D0:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(65535))) {
        goto loc_80273338;
    }
}

loc_802732D4:
{
    r0 = (r4 & 128);
}

loc_802732DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80273310;
    }
}

loc_802732E0:
{
    r4 = (r4 & 127);
    r0 = (r4 + 26);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r4 = (r28 + r0);
    r5 = MemoryInline::FlatRead16((r4 + 634));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r4 = MemoryInline::FlatRead8((r3 + 3));
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
    r0 = (r3 + r5);
}

loc_80273304:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r4))) {
        goto loc_802734B0;
    }
}

loc_80273308:
{
    r3 = (r4 - r5);
    goto loc_802734B0;
}

loc_80273310:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r4 = (r28 + r0);
    r5 = MemoryInline::FlatRead16((r4 + 634));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r4 = MemoryInline::FlatRead8((r3 + 3));
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
    r0 = (r3 + r5);
}

loc_8027332C:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r4))) {
        goto loc_802734B0;
    }
}

loc_80273330:
{
    r3 = (r4 - r5);
    goto loc_802734B0;
}

loc_80273338:
{
    r0 = MemoryInline::FlatRead8(r3);
}

loc_80273340:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802733F4;
    }
}

loc_80273344:
{
    r3 = r28;
    // inline leaf 0x8026FEA8 (9 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2));
    r4 = (r3 + -4);
    r3 = 2;
    r0 = (2 - r4);
    r3 = (r3 | ~r4);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_3 & 2147483647);
    r0 = (r3 - r0);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x8026FEA8
}

loc_80273350:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802733F4;
    }
}

loc_80273354:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r28 + 736), 0, 30u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, (r28 + 736));
}

loc_8027335C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80273368;
    }
}

loc_80273360:
{
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
    goto loc_802734B0;
}

loc_80273368:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r28 + 740));
}

loc_80273370:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8027337C;
    }
}

loc_80273374:
{
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
    goto loc_802734B0;
}

loc_8027337C:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 8u, (r28 + 744));
}

loc_80273384:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80273390;
    }
}

loc_80273388:
{
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
    goto loc_802734B0;
}

loc_80273390:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 12u, (r28 + 748));
}

loc_80273398:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802733A4;
    }
}

loc_8027339C:
{
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
    goto loc_802734B0;
}

loc_802733A4:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 16u, (r28 + 752));
}

loc_802733AC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802733B8;
    }
}

loc_802733B0:
{
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
    goto loc_802734B0;
}

loc_802733B8:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 20u, (r28 + 756));
}

loc_802733C0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802733CC;
    }
}

loc_802733C4:
{
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
    goto loc_802734B0;
}

loc_802733CC:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 24u, (r28 + 760));
}

loc_802733D4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802733E0;
    }
}

loc_802733D8:
{
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
    goto loc_802734B0;
}

loc_802733E0:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 28u, (r28 + 764));
}

loc_802733E8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802733F4;
    }
}

loc_802733EC:
{
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
    goto loc_802734B0;
}

loc_802733F4:
{
    r3 = 0;
    r0 = 3;
    ctr = r0;
}

loc_80273400:
{
    r0 = MemoryInline::FlatRead16((r28 + 632));
}

loc_80273408:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80273414;
    }
}

loc_8027340C:
{
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
    goto loc_802734B0;
}

loc_80273414:
{
    r0 = MemoryInline::FlatRead16((r28 + 636));
}

loc_8027341C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80273428;
    }
}

loc_80273420:
{
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
    goto loc_802734B0;
}

loc_80273428:
{
    r0 = MemoryInline::FlatRead16((r28 + 640));
}

loc_80273430:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8027343C;
    }
}

loc_80273434:
{
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
    goto loc_802734B0;
}

loc_8027343C:
{
    r0 = MemoryInline::FlatRead16((r28 + 644));
}

loc_80273444:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80273450;
    }
}

loc_80273448:
{
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
    goto loc_802734B0;
}

loc_80273450:
{
    r0 = MemoryInline::FlatRead16((r28 + 648));
}

loc_80273458:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80273464;
    }
}

loc_8027345C:
{
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
    goto loc_802734B0;
}

loc_80273464:
{
    r0 = MemoryInline::FlatRead16((r28 + 652));
}

loc_8027346C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80273478;
    }
}

loc_80273470:
{
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
    goto loc_802734B0;
}

loc_80273478:
{
    r0 = MemoryInline::FlatRead16((r28 + 656));
}

loc_80273480:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8027348C;
    }
}

loc_80273484:
{
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
    goto loc_802734B0;
}

loc_8027348C:
{
    r0 = MemoryInline::FlatRead16((r28 + 660));
}

loc_80273494:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802734A0;
    }
}

loc_80273498:
{
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
    goto loc_802734B0;
}

loc_802734A0:
{
    r28 = (r28 + 32);
    r3 = (r3 + 7);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80273400;
    }
}

loc_802734AC:
{
    r3 = 0;
}

loc_802734B0:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8027328C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8027328C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8027328C func_8027328C preserves=true fpr_mask=0x00000000
