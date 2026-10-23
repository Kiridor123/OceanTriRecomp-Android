#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8005BDA0(CpuContext* ctx);
extern "C" uint64_t func_8005BDA0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_8005B83C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8005B83C;

loc_8005B83C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = MemoryInline::FlatRead32((r13 + -17736));
    r31 = 0;
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
}

loc_8005B85C:
{
    r3 = (r1 + 8);
    if constexpr (KnownRegArgsCpuCall<0x8005BDA0u>(&func_8005BDA0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8005BDA0_509 = func_8005BDA0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8005BDA0_509);
        r4 = static_cast<uint32_t>(regargs_result_8005BDA0_509 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8005BDA0u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_8005B868:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8005B8BC;
    }
}

loc_8005B86C:
{
}

loc_8005B870:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(10))) {
        goto loc_8005B85C;
    }
}

loc_8005B874:
{
    r0 = MemoryInline::FlatRead32((r30 + 48));
}

loc_8005B87C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8005B8A0;
    }
}

loc_8005B880:
{
}

loc_8005B884:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(15))) {
        goto loc_8005B890;
    }
}

loc_8005B888:
{
    r31 = (r31 + 2);
    goto loc_8005B85C;
}

loc_8005B890:
{
}

loc_8005B894:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(127))) {
        goto loc_8005B8A0;
    }
}

loc_8005B898:
{
    r31 = (r31 + 1);
    goto loc_8005B85C;
}

loc_8005B8A0:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8005BF84u>(ctx);
    r3 = ctx->gpr[3];
    // inline leaf 0x8005C010 (12 guest instruction(s))
}

loc_inl0_0x8005C010:
{
    r4 = MemoryInline::FlatRead32((r13 + -17736));
    r0 = MemoryInline::FlatRead32((r4 + 28));
}

loc_inl0_0x8005C01C:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_inl0_0x8005C028;
    }
}

loc_inl0_0x8005C020:
{
    r3 = 1;
    goto loc_inl0_cont_8005C010;
}

loc_inl0_0x8005C028:
{
    r4 = 0x80580000u;
    r4 = (r4 + 2072);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead16((r3 + 2));
}

loc_inl0_cont_8005C010:
{
    // end of inlined leaf 0x8005C010
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r3));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_2 & 134217727);
    r0 = (r3 + 1);
    r31 = (r31 + r0);
    goto loc_8005B85C;
}

loc_8005B8BC:
{
    r3 = r31;
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000020FB gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8005B83C func_8005B83C preserves=true fpr_mask=0x00000000
