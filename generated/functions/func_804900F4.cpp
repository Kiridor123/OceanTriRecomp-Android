#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8048BB18(CpuContext* ctx);
extern "C" uint64_t func_8048BB18_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_804900F4_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r6_addr_3 = 0;
    uint32_t r6_addr_4 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x804900F4u);
    goto loc_804900F4;

loc_804900F4:
{
    r8 = (r4 | 64512);
    r7 = (r5 + 3);
    r0 = (static_cast<int32_t>(r8) >> 8);
    r4 = 0;
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80490108:
{
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r7));
    r9 = (r3 + 11);
    r10 = 0;
    MemoryInline::FlatWrite16((r3 + 4), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite8((r3 + 8), static_cast<uint8_t>(r8));
    MemoryInline::FlatWrite8((r3 + 9), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 10), static_cast<uint8_t>(r5));
    if (((cr & 0x04000000u) == 0)) {
        goto loc_804901E4;
    }
}

loc_80490128:
{
}

loc_8049012C:
{
    r7 = (r5 + -8);
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(8))) {
        goto loc_804901BC;
    }
}

loc_80490134:
{
    r8 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_80490150;
    }
}

loc_8049013C:
{
    r4 = 0x80000000u;
    r0 = (r4 + -2);
}

loc_80490148:
{
    if ((static_cast<int32_t>(r5) > static_cast<int32_t>(r0))) {
        goto loc_80490150;
    }
}

loc_8049014C:
{
    r8 = 1;
}

loc_80490150:
{
}

loc_80490154:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_804901BC;
    }
}

loc_80490158:
{
    r0 = (r7 + 7);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
    ctr = r0;
}

loc_80490168:
{
    if ((static_cast<int32_t>(r7) <= static_cast<int32_t>(0))) {
        goto loc_804901BC;
    }
}

loc_8049016C:
{
    r6_addr_2 = (r6 + r10);
    r0 = MemoryInline::FlatRead8(r6_addr_2);
    r4 = (r6 + r10);
    r10 = (r10 + 8);
    guest_range_0 = MemoryInline::ResolveRangeHost(r9, 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, r9, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r9 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 2));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r9 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r9 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 4));
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r9 + 4), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 5));
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r9 + 5), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 6));
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r9 + 6), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 7));
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r9 + 7), static_cast<uint8_t>(r0));
    r9 = (r9 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8049016C;
    }
}

loc_804901BC:
{
    r0 = (r5 - r10);
    r4 = (r6 + r10);
    ctr = r0;
}

loc_804901CC:
{
    if ((static_cast<int32_t>(r10) >= static_cast<int32_t>(r5))) {
        goto loc_804901E4;
    }
}

loc_804901D0:
{
    r0 = MemoryInline::FlatRead8(r4);
    r4 = (r4 + 1);
    MemoryInline::FlatWrite8(r9, static_cast<uint8_t>(r0));
    r9 = (r9 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804901D0;
    }
}

loc_804901E4:
{
    if constexpr (KnownRegArgsCpuCall<0x8048BB18u>(&func_8048BB18)) {
        ctx->gpr[0] = r0;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8048BB18_1403 = func_8048BB18_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8048BB18_1403);
        r4 = static_cast<uint32_t>(regargs_result_8048BB18_1403 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8048BB18u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804900F4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804900F4_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804900F4 func_804900F4 preserves=true fpr_mask=0x00000000
