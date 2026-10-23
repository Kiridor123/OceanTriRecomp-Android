#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8052B6AC_ra28_2_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r5, double arg_f1)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = arg_r5;
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8052B6AC;

loc_8052B6AC:
{
    r4 = 1431633920;
    r5 = MemoryInline::FlatRead8((r3 + 186));
    r0 = (r4 + 21846);
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r4 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r5))) >> 32));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -1360));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & 1);
    r0 = (r4 + r0);
    r0 = (r0 * 3);
    r0 = (r5 - r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8052B6E0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8052B704;
    }
}

loc_8052B6E4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8052B6EC;
    }
}

loc_8052B6E8:
{
    goto loc_8052B6F8;
}

loc_8052B6EC:
{
}

loc_8052B6F0:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(3))) {
        goto loc_8052B6F8;
    }
}

loc_8052B6F4:
{
    goto loc_8052B71C;
}

loc_8052B6F8:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -1360));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
    goto loc_8052B728;
}

loc_8052B704:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 76));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -1336));
    f1.d = (-(f1.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
    goto loc_8052B728;
}

loc_8052B71C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 76));
    f0.d = (-(f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
}

loc_8052B728:
{
    r4 = 1431633920;
    r0 = (r4 + 21846);
    r4 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r5))) >> 32));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
    r0 = (r4 + r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8052B740:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8052B764;
    }
}

loc_8052B744:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8052B74C;
    }
}

loc_8052B748:
{
    goto loc_8052B758;
}

loc_8052B74C:
{
}

loc_8052B750:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(3))) {
        goto loc_8052B758;
    }
}

loc_8052B754:
{
    goto loc_8052B778;
}

loc_8052B758:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -1360));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    goto loc_8052B780;
}

loc_8052B764:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 80));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -1336));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    goto loc_8052B780;
}

loc_8052B778:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 80));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
}

loc_8052B780:
{
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r4 = MemoryInline::FlatRead32((r1 + 12));
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return r3;
}

}

extern "C" void func_8052B6AC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8052B6AC_ra28_2_8_0(ctx, ctx->gpr[3], ctx->gpr[5], ctx->fpr[1].d);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000002F gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000002 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8052B6AC func_8052B6AC preserves=true fpr_mask=0x00000000
