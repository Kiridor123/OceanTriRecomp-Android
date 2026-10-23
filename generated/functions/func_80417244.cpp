#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80447EAC(CpuContext* ctx);
extern "C" uint64_t func_80447EAC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80417244_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80417244;

loc_80417244:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r30 = r4;
    r31 = r5;
    r0 = MemoryInline::FlatRead8((r3 + 28112));
}

loc_80417270:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804172AC;
    }
}

loc_80417274:
{
    // inline leaf 0x803E24E0 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16608));
    // end of inlined leaf 0x803E24E0
}

loc_8041727C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804172AC;
    }
}

loc_80417280:
{
    r3 = r29;
    // inline leaf 0x80417768 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 28113));
    // end of inlined leaf 0x80417768
}

loc_8041728C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80417298;
    }
}

loc_80417290:
{
    r3 = 0;
    goto loc_804172B0;
}

loc_80417298:
{
    // inline leaf 0x803E24E0 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16608));
    // end of inlined leaf 0x803E24E0
    r4 = r30;
    r5 = r31;
    ctx->lr = 0x804172A8u;
    if constexpr (KnownRegArgsCpuCall<0x80447EACu>(&func_80447EAC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80447EAC_84E = func_80447EAC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80447EAC_84E);
        r4 = static_cast<uint32_t>(regargs_result_80447EAC_84E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80447EACu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_804172B0;
}

loc_804172AC:
{
    r3 = 0;
}

loc_804172B0:
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

extern "C" void func_80417244(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80417244_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000207B gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80417244 func_80417244 preserves=true fpr_mask=0x00000000
