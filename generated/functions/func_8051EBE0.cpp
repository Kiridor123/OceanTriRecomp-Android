#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8051EBE0_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x8051EBE0u);
    goto loc_8051EBE0;

loc_8051EBE0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
}

loc_8051EBEC:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r5;
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8051EC04;
    }
}

loc_8051EBFC:
{
    r3 = -3;
    goto loc_8051EC44;
}

loc_8051EC04:
{
    r3 = r4;
    r4 = r6;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x804BC500u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8051EC14:
{
    MemoryInline::FlatWrite32(r31, r3);
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_8051EC40;
    }
}

loc_8051EC1C:
{
}

loc_8051EC20:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(-6))) {
        goto loc_8051EC2C;
    }
}

loc_8051EC24:
{
    r3 = -29;
    goto loc_8051EC44;
}

loc_8051EC2C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-8));
}

loc_8051EC30:
{
    r3 = -42;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8051EC44;
    }
}

loc_8051EC38:
{
    r3 = -26;
    goto loc_8051EC44;
}

loc_8051EC40:
{
    r3 = 0;
}

loc_8051EC44:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8051EBE0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8051EBE0_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8051EBE0 func_8051EBE0 preserves=true fpr_mask=0x00000000
