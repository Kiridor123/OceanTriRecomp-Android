#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80423F28(CpuContext* ctx);
extern "C" uint64_t func_80423F28_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8042431C_ra38_1e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r30_addr_0 = 0;
    uint32_t r30_addr_1 = 0;
    uint32_t r30_addr_2 = 0;
    uint32_t r30_addr_3 = 0;
    uint32_t r31_addr_0 = 0;
    uint32_t r31_addr_1 = 0;
    uint32_t r31_addr_2 = 0;
    uint32_t r31_addr_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;

    goto loc_8042431C;

loc_8042431C:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r11 = (r1 + 80);
    // inline leaf 0x8045747C (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    // end of inlined leaf 0x8045747C
    r25 = r3;
    r26 = r4;
}

loc_8042433C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80424354;
    }
}

loc_80424340:
{
}

loc_80424344:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80424354;
    }
}

loc_80424348:
{
    r29 = MemoryInline::FlatRead16(r4);
}

loc_80424350:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_8042435C;
    }
}

loc_80424354:
{
    r3 = 0;
    goto loc_804244A8;
}

loc_8042435C:
{
    r3 = (r1 + 8);
    r4 = 0;
    r5 = 4;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = MemoryInline::FlatRead16(r26);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(24));
    r0 = (r0_rot_0 & 255);
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    r0 = (r3 & 255);
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r0));
    r3 = (r1 + 32);
    r4 = (r1 + 8);
    r5 = 4;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r28 = 4;
    r3 = (r1 + 16);
    r4 = r25;
}

loc_804243A0:
{
    r5 = 16;
    if ((static_cast<uint32_t>(r29) >= static_cast<uint32_t>(16))) {
        goto loc_804243AC;
    }
}

loc_804243A8:
{
    r5 = r29;
}

loc_804243AC:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r27 = 0;
    r24 = 0x806D0000u;
    r30 = (r1 + 16);
    r31 = (r1 + 32);
}

loc_804243C0:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(28));
    r0 = (r0_rot_2 & -268435456);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    r0 = (r0 - r3);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_3 & -1);
    r0 = (r0 + r3);
    r30_addr_2 = (r30 + r0);
    r4 = MemoryInline::FlatRead8(r30_addr_2);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(28));
    r0 = (r0_rot_4 & -268435456);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & 1);
    r0 = (r0 - r3);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_5 & -1);
    r0 = (r0 + r3);
    r31_addr_2 = (r31 + r0);
    MemoryInline::FlatWrite8(r31_addr_2, static_cast<uint8_t>(r4));
    r28 = (r28 + 1);
    r27 = (r27 + 1);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(28));
    r0 = (r0_rot_6 & -268435456);
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(1));
    r3 = (r3_rot_4 & 1);
    r0 = (r0 - r3);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_7 & -1);
    r0 = (r0 + r3);
}

loc_80424410:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80424444;
    }
}

loc_80424414:
{
    r3 = 256;
    r4 = r31;
    r5 = (r24 + 23280);
    r6 = r31;
    ctx->lr = 0x80424428u;
    if constexpr (KnownRegArgsCpuCall<0x80423F28u>(&func_80423F28)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        const auto regargs_result_80423F28_174B = func_80423F28_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80423F28_174B);
        r4 = static_cast<uint32_t>(regargs_result_80423F28_174B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x80423F28u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
    }
    r3 = (r28 + r25);
    r3 = (r3 + -16);
    r4 = r31;
    r5 = 16;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80424440:
{
    if ((static_cast<int32_t>(r29) <= static_cast<int32_t>(r27))) {
        goto loc_8042449C;
    }
}

loc_80424444:
{
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(28));
    r0 = (r0_rot_8 & -268435456);
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(1));
    r3 = (r3_rot_5 & 1);
    r0 = (r0 - r3);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_9 & -1);
    r0 = (r0 + r3);
}

loc_8042445C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804243C0;
    }
}

loc_80424460:
{
    r6 = (r29 - r27);
}

loc_80424468:
{
    r0 = 16;
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(16))) {
        goto loc_80424474;
    }
}

loc_80424470:
{
    r0 = r6;
}

loc_80424474:
{
}

loc_80424478:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_804243C0;
    }
}

loc_8042447C:
{
    r3 = (r1 + 16);
    r4 = (r25 + r27);
}

loc_80424488:
{
    r5 = 16;
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(16))) {
        goto loc_80424494;
    }
}

loc_80424490:
{
    r5 = r6;
}

loc_80424494:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_804243C0;
}

loc_8042449C:
{
    r0 = (r28 & 65535);
    MemoryInline::FlatWrite16(r26, static_cast<uint16_t>(r0));
    r3 = 0;
}

loc_804244A8:
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
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8042431C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8042431C_ra38_1e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8042431C func_8042431C preserves=true fpr_mask=0x00000000
