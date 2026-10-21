#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800CEE38(CpuContext* ctx);
extern "C" uint64_t func_800CEE38_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_80434DA8_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_addc_left_0 = 0;
    uint32_t r0_addc_left_1 = 0;
    uint32_t r0_addc_left_2 = 0;
    uint32_t r0_addc_left_3 = 0;
    uint32_t r0_ca_0 = 0;
    uint32_t r0_ca_1 = 0;
    uint32_t r0_ca_2 = 0;
    uint32_t r0_ca_3 = 0;
    uint32_t r0_not_0 = 0;
    uint32_t r0_not_1 = 0;
    uint32_t r0_not_2 = 0;
    uint32_t r0_not_3 = 0;
    uint32_t r0_subfe_rb_0 = 0;
    uint32_t r0_subfe_rb_1 = 0;
    uint32_t r0_subfe_rb_2 = 0;
    uint32_t r0_subfe_rb_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
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
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x80434DA8u);
    goto loc_80434DA8;

loc_80434DA8:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457480 (8 guest instruction(s))
    // end of inlined leaf 0x80457480
    r26 = r3;
    r4 = 0x806D0000u;
    r4 = (r4 + 27520);
    r0 = MemoryInline::FlatRead32((r4 + 176));
}

loc_80434DD0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80434F18;
    }
}

loc_80434DD4:
{
    r0 = MemoryInline::FlatRead8((r4 + 180));
}

loc_80434DDC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80434F18;
    }
}

loc_80434DE0:
{
    r27 = 10;
}

loc_80434DE8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80434DFC;
    }
}

loc_80434DEC:
{
    r0 = MemoryInline::FlatRead32((r4 + 112));
}

loc_80434DF4:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(10))) {
        goto loc_80434DFC;
    }
}

loc_80434DF8:
{
    r27 = r0;
}

loc_80434DFC:
{
    r28 = 0;
    r3 = 0x806D0000u;
    r29 = (r3 + 27520);
    r25 = 0;
    r30 = 1;
    r0 = 10;
    r31 = (r0 ^ -2147483648);
    goto loc_80434EF0;
}

loc_80434E1C:
{
    r3 = (r29 + 32);
    r0 = MemoryInline::FlatRead32((r29 + 200));
    r0 = (r0 * 12);
    r4 = (r29 + r0);
    r4 = MemoryInline::FlatRead32((r4 + 212));
    r5 = MemoryInline::FlatRead32((r29 + 204));
    r6 = MemoryInline::FlatRead32((r29 + 184));
    ctx->lr = 0x80434E3Cu;
    if constexpr (KnownRegArgsCpuCall<0x800CEE38u>(&func_800CEE38)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->xer = xer;
        const auto regargs_result_800CEE38_EAD = func_800CEE38_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800CEE38_EAD);
        r4 = static_cast<uint32_t>(regargs_result_800CEE38_EAD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->xer = xer;
        InvokeDirectCpu<0x800CEE38u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        xer = ctx->xer;
    }
}

loc_80434E40:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_80434E54;
    }
}

loc_80434E44:
{
    r0 = 1;
    MemoryInline::FlatWriteRam32((r29 + 188), r0);
    r3 = 0;
    goto loc_80434F1C;
}

loc_80434E54:
{
    r3 = MemoryInline::FlatRead32((r29 + 184));
    r0 = MemoryInline::FlatRead32((r29 + 204));
    r0 = (r3 + r0);
    MemoryInline::FlatWriteRam32((r29 + 184), r0);
    r0 = MemoryInline::FlatRead32((r29 + 200));
    r0 = (r0 * 12);
    r4 = (r29 + r0);
    r3 = MemoryInline::FlatRead32((r4 + 212));
    r0 = MemoryInline::FlatRead32(r3);
    MemoryInline::FlatWriteRam32((r29 + 204), r0);
    MemoryInline::FlatWrite32((r4 + 220), r30);
    r4 = MemoryInline::FlatRead32((r29 + 208));
    r0 = MemoryInline::FlatRead32((r29 + 200));
    r0 = (r0 * 12);
    r3 = (r29 + r0);
    MemoryInline::FlatWrite32((r3 + 216), r4);
    r3 = MemoryInline::FlatRead32((r29 + 200));
    r3 = (r3 + 1);
    r0 = (r3 + -10);
    r0_addc_left_2 = r0;
    r0 = (r0_addc_left_2 + r31);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0_addc_left_2)) + static_cast<uint64_t>(static_cast<uint32_t>(r31)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r0_subfe_rb_2 = r0;
    r0_not_2 = ~(r0);
    r0_ca_2 = (xer >> 29) & 1u;
    r0 = (r0_not_2 + r0_subfe_rb_2);
    r0 = (r0 + r0_ca_2);
    r0 = (r3 & ~r0);
    MemoryInline::FlatWriteRam32((r29 + 200), r0);
    r3 = MemoryInline::FlatRead32((r29 + 208));
    r4 = (r3 + 1);
    MemoryInline::FlatWriteRam32((r29 + 208), r4);
    r3 = MemoryInline::FlatRead32((r29 + 112));
    r0 = (r3 + -1);
}

loc_80434EC8:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(r0))) {
        goto loc_80434EEC;
    }
}

loc_80434ECC:
{
    r0 = MemoryInline::FlatRead8((r29 + 181));
}

loc_80434ED4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80434EEC;
    }
}

loc_80434ED8:
{
    MemoryInline::FlatWriteRam32((r29 + 208), r25);
    r0 = MemoryInline::FlatRead32((r29 + 132));
    MemoryInline::FlatWriteRam32((r29 + 184), r0);
    r0 = MemoryInline::FlatRead32((r29 + 116));
    MemoryInline::FlatWriteRam32((r29 + 204), r0);
}

loc_80434EEC:
{
    r28 = (r28 + 1);
}

loc_80434EF0:
{
}

loc_80434EF4:
{
    if ((static_cast<uint32_t>(r28) < static_cast<uint32_t>(r27))) {
        goto loc_80434E1C;
    }
}

loc_80434EF8:
{
    r0 = (r26 & 255);
    r3 = 0x806D0000u;
    r3 = (r3 + 27520);
    MemoryInline::FlatWriteRam8((r3 + 181), static_cast<uint8_t>(r0));
    r0 = 1;
    MemoryInline::FlatWriteRam8((r3 + 180), static_cast<uint8_t>(r0));
    r3 = 1;
    goto loc_80434F1C;
}

loc_80434F18:
{
    r3 = 0;
}

loc_80434F1C:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574CC (8 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -28), 0, 36u, true, false);
    // end of inlined leaf 0x804574CC
    r0 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->xer = xer;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80434DA8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80434DA8_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003E7F gpr_write=0x007FFFFF gpr_return=0x00000018 fpr_read=0xFF803FFF fpr_write=0xFF803FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80434DA8 func_80434DA8 preserves=true fpr_mask=0x00000000
