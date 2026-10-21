#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804C2D20(CpuContext* ctx);
extern "C" uint32_t func_804C2D20_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" MkwStateFreeResult2 func_804C2D20_statefree(uint32_t, uint32_t, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_804C2D20_statefree_v0(uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_804C5DF0_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_16 = 0;
    uint32_t r0_rot_17 = 0;
    uint32_t r0_rot_18 = 0;
    uint32_t r0_rot_19 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_20 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_10 = 0;
    uint32_t r3_addr_11 = 0;
    uint32_t r3_addr_12 = 0;
    uint32_t r3_addr_13 = 0;
    uint32_t r3_addr_14 = 0;
    uint32_t r3_addr_15 = 0;
    uint32_t r3_addr_16 = 0;
    uint32_t r3_addr_17 = 0;
    uint32_t r3_addr_18 = 0;
    uint32_t r3_addr_19 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_20 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_rot_5 = 0;
    uint32_t r5_rot_6 = 0;
    uint32_t r5_rot_7 = 0;
    uint32_t r5_rot_8 = 0;
    uint32_t r5_rot_9 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x804C5DF0u);
    goto loc_804C5DF0;

loc_804C5DF0:
{
    MemoryAlias::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryAlias::FlatWriteRam32((r1 + 20), r0);
    r0 = (r3 * 68);
    r30 = r4;
    r3 = MemoryAlias::FlatRead32((r13 + -15216));
    r31 = (r3 + r0);
    r3_addr_0 = (r3 + r0);
    r3 = MemoryAlias::FlatRead32(r3_addr_0);
    r0 = (r3 & -1073741824);
}

loc_804C5E1C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804C6214;
    }
}

loc_804C5E20:
{
    r0 = (r3 & -2147483648);
}

loc_804C5E24:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804C5E74;
    }
}

loc_804C5E28:
{
    r0 = MemoryAlias::FlatRead16((r31 + 38));
    MemoryAlias::FlatWrite16((r31 + 36), static_cast<uint16_t>(r0));
    r0 = MemoryAlias::FlatRead16((r31 + 42));
    MemoryAlias::FlatWrite16((r31 + 40), static_cast<uint16_t>(r0));
    r0 = MemoryAlias::FlatRead16((r31 + 46));
    MemoryAlias::FlatWrite16((r31 + 44), static_cast<uint16_t>(r0));
    r0 = MemoryAlias::FlatRead16((r31 + 50));
    MemoryAlias::FlatWrite16((r31 + 48), static_cast<uint16_t>(r0));
    r0 = MemoryAlias::FlatRead16((r31 + 54));
    MemoryAlias::FlatWrite16((r31 + 52), static_cast<uint16_t>(r0));
    r0 = MemoryAlias::FlatRead16((r31 + 58));
    MemoryAlias::FlatWrite16((r31 + 56), static_cast<uint16_t>(r0));
    r0 = MemoryAlias::FlatRead16((r31 + 62));
    MemoryAlias::FlatWrite16((r31 + 60), static_cast<uint16_t>(r0));
    r0 = MemoryAlias::FlatRead16((r31 + 66));
    MemoryAlias::FlatWrite16((r31 + 64), static_cast<uint16_t>(r0));
    r0 = MemoryAlias::FlatRead32(r31);
    r0 = (r0 & 2147483647);
    MemoryAlias::FlatWrite32(r31, r0);
}

loc_804C5E74:
{
    r0 = MemoryAlias::FlatRead32(r31);
    r0 = (r0 & 1073741824);
}

loc_804C5E7C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804C5F80;
    }
}

loc_804C5E80:
{
    r3 = MemoryAlias::FlatRead32((r31 + 4));
    // inline leaf 0x804C2D20 (15 guest instruction(s))
}

loc_inl0_0x804C2D20:
{
}

loc_inl0_0x804C2D24:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_inl0_0x804C2D30;
    }
}

loc_inl0_0x804C2D28:
{
    r3 = 0;
    goto loc_inl0_cont_804C2D20;
}

loc_inl0_0x804C2D30:
{
}

loc_inl0_0x804C2D34:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_inl0_0x804C2D44;
    }
}

loc_inl0_0x804C2D38:
{
    r3 = 65536;
    r3 = (r3 + -156);
    goto loc_inl0_cont_804C2D20;
}

loc_inl0_0x804C2D44:
{
    r0 = (r3 + 904);
    r3 = 0x80620000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r3 = (r3 + -18752);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryAlias::FlatRead16(r3_addr_1);
}

loc_inl0_cont_804C2D20:
{
    // end of inlined leaf 0x804C2D20
    MemoryAlias::FlatWrite16((r31 + 38), static_cast<uint16_t>(r3));
    r3 = MemoryAlias::FlatRead32((r31 + 8));
    // inline leaf 0x804C2D20 (15 guest instruction(s))
}

loc_inl1_0x804C2D20:
{
}

loc_inl1_0x804C2D24:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_inl1_0x804C2D30;
    }
}

loc_inl1_0x804C2D28:
{
    r3 = 0;
    goto loc_inl1_cont_804C2D20;
}

loc_inl1_0x804C2D30:
{
}

loc_inl1_0x804C2D34:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_inl1_0x804C2D44;
    }
}

loc_inl1_0x804C2D38:
{
    r3 = 65536;
    r3 = (r3 + -156);
    goto loc_inl1_cont_804C2D20;
}

loc_inl1_0x804C2D44:
{
    r0 = (r3 + 904);
    r3 = 0x80620000u;
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & -2);
    r3 = (r3 + -18752);
    r3_addr_3 = (r3 + r0);
    r3 = MemoryAlias::FlatRead16(r3_addr_3);
}

loc_inl1_cont_804C2D20:
{
    // end of inlined leaf 0x804C2D20
    MemoryAlias::FlatWrite16((r31 + 46), static_cast<uint16_t>(r3));
    r3 = MemoryAlias::FlatRead32((r31 + 12));
    // inline leaf 0x804C2D20 (15 guest instruction(s))
}

loc_inl2_0x804C2D20:
{
}

loc_inl2_0x804C2D24:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_inl2_0x804C2D30;
    }
}

loc_inl2_0x804C2D28:
{
    r3 = 0;
    goto loc_inl2_cont_804C2D20;
}

loc_inl2_0x804C2D30:
{
}

loc_inl2_0x804C2D34:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_inl2_0x804C2D44;
    }
}

loc_inl2_0x804C2D38:
{
    r3 = 65536;
    r3 = (r3 + -156);
    goto loc_inl2_cont_804C2D20;
}

loc_inl2_0x804C2D44:
{
    r0 = (r3 + 904);
    r3 = 0x80620000u;
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_5 & -2);
    r3 = (r3 + -18752);
    r3_addr_5 = (r3 + r0);
    r3 = MemoryAlias::FlatRead16(r3_addr_5);
}

loc_inl2_cont_804C2D20:
{
    // end of inlined leaf 0x804C2D20
    MemoryAlias::FlatWrite16((r31 + 54), static_cast<uint16_t>(r3));
    r3 = MemoryAlias::FlatRead32((r31 + 16));
    // inline leaf 0x804C2D20 (15 guest instruction(s))
}

loc_inl3_0x804C2D20:
{
}

loc_inl3_0x804C2D24:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_inl3_0x804C2D30;
    }
}

loc_inl3_0x804C2D28:
{
    r3 = 0;
    goto loc_inl3_cont_804C2D20;
}

loc_inl3_0x804C2D30:
{
}

loc_inl3_0x804C2D34:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_inl3_0x804C2D44;
    }
}

loc_inl3_0x804C2D38:
{
    r3 = 65536;
    r3 = (r3 + -156);
    goto loc_inl3_cont_804C2D20;
}

loc_inl3_0x804C2D44:
{
    r0 = (r3 + 904);
    r3 = 0x80620000u;
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_7 & -2);
    r3 = (r3 + -18752);
    r3_addr_7 = (r3 + r0);
    r3 = MemoryAlias::FlatRead16(r3_addr_7);
}

loc_inl3_cont_804C2D20:
{
    // end of inlined leaf 0x804C2D20
    MemoryAlias::FlatWrite16((r31 + 62), static_cast<uint16_t>(r3));
    r0 = MemoryAlias::FlatRead32(r31);
    r0 = (r0 & 1);
}

loc_804C5EB8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804C5ECC;
    }
}

loc_804C5EBC:
{
    r3 = MemoryAlias::FlatRead32((r31 + 20));
    // inline leaf 0x804C2D20 (15 guest instruction(s))
}

loc_inl4_0x804C2D20:
{
}

loc_inl4_0x804C2D24:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_inl4_0x804C2D30;
    }
}

loc_inl4_0x804C2D28:
{
    r3 = 0;
    goto loc_inl4_cont_804C2D20;
}

loc_inl4_0x804C2D30:
{
}

loc_inl4_0x804C2D34:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_inl4_0x804C2D44;
    }
}

loc_inl4_0x804C2D38:
{
    r3 = 65536;
    r3 = (r3 + -156);
    goto loc_inl4_cont_804C2D20;
}

loc_inl4_0x804C2D44:
{
    r0 = (r3 + 904);
    r3 = 0x80620000u;
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_9 & -2);
    r3 = (r3 + -18752);
    r3_addr_9 = (r3 + r0);
    r3 = MemoryAlias::FlatRead16(r3_addr_9);
}

loc_inl4_cont_804C2D20:
{
    // end of inlined leaf 0x804C2D20
    MemoryAlias::FlatWrite16((r31 + 42), static_cast<uint16_t>(r3));
    goto loc_804C5EE0;
}

loc_804C5ECC:
{
    r3 = MemoryAlias::FlatRead32((r31 + 4));
    r0 = MemoryAlias::FlatRead32((r31 + 20));
    r3 = (r3 + r0);
    // inline leaf 0x804C2D20 (15 guest instruction(s))
}

loc_inl5_0x804C2D20:
{
}

loc_inl5_0x804C2D24:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_inl5_0x804C2D30;
    }
}

loc_inl5_0x804C2D28:
{
    r3 = 0;
    goto loc_inl5_cont_804C2D20;
}

loc_inl5_0x804C2D30:
{
}

loc_inl5_0x804C2D34:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_inl5_0x804C2D44;
    }
}

loc_inl5_0x804C2D38:
{
    r3 = 65536;
    r3 = (r3 + -156);
    goto loc_inl5_cont_804C2D20;
}

loc_inl5_0x804C2D44:
{
    r0 = (r3 + 904);
    r3 = 0x80620000u;
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_11 & -2);
    r3 = (r3 + -18752);
    r3_addr_11 = (r3 + r0);
    r3 = MemoryAlias::FlatRead16(r3_addr_11);
}

loc_inl5_cont_804C2D20:
{
    // end of inlined leaf 0x804C2D20
    MemoryAlias::FlatWrite16((r31 + 42), static_cast<uint16_t>(r3));
}

loc_804C5EE0:
{
    r0 = MemoryAlias::FlatRead32(r31);
    r0 = (r0 & 2);
}

loc_804C5EE8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804C5EFC;
    }
}

loc_804C5EEC:
{
    r3 = MemoryAlias::FlatRead32((r31 + 24));
    // inline leaf 0x804C2D20 (15 guest instruction(s))
}

loc_inl6_0x804C2D20:
{
}

loc_inl6_0x804C2D24:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_inl6_0x804C2D30;
    }
}

loc_inl6_0x804C2D28:
{
    r3 = 0;
    goto loc_inl6_cont_804C2D20;
}

loc_inl6_0x804C2D30:
{
}

loc_inl6_0x804C2D34:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_inl6_0x804C2D44;
    }
}

loc_inl6_0x804C2D38:
{
    r3 = 65536;
    r3 = (r3 + -156);
    goto loc_inl6_cont_804C2D20;
}

loc_inl6_0x804C2D44:
{
    r0 = (r3 + 904);
    r3 = 0x80620000u;
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_14 & -2);
    r3 = (r3 + -18752);
    r3_addr_14 = (r3 + r0);
    r3 = MemoryAlias::FlatRead16(r3_addr_14);
}

loc_inl6_cont_804C2D20:
{
    // end of inlined leaf 0x804C2D20
    MemoryAlias::FlatWrite16((r31 + 50), static_cast<uint16_t>(r3));
    goto loc_804C5F10;
}

loc_804C5EFC:
{
    r3 = MemoryAlias::FlatRead32((r31 + 8));
    r0 = MemoryAlias::FlatRead32((r31 + 24));
    r3 = (r3 + r0);
    // inline leaf 0x804C2D20 (15 guest instruction(s))
}

loc_inl7_0x804C2D20:
{
}

loc_inl7_0x804C2D24:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_inl7_0x804C2D30;
    }
}

loc_inl7_0x804C2D28:
{
    r3 = 0;
    goto loc_inl7_cont_804C2D20;
}

loc_inl7_0x804C2D30:
{
}

loc_inl7_0x804C2D34:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_inl7_0x804C2D44;
    }
}

loc_inl7_0x804C2D38:
{
    r3 = 65536;
    r3 = (r3 + -156);
    goto loc_inl7_cont_804C2D20;
}

loc_inl7_0x804C2D44:
{
    r0 = (r3 + 904);
    r3 = 0x80620000u;
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_16 & -2);
    r3 = (r3 + -18752);
    r3_addr_16 = (r3 + r0);
    r3 = MemoryAlias::FlatRead16(r3_addr_16);
}

loc_inl7_cont_804C2D20:
{
    // end of inlined leaf 0x804C2D20
    MemoryAlias::FlatWrite16((r31 + 50), static_cast<uint16_t>(r3));
}

loc_804C5F10:
{
    r0 = MemoryAlias::FlatRead32(r31);
    r0 = (r0 & 4);
}

loc_804C5F18:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804C5F2C;
    }
}

loc_804C5F1C:
{
    r3 = MemoryAlias::FlatRead32((r31 + 28));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x804C2D20u) && KnownTranslatedCpuCall<0x804C2D20u>::kAvailable && !KnownTranslatedCpuCall<0x804C2D20u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x804C2D20u>()) {
        const auto state_free_result_804C2D20_34DB = func_804C2D20_statefree_v0(r0, r3, xer);
        r0 = static_cast<uint32_t>(state_free_result_804C2D20_34DB[0]);
        r3 = static_cast<uint32_t>(state_free_result_804C2D20_34DB[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x804C2D20u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r13 = ctx->gpr[13];
        xer = ctx->xer;
    }
    MemoryAlias::FlatWrite16((r31 + 58), static_cast<uint16_t>(r3));
    goto loc_804C5F40;
}

loc_804C5F2C:
{
    r3 = MemoryAlias::FlatRead32((r31 + 12));
    r0 = MemoryAlias::FlatRead32((r31 + 28));
    r3 = (r3 + r0);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x804C2D20u) && KnownTranslatedCpuCall<0x804C2D20u>::kAvailable && !KnownTranslatedCpuCall<0x804C2D20u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x804C2D20u>()) {
        const auto state_free_result_804C2D20_397F = func_804C2D20_statefree_v0(r0, r3, xer);
        r0 = static_cast<uint32_t>(state_free_result_804C2D20_397F[0]);
        r3 = static_cast<uint32_t>(state_free_result_804C2D20_397F[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x804C2D20u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r13 = ctx->gpr[13];
        xer = ctx->xer;
    }
    MemoryAlias::FlatWrite16((r31 + 58), static_cast<uint16_t>(r3));
}

loc_804C5F40:
{
    r0 = MemoryAlias::FlatRead32(r31);
    r0 = (r0 & 8);
}

loc_804C5F48:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804C5F5C;
    }
}

loc_804C5F4C:
{
    r3 = MemoryAlias::FlatRead32((r31 + 32));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x804C2D20u) && KnownTranslatedCpuCall<0x804C2D20u>::kAvailable && !KnownTranslatedCpuCall<0x804C2D20u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x804C2D20u>()) {
        const auto state_free_result_804C2D20_3E8C = func_804C2D20_statefree_v0(r0, r3, xer);
        r0 = static_cast<uint32_t>(state_free_result_804C2D20_3E8C[0]);
        r3 = static_cast<uint32_t>(state_free_result_804C2D20_3E8C[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x804C2D20u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r13 = ctx->gpr[13];
        xer = ctx->xer;
    }
    MemoryAlias::FlatWrite16((r31 + 66), static_cast<uint16_t>(r3));
    goto loc_804C5F70;
}

loc_804C5F5C:
{
    r3 = MemoryAlias::FlatRead32((r31 + 16));
    r0 = MemoryAlias::FlatRead32((r31 + 32));
    r3 = (r3 + r0);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x804C2D20u) && KnownTranslatedCpuCall<0x804C2D20u>::kAvailable && !KnownTranslatedCpuCall<0x804C2D20u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x804C2D20u>()) {
        const auto state_free_result_804C2D20_4330 = func_804C2D20_statefree_v0(r0, r3, xer);
        r0 = static_cast<uint32_t>(state_free_result_804C2D20_4330[0]);
        r3 = static_cast<uint32_t>(state_free_result_804C2D20_4330[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x804C2D20u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r13 = ctx->gpr[13];
        xer = ctx->xer;
    }
    MemoryAlias::FlatWrite16((r31 + 66), static_cast<uint16_t>(r3));
}

loc_804C5F70:
{
    r0 = MemoryAlias::FlatRead32(r31);
    r0 = (r0 & -1073741825);
    r0 = (r0 | -2147483648);
    MemoryAlias::FlatWrite32(r31, r0);
}

loc_804C5F80:
{
    r4 = MemoryAlias::FlatRead16((r31 + 36));
    r3 = (r30 + 260);
    MemoryAlias::FlatWrite16((r30 + 258), static_cast<uint16_t>(r4));
    r0 = 0;
}

loc_804C5F94:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_804C5F9C;
    }
}

loc_804C5F98:
{
    r0 = (r0 | 1);
}

loc_804C5F9C:
{
    r6 = MemoryAlias::FlatRead16((r31 + 36));
    r4 = 954466304;
    r5 = MemoryAlias::FlatRead16((r31 + 38));
    r7 = (r4 + -29127);
    r4 = (r5 - r6);
    r4 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r7)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    r4 = (static_cast<int32_t>(r4) >> 2);
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r5 = (r5_rot_1 & 1);
    r4 = (r4 + r5);
    guest_range_0 = MemoryAlias::ResolveRangeHost(r3, 0, 30u, false, true);
    MemoryAlias::WriteResolved16(guest_range_0, 0u, r3, static_cast<uint16_t>(r4));
    r4 = (r4 & 65535);
}

loc_804C5FC8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_804C5FD4;
    }
}

loc_804C5FCC:
{
    r0 = (r0 | 2);
    r0 = (r0 & 65535);
}

loc_804C5FD4:
{
    r4 = MemoryAlias::FlatRead16((r31 + 40));
    MemoryAlias::WriteResolved16(guest_range_0, 2u, (r3 + 2), static_cast<uint16_t>(r4));
}

loc_804C5FE0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_804C5FEC;
    }
}

loc_804C5FE4:
{
    r0 = (r0 | 4);
    r0 = (r0 & 65535);
}

loc_804C5FEC:
{
    r6 = MemoryAlias::FlatRead16((r31 + 40));
    r4 = 954466304;
    r5 = MemoryAlias::FlatRead16((r31 + 42));
    r7 = (r4 + -29127);
    r4 = (r5 - r6);
    r4 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r7)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    r4 = (static_cast<int32_t>(r4) >> 2);
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r5 = (r5_rot_2 & 1);
    r4 = (r4 + r5);
    MemoryAlias::WriteResolved16(guest_range_0, 4u, (r3 + 4), static_cast<uint16_t>(r4));
    r4 = (r4 & 65535);
}

loc_804C6018:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_804C6024;
    }
}

loc_804C601C:
{
    r0 = (r0 | 8);
    r0 = (r0 & 65535);
}

loc_804C6024:
{
    r4 = MemoryAlias::FlatRead16((r31 + 44));
    MemoryAlias::WriteResolved16(guest_range_0, 6u, (r3 + 6), static_cast<uint16_t>(r4));
}

loc_804C6030:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_804C603C;
    }
}

loc_804C6034:
{
    r0 = (r0 | 16);
    r0 = (r0 & 65535);
}

loc_804C603C:
{
    r6 = MemoryAlias::FlatRead16((r31 + 44));
    r4 = 954466304;
    r5 = MemoryAlias::FlatRead16((r31 + 46));
    r7 = (r4 + -29127);
    r4 = (r5 - r6);
    r4 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r7)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    r4 = (static_cast<int32_t>(r4) >> 2);
    r5_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r5 = (r5_rot_3 & 1);
    r4 = (r4 + r5);
    MemoryAlias::WriteResolved16(guest_range_0, 8u, (r3 + 8), static_cast<uint16_t>(r4));
    r4 = (r4 & 65535);
}

loc_804C6068:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_804C6074;
    }
}

loc_804C606C:
{
    r0 = (r0 | 32);
    r0 = (r0 & 65535);
}

loc_804C6074:
{
    r4 = MemoryAlias::FlatRead16((r31 + 48));
    MemoryAlias::WriteResolved16(guest_range_0, 10u, (r3 + 10), static_cast<uint16_t>(r4));
}

loc_804C6080:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_804C608C;
    }
}

loc_804C6084:
{
    r0 = (r0 | 64);
    r0 = (r0 & 65535);
}

loc_804C608C:
{
    r6 = MemoryAlias::FlatRead16((r31 + 48));
    r4 = 954466304;
    r5 = MemoryAlias::FlatRead16((r31 + 50));
    r7 = (r4 + -29127);
    r4 = (r5 - r6);
    r4 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r7)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    r4 = (static_cast<int32_t>(r4) >> 2);
    r5_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r5 = (r5_rot_4 & 1);
    r4 = (r4 + r5);
    MemoryAlias::WriteResolved16(guest_range_0, 12u, (r3 + 12), static_cast<uint16_t>(r4));
    r4 = (r4 & 65535);
}

loc_804C60B8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_804C60C4;
    }
}

loc_804C60BC:
{
    r0 = (r0 | 128);
    r0 = (r0 & 65535);
}

loc_804C60C4:
{
    r4 = MemoryAlias::FlatRead16((r31 + 52));
    MemoryAlias::WriteResolved16(guest_range_0, 14u, (r3 + 14), static_cast<uint16_t>(r4));
}

loc_804C60D0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_804C60DC;
    }
}

loc_804C60D4:
{
    r0 = (r0 | 256);
    r0 = (r0 & 65535);
}

loc_804C60DC:
{
    r6 = MemoryAlias::FlatRead16((r31 + 52));
    r4 = 954466304;
    r5 = MemoryAlias::FlatRead16((r31 + 54));
    r7 = (r4 + -29127);
    r4 = (r5 - r6);
    r4 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r7)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    r4 = (static_cast<int32_t>(r4) >> 2);
    r5_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r5 = (r5_rot_5 & 1);
    r4 = (r4 + r5);
    MemoryAlias::WriteResolved16(guest_range_0, 16u, (r3 + 16), static_cast<uint16_t>(r4));
    r4 = (r4 & 65535);
}

loc_804C6108:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_804C6114;
    }
}

loc_804C610C:
{
    r0 = (r0 | 512);
    r0 = (r0 & 65535);
}

loc_804C6114:
{
    r4 = MemoryAlias::FlatRead16((r31 + 56));
    MemoryAlias::WriteResolved16(guest_range_0, 18u, (r3 + 18), static_cast<uint16_t>(r4));
}

loc_804C6120:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_804C612C;
    }
}

loc_804C6124:
{
    r0 = (r0 | 1024);
    r0 = (r0 & 65535);
}

loc_804C612C:
{
    r6 = MemoryAlias::FlatRead16((r31 + 56));
    r4 = 954466304;
    r5 = MemoryAlias::FlatRead16((r31 + 58));
    r7 = (r4 + -29127);
    r4 = (r5 - r6);
    r4 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r7)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    r4 = (static_cast<int32_t>(r4) >> 2);
    r5_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r5 = (r5_rot_6 & 1);
    r4 = (r4 + r5);
    MemoryAlias::WriteResolved16(guest_range_0, 20u, (r3 + 20), static_cast<uint16_t>(r4));
    r4 = (r4 & 65535);
}

loc_804C6158:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_804C6164;
    }
}

loc_804C615C:
{
    r0 = (r0 | 2048);
    r0 = (r0 & 65535);
}

loc_804C6164:
{
    r4 = MemoryAlias::FlatRead16((r31 + 60));
    MemoryAlias::WriteResolved16(guest_range_0, 22u, (r3 + 22), static_cast<uint16_t>(r4));
}

loc_804C6170:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_804C617C;
    }
}

loc_804C6174:
{
    r0 = (r0 | 4096);
    r0 = (r0 & 65535);
}

loc_804C617C:
{
    r6 = MemoryAlias::FlatRead16((r31 + 60));
    r4 = 954466304;
    r5 = MemoryAlias::FlatRead16((r31 + 62));
    r7 = (r4 + -29127);
    r4 = (r5 - r6);
    r4 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r7)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    r4 = (static_cast<int32_t>(r4) >> 2);
    r5_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r5 = (r5_rot_7 & 1);
    r4 = (r4 + r5);
    MemoryAlias::WriteResolved16(guest_range_0, 24u, (r3 + 24), static_cast<uint16_t>(r4));
    r4 = (r4 & 65535);
}

loc_804C61A8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_804C61B4;
    }
}

loc_804C61AC:
{
    r0 = (r0 | 8192);
    r0 = (r0 & 65535);
}

loc_804C61B4:
{
    r4 = MemoryAlias::FlatRead16((r31 + 64));
    MemoryAlias::WriteResolved16(guest_range_0, 26u, (r3 + 26), static_cast<uint16_t>(r4));
}

loc_804C61C0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_804C61CC;
    }
}

loc_804C61C4:
{
    r0 = (r0 | 16384);
    r0 = (r0 & 65535);
}

loc_804C61CC:
{
    r6 = MemoryAlias::FlatRead16((r31 + 64));
    r4 = 954466304;
    r5 = MemoryAlias::FlatRead16((r31 + 66));
    r7 = (r4 + -29127);
    r4 = (r5 - r6);
    r4 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r7)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    r4 = (static_cast<int32_t>(r4) >> 2);
    r5_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r5 = (r5_rot_8 & 1);
    r4 = (r4 + r5);
    MemoryAlias::WriteResolved16(guest_range_0, 28u, (r3 + 28), static_cast<uint16_t>(r4));
    r3 = (r4 & 65535);
}

loc_804C61F8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804C6204;
    }
}

loc_804C61FC:
{
    r0 = (r0 | 32768);
    r0 = (r0 & 65535);
}

loc_804C6204:
{
    r3 = MemoryAlias::FlatRead32((r30 + 28));
    MemoryAlias::FlatWrite16((r30 + 256), static_cast<uint16_t>(r0));
    r0 = (r3 | 50331648);
    MemoryAlias::FlatWrite32((r30 + 28), r0);
}

loc_804C6214:
{
    r0 = MemoryAlias::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804C5DF0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804C5DF0_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000020FB gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804C5DF0 func_804C5DF0 preserves=true fpr_mask=0x00000000
