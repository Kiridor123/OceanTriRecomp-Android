#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8029AFBC_ra18_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t fctiwzword3 = 0;
    uint32_t fctiwzword4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    PPC_FPR f0 = ctx->fpr[0];

    MKW_GUEST_ENTER(0x8029AFBCu);
    goto loc_8029AFBC;

loc_8029AFBC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = (r4 & 65535);
}

loc_8029AFC8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8029AFF4;
    }
}

loc_8029AFCC:
{
}

loc_8029AFD0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8029B008;
    }
}

loc_8029AFD4:
{
}

loc_8029AFD8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8029B01C;
    }
}

loc_8029AFDC:
{
}

loc_8029AFE0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_8029B030;
    }
}

loc_8029AFE4:
{
}

loc_8029AFE8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_8029B044;
    }
}

loc_8029AFEC:
{
    r3 = 0;
    goto loc_8029B054;
}

loc_8029AFF4:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 964));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r3 = fctiwzword0;
    goto loc_8029B054;
}

loc_8029B008:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 968));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    r3 = fctiwzword1;
    goto loc_8029B054;
}

loc_8029B01C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 972));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword2 = PPC_FprLowWordInline(f0.d);
    r3 = fctiwzword2;
    goto loc_8029B054;
}

loc_8029B030:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 976));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword3 = PPC_FprLowWordInline(f0.d);
    r3 = fctiwzword3;
    goto loc_8029B054;
}

loc_8029B044:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 980));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword4 = PPC_FprLowWordInline(f0.d);
    r3 = fctiwzword4;
}

loc_8029B054:
{
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    return r3;
}

}

extern "C" void func_8029AFBC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8029AFBC_ra18_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000000B gpr_return=0x00000008 fpr_read=0x00000001 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8029AFBC func_8029AFBC preserves=true fpr_mask=0x00000000
