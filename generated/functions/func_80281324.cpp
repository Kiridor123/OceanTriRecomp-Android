#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80281324_ra38_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    ctx->fpr[1].d = arg_f1;

    MKW_GUEST_ENTER(0x80281324u);
    goto loc_80281324;

loc_80281324:
{
    r7 = 0;
    r0 = (r4 & 255);
}

loc_80281330:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80281340;
    }
}

loc_80281334:
{
    r4 = 0x805C0000u;
    r6 = (r4 + 29816);
    goto loc_80281374;
}

loc_80281340:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8028134C:
{
    r0 = MemoryInline::FlatRead16((r6 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80281354:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(3))) {
        goto loc_80281370;
    }
}

loc_80281358:
{
    r0 = (r4 - r5);
    r7 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_80281364:
{
    if ((static_cast<int32_t>(r7) > static_cast<int32_t>(0))) {
        goto loc_80281380;
    }
}

loc_80281368:
{
    r7 = 0;
    goto loc_80281380;
}

loc_80281370:
{
    r6 = (r6 + 4);
}

loc_80281374:
{
    r4 = MemoryInline::FlatRead16(r6);
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
}

loc_8028137C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(9999))) {
        goto loc_8028134C;
    }
}

loc_80281380:
{
    r4 = r7;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x80281210u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80281324(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80281324_ra38_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FF9 gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80281324 func_80281324 preserves=true fpr_mask=0x00000000
