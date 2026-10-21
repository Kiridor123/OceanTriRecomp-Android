#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804E9840(CpuContext* ctx);
extern "C" uint64_t func_804E9840_ra608_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint32_t func_804EA160_ra608_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r9, uint32_t arg_r10)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r9 = arg_r9;
    uint32_t r10 = arg_r10;
    uint32_t r13 = ctx->gpr[13];

    MKW_GUEST_ENTER(0x804EA160u);
    goto loc_804EA160;

loc_804EA160:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r4 = 0x80000000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = MemoryInline::FlatRead32((r4 + 204));
}

loc_804EA178:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_804EA198;
    }
}

loc_804EA17C:
{
}

loc_804EA180:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(5))) {
        goto loc_804EA198;
    }
}

loc_804EA184:
{
}

loc_804EA188:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_804EA1A4;
    }
}

loc_804EA18C:
{
}

loc_804EA190:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804EA1B0;
    }
}

loc_804EA194:
{
    goto loc_804EA1BC;
}

loc_804EA198:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r13 + -14204), r0);
    goto loc_804EA1C4;
}

loc_804EA1A4:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r13 + -14204), r0);
    goto loc_804EA1C4;
}

loc_804EA1B0:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r13 + -14204), r0);
    goto loc_804EA1C4;
}

loc_804EA1BC:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r13 + -14204), r0);
}

loc_804EA1C4:
{
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(5));
    r3 = (r3_rot_0 & 8160);
    r4 = 1;
    r0 = (r3 | r0);
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r4));
    r4 = (r1 + 8);
    r3 = 224;
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r0));
    r5 = 2;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x804E9C20u>(ctx);
    r3 = ctx->gpr[3];
    r3 = 2;
    ctx->lr = 0x804EA1F0u;
    if constexpr (KnownRegArgsCpuCall<0x804E9840u>(&func_804E9840)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_804E9840_A36 = func_804E9840_ra608_0_18_0(ctx, r3, r9, r10);
        r3 = static_cast<uint32_t>(regargs_result_804E9840_A36);
        r4 = static_cast<uint32_t>(regargs_result_804E9840_A36 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        InvokeDirectCpu<0x804E9840u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
    }
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    return r3;
}

}

extern "C" void func_804EA160(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_804EA160_ra608_0_8_0(ctx, ctx->gpr[3], ctx->gpr[9], ctx->gpr[10]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000260B gpr_write=0x000007FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804EA160 func_804EA160 preserves=true fpr_mask=0x00000000
