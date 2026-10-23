#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804A0A70(CpuContext* ctx);
extern "C" uint64_t func_804A0A70_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804A4DE0(CpuContext* ctx);
extern "C" uint64_t func_804A4DE0_ra38_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);

extern "C" uint64_t func_804A0934_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
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

    goto loc_804A0934;

loc_804A0934:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x8045747C (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    // end of inlined leaf 0x8045747C
    r5 = 0x80740000u;
}

loc_804A0950:
{
    r5 = (r5 + -2048);
    r29 = r4;
    r0 = MemoryInline::FlatRead16((r5 + 4642));
    r0 = (r0 * 664);
    r4 = (r5 + r0);
    r30 = (r4 + 4644);
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804A0974;
    }
}

loc_804A096C:
{
    r28 = (r5 + 4644);
    goto loc_804A0A4C;
}

loc_804A0974:
{
    r28 = (r3 + 664);
    goto loc_804A0A4C;
}

loc_804A097C:
{
    r31 = 0;
    goto loc_804A0A20;
}

loc_804A0984:
{
    r0 = (r31 & 65535);
    r24 = (r28 + 12);
    r0 = (r0 * 18);
    r25 = 0;
    r27 = (r29 + r0);
    r26 = (r27 + 4);
    goto loc_804A09FC;
}

loc_804A09A0:
{
    r0 = MemoryInline::FlatRead8((r24 + 10));
}

loc_804A09A8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_804A09CC;
    }
}

loc_804A09AC:
{
    r3 = MemoryInline::FlatRead32((r24 + 4));
    r5 = r26;
    r4 = MemoryInline::FlatRead32(r24);
    r6 = MemoryInline::FlatRead16((r27 + 2));
    ctx->lr = 0x804A09C0u;
    if constexpr (KnownRegArgsCpuCall<0x804A4DE0u>(&func_804A4DE0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        const auto regargs_result_804A4DE0_CF0 = func_804A4DE0_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_804A4DE0_CF0);
        r4 = static_cast<uint32_t>(regargs_result_804A4DE0_CF0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x804A4DE0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
    }
    r0 = (r3 & 255);
}

loc_804A09C4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804A0A0C;
    }
}

loc_804A09C8:
{
    goto loc_804A09F4;
}

loc_804A09CC:
{
}

loc_804A09D0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(6))) {
        goto loc_804A09F4;
    }
}

loc_804A09D4:
{
    r3 = MemoryInline::FlatRead32((r24 + 4));
    r5 = r26;
    r4 = MemoryInline::FlatRead32(r24);
    r7 = 0;
    r6 = MemoryInline::FlatRead16((r27 + 2));
    ctx->lr = 0x804A09ECu;
    if constexpr (KnownRegArgsCpuCall<0x804A0A70u>(&func_804A0A70)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        const auto regargs_result_804A0A70_14CA = func_804A0A70_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804A0A70_14CA);
        r4 = static_cast<uint32_t>(regargs_result_804A0A70_14CA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x804A0A70u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
    }
    r0 = (r3 & 255);
}

loc_804A09F0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804A0A0C;
    }
}

loc_804A09F4:
{
    r25 = (r25 + 1);
    r24 = (r24 + 12);
}

loc_804A09FC:
{
    r0 = MemoryInline::FlatRead16((r28 + 8));
    r3 = (r25 & 65535);
}

loc_804A0A08:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_804A09A0;
    }
}

loc_804A0A0C:
{
    r0 = MemoryInline::FlatRead16((r28 + 8));
    r3 = (r25 & 65535);
}

loc_804A0A18:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_804A0A30;
    }
}

loc_804A0A1C:
{
    r31 = (r31 + 1);
}

loc_804A0A20:
{
    r0 = MemoryInline::FlatRead16(r29);
    r3 = (r31 & 65535);
}

loc_804A0A2C:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_804A0984;
    }
}

loc_804A0A30:
{
    r0 = MemoryInline::FlatRead16(r29);
    r3 = (r31 & 65535);
}

loc_804A0A3C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_804A0A48;
    }
}

loc_804A0A40:
{
    r3 = r28;
    goto loc_804A0A58;
}

loc_804A0A48:
{
    r28 = (r28 + 664);
}

loc_804A0A4C:
{
}

loc_804A0A50:
{
    if ((static_cast<uint32_t>(r28) < static_cast<uint32_t>(r30))) {
        goto loc_804A097C;
    }
}

loc_804A0A54:
{
    r3 = 0;
}

loc_804A0A58:
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
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804A0934(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804A0934_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00001FFB gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFE fpr_write=0x0000001E fpr_return=0x00000002 cr_read=0x23 cr_write=0x23 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804A0934 func_804A0934 preserves=true fpr_mask=0x00000000
