#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802146B8(CpuContext* ctx);
extern "C" uint64_t func_802146B8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8021D8E8(CpuContext* ctx);
extern "C" uint64_t func_8021D8E8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_803BEE9C(CpuContext* ctx);
extern "C" uint32_t func_803BEE9C_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_803C0024(CpuContext* ctx);
extern "C" uint64_t func_803C0024_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_803C0218_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r31_addr_0 = 0;
    uint32_t r31_addr_1 = 0;
    uint32_t r31_addr_2 = 0;
    uint32_t r31_addr_3 = 0;
    uint32_t r31_addr_4 = 0;
    uint32_t r31_addr_5 = 0;
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
    uint32_t r10 = ctx->gpr[10];
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

    goto loc_803C0218;

loc_803C0218:
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
    r28 = 0;
    r3 = 37;
    ctx->lr = 0x803C023Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    InvokeDirectCpu<0x802FB520u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
}

loc_803C0240:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803C0250;
    }
}

loc_803C0244:
{
    r0 = 4;
    MemoryInline::FlatWrite16((r25 + 168), static_cast<uint16_t>(r0));
    goto loc_803C0290;
}

loc_803C0250:
{
    r3 = 33;
    ctx->lr = 0x803C0258u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    InvokeDirectCpu<0x802FB520u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
}

loc_803C025C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803C026C;
    }
}

loc_803C0260:
{
    r0 = 3;
    MemoryInline::FlatWrite16((r25 + 168), static_cast<uint16_t>(r0));
    goto loc_803C0290;
}

loc_803C026C:
{
    r3 = 29;
    ctx->lr = 0x803C0274u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    InvokeDirectCpu<0x802FB520u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
}

loc_803C0278:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803C0288;
    }
}

loc_803C027C:
{
    r0 = 2;
    MemoryInline::FlatWrite16((r25 + 168), static_cast<uint16_t>(r0));
    goto loc_803C0290;
}

loc_803C0288:
{
    r0 = 1;
    MemoryInline::FlatWrite16((r25 + 168), static_cast<uint16_t>(r0));
}

loc_803C0290:
{
    r3 = (r25 + 143);
    r4 = 1;
    r5 = 4;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r29 = 0;
    MemoryInline::FlatWrite8((r25 + 141), static_cast<uint8_t>(r29));
    MemoryInline::FlatWrite8((r25 + 142), static_cast<uint8_t>(r29));
    r26 = 0;
    r27 = 0;
    r23 = 1;
    r3 = 0x806B0000u;
    r24 = (r3 + -12348);
    r31 = (r13 + -22368);
}

loc_803C02C4:
{
    r30 = (r27 & 255);
    r31_addr_2 = (r31 + r30);
    r3 = MemoryInline::FlatRead8(r31_addr_2);
    r0 = MemoryInline::FlatRead8((r24 + 2));
}

loc_803C02D4:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_803C02E8;
    }
}

loc_803C02D8:
{
    r0 = (r26 & 255);
    r3 = (r25 + r0);
    MemoryInline::FlatWrite8((r3 + 137), static_cast<uint8_t>(r27));
    r26 = (r26 + 1);
}

loc_803C02E8:
{
    r31_addr_3 = (r31 + r30);
    r3 = MemoryInline::FlatRead8(r31_addr_3);
    r4 = (r1 + 17);
    r5 = (r1 + 16);
    if constexpr (KnownRegArgsCpuCall<0x803BEE9Cu>(&func_803BEE9C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_803BEE9C_17DB = func_803BEE9C_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_803BEE9C_17DB;
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x803BEE9Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r6 = ctx->gpr[6];
    }
    r7 = 0;
    r0 = (r27 & 255);
    r6 = (r25 + r0);
    MemoryInline::FlatWrite8((r6 + 143), static_cast<uint8_t>(r29));
    r0 = MemoryInline::FlatRead8((r1 + 17));
    r4 = (r24 + r0);
    r5 = MemoryInline::FlatRead8((r1 + 16));
    goto loc_803C0354;
}

loc_803C0318:
{
    r0 = (r7 & 255);
    r3 = (r4 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 308));
}

loc_803C0328:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_803C0350;
    }
}

loc_803C032C:
{
    MemoryInline::FlatWrite8((r6 + 143), static_cast<uint8_t>(r23));
    r31_addr_4 = (r31 + r30);
    r3 = MemoryInline::FlatRead8(r31_addr_4);
    r0 = MemoryInline::FlatRead8((r24 + 2));
}

loc_803C033C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_803C0348;
    }
}

loc_803C0340:
{
    MemoryInline::FlatWrite8((r25 + 141), static_cast<uint8_t>(r23));
    goto loc_803C0360;
}

loc_803C0348:
{
    MemoryInline::FlatWrite8((r25 + 142), static_cast<uint8_t>(r23));
    goto loc_803C0360;
}

loc_803C0350:
{
    r7 = (r7 + 1);
}

loc_803C0354:
{
    r0 = (r7 & 255);
}

loc_803C035C:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r5))) {
        goto loc_803C0318;
    }
}

loc_803C0360:
{
    r27 = (r27 + 1);
}

loc_803C0368:
{
    if ((static_cast<uint32_t>(r27) < static_cast<uint32_t>(4))) {
        goto loc_803C02C4;
    }
}

loc_803C036C:
{
    r0 = MemoryInline::FlatRead16((r25 + 168));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_803C0374:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_803C039C;
    }
}

loc_803C0378:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r25 + 2), static_cast<uint8_t>(r0));
    r3 = r25;
    ctx->lr = 0x803C0388u;
    if constexpr (KnownRegArgsCpuCall<0x803C0024u>(&func_803C0024)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        const auto regargs_result_803C0024_222E = func_803C0024_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803C0024_222E);
        r4 = static_cast<uint32_t>(regargs_result_803C0024_222E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        InvokeDirectCpu<0x803C0024u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
    }
    r0 = MemoryInline::FlatRead16((r25 + 170));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3 = (r25 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 147));
    ctx->lr = 0x803C0398u;
    if constexpr (KnownRegArgsCpuCall<0x8021D8E8u>(&func_8021D8E8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8021D8E8_27C0 = func_8021D8E8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8021D8E8_27C0);
        r4 = static_cast<uint32_t>(regargs_result_8021D8E8_27C0 >> 32);
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
        InvokeDirectCpu<0x8021D8E8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    goto loc_803C0404;
}

loc_803C039C:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r25 + 2), static_cast<uint8_t>(r0));
    r3 = (r25 + 72);
    r4 = 0;
    r5 = 32;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead8((r25 + 141));
}

loc_803C03BC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803C03C4;
    }
}

loc_803C03C0:
{
    r28 = (r28 | 1);
}

loc_803C03C4:
{
    r0 = MemoryInline::FlatRead8((r25 + 142));
}

loc_803C03CC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803C03D8;
    }
}

loc_803C03D0:
{
    r0 = (r28 | 2);
    r28 = (r0 & 65535);
}

loc_803C03D8:
{
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = (r25 + 72);
    r4 = 2;
    r5 = 5;
    r6 = 499;
    r7 = -1;
    r8 = (r28 & 65535);
    r9 = -1;
    r10 = 3;
    ctx->lr = 0x803C0404u;
    if constexpr (KnownRegArgsCpuCall<0x802146B8u>(&func_802146B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        const auto regargs_result_802146B8_2FDF = func_802146B8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802146B8_2FDF);
        r4 = static_cast<uint32_t>(regargs_result_802146B8_2FDF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x802146B8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
    }
}

loc_803C0404:
{
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
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803C0218(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803C0218_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803C0218 func_803C0218 preserves=true fpr_mask=0x00000000
