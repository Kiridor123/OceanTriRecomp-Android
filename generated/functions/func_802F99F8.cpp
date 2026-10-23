#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800F87EC(CpuContext* ctx);
extern "C" uint64_t func_800F87EC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800F8978(CpuContext* ctx);
extern "C" uint32_t func_800F8978_ra10_0_10_0(CpuContext*, uint32_t);
extern "C" void func_802B0504(CpuContext* ctx);
extern "C" uint64_t func_802B0504_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_802F99F8_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
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
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;
    const uint32_t r26_entry = r26;
    const uint32_t r27_entry = r27;
    const uint32_t r28_entry = r28;
    const uint32_t r29_entry = r29;
    const uint32_t r30_entry = r30;
    const uint32_t r31_entry = r31;
    uint32_t ctr = ctx->ctr;

    goto loc_802F99F8;

loc_802F99F8:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r29 = r3;
    r30 = 0;
    // inline leaf 0x802AFCE8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3014));
    // end of inlined leaf 0x802AFCE8
    r31 = r3;
    r0 = (r29 & 255);
}

loc_802F9A24:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802F9A38;
    }
}

loc_802F9A28:
{
    r3 = (r3 & 255);
    ctx->lr = 0x802F9A30u;
    if constexpr (KnownRegArgsCpuCall<0x802B0504u>(&func_802B0504)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802B0504_BDB = func_802B0504_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802B0504_BDB);
        r4 = static_cast<uint32_t>(regargs_result_802B0504_BDB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802B0504u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r30 = r3;
    goto loc_802F9AC8;
}

loc_802F9A38:
{
    // inline leaf 0x802AFCD8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3013));
    // end of inlined leaf 0x802AFCD8
    r0 = (r3 & 255);
}

loc_802F9A44:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(22))) {
        goto loc_802F9AC8;
    }
}

loc_802F9A48:
{
    r3 = 0x805E0000u;
    r3 = (r3 + -28244);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x802F9AC8u:
        goto loc_802F9AC8;
        break;
    case 0x802F9A60u:
        goto loc_802F9A60;
        break;
    case 0x802F9A78u:
        goto loc_802F9A78;
        break;
    case 0x802F9A90u:
        goto loc_802F9A90;
        break;
    case 0x802F9AA4u:
        goto loc_802F9AA4;
        break;
    case 0x802F9AB8u:
        goto loc_802F9AB8;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_802F9A60:
{
    r0 = (r31 & 255);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = 0x805E0000u;
    r3 = (r3 + -30256);
    r3_addr_2 = (r3 + r0);
    r30 = MemoryInline::FlatRead32(r3_addr_2);
    goto loc_802F9AC8;
}

loc_802F9A78:
{
    r0 = (r31 & 255);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3 = 0x805E0000u;
    r3 = (r3 + -30204);
    r3_addr_3 = (r3 + r0);
    r30 = MemoryInline::FlatRead32(r3_addr_3);
    goto loc_802F9AC8;
}

loc_802F9A90:
{
    r0 = (r31 & 255);
}

loc_802F9A98:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(6))) {
        goto loc_802F9AC8;
    }
}

loc_802F9A9C:
{
    r30 = (r13 + -25852);
    goto loc_802F9AC8;
}

loc_802F9AA4:
{
    r0 = (r31 & 255);
}

loc_802F9AAC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_802F9AC8;
    }
}

loc_802F9AB0:
{
    r30 = (r13 + -25848);
    goto loc_802F9AC8;
}

loc_802F9AB8:
{
    r0 = (r31 & 255);
}

loc_802F9AC0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802F9AC8;
    }
}

loc_802F9AC4:
{
    r30 = (r13 + -25844);
}

loc_802F9AC8:
{
}

loc_802F9ACC:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_802F9B9C;
    }
}

loc_802F9AD0:
{
    r3 = 796;
    ctx->lr = 0x802F9AD8u;
    if constexpr (KnownRegArgsCpuCall<0x800F87ECu>(&func_800F87EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_800F87EC_1AF9 = func_800F87EC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800F87EC_1AF9);
        r4 = static_cast<uint32_t>(regargs_result_800F87EC_1AF9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800F87ECu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    }
    r27 = r3;
}

loc_802F9AE0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802F9B9C;
    }
}

loc_802F9AE4:
{
    r4 = 0x80300000u;
    r0 = (r4 + -25516);
    MemoryInline::FlatWriteRam32((r3 + 52), r0);
    r4 = 0x80300000u;
    r0 = (r4 + -25676);
    MemoryInline::FlatWriteRam32((r3 + 64), r0);
    r26 = MemoryInline::FlatRead32((r3 + 56));
    MemoryInline::FlatWrite32((r26 + 772), r30);
    r0 = 0;
    MemoryInline::FlatWrite32(r26, r0);
    goto loc_802F9B20;
}

loc_802F9B10:
{
    r3 = MemoryInline::FlatRead32(r26);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32(r26, r0);
    r30 = (r30 + 1);
}

loc_802F9B20:
{
    r0 = MemoryInline::FlatRead8(r30);
}

loc_802F9B28:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(255))) {
        goto loc_802F9B10;
    }
}

loc_802F9B2C:
{
    r28 = 0;
    r30 = r26;
    goto loc_802F9B60;
}

loc_802F9B38:
{
    ctx->lr = 0x802F9B3Cu;
    if constexpr (KnownRegArgsCpuCall<0x800F8978u>(&func_800F8978)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->ctr = ctr;
        const auto regargs_result_800F8978_2268 = func_800F8978_ra10_0_10_0(ctx, r4);
        r4 = regargs_result_800F8978_2268;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800F8978u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        ctr = ctx->ctr;
    }
    MemoryInline::FlatWrite32((r30 + 4), r3);
    r0 = MemoryInline::FlatRead32((r30 + 4));
}

loc_802F9B48:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802F9B58;
    }
}

loc_802F9B4C:
{
    r3 = r27;
    ctx->lr = 0x802F9B54u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800F88D0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    ctr = ctx->ctr;
    goto loc_802F9B9C;
}

loc_802F9B58:
{
    r30 = (r30 + 12);
    r28 = (r28 + 1);
}

loc_802F9B60:
{
    r0 = MemoryInline::FlatRead32(r26);
}

loc_802F9B68:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(r0))) {
        goto loc_802F9B38;
    }
}

loc_802F9B6C:
{
    r3 = (r26 + 292);
    r4 = 0;
    r5 = 480;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r0 = 37;
    MemoryInline::FlatWriteRam8((r27 + 3), static_cast<uint8_t>(r0));
    r3 = r27;
    r4 = 8;
    r5 = 0;
    // inline leaf 0x800F9E58 (4 guest instruction(s))
    r0 = (r4 | r5);
    r0 = (r0 & 255);
    MemoryInline::FlatWriteRam8((r3 + 4), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x800F9E58
    MemoryInline::FlatWriteRam8((r27 + 68), static_cast<uint8_t>(r31));
    MemoryInline::FlatWrite8((r26 + 776), static_cast<uint8_t>(r29));
}

loc_802F9B9C:
{
    r11 = (r1 + 32);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->ctr = ctr;
    ctx->gpr[26] = r26_entry;
    ctx->gpr[27] = r27_entry;
    ctx->gpr[28] = r28_entry;
    ctx->gpr[29] = r29_entry;
    ctx->gpr[30] = r30_entry;
    ctx->gpr[31] = r31_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802F99F8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802F99F8_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802F99F8 func_802F99F8 preserves=true fpr_mask=0x00000000
