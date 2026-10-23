#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80296EB0_ra18_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;

    goto loc_80296EB0;

loc_80296EB0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = r4;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    f1.d = MemoryInline::FlatReadFloat32(r31);
    // inline leaf 0x80052270 (2 guest instruction(s))
    f1.d = std::fabs(f1.d);
    // end of inlined leaf 0x80052270
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14172));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80296EE0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80296EEC;
    }
}

loc_80296EE4:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14192));
    MemoryInline::FlatWriteFloat32(r30, f0.d);
}

loc_80296EEC:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    // inline leaf 0x80052270 (2 guest instruction(s))
    f1.d = std::fabs(f1.d);
    // end of inlined leaf 0x80052270
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14172));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80296EFC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80296F08;
    }
}

loc_80296F00:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14192));
    MemoryInline::FlatWriteFloat32((r30 + 4), f0.d);
}

loc_80296F08:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 8));
    // inline leaf 0x80052270 (2 guest instruction(s))
    f1.d = std::fabs(f1.d);
    // end of inlined leaf 0x80052270
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14172));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80296F18:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80296F24;
    }
}

loc_80296F1C:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14192));
    MemoryInline::FlatWriteFloat32((r30 + 8), f0.d);
}

loc_80296F24:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return r3;
}

}

extern "C" void func_80296EB0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80296EB0_ra18_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000001E gpr_write=0x00000003 gpr_return=0x00000000 fpr_read=0x00000001 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80296EB0 func_80296EB0 preserves=true fpr_mask=0x00000000
