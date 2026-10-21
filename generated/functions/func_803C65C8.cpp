#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8033AE34(CpuContext* ctx);
extern "C" uint64_t func_8033AE34_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8033B32C(CpuContext* ctx);
extern "C" uint64_t func_8033B32C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_803C6474(CpuContext* ctx);
extern "C" uint64_t func_803C6474_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_803C65C8_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
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
    uint32_t r29_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
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

    MKW_GUEST_ENTER(0x803C65C8u);
    goto loc_803C65C8;

loc_803C65C8:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x80457474 (11 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, false, true);
    // end of inlined leaf 0x80457474
    r24 = r3;
    r25 = r4;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    r29_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r29 = (r29_rot_0 & -8);
    r28 = (r29 + 7);
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 14), static_cast<uint16_t>(r0));
    r3 = (r3 + 356);
    r4 = 0;
    r5 = 128;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r27 = 0;
    r26 = 0;
    r3 = 0x80600000u;
    r22 = (r3 + 18884);
    r3 = 0x80600000u;
    r23 = (r3 + -28240);
}

loc_803C6620:
{
    r3 = (r26 & 65535);
    r4 = (r1 + 10);
    r5 = (r1 + 8);
    r6 = 0;
    ctx->lr = 0x803C6634u;
    if constexpr (KnownRegArgsCpuCall<0x8033AE34u>(&func_8033AE34)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8033AE34_C08 = func_8033AE34_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8033AE34_C08);
        r4 = static_cast<uint32_t>(regargs_result_8033AE34_C08 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8033AE34u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r31 = r3;
    r4 = 0;
    ctx->lr = 0x803C6640u;
    if constexpr (KnownRegArgsCpuCall<0x8033B32Cu>(&func_8033B32C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8033B32C_F46 = func_8033B32C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8033B32C_F46);
        r4 = static_cast<uint32_t>(regargs_result_8033B32C_F46 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8033B32Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_803C6644:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803C66E0;
    }
}

loc_803C6648:
{
    r3 = MemoryInline::FlatRead16((r31 + 2));
    // inline leaf 0x8029F740 (10 guest instruction(s))
}

loc_inl1_0x8029F740:
{
    r4 = 0x806B0000u;
    r4 = MemoryInline::FlatRead32((r4 + -4808));
    r0 = (r3 & 65535);
}

loc_inl1_0x8029F750:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(747))) {
        goto loc_inl1_0x8029F758;
    }
}

loc_inl1_0x8029F754:
{
    r3 = 0;
}

loc_inl1_0x8029F758:
{
    r0 = (r3 & 65535);
    r0 = (r0 * 20);
    r3 = (r4 + r0);
}

loc_inl1_cont_8029F740:
{
    // end of inlined leaf 0x8029F740
    r0 = MemoryInline::FlatRead8((r3 + 2));
    r0 = (r0 & 3);
}

loc_803C665C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803C66E0;
    }
}

loc_803C6660:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r27)));
}

loc_803C6668:
{
    if ((static_cast<int32_t>(r29) > static_cast<int32_t>(r0))) {
        goto loc_803C66DC;
    }
}

loc_803C666C:
{
}

loc_803C6670:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(r28))) {
        goto loc_803C66DC;
    }
}

loc_803C6674:
{
    r0 = MemoryInline::FlatRead16((r24 + 14));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_2 & -16);
    r4 = (r24 + r0);
    r30 = (r4 + 356);
    r0 = MemoryInline::FlatRead16((r31 + 2));
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r1 + 10));
    MemoryInline::FlatWrite16((r30 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r1 + 8));
    MemoryInline::FlatWrite16((r30 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r31 + 5));
    r22_addr_2 = (r22 + r0);
    r0 = MemoryInline::FlatRead8(r22_addr_2);
    MemoryInline::FlatWrite16((r30 + 6), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 1));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r23_addr_2 = (r23 + r0);
    r0 = MemoryInline::FlatRead32(r23_addr_2);
    MemoryInline::FlatWrite32((r30 + 12), r0);
    r3 = r24;
    r4 = r30;
    r5 = 1;
    r6 = MemoryInline::FlatRead16((r24 + 32));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    ctx->lr = 0x803C66CCu;
    if constexpr (KnownRegArgsCpuCall<0x803C6474u>(&func_803C6474)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        const auto regargs_result_803C6474_1C11 = func_803C6474_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803C6474_1C11);
        r4 = static_cast<uint32_t>(regargs_result_803C6474_1C11 >> 32);
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
        InvokeDirectCpu<0x803C6474u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
    }
    MemoryInline::FlatWrite16((r30 + 8), static_cast<uint16_t>(r3));
    r3 = MemoryInline::FlatRead16((r24 + 14));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r24 + 14), static_cast<uint16_t>(r0));
}

loc_803C66DC:
{
    r27 = (r27 + 1);
}

loc_803C66E0:
{
    r26 = (r26 + 1);
}

loc_803C66E8:
{
    if ((static_cast<uint32_t>(r26) < static_cast<uint32_t>(131))) {
        goto loc_803C6620;
    }
}

loc_803C66EC:
{
    r3 = MemoryInline::FlatRead16((r24 + 14));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead16((r24 + 16));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_803C66F8:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r3))) {
        goto loc_803C6708;
    }
}

loc_803C66FC:
{
    r0 = (r3 + -1);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWrite16((r24 + 16), static_cast<uint16_t>(r0));
}

loc_803C6708:
{
    MemoryInline::FlatWrite16((r24 + 10), static_cast<uint16_t>(r25));
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r27)));
    r4 = 8;
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
    MemoryInline::FlatWrite16((r24 + 12), static_cast<uint16_t>(r3));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
}

loc_803C6724:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803C6730;
    }
}

loc_803C6728:
{
    r0 = 1;
    MemoryInline::FlatWrite16((r24 + 12), static_cast<uint16_t>(r0));
}

loc_803C6730:
{
    r11 = (r1 + 64);
    // inline leaf 0x804574C0 (11 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, true, false);
    // end of inlined leaf 0x804574C0
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803C65C8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803C65C8_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000207B gpr_write=0x0000087B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803C65C8 func_803C65C8 preserves=true fpr_mask=0x00000000
