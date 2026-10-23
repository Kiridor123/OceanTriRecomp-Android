#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800CF2E4(CpuContext* ctx);
extern "C" uint32_t func_800CF2E4_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_803BDC40_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;

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
    uint32_t ctr = ctx->ctr;

    goto loc_803BDC40;

loc_803BDC40:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r30 = r5;
    ctx->lr = 0x803BDC60u;
    if constexpr (KnownRegArgsCpuCall<0x800CF2E4u>(&func_800CF2E4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_800CF2E4_592 = func_800CF2E4_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800CF2E4_592;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800CF2E4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_803BDC64:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803BDD74;
    }
}

loc_803BDC68:
{
    r5 = MemoryInline::FlatRead32((r13 + -16840));
    r3 = (r5 + 196608);
    r0 = MemoryInline::FlatRead8((r3 + 19012));
}

loc_803BDC78:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(127))) {
        goto loc_803BDD74;
    }
}

loc_803BDC7C:
{
    r3 = (r30 + -20);
    r0 = (r3 ^ 2);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    r7 = 0;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(4));
    r0 = (r0_rot_1 & -16);
    r6 = (r0 - r3);
    r4 = (r5 + r6);
    r0 = 3;
    ctr = r0;
}

loc_803BDCA8:
{
    r3 = (r4 + 196608);
    r0 = MemoryInline::FlatRead8((r3 + 19017));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_803BDCB8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-1))) {
        goto loc_803BDD38;
    }
}

loc_803BDCBC:
{
    r4 = (r4 + 1);
    r7 = (r7 + 1);
    r3 = (r4 + 196608);
    r0 = MemoryInline::FlatRead8((r3 + 19017));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_803BDCD4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-1))) {
        goto loc_803BDD38;
    }
}

loc_803BDCD8:
{
    r4 = (r4 + 1);
    r7 = (r7 + 1);
    r3 = (r4 + 196608);
    r0 = MemoryInline::FlatRead8((r3 + 19017));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_803BDCF0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-1))) {
        goto loc_803BDD38;
    }
}

loc_803BDCF4:
{
    r4 = (r4 + 1);
    r7 = (r7 + 1);
    r3 = (r4 + 196608);
    r0 = MemoryInline::FlatRead8((r3 + 19017));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_803BDD0C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-1))) {
        goto loc_803BDD38;
    }
}

loc_803BDD10:
{
    r4 = (r4 + 1);
    r7 = (r7 + 1);
    r3 = (r4 + 196608);
    r0 = MemoryInline::FlatRead8((r3 + 19017));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_803BDD28:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-1))) {
        goto loc_803BDD38;
    }
}

loc_803BDD2C:
{
    r4 = (r4 + 1);
    r7 = (r7 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803BDCA8;
    }
}

loc_803BDD38:
{
}

loc_803BDD3C:
{
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(15))) {
        goto loc_803BDD74;
    }
}

loc_803BDD40:
{
    r5 = (r5 + 196608);
    r0 = MemoryInline::FlatRead8((r5 + 19012));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r5 + r6);
    r3 = (r0 + r7);
    MemoryInline::FlatWrite8((r3 + 19017), static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead32((r5 + 19008));
    r0 = MemoryInline::FlatRead8((r5 + 19012));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3_addr_1 = (r3 + r0);
    MemoryInline::FlatWrite32(r3_addr_1, r31);
    r3 = MemoryInline::FlatRead8((r5 + 19012));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r5 + 19012), static_cast<uint8_t>(r0));
}

loc_803BDD74:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803BDC40(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803BDC40_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000020FB gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803BDC40 func_803BDC40 preserves=true fpr_mask=0x00000000
