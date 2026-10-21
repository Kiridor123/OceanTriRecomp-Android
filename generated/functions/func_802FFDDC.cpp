#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004B108(CpuContext* ctx);
extern "C" uint64_t func_8004B108_ra58_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802FF98C(CpuContext* ctx);
extern "C" uint32_t func_802FF98C_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_802FFD7C(CpuContext* ctx);
extern "C" uint64_t func_802FFD7C_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_802FFDDC_ra58_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r6)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = arg_r6;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x802FFDDCu);
    goto loc_802FFDDC;

loc_802FFDDC:
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
    r3 = (r3 + 1156);
    r4 = 0;
    r5 = 768;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r27 = 0;
    r0 = MemoryInline::FlatRead8(r26);
}

loc_802FFE10:
{
    r3 = 0x805E0000u;
    r28 = (r3 + -19504);
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_802FFE24;
    }
}

loc_802FFE1C:
{
    r3 = 0x805E0000u;
    r28 = (r3 + -19608);
}

loc_802FFE24:
{
    r29 = (r26 + 1156);
    r31 = 100;
    r30 = 150;
    goto loc_802FFEB0;
}

loc_802FFE34:
{
    r4 = MemoryInline::FlatRead32((r13 + -17824));
    ctx->lr = 0x802FFE3Cu;
    if constexpr (KnownRegArgsCpuCall<0x8004B108u>(&func_8004B108)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8004B108_97E = func_8004B108_ra58_0_18_0(ctx, r3, r4, r6);
        r3 = static_cast<uint32_t>(regargs_result_8004B108_97E);
        r4 = static_cast<uint32_t>(regargs_result_8004B108_97E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8004B108u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_802FFE40:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802FFE9C;
    }
}

loc_802FFE44:
{
    r0 = MemoryInline::FlatRead16(r28);
    MemoryInline::FlatWrite16(r29, static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite32((r29 + 4), r3);
    r0 = MemoryInline::FlatRead8(r26);
}

loc_802FFE58:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_802FFE90;
    }
}

loc_802FFE5C:
{
    r3 = r26;
    r4 = MemoryInline::FlatRead16(r28);
    if constexpr (KnownRegArgsCpuCall<0x802FFD7Cu>(&func_802FFD7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802FFD7C_EBF = func_802FFD7C_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802FFD7C_EBF);
        r4 = static_cast<uint32_t>(regargs_result_802FFD7C_EBF >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802FFD7Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_802FFE6C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802FFE78;
    }
}

loc_802FFE70:
{
    MemoryInline::FlatWrite8((r29 + 8), static_cast<uint8_t>(r30));
    goto loc_802FFE7C;
}

loc_802FFE78:
{
    MemoryInline::FlatWrite8((r29 + 8), static_cast<uint8_t>(r31));
}

loc_802FFE7C:
{
    r3 = MemoryInline::FlatRead16((r28 + 2));
    r4 = MemoryInline::FlatRead8((r29 + 8));
    if constexpr (KnownRegArgsCpuCall<0x802FF98Cu>(&func_802FF98C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802FF98C_12D0 = func_802FF98C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_802FF98C_12D0;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802FF98Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    MemoryInline::FlatWrite16((r29 + 2), static_cast<uint16_t>(r3));
    goto loc_802FFE98;
}

loc_802FFE90:
{
    r0 = MemoryInline::FlatRead16((r28 + 2));
    MemoryInline::FlatWrite16((r29 + 2), static_cast<uint16_t>(r0));
}

loc_802FFE98:
{
    r29 = (r29 + 12);
}

loc_802FFE9C:
{
    r28 = (r28 + 6);
    r27 = (r27 + 1);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r27)));
}

loc_802FFEAC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(64))) {
        goto loc_802FFEBC;
    }
}

loc_802FFEB0:
{
    r3 = MemoryInline::FlatRead16(r28);
}

loc_802FFEB8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802FFE34;
    }
}

loc_802FFEBC:
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
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802FFDDC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802FFDDC_ra58_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[6]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000205F gpr_write=0x0000087B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802FFDDC func_802FFDDC preserves=true fpr_mask=0x00000000
