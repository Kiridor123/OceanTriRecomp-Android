#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800AB3EC(CpuContext* ctx);
extern "C" uint32_t func_800AB3EC_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint32_t func_800AB340_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];

    MKW_GUEST_ENTER(0x800AB340u);
    goto loc_800AB340;

loc_800AB340:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r3 = MemoryInline::FlatRead32((r3 + 200));
    r3 = MemoryInline::FlatRead32((r3 + 36));
    ctx->lr = 0x800AB360u;
    if constexpr (KnownRegArgsCpuCall<0x800AB3ECu>(&func_800AB3EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800AB3EC_40C = func_800AB3EC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800AB3EC_40C;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x800AB3ECu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r0 = MemoryInline::FlatRead16(r3);
    r0 = (r0 & 24576);
}

loc_800AB36C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(16384))) {
        goto loc_800AB384;
    }
}

loc_800AB370:
{
}

loc_800AB374:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(8192))) {
        goto loc_800AB394;
    }
}

loc_800AB378:
{
}

loc_800AB37C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(24576))) {
        goto loc_800AB3A4;
    }
}

loc_800AB380:
{
    goto loc_800AB3B4;
}

loc_800AB384:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 52));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 56));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    goto loc_800AB3C0;
}

loc_800AB394:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 48));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 60));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    goto loc_800AB3C0;
}

loc_800AB3A4:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 48));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 56));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    goto loc_800AB3C0;
}

loc_800AB3B4:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 52));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 60));
    f1.d = PpcFmulsInline(f1.d, f0.d);
}

loc_800AB3C0:
{
    r3 = MemoryInline::FlatRead32((r31 + 200));
    r4 = r31;
    // inline leaf 0x800AB3E0 (3 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r3 + 92));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    // end of inlined leaf 0x800AB3E0
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    return r3;
}

}

extern "C" void func_800AB340(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_800AB340_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800AB340 func_800AB340 preserves=true fpr_mask=0x00000000
