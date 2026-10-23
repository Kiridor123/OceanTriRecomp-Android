#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804CDD30(CpuContext* ctx);
extern "C" void func_804CDD30_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint32_t func_8056C3D4_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t cr = ctx->cr;

    goto loc_8056C3D4;

loc_8056C3D4:
{
    r3 = MemoryInline::FlatRead32((r3 + 8));
    goto loc_8056C418;
}

loc_8056C3DC:
{
}

loc_8056C3E0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r4))) {
        goto loc_8056C414;
    }
}

loc_8056C3E4:
{
    r5 = MemoryInline::FlatRead32((r3 + 4));
    r3 = MemoryInline::FlatRead32((r3 + 8));
}

loc_8056C3F0:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8056C3F8;
    }
}

loc_8056C3F4:
{
    MemoryInline::FlatWrite32((r5 + 8), r3);
}

loc_8056C3F8:
{
}

loc_8056C3FC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8056C404;
    }
}

loc_8056C400:
{
    MemoryInline::FlatWrite32((r3 + 4), r5);
}

loc_8056C404:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r4 + 4), r0);
    MemoryInline::FlatWrite32((r4 + 8), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return r3;
}

loc_8056C414:
{
    r3 = MemoryInline::FlatRead32((r3 + 8));
}

loc_8056C418:
{
}

loc_8056C41C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8056C3DC;
    }
}

loc_8056C420:
{
    r3 = 0x80660000u;
    r5 = 0x80660000u;
    r3 = (r3 + -22368);
    r4 = 179;
    r5 = (r5 + -22348);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    if constexpr (KnownRegArgsCpuCall<0x804CDD30u>(&func_804CDD30)) {
        func_804CDD30_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804CDD30u>(ctx);
    }
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return r3;
}

}

extern "C" void func_8056C3D4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8056C3D4_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x00000029 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8056C3D4 func_8056C3D4 preserves=true fpr_mask=0x00000000
