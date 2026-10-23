#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803AB08C(CpuContext* ctx);
extern "C" uint32_t func_803AB08C_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_802D8F0C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r28_addr_0 = 0;
    uint32_t r28_addr_1 = 0;
    uint32_t r28_addr_2 = 0;
    uint32_t r28_addr_3 = 0;
    uint32_t r29_addr_0 = 0;
    uint32_t r29_addr_1 = 0;
    uint32_t r29_addr_2 = 0;
    uint32_t r29_addr_3 = 0;
    uint32_t r29_addr_4 = 0;
    uint32_t r29_addr_5 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_802D8F0C;

loc_802D8F0C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r28 = r3;
    r29 = r4;
    r31 = 0;
    r3 = 0x806C0000u;
    r30 = (r3 + -2080);
    ctx->lr = 0x802D8F40u;
    if constexpr (KnownRegArgsCpuCall<0x803AB08Cu>(&func_803AB08C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_803AB08C_669 = func_803AB08C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803AB08C_669;
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

loc_802D8F44:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802D8F50;
    }
}

loc_802D8F48:
{
    r3 = 0;
    goto loc_802D8FC8;
}

loc_802D8F50:
{
    r3 = r30;
    // inline leaf 0x802D94F0 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 1155));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 134217727);
    // end of inlined leaf 0x802D94F0
}

loc_802D8F5C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802D8F68;
    }
}

loc_802D8F60:
{
    r3 = 0;
    goto loc_802D8FC8;
}

loc_802D8F68:
{
    r3 = 0x805D0000u;
    r5 = (r3 + 20064);
    r3 = 1;
    goto loc_802D8FB8;
}

loc_802D8F78:
{
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_2 & -2);
    r28_addr_2 = (r28 + r4);
    r0 = MemoryInline::FlatRead16(r28_addr_2);
}

loc_802D8F84:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802D8F94;
    }
}

loc_802D8F88:
{
    r29_addr_2 = (r29 + r4);
    r0 = MemoryInline::FlatRead16(r29_addr_2);
}

loc_802D8F90:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802D8FB4;
    }
}

loc_802D8F94:
{
    r4 = MemoryInline::FlatRead32((r5 + 4));
    goto loc_802D8FA8;
}

loc_802D8F9C:
{
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r31 = (r31 | r0);
    r4 = (r4 + 2);
}

loc_802D8FA8:
{
    r0 = MemoryInline::FlatRead16(r4);
}

loc_802D8FB0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(255))) {
        goto loc_802D8F9C;
    }
}

loc_802D8FB4:
{
    r5 = (r5 + 8);
}

loc_802D8FB8:
{
    r0 = MemoryInline::FlatRead16(r5);
}

loc_802D8FC0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(255))) {
        goto loc_802D8F78;
    }
}

loc_802D8FC4:
{
    r3 = r31;
}

loc_802D8FC8:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802D8F0C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802D8F0C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802D8F0C func_802D8F0C preserves=true fpr_mask=0x00000000
