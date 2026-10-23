#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803AFEB0(CpuContext* ctx);
extern "C" uint64_t func_803AFEB0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803AFF98(CpuContext* ctx);
extern "C" uint64_t func_803AFF98_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_804514C8(CpuContext* ctx);
extern "C" uint64_t func_804514C8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_80339C58_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;

    goto loc_80339C58;

loc_80339C58:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r30 = r4;
    r3 = 0;
    // inline leaf 0x800CFAF4 (16 guest instruction(s))
}

loc_inl0_0x800CFAF4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl0_0x800CFB04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x800CFB10;
    }
}

loc_inl0_0x800CFB08:
{
    r3 = 0;
    goto loc_inl0_cont_800CFAF4;
}

loc_inl0_0x800CFB10:
{
    r0 = (r3 & 255);
}

loc_inl0_0x800CFB18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl0_0x800CFB24;
    }
}

loc_inl0_0x800CFB1C:
{
    r3 = 0;
    goto loc_inl0_cont_800CFAF4;
}

loc_inl0_0x800CFB24:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl0_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    r4 = r3;
}

loc_80339C80:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80339DE0;
    }
}

loc_80339C84:
{
    r31 = MemoryInline::FlatRead32((r3 + 220));
}

loc_80339C8C:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_80339DE0;
    }
}

loc_80339C90:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 4), 0, 24u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 23u, (r30 + 27));
}

loc_80339C98:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80339D40;
    }
}

loc_80339C9C:
{
    // inline leaf 0x80451720 (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16440));
    r3 = MemoryInline::FlatRead32((r3 + 68));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 134217727);
    // end of inlined leaf 0x80451720
}

loc_80339CA4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80339DE0;
    }
}

loc_80339CA8:
{
    r0 = MemoryInline::FlatRead8((r31 + 27200));
}

loc_80339CB0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80339DE0;
    }
}

loc_80339CB4:
{
    // inline leaf 0x800CF3E8 (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 39));
    // end of inlined leaf 0x800CF3E8
    r4 = (r3 & 255);
    r3 = (r1 + 8);
    r5 = 13;
    r6 = 25;
    // inline leaf 0x80334A98 (6 guest instruction(s))
    r0 = 0;
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 28u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, r3, static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r3 + 1), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r3 + 2), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r3 + 3), static_cast<uint8_t>(r6));
    // end of inlined leaf 0x80334A98
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r30 + 4));
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r1 + 12), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r30 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r1 + 16), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r30 + 12));
    MemoryInline::WriteResolved32(guest_range_1, 12u, (r1 + 20), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r30 + 16));
    MemoryInline::WriteResolved32(guest_range_1, 16u, (r1 + 24), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 16u, (r30 + 20));
    MemoryInline::WriteResolved8(guest_range_1, 20u, (r1 + 28), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 17u, (r30 + 21));
    MemoryInline::WriteResolved8(guest_range_1, 21u, (r1 + 29), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 18u, (r30 + 22));
    MemoryInline::WriteResolved8(guest_range_1, 22u, (r1 + 30), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 19u, (r30 + 23));
    MemoryInline::WriteResolved8(guest_range_1, 23u, (r1 + 31), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 20u, (r30 + 24));
    MemoryInline::WriteResolved8(guest_range_1, 24u, (r1 + 32), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 21u, (r30 + 25));
    MemoryInline::WriteResolved8(guest_range_1, 25u, (r1 + 33), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 22u, (r30 + 26));
    MemoryInline::WriteResolved8(guest_range_1, 26u, (r1 + 34), static_cast<uint8_t>(r0));
    r30 = 1;
    MemoryInline::WriteResolved8(guest_range_1, 27u, (r1 + 35), static_cast<uint8_t>(r30));
    r3 = (r1 + 8);
    r4 = 28;
    ctx->lr = 0x80339D38u;
    if constexpr (KnownRegArgsCpuCall<0x804514C8u>(&func_804514C8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_804514C8_1BE0 = func_804514C8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804514C8_1BE0);
        r4 = static_cast<uint32_t>(regargs_result_804514C8_1BE0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x804514C8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    MemoryInline::FlatWrite8((r31 + 27200), static_cast<uint8_t>(r30));
    goto loc_80339DE0;
}

loc_80339D40:
{
    r0 = MemoryInline::FlatRead8((r3 + 250));
}

loc_80339D48:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(2))) {
        goto loc_80339DE0;
    }
}

loc_80339D4C:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r30 + 4));
    MemoryInline::FlatWrite32((r31 + 36), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r30 + 8));
    MemoryInline::FlatWrite32((r31 + 148), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r30 + 12));
    MemoryInline::FlatWrite32((r31 + 244), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r30 + 16));
    MemoryInline::FlatWrite32((r31 + 340), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 16u, (r30 + 20));
    MemoryInline::FlatWrite8((r3 + 250), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 17u, (r30 + 21));
    MemoryInline::FlatWrite8((r31 + 27240), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 18u, (r30 + 22));
    MemoryInline::FlatWrite8((r31 + 27194), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 19u, (r30 + 23));
    MemoryInline::FlatWrite8((r31 + 27195), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 20u, (r30 + 24));
    MemoryInline::FlatWrite8((r3 + 253), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 21u, (r30 + 25));
    MemoryInline::FlatWrite8((r3 + 252), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 22u, (r30 + 26));
    MemoryInline::FlatWrite8((r3 + 251), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 250));
    MemoryInline::FlatWrite8((r31 + 27196), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 252));
    MemoryInline::FlatWrite8((r31 + 27198), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 251));
    MemoryInline::FlatWrite8((r31 + 27199), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 250));
}

loc_80339DC4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(5))) {
        goto loc_80339DD8;
    }
}

loc_80339DC8:
{
    r3 = r31;
    r5 = MemoryInline::FlatRead8((r31 + 27240));
    ctx->lr = 0x80339DD4u;
    if constexpr (KnownRegArgsCpuCall<0x803AFEB0u>(&func_803AFEB0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_803AFEB0_2B8A = func_803AFEB0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803AFEB0_2B8A);
        r4 = static_cast<uint32_t>(regargs_result_803AFEB0_2B8A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r13 = ctx->gpr[13];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x803AFEB0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r13 = ctx->gpr[13];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_80339DE0;
}

loc_80339DD8:
{
    r3 = r31;
    ctx->lr = 0x80339DE0u;
    if constexpr (KnownRegArgsCpuCall<0x803AFF98u>(&func_803AFF98)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_803AFF98_324C = func_803AFF98_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_803AFF98_324C);
        r4 = static_cast<uint32_t>(regargs_result_803AFF98_324C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x803AFF98u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
    }
}

loc_80339DE0:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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

extern "C" void func_80339C58(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80339C58_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x003FFFFF gpr_return=0x00000018 fpr_read=0xF8003FFF fpr_write=0xF8003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80339C58 func_80339C58 preserves=true fpr_mask=0x00000000
