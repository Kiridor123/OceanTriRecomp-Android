#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80050FAC(CpuContext* ctx);
extern "C" uint64_t func_80050FAC_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8012623C(CpuContext* ctx);
extern "C" uint64_t func_8012623C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80127160(CpuContext* ctx);
extern "C" uint64_t func_80127160_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_80127220_ra38_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1)
{
    uint32_t addr_psqx_80127308_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r30_rot_0 = 0;
    uint32_t r30_rot_1 = 0;
    uint32_t r30_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_80127220;

loc_80127220:
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
    r11 = (r1 + 64);
    // inline leaf 0x80457480 (8 guest instruction(s))
    // end of inlined leaf 0x80457480
    r25 = r3;
    r26 = r4;
    r30 = r5;
    f31.d = MemoryInline::FlatReadFloat32((r2 + -28232));
    r28 = 255;
    r3 = (r1 + 8);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = r25;
    r4 = (r30 & 255);
    ctx->lr = 0x80127264u;
    if constexpr (KnownRegArgsCpuCall<0x80127160u>(&func_80127160)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80127160_A69 = func_80127160_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80127160_A69);
        r4 = static_cast<uint32_t>(regargs_result_80127160_A69 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80127160u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_80127268:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80127300;
    }
}

loc_8012726C:
{
    r4 = MemoryInline::FlatRead8((r3 + 1));
    r29 = MemoryInline::FlatRead32((r3 + 4));
    r27 = 0;
    r0 = (r30 & 255);
    r0 = (r0 & 15);
    r30_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r30 = (r30_rot_1 & -256);
    r31 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    goto loc_801272F8;
}

loc_8012728C:
{
    r0 = MemoryInline::FlatRead8(r29);
}

loc_80127294:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(254))) {
        goto loc_801272F0;
    }
}

loc_80127298:
{
}

loc_8012729C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(252))) {
        goto loc_801272F0;
    }
}

loc_801272A0:
{
    r3 = r25;
    r4 = MemoryInline::FlatRead32((r29 + 4));
    r0 = MemoryInline::FlatRead16(r4);
    r0 = (r0 & 255);
    r0 = (r30 | r0);
    r4 = (r0 & 65535);
    r5 = (r1 + 8);
    ctx->lr = 0x801272C0u;
    if constexpr (KnownRegArgsCpuCall<0x8012623Cu>(&func_8012623C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_8012623C_11CA = func_8012623C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8012623C_11CA);
        r4 = static_cast<uint32_t>(regargs_result_8012623C_11CA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x8012623Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    r3 = r26;
    r4 = (r1 + 8);
    ctx->lr = 0x801272CCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80050FACu>(ctx);
    ctx->fpr[1].d = PPC_PsToScalarInline(ctx->fpr[1].d);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f1 = ctx->fpr[1];
}

loc_801272D0:
{
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(0))) {
        goto loc_801272E0;
    }
}

loc_801272D4:
{
    f31.d = f1.d;
    r28 = MemoryInline::FlatRead8(r29);
    goto loc_801272F0;
}

loc_801272E0:
{
    SetCRFloatResident(cr, 0, f1.d, f31.d);
}

loc_801272E4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801272F0;
    }
}

loc_801272E8:
{
    f31.d = f1.d;
    r28 = MemoryInline::FlatRead8(r29);
}

loc_801272F0:
{
    r27 = (r27 + 1);
    r29 = (r29 + 12);
}

loc_801272F8:
{
}

loc_801272FC:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(r31))) {
        goto loc_8012728C;
    }
}

loc_80127300:
{
    r3 = r28;
    r0 = 72;
    addr_psqx_80127308_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80127308_loc_0));
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 36), 0, 52u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 28u, (r1 + 64));
    r11 = (r1 + 64);
    // inline leaf 0x804574CC (8 guest instruction(s))
    // end of inlined leaf 0x804574CC
    r0 = MemoryInline::ReadResolved32(guest_range_1, 48u, (r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80127220(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80127220_ra38_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003F gpr_write=0x0000083B gpr_return=0x00000018 fpr_read=0x80000002 fpr_write=0x8000000F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80127220 func_80127220 preserves=true fpr_mask=0x00000000
