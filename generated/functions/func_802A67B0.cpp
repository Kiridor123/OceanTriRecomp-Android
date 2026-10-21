#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_802A67B0_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;

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

    MKW_GUEST_ENTER(0x802A67B0u);
    goto loc_802A67B0;

loc_802A67B0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = r3;
    r28 = r4;
    r31 = (r3 + 446);
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 443), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 15));
}

loc_802A67E8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_802A6914;
    }
}

loc_802A67EC:
{
    r3 = 0x806C0000u;
    r29 = (r3 + 1984);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
}

loc_802A67FC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_802A6808;
    }
}

loc_802A6800:
{
    // inline leaf 0x800CF3E8 (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 39));
    // end of inlined leaf 0x800CF3E8
    r28 = r3;
}

loc_802A6808:
{
    r5 = 0;
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r28)));
    r0 = 2;
    ctr = r0;
}

loc_802A6818:
{
    r3 = MemoryInline::FlatRead8(r29);
}

loc_802A6820:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802A6844;
    }
}

loc_802A6824:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
}

loc_802A682C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(r4))) {
        goto loc_802A6844;
    }
}

loc_802A6830:
{
    r3 = MemoryInline::FlatRead8((r30 + 443));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r30 + 443), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r5));
    r31 = (r31 + 1);
}

loc_802A6844:
{
    r5 = (r5 + 1);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
    r3 = MemoryInline::FlatRead8((r29 + 304));
}

loc_802A6854:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802A6874;
    }
}

loc_802A6858:
{
}

loc_802A685C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(r4))) {
        goto loc_802A6874;
    }
}

loc_802A6860:
{
    r3 = MemoryInline::FlatRead8((r30 + 443));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r30 + 443), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r5));
    r31 = (r31 + 1);
}

loc_802A6874:
{
    r5 = (r5 + 1);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
    r3 = MemoryInline::FlatRead8((r29 + 608));
}

loc_802A6884:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802A68A4;
    }
}

loc_802A6888:
{
}

loc_802A688C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(r4))) {
        goto loc_802A68A4;
    }
}

loc_802A6890:
{
    r3 = MemoryInline::FlatRead8((r30 + 443));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r30 + 443), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r5));
    r31 = (r31 + 1);
}

loc_802A68A4:
{
    r5 = (r5 + 1);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
    r3 = MemoryInline::FlatRead8((r29 + 912));
}

loc_802A68B4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802A68D4;
    }
}

loc_802A68B8:
{
}

loc_802A68BC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(r4))) {
        goto loc_802A68D4;
    }
}

loc_802A68C0:
{
    r3 = MemoryInline::FlatRead8((r30 + 443));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r30 + 443), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r5));
    r31 = (r31 + 1);
}

loc_802A68D4:
{
    r5 = (r5 + 1);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
    r3 = MemoryInline::FlatRead8((r29 + 1216));
}

loc_802A68E4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802A6904;
    }
}

loc_802A68E8:
{
}

loc_802A68EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(r4))) {
        goto loc_802A6904;
    }
}

loc_802A68F0:
{
    r3 = MemoryInline::FlatRead8((r30 + 443));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r30 + 443), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r5));
    r31 = (r31 + 1);
}

loc_802A6904:
{
    r5 = (r5 + 1);
    r29 = (r29 + 1520);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_802A6818;
    }
}

loc_802A6910:
{
    goto loc_802A699C;
}

loc_802A6914:
{
}

loc_802A6918:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802A699C;
    }
}

loc_802A691C:
{
    r3 = 2;
    // inline leaf 0x800CFAF4 (16 guest instruction(s))
}

loc_inl1_0x800CFAF4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl1_0x800CFB04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x800CFB10;
    }
}

loc_inl1_0x800CFB08:
{
    r3 = 0;
    goto loc_inl1_cont_800CFAF4;
}

loc_inl1_0x800CFB10:
{
    r0 = (r3 & 255);
}

loc_inl1_0x800CFB18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl1_0x800CFB24;
    }
}

loc_inl1_0x800CFB1C:
{
    r3 = 0;
    goto loc_inl1_cont_800CFAF4;
}

loc_inl1_0x800CFB24:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl1_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    r29 = r3;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r28)));
}

loc_802A6930:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_802A693C;
    }
}

loc_802A6934:
{
    // inline leaf 0x800CF3E8 (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 39));
    // end of inlined leaf 0x800CF3E8
    r28 = r3;
}

loc_802A693C:
{
    r3 = 2;
    // inline leaf 0x800CFB34 (15 guest instruction(s))
}

loc_inl3_0x800CFB34:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl3_0x800CFB44:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl3_0x800CFB50;
    }
}

loc_inl3_0x800CFB48:
{
    r3 = 0;
    goto loc_inl3_cont_800CFB34;
}

loc_inl3_0x800CFB50:
{
    r0 = (r3 & 255);
}

loc_inl3_0x800CFB58:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl3_0x800CFB64;
    }
}

loc_inl3_0x800CFB5C:
{
    r3 = 0;
    goto loc_inl3_cont_800CFB34;
}

loc_inl3_0x800CFB64:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & -2);
    r4_addr_1 = (r4 + r0);
    r3 = MemoryInline::FlatRead16(r4_addr_1);
}

loc_inl3_cont_800CFB34:
{
    // end of inlined leaf 0x800CFB34
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r5 = 0;
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r28)));
    ctr = r0;
}

loc_802A6958:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_802A699C;
    }
}

loc_802A695C:
{
    r0 = MemoryInline::FlatRead8(r29);
}

loc_802A6964:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802A6990;
    }
}

loc_802A6968:
{
    r0 = MemoryInline::FlatRead8((r29 + 8));
}

loc_802A6970:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(r4))) {
        goto loc_802A6990;
    }
}

loc_802A6974:
{
    r3 = MemoryInline::FlatRead8((r30 + 443));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r30 + 443), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r29 + 8));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    r31 = (r31 + 1);
}

loc_802A6990:
{
    r5 = (r5 + 1);
    r29 = (r29 + 2848);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_802A695C;
    }
}

loc_802A699C:
{
    r3 = MemoryInline::FlatRead8((r30 + 443));
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

extern "C" void func_802A67B0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802A67B0_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802A67B0 func_802A67B0 preserves=true fpr_mask=0x00000000
