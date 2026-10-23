#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80112CAC(CpuContext* ctx);
extern "C" uint64_t func_80112CAC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_809F9980(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lhax_809F9A04_loc_0 = 0;
    uint32_t addr_lhax_809F9A78_loc_0 = 0;
    uint32_t addr_psqx_809F9AD8_loc_0 = 0;
    uint32_t addr_psqx_809F9AE4_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t stackword10 = 0;
    uint32_t stackword7 = 0;
    uint32_t stackword8 = 0;
    uint32_t stackword9 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_809F9980;

loc_809F9980:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -80), 0, 88u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 84u, (r1 + 84), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 64u, (r1 + 64), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 48u, (r1 + 48), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    r11 = (r1 + 48);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r28 = r3;
    r31 = MemoryInline::FlatRead32((r3 + 256));
    r30 = 0;
    r0 = MemoryInline::FlatRead8((r3 + 2));
    r4 = (r0 * 40);
    r3 = 0x80A30000u;
    r0 = (r3 + -22424);
    r3 = (r0 + r4);
    r0 = MemoryInline::FlatRead16((r3 + 4));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_809F99CC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-1))) {
        goto loc_809F99D8;
    }
}

loc_809F99D0:
{
    r3 = 0;
    goto loc_809F9AD4;
}

loc_809F99D8:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = 0x80A30000u;
    r3 = (r3 + -20248);
    r3_addr_1 = (r3 + r0);
    r29 = MemoryInline::FlatRead32(r3_addr_1);
    r3 = 0x80A20000u;
    f30.d = MemoryInline::FlatReadFloat32((r3 + -6320));
    r3 = 0x80A20000u;
    f31.d = MemoryInline::FlatReadFloat64((r3 + -6304));
    r27 = 1127219200;
    goto loc_809F9AC4;
}

loc_809F9A00:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & -2);
    addr_lhax_809F9A04_loc_0 = (r29 + r0);
    r0 = MemoryInline::FlatRead16(addr_lhax_809F9A04_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 ^ -2147483648);
    stackword7 = r0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    stackword8 = r27;
    MemoryInline::FlatWriteRam32((r1 + 8), r27);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword8), static_cast<uint32_t>(stackword7));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    f0.d = PpcFmulsInline(f30.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword0;
    r3 = MemoryInline::FlatRead32((r28 + 16));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_809F9A38:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(r0))) {
        goto loc_809F9AD0;
    }
}

loc_809F9A3C:
{
    r30 = 1;
}

loc_809F9A44:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_809F9A64;
    }
}

loc_809F9A48:
{
    r0 = 255;
    MemoryInline::FlatWrite8((r31 + 1), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 38), static_cast<uint8_t>(r0));
    r3 = r28;
    // inline leaf 0x802AB258 (3 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 97), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x802AB258
    goto loc_809F9AD0;
}

loc_809F9A64:
{
    r3 = MemoryInline::FlatRead8((r31 + 1));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r31 + 1), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r31 + 1));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & -2);
    addr_lhax_809F9A78_loc_0 = (r29 + r0);
    r0 = MemoryInline::FlatRead16(addr_lhax_809F9A78_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 ^ -2147483648);
    stackword9 = r0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    stackword10 = r27;
    MemoryInline::FlatWriteRam32((r1 + 16), r27);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword10), static_cast<uint32_t>(stackword9));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    f0.d = PpcFmulsInline(f30.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 8), f0.d);
    r0 = fctiwzword1;
}

loc_809F9AA4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_809F9AC4;
    }
}

loc_809F9AA8:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_809F9AB0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-1))) {
        goto loc_809F9AC4;
    }
}

loc_809F9AB4:
{
    r3 = (r28 + 24);
    r4 = MemoryInline::FlatRead8((r28 + 8));
    r5 = (r28 + 36);
    ctx->lr = 0x809F9AC4u;
    if constexpr (KnownRegArgsCpuCall<0x80112CACu>(&func_80112CAC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        const auto regargs_result_80112CAC_1ACE = func_80112CAC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80112CAC_1ACE);
        r4 = static_cast<uint32_t>(regargs_result_80112CAC_1ACE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x80112CACu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
    }
}

loc_809F9AC4:
{
    r0 = MemoryInline::FlatRead8((r31 + 1));
}

loc_809F9ACC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(255))) {
        goto loc_809F9A00;
    }
}

loc_809F9AD0:
{
    r3 = r30;
}

loc_809F9AD4:
{
    r0 = 72;
    addr_psqx_809F9AD8_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_809F9AD8_loc_0));
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 28), 0, 60u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 36u, (r1 + 64));
    r0 = 56;
    addr_psqx_809F9AE4_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_809F9AE4_loc_0));
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 20u, (r1 + 48));
    r11 = (r1 + 48);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::ReadResolved32(guest_range_1, 56u, (r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000007FF gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0xC0000001 fpr_write=0xC0000001 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x809F9980 func_809F9980 preserves=true fpr_mask=0x00000000
