#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80477E60(CpuContext* ctx);
extern "C" uint64_t func_80477E60_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80480618(CpuContext* ctx);
extern "C" uint64_t func_80480618_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804D5400(CpuContext* ctx);
extern "C" uint64_t func_804D5400_ra0_0_18_0(CpuContext*);
extern "C" void func_804FA160(CpuContext* ctx);
extern "C" void func_804FA160_ra38_1fe_0_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_804EBE80_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
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
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r5_addr_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
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
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_804EBE80;

loc_804EBE80:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x8045747C (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    // end of inlined leaf 0x8045747C
    r5 = 0x80760000u;
    r0 = MemoryInline::FlatRead32(r4);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r3 = (r3_rot_0 & -4);
    r25 = MemoryInline::FlatRead16((r4 + 26));
    r5 = (r5 + -10352);
    r24 = r4;
    r5_addr_0 = (r5 + r3);
    r28 = MemoryInline::FlatRead32(r5_addr_0);
    r27 = (r0 & 255);
    r26 = (r4 + 4);
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x804D12F0
    r29 = MemoryInline::FlatRead8((r28 + 2243));
    r31 = r3;
    r4 = MemoryInline::FlatRead32((r28 + 2236));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r29)));
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_804EBED8;
    }
}

loc_804EBED0:
{
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl2_0x804D1330:
{
}

loc_inl2_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl2_0x804D1344;
    }
}

loc_inl2_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl2_0x804D1348;
}

loc_inl2_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl2_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_2 & 1);
}

loc_inl2_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
    goto loc_804EC03C;
}

loc_804EBED8:
{
    r0 = -2;
    MemoryInline::FlatWrite32((r28 + 2236), r0);
}

loc_804EBEE4:
{
    r3 = MemoryInline::FlatRead32((r28 + 2260));
    r0 = MemoryInline::FlatRead32((r13 + -14128));
    r30 = (r3 & r0);
    if ((static_cast<uint32_t>(r27) != static_cast<uint32_t>(16))) {
        goto loc_804EBEFC;
    }
}

loc_804EBEF4:
{
    MemoryInline::FlatWrite32((r28 + 2236), r4);
    goto loc_804EBFB0;
}

loc_804EBEFC:
{
}

loc_804EBF00:
{
    if ((static_cast<uint32_t>(r27) != static_cast<uint32_t>(24))) {
        goto loc_804EBF18;
    }
}

loc_804EBF04:
{
    MemoryInline::FlatWrite32((r28 + 2236), r4);
    r3 = MemoryInline::FlatRead8((r28 + 2255));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite8((r28 + 2255), static_cast<uint8_t>(r0));
    goto loc_804EBFB0;
}

loc_804EBF18:
{
}

loc_804EBF1C:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(22))) {
        goto loc_804EBF7C;
    }
}

loc_804EBF20:
{
}

loc_804EBF24:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(23))) {
        goto loc_804EBF34;
    }
}

loc_804EBF28:
{
}

loc_804EBF2C:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(21))) {
        goto loc_804EBF58;
    }
}

loc_804EBF30:
{
    goto loc_804EBF70;
}

loc_804EBF34:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r28 + 2428), r0);
    r0 = MemoryInline::FlatRead32((r24 + 36));
    MemoryInline::FlatWrite32((r28 + 2424), r0);
    r0 = MemoryInline::FlatRead16((r24 + 32));
    MemoryInline::FlatWrite16((r28 + 2432), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r24 + 28));
    MemoryInline::FlatWrite32((r28 + 2420), r0);
    goto loc_804EBF7C;
}

loc_804EBF58:
{
    MemoryInline::FlatWrite32((r28 + 2236), r4);
    r0 = 1;
    r3 = MemoryInline::FlatRead32((r24 + 40));
    MemoryInline::FlatWrite32((r28 + 2128), r3);
    MemoryInline::FlatWrite8((r28 + 2240), static_cast<uint8_t>(r0));
    goto loc_804EBF7C;
}

loc_804EBF70:
{
    r0 = MemoryInline::FlatRead8(r26);
    r0 = (r0 | 2);
    MemoryInline::FlatWrite8(r26, static_cast<uint8_t>(r0));
}

loc_804EBF7C:
{
    r0 = MemoryInline::FlatRead32((r24 + 44));
    MemoryInline::FlatWrite32((r28 + 2204), r0);
    MemoryInline::FlatWrite8((r28 + 2439), static_cast<uint8_t>(r27));
    ctx->lr = 0x804EBF8Cu;
    if constexpr (KnownRegArgsCpuCall<0x804D5400u>(&func_804D5400)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_804D5400_1B81 = func_804D5400_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_804D5400_1B81);
        r4 = static_cast<uint32_t>(regargs_result_804D5400_1B81 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x804D5400u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r6 = 0x80000000u;
    r5 = 0;
    r0 = MemoryInline::FlatRead32((r6 + 248));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_1 & 2147483646);
    r0_addc_left_1 = r0;
    r0 = (r0_addc_left_1 + r4);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0_addc_left_1)) + static_cast<uint64_t>(static_cast<uint32_t>(r4)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    MemoryInline::FlatWrite32((r28 + 2316), r0);
    r0_ca_1 = (xer >> 29) & 1u;
    r0 = (r5 + r3);
    r0 = (r0 + r0_ca_1);
    MemoryInline::FlatWrite32((r28 + 2312), r0);
    MemoryInline::FlatWrite8((r28 + 2320), static_cast<uint8_t>(r5));
}

loc_804EBFB0:
{
    r3 = r31;
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl3_0x804D1330:
{
}

loc_inl3_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl3_0x804D1344;
    }
}

loc_inl3_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl3_0x804D1348;
}

loc_inl3_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl3_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_3 & 1);
}

loc_inl3_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
    r3 = 0x80630000u;
    r5 = r27;
    r3 = (r3 + -14160);
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r29)));
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    if constexpr (KnownRegArgsCpuCall<0x804FA160u>(&func_804FA160)) {
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        func_804FA160_ra38_1fe_0_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r1 = ctx->gpr[1];
    } else {
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
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x804FA160u>(ctx);
        r1 = ctx->gpr[1];
    }
    r0 = (r25 + 18);
    r3 = (r0 & 255);
    ctx->lr = 0x804EBFDCu;
    if constexpr (KnownRegArgsCpuCall<0x80477E60u>(&func_80477E60)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_80477E60_29E3 = func_80477E60_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80477E60_29E3);
        r4 = static_cast<uint32_t>(regargs_result_80477E60_29E3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80477E60u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r4 = (r25 + 1);
    r0 = 10;
    r4 = (r4 & 255);
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r4));
    r28 = (r3 + 18);
    r24 = r3;
    MemoryInline::FlatWrite16((r3 + 4), static_cast<uint16_t>(r0));
    r4 = r26;
    r5 = r25;
    r3 = (r28 + 1);
    MemoryInline::FlatWrite8(r28, static_cast<uint8_t>(r27));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->xer = xer;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
}

loc_804EC010:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_804EC024;
    }
}

loc_804EC014:
{
    r0 = MemoryInline::FlatRead8((r28 + 1));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite8((r28 + 1), static_cast<uint8_t>(r0));
    goto loc_804EC030;
}

loc_804EC024:
{
    r0 = MemoryInline::FlatRead8((r28 + 1));
    r0 = (r0 & 254);
    MemoryInline::FlatWrite8((r28 + 1), static_cast<uint8_t>(r0));
}

loc_804EC030:
{
    r3 = r29;
    r4 = r24;
    ctx->lr = 0x804EC03Cu;
    if constexpr (KnownRegArgsCpuCall<0x80480618u>(&func_80480618)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_80480618_3211 = func_80480618_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80480618_3211);
        r4 = static_cast<uint32_t>(regargs_result_80480618_3211 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80480618u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_804EC03C:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574C8 (9 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, true, false);
    // end of inlined leaf 0x804574C8
    r0 = MemoryInline::FlatRead32((r1 + 52));
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
    ctx->cr = cr;
    ctx->xer = xer;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804EBE80(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804EBE80_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000027FB gpr_write=0x000008FB gpr_return=0x00000018 fpr_read=0x000001FE fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804EBE80 func_804EBE80 preserves=true fpr_mask=0x00000000
