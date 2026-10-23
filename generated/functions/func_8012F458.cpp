#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80126098(CpuContext* ctx);
extern "C" uint64_t func_80126098_ra8_0_18_0(CpuContext*, uint32_t);

extern "C" uint64_t func_8012F458_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t addr_lhax_8012F4BC_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r4_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8012F458;

loc_8012F458:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r4;
    r0 = (r4 & 65535);
    r4 = 1374420992;
    r4 = (r4 + -31457);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r4)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 5);
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_0 & 1);
    r31 = (r0 + r4);
    if constexpr (KnownRegArgsCpuCall<0x80126098u>(&func_80126098)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80126098_5C2 = func_80126098_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_80126098_5C2);
        r4 = static_cast<uint32_t>(regargs_result_80126098_5C2 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80126098u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r3 = MemoryInline::FlatRead32((r3 + 132));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3_addr_0 = (r3 + r0);
    r4 = MemoryInline::FlatRead32(r3_addr_0);
}

loc_8012F4A0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8012F4AC;
    }
}

loc_8012F4A4:
{
    r3 = 0;
    goto loc_8012F4C0;
}

loc_8012F4AC:
{
    r3 = (r31 * 100);
    r0 = (r30 & 65535);
    r0 = (r0 - r3);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    addr_lhax_8012F4BC_loc_0 = (r4 + r0);
    r3 = MemoryInline::FlatRead16(addr_lhax_8012F4BC_loc_0);
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_8012F4C0:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8012F458(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8012F458_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8012F458 func_8012F458 preserves=true fpr_mask=0x00000000
