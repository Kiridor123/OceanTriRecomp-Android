#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802743D4(CpuContext* ctx);
extern "C" uint64_t func_802743D4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80315A30(CpuContext* ctx);
extern "C" uint32_t func_80315A30_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_803167E4_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x803167E4u);
    goto loc_803167E4;

loc_803167E4:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x80457478 (10 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, false, true);
    // end of inlined leaf 0x80457478
    r25 = r3;
    r26 = r5;
    r27 = r6;
    r23 = MemoryInline::FlatRead32((r4 + 12));
    r31 = MemoryInline::FlatRead32(r4);
    r30 = 0;
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    r29 = 0;
    r28 = 0;
    r3 = (r5 & 255);
    if constexpr (KnownRegArgsCpuCall<0x80315A30u>(&func_80315A30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80315A30_86A = func_80315A30_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80315A30_86A;
        r0 = ctx->gpr[0];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->cr = cr;
        InvokeDirectCpu<0x80315A30u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r24 = r3;
    r3 = (r3 & 255);
    r0 = (r3 + -1);
}

loc_80316838:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_8031684C;
    }
}

loc_8031683C:
{
    r0 = (r3 + -5);
}

loc_80316844:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_8031690C;
    }
}

loc_80316848:
{
    goto loc_8031693C;
}

loc_8031684C:
{
    r4 = MemoryInline::FlatRead8(r23);
    r0 = (r4 + 245);
    r0 = (r0 & 255);
}

loc_8031685C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(2))) {
        goto loc_80316868;
    }
}

loc_80316860:
{
    r3 = 0;
    goto loc_8031687C;
}

loc_80316868:
{
}

loc_8031686C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80316878;
    }
}

loc_80316870:
{
    r3 = r25;
    goto loc_8031687C;
}

loc_80316878:
{
    r3 = 0;
}

loc_8031687C:
{
    r4 = r23;
    r5 = 0;
    r6 = 0;
    r7 = (r1 + 8);
    ctx->lr = 0x80316890u;
    if constexpr (KnownRegArgsCpuCall<0x802743D4u>(&func_802743D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_802743D4_EE1 = func_802743D4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802743D4_EE1);
        r4 = static_cast<uint32_t>(regargs_result_802743D4_EE1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        InvokeDirectCpu<0x802743D4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r28 = r3;
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    r0 = (r24 & 255);
}

loc_803168A4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_803168AC;
    }
}

loc_803168A8:
{
    goto loc_803168B0;
}

loc_803168AC:
{
    r25 = 0;
}

loc_803168B0:
{
    r3 = r25;
    r4 = r31;
    r5 = 0;
    r6 = 0;
    r7 = (r1 + 8);
    ctx->lr = 0x803168C8u;
    if constexpr (KnownRegArgsCpuCall<0x802743D4u>(&func_802743D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_802743D4_150F = func_802743D4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802743D4_150F);
        r4 = static_cast<uint32_t>(regargs_result_802743D4_150F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        InvokeDirectCpu<0x802743D4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r29 = r3;
}

loc_803168D0:
{
    if ((static_cast<int32_t>(r25) != static_cast<int32_t>(0))) {
        goto loc_80316904;
    }
}

loc_803168D4:
{
    r0 = MemoryInline::FlatRead8((r1 + 8));
}

loc_803168DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80316904;
    }
}

loc_803168E0:
{
    r3 = 0x805E0000u;
    r3 = (r3 + -11108);
    r4 = 8638;
    r5 = 0x805E0000u;
    r5 = (r5 + -11088);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x803168FCu;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
}

loc_80316904:
{
    r30 = (r30 | 1);
    goto loc_8031693C;
}

loc_8031690C:
{
}

loc_80316910:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(5))) {
        goto loc_8031691C;
    }
}

loc_80316914:
{
    r3 = r25;
    goto loc_80316920;
}

loc_8031691C:
{
    r3 = 0;
}

loc_80316920:
{
    r4 = r31;
    r5 = 0;
    r6 = 0;
    r7 = (r1 + 8);
    ctx->lr = 0x80316934u;
    if constexpr (KnownRegArgsCpuCall<0x802743D4u>(&func_802743D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_802743D4_1F02 = func_802743D4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802743D4_1F02);
        r4 = static_cast<uint32_t>(regargs_result_802743D4_1F02 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        InvokeDirectCpu<0x802743D4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r29 = r3;
    r30 = (r30 | 1);
}

loc_8031693C:
{
    r0 = (r30 & 255);
    r0 = (r0 & 1);
}

loc_80316948:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803169C0;
    }
}

loc_8031694C:
{
    r3 = (r26 & 255);
    r0 = (r3 & 8);
}

loc_80316958:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80316988;
    }
}

loc_8031695C:
{
    r0 = (r3 & 1);
}

loc_80316964:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80316988;
    }
}

loc_80316968:
{
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r28)));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r29)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_80316974:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80316988;
    }
}

loc_80316978:
{
    r0 = 4;
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80316984;
    }
}

loc_80316980:
{
    r0 = 2;
}

loc_80316984:
{
    r30 = (r30 | r0);
}

loc_80316988:
{
    r0 = (r26 & 255);
    r0 = (r0 & 4);
}

loc_80316994:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803169BC;
    }
}

loc_80316998:
{
    r0 = MemoryInline::FlatRead8((r1 + 8));
}

loc_803169A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_803169B0;
    }
}

loc_803169A4:
{
}

loc_803169A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_803169B8;
    }
}

loc_803169AC:
{
    goto loc_803169BC;
}

loc_803169B0:
{
    r30 = (r30 | 8);
    goto loc_803169BC;
}

loc_803169B8:
{
    r30 = (r30 | 16);
}

loc_803169BC:
{
    MemoryInline::FlatWrite16(r27, static_cast<uint16_t>(r29));
}

loc_803169C0:
{
    r3 = r30;
    r11 = (r1 + 64);
    // inline leaf 0x804574C4 (10 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, true, false);
    // end of inlined leaf 0x804574C4
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803167E4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803167E4_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000000FB gpr_write=0x000008FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803167E4 func_803167E4 preserves=true fpr_mask=0x00000000
