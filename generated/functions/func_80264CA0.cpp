#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80264BB0(CpuContext* ctx);
extern "C" uint32_t func_80264BB0_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_80274B1C(CpuContext* ctx);
extern "C" uint64_t func_80274B1C_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" MkwStateFreeResult2 func_80264BB0_statefree(uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80264CA0_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
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
    uint32_t r0_subfc_sub_0 = 0;
    uint32_t r0_subfc_sub_1 = 0;
    uint32_t r0_subfc_sub_2 = 0;
    uint32_t r3_adde_right_0 = 0;
    uint32_t r3_adde_right_1 = 0;
    uint32_t r3_adde_right_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_ca_0 = 0;
    uint32_t r3_ca_1 = 0;
    uint32_t r3_ca_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x80264CA0u);
    goto loc_80264CA0;

loc_80264CA0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r28 = r4;
    r31 = 0;
    r30 = 0;
    r0 = MemoryInline::FlatRead16((r3 + 906));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80264CD4:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_80264CE0;
    }
}

loc_80264CD8:
{
    r3 = 0;
    goto loc_80264EE8;
}

loc_80264CE0:
{
    r4 = MemoryInline::FlatRead8((r3 + 927));
    r0 = (r4 + -27);
}

loc_80264CEC:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(4))) {
        goto loc_80264CF8;
    }
}

loc_80264CF0:
{
    r3 = 0;
    goto loc_80264EE8;
}

loc_80264CF8:
{
    r0 = MemoryInline::FlatRead8((r3 + 928));
    r0 = (r0 & 32);
}

loc_80264D04:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80264D20;
    }
}

loc_80264D08:
{
    r4 = 37;
    ctx->lr = 0x80264D10u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80264D14:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80264D20;
    }
}

loc_80264D18:
{
    r3 = 0;
    goto loc_80264EE8;
}

loc_80264D20:
{
    r3 = r29;
    ctx->lr = 0x80264D28u;
    if constexpr (KnownRegArgsCpuCall<0x80274B1Cu>(&func_80274B1C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->xer = xer;
        const auto regargs_result_80274B1C_D1F = func_80274B1C_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80274B1C_D1F);
        r4 = static_cast<uint32_t>(regargs_result_80274B1C_D1F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->xer = xer;
        InvokeDirectCpu<0x80274B1Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_80264D2C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80264D38;
    }
}

loc_80264D30:
{
    r3 = 0;
    goto loc_80264EE8;
}

loc_80264D38:
{
    r3 = r29;
    r4 = 150;
    // inline leaf 0x802762B8 (7 guest instruction(s))
    r5 = MemoryInline::FlatRead16((r3 + 888));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    r4 = (static_cast<int32_t>(r5) >> 31);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    r0_subfc_sub_1 = r0;
    r0 = (r5 - r0_subfc_sub_1);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r0_subfc_sub_1) ? 1u : 0u) << 29);
    r3_adde_right_1 = r3;
    r3_ca_1 = (xer >> 29) & 1u;
    r3 = (r4 + r3_adde_right_1);
    r3 = (r3 + r3_ca_1);
    // end of inlined leaf 0x802762B8
}

loc_80264D48:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80264D54;
    }
}

loc_80264D4C:
{
    r3 = 0;
    goto loc_80264EE8;
}

loc_80264D54:
{
    r0 = MemoryInline::FlatRead8((r29 + 928));
    r0 = (r0 & 64);
}

loc_80264D60:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80264DB0;
    }
}

loc_80264D64:
{
    r3 = MemoryInline::FlatRead8((r29 + 2));
    r0 = (r3 + -4);
}

loc_80264D70:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_80264D94;
    }
}

loc_80264D74:
{
}

loc_80264D78:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_80264D94;
    }
}

loc_80264D7C:
{
    r0 = (r28 + 29126);
    r0 = (r0 & 65535);
}

loc_80264D88:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(25484))) {
        goto loc_80264DB0;
    }
}

loc_80264D8C:
{
    r3 = 0;
    goto loc_80264EE8;
}

loc_80264D94:
{
    r3 = (r28 + 65536);
    r0 = (r3 + -3641);
    r0 = (r0 & 65535);
}

loc_80264DA4:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(25486))) {
        goto loc_80264DB0;
    }
}

loc_80264DA8:
{
    r3 = 0;
    goto loc_80264EE8;
}

loc_80264DB0:
{
    r3 = r29;
    r4 = 16;
    // inline leaf 0x8026FEFC (10 guest instruction(s))
}

loc_inl1_0x8026FEFC:
{
    r0 = (r4 & -2147483648);
}

loc_inl1_0x8026FF04:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x8026FF14;
    }
}

loc_inl1_0x8026FF08:
{
    r0 = MemoryInline::FlatRead32((r3 + 860));
    r3 = (r0 & r4);
    goto loc_inl1_cont_8026FEFC;
}

loc_inl1_0x8026FF14:
{
    r3 = MemoryInline::FlatRead32((r3 + 864));
    r0 = (r4 & 2147483647);
    r3 = (r3 & r0);
}

loc_inl1_cont_8026FEFC:
{
    // end of inlined leaf 0x8026FEFC
}

loc_80264DC0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80264DC8;
    }
}

loc_80264DC4:
{
    r31 = 1;
}

loc_80264DC8:
{
    r3 = r29;
    r4 = 38;
    ctx->lr = 0x80264DD4u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80264DD8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80264DE0;
    }
}

loc_80264DDC:
{
    r30 = 1;
}

loc_80264DE0:
{
    r3 = r29;
    ctx->gpr[1] = r1;
    ctx->xer = xer;
    if (MkwStateFreeAbiEnabled(0x80264BB0u) && KnownTranslatedCpuCall<0x80264BB0u>::kAvailable && !KnownTranslatedCpuCall<0x80264BB0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80264BB0u>()) {
        const auto state_free_result_80264BB0_1DA7 = func_80264BB0_statefree(r3, cr, xer);
        r0 = static_cast<uint32_t>(state_free_result_80264BB0_1DA7[0]);
        r3 = static_cast<uint32_t>(state_free_result_80264BB0_1DA7[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->xer = xer;
        InvokeDirectCpu<0x80264BB0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_80264DEC:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_80264EDC;
    }
}

loc_80264DF0:
{
    r4 = MemoryInline::FlatRead8((r29 + 2));
    r0 = (r4 + -4);
}

loc_80264DFC:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(2))) {
        goto loc_80264E2C;
    }
}

loc_80264E00:
{
    r5 = MemoryInline::FlatRead32((r29 + 792));
    r3 = 0x805D0000u;
    r0 = (r3 + -16300);
}

loc_80264E10:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(r0))) {
        goto loc_80264E24;
    }
}

loc_80264E14:
{
    r3 = 0x805D0000u;
    r0 = (r3 + -15836);
}

loc_80264E20:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r0))) {
        goto loc_80264E2C;
    }
}

loc_80264E24:
{
    r3 = 1;
    goto loc_80264EE8;
}

loc_80264E2C:
{
    r5 = MemoryInline::FlatRead32((r29 + 792));
}

loc_80264E34:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80264EDC;
    }
}

loc_80264E38:
{
}

loc_80264E3C:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_80264EDC;
    }
}

loc_80264E40:
{
    r3 = 0x805C0000u;
    r3 = (r3 + 24920);
    goto loc_80264ED0;
}

loc_80264E4C:
{
    r0 = (r6 & 128);
}

loc_80264E54:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80264E98;
    }
}

loc_80264E58:
{
    r0 = MemoryInline::FlatRead16((r5 + 2));
}

loc_80264E60:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_80264E6C;
    }
}

loc_80264E64:
{
}

loc_80264E68:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(4))) {
        goto loc_80264E98;
    }
}

loc_80264E6C:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3_addr_2 = (r3 + r0);
    r7 = MemoryInline::FlatRead32(r3_addr_2);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r0 = (r0 - r4);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & -2);
    r7 = (r7 + r0);
    r0 = MemoryInline::FlatRead16(r7);
    r6 = (r0 & 255);
    r0 = MemoryInline::FlatRead16((r7 + 2));
    r7 = (r0 & 255);
    goto loc_80264E9C;
}

loc_80264E98:
{
    r7 = MemoryInline::FlatRead16((r5 + 2));
}

loc_80264E9C:
{
    r0 = (r6 & 255);
    r0 = (r0 & 127);
}

loc_80264EA8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(5))) {
        goto loc_80264ECC;
    }
}

loc_80264EAC:
{
    r0 = (r7 & 65535);
}

loc_80264EB4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80264EC8;
    }
}

loc_80264EB8:
{
}

loc_80264EBC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_80264EC8;
    }
}

loc_80264EC0:
{
}

loc_80264EC4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(12))) {
        goto loc_80264ECC;
    }
}

loc_80264EC8:
{
    r31 = 1;
}

loc_80264ECC:
{
    r5 = (r5 + 22);
}

loc_80264ED0:
{
    r6 = MemoryInline::FlatRead8(r5);
}

loc_80264ED8:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(255))) {
        goto loc_80264E4C;
    }
}

loc_80264EDC:
{
    r0 = (0 - r31);
    r0 = (r0 | r31);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
}

loc_80264EE8:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->xer = xer;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80264CA0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80264CA0_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000000FB gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80264CA0 func_80264CA0 preserves=true fpr_mask=0x00000000
