#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8029F740(CpuContext* ctx);
extern "C" uint64_t func_8029F740_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8033AB28(CpuContext* ctx);
extern "C" uint64_t func_8033AB28_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8033AEBC(CpuContext* ctx);
extern "C" void func_8033AEBC_ra10_0_0_0(CpuContext*, uint32_t);

extern "C" uint64_t func_8033AB60_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
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
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8033AB60;

loc_8033AB60:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457478 (10 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, false, true);
    // end of inlined leaf 0x80457478
    r30 = r3;
    r3 = (r3 & 65535);
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
    r27 = r3;
    r3 = 2;
    // inline leaf 0x800CFAF4 (16 guest instruction(s))
}

loc_inl2_0x800CFAF4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl2_0x800CFB04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl2_0x800CFB10;
    }
}

loc_inl2_0x800CFB08:
{
    r3 = 0;
    goto loc_inl2_cont_800CFAF4;
}

loc_inl2_0x800CFB10:
{
    r0 = (r3 & 255);
}

loc_inl2_0x800CFB18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl2_0x800CFB24;
    }
}

loc_inl2_0x800CFB1C:
{
    r3 = 0;
    goto loc_inl2_cont_800CFAF4;
}

loc_inl2_0x800CFB24:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl2_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    r26 = r3;
}

loc_8033AB94:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8033ABA0;
    }
}

loc_8033AB98:
{
    r3 = 0;
    goto loc_8033ACC4;
}

loc_8033ABA0:
{
    // inline leaf 0x800CF3E8 (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 39));
    // end of inlined leaf 0x800CF3E8
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r0 = (r0 * 2848);
    r31 = (r26 + r0);
    r0 = MemoryInline::FlatRead8((r27 + 2));
    r0 = (r0 & 32);
}

loc_8033ABBC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8033ACC0;
    }
}

loc_8033ABC0:
{
    r3 = (r30 & 65535);
    if constexpr (KnownRegArgsCpuCall<0x8033AB28u>(&func_8033AB28)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8033AB28_1111 = func_8033AB28_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8033AB28_1111);
        r4 = static_cast<uint32_t>(regargs_result_8033AB28_1111 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8033AB28u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r26 = r3;
}

loc_8033ABD0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8033AC20;
    }
}

loc_8033ABD4:
{
    r0 = MemoryInline::FlatRead8((r3 + 3));
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r4 = (r4_rot_1 & -8);
    r3 = 0x80600000u;
    r0 = (r3 + 16968);
    r24 = (r0 + r4);
    r25 = 0;
    goto loc_8033AC14;
}

loc_8033ABF0:
{
    r3 = r31;
    r4 = r24;
    if constexpr (KnownRegArgsCpuCall<0x8033AEBCu>(&func_8033AEBC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        func_8033AEBC_ra10_0_0_0(ctx, r4);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8033AEBCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
}

loc_8033AC00:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8033AC0C;
    }
}

loc_8033AC04:
{
    r3 = 1;
    goto loc_8033ACC4;
}

loc_8033AC0C:
{
    r25 = (r25 + 1);
    r24 = (r24 + 8);
}

loc_8033AC14:
{
    r0 = MemoryInline::FlatRead8((r26 + 2));
}

loc_8033AC1C:
{
    if ((static_cast<int32_t>(r25) < static_cast<int32_t>(r0))) {
        goto loc_8033ABF0;
    }
}

loc_8033AC20:
{
    r24 = 0;
    r3 = 0x80600000u;
    r27 = (r3 + 16968);
    r29 = (r30 & 65535);
    goto loc_8033ACB8;
}

loc_8033AC34:
{
    r3 = (r24 & 65535);
    if constexpr (KnownRegArgsCpuCall<0x8029F740u>(&func_8029F740)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8029F740_19C1 = func_8029F740_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8029F740_19C1);
        r4 = static_cast<uint32_t>(regargs_result_8029F740_19C1 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8029F740u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = MemoryInline::FlatRead8((r3 + 2));
    r0 = (r0 & 32);
}

loc_8033AC48:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8033ACB4;
    }
}

loc_8033AC4C:
{
    r3 = (r24 & 65535);
    if constexpr (KnownRegArgsCpuCall<0x8033AB28u>(&func_8033AB28)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8033AB28_1D2C = func_8033AB28_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8033AB28_1D2C);
        r4 = static_cast<uint32_t>(regargs_result_8033AB28_1D2C >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8033AB28u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r26 = r3;
}

loc_8033AC5C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8033ACB4;
    }
}

loc_8033AC60:
{
    r0 = MemoryInline::FlatRead8((r3 + 3));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_4 & -8);
    r25 = (r27 + r0);
    r23 = 0;
    r28 = (r30 & 65535);
    goto loc_8033ACA8;
}

loc_8033AC78:
{
    r0 = MemoryInline::FlatRead16(r25);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8033AC80:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(r28))) {
        goto loc_8033ACA0;
    }
}

loc_8033AC84:
{
    r3 = r31;
    r4 = r25;
    if constexpr (KnownRegArgsCpuCall<0x8033AEBCu>(&func_8033AEBC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        func_8033AEBC_ra10_0_0_0(ctx, r4);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8033AEBCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
}

loc_8033AC94:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8033ACA0;
    }
}

loc_8033AC98:
{
    r3 = 1;
    goto loc_8033ACC4;
}

loc_8033ACA0:
{
    r23 = (r23 + 1);
    r25 = (r25 + 8);
}

loc_8033ACA8:
{
    r0 = MemoryInline::FlatRead8((r26 + 2));
}

loc_8033ACB0:
{
    if ((static_cast<int32_t>(r23) < static_cast<int32_t>(r0))) {
        goto loc_8033AC78;
    }
}

loc_8033ACB4:
{
    r24 = (r24 + 1);
}

loc_8033ACB8:
{
}

loc_8033ACBC:
{
    if ((static_cast<int32_t>(r24) < static_cast<int32_t>(r29))) {
        goto loc_8033AC34;
    }
}

loc_8033ACC0:
{
    r3 = 0;
}

loc_8033ACC4:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574C4 (10 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, true, false);
    // end of inlined leaf 0x804574C4
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8033AB60(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8033AB60_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000081B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8033AB60 func_8033AB60 preserves=true fpr_mask=0x00000000
