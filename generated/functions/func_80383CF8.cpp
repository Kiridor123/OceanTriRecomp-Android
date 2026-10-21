#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802A0408(CpuContext* ctx);
extern "C" uint32_t func_802A0408_ra10_0_10_0(CpuContext*, uint32_t);
extern "C" void func_8038440C(CpuContext* ctx);
extern "C" uint32_t func_8038440C_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_8039292C(CpuContext* ctx);
extern "C" uint32_t func_8039292C_ra0_0_8_0(CpuContext*);

extern "C" MkwStateFreeResult2 func_8038440C_statefree(uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_8039292C_statefree();
extern "C" MkwStateFreeResult2 func_8038440C_statefree_v0(uint32_t, uint32_t);

extern "C" uint64_t func_80383CF8_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r30_rot_0 = 0;
    uint32_t r30_rot_1 = 0;
    uint32_t r30_rot_2 = 0;
    uint32_t r30_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x80383CF8u);
    goto loc_80383CF8;

loc_80383CF8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = 255;
    // inline leaf 0x800CF26C (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 36));
    // end of inlined leaf 0x800CF26C
    r0 = (r3 & 255);
}

loc_80383D1C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80383D2C;
    }
}

loc_80383D20:
{
}

loc_80383D24:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80383DA8;
    }
}

loc_80383D28:
{
    goto loc_80383E1C;
}

loc_80383D2C:
{
    r30 = 2;
    // inline leaf 0x803C86C4 (4 guest instruction(s))
    r3 = 0x806D0000u;
    r3 = (r3 + 20424);
    r3 = MemoryInline::FlatRead8((r3 + 256));
    // end of inlined leaf 0x803C86C4
    r0 = (r3 & 255);
}

loc_80383D3C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80383D44;
    }
}

loc_80383D40:
{
    r30 = 1;
}

loc_80383D44:
{
    r3 = 2;
    // inline leaf 0x800CFAF4 (16 guest instruction(s))
}

loc_inl2_0x800CFAF4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl2_0x800CFB04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl2_0x800CFB10;
    }
}

loc_inl2_0x800CFB08:
{
    r3 = 0;
    goto loc_inl2_cont_800CFAF4;
}

loc_inl2_0x800CFB10:
{
    r0 = (r3 & 255);
}

loc_inl2_0x800CFB18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl2_0x800CFB24;
    }
}

loc_inl2_0x800CFB1C:
{
    r3 = 0;
    goto loc_inl2_cont_800CFAF4;
}

loc_inl2_0x800CFB24:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl2_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    r31 = r3;
}

loc_80383D54:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80383D60;
    }
}

loc_80383D58:
{
    r3 = 0;
    goto loc_80383E20;
}

loc_80383D60:
{
    // inline leaf 0x800CF3E8 (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 39));
    // end of inlined leaf 0x800CF3E8
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r0 = (r0 * 2848);
    r3 = (r31 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 1468));
}

loc_80383D78:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80383D80;
    }
}

loc_80383D7C:
{
    r30 = 1;
}

loc_80383D80:
{
    ctx->lr = 0x80383D84u;
    if constexpr (KnownRegArgsCpuCall<0x802A0408u>(&func_802A0408)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->cr = cr;
        const auto regargs_result_802A0408_1090 = func_802A0408_ra10_0_10_0(ctx, r4);
        r4 = regargs_result_802A0408_1090;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x802A0408u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_80383D88:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80383E1C;
    }
}

loc_80383D8C:
{
    // inline leaf 0x8038440C (12 guest instruction(s))
}

loc_inl4_0x8038440C:
{
    r3 = 0x806C0000u;
    r3 = (r3 + 18584);
    r0 = MemoryInline::FlatRead8((r3 + 9));
}

loc_inl4_0x8038441C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl4_0x80384434;
    }
}

loc_inl4_0x80384420:
{
    r0 = MemoryInline::FlatRead8((r3 + 7));
}

loc_inl4_0x80384428:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_inl4_0x80384434;
    }
}

loc_inl4_0x8038442C:
{
    r3 = 1;
    goto loc_inl4_cont_8038440C;
}

loc_inl4_0x80384434:
{
    r3 = 0;
}

loc_inl4_cont_8038440C:
{
    // end of inlined leaf 0x8038440C
}

loc_80383D94:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80383DA0;
    }
}

loc_80383D98:
{
    r30 = 0;
    goto loc_80383E1C;
}

loc_80383DA0:
{
    r30 = 1;
    goto loc_80383E1C;
}

loc_80383DA8:
{
    r30 = 2;
    r3 = 0x806B0000u;
    r0 = MemoryInline::FlatRead8((r3 + -12348));
}

loc_80383DB8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80383DFC;
    }
}

loc_80383DBC:
{
}

loc_80383DC0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(36))) {
        goto loc_80383DFC;
    }
}

loc_80383DC4:
{
}

loc_80383DC8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(10))) {
        goto loc_80383DFC;
    }
}

loc_80383DCC:
{
}

loc_80383DD0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(25))) {
        goto loc_80383DFC;
    }
}

loc_80383DD4:
{
}

loc_80383DD8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(16))) {
        goto loc_80383DFC;
    }
}

loc_80383DDC:
{
}

loc_80383DE0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(17))) {
        goto loc_80383DF8;
    }
}

loc_80383DE4:
{
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8039292Cu) && KnownTranslatedCpuCall<0x8039292Cu>::kAvailable && !KnownTranslatedCpuCall<0x8039292Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8039292Cu>()) {
        const auto state_free_result_8039292C_1B59 = func_8039292C_statefree();
        r0 = static_cast<uint32_t>(state_free_result_8039292C_1B59[0]);
        r3 = static_cast<uint32_t>(state_free_result_8039292C_1B59[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x8039292Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_80383DEC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80383DFC;
    }
}

loc_80383DF0:
{
    r30 = 1;
    goto loc_80383DFC;
}

loc_80383DF8:
{
    r30 = 1;
}

loc_80383DFC:
{
    ctx->lr = 0x80383E00u;
    if constexpr (KnownRegArgsCpuCall<0x802A0408u>(&func_802A0408)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->cr = cr;
        const auto regargs_result_802A0408_1F2F = func_802A0408_ra10_0_10_0(ctx, r4);
        r4 = regargs_result_802A0408_1F2F;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x802A0408u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_80383E04:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80383E1C;
    }
}

loc_80383E08:
{
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8038440Cu) && KnownTranslatedCpuCall<0x8038440Cu>::kAvailable && !KnownTranslatedCpuCall<0x8038440Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8038440Cu>()) {
        const auto state_free_result_8038440C_22CE = func_8038440C_statefree_v0(cr, xer);
        r3 = static_cast<uint32_t>(state_free_result_8038440C_22CE[0]);
        cr = static_cast<uint32_t>(state_free_result_8038440C_22CE[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x8038440Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r4 = (1 - r3);
    r0 = (r3 + -1);
    r0 = (r4 | r0);
    r30_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r30 = (r30_rot_1 & 1);
}

loc_80383E1C:
{
    r3 = r30;
}

loc_80383E20:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80383CF8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80383CF8_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80383CF8 func_80383CF8 preserves=true fpr_mask=0x00000000
