#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802CC160(CpuContext* ctx);
extern "C" uint32_t func_802CC160_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_802D2A64(CpuContext* ctx);
extern "C" uint64_t func_802D2A64_ra38_1fc_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double);
extern "C" void func_802D6B90(CpuContext* ctx);
extern "C" uint32_t func_802D6B90_ra18_0_10_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_802D7804(CpuContext* ctx);
extern "C" uint32_t func_802D7804_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_802CC210_ra38_1fc_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
    uint32_t r4_addr_6 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;

    MKW_GUEST_ENTER(0x802CC210u);
    goto loc_802CC210;

loc_802CC210:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = r3;
    r30 = 0;
    r6 = 0;
    r5 = MemoryInline::FlatRead16((r3 + 1010));
    r4 = (r1 + 8);
    r0 = MemoryInline::FlatRead16((r3 + 1024));
    r0 = (r5 & r0);
}

loc_802CC248:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802CC254;
    }
}

loc_802CC24C:
{
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r6));
    r30 = 1;
}

loc_802CC254:
{
    r6 = 1;
    r0 = MemoryInline::FlatRead16((r3 + 1026));
    r0 = (r5 & r0);
}

loc_802CC264:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802CC270;
    }
}

loc_802CC268:
{
    r4_addr_1 = (r4 + r30);
    MemoryInline::FlatWrite8(r4_addr_1, static_cast<uint8_t>(r6));
    r30 = (r30 + 1);
}

loc_802CC270:
{
    r6 = 2;
    r0 = MemoryInline::FlatRead16((r3 + 1028));
    r0 = (r5 & r0);
}

loc_802CC280:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802CC290;
    }
}

loc_802CC284:
{
    r0 = (r30 & 255);
    r4_addr_3 = (r4 + r0);
    MemoryInline::FlatWrite8(r4_addr_3, static_cast<uint8_t>(r6));
    r30 = (r30 + 1);
}

loc_802CC290:
{
    r6 = 3;
    r0 = MemoryInline::FlatRead16((r3 + 1030));
    r0 = (r5 & r0);
}

loc_802CC2A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802CC2B0;
    }
}

loc_802CC2A4:
{
    r0 = (r30 & 255);
    r4_addr_5 = (r4 + r0);
    MemoryInline::FlatWrite8(r4_addr_5, static_cast<uint8_t>(r6));
    r30 = (r30 + 1);
}

loc_802CC2B0:
{
    r0 = (r30 & 255);
}

loc_802CC2B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802CC33C;
    }
}

loc_802CC2BC:
{
    r3 = 1;
    // inline leaf 0x800CEF20 (23 guest instruction(s))
}

loc_inl0_0x800CEF20:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r6 = (r4 + r0);
    r0 = MemoryInline::FlatRead16((r6 + 24));
}

loc_inl0_0x800CEF38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x800CEF40;
    }
}

loc_inl0_0x800CEF3C:
{
    r0 = 1;
}

loc_inl0_0x800CEF40:
{
    r5 = (r0 * 176);
    r3 = 11337728;
    r0 = (r3 + 30009);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r5)) >> 32));
    r0 = (r5 - r3);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_2 & 2147483647);
    r0 = (r0 + r3);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_1 & 131071);
    r3 = 65536;
    r0 = (r3 + -173);
    r0 = (r4 * r0);
    r0 = (r5 - r0);
    r3 = (r0 & 65535);
    MemoryInline::FlatWriteRam16((r6 + 24), static_cast<uint16_t>(r3));
}

loc_inl0_cont_800CEF20:
{
    // end of inlined leaf 0x800CEF20
    r4 = (r3 & 65535);
    r3 = (r30 & 255);
    r0 = PPC_Divw(static_cast<int32_t>(r4), static_cast<int32_t>(r3));
    r0 = (r0 * r3);
    r0 = (r4 - r0);
    r3 = (r1 + 8);
    r3_addr_1 = (r3 + r0);
    r30 = MemoryInline::FlatRead8(r3_addr_1);
    r3 = (r31 + r30);
    r29 = MemoryInline::FlatRead8((r3 + 1016));
    r0 = MemoryInline::FlatRead8((r31 + 368));
}

loc_802CC2F0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_802CC300;
    }
}

loc_802CC2F4:
{
    r3 = r29;
    if constexpr (KnownRegArgsCpuCall<0x802CC160u>(&func_802CC160)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802CC160_15DE = func_802CC160_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_802CC160_15DE;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x802CC160u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
    r29 = r3;
}

loc_802CC300:
{
    r3 = (r31 + r30);
    r3 = MemoryInline::FlatRead8((r3 + 1020));
    if constexpr (KnownRegArgsCpuCall<0x802D7804u>(&func_802D7804)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802D7804_1817 = func_802D7804_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_802D7804_1817;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x802D7804u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
    r3 = (r3 & 255);
    // inline leaf 0x802D7840 (10 guest instruction(s))
}

loc_inl1_0x802D7840:
{
    r0 = (r3 & 255);
}

loc_inl1_0x802D7848:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_inl1_0x802D7860;
    }
}

loc_inl1_0x802D784C:
{
}

loc_inl1_0x802D7850:
{
    r3 = 30;
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x802D7858:
{
    r3 = 70;
    goto loc_inl1_cont_802D7840;
}

loc_inl1_0x802D7860:
{
    r3 = 50;
    goto loc_inl1_cont_802D7840;
}

loc_inl1_return:
{
}

loc_inl1_cont_802D7840:
{
    // end of inlined leaf 0x802D7840
    r0 = r3;
    r3 = r31;
    r0 = (0 - r0);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    if constexpr (KnownRegArgsCpuCall<0x802D6B90u>(&func_802D6B90)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802D6B90_1CE1 = func_802D6B90_ra18_0_10_0(ctx, r3, r4);
        r4 = regargs_result_802D6B90_1CE1;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802D6B90u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
    }
    r3 = r31;
    r4 = 1;
    r5 = (r29 & 65535);
    r6 = 0;
    ctx->lr = 0x802CC33Cu;
    if constexpr (KnownRegArgsCpuCall<0x802D2A64u>(&func_802D2A64)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_802D2A64_1F47 = func_802D2A64_ra38_1fc_18_0(ctx, r3, r4, r5, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802D2A64_1F47);
        r4 = static_cast<uint32_t>(regargs_result_802D2A64_1F47 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x802D2A64u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
}

loc_802CC33C:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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

extern "C" void func_802CC210(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802CC210_ra38_1fc_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFD fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802CC210 func_802CC210 preserves=true fpr_mask=0x00000000
