#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80427718(CpuContext* ctx);
extern "C" uint64_t func_80427718_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_804534A4_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

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

    goto loc_804534A4;

loc_804534A4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = r3;
    r31 = r4;
    r6 = MemoryInline::FlatRead32((r13 + -16440));
}

loc_804534C8:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_804534DC;
    }
}

loc_804534CC:
{
    r0 = -1;
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    r3 = 0;
    goto loc_80453578;
}

loc_804534DC:
{
    r5 = (r6 + 65536);
    r0 = MemoryInline::FlatRead8((r5 + -16196));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_804534EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80453500;
    }
}

loc_804534F0:
{
    r0 = -1;
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    r3 = 0;
    goto loc_80453578;
}

loc_80453500:
{
    r3 = (r3 & 255);
    r0 = (r3 + -1);
    r0 = (r0 * 12);
    r5 = (r5 + r0);
    r0 = MemoryInline::FlatRead8((r5 + -16569));
}

loc_80453518:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8045352C;
    }
}

loc_8045351C:
{
    r0 = 1;
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    r3 = 1;
    goto loc_80453578;
}

loc_8045352C:
{
    r3 = (r6 + 29544);
    r4 = (r5 + -16580);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8045FD04u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8045353C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80453550;
    }
}

loc_80453540:
{
    r0 = 1;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    r3 = 1;
    goto loc_80453578;
}

loc_80453550:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    r0 = (r30 & 255);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = 21;
    r4 = r31;
    r5 = 0;
    r6 = 1;
    r7 = (r1 + 8);
    ctx->lr = 0x80453578u;
    if constexpr (KnownRegArgsCpuCall<0x80427718u>(&func_80427718)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_80427718_BC4 = func_80427718_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80427718_BC4);
        r4 = static_cast<uint32_t>(regargs_result_80427718_BC4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x80427718u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
}

loc_80453578:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804534A4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804534A4_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000021FA gpr_write=0x000009FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804534A4 func_804534A4 preserves=true fpr_mask=0x00000000
