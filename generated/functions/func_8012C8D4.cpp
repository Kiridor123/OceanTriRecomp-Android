#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800CFAF4(CpuContext* ctx);
extern "C" uint64_t func_800CFAF4_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_800CFB34(CpuContext* ctx);
extern "C" uint64_t func_800CFB34_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8012CE58(CpuContext* ctx);
extern "C" uint64_t func_8012CE58_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8012D118(CpuContext* ctx);
extern "C" uint64_t func_8012D118_ra18_2_18_0(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_8012D20C(CpuContext* ctx);
extern "C" uint64_t func_8012D20C_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_8012C8D4_ra38_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;

    goto loc_8012C8D4;

loc_8012C8D4:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r26 = r3;
    r30 = r4;
    r0 = MemoryInline::FlatRead8((r3 + 2396));
}

loc_8012C8F8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(4))) {
        goto loc_8012C904;
    }
}

loc_8012C8FC:
{
    r3 = 0;
    goto loc_8012C9F8;
}

loc_8012C904:
{
    r0 = MemoryInline::FlatRead16((r3 + 2326));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8012C90C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_8012C918;
    }
}

loc_8012C910:
{
    r3 = 0;
    goto loc_8012C9F8;
}

loc_8012C918:
{
    r0 = MemoryInline::FlatRead8((r3 + 908));
    r0 = (r0 & 1);
}

loc_8012C924:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8012C930;
    }
}

loc_8012C928:
{
    r3 = 0;
    goto loc_8012C9F8;
}

loc_8012C930:
{
    r4 = 2;
    // inline leaf 0x801307DC (11 guest instruction(s))
}

loc_inl1_0x801307DC:
{
    r0 = MemoryInline::FlatRead8((r3 + 1085));
    r5 = (r4 & 255);
}

loc_inl1_0x801307E8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r5))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x801307EC:
{
    MemoryInline::FlatWrite8((r3 + 1085), static_cast<uint8_t>(r4));
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 1090), static_cast<uint16_t>(r0));
}

loc_inl1_0x801307FC:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(1))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x80130800:
{
    MemoryInline::FlatWrite8((r3 + 1082), static_cast<uint8_t>(r0));
    goto loc_inl1_cont_801307DC;
}

loc_inl1_return:
{
}

loc_inl1_cont_801307DC:
{
    // end of inlined leaf 0x801307DC
    r3 = r26;
    r4 = 4;
    // inline leaf 0x8013A8E8 (12 guest instruction(s))
}

loc_inl2_0x8013A8E8:
{
    r3 = MemoryInline::FlatRead32((r3 + 2388));
}

loc_inl2_0x8013A8F0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_inl2_0x8013A8FC;
    }
}

loc_inl2_0x8013A8F4:
{
    r3 = 0;
    goto loc_inl2_cont_8013A8E8;
}

loc_inl2_0x8013A8FC:
{
    r0 = (r4 & 255);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
}

loc_inl2_cont_8013A8E8:
{
    // end of inlined leaf 0x8013A8E8
}

loc_8012C948:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8012C9F4;
    }
}

loc_8012C94C:
{
    r3 = 2;
    if constexpr (KnownRegArgsCpuCall<0x800CFB34u>(&func_800CFB34)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800CFB34_13CD = func_800CFB34_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_800CFB34_13CD);
        r4 = static_cast<uint32_t>(regargs_result_800CFB34_13CD >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800CFB34u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r28 = (r3 & 65535);
    r3 = 2;
    if constexpr (KnownRegArgsCpuCall<0x800CFAF4u>(&func_800CFAF4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800CFAF4_1670 = func_800CFAF4_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_800CFAF4_1670);
        r4 = static_cast<uint32_t>(regargs_result_800CFAF4_1670 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800CFAF4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r29 = r3;
    r0 = 255;
    MemoryInline::FlatWrite8((r26 + 1944), static_cast<uint8_t>(r0));
    r27 = 0;
    r31 = 1;
    r30 = (r30 & 255);
    goto loc_8012C9D0;
}

loc_8012C97C:
{
    r0 = MemoryInline::FlatRead8(r29);
}

loc_8012C984:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8012C9C8;
    }
}

loc_8012C988:
{
    r3 = MemoryInline::FlatRead8((r29 + 8));
    ctx->lr = 0x8012C990u;
    if constexpr (KnownRegArgsCpuCall<0x8012D20Cu>(&func_8012D20C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8012D20C_1ABA = func_8012D20C_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8012D20C_1ABA);
        r4 = static_cast<uint32_t>(regargs_result_8012D20C_1ABA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8012D20Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_8012C994:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8012C9C8;
    }
}

loc_8012C998:
{
    r0 = (r27 & 255);
    r0 = PPC_Slw(static_cast<uint32_t>(r31), static_cast<uint32_t>(r0));
    r0 = (r30 & r0);
}

loc_8012C9A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8012C9C8;
    }
}

loc_8012C9AC:
{
    r3 = r26;
    r4 = r29;
    ctx->lr = 0x8012C9B8u;
    if constexpr (KnownRegArgsCpuCall<0x8012D118u>(&func_8012D118)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8012D118_1F44 = func_8012D118_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_8012D118_1F44);
        r4 = static_cast<uint32_t>(regargs_result_8012D118_1F44 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x8012D118u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
    }
}

loc_8012C9BC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8012C9C8;
    }
}

loc_8012C9C0:
{
    MemoryInline::FlatWrite8((r26 + 1944), static_cast<uint8_t>(r27));
    goto loc_8012C9DC;
}

loc_8012C9C8:
{
    r27 = (r27 + 1);
    r29 = (r29 + 2848);
}

loc_8012C9D0:
{
    r0 = (r27 & 255);
}

loc_8012C9D8:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r28))) {
        goto loc_8012C97C;
    }
}

loc_8012C9DC:
{
    r3 = r26;
    r4 = 4;
    r5 = 0;
    ctx->lr = 0x8012C9ECu;
    if constexpr (KnownRegArgsCpuCall<0x8012CE58u>(&func_8012CE58)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8012CE58_248E = func_8012CE58_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8012CE58_248E);
        r4 = static_cast<uint32_t>(regargs_result_8012CE58_248E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8012CE58u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = 1;
    goto loc_8012C9F8;
}

loc_8012C9F4:
{
    r3 = 0;
}

loc_8012C9F8:
{
    r11 = (r1 + 32);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8012C8D4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8012C8D4_ra38_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000207F gpr_write=0x0000087B gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8012C8D4 func_8012C8D4 preserves=true fpr_mask=0x00000000
