#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8021C264_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x8021C264u);
    goto loc_8021C264;

loc_8021C264:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r3 = MemoryInline::FlatRead16((r3 + 8));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8004D2E0u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8021C284:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8021C290;
    }
}

loc_8021C288:
{
    r3 = 0;
    goto loc_8021C388;
}

loc_8021C290:
{
    r3 = MemoryInline::FlatRead16((r31 + 10));
}

loc_8021C298:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(255))) {
        goto loc_8021C2A8;
    }
}

loc_8021C29C:
{
    ctx->lr = 0x8021C2A0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x802FB558u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
}

loc_8021C2A4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8021C384;
    }
}

loc_8021C2A8:
{
    r0 = MemoryInline::FlatRead8((r31 + 3));
}

loc_8021C2B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8021C2E0;
    }
}

loc_8021C2B4:
{
}

loc_8021C2B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8021C2E8;
    }
}

loc_8021C2BC:
{
}

loc_8021C2C0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8021C2F4;
    }
}

loc_8021C2C4:
{
}

loc_8021C2C8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_8021C31C;
    }
}

loc_8021C2CC:
{
}

loc_8021C2D0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_8021C344;
    }
}

loc_8021C2D4:
{
}

loc_8021C2D8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_8021C36C;
    }
}

loc_8021C2DC:
{
    goto loc_8021C384;
}

loc_8021C2E0:
{
    r3 = 1;
    goto loc_8021C388;
}

loc_8021C2E8:
{
    r3 = MemoryInline::FlatRead16((r31 + 4));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8004D2E0u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_8021C388;
}

loc_8021C2F4:
{
    r3 = MemoryInline::FlatRead16((r31 + 4));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8004D2E0u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8021C300:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8021C384;
    }
}

loc_8021C304:
{
    r3 = MemoryInline::FlatRead16((r31 + 6));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8004D2E0u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8021C310:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8021C384;
    }
}

loc_8021C314:
{
    r3 = 1;
    goto loc_8021C388;
}

loc_8021C31C:
{
    r3 = MemoryInline::FlatRead16((r31 + 4));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8004D2E0u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8021C328:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8021C33C;
    }
}

loc_8021C32C:
{
    r3 = MemoryInline::FlatRead16((r31 + 6));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8004D2E0u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8021C338:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8021C384;
    }
}

loc_8021C33C:
{
    r3 = 1;
    goto loc_8021C388;
}

loc_8021C344:
{
    r3 = MemoryInline::FlatRead16((r31 + 4));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8004D2E0u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8021C350:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8021C384;
    }
}

loc_8021C354:
{
    r3 = MemoryInline::FlatRead16((r31 + 6));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8004D2E0u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8021C360:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8021C384;
    }
}

loc_8021C364:
{
    r3 = 1;
    goto loc_8021C388;
}

loc_8021C36C:
{
    r3 = MemoryInline::FlatRead16((r31 + 4));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8004D2E0u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8021C378:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8021C384;
    }
}

loc_8021C37C:
{
    r3 = 1;
    goto loc_8021C388;
}

loc_8021C384:
{
    r3 = 0;
}

loc_8021C388:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return r3;
}

}

extern "C" void func_8021C264(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8021C264_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8021C264 func_8021C264 preserves=true fpr_mask=0x00000000
