#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80126BC0(CpuContext* ctx);
extern "C" uint64_t func_80126BC0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80129A80(CpuContext* ctx);
extern "C" uint64_t func_80129A80_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80129FC0(CpuContext* ctx);
extern "C" uint64_t func_80129FC0_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_8012A078_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
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
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
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

    goto loc_8012A078;

loc_8012A078:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457474 (11 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, false, true);
    // end of inlined leaf 0x80457474
    r23 = r3;
    r24 = r4;
    r25 = r5;
    r26 = r6;
    r22 = r8;
    r4 = MemoryInline::FlatRead16((r3 + 1106));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = MemoryInline::FlatRead16((r3 + 1104));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8012A0AC:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r0))) {
        goto loc_8012A0BC;
    }
}

loc_8012A0B0:
{
    r0 = MemoryInline::FlatRead8((r3 + 1085));
}

loc_8012A0B8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_8012A24C;
    }
}

loc_8012A0BC:
{
    r3 = r23;
    r4 = r7;
    ctx->lr = 0x8012A0C8u;
    if constexpr (KnownRegArgsCpuCall<0x80129FC0u>(&func_80129FC0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80129FC0_BC4 = func_80129FC0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80129FC0_BC4);
        r4 = static_cast<uint32_t>(regargs_result_80129FC0_BC4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80129FC0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r30 = r3;
    r3 = r23;
    r4 = r22;
    ctx->lr = 0x8012A0D8u;
    if constexpr (KnownRegArgsCpuCall<0x80129FC0u>(&func_80129FC0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80129FC0_EBD = func_80129FC0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80129FC0_EBD);
        r4 = static_cast<uint32_t>(regargs_result_80129FC0_EBD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80129FC0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r31 = r3;
    r0 = (r30 & 65535);
}

loc_8012A0E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8012A1F4;
    }
}

loc_8012A0E8:
{
    r0 = (r24 & 255);
}

loc_8012A0F0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8012A1F4;
    }
}

loc_8012A0F4:
{
    r27 = 0;
    r3 = 3;
    // inline leaf 0x800CFB34 (15 guest instruction(s))
}

loc_inl1_0x800CFB34:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl1_0x800CFB44:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x800CFB50;
    }
}

loc_inl1_0x800CFB48:
{
    r3 = 0;
    goto loc_inl1_cont_800CFB34;
}

loc_inl1_0x800CFB50:
{
    r0 = (r3 & 255);
}

loc_inl1_0x800CFB58:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl1_0x800CFB64;
    }
}

loc_inl1_0x800CFB5C:
{
    r3 = 0;
    goto loc_inl1_cont_800CFB34;
}

loc_inl1_0x800CFB64:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r4_addr_1 = (r4 + r0);
    r3 = MemoryInline::FlatRead16(r4_addr_1);
}

loc_inl1_cont_800CFB34:
{
    // end of inlined leaf 0x800CFB34
    r22 = r3;
    r3 = 3;
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
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl2_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    r29 = r3;
    r28 = 0;
    r22 = (r22 & 65535);
    goto loc_8012A1D8;
}

loc_8012A11C:
{
    r3 = MemoryInline::FlatRead8((r23 + 2));
    r0 = (r28 & 65535);
}

loc_8012A128:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(r0))) {
        goto loc_8012A1D0;
    }
}

loc_8012A12C:
{
    r0 = MemoryInline::FlatRead8(r29);
}

loc_8012A134:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8012A1D0;
    }
}

loc_8012A138:
{
    r3 = MemoryInline::FlatRead8((r29 + 3));
    r0 = (r24 & 255);
}

loc_8012A144:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_8012A1D0;
    }
}

loc_8012A148:
{
    r0 = MemoryInline::FlatRead32((r29 + 456));
    r0 = (r0 & 8);
}

loc_8012A154:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8012A1D0;
    }
}

loc_8012A158:
{
    r0 = MemoryInline::FlatRead8((r29 + 485));
}

loc_8012A160:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(11))) {
        goto loc_8012A1CC;
    }
}

loc_8012A164:
{
}

loc_8012A168:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(12))) {
        goto loc_8012A1CC;
    }
}

loc_8012A16C:
{
    r5 = MemoryInline::FlatRead8((r29 + 481));
    r0 = MemoryInline::FlatRead8((r23 + 481));
}

loc_8012A178:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r5))) {
        goto loc_8012A1CC;
    }
}

loc_8012A17C:
{
    r3 = r23;
    r4 = MemoryInline::FlatRead8((r23 + 480));
    ctx->lr = 0x8012A188u;
    if constexpr (KnownRegArgsCpuCall<0x80126BC0u>(&func_80126BC0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80126BC0_20D6 = func_80126BC0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80126BC0_20D6);
        r4 = static_cast<uint32_t>(regargs_result_80126BC0_20D6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80126BC0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_8012A18C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8012A1CC;
    }
}

loc_8012A190:
{
    r3 = r23;
    r4 = (r26 & 65535);
    r5 = (r30 & 65535);
    r6 = (r23 + 512);
    if constexpr (KnownRegArgsCpuCall<0x80129A80u>(&func_80129A80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80129A80_24E6 = func_80129A80_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80129A80_24E6);
        r4 = static_cast<uint32_t>(regargs_result_80129A80_24E6 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x80129A80u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_8012A1A8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8012A1CC;
    }
}

loc_8012A1AC:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r23 + 508), static_cast<uint8_t>(r0));
    r0 = 4;
    MemoryInline::FlatWrite8((r23 + 510), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r29 + 481));
    MemoryInline::FlatWrite8((r23 + 511), static_cast<uint8_t>(r0));
    r3 = 1;
    goto loc_8012A250;
}

loc_8012A1CC:
{
    r27 = 1;
}

loc_8012A1D0:
{
    r28 = (r28 + 1);
    r29 = (r29 + 2840);
}

loc_8012A1D8:
{
    r0 = (r28 & 65535);
}

loc_8012A1E0:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r22))) {
        goto loc_8012A11C;
    }
}

loc_8012A1E4:
{
}

loc_8012A1E8:
{
    if ((static_cast<uint32_t>(r27) != static_cast<uint32_t>(1))) {
        goto loc_8012A1F4;
    }
}

loc_8012A1EC:
{
    r3 = 0;
    goto loc_8012A250;
}

loc_8012A1F4:
{
    r5 = (r31 & 65535);
}

loc_8012A1FC:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8012A24C;
    }
}

loc_8012A200:
{
    r3 = (r25 & 255);
}

loc_8012A208:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(255))) {
        goto loc_8012A24C;
    }
}

loc_8012A20C:
{
    r0 = MemoryInline::FlatRead8((r23 + 481));
}

loc_8012A214:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r3))) {
        goto loc_8012A24C;
    }
}

loc_8012A218:
{
    r3 = r23;
    r4 = (r26 & 65535);
    r6 = (r23 + 512);
    if constexpr (KnownRegArgsCpuCall<0x80129A80u>(&func_80129A80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80129A80_2DF0 = func_80129A80_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80129A80_2DF0);
        r4 = static_cast<uint32_t>(regargs_result_80129A80_2DF0 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x80129A80u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_8012A22C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8012A24C;
    }
}

loc_8012A230:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r23 + 508), static_cast<uint8_t>(r0));
    r0 = 3;
    MemoryInline::FlatWrite8((r23 + 510), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r23 + 511), static_cast<uint8_t>(r25));
    r3 = 1;
    goto loc_8012A250;
}

loc_8012A24C:
{
    r3 = 0;
}

loc_8012A250:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574C0 (11 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, true, false);
    // end of inlined leaf 0x804574C0
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8012A078(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8012A078_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000001FB gpr_write=0x0000087B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8012A078 func_8012A078 preserves=true fpr_mask=0x00000000
