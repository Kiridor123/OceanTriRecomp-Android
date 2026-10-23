#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8033A8CC(CpuContext* ctx);
extern "C" uint64_t func_8033A8CC_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_8033A984_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8033A984;

loc_8033A984:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    // inline leaf 0x8045169C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16440));
    r3 = MemoryInline::FlatRead8((r3 + 17));
    r0 = (r3 + -7);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_0 & 134217727);
    // end of inlined leaf 0x8045169C
}

loc_8033A9A4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8033A9B0;
    }
}

loc_8033A9A8:
{
    r3 = 0;
    goto loc_8033AA40;
}

loc_8033A9B0:
{
    // inline leaf 0x800CF26C (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 36));
    // end of inlined leaf 0x800CF26C
    r0 = (r3 & 255);
}

loc_8033A9BC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_8033A9C8;
    }
}

loc_8033A9C0:
{
    r3 = 0;
    goto loc_8033AA40;
}

loc_8033A9C8:
{
    r3 = 0x806C0000u;
    r31 = (r3 + 5024);
    r0 = MemoryInline::FlatRead8((r31 + 6));
}

loc_8033A9D8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8033A9E4;
    }
}

loc_8033A9DC:
{
    r3 = 0;
    goto loc_8033AA40;
}

loc_8033A9E4:
{
    r0 = MemoryInline::FlatRead8((r31 + 8));
}

loc_8033A9EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8033A9F8;
    }
}

loc_8033A9F0:
{
    r3 = 0;
    goto loc_8033AA40;
}

loc_8033A9F8:
{
    r0 = (r30 & 65535);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = 0x805E0000u;
    r3 = (r3 + 28860);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctx->lr = 0x8033AA10u;
    if constexpr (KnownRegArgsCpuCall<0x8033A8CCu>(&func_8033A8CC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8033A8CC_BBE = func_8033A8CC_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8033A8CC_BBE);
        r4 = static_cast<uint32_t>(regargs_result_8033A8CC_BBE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8033A8CCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_8033AA18:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_8033AA3C;
    }
}

loc_8033AA1C:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r31 + 8), static_cast<uint8_t>(r0));
    r0 = (r3 & 255);
    MemoryInline::FlatWriteRam8((r31 + 7), static_cast<uint8_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r30)));
    MemoryInline::FlatWriteRam8((r31 + 10), static_cast<uint8_t>(r0));
    r3 = 1;
    goto loc_8033AA40;
}

loc_8033AA3C:
{
    r3 = 0;
}

loc_8033AA40:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8033A984(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8033A984_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000201B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8033A984 func_8033A984 preserves=true fpr_mask=0x00000000
