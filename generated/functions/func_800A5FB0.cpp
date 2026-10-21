#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_800A5FB0_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r30_addr_0 = 0;
    uint32_t r30_addr_1 = 0;
    uint32_t r30_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x800A5FB0u);
    goto loc_800A5FB0;

loc_800A5FB0:
{
    MemoryInline::FlatWriteRam32((r1 + -2080), r1);
    r1 = (r1 + -2080);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 2084), r0);
    r28 = r3;
    r29 = 0;
    r30 = (r4 * 28);
    r3 = (r3 + 65536);
    r0 = MemoryInline::FlatRead32((r3 + -16360));
    r3 = (r0 + r30);
    // inline leaf 0x800A4B54 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 8));
    // end of inlined leaf 0x800A4B54
    r0 = (r3 & 65535);
}

loc_800A5FF0:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(512))) {
        goto loc_800A6010;
    }
}

loc_800A5FF4:
{
    r3 = 0x80590000u;
    r3 = (r3 + 11864);
    r4 = 221;
    r5 = 0x80590000u;
    r5 = (r5 + 12192);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800A6010u;
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
}

loc_800A6010:
{
    r3 = (r28 + 65536);
    r0 = MemoryInline::FlatRead32((r3 + -16360));
    r3 = (r0 + r30);
    // inline leaf 0x800A4B54 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 8));
    // end of inlined leaf 0x800A4B54
    r5 = (r3 & 65535);
    r3 = (r28 + 65536);
    r0 = MemoryInline::FlatRead32((r3 + -16360));
    r3 = (r0 + r30);
    r4 = (r1 + 8);
    ctx->lr = 0x800A6038u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8009B3D8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r28 = 0;
    r30 = (r1 + 8);
    r31 = (r3 & 65535);
    goto loc_800A6060;
}

loc_800A6048:
{
    r0 = (r28 & 65535);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r30_addr_2 = (r30 + r0);
    r3 = MemoryInline::FlatRead32(r30_addr_2);
    ctx->lr = 0x800A6058u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x800A4B5Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r29 = (r29 + r3);
    r28 = (r28 + 1);
}

loc_800A6060:
{
    r0 = (r28 & 65535);
}

loc_800A6068:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r31))) {
        goto loc_800A6048;
    }
}

loc_800A606C:
{
    r3 = r29;
    r0 = MemoryInline::FlatRead32((r1 + 2084));
    ctx->lr = r0;
    r1 = (r1 + 2080);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800A5FB0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800A5FB0_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFE gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800A5FB0 func_800A5FB0 preserves=true fpr_mask=0x00000000
