#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80456C40(CpuContext* ctx);
extern "C" uint64_t func_80456C40_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_8050D0E0_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r26_addr_0 = 0;
    uint32_t r26_addr_1 = 0;
    uint32_t r26_addr_2 = 0;
    uint32_t r26_addr_3 = 0;
    uint32_t r26_addr_4 = 0;
    uint32_t r26_addr_5 = 0;
    uint32_t r31_addr_0 = 0;
    uint32_t r31_addr_1 = 0;
    uint32_t r31_addr_2 = 0;
    uint32_t r31_addr_3 = 0;
    uint32_t r31_addr_4 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_rot_5 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    goto loc_8050D0E0;

loc_8050D0E0:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457478 (10 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, false, true);
    // end of inlined leaf 0x80457478
    r5 = 0x80630000u;
    r25 = r3;
    r26 = r4;
    r3 = (r5 + 4416);
    if constexpr (KnownRegArgsCpuCall<0x80456C40u>(&func_80456C40)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80456C40_A5F = func_80456C40_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80456C40_A5F);
        r4 = static_cast<uint32_t>(regargs_result_80456C40_A5F >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80456C40u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = 31;
    r30 = r3;
    r7 = 0;
    r6 = 1;
    ctr = r0;
}

loc_8050D11C:
{
    r8 = (r26 + r6);
    r5 = MemoryInline::FlatRead8(r26);
    r9 = MemoryInline::FlatRead8((r8 + -1));
    r4 = (r5 & 1);
    r0 = (r5 + -79);
    r3 = (r6 ^ r9);
    r5 = (r9 - r5);
    r4 = (r4 ^ r7);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 1);
    r3 = (r3 & 1);
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r5 = (r5_rot_2 & 1);
    r3 = (r4 ^ r3);
    r0 = (r3 ^ r0);
    r7 = (r0 ^ r5);
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_8050D164;
    }
}

loc_8050D158:
{
    r0 = MemoryInline::FlatRead8(r8);
    r0 = (r0 & 1);
}

loc_8050D160:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8050D17C;
    }
}

loc_8050D164:
{
}

loc_8050D168:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8050D184;
    }
}

loc_8050D16C:
{
    r0 = MemoryInline::FlatRead8(r8);
    r0 = (r0 & 1);
}

loc_8050D178:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_8050D184;
    }
}

loc_8050D17C:
{
    r29 = 0;
    goto loc_8050D190;
}

loc_8050D184:
{
    r6 = (r6 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8050D11C;
    }
}

loc_8050D18C:
{
    r29 = 1;
}

loc_8050D190:
{
    r31 = 0x80630000u;
    r24 = r25;
    r31 = (r31 + 4416);
    r27 = 0;
    r28 = 0;
    r23 = 738918400;
}

loc_8050D1A8:
{
}

loc_8050D1AC:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8050D1C0;
    }
}

loc_8050D1B0:
{
}

loc_8050D1B4:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_8050D1C0;
    }
}

loc_8050D1B8:
{
}

loc_8050D1BC:
{
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(13))) {
        goto loc_8050D1EC;
    }
}

loc_8050D1C0:
{
    // inline leaf 0x8045E620 (8 guest instruction(s))
    r3 = 1103495168;
    r4 = MemoryInline::FlatRead32((r13 + -20792));
    r0 = (r3 + 20077);
    r3 = (r4 * r0);
    r0 = (r3 + 12345);
    MemoryInline::FlatWrite32((r13 + -20792), r0);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r3 = (r3_rot_3 & 32767);
    // end of inlined leaf 0x8045E620
    r0 = (r23 + 705);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r3))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 4);
    r4_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_4 & 1);
    r0 = (r0 + r4);
    r0 = (r0 * 93);
    r3 = (r3 - r0);
    r0 = (r3 + 33);
    MemoryInline::FlatWrite8(r24, static_cast<uint8_t>(r0));
    goto loc_8050D2A0;
}

loc_8050D1EC:
{
}

loc_8050D1F0:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(1))) {
        goto loc_8050D1FC;
    }
}

loc_8050D1F4:
{
}

loc_8050D1F8:
{
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(14))) {
        goto loc_8050D20C;
    }
}

loc_8050D1FC:
{
    r26_addr_2 = (r26 + r27);
    r0 = MemoryInline::FlatRead8(r26_addr_2);
    r3 = (r26 + r27);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    goto loc_8050D218;
}

loc_8050D20C:
{
    r3 = (r26 + r27);
    r0 = MemoryInline::FlatRead8((r3 + -1));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8050D218:
{
    r7 = MemoryInline::FlatRead8(r3);
    r4 = (r0 * r28);
    r0 = (r23 + 705);
    r6 = (r27 + r7);
    r5 = PPC_Divw(static_cast<int32_t>(r6), static_cast<int32_t>(r30));
    r3 = PPC_Divw(static_cast<int32_t>(r4), static_cast<int32_t>(r30));
    r5 = (r5 * r30);
    r5 = (r6 - r5);
    r31_addr_2 = (r31 + r5);
    r5 = MemoryInline::FlatRead8(r31_addr_2);
    r3 = (r3 * r30);
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
    r5 = (r27 * r7);
    r3 = (r4 - r3);
    r31_addr_3 = (r31 + r3);
    r3 = MemoryInline::FlatRead8(r31_addr_3);
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r5 = (r6 + r5);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(27));
    r4 = (r4_rot_2 & -134217728);
    r5_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r5 = (r5_rot_4 & 1);
    r4 = (r4 - r5);
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(5));
    r4 = (r4_rot_3 & -1);
    r4 = (r4 + r5);
    r26_addr_4 = (r26 + r4);
    r4 = MemoryInline::FlatRead8(r26_addr_4);
    r4 = (r4 ^ r3);
    r3 = (static_cast<int32_t>(r4) >> 31);
    r4 = (r3 ^ r4);
    r4 = (r4 - r3);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 4);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    r0 = (r0 + r3);
    r0 = (r0 * 93);
    r3 = (r4 - r0);
    r0 = (r3 + 33);
    MemoryInline::FlatWrite8(r24, static_cast<uint8_t>(r0));
}

loc_8050D2A0:
{
    r27 = (r27 + 1);
    r24 = (r24 + 1);
}

loc_8050D2AC:
{
    r28 = (r28 + 17991);
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(32))) {
        goto loc_8050D1A8;
    }
}

loc_8050D2B4:
{
    r11 = (r1 + 48);
    r3 = r25;
    // inline leaf 0x804574C4 (10 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, true, false);
    // end of inlined leaf 0x804574C4
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8050D0E0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8050D0E0_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000023FB gpr_write=0x00000BFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8050D0E0 func_8050D0E0 preserves=true fpr_mask=0x00000000
