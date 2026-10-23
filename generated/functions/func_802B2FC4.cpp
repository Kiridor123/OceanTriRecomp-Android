#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802B0BE0(CpuContext* ctx);
extern "C" uint64_t func_802B0BE0_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_802B2FC4_ra38_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;

    goto loc_802B2FC4;

loc_802B2FC4:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r11 = (r1 + 80);
    // inline leaf 0x8045747C (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    // end of inlined leaf 0x8045747C
    r24 = r3;
    r25 = r4;
    r30 = 0;
    r29 = 0;
    r28 = 0;
    r27 = 0;
    r0 = (r4 & 255);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3 = (r3 + r0);
    r26 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r1 + 32);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r0 = (r25 & 255);
}

loc_802B3010:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802B3040;
    }
}

loc_802B3014:
{
    r0 = MemoryInline::FlatRead8((r24 + 3013));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = 0x805D0000u;
    r3 = (r3 + -508);
    r3_addr_0 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_0);
}

loc_802B302C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802B329C;
    }
}

loc_802B3030:
{
    r0 = MemoryInline::FlatRead8((r24 + 3014));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3_addr_1 = (r3 + r0);
    r30 = MemoryInline::FlatRead32(r3_addr_1);
    goto loc_802B30D0;
}

loc_802B3040:
{
}

loc_802B3044:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802B329C;
    }
}

loc_802B3048:
{
    r0 = MemoryInline::FlatRead8((r24 + 3013));
}

loc_802B3050:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_802B3078;
    }
}

loc_802B3054:
{
}

loc_802B3058:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(12))) {
        goto loc_802B3078;
    }
}

loc_802B305C:
{
}

loc_802B3060:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_802B309C;
    }
}

loc_802B3064:
{
}

loc_802B3068:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(14))) {
        goto loc_802B309C;
    }
}

loc_802B306C:
{
}

loc_802B3070:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(9))) {
        goto loc_802B30B4;
    }
}

loc_802B3074:
{
    goto loc_802B30D0;
}

loc_802B3078:
{
    r0 = MemoryInline::FlatRead8((r24 + 3014));
}

loc_802B3080:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(7))) {
        goto loc_802B308C;
    }
}

loc_802B3084:
{
    r30 = (r13 + -27408);
    goto loc_802B30D0;
}

loc_802B308C:
{
}

loc_802B3090:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(12))) {
        goto loc_802B30D0;
    }
}

loc_802B3094:
{
    r30 = (r13 + -27376);
    goto loc_802B30D0;
}

loc_802B309C:
{
    r0 = MemoryInline::FlatRead8((r24 + 3014));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r3 = 0x805D0000u;
    r3 = (r3 + -564);
    r3_addr_4 = (r3 + r0);
    r30 = MemoryInline::FlatRead32(r3_addr_4);
    goto loc_802B30D0;
}

loc_802B30B4:
{
    r0 = MemoryInline::FlatRead8((r24 + 3014));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3 = (r13 + -27224);
    r3_addr_3 = (r3 + r0);
    r30 = MemoryInline::FlatRead32(r3_addr_3);
    r29 = 1;
}

loc_802B30D0:
{
}

loc_802B30D4:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_802B329C;
    }
}

loc_802B30D8:
{
}

loc_802B30DC:
{
    if ((static_cast<uint32_t>(r29) != static_cast<uint32_t>(1))) {
        goto loc_802B3154;
    }
}

loc_802B30E0:
{
    r0 = (r25 & 255);
}

loc_802B30E8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802B3154;
    }
}

loc_802B30EC:
{
    r3 = (r1 + 20);
    ctx->lr = 0x802B30F4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x802BDD44u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r3 = (r1 + 32);
    r4 = (r1 + 20);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    // inline leaf 0x800CF3E8 (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 39));
    // end of inlined leaf 0x800CF3E8
    r28 = (r3 & 255);
    r3 = (r1 + 32);
    // inline leaf 0x802B06EC (6 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13856));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
    r3 = cr;
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x802B06EC
}

loc_802B3114:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802B3128;
    }
}

loc_802B3118:
{
    r31 = MemoryInline::FlatRead32(r30);
    r30 = MemoryInline::FlatRead32((r30 + 4));
    r29 = 1;
    goto loc_802B3134;
}

loc_802B3128:
{
    r31 = MemoryInline::FlatRead32((r30 + 4));
    r30 = MemoryInline::FlatRead32(r30);
    r29 = 2;
}

loc_802B3134:
{
    r0 = (r25 & 255);
    r4 = (r24 + r0);
    r3 = MemoryInline::FlatRead8((r4 + 3093));
    r0 = MemoryInline::FlatRead8((r4 + 3097));
}

loc_802B3148:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_802B31A4;
    }
}

loc_802B314C:
{
    r27 = 1;
    goto loc_802B31A4;
}

loc_802B3154:
{
    r3 = (r1 + 8);
    ctx->lr = 0x802B315Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x802BDD44u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13912));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_802B3168:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_802B3180;
    }
}

loc_802B3170:
{
    r31 = MemoryInline::FlatRead32(r30);
    r30 = MemoryInline::FlatRead32((r30 + 4));
    r29 = 1;
    goto loc_802B318C;
}

loc_802B3180:
{
    r31 = MemoryInline::FlatRead32((r30 + 4));
    r30 = MemoryInline::FlatRead32(r30);
    r29 = 2;
}

loc_802B318C:
{
    r0 = (r25 & 255);
    r3 = (r24 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 3093));
}

loc_802B319C:
{
    if ((static_cast<uint32_t>(r29) == static_cast<uint32_t>(r0))) {
        goto loc_802B31A4;
    }
}

loc_802B31A0:
{
    r27 = 1;
}

loc_802B31A4:
{
    r3 = r24;
    r4 = MemoryInline::FlatRead8((r24 + 3014));
    ctx->lr = 0x802B31B0u;
    if constexpr (KnownRegArgsCpuCall<0x802B0BE0u>(&func_802B0BE0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_802B0BE0_2606 = func_802B0BE0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802B0BE0_2606);
        r4 = static_cast<uint32_t>(regargs_result_802B0BE0_2606 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x802B0BE0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_802B31B4:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_802B3288;
    }
}

loc_802B31B8:
{
    r27 = 2;
    goto loc_802B325C;
}

loc_802B31C0:
{
    r5 = 0;
    ctr = r27;
}

loc_802B31C8:
{
    r0 = (r5 & 255);
    r3 = (r24 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 11949));
}

loc_802B31D8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_802B324C;
    }
}

loc_802B31DC:
{
}

loc_802B31E0:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(r0))) {
        goto loc_802B3258;
    }
}

loc_802B31E4:
{
    r5 = (r5 + 1);
    r0 = (r5 & 255);
    r3 = (r24 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 11949));
}

loc_802B31F8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_802B324C;
    }
}

loc_802B31FC:
{
}

loc_802B3200:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(r0))) {
        goto loc_802B3258;
    }
}

loc_802B3204:
{
    r5 = (r5 + 1);
    r0 = (r5 & 255);
    r3 = (r24 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 11949));
}

loc_802B3218:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_802B324C;
    }
}

loc_802B321C:
{
}

loc_802B3220:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(r0))) {
        goto loc_802B3258;
    }
}

loc_802B3224:
{
    r5 = (r5 + 1);
    r0 = (r5 & 255);
    r3 = (r24 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 11949));
}

loc_802B3238:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_802B324C;
    }
}

loc_802B323C:
{
}

loc_802B3240:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(r0))) {
        goto loc_802B3258;
    }
}

loc_802B3244:
{
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_802B31C8;
    }
}

loc_802B324C:
{
    r3 = r26;
    r5 = 1;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800E3154u>(ctx);
}

loc_802B3258:
{
    r31 = (r31 + 1);
}

loc_802B325C:
{
    r4 = MemoryInline::FlatRead8(r31);
}

loc_802B3264:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(255))) {
        goto loc_802B31C0;
    }
}

loc_802B3268:
{
    goto loc_802B327C;
}

loc_802B326C:
{
    r3 = r26;
    r5 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800E3154u>(ctx);
    r30 = (r30 + 1);
}

loc_802B327C:
{
    r4 = MemoryInline::FlatRead8(r30);
}

loc_802B3284:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(255))) {
        goto loc_802B326C;
    }
}

loc_802B3288:
{
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r3 = (r24 + r0);
    r0 = (r25 & 255);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite8((r3 + 3093), static_cast<uint8_t>(r29));
}

loc_802B329C:
{
    r11 = (r1 + 80);
    // inline leaf 0x804574C8 (9 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, true, false);
    // end of inlined leaf 0x804574C8
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802B2FC4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802B2FC4_ra38_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802B2FC4 func_802B2FC4 preserves=true fpr_mask=0x00000000
