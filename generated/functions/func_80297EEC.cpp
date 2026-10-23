#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8005000C(CpuContext* ctx);
extern "C" void func_8005000C_ra8_e_0_0(CpuContext*, uint32_t, double, double, double);
extern "C" void func_800CFAF4(CpuContext* ctx);
extern "C" uint64_t func_800CFAF4_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_800CFB34(CpuContext* ctx);
extern "C" uint64_t func_800CFB34_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" void func_8005000C_statefree(uint32_t, PPC_FPR, PPC_FPR, PPC_FPR);

extern "C" uint64_t func_80297EEC_ra18_e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, double arg_f1, double arg_f2, double arg_f3)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;

    goto loc_80297EEC;

loc_80297EEC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r3 = 2;
    // inline leaf 0x800CFB34 (15 guest instruction(s))
}

loc_inl0_0x800CFB34:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl0_0x800CFB44:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x800CFB50;
    }
}

loc_inl0_0x800CFB48:
{
    r3 = 0;
    goto loc_inl0_cont_800CFB34;
}

loc_inl0_0x800CFB50:
{
    r0 = (r3 & 255);
}

loc_inl0_0x800CFB58:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl0_0x800CFB64;
    }
}

loc_inl0_0x800CFB5C:
{
    r3 = 0;
    goto loc_inl0_cont_800CFB34;
}

loc_inl0_0x800CFB64:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r4_addr_1 = (r4 + r0);
    r3 = MemoryInline::FlatRead16(r4_addr_1);
}

loc_inl0_cont_800CFB34:
{
    // end of inlined leaf 0x800CFB34
    r29 = (r3 & 65535);
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
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl1_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    r30 = r3;
    r28 = 0;
    r31 = 0;
    goto loc_80297F58;
}

loc_80297F2C:
{
    r0 = MemoryInline::FlatRead8(r30);
}

loc_80297F34:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80297F50;
    }
}

loc_80297F38:
{
    r3 = (r30 + 1396);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -14112));
    f2.d = f1.d;
    f3.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8005000Cu) && KnownTranslatedCpuCall<0x8005000Cu>::kAvailable && !KnownTranslatedCpuCall<0x8005000Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8005000Cu>()) {
        func_8005000C_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x8005000Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    MemoryInline::FlatWrite8((r30 + 1410), static_cast<uint8_t>(r31));
}

loc_80297F50:
{
    r28 = (r28 + 1);
    r30 = (r30 + 2848);
}

loc_80297F58:
{
}

loc_80297F5C:
{
    if ((static_cast<uint32_t>(r28) < static_cast<uint32_t>(r29))) {
        goto loc_80297F2C;
    }
}

loc_80297F60:
{
    r3 = 3;
    if constexpr (KnownRegArgsCpuCall<0x800CFB34u>(&func_800CFB34)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800CFB34_142B = func_800CFB34_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_800CFB34_142B);
        r4 = static_cast<uint32_t>(regargs_result_800CFB34_142B >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800CFB34u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r30 = (r3 & 65535);
    r3 = 3;
    if constexpr (KnownRegArgsCpuCall<0x800CFAF4u>(&func_800CFAF4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800CFAF4_16CE = func_800CFAF4_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_800CFAF4_16CE);
        r4 = static_cast<uint32_t>(regargs_result_800CFAF4_16CE >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800CFAF4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r29 = r3;
    r28 = 0;
    r31 = 0;
    goto loc_80297FB0;
}

loc_80297F84:
{
    r0 = MemoryInline::FlatRead8(r29);
}

loc_80297F8C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80297FA8;
    }
}

loc_80297F90:
{
    r3 = (r29 + 2228);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -14112));
    f2.d = f1.d;
    f3.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8005000Cu) && KnownTranslatedCpuCall<0x8005000Cu>::kAvailable && !KnownTranslatedCpuCall<0x8005000Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8005000Cu>()) {
        func_8005000C_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x8005000Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    MemoryInline::FlatWrite8((r29 + 2240), static_cast<uint8_t>(r31));
}

loc_80297FA8:
{
    r28 = (r28 + 1);
    r29 = (r29 + 2840);
}

loc_80297FB0:
{
}

loc_80297FB4:
{
    if ((static_cast<uint32_t>(r28) < static_cast<uint32_t>(r30))) {
        goto loc_80297F84;
    }
}

loc_80297FB8:
{
    // inline leaf 0x802D2844 (3 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -2080);
    // end of inlined leaf 0x802D2844
    r31 = r3;
    r0 = MemoryInline::FlatRead8(r3);
}

loc_80297FC8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80297FE8;
    }
}

loc_80297FCC:
{
    r3 = (r3 + 1136);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -14112));
    f2.d = f1.d;
    f3.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8005000Cu) && KnownTranslatedCpuCall<0x8005000Cu>::kAvailable && !KnownTranslatedCpuCall<0x8005000Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8005000Cu>()) {
        func_8005000C_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x8005000Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    r0 = 0;
    MemoryInline::FlatWriteRam8((r31 + 1150), static_cast<uint8_t>(r0));
}

loc_80297FE8:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80297EEC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80297EEC_ra18_e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001F gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x0000000E fpr_write=0x0000000E fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80297EEC func_80297EEC preserves=true fpr_mask=0x00000000
