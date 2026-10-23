#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8027532C(CpuContext* ctx);
extern "C" uint64_t func_8027532C_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_803AB08C(CpuContext* ctx);
extern "C" uint32_t func_803AB08C_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_802D8E58_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_802D8E58;

loc_802D8E58:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r27 = r3;
    r29 = 0;
    r3 = 0x806C0000u;
    r28 = (r3 + -2080);
    ctx->lr = 0x802D8E80u;
    if constexpr (KnownRegArgsCpuCall<0x803AB08Cu>(&func_803AB08C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_803AB08C_595 = func_803AB08C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803AB08C_595;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803AB08Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_802D8E84:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802D8E8C;
    }
}

loc_802D8E88:
{
    r29 = 1;
}

loc_802D8E8C:
{
    r3 = r28;
    // inline leaf 0x802D94F0 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 1155));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_0 & 134217727);
    // end of inlined leaf 0x802D94F0
}

loc_802D8E98:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802D8EA0;
    }
}

loc_802D8E9C:
{
    r29 = 1;
}

loc_802D8EA0:
{
    r30 = 0;
    r31 = 0;
}

loc_802D8EA8:
{
    r3 = MemoryInline::FlatRead16((r28 + 912));
    r4 = 2;
    ctx->lr = 0x802D8EB4u;
    if constexpr (KnownRegArgsCpuCall<0x8027532Cu>(&func_8027532C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027532C_B5D = func_8027532C_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8027532C_B5D);
        r4 = static_cast<uint32_t>(regargs_result_8027532C_B5D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8027532Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_802D8EB8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802D8ED8;
    }
}

loc_802D8EBC:
{
}

loc_802D8EC0:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_802D8ED8;
    }
}

loc_802D8EC4:
{
    r0 = MemoryInline::FlatRead16((r28 + 912));
    MemoryInline::FlatWrite16(r27, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r28 + 914));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r27 + 2), static_cast<uint16_t>(r0));
    goto loc_802D8EE0;
}

loc_802D8ED8:
{
    MemoryInline::FlatWrite16(r27, static_cast<uint16_t>(r31));
    MemoryInline::FlatWrite16((r27 + 2), static_cast<uint16_t>(r31));
}

loc_802D8EE0:
{
    r28 = (r28 + 4);
    r30 = (r30 + 1);
    r27 = (r27 + 4);
}

loc_802D8EF0:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(12))) {
        goto loc_802D8EA8;
    }
}

loc_802D8EF4:
{
    r11 = (r1 + 32);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802D8E58(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802D8E58_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000081B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802D8E58 func_802D8E58 preserves=true fpr_mask=0x00000000
