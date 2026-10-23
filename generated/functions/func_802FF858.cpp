#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802FF7D8(CpuContext* ctx);
extern "C" uint32_t func_802FF7D8_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_802FF858_ra58_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r6)
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
    uint32_t r0_rot_8 = 0;
    uint32_t r22_addr_0 = 0;
    uint32_t r22_addr_1 = 0;
    uint32_t r22_addr_2 = 0;
    uint32_t r22_addr_3 = 0;
    uint32_t r22_addr_4 = 0;
    uint32_t r23_addr_0 = 0;
    uint32_t r23_addr_1 = 0;
    uint32_t r23_addr_2 = 0;
    uint32_t r23_addr_3 = 0;
    uint32_t r23_addr_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r20 = ctx->gpr[20];
    uint32_t r21 = ctx->gpr[21];
    uint32_t r22 = ctx->gpr[22];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->gpr[6] = arg_r6;

    goto loc_802FF858;

loc_802FF858:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x8045746C (13 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -48), 0, 48u, false, true);
    // end of inlined leaf 0x8045746C
    r26 = r3;
    r27 = r4;
    r29 = 0;
    r3 = (r3 + 326);
    r30 = 65536;
    r4 = (r30 + -1);
    r5 = 768;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r28 = 0;
    r3 = 0x805E0000u;
    r23 = (r3 + -18532);
    r3 = 0x805E0000u;
    r22 = (r3 + -18544);
    r31 = 1;
}

loc_802FF8A4:
{
    r4 = MemoryInline::FlatRead8(r27);
    r3 = (r28 & 65535);
    r0 = PPC_Slw(static_cast<uint32_t>(r31), static_cast<uint32_t>(r3));
    r0 = (r4 & r0);
}

loc_802FF8B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802FF94C;
    }
}

loc_802FF8BC:
{
    r0 = MemoryInline::FlatRead16((r26 + 16));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_802FF8C4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802FF8E4;
    }
}

loc_802FF8C8:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = (r26 + r0);
    r3 = (r3 + 100);
    r22_addr_2 = (r22 + r0);
    r0 = MemoryInline::FlatRead32(r22_addr_2);
    MemoryInline::FlatWrite32(r3, r0);
    r0 = 0;
    goto loc_802FF8FC;
}

loc_802FF8E4:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3 = (r26 + r0);
    r3 = (r3 + 100);
    r23_addr_2 = (r23 + r0);
    r0 = MemoryInline::FlatRead32(r23_addr_2);
    MemoryInline::FlatWrite32(r3, r0);
    r0 = (r30 + -1);
}

loc_802FF8FC:
{
    r21 = MemoryInline::FlatRead32(r3);
    r20 = 0;
    r24 = (r28 & 255);
    r25 = (r0 & 65535);
    goto loc_802FF940;
}

loc_802FF910:
{
    r3 = r21;
    ctx->lr = 0x802FF918u;
    if constexpr (KnownRegArgsCpuCall<0x802FF7D8u>(&func_802FF7D8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        const auto regargs_result_802FF7D8_FE3 = func_802FF7D8_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_802FF7D8_FE3;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802FF7D8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_802FF91C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802FF938;
    }
}

loc_802FF920:
{
    r0 = (r29 & 65535);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r3 = (r26 + r0);
    MemoryInline::FlatWrite16((r3 + 326), static_cast<uint16_t>(r20));
    MemoryInline::FlatWrite8((r3 + 328), static_cast<uint8_t>(r24));
    r29 = (r29 + 1);
}

loc_802FF938:
{
    r20 = (r20 + 1);
    r21 = (r21 + 12);
}

loc_802FF940:
{
    r0 = MemoryInline::FlatRead16(r21);
}

loc_802FF948:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r25))) {
        goto loc_802FF910;
    }
}

loc_802FF94C:
{
    r28 = (r28 + 1);
}

loc_802FF954:
{
    if ((static_cast<uint32_t>(r28) < static_cast<uint32_t>(3))) {
        goto loc_802FF8A4;
    }
}

loc_802FF958:
{
    r11 = (r1 + 64);
    // inline leaf 0x804574B8 (13 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -48), 0, 48u, true, false);
    // end of inlined leaf 0x804574B8
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802FF858(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802FF858_ra58_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[6]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000201B gpr_write=0x0000083B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802FF858 func_802FF858 preserves=true fpr_mask=0x00000000
