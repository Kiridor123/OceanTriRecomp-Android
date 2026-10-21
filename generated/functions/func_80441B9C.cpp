#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803BE89C(CpuContext* ctx);
extern "C" double func_803BE89C_ra0_2_0_2(CpuContext*, double);
extern "C" void func_8045FBD4(CpuContext* ctx);
extern "C" uint32_t func_8045FBD4_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80441B9C_ra38_1e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x80441B9Cu);
    goto loc_80441B9C;

loc_80441B9C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r3 = 0x806E0000u;
    r31 = (r3 + -30960);
    r3 = MemoryInline::FlatRead32((r31 + 84));
    r3 = (r3 + 8);
    r5 = 0;
    r0 = 3413;
    ctr = r0;
}

loc_80441BD0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 24u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, r3);
    r5 = (r5 + r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r3 + 1));
    r5 = (r5 + r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r3 + 2));
    r5 = (r5 + r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r3 + 3));
    r5 = (r5 + r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r3 + 4));
    r5 = (r5 + r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r3 + 5));
    r5 = (r5 + r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r3 + 6));
    r5 = (r5 + r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r3 + 7));
    r5 = (r5 + r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 8u, (r3 + 8));
    r5 = (r5 + r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 9u, (r3 + 9));
    r5 = (r5 + r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 10u, (r3 + 10));
    r5 = (r5 + r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 11u, (r3 + 11));
    r5 = (r5 + r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 12u, (r3 + 12));
    r5 = (r5 + r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 13u, (r3 + 13));
    r5 = (r5 + r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 14u, (r3 + 14));
    r5 = (r5 + r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 15u, (r3 + 15));
    r5 = (r5 + r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 16u, (r3 + 16));
    r5 = (r5 + r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 17u, (r3 + 17));
    r5 = (r5 + r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 18u, (r3 + 18));
    r5 = (r5 + r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 19u, (r3 + 19));
    r5 = (r5 + r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 20u, (r3 + 20));
    r5 = (r5 + r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 21u, (r3 + 21));
    r5 = (r5 + r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 22u, (r3 + 22));
    r5 = (r5 + r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 23u, (r3 + 23));
    r5 = (r5 + r0);
    r3 = (r3 + 24);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80441BD0;
    }
}

loc_80441C98:
{
    r4 = 0;
    r3 = 0x80660000u;
    r29 = (r3 + -21920);
    r0 = MemoryInline::FlatRead8((r31 + 256));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(4));
    r0 = (r0_rot_0 & -16);
    r0 = (r0 + r3);
    r3 = (r29 + r0);
    MemoryInline::FlatWrite8((r3 + 2026), static_cast<uint8_t>(r4));
    r30 = MemoryInline::FlatRead32((r31 + 84));
    r0 = MemoryInline::FlatRead32((r30 + 4));
}

loc_80441CC8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r5))) {
        goto loc_80441CD4;
    }
}

loc_80441CCC:
{
    r3 = 0;
    goto loc_80441DC8;
}

loc_80441CD4:
{
    r3 = (r3 + 2026);
    r4 = (r30 + 8);
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_8045FBD4_11E8 = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_11E8;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8045FBD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    }
    r0 = MemoryInline::FlatRead32(r30);
    r4 = (r0 & 255);
    r0 = MemoryInline::FlatRead8((r31 + 256));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r3 = (r29 + r0);
    MemoryInline::FlatWrite8((r3 + 2137), static_cast<uint8_t>(r4));
    r0 = MemoryInline::FlatRead8((r31 + 257));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80441D04:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_80441D10;
    }
}

loc_80441D08:
{
    r0 = MemoryInline::FlatRead8((r30 + 25));
    MemoryInline::FlatWriteRam8((r29 + 2321), static_cast<uint8_t>(r0));
}

loc_80441D10:
{
    r0 = MemoryInline::FlatRead32(r30);
}

loc_80441D18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80441D24;
    }
}

loc_80441D1C:
{
    r3 = 1;
    goto loc_80441DC8;
}

loc_80441D24:
{
    r0 = MemoryInline::FlatRead8((r31 + 257));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80441D30:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-1))) {
        goto loc_80441D3C;
    }
}

loc_80441D34:
{
    r3 = 1;
    goto loc_80441DC8;
}

loc_80441D3C:
{
}

loc_80441D40:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_80441D5C;
    }
}

loc_80441D44:
{
    r3 = 0x80660000u;
    r3 = (r3 + -19184);
    r4 = (r30 + 40);
    r5 = 31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    ctx->lr = 0x80441D5Cu;
    if constexpr (KnownRegArgsCpuCall<0x803BE89Cu>(&func_803BE89C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        const auto regargs_result_803BE89C_1ABA = func_803BE89C_ra0_2_0_2(ctx, f1.d);
        f1.d = regargs_result_803BE89C_1ABA;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x803BE89Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
    }
}

loc_80441D5C:
{
    r0 = MemoryInline::FlatRead8((r31 + 257));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80441D68:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_80441D74;
    }
}

loc_80441D6C:
{
    r3 = 1;
    goto loc_80441DC8;
}

loc_80441D74:
{
}

loc_80441D78:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(4))) {
        goto loc_80441D84;
    }
}

loc_80441D7C:
{
    r3 = 1;
    goto loc_80441DC8;
}

loc_80441D84:
{
}

loc_80441D88:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(5))) {
        goto loc_80441D94;
    }
}

loc_80441D8C:
{
    r3 = 1;
    goto loc_80441DC8;
}

loc_80441D94:
{
}

loc_80441D98:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(6))) {
        goto loc_80441DA4;
    }
}

loc_80441D9C:
{
    r3 = 1;
    goto loc_80441DC8;
}

loc_80441DA4:
{
    r0 = MemoryInline::FlatRead32(r30);
}

loc_80441DAC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80441DC4;
    }
}

loc_80441DB0:
{
    r0 = (r3 * 24576);
    r3 = (r30 + r0);
    r3 = (r3 + 72);
    r4 = 24576;
    ctx->lr = 0x80441DC4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80049F6Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f1 = ctx->fpr[1];
    ctr = ctx->ctr;
}

loc_80441DC4:
{
    r3 = 1;
}

loc_80441DC8:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80441B9C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80441B9C_ra38_1e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80441B9C func_80441B9C preserves=true fpr_mask=0x00000000
