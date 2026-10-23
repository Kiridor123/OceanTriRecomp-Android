#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800CFAF4(CpuContext* ctx);
extern "C" uint64_t func_800CFAF4_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80382FF8(CpuContext* ctx);
extern "C" uint32_t func_80382FF8_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" MkwStateFreeResult2 func_80382FF8_statefree(uint32_t, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_80382FF8_statefree_v0(uint32_t, uint32_t);

extern "C" uint32_t func_803A1284_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t xer = ctx->xer;

    goto loc_803A1284;

loc_803A1284:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = r3;
    r3 = 3;
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
    r3 = 3;
    if constexpr (KnownRegArgsCpuCall<0x800CFAF4u>(&func_800CFAF4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800CFAF4_99E = func_800CFAF4_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_800CFAF4_99E);
        r4 = static_cast<uint32_t>(regargs_result_800CFAF4_99E >> 32);
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
    r30 = r3;
    r28 = 0;
    r31 = (r31 & 255);
    goto loc_803A130C;
}

loc_803A12C8:
{
    r0 = MemoryInline::FlatRead8(r30);
}

loc_803A12D0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803A1304;
    }
}

loc_803A12D4:
{
    r0 = MemoryInline::FlatRead8((r30 + 481));
}

loc_803A12DC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r31))) {
        goto loc_803A1304;
    }
}

loc_803A12E0:
{
    r0 = MemoryInline::FlatRead8((r30 + 3));
}

loc_803A12E8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(19))) {
        goto loc_803A1304;
    }
}

loc_803A12EC:
{
    r3 = r30;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80382FF8u) && KnownTranslatedCpuCall<0x80382FF8u>::kAvailable && !KnownTranslatedCpuCall<0x80382FF8u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80382FF8u>()) {
        const auto state_free_result_80382FF8_F4A = func_80382FF8_statefree_v0(r3, xer);
        r0 = static_cast<uint32_t>(state_free_result_80382FF8_F4A[0]);
        r3 = static_cast<uint32_t>(state_free_result_80382FF8_F4A[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80382FF8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        xer = ctx->xer;
    }
}

loc_803A12F8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803A1304;
    }
}

loc_803A12FC:
{
    r3 = 1;
    goto loc_803A1318;
}

loc_803A1304:
{
    r28 = (r28 + 1);
    r30 = (r30 + 2840);
}

loc_803A130C:
{
}

loc_803A1310:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(r29))) {
        goto loc_803A12C8;
    }
}

loc_803A1314:
{
    r3 = 0;
}

loc_803A1318:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    return r3;
}

}

extern "C" void func_803A1284(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_803A1284_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803A1284 func_803A1284 preserves=true fpr_mask=0x00000000
