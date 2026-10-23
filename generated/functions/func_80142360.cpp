#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80142310(CpuContext* ctx);
extern "C" uint64_t func_80142310_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_80143464(CpuContext* ctx);
extern "C" uint32_t func_80143464_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_803437E4(CpuContext* ctx);
extern "C" uint64_t func_803437E4_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_80142360_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
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
    uint32_t r4 = arg_r4;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80142360;

loc_80142360:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
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
    r30 = 0;
    r31 = (r3 & 65535);
    goto loc_80142394;
}

loc_80142388:
{
    r3 = (r30 & 255);
    ctx->lr = 0x80142390u;
    if constexpr (KnownRegArgsCpuCall<0x80142310u>(&func_80142310)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80142310_96C = func_80142310_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_80142310_96C);
        r4 = static_cast<uint32_t>(regargs_result_80142310_96C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80142310u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r30 = (r30 + 1);
}

loc_80142394:
{
    r0 = (r30 & 255);
}

loc_8014239C:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r31))) {
        goto loc_80142388;
    }
}

loc_801423A0:
{
    ctx->lr = 0x801423A4u;
    if constexpr (KnownRegArgsCpuCall<0x803437E4u>(&func_803437E4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803437E4_D0B = func_803437E4_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_803437E4_D0B);
        r4 = static_cast<uint32_t>(regargs_result_803437E4_D0B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803437E4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    ctx->lr = 0x801423A8u;
    if constexpr (KnownRegArgsCpuCall<0x80143464u>(&func_80143464)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_80143464_FF2 = func_80143464_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80143464_FF2;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80143464u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80142360(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80142360_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000201F gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80142360 func_80142360 preserves=true fpr_mask=0x00000000
