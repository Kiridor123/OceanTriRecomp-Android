#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8027CB80_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r31 = ctx->gpr[31];

    goto loc_8027CB80;

loc_8027CB80:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = 255;
    r0 = MemoryInline::FlatRead8((r3 + 1161));
}

loc_8027CB9C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8027CBC4;
    }
}

loc_8027CBA0:
{
    r4 = MemoryInline::FlatRead8((r3 + 1170));
}

loc_8027CBA8:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(255))) {
        goto loc_8027CBC4;
    }
}

loc_8027CBAC:
{
    r0 = 255;
}

loc_8027CBB4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_8027CBC0;
    }
}

loc_8027CBB8:
{
}

loc_8027CBBC:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r4))) {
        goto loc_8027CBC4;
    }
}

loc_8027CBC0:
{
    r31 = r4;
}

loc_8027CBC4:
{
    r0 = MemoryInline::FlatRead8((r3 + 1253));
}

loc_8027CBCC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8027CBF4;
    }
}

loc_8027CBD0:
{
    r4 = MemoryInline::FlatRead8((r3 + 1262));
}

loc_8027CBD8:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(255))) {
        goto loc_8027CBF4;
    }
}

loc_8027CBDC:
{
    r0 = (r31 & 255);
}

loc_8027CBE4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_8027CBF0;
    }
}

loc_8027CBE8:
{
}

loc_8027CBEC:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r4))) {
        goto loc_8027CBF4;
    }
}

loc_8027CBF0:
{
    r31 = r4;
}

loc_8027CBF4:
{
    r4 = 24;
    ctx->lr = 0x8027CBFCu;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8027CC00:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8027CC14;
    }
}

loc_8027CC04:
{
    r0 = (r31 & 255);
}

loc_8027CC0C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8027CC14;
    }
}

loc_8027CC10:
{
    r31 = 2;
}

loc_8027CC14:
{
    r3 = r31;
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8027CB80(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8027CB80_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8027CB80 func_8027CB80 preserves=true fpr_mask=0x00000000
