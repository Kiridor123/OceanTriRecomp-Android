#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800F87EC(CpuContext* ctx);
extern "C" uint64_t func_800F87EC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800F8978(CpuContext* ctx);
extern "C" uint32_t func_800F8978_ra10_0_10_0(CpuContext*, uint32_t);

extern "C" uint64_t func_8011805C_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;

    goto loc_8011805C;

loc_8011805C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r30 = r3;
    r27 = r4;
    // inline leaf 0x802AFCE8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3014));
    // end of inlined leaf 0x802AFCE8
    r3 = (r3 & 255);
    r0 = (r30 & 255);
}

loc_80118088:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r3))) {
        goto loc_80118094;
    }
}

loc_8011808C:
{
    r3 = 0;
    goto loc_801181A0;
}

loc_80118094:
{
    r3 = 140;
    ctx->lr = 0x8011809Cu;
    if constexpr (KnownRegArgsCpuCall<0x800F87ECu>(&func_800F87EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800F87EC_8ED = func_800F87EC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800F87EC_8ED);
        r4 = static_cast<uint32_t>(regargs_result_800F87EC_8ED >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x800F87ECu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r31 = r3;
}

loc_801180A4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801180B0;
    }
}

loc_801180A8:
{
    r3 = 0;
    goto loc_801181A0;
}

loc_801180B0:
{
    MemoryInline::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r27));
    r4 = 0x80120000u;
    r0 = (r4 + -32328);
    MemoryInline::FlatWriteRam32((r3 + 64), r0);
    r4 = 0x80120000u;
    r0 = (r4 + -32196);
    MemoryInline::FlatWriteRam32((r3 + 52), r0);
    r28 = MemoryInline::FlatRead32((r3 + 56));
    r0 = (r27 & 255);
    r3 = 0x805A0000u;
    r3 = (r3 + 3696);
    r3_addr_1 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_1);
    MemoryInline::FlatWrite32(r28, r0);
    r3 = (r28 + 124);
    r4 = 0;
    r5 = 16;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r27 = 0;
    r29 = r28;
    goto loc_8011812C;
}

loc_80118100:
{
    ctx->lr = 0x80118104u;
    if constexpr (KnownRegArgsCpuCall<0x800F8978u>(&func_800F8978)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        const auto regargs_result_800F8978_1014 = func_800F8978_ra10_0_10_0(ctx, r4);
        r4 = regargs_result_800F8978_1014;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800F8978u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    MemoryInline::FlatWrite32((r29 + 4), r3);
    r0 = MemoryInline::FlatRead32((r29 + 4));
}

loc_80118110:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80118124;
    }
}

loc_80118114:
{
    r3 = r31;
    ctx->lr = 0x8011811Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    InvokeDirectCpu<0x800F88D0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r3 = 0;
    goto loc_801181A0;
}

loc_80118124:
{
    r29 = (r29 + 4);
    r27 = (r27 + 1);
}

loc_8011812C:
{
    r0 = MemoryInline::FlatRead32(r28);
}

loc_80118134:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(r0))) {
        goto loc_80118100;
    }
}

loc_80118138:
{
    r0 = 26;
    MemoryInline::FlatWriteRam8((r31 + 3), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWriteRam8((r31 + 4), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam32((r31 + 12), r0);
    MemoryInline::FlatWriteRam32((r31 + 16), r0);
    MemoryInline::FlatWriteRam8((r31 + 68), static_cast<uint8_t>(r30));
    r3 = MemoryInline::FlatRead8((r31 + 2));
    r0 = (r3 + -4);
}

loc_80118160:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(3))) {
        goto loc_80118178;
    }
}

loc_80118164:
{
    r0 = (r3 + -10);
}

loc_8011816C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_80118178;
    }
}

loc_80118170:
{
}

loc_80118174:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8011818C;
    }
}

loc_80118178:
{
    r3 = r31;
    r4 = 0;
    r5 = 0;
    // inline leaf 0x800F9E58 (4 guest instruction(s))
    r0 = (r4 | r5);
    r0 = (r0 & 255);
    MemoryInline::FlatWriteRam8((r3 + 4), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x800F9E58
    goto loc_8011819C;
}

loc_8011818C:
{
    r3 = r31;
    r4 = 1;
    r5 = 0;
    // inline leaf 0x800F9E58 (4 guest instruction(s))
    r0 = (r4 | r5);
    r0 = (r0 & 255);
    MemoryInline::FlatWriteRam8((r3 + 4), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x800F9E58
}

loc_8011819C:
{
    r3 = r31;
}

loc_801181A0:
{
    r11 = (r1 + 32);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8011805C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8011805C_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8011805C func_8011805C preserves=true fpr_mask=0x00000000
