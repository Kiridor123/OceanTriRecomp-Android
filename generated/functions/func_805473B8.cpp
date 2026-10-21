#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804641A0(CpuContext* ctx);
extern "C" uint64_t func_804641A0_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80468940(CpuContext* ctx);
extern "C" uint64_t func_80468940_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_805473B8_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r22_addr_0 = 0;
    uint32_t r22_addr_1 = 0;
    uint32_t r22_addr_2 = 0;
    uint32_t r22_addr_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
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
    uint32_t r11 = ctx->gpr[11];
    uint32_t r20 = ctx->gpr[20];
    uint32_t r21 = ctx->gpr[21];
    uint32_t r22 = ctx->gpr[22];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x805473B8u);
    goto loc_805473B8;

loc_805473B8:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x8045746C (13 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -48), 0, 48u, false, true);
    // end of inlined leaf 0x8045746C
    r27 = 0x80580000u;
    r20 = r4;
    r21 = r5;
    r22 = r6;
    r26 = r7;
    r23 = r8;
    r27 = (r27 + -17792);
    r29 = 0;
    r28 = 1;
    goto loc_80547550;
}

loc_805473F4:
{
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & -2);
    r22_addr_2 = (r22 + r3);
    r0 = MemoryInline::FlatRead16(r22_addr_2);
}

loc_80547400:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(65))) {
        goto loc_80547448;
    }
}

loc_80547404:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(13));
}

loc_80547408:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805474A8;
    }
}

loc_8054740C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80547428;
    }
}

loc_80547410:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(10));
}

loc_80547414:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805474A8;
    }
}

loc_80547418:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80547548;
    }
}

loc_8054741C:
{
}

loc_80547420:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8054748C;
    }
}

loc_80547424:
{
    goto loc_80547548;
}

loc_80547428:
{
}

loc_8054742C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(48))) {
        goto loc_8054743C;
    }
}

loc_80547430:
{
}

loc_80547434:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(32))) {
        goto loc_805474A8;
    }
}

loc_80547438:
{
    goto loc_80547548;
}

loc_8054743C:
{
}

loc_80547440:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(58))) {
        goto loc_80547548;
    }
}

loc_80547444:
{
    goto loc_80547540;
}

loc_80547448:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(104));
}

loc_8054744C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805474CC;
    }
}

loc_80547450:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80547474;
    }
}

loc_80547454:
{
}

loc_80547458:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(91))) {
        goto loc_80547468;
    }
}

loc_8054745C:
{
}

loc_80547460:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(72))) {
        goto loc_805474CC;
    }
}

loc_80547464:
{
    goto loc_80547540;
}

loc_80547468:
{
}

loc_8054746C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(97))) {
        goto loc_80547540;
    }
}

loc_80547470:
{
    goto loc_80547548;
}

loc_80547474:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(12288));
}

loc_80547478:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805474A8;
    }
}

loc_8054747C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80547548;
    }
}

loc_80547480:
{
}

loc_80547484:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(123))) {
        goto loc_80547548;
    }
}

loc_80547488:
{
    goto loc_80547540;
}

loc_8054748C:
{
}

loc_80547490:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_805474A0;
    }
}

loc_80547494:
{
}

loc_80547498:
{
    if ((static_cast<int32_t>(r21) == static_cast<int32_t>(0))) {
        goto loc_805474A0;
    }
}

loc_8054749C:
{
    MemoryInline::FlatWrite32(r21, r26);
}

loc_805474A0:
{
    r3 = r29;
    goto loc_8054755C;
}

loc_805474A8:
{
}

loc_805474AC:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_805474B8;
    }
}

loc_805474B0:
{
    r28 = 1;
    goto loc_8054754C;
}

loc_805474B8:
{
}

loc_805474BC:
{
    if ((static_cast<int32_t>(r21) == static_cast<int32_t>(0))) {
        goto loc_805474C4;
    }
}

loc_805474C0:
{
    MemoryInline::FlatWrite32(r21, r26);
}

loc_805474C4:
{
    r3 = 1;
    goto loc_8054755C;
}

loc_805474CC:
{
}

loc_805474D0:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_8054754C;
    }
}

loc_805474D4:
{
}

loc_805474D8:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_8054754C;
    }
}

loc_805474DC:
{
    r31 = r27;
    r30 = (r22 + r3);
    r28 = 0;
    r25 = 0;
}

loc_805474EC:
{
    r3 = r31;
    if constexpr (KnownRegArgsCpuCall<0x804641A0u>(&func_804641A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_804641A0_18A0 = func_804641A0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804641A0_18A0);
        r4 = static_cast<uint32_t>(regargs_result_804641A0_18A0 >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x804641A0u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r24 = r3;
    r3 = r30;
    r4 = r31;
    r5 = r24;
    if constexpr (KnownRegArgsCpuCall<0x80468940u>(&func_80468940)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80468940_1B9C = func_80468940_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80468940_1B9C);
        r4 = static_cast<uint32_t>(regargs_result_80468940_1B9C >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80468940u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
}

loc_8054750C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8054752C;
    }
}

loc_80547510:
{
}

loc_80547514:
{
    if ((static_cast<int32_t>(r20) == static_cast<int32_t>(0))) {
        goto loc_8054751C;
    }
}

loc_80547518:
{
    MemoryInline::FlatWrite32(r20, r26);
}

loc_8054751C:
{
    r3 = (r26 + r24);
    r29 = 1;
    r26 = (r3 + -1);
    goto loc_8054754C;
}

loc_8054752C:
{
    r25 = (r25 + 1);
    r31 = (r31 + 20);
}

loc_80547538:
{
    if ((static_cast<uint32_t>(r25) < static_cast<uint32_t>(2))) {
        goto loc_805474EC;
    }
}

loc_8054753C:
{
    goto loc_8054754C;
}

loc_80547540:
{
    r28 = 0;
    goto loc_8054754C;
}

loc_80547548:
{
    r28 = 1;
}

loc_8054754C:
{
    r26 = (r26 + 1);
}

loc_80547550:
{
}

loc_80547554:
{
    if ((static_cast<uint32_t>(r26) < static_cast<uint32_t>(r23))) {
        goto loc_805473F4;
    }
}

loc_80547558:
{
    r3 = r29;
}

loc_8054755C:
{
    r11 = (r1 + 64);
    // inline leaf 0x804574B8 (13 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -48), 0, 48u, true, false);
    // end of inlined leaf 0x804574B8
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_805473B8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_805473B8_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000001FB gpr_write=0x000008FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805473B8 func_805473B8 preserves=true fpr_mask=0x00000000
