#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801460BC(CpuContext* ctx);
extern "C" uint64_t func_801460BC_ra8_e_18_0(CpuContext*, uint32_t, double, double, double);
extern "C" void func_80146170(CpuContext* ctx);
extern "C" uint32_t func_80146170_ra8_e_8_0(CpuContext*, uint32_t, double, double, double);

extern "C" uint64_t func_802FBF8C_ra38_e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;

    goto loc_802FBF8C;

loc_802FBF8C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r0 = (r4 & 255);
}

loc_802FBFA8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(7))) {
        goto loc_802FBFC8;
    }
}

loc_802FBFAC:
{
}

loc_802FBFB0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_802FBFEC;
    }
}

loc_802FBFB4:
{
}

loc_802FBFB8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(13))) {
        goto loc_802FC01C;
    }
}

loc_802FBFBC:
{
}

loc_802FBFC0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(11))) {
        goto loc_802FC038;
    }
}

loc_802FBFC4:
{
    goto loc_802FC0D8;
}

loc_802FBFC8:
{
    r0 = (r5 & 255);
}

loc_802FBFD0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802FC0D8;
    }
}

loc_802FBFD4:
{
    r0 = MemoryInline::FlatRead8((r3 + 811));
}

loc_802FBFDC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802FC0D8;
    }
}

loc_802FBFE0:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 811), static_cast<uint8_t>(r0));
    goto loc_802FC0D8;
}

loc_802FBFEC:
{
    r0 = (r5 & 255);
}

loc_802FBFF4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(14))) {
        goto loc_802FC004;
    }
}

loc_802FBFF8:
{
}

loc_802FBFFC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(19))) {
        goto loc_802FC010;
    }
}

loc_802FC000:
{
    goto loc_802FC0D8;
}

loc_802FC004:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 808), static_cast<uint8_t>(r0));
    goto loc_802FC0D8;
}

loc_802FC010:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 808), static_cast<uint8_t>(r0));
    goto loc_802FC0D8;
}

loc_802FC01C:
{
    r0 = (r5 & 255);
}

loc_802FC024:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802FC0D8;
    }
}

loc_802FC028:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 811), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 810), static_cast<uint8_t>(r0));
    goto loc_802FC0D8;
}

loc_802FC038:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 818), static_cast<uint16_t>(r0));
    r0 = (r5 & 255);
}

loc_802FC048:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(59))) {
        goto loc_802FC0D8;
    }
}

loc_802FC04C:
{
    r3 = MemoryInline::FlatRead8((r3 + 480));
    // inline leaf 0x802B06CC (8 guest instruction(s))
}

loc_inl0_0x802B06CC:
{
    r0 = (r3 & 255);
    r4 = 0x805D0000u;
    r4 = (r4 + -2816);
    r4_addr_1 = (r4 + r0);
    r0 = MemoryInline::FlatRead8(r4_addr_1);
}

loc_inl0_0x802B06E0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x802B06E4:
{
    r3 = r0;
    goto loc_inl0_cont_802B06CC;
}

loc_inl0_return:
{
}

loc_inl0_cont_802B06CC:
{
    // end of inlined leaf 0x802B06CC
    r0 = (r3 & 255);
}

loc_802FC05C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_802FC06C;
    }
}

loc_802FC060:
{
}

loc_802FC064:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_802FC0A4;
    }
}

loc_802FC068:
{
    goto loc_802FC0D8;
}

loc_802FC06C:
{
    r0 = MemoryInline::FlatRead8((r31 + 481));
}

loc_802FC074:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(7))) {
        goto loc_802FC0D8;
    }
}

loc_802FC078:
{
    r3 = r31;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -11860));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -11856));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -11852));
    ctx->lr = 0x802FC08Cu;
    if constexpr (KnownRegArgsCpuCall<0x801460BCu>(&func_801460BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_801460BC_13EC = func_801460BC_ra8_e_18_0(ctx, r3, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_801460BC_13EC);
        r4 = static_cast<uint32_t>(regargs_result_801460BC_13EC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x801460BCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r3 = r31;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -11848));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -11844));
    f3.d = f1.d;
    ctx->lr = 0x802FC0A0u;
    if constexpr (KnownRegArgsCpuCall<0x80146170u>(&func_80146170)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80146170_17AE = func_80146170_ra8_e_8_0(ctx, r3, f1.d, f2.d, f3.d);
        r3 = regargs_result_80146170_17AE;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x80146170u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f1 = ctx->fpr[1];
    }
    goto loc_802FC0D8;
}

loc_802FC0A4:
{
    r0 = MemoryInline::FlatRead8((r31 + 481));
}

loc_802FC0AC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(8))) {
        goto loc_802FC0D8;
    }
}

loc_802FC0B0:
{
    r3 = r31;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -11840));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -11836));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -11832));
    ctx->lr = 0x802FC0C4u;
    if constexpr (KnownRegArgsCpuCall<0x801460BCu>(&func_801460BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_801460BC_1C29 = func_801460BC_ra8_e_18_0(ctx, r3, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_801460BC_1C29);
        r4 = static_cast<uint32_t>(regargs_result_801460BC_1C29 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x801460BCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r3 = r31;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -11848));
    f2.d = f1.d;
    f3.d = f1.d;
    ctx->lr = 0x802FC0D8u;
    if constexpr (KnownRegArgsCpuCall<0x80146170u>(&func_80146170)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80146170_1FC3 = func_80146170_ra8_e_8_0(ctx, r3, f1.d, f2.d, f3.d);
        r3 = regargs_result_80146170_1FC3;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x80146170u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f1 = ctx->fpr[1];
    }
}

loc_802FC0D8:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802FBF8C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802FBF8C_ra38_e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003F gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0xC000000E fpr_write=0xC000000F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802FBF8C func_802FBF8C preserves=true fpr_mask=0x00000000
