#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803A8F48(CpuContext* ctx);
extern "C" uint64_t func_803A8F48_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8019EAE4_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_10 = 0;
    uint32_t r3_addr_11 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x8019EAE4u);
    goto loc_8019EAE4;

loc_8019EAE4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = r4;
    r31 = 0;
    r6 = 0;
    r5 = MemoryInline::FlatRead8((r3 + 1889));
    r3 = (r1 + 8);
    r4 = 1;
    r0 = 2;
    ctr = r0;
}

loc_8019EB18:
{
    r0 = (r6 & 255);
    r0 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
    r0 = (r5 & r0);
}

loc_8019EB28:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8019EB38;
    }
}

loc_8019EB2C:
{
    r0 = (r31 & 255);
    r3_addr_2 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_2, static_cast<uint8_t>(r6));
    r31 = (r31 + 1);
}

loc_8019EB38:
{
    r6 = (r6 + 1);
    r0 = (r6 & 255);
    r0 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
    r0 = (r5 & r0);
}

loc_8019EB4C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8019EB5C;
    }
}

loc_8019EB50:
{
    r0 = (r31 & 255);
    r3_addr_4 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_4, static_cast<uint8_t>(r6));
    r31 = (r31 + 1);
}

loc_8019EB5C:
{
    r6 = (r6 + 1);
    r0 = (r6 & 255);
    r0 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
    r0 = (r5 & r0);
}

loc_8019EB70:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8019EB80;
    }
}

loc_8019EB74:
{
    r0 = (r31 & 255);
    r3_addr_6 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_6, static_cast<uint8_t>(r6));
    r31 = (r31 + 1);
}

loc_8019EB80:
{
    r6 = (r6 + 1);
    r0 = (r6 & 255);
    r0 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
    r0 = (r5 & r0);
}

loc_8019EB94:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8019EBA4;
    }
}

loc_8019EB98:
{
    r0 = (r31 & 255);
    r3_addr_8 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_8, static_cast<uint8_t>(r6));
    r31 = (r31 + 1);
}

loc_8019EBA4:
{
    r6 = (r6 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8019EB18;
    }
}

loc_8019EBAC:
{
    r0 = (r31 & 255);
}

loc_8019EBB4:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(4))) {
        goto loc_8019EBC0;
    }
}

loc_8019EBB8:
{
    r3 = 255;
    goto loc_8019EBF8;
}

loc_8019EBC0:
{
    ctx->lr = 0x8019EBC4u;
    if constexpr (KnownRegArgsCpuCall<0x803A8F48u>(&func_803A8F48)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_803A8F48_DF6 = func_803A8F48_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803A8F48_DF6);
        r4 = static_cast<uint32_t>(regargs_result_803A8F48_DF6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x803A8F48u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r3 = (r3 & 65535);
    r3 = (r3 + 65536);
    r3 = (r3 + 22503);
    r0 = (r30 & 65535);
    r0 = PPC_Sraw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r0 * 13);
    r4 = (r0 & 65535);
    r3 = (r31 & 255);
    r0 = PPC_Divw(static_cast<int32_t>(r4), static_cast<int32_t>(r3));
    r0 = (r0 * r3);
    r0 = (r4 - r0);
    r3 = (r1 + 8);
    r3_addr_10 = (r3 + r0);
    r3 = MemoryInline::FlatRead8(r3_addr_10);
}

loc_8019EBF8:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8019EAE4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8019EAE4_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8019EAE4 func_8019EAE4 preserves=true fpr_mask=0x00000000
