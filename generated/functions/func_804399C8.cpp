#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8043988C(CpuContext* ctx);
extern "C" uint32_t func_8043988C_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_804399C8_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r30_addr_0 = 0;
    uint32_t r30_addr_1 = 0;
    uint32_t r30_addr_2 = 0;
    uint32_t r30_addr_3 = 0;
    uint32_t r30_addr_4 = 0;
    uint32_t r31_addr_0 = 0;
    uint32_t r31_addr_1 = 0;
    uint32_t r31_addr_2 = 0;
    uint32_t r31_addr_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r18 = ctx->gpr[18];
    uint32_t r19 = ctx->gpr[19];
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

    goto loc_804399C8;

loc_804399C8:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x80457464 (15 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -56), 0, 56u, false, true);
    // end of inlined leaf 0x80457464
    r21 = r3;
    r24 = (r3 + 108);
    r4 = MemoryInline::FlatRead8((r3 + 422));
    r0 = MemoryInline::FlatRead8((r3 + 424));
    r0 = (r4 * r0);
    r23 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r22 = 0;
    r30 = (r13 + -21400);
    r3 = 0x80600000u;
    r31 = (r3 + -29464);
    r26 = 1;
    r25 = 0;
    r29 = 2112290816;
    r28 = 1854668800;
    r27 = 0x8C8D0000u;
    r19 = (r13 + -21388);
    r20 = 2;
    goto loc_80439B5C;
}

loc_80439A24:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r23)));
    MemoryInline::FlatWrite8(r24, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r21 + 423));
    r0 = (r0 - r22);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_2 & 134217727);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::FlatWrite8((r24 + 1), static_cast<uint8_t>(r0));
}

loc_80439A48:
{
    if ((static_cast<int32_t>(r22) != static_cast<int32_t>(2))) {
        goto loc_80439A60;
    }
}

loc_80439A4C:
{
    r0 = MemoryInline::FlatRead8((r21 + 15));
}

loc_80439A54:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80439A60;
    }
}

loc_80439A58:
{
    MemoryInline::FlatWrite8((r24 + 2), static_cast<uint8_t>(r25));
    goto loc_80439A64;
}

loc_80439A60:
{
    MemoryInline::FlatWrite8((r24 + 2), static_cast<uint8_t>(r26));
}

loc_80439A64:
{
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r23)));
    r0 = (r3 + -4);
}

loc_80439A70:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_80439A94;
    }
}

loc_80439A74:
{
    r3 = 3;
    if constexpr (KnownRegArgsCpuCall<0x8043988Cu>(&func_8043988C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8043988C_FC2 = func_8043988C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8043988C_FC2;
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->cr = cr;
        InvokeDirectCpu<0x8043988Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    }
    r0 = (r3 & 255);
}

loc_80439A84:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80439A90;
    }
}

loc_80439A88:
{
    MemoryInline::FlatWrite8((r24 + 2), static_cast<uint8_t>(r25));
    goto loc_80439A94;
}

loc_80439A90:
{
    MemoryInline::FlatWrite8((r24 + 2), static_cast<uint8_t>(r26));
}

loc_80439A94:
{
    r0 = MemoryInline::FlatRead8((r24 + 2));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80439AA0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80439AB0;
    }
}

loc_80439AA4:
{
    r0 = (r27 + -29441);
    MemoryInline::FlatWrite32((r24 + 12), r0);
    goto loc_80439ACC;
}

loc_80439AB0:
{
    r0 = MemoryInline::FlatRead8((r24 + 1));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80439ABC:
{
    r0 = (r28 + 32511);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80439AC8;
    }
}

loc_80439AC4:
{
    r0 = (r29 + -16641);
}

loc_80439AC8:
{
    MemoryInline::FlatWrite32((r24 + 12), r0);
}

loc_80439ACC:
{
    r18 = (static_cast<int32_t>(static_cast<int16_t>(r23)));
}

loc_80439AD4:
{
    if ((static_cast<int32_t>(r18) >= static_cast<int32_t>(3))) {
        goto loc_80439B14;
    }
}

loc_80439AD8:
{
    r30_addr_2 = (r30 + r18);
    r3 = MemoryInline::FlatRead8(r30_addr_2);
    // inline leaf 0x803BECD4 (12 guest instruction(s))
}

loc_inl1_0x803BECD4:
{
    r0 = (r3 & 255);
}

loc_inl1_0x803BECDC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(20))) {
        goto loc_inl1_0x803BECF4;
    }
}

loc_inl1_0x803BECE0:
{
    r3 = 0x80660000u;
    r3 = (r3 + -19184);
    r3_addr_2 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_2);
    r3 = (r0 ^ 1);
    goto loc_inl1_cont_803BECD4;
}

loc_inl1_0x803BECF4:
{
    r3 = 0x80660000u;
    r3 = (r3 + -19184);
    r3_addr_3 = (r3 + r0);
    r3 = MemoryInline::FlatRead8(r3_addr_3);
}

loc_inl1_cont_803BECD4:
{
    // end of inlined leaf 0x803BECD4
    r3 = (r3 & 255);
}

loc_80439AE8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80439AF4;
    }
}

loc_80439AEC:
{
    MemoryInline::FlatWrite16((r24 + 6), static_cast<uint16_t>(r26));
    goto loc_80439B50;
}

loc_80439AF4:
{
    r30_addr_3 = (r30 + r18);
    r0 = MemoryInline::FlatRead8(r30_addr_3);
    r31_addr_2 = (r31 + r0);
    r0 = MemoryInline::FlatRead8(r31_addr_2);
}

loc_80439B00:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_80439B0C;
    }
}

loc_80439B04:
{
    MemoryInline::FlatWrite16((r24 + 6), static_cast<uint16_t>(r20));
    goto loc_80439B50;
}

loc_80439B0C:
{
    MemoryInline::FlatWrite16((r24 + 6), static_cast<uint16_t>(r25));
    goto loc_80439B50;
}

loc_80439B14:
{
    r3 = (r23 & 255);
    if constexpr (KnownRegArgsCpuCall<0x8043988Cu>(&func_8043988C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8043988C_1DCB = func_8043988C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8043988C_1DCB;
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->cr = cr;
        InvokeDirectCpu<0x8043988Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    }
    r4 = (r3 & 255);
}

loc_80439B24:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80439B30;
    }
}

loc_80439B28:
{
    MemoryInline::FlatWrite16((r24 + 6), static_cast<uint16_t>(r26));
    goto loc_80439B50;
}

loc_80439B30:
{
    r0 = r18;
    r3 = (r0 + r19);
    r0 = MemoryInline::FlatRead8((r3 + -3));
}

loc_80439B40:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r0))) {
        goto loc_80439B4C;
    }
}

loc_80439B44:
{
    MemoryInline::FlatWrite16((r24 + 6), static_cast<uint16_t>(r20));
    goto loc_80439B50;
}

loc_80439B4C:
{
    MemoryInline::FlatWrite16((r24 + 6), static_cast<uint16_t>(r25));
}

loc_80439B50:
{
    r23 = (r23 + 1);
    r24 = (r24 + 24);
    r22 = (r22 + 1);
}

loc_80439B5C:
{
    r0 = MemoryInline::FlatRead8((r21 + 425));
}

loc_80439B64:
{
    if ((static_cast<int32_t>(r22) < static_cast<int32_t>(r0))) {
        goto loc_80439A24;
    }
}

loc_80439B68:
{
    r11 = (r1 + 64);
    // inline leaf 0x804574B0 (15 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -56), 0, 56u, true, false);
    // end of inlined leaf 0x804574B0
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

extern "C" void func_804399C8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804399C8_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000201B gpr_write=0x0000081B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804399C8 func_804399C8 preserves=true fpr_mask=0x00000000
