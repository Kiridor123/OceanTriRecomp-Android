#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80527580(CpuContext* ctx);
extern "C" uint64_t func_80527580_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80543190_ra58_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r6)
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
    uint32_t r5 = ctx->gpr[5];
    ctx->gpr[6] = arg_r6;
    uint32_t ctr = ctx->ctr;

    goto loc_80543190;

loc_80543190:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r5 = 1;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r4 = (r1 + 8);
    ctx->lr = 0x805431A8u;
    if constexpr (KnownRegArgsCpuCall<0x80527580u>(&func_80527580)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80527580_49A = func_80527580_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80527580_49A);
        r4 = static_cast<uint32_t>(regargs_result_80527580_49A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80527580u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = MemoryInline::FlatRead16((r1 + 8));
}

loc_805431B0:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(768))) {
        goto loc_80543220;
    }
}

loc_805431B4:
{
}

loc_805431B8:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(816))) {
        goto loc_805431C0;
    }
}

loc_805431BC:
{
    goto loc_80543220;
}

loc_805431C0:
{
    r0 = (r3 + -768);
}

loc_805431C8:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(39))) {
        goto loc_80543220;
    }
}

loc_805431CC:
{
    r4 = 0x80650000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r4 = (r4 + 3248);
    r4_addr_1 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_1);
    ctr = r4;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x805431E4u:
        goto loc_805431E4;
        break;
    case 0x805431ECu:
        goto loc_805431EC;
        break;
    case 0x805431F4u:
        goto loc_805431F4;
        break;
    case 0x805431FCu:
        goto loc_805431FC;
        break;
    case 0x80543220u:
        goto loc_80543220;
        break;
    case 0x80543204u:
        goto loc_80543204;
        break;
    case 0x8054320Cu:
        goto loc_8054320C;
        break;
    case 0x80543214u:
        goto loc_80543214;
        break;
    case 0x8054321Cu:
        goto loc_8054321C;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_805431E4:
{
    r3 = 96;
    goto loc_80543220;
}

loc_805431EC:
{
    r3 = 180;
    goto loc_80543220;
}

loc_805431F4:
{
    r3 = 94;
    goto loc_80543220;
}

loc_805431FC:
{
    r3 = 126;
    goto loc_80543220;
}

loc_80543204:
{
    r3 = 168;
    goto loc_80543220;
}

loc_8054320C:
{
    r3 = 39;
    goto loc_80543220;
}

loc_80543214:
{
    r3 = 34;
    goto loc_80543220;
}

loc_8054321C:
{
    r3 = 184;
}

loc_80543220:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80543190(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80543190_ra58_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[6]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000005B gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80543190 func_80543190 preserves=true fpr_mask=0x00000000
