#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004AF84(CpuContext* ctx);
extern "C" uint32_t func_8004AF84_ra28_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8004AFDC(CpuContext* ctx);
extern "C" uint32_t func_8004AFDC_ra28_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8004BA64(CpuContext* ctx);
extern "C" uint64_t func_8004BA64_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80210B24_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_addze_src_0 = 0;
    uint32_t r0_ca_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r6_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x80210B24u);
    goto loc_80210B24;

loc_80210B24:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r3 = (r3 + 420);
    r4 = 0;
    r5 = 192;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->xer = xer;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    ctx->lr = 0x80210B54u;
    if constexpr (KnownRegArgsCpuCall<0x8004AF84u>(&func_8004AF84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->xer = xer;
        const auto regargs_result_8004AF84_72D = func_8004AF84_ra28_0_8_0(ctx, r3, r5);
        r3 = regargs_result_8004AF84_72D;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->xer = xer;
        InvokeDirectCpu<0x8004AF84u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        xer = ctx->xer;
    }
    r31 = r3;
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    ctx->lr = 0x80210B60u;
    if constexpr (KnownRegArgsCpuCall<0x8004AFDCu>(&func_8004AFDC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->xer = xer;
        const auto regargs_result_8004AFDC_AA9 = func_8004AFDC_ra28_0_8_0(ctx, r3, r5);
        r3 = regargs_result_8004AFDC_AA9;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->xer = xer;
        InvokeDirectCpu<0x8004AFDCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        xer = ctx->xer;
    }
    r4 = r3;
    r3 = MemoryInline::FlatRead16((r30 + 14));
    r5 = r31;
    if constexpr (KnownRegArgsCpuCall<0x8004BA64u>(&func_8004BA64)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8004BA64_E13 = func_8004BA64_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004BA64_E13);
        r4 = static_cast<uint32_t>(regargs_result_8004BA64_E13 >> 32);
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8004BA64u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r6 = ctx->gpr[6];
    }
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r3);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(3) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r3) >> 3);
    r0_addze_src_0 = r0;
    r0_ca_0 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_0 + r0_ca_0);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWrite16((r30 + 612), static_cast<uint16_t>(r0));
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r6 = (r6_rot_0 & -8);
    r4 = 1;
}

loc_80210B8C:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(r3))) {
        goto loc_80210B94;
    }
}

loc_80210B90:
{
    MemoryInline::FlatWrite8((r30 + 422), static_cast<uint8_t>(r4));
}

loc_80210B94:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r6)));
    MemoryInline::FlatWrite16((r30 + 426), static_cast<uint16_t>(r0));
    r5 = (r30 + 444);
    r6 = (r6 + 1);
}

loc_80210BA8:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(r3))) {
        goto loc_80210BB0;
    }
}

loc_80210BAC:
{
    MemoryInline::FlatWrite8((r5 + 2), static_cast<uint8_t>(r4));
}

loc_80210BB0:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r6)));
    guest_range_0 = MemoryInline::ResolveRangeHost((r5 + 6), 0, 146u, false, true);
    MemoryInline::WriteResolved16(guest_range_0, 0u, (r5 + 6), static_cast<uint16_t>(r0));
    r6 = (r6 + 1);
}

loc_80210BC0:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(r3))) {
        goto loc_80210BC8;
    }
}

loc_80210BC4:
{
    MemoryInline::WriteResolved8(guest_range_0, 20u, (r5 + 26), static_cast<uint8_t>(r4));
}

loc_80210BC8:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r6)));
    MemoryInline::WriteResolved16(guest_range_0, 24u, (r5 + 30), static_cast<uint16_t>(r0));
    r6 = (r6 + 1);
}

loc_80210BD8:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(r3))) {
        goto loc_80210BE0;
    }
}

loc_80210BDC:
{
    MemoryInline::WriteResolved8(guest_range_0, 44u, (r5 + 50), static_cast<uint8_t>(r4));
}

loc_80210BE0:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r6)));
    MemoryInline::WriteResolved16(guest_range_0, 48u, (r5 + 54), static_cast<uint16_t>(r0));
    r6 = (r6 + 1);
}

loc_80210BF0:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(r3))) {
        goto loc_80210BF8;
    }
}

loc_80210BF4:
{
    MemoryInline::WriteResolved8(guest_range_0, 68u, (r5 + 74), static_cast<uint8_t>(r4));
}

loc_80210BF8:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r6)));
    MemoryInline::WriteResolved16(guest_range_0, 72u, (r5 + 78), static_cast<uint16_t>(r0));
    r6 = (r6 + 1);
}

loc_80210C08:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(r3))) {
        goto loc_80210C10;
    }
}

loc_80210C0C:
{
    MemoryInline::WriteResolved8(guest_range_0, 92u, (r5 + 98), static_cast<uint8_t>(r4));
}

loc_80210C10:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r6)));
    MemoryInline::WriteResolved16(guest_range_0, 96u, (r5 + 102), static_cast<uint16_t>(r0));
    r6 = (r6 + 1);
}

loc_80210C20:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(r3))) {
        goto loc_80210C28;
    }
}

loc_80210C24:
{
    MemoryInline::WriteResolved8(guest_range_0, 116u, (r5 + 122), static_cast<uint8_t>(r4));
}

loc_80210C28:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r6)));
    MemoryInline::WriteResolved16(guest_range_0, 120u, (r5 + 126), static_cast<uint16_t>(r0));
    r6 = (r6 + 1);
}

loc_80210C38:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(r3))) {
        goto loc_80210C40;
    }
}

loc_80210C3C:
{
    MemoryInline::WriteResolved8(guest_range_0, 140u, (r5 + 146), static_cast<uint8_t>(r4));
}

loc_80210C40:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r6)));
    MemoryInline::WriteResolved16(guest_range_0, 144u, (r5 + 150), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r30 + 60));
    // inline leaf 0x8026FEA8 (9 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2));
    r4 = (r3 + -4);
    r3 = 2;
    r0 = (2 - r4);
    r3 = (r3 | ~r4);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_0 & 2147483647);
    r0 = (r3 - r0);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x8026FEA8
}

loc_80210C54:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80210C64;
    }
}

loc_80210C58:
{
    r0 = 4;
    MemoryInline::FlatWrite16((r30 + 614), static_cast<uint16_t>(r0));
    goto loc_80210C6C;
}

loc_80210C64:
{
    r0 = 3;
    MemoryInline::FlatWrite16((r30 + 614), static_cast<uint16_t>(r0));
}

loc_80210C6C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->xer = xer;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80210B24(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80210B24_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000207A gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80210B24 func_80210B24 preserves=true fpr_mask=0x00000000
