#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800E8F5C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];

    goto loc_800E8F5C;

loc_800E8F5C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r5;
    r30 = r6;
    r31 = r7;
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x804C6F20u>(ctx);
    f1.d = MemoryInline::FlatReadFloat32(r29);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 8));
    f2.d = (-(f0.d));
    ctx->gpr[1] = r1;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x80464488u>(ctx);
    f1 = ctx->fpr[1];
    MemoryInline::FlatWriteFloat32(r30, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 8));
    f2.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32(r29);
    f1.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 4));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    ctx->gpr[1] = r1;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x804645F4u>(ctx);
    f1 = ctx->fpr[1];
    MemoryInline::FlatWriteFloat32(r31, f1.d);
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000FA gpr_write=0x00000003 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800E8F5C func_800E8F5C preserves=true fpr_mask=0x00000000
