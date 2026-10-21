#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004B108(CpuContext* ctx);
extern "C" uint64_t func_8004B108_ra58_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_803929C8(CpuContext* ctx);
extern "C" uint64_t func_803929C8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80392AB0_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
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

    MKW_GUEST_ENTER(0x80392AB0u);
    goto loc_80392AB0;

loc_80392AB0:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x8045746C (13 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -48), 0, 48u, false, true);
    // end of inlined leaf 0x8045746C
    r20 = r3;
    r21 = r4;
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r27 = (r0 + r4);
    r26 = (r27 + 4);
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 8), static_cast<uint16_t>(r0));
    r3 = (r3 + 56);
    r4 = 0;
    r5 = 30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r23 = 0;
    // inline leaf 0x804537C4 (8 guest instruction(s))
}

loc_inl1_0x804537C4:
{
    r3 = MemoryInline::FlatRead32((r13 + -16440));
}

loc_inl1_0x804537CC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x804537D8;
    }
}

loc_inl1_0x804537D0:
{
    r3 = 0;
    goto loc_inl1_cont_804537C4;
}

loc_inl1_0x804537D8:
{
    r3 = (r3 + 65536);
    r3 = (r3 + -24588);
}

loc_inl1_cont_804537C4:
{
    // end of inlined leaf 0x804537C4
    r22 = r3;
    r3 = 0x806B0000u;
    r3 = (r3 + -12348);
    r0 = MemoryInline::FlatRead8((r3 + 350));
}

loc_80392B10:
{
    r29 = 10;
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80392B1C;
    }
}

loc_80392B18:
{
    r29 = 15;
}

loc_80392B1C:
{
    r25 = 0;
    r31 = 1;
    r30 = 0;
    goto loc_80392BDC;
}

loc_80392B2C:
{
}

loc_80392B30:
{
    if ((static_cast<int32_t>(r25) < static_cast<int32_t>(r27))) {
        goto loc_80392BD0;
    }
}

loc_80392B34:
{
}

loc_80392B38:
{
    if ((static_cast<int32_t>(r25) > static_cast<int32_t>(r26))) {
        goto loc_80392BD0;
    }
}

loc_80392B3C:
{
    r0 = MemoryInline::FlatRead16((r20 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 * 6);
    r3 = (r20 + r0);
    MemoryInline::FlatWrite16((r3 + 56), static_cast<uint16_t>(r23));
    r3 = r22;
    r4 = MemoryInline::FlatRead16((r20 + 24));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    ctx->lr = 0x80392B58u;
    if constexpr (KnownRegArgsCpuCall<0x803929C8u>(&func_803929C8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803929C8_F04 = func_803929C8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803929C8_F04);
        r4 = static_cast<uint32_t>(regargs_result_803929C8_F04 >> 32);
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
        InvokeDirectCpu<0x803929C8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r0 = MemoryInline::FlatRead16((r20 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 * 6);
    r4 = (r20 + r0);
    MemoryInline::FlatWrite8((r4 + 58), static_cast<uint8_t>(r3));
    r24 = 0;
    r28 = r22;
}

loc_80392B70:
{
    r3 = MemoryInline::FlatRead16((r28 + 4));
    r4 = MemoryInline::FlatRead32((r13 + -17824));
    ctx->lr = 0x80392B7Cu;
    if constexpr (KnownRegArgsCpuCall<0x8004B108u>(&func_8004B108)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8004B108_13C5 = func_8004B108_ra58_0_18_0(ctx, r3, r4, r6);
        r3 = static_cast<uint32_t>(regargs_result_8004B108_13C5);
        r4 = static_cast<uint32_t>(regargs_result_8004B108_13C5 >> 32);
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
        InvokeDirectCpu<0x8004B108u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r0 = MemoryInline::FlatRead16((r28 + 6));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80392B84:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r0))) {
        goto loc_80392BA0;
    }
}

loc_80392B88:
{
    r0 = MemoryInline::FlatRead16((r20 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3 = (r0 * 6);
    r0 = (r24 + r20);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite8((r3 + 59), static_cast<uint8_t>(r30));
    goto loc_80392BB4;
}

loc_80392BA0:
{
    r0 = MemoryInline::FlatRead16((r20 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3 = (r0 * 6);
    r0 = (r24 + r20);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite8((r3 + 59), static_cast<uint8_t>(r31));
}

loc_80392BB4:
{
    r28 = (r28 + 4);
    r24 = (r24 + 1);
}

loc_80392BC0:
{
    if ((static_cast<int32_t>(r24) < static_cast<int32_t>(3))) {
        goto loc_80392B70;
    }
}

loc_80392BC4:
{
    r3 = MemoryInline::FlatRead16((r20 + 8));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r20 + 8), static_cast<uint16_t>(r0));
}

loc_80392BD0:
{
    r23 = (r23 + 1);
    r22 = (r22 + 16);
    r25 = (r25 + 1);
}

loc_80392BDC:
{
}

loc_80392BE0:
{
    if ((static_cast<int32_t>(r25) < static_cast<int32_t>(r29))) {
        goto loc_80392B2C;
    }
}

loc_80392BE4:
{
    r3 = MemoryInline::FlatRead16((r20 + 8));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead16((r20 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80392BF0:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r3))) {
        goto loc_80392C00;
    }
}

loc_80392BF4:
{
    r0 = (r3 + -1);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWrite16((r20 + 10), static_cast<uint16_t>(r0));
}

loc_80392C00:
{
    MemoryInline::FlatWrite16((r20 + 12), static_cast<uint16_t>(r21));
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r23)));
    r4 = 5;
    // inline leaf 0x802A8F78 (15 guest instruction(s))
}

loc_inl2_0x802A8F78:
{
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
}

loc_inl2_0x802A8F80:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_inl2_0x802A8F8C;
    }
}

loc_inl2_0x802A8F84:
{
    r3 = 1;
    goto loc_inl2_cont_802A8F78;
}

loc_inl2_0x802A8F8C:
{
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = PPC_Divw(static_cast<int32_t>(r4), static_cast<int32_t>(r5));
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r0 * r5);
    r0 = (r4 - r0);
}

loc_inl2_0x802A8FA4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x802A8FA8:
{
    r0 = (r3 + 1);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    goto loc_inl2_cont_802A8F78;
}

loc_inl2_return:
{
}

loc_inl2_cont_802A8F78:
{
    // end of inlined leaf 0x802A8F78
    MemoryInline::FlatWrite16((r20 + 14), static_cast<uint16_t>(r3));
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

extern "C" void func_80392AB0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80392AB0_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000207B gpr_write=0x0000087B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80392AB0 func_80392AB0 preserves=true fpr_mask=0x00000000
