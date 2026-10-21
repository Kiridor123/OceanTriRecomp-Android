#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805082C0(CpuContext* ctx);
extern "C" uint64_t func_805082C0_ra38_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);

extern "C" uint64_t func_805076D0_ra38_1e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mdest_3 = 0;
    uint32_t r0_mdest_4 = 0;
    uint32_t r0_mdest_5 = 0;
    uint32_t r0_mdest_6 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_mrot_3 = 0;
    uint32_t r0_mrot_4 = 0;
    uint32_t r0_mrot_5 = 0;
    uint32_t r0_mrot_6 = 0;
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
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
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
    uint32_t r4_rot_3 = 0;
    uint32_t r7_rot_0 = 0;
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
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x805076D0u);
    goto loc_805076D0;

loc_805076D0:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x8045747C (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    // end of inlined leaf 0x8045747C
    r7 = -1431633920;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_805076EC:
{
    r30 = (r7 + -21845);
    r25 = r5;
    r7 = (static_cast<uint32_t>((static_cast<uint64_t>(r30) * static_cast<uint64_t>(r4)) >> 32));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(31));
    r0 = (r0_rot_0 & 2147483647);
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r7 = (r7_rot_0 & -4);
    r0 = (r0 * 3);
    r5 = (r4 - r0);
    r0 = (0 - r5);
    r0 = (r0 | r5);
    r0 = (static_cast<int32_t>(r0) >> 31);
    r0 = (r0 & 4);
    r0 = (r7 + r0);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80507728;
    }
}

loc_80507720:
{
    r3 = r0;
    goto loc_80507848;
}

loc_80507728:
{
}

loc_8050772C:
{
    if ((static_cast<uint32_t>(r6) >= static_cast<uint32_t>(r0))) {
        goto loc_80507738;
    }
}

loc_80507730:
{
    r3 = -1;
    goto loc_80507848;
}

loc_80507738:
{
    r28 = r3;
    r26 = r25;
    r27 = (r3 + r4);
    r24 = 42;
    goto loc_8050783C;
}

loc_8050774C:
{
    r5 = (r27 - r28);
    r31 = 3;
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r3 = (r3_rot_2 & -8);
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r30) * static_cast<uint64_t>(r3)) >> 32));
}

loc_80507760:
{
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r4 = (r4_rot_2 & 1073741823);
    r0 = (r4 * 6);
    r3 = (r3 - r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 1);
    r29 = (r4 + r0);
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(3))) {
        goto loc_80507784;
    }
}

loc_80507780:
{
    r31 = r5;
}

loc_80507784:
{
    r3 = (r1 + 8);
    r4 = 0;
    r5 = 3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r4 = r28;
    r5 = r31;
    r3 = (r1 + 8);
    if constexpr (KnownRegArgsCpuCall<0x805082C0u>(&func_805082C0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_805082C0_1454 = func_805082C0_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_805082C0_1454);
        r4 = static_cast<uint32_t>(regargs_result_805082C0_1454 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        InvokeDirectCpu<0x805082C0u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r0 = MemoryInline::FlatRead8((r1 + 8));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
}

loc_805077AC:
{
    r3 = MemoryInline::FlatRead32((r13 + -19496));
    r0 = (static_cast<int32_t>(r0) >> 2);
    r3_addr_2 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_2);
    MemoryInline::FlatWrite8(r26, static_cast<uint8_t>(r0));
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805077E0;
    }
}

loc_805077C0:
{
    r0 = MemoryInline::FlatRead8((r1 + 9));
    r3 = MemoryInline::FlatRead8((r1 + 8));
    r0 = (static_cast<int32_t>(r0) >> 4);
    r4 = MemoryInline::FlatRead32((r13 + -19496));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(4));
    r0_mrot_2 = (r0_rot_3 & 48);
    r0_mdest_2 = (r0 & -49);
    r0 = (r0_mdest_2 | r0_mrot_2);
    r4_addr_2 = (r4 + r0);
    r0 = MemoryInline::FlatRead8(r4_addr_2);
    MemoryInline::FlatWrite8((r26 + 1), static_cast<uint8_t>(r0));
    goto loc_805077E4;
}

loc_805077E0:
{
    MemoryInline::FlatWrite8((r26 + 1), static_cast<uint8_t>(r24));
}

loc_805077E4:
{
}

loc_805077E8:
{
    if ((static_cast<uint32_t>(r29) < static_cast<uint32_t>(3))) {
        goto loc_8050780C;
    }
}

loc_805077EC:
{
    r0 = MemoryInline::FlatRead8((r1 + 10));
    r3 = MemoryInline::FlatRead8((r1 + 9));
    r0 = (static_cast<int32_t>(r0) >> 6);
    r4 = MemoryInline::FlatRead32((r13 + -19496));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0_mrot_4 = (r0_rot_5 & 60);
    r0_mdest_4 = (r0 & -61);
    r0 = (r0_mdest_4 | r0_mrot_4);
    r4_addr_4 = (r4 + r0);
    r0 = MemoryInline::FlatRead8(r4_addr_4);
    MemoryInline::FlatWrite8((r26 + 2), static_cast<uint8_t>(r0));
    goto loc_80507810;
}

loc_8050780C:
{
    MemoryInline::FlatWrite8((r26 + 2), static_cast<uint8_t>(r24));
}

loc_80507810:
{
}

loc_80507814:
{
    if ((static_cast<uint32_t>(r29) < static_cast<uint32_t>(4))) {
        goto loc_80507830;
    }
}

loc_80507818:
{
    r0 = MemoryInline::FlatRead8((r1 + 10));
    r3 = MemoryInline::FlatRead32((r13 + -19496));
    r0 = (r0 & 63);
    r3_addr_3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_3);
    MemoryInline::FlatWrite8((r26 + 3), static_cast<uint8_t>(r0));
    goto loc_80507834;
}

loc_80507830:
{
    MemoryInline::FlatWrite8((r26 + 3), static_cast<uint8_t>(r24));
}

loc_80507834:
{
    r28 = (r28 + r31);
    r26 = (r26 + 4);
}

loc_8050783C:
{
}

loc_80507840:
{
    if ((static_cast<uint32_t>(r28) != static_cast<uint32_t>(r27))) {
        goto loc_8050774C;
    }
}

loc_80507844:
{
    r3 = (r26 - r25);
}

loc_80507848:
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
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_805076D0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_805076D0_ra38_1e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFB gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x0000001E fpr_write=0x0000001E fpr_return=0x00000002 cr_read=0x23 cr_write=0x23 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x805076D0 func_805076D0 preserves=true fpr_mask=0x00000000
