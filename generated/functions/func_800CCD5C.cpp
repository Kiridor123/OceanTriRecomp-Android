#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint32_t func_800CCD5C_ra30_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r13 = ctx->gpr[13];
    uint32_t cr = ctx->cr;

    goto loc_800CCD5C;

loc_800CCD5C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
}

loc_800CCD6C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_800CCDA4;
    }
}

loc_800CCD70:
{
}

loc_800CCD74:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(1))) {
        goto loc_800CCDAC;
    }
}

loc_800CCD78:
{
}

loc_800CCD7C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(7))) {
        goto loc_800CCDB4;
    }
}

loc_800CCD80:
{
}

loc_800CCD84:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(8))) {
        goto loc_800CCDBC;
    }
}

loc_800CCD88:
{
}

loc_800CCD8C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(10))) {
        goto loc_800CCDC4;
    }
}

loc_800CCD90:
{
}

loc_800CCD94:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(5))) {
        goto loc_800CCDCC;
    }
}

loc_800CCD98:
{
}

loc_800CCD9C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(9))) {
        goto loc_800CCDD4;
    }
}

loc_800CCDA0:
{
    goto loc_800CCDDC;
}

loc_800CCDA4:
{
    r3 = (r13 + -17640);
    goto loc_800CCDFC;
}

loc_800CCDAC:
{
    r3 = (r13 + -17636);
    goto loc_800CCDFC;
}

loc_800CCDB4:
{
    r3 = (r13 + -17632);
    goto loc_800CCDFC;
}

loc_800CCDBC:
{
    r3 = (r13 + -17628);
    goto loc_800CCDFC;
}

loc_800CCDC4:
{
    r3 = (r13 + -17624);
    goto loc_800CCDFC;
}

loc_800CCDCC:
{
    r3 = (r13 + -17620);
    goto loc_800CCDFC;
}

loc_800CCDD4:
{
    r3 = (r13 + -17616);
    goto loc_800CCDFC;
}

loc_800CCDDC:
{
    r3 = 0x80590000u;
    r3 = (r3 + 22104);
    r4 = 65;
    r5 = 0x80590000u;
    r5 = (r5 + 22120);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800CCDF8u;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
    r3 = 0;
}

loc_800CCDFC:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return r4;
}

}

extern "C" void func_800CCD5C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_800CCD5C_ra30_0_10_0(ctx, ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00002032 gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800CCD5C func_800CCD5C preserves=true fpr_mask=0x00000000
