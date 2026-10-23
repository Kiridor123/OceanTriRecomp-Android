#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80427880(CpuContext* ctx);
extern "C" uint64_t func_80427880_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_80376BD0_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t fctiwzword3 = 0;
    uint32_t fctiwzword4 = 0;
    uint32_t fctiwzword5 = 0;
    uint32_t fctiwzword6 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;

    goto loc_80376BD0;

loc_80376BD0:
{
    MemoryInline::FlatWriteRam32((r1 + -112), r1);
    r1 = (r1 + -112);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 116), r0);
    r30 = r3;
    r31 = r5;
    r0 = (r4 & 255);
}

loc_80376BF8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80376C38;
    }
}

loc_80376BFC:
{
    r4 = 0;
    r5 = 0;
    // inline leaf 0x8026FECC (12 guest instruction(s))
}

loc_inl0_0x8026FECC:
{
    r6 = MemoryInline::FlatRead8((r3 + 10));
    r0 = (r4 & 255);
}

loc_inl0_0x8026FED8:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl0_0x8026FEF4;
    }
}

loc_inl0_0x8026FEDC:
{
    r3 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r5 & 65535);
}

loc_inl0_0x8026FEE8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl0_0x8026FEF4;
    }
}

loc_inl0_0x8026FEEC:
{
    r3 = 1;
    goto loc_inl0_cont_8026FECC;
}

loc_inl0_0x8026FEF4:
{
    r3 = 0;
}

loc_inl0_cont_8026FECC:
{
    // end of inlined leaf 0x8026FECC
}

loc_80376C0C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80376C20;
    }
}

loc_80376C10:
{
    r0 = (r31 & 65535);
    r0 = (r0 & 32768);
}

loc_80376C1C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80376DA4;
    }
}

loc_80376C20:
{
    r0 = MemoryInline::FlatRead8((r30 + 10));
}

loc_80376C28:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80376C38;
    }
}

loc_80376C2C:
{
    r0 = MemoryInline::FlatRead16((r30 + 12));
}

loc_80376C34:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(4))) {
        goto loc_80376DA4;
    }
}

loc_80376C38:
{
    r3 = (r1 + 8);
    r4 = 0;
    r5 = 56;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r29 = 1;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r29));
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r29));
    // inline leaf 0x803769CC (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + 1984);
    r3 = (r3 + 3);
    // end of inlined leaf 0x803769CC
    r4 = r3;
    r3 = (r1 + 12);
    r5 = 10;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 10), 0, 2807u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r30 + 10));
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 44), 0, 44u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 12u, (r1 + 56), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 2u, (r30 + 12));
    MemoryInline::WriteResolved16(guest_range_1, 10u, (r1 + 54), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 172u, (r30 + 182));
    MemoryInline::WriteResolved16(guest_range_1, 8u, (r1 + 52), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2806u, (r30 + 2816));
    MemoryInline::WriteResolved8(guest_range_1, 17u, (r1 + 61), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 12u, (r30 + 22));
    MemoryInline::WriteResolved8(guest_range_1, 18u, (r1 + 62), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 158u, (r30 + 168));
    r0 = (r0 & 65535);
    MemoryInline::WriteResolved16(guest_range_1, 0u, (r1 + 44), static_cast<uint16_t>(r0));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 50u, (r30 + 60));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::WriteResolvedFloat64(guest_range_1, 20u, (r1 + 64), f0.d);
    r0 = fctiwzword0;
    MemoryInline::WriteResolved16(guest_range_1, 2u, (r1 + 46), static_cast<uint16_t>(r0));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 54u, (r30 + 64));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    MemoryInline::WriteResolvedFloat64(guest_range_1, 28u, (r1 + 72), f0.d);
    r0 = fctiwzword1;
    MemoryInline::WriteResolved16(guest_range_1, 4u, (r1 + 48), static_cast<uint16_t>(r0));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 58u, (r30 + 68));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword2 = PPC_FprLowWordInline(f0.d);
    MemoryInline::WriteResolvedFloat64(guest_range_1, 36u, (r1 + 80), f0.d);
    r0 = fctiwzword2;
    MemoryInline::WriteResolved16(guest_range_1, 6u, (r1 + 50), static_cast<uint16_t>(r0));
    r0 = (r31 & 32767);
    MemoryInline::WriteResolved16(guest_range_1, 14u, (r1 + 58), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r13 + -17264));
}

loc_80376CE8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80376CF4;
    }
}

loc_80376CEC:
{
    MemoryInline::FlatWriteRam8((r1 + 60), static_cast<uint8_t>(r29));
    goto loc_80376CFC;
}

loc_80376CF4:
{
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 60), static_cast<uint8_t>(r0));
}

loc_80376CFC:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r30 + 10));
}

loc_80376D04:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80376D94;
    }
}

loc_80376D08:
{
    r3 = MemoryInline::ReadResolved16(guest_range_0, 2u, (r30 + 12));
    r0 = (r3 + -26);
}

loc_80376D14:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(10))) {
        goto loc_80376D6C;
    }
}

loc_80376D18:
{
    r0 = (r3 + -8);
}

loc_80376D20:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(3))) {
        goto loc_80376D6C;
    }
}

loc_80376D24:
{
}

loc_80376D28:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(3))) {
        goto loc_80376D40;
    }
}

loc_80376D2C:
{
}

loc_80376D30:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(6))) {
        goto loc_80376D40;
    }
}

loc_80376D34:
{
}

loc_80376D38:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(4))) {
        goto loc_80376D6C;
    }
}

loc_80376D3C:
{
    goto loc_80376D94;
}

loc_80376D40:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 134u, (r30 + 144));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword3 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 80), f0.d);
    r0 = fctiwzword3;
    MemoryInline::FlatWriteRam16((r1 + 46), static_cast<uint16_t>(r0));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 142u, (r30 + 152));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword4 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 72), f0.d);
    r0 = fctiwzword4;
    MemoryInline::FlatWriteRam16((r1 + 50), static_cast<uint16_t>(r0));
    goto loc_80376D94;
}

loc_80376D6C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 50u, (r30 + 60));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword5 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 80), f0.d);
    r0 = fctiwzword5;
    MemoryInline::FlatWriteRam16((r1 + 46), static_cast<uint16_t>(r0));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 58u, (r30 + 68));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword6 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 72), f0.d);
    r0 = fctiwzword6;
    MemoryInline::FlatWriteRam16((r1 + 50), static_cast<uint16_t>(r0));
}

loc_80376D94:
{
    r3 = 0;
    r4 = (r1 + 8);
    r5 = 56;
    ctx->lr = 0x80376DA4u;
    if constexpr (KnownRegArgsCpuCall<0x80427880u>(&func_80427880)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        const auto regargs_result_80427880_256D = func_80427880_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80427880_256D);
        r4 = static_cast<uint32_t>(regargs_result_80427880_256D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80427880u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
}

loc_80376DA4:
{
    r0 = MemoryInline::FlatRead32((r1 + 116));
    ctx->lr = r0;
    r1 = (r1 + 112);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80376BD0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80376BD0_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80376BD0 func_80376BD0 preserves=true fpr_mask=0x00000000
