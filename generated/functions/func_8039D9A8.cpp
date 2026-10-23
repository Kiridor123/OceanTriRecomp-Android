#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80396F38(CpuContext* ctx);
extern "C" uint32_t func_80396F38_ra0_0_8_0(CpuContext*);
extern "C" void func_80396F68(CpuContext* ctx);
extern "C" uint32_t func_80396F68_ra0_0_8_0(CpuContext*);

extern "C" uint64_t func_8039D9A8_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r4_rot_6 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8039D9A8;

loc_8039D9A8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r30 = 0;
    r5 = 0;
    r0 = (r4 & 255);
}

loc_8039D9D4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8039D9EC;
    }
}

loc_8039D9D8:
{
}

loc_8039D9DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8039D9F4;
    }
}

loc_8039D9E0:
{
}

loc_8039D9E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(8))) {
        goto loc_8039DA18;
    }
}

loc_8039D9E8:
{
    goto loc_8039DB40;
}

loc_8039D9EC:
{
    r3 = 0;
    goto loc_8039DB44;
}

loc_8039D9F4:
{
    ctx->lr = 0x8039D9F8u;
    if constexpr (KnownRegArgsCpuCall<0x80396F38u>(&func_80396F38)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80396F38_7A4 = func_80396F38_ra0_0_8_0(ctx);
        r3 = regargs_result_80396F38_7A4;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x80396F38u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_8039D9FC:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_8039DA10;
    }
}

loc_8039DA00:
{
    r3 = r29;
    ctx->lr = 0x8039DA08u;
    if constexpr (KnownRegArgsCpuCall<0x80396F68u>(&func_80396F68)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80396F68_A75 = func_80396F68_ra0_0_8_0(ctx);
        r3 = regargs_result_80396F68_A75;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x80396F68u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_8039DA0C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8039DB40;
    }
}

loc_8039DA10:
{
    r3 = 0;
    goto loc_8039DB44;
}

loc_8039DA18:
{
    r31 = 0;
    goto loc_8039DB08;
}

loc_8039DA20:
{
    r3 = r31;
    // inline leaf 0x8004D1B0 (12 guest instruction(s))
}

loc_inl0_0x8004D1B0:
{
}

loc_inl0_0x8004D1B4:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_inl0_0x8004D1C0;
    }
}

loc_inl0_0x8004D1B8:
{
    r3 = 0;
    goto loc_inl0_cont_8004D1B0;
}

loc_inl0_0x8004D1C0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(2));
}

loc_inl0_0x8004D1C4:
{
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r4 = (r4_rot_2 & -256);
    r3 = 0x80670000u;
    r0 = (r3 + -13664);
    r3 = (r0 + r4);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x8004D1D8:
{
    r3 = 0;
    goto loc_inl0_cont_8004D1B0;
}

loc_inl0_return:
{
}

loc_inl0_cont_8004D1B0:
{
    // end of inlined leaf 0x8004D1B0
    r0 = MemoryInline::FlatRead16((r3 + 188));
    r30 = (r30 | r0);
    r5 = 0;
    r0 = MemoryInline::FlatRead32((r3 + 108));
}

loc_8039DA3C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8039DA4C;
    }
}

loc_8039DA40:
{
    r0 = MemoryInline::FlatRead32((r3 + 148));
}

loc_8039DA48:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8039DA50;
    }
}

loc_8039DA4C:
{
    r5 = 1;
}

loc_8039DA50:
{
    r0 = MemoryInline::FlatRead32((r3 + 112));
}

loc_8039DA58:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8039DA68;
    }
}

loc_8039DA5C:
{
    r0 = MemoryInline::FlatRead32((r3 + 152));
}

loc_8039DA64:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8039DA6C;
    }
}

loc_8039DA68:
{
    r5 = (r5 + 1);
}

loc_8039DA6C:
{
    r0 = MemoryInline::FlatRead32((r3 + 116));
}

loc_8039DA74:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8039DA84;
    }
}

loc_8039DA78:
{
    r0 = MemoryInline::FlatRead32((r3 + 156));
}

loc_8039DA80:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8039DA88;
    }
}

loc_8039DA84:
{
    r5 = (r5 + 1);
}

loc_8039DA88:
{
    r0 = MemoryInline::FlatRead32((r3 + 120));
}

loc_8039DA90:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8039DAA0;
    }
}

loc_8039DA94:
{
    r0 = MemoryInline::FlatRead32((r3 + 160));
}

loc_8039DA9C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8039DAA4;
    }
}

loc_8039DAA0:
{
    r5 = (r5 + 1);
}

loc_8039DAA4:
{
    r0 = MemoryInline::FlatRead32((r3 + 124));
}

loc_8039DAAC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8039DABC;
    }
}

loc_8039DAB0:
{
    r0 = MemoryInline::FlatRead32((r3 + 164));
}

loc_8039DAB8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8039DAC0;
    }
}

loc_8039DABC:
{
    r5 = (r5 + 1);
}

loc_8039DAC0:
{
    r0 = MemoryInline::FlatRead32((r3 + 128));
}

loc_8039DAC8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8039DAD8;
    }
}

loc_8039DACC:
{
    r0 = MemoryInline::FlatRead32((r3 + 168));
}

loc_8039DAD4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8039DADC;
    }
}

loc_8039DAD8:
{
    r5 = (r5 + 1);
}

loc_8039DADC:
{
    r0 = MemoryInline::FlatRead32((r3 + 132));
}

loc_8039DAE4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8039DAF4;
    }
}

loc_8039DAE8:
{
    r0 = MemoryInline::FlatRead32((r3 + 172));
}

loc_8039DAF0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8039DAF8;
    }
}

loc_8039DAF4:
{
    r5 = (r5 + 1);
}

loc_8039DAF8:
{
    r0 = (r5 & 255);
}

loc_8039DB00:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(7))) {
        goto loc_8039DB14;
    }
}

loc_8039DB04:
{
    r31 = (r31 + 1);
}

loc_8039DB08:
{
    r0 = MemoryInline::FlatRead8((r29 + 7));
}

loc_8039DB10:
{
    if ((static_cast<int32_t>(r31) < static_cast<int32_t>(r0))) {
        goto loc_8039DA20;
    }
}

loc_8039DB14:
{
    r0 = (r5 & 255);
}

loc_8039DB1C:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_8039DB38;
    }
}

loc_8039DB20:
{
    r0 = (r30 & 65535);
    r0 = (r0 & 896);
}

loc_8039DB2C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(896))) {
        goto loc_8039DB40;
    }
}

loc_8039DB30:
{
    r3 = 0;
    goto loc_8039DB44;
}

loc_8039DB38:
{
    r3 = 0;
    goto loc_8039DB44;
}

loc_8039DB40:
{
    r3 = 1;
}

loc_8039DB44:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8039D9A8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8039D9A8_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8039D9A8 func_8039D9A8 preserves=true fpr_mask=0x00000000
