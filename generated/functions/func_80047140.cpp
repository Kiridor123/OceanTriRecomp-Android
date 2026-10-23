#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800472A0(CpuContext* ctx);
extern "C" uint32_t func_800472A0_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_80047140_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t addr_psqx_80047278_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f31 = ctx->fpr[31];
    ctx->gpr[5] = arg_r5;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_80047140;

loc_80047140:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + -64), 0, 72u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_2, 68u, (r1 + 68), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_2, 48u, (r1 + 48), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 48);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r27 = r4;
    r0 = (r3 & 255);
}

loc_80047168:
{
    r31 = 16;
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80047174;
    }
}

loc_80047170:
{
    r31 = 8;
}

loc_80047174:
{
    r0 = (r4 & 255);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & -2);
    r0 = (r0 + r3);
    r0 = (r0 & 255);
    r29 = (r0 * 52);
    r3 = 0x80580000u;
    r0 = (r3 + 6216);
    r3 = (r0 + r29);
    f31.d = MemoryInline::FlatReadFloat32((r3 + 48));
    // inline leaf 0x80040424 (7 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -19268);
    r3 = MemoryInline::FlatRead8((r3 + 25));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x80040424
}

loc_800471A0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_800471AC;
    }
}

loc_800471A4:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -32568));
    f31.d = PpcFmulsInline(f31.d, f0.d);
}

loc_800471AC:
{
    r3 = 0x80660000u;
    r4 = (r3 + -19268);
    MemoryInline::FlatWriteRamFloat32((r4 + 76), f31.d);
    MemoryInline::FlatWriteRamFloat32((r4 + 72), f31.d);
    r28 = 0;
    r3 = 0x80580000u;
    r0 = (r3 + 6216);
    r30 = (r0 + r29);
    r0 = (r27 & 255);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r29 = (r4 + r0);
}

loc_800471D8:
{
    r3 = MemoryInline::FlatRead32((r13 + -17580));
    r4 = (r31 & 255);
    ctx->lr = 0x800471E4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    InvokeDirectCpu<0x80082BD4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    r3 = (r1 + 12);
    r4 = (r1 + 8);
    ctx->lr = 0x800471F4u;
    if constexpr (KnownRegArgsCpuCall<0x800472A0u>(&func_800472A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800472A0_1033 = func_800472A0_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_800472A0_1033;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800472A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = (r1 + 12);
    // inline leaf 0x80047298 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80047298
    guest_range_0 = MemoryInline::ResolveRangeHost(r30, 0, 48u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, r30);
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 176), 0, 84u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 68u, (r3 + 244), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r30 + 4));
    MemoryInline::WriteResolved32(guest_range_1, 72u, (r3 + 248), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r30 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 76u, (r3 + 252), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r30 + 12));
    MemoryInline::WriteResolved32(guest_range_1, 80u, (r3 + 256), r0);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r30 + 16));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 44u, (r3 + 220), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r30 + 20));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 48u, (r3 + 224), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r30 + 24));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 52u, (r3 + 228), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r30 + 28));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 56u, (r3 + 232), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r30 + 32));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, (r3 + 188), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r30 + 36));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r3 + 192), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r30 + 40));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (r3 + 196), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 44u, (r30 + 44));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 24u, (r3 + 200), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 72));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, (r3 + 176), f0.d);
    r31 = (r31 + 1);
    r28 = (r28 + 1);
}

loc_80047270:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(6))) {
        goto loc_800471D8;
    }
}

loc_80047274:
{
    r0 = 56;
    addr_psqx_80047278_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80047278_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 48));
    r11 = (r1 + 48);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[31] = f31;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80047140(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80047140_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80047140 func_80047140 preserves=true fpr_mask=0x00000000
