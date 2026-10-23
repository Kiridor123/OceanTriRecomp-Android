#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80271604(CpuContext* ctx);
extern "C" uint64_t func_80271604_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_802E75AC_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;

    goto loc_802E75AC;

loc_802E75AC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = r3;
    r28 = r4;
    r30 = 0;
    r0 = MemoryInline::FlatRead16((r5 + 1126));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_802E75DC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802E76B8;
    }
}

loc_802E75E0:
{
    r29 = 0;
    r3 = r5;
    r4 = 46;
    ctx->lr = 0x802E75F0u;
    if constexpr (KnownRegArgsCpuCall<0x80271604u>(&func_80271604)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80271604_6D9 = func_80271604_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80271604_6D9);
        r4 = static_cast<uint32_t>(regargs_result_80271604_6D9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80271604u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r4 = 0;
    r0 = (r3 & 255);
}

loc_802E75FC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(129))) {
        goto loc_802E7604;
    }
}

loc_802E7600:
{
    r4 = 1;
}

loc_802E7604:
{
}

loc_802E7608:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_802E76B8;
    }
}

loc_802E760C:
{
    r0 = (r3 & 255);
}

loc_802E7614:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(128))) {
        goto loc_802E762C;
    }
}

loc_802E7618:
{
}

loc_802E761C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(130))) {
        goto loc_802E7634;
    }
}

loc_802E7620:
{
}

loc_802E7624:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(131))) {
        goto loc_802E763C;
    }
}

loc_802E7628:
{
    goto loc_802E7644;
}

loc_802E762C:
{
    r30 = 0;
    goto loc_802E7648;
}

loc_802E7634:
{
    r30 = 3;
    goto loc_802E7648;
}

loc_802E763C:
{
    r30 = 4;
    goto loc_802E7648;
}

loc_802E7644:
{
    r30 = 2;
}

loc_802E7648:
{
    r0 = (r28 & 255);
}

loc_802E7650:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802E7668;
    }
}

loc_802E7654:
{
}

loc_802E7658:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_802E7674;
    }
}

loc_802E765C:
{
}

loc_802E7660:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_802E767C;
    }
}

loc_802E7664:
{
    goto loc_802E7684;
}

loc_802E7668:
{
    r29 = 0;
    r30 = 0;
    goto loc_802E76A0;
}

loc_802E7674:
{
    r29 = 0;
    goto loc_802E76A0;
}

loc_802E767C:
{
    r29 = 1;
    goto loc_802E76A0;
}

loc_802E7684:
{
    r3 = 0x805D0000u;
    r3 = (r3 + 25800);
    r4 = 2088;
    r5 = 0x805D0000u;
    r5 = (r5 + 25824);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x802E76A0u;
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

loc_802E76A0:
{
    r4 = (r29 * 10);
    r3 = 0x805D0000u;
    r0 = (r3 + 25652);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & -2);
    r0 = (r0 + r4);
    r3_addr_1 = (r3 + r0);
    r30 = MemoryInline::FlatRead16(r3_addr_1);
}

loc_802E76B8:
{
    r0 = (0 - r30);
    r0 = (r0 | r30);
    r3 = (static_cast<int32_t>(r0) >> 31);
    r0 = (r31 + r30);
    r0 = (r0 & 65535);
    r31 = (r0 & r3);
    r3 = r31;
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802E75AC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802E75AC_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802E75AC func_802E75AC preserves=true fpr_mask=0x00000000
