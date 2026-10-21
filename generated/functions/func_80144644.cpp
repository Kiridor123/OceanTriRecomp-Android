#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80144644_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;

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

    MKW_GUEST_ENTER(0x80144644u);
    goto loc_80144644;

loc_80144644:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r28 = r3;
    r29 = r4;
    r30 = r5;
}

loc_80144670:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8014467C;
    }
}

loc_80144674:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r4, r0);
}

loc_8014467C:
{
}

loc_80144680:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8014468C;
    }
}

loc_80144684:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r5, r0);
}

loc_8014468C:
{
}

loc_80144690:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_801446F8;
    }
}

loc_80144694:
{
    r3 = 3;
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
    r31 = r3;
}

loc_801446A4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801446F8;
    }
}

loc_801446A8:
{
    r3 = 3;
    // inline leaf 0x800CFB34 (15 guest instruction(s))
}

loc_inl1_0x800CFB34:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl1_0x800CFB44:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x800CFB50;
    }
}

loc_inl1_0x800CFB48:
{
    r3 = 0;
    goto loc_inl1_cont_800CFB34;
}

loc_inl1_0x800CFB50:
{
    r0 = (r3 & 255);
}

loc_inl1_0x800CFB58:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl1_0x800CFB64;
    }
}

loc_inl1_0x800CFB5C:
{
    r3 = 0;
    goto loc_inl1_cont_800CFB34;
}

loc_inl1_0x800CFB64:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & -2);
    r4_addr_1 = (r4 + r0);
    r3 = MemoryInline::FlatRead16(r4_addr_1);
}

loc_inl1_cont_800CFB34:
{
    // end of inlined leaf 0x800CFB34
    r5 = 0;
    r4 = (r28 & 65535);
    r0 = (r3 & 65535);
    ctr = r0;
}

loc_801446C4:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(0))) {
        goto loc_801446F8;
    }
}

loc_801446C8:
{
    r0 = MemoryInline::FlatRead8(r31);
}

loc_801446D0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801446EC;
    }
}

loc_801446D4:
{
    r0 = MemoryInline::FlatRead16((r31 + 26));
}

loc_801446DC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r4))) {
        goto loc_801446EC;
    }
}

loc_801446E0:
{
    MemoryInline::FlatWrite32(r29, r31);
    r3 = 1;
    goto loc_801447D0;
}

loc_801446EC:
{
    r5 = (r5 + 1);
    r31 = (r31 + 2840);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801446C8;
    }
}

loc_801446F8:
{
}

loc_801446FC:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_801447CC;
    }
}

loc_80144700:
{
    r3 = 0x806A0000u;
    r5 = (r3 + 31072);
    r4 = 0;
    r3 = (r28 & 65535);
    r0 = 32;
    ctr = r0;
}

loc_80144718:
{
    r0 = MemoryInline::FlatRead8(r5);
}

loc_80144720:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8014473C;
    }
}

loc_80144724:
{
    r0 = MemoryInline::FlatRead16((r5 + 22));
}

loc_8014472C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_8014473C;
    }
}

loc_80144730:
{
    MemoryInline::FlatWrite32(r30, r5);
    r3 = 2;
    goto loc_801447D0;
}

loc_8014473C:
{
    r4 = (r4 + 1);
    r5 = (r5 + 68);
    r0 = MemoryInline::FlatRead8(r5);
}

loc_8014474C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80144768;
    }
}

loc_80144750:
{
    r0 = MemoryInline::FlatRead16((r5 + 22));
}

loc_80144758:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_80144768;
    }
}

loc_8014475C:
{
    MemoryInline::FlatWrite32(r30, r5);
    r3 = 2;
    goto loc_801447D0;
}

loc_80144768:
{
    r4 = (r4 + 1);
    r5 = (r5 + 68);
    r0 = MemoryInline::FlatRead8(r5);
}

loc_80144778:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80144794;
    }
}

loc_8014477C:
{
    r0 = MemoryInline::FlatRead16((r5 + 22));
}

loc_80144784:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_80144794;
    }
}

loc_80144788:
{
    MemoryInline::FlatWrite32(r30, r5);
    r3 = 2;
    goto loc_801447D0;
}

loc_80144794:
{
    r4 = (r4 + 1);
    r5 = (r5 + 68);
    r0 = MemoryInline::FlatRead8(r5);
}

loc_801447A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801447C0;
    }
}

loc_801447A8:
{
    r0 = MemoryInline::FlatRead16((r5 + 22));
}

loc_801447B0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_801447C0;
    }
}

loc_801447B4:
{
    MemoryInline::FlatWrite32(r30, r5);
    r3 = 2;
    goto loc_801447D0;
}

loc_801447C0:
{
    r4 = (r4 + 1);
    r5 = (r5 + 68);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80144718;
    }
}

loc_801447CC:
{
    r3 = 0;
}

loc_801447D0:
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

extern "C" void func_80144644(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80144644_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80144644 func_80144644 preserves=true fpr_mask=0x00000000
