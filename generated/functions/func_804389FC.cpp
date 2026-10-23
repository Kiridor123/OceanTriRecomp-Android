#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803BEAD0(CpuContext* ctx);
extern "C" uint64_t func_803BEAD0_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_803BED04(CpuContext* ctx);
extern "C" uint64_t func_803BED04_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8043890C(CpuContext* ctx);
extern "C" uint32_t func_8043890C_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_80438984(CpuContext* ctx);
extern "C" uint32_t func_80438984_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_804389FC_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r20_addr_0 = 0;
    uint32_t r20_addr_1 = 0;
    uint32_t r20_addr_2 = 0;
    uint32_t r20_addr_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
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
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_804389FC;

loc_804389FC:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x8045746C (13 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -48), 0, 48u, false, true);
    // end of inlined leaf 0x8045746C
    r22 = r3;
    r25 = (r3 + 108);
    r4 = MemoryInline::FlatRead8((r3 + 422));
    r0 = MemoryInline::FlatRead8((r3 + 424));
    r0 = (r4 * r0);
    r24 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r23 = 0;
    r3 = 0x80600000u;
    r0 = (r3 + 19808);
    r26 = (r0 + r24);
    r27 = 1;
    r28 = 0;
    r31 = 2112290816;
    r30 = 1854668800;
    r29 = 0x8C8D0000u;
    r3 = 0x80600000u;
    r20 = (r3 + -29464);
    r21 = 2;
    goto loc_80438B7C;
}

loc_80438A5C:
{
    MemoryInline::FlatWrite8((r25 + 2), static_cast<uint8_t>(r27));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r24)));
    MemoryInline::FlatWrite8(r25, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r22 + 423));
    r0 = (r0 - r23);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_2 & 134217727);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::FlatWrite8((r25 + 1), static_cast<uint8_t>(r0));
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r24)));
    r0 = (r3 + -14);
}

loc_80438A8C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_80438AE0;
    }
}

loc_80438A90:
{
}

loc_80438A94:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(6))) {
        goto loc_80438AA4;
    }
}

loc_80438A98:
{
}

loc_80438A9C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80438AC8;
    }
}

loc_80438AA0:
{
    goto loc_80438AF4;
}

loc_80438AA4:
{
    r3 = MemoryInline::FlatRead32((r22 + 400));
    r3 = MemoryInline::FlatRead8((r3 + 8));
    r4 = 14;
    ctx->lr = 0x80438AB4u;
    if constexpr (KnownRegArgsCpuCall<0x803BEAD0u>(&func_803BEAD0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_803BEAD0_F91 = func_803BEAD0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_803BEAD0_F91);
        r4 = static_cast<uint32_t>(regargs_result_803BEAD0_F91 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x803BEAD0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r0 = (r3 & 255);
}

loc_80438ABC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80438AF4;
    }
}

loc_80438AC0:
{
    MemoryInline::FlatWrite8((r25 + 2), static_cast<uint8_t>(r28));
    goto loc_80438AF4;
}

loc_80438AC8:
{
    r3 = r22;
    ctx->lr = 0x80438AD0u;
    if constexpr (KnownRegArgsCpuCall<0x8043890Cu>(&func_8043890C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        const auto regargs_result_8043890C_1402 = func_8043890C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8043890C_1402;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x8043890Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_80438AD4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80438AF4;
    }
}

loc_80438AD8:
{
    MemoryInline::FlatWrite8((r25 + 2), static_cast<uint8_t>(r28));
    goto loc_80438AF4;
}

loc_80438AE0:
{
    r3 = r22;
    ctx->lr = 0x80438AE8u;
    if constexpr (KnownRegArgsCpuCall<0x80438984u>(&func_80438984)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        const auto regargs_result_80438984_1813 = func_80438984_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80438984_1813;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80438984u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_80438AEC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80438AF4;
    }
}

loc_80438AF0:
{
    MemoryInline::FlatWrite8((r25 + 2), static_cast<uint8_t>(r28));
}

loc_80438AF4:
{
    r0 = MemoryInline::FlatRead8((r25 + 2));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80438B00:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80438B10;
    }
}

loc_80438B04:
{
    r0 = (r29 + -29441);
    MemoryInline::FlatWrite32((r25 + 12), r0);
    goto loc_80438B2C;
}

loc_80438B10:
{
    r0 = MemoryInline::FlatRead8((r25 + 1));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80438B1C:
{
    r0 = (r30 + 32511);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80438B28;
    }
}

loc_80438B24:
{
    r0 = (r31 + -16641);
}

loc_80438B28:
{
    MemoryInline::FlatWrite32((r25 + 12), r0);
}

loc_80438B2C:
{
    r3 = MemoryInline::FlatRead32((r22 + 400));
    r3 = MemoryInline::FlatRead8((r3 + 8));
    r4 = MemoryInline::FlatRead8(r26);
    ctx->lr = 0x80438B3Cu;
    if constexpr (KnownRegArgsCpuCall<0x803BED04u>(&func_803BED04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_803BED04_1FA1 = func_803BED04_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_803BED04_1FA1);
        r4 = static_cast<uint32_t>(regargs_result_803BED04_1FA1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x803BED04u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r3 = (r3 & 255);
}

loc_80438B44:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80438B50;
    }
}

loc_80438B48:
{
    MemoryInline::FlatWrite16((r25 + 6), static_cast<uint16_t>(r27));
    goto loc_80438B6C;
}

loc_80438B50:
{
    r0 = MemoryInline::FlatRead8(r26);
    r20_addr_2 = (r20 + r0);
    r0 = MemoryInline::FlatRead8(r20_addr_2);
}

loc_80438B5C:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_80438B68;
    }
}

loc_80438B60:
{
    MemoryInline::FlatWrite16((r25 + 6), static_cast<uint16_t>(r21));
    goto loc_80438B6C;
}

loc_80438B68:
{
    MemoryInline::FlatWrite16((r25 + 6), static_cast<uint16_t>(r28));
}

loc_80438B6C:
{
    r26 = (r26 + 1);
    r24 = (r24 + 1);
    r25 = (r25 + 24);
    r23 = (r23 + 1);
}

loc_80438B7C:
{
    r0 = MemoryInline::FlatRead8((r22 + 425));
}

loc_80438B84:
{
    if ((static_cast<int32_t>(r23) < static_cast<int32_t>(r0))) {
        goto loc_80438A5C;
    }
}

loc_80438B88:
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
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804389FC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804389FC_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000083B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804389FC func_804389FC preserves=true fpr_mask=0x00000000
