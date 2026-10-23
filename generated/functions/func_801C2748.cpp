#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80129A80(CpuContext* ctx);
extern "C" uint64_t func_80129A80_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80129AD4(CpuContext* ctx);
extern "C" uint64_t func_80129AD4_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80129DA0(CpuContext* ctx);
extern "C" uint64_t func_80129DA0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80129E1C(CpuContext* ctx);
extern "C" uint64_t func_80129E1C_ra18_2_18_0(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_8012A078(CpuContext* ctx);
extern "C" uint64_t func_8012A078_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8012A268(CpuContext* ctx);
extern "C" uint64_t func_8012A268_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_801C2748_ra38_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;

    goto loc_801C2748;

loc_801C2748:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r30 = r3;
    r31 = r4;
    r3 = MemoryInline::FlatRead8((r3 + 480));
    // inline leaf 0x802B06CC (8 guest instruction(s))
}

loc_inl1_0x802B06CC:
{
    r0 = (r3 & 255);
    r4 = 0x805D0000u;
    r4 = (r4 + -2816);
    r4_addr_0 = (r4 + r0);
    r0 = MemoryInline::FlatRead8(r4_addr_0);
}

loc_inl1_0x802B06E0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x802B06E4:
{
    r3 = r0;
    goto loc_inl1_cont_802B06CC;
}

loc_inl1_return:
{
}

loc_inl1_cont_802B06CC:
{
    // end of inlined leaf 0x802B06CC
    r29 = r3;
    r0 = (r3 & 255);
}

loc_801C2778:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_801C2784;
    }
}

loc_801C277C:
{
    r3 = 0;
    goto loc_801C2948;
}

loc_801C2784:
{
    r3 = r30;
    ctx->lr = 0x801C278Cu;
    if constexpr (KnownRegArgsCpuCall<0x80129DA0u>(&func_80129DA0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80129DA0_DE6 = func_80129DA0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80129DA0_DE6);
        r4 = static_cast<uint32_t>(regargs_result_80129DA0_DE6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80129DA0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_801C2790:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C279C;
    }
}

loc_801C2794:
{
    r3 = 1;
    goto loc_801C2948;
}

loc_801C279C:
{
    r28 = 0;
    r0 = (r29 & 255);
}

loc_801C27A8:
{
    r4 = 255;
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_801C27B4;
    }
}

loc_801C27B0:
{
    r4 = 10;
}

loc_801C27B4:
{
}

loc_801C27B8:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(255))) {
        goto loc_801C27EC;
    }
}

loc_801C27BC:
{
    r3 = r30;
    ctx->lr = 0x801C27C4u;
    if constexpr (KnownRegArgsCpuCall<0x80129E1Cu>(&func_80129E1C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_80129E1C_1385 = func_80129E1C_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80129E1C_1385);
        r4 = static_cast<uint32_t>(regargs_result_80129E1C_1385 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x80129E1Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    }
    r0 = (r3 & 255);
}

loc_801C27CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_801C27DC;
    }
}

loc_801C27D0:
{
}

loc_801C27D4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_801C27E4;
    }
}

loc_801C27D8:
{
    goto loc_801C27EC;
}

loc_801C27DC:
{
    r28 = 1;
    goto loc_801C27EC;
}

loc_801C27E4:
{
    r3 = 1;
    goto loc_801C2948;
}

loc_801C27EC:
{
}

loc_801C27F0:
{
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(0))) {
        goto loc_801C2838;
    }
}

loc_801C27F4:
{
    r3 = r30;
    r4 = 0;
    r0 = (r29 & 255);
}

loc_801C2804:
{
    r5 = 255;
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_801C2810;
    }
}

loc_801C280C:
{
    r5 = 7;
}

loc_801C2810:
{
    r5 = (r5 & 255);
    r6 = (r31 & 65535);
    r7 = 0;
    r8 = 0x805B0000u;
    r8 = (r8 + 12680);
    ctx->lr = 0x801C2828u;
    if constexpr (KnownRegArgsCpuCall<0x8012A078u>(&func_8012A078)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        const auto regargs_result_8012A078_1B46 = func_8012A078_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8012A078_1B46);
        r4 = static_cast<uint32_t>(regargs_result_8012A078_1B46 >> 32);
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x8012A078u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
    }
}

loc_801C282C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C2838;
    }
}

loc_801C2830:
{
    r3 = 1;
    goto loc_801C2948;
}

loc_801C2838:
{
}

loc_801C283C:
{
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(0))) {
        goto loc_801C2918;
    }
}

loc_801C2840:
{
    r0 = MemoryInline::FlatRead16((r30 + 1106));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_801C2848:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(900))) {
        goto loc_801C2918;
    }
}

loc_801C284C:
{
    r28 = 0;
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
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl2_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    r27 = r3;
    r3 = 3;
    // inline leaf 0x800CFB34 (15 guest instruction(s))
}

loc_inl3_0x800CFB34:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl3_0x800CFB44:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl3_0x800CFB50;
    }
}

loc_inl3_0x800CFB48:
{
    r3 = 0;
    goto loc_inl3_cont_800CFB34;
}

loc_inl3_0x800CFB50:
{
    r0 = (r3 & 255);
}

loc_inl3_0x800CFB58:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl3_0x800CFB64;
    }
}

loc_inl3_0x800CFB5C:
{
    r3 = 0;
    goto loc_inl3_cont_800CFB34;
}

loc_inl3_0x800CFB64:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & -2);
    r4_addr_1 = (r4 + r0);
    r3 = MemoryInline::FlatRead16(r4_addr_1);
}

loc_inl3_cont_800CFB34:
{
    // end of inlined leaf 0x800CFB34
    r26 = 0;
    r29 = (r3 & 65535);
    goto loc_801C28C8;
}

loc_801C2870:
{
    r0 = MemoryInline::FlatRead8(r30);
}

loc_801C2878:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801C28C0;
    }
}

loc_801C287C:
{
    r3 = MemoryInline::FlatRead8((r30 + 2));
    r0 = (r26 & 65535);
}

loc_801C2888:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(r0))) {
        goto loc_801C28C0;
    }
}

loc_801C288C:
{
    r3 = r27;
    // inline leaf 0x8012D068 (10 guest instruction(s))
}

loc_inl4_0x8012D068:
{
    r0 = MemoryInline::FlatRead8(r3);
}

loc_inl4_0x8012D070:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl4_0x8012D088;
    }
}

loc_inl4_0x8012D074:
{
    r0 = MemoryInline::FlatRead8((r3 + 4));
}

loc_inl4_0x8012D07C:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(2))) {
        goto loc_inl4_0x8012D088;
    }
}

loc_inl4_0x8012D080:
{
    r3 = 0;
    goto loc_inl4_cont_8012D068;
}

loc_inl4_0x8012D088:
{
    r3 = 1;
}

loc_inl4_cont_8012D068:
{
    // end of inlined leaf 0x8012D068
}

loc_801C2898:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_801C28C0;
    }
}

loc_801C289C:
{
    r0 = MemoryInline::FlatRead8((r27 + 3));
}

loc_801C28A4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(6))) {
        goto loc_801C28C0;
    }
}

loc_801C28A8:
{
    r3 = MemoryInline::FlatRead8((r27 + 481));
    r0 = MemoryInline::FlatRead8((r30 + 481));
}

loc_801C28B4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_801C28C0;
    }
}

loc_801C28B8:
{
    r28 = 1;
    goto loc_801C28D4;
}

loc_801C28C0:
{
    r26 = (r26 + 1);
    r27 = (r27 + 2840);
}

loc_801C28C8:
{
    r0 = (r26 & 65535);
}

loc_801C28D0:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r29))) {
        goto loc_801C2870;
    }
}

loc_801C28D4:
{
}

loc_801C28D8:
{
    if ((static_cast<uint32_t>(r28) != static_cast<uint32_t>(1))) {
        goto loc_801C2918;
    }
}

loc_801C28DC:
{
    r3 = r30;
    r4 = (r31 & 65535);
    r5 = 50;
    r6 = (r30 + 810);
    if constexpr (KnownRegArgsCpuCall<0x80129A80u>(&func_80129A80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80129A80_3259 = func_80129A80_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80129A80_3259);
        r4 = static_cast<uint32_t>(regargs_result_80129A80_3259 >> 32);
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

loc_801C28F4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C2918;
    }
}

loc_801C28F8:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 508), static_cast<uint8_t>(r0));
    r0 = 2;
    MemoryInline::FlatWrite8((r30 + 510), static_cast<uint8_t>(r0));
    r0 = 255;
    MemoryInline::FlatWrite8((r30 + 511), static_cast<uint8_t>(r0));
    r3 = 1;
    goto loc_801C2948;
}

loc_801C2918:
{
    r3 = r30;
    r4 = (r31 & 65535);
    ctx->lr = 0x801C2924u;
    if constexpr (KnownRegArgsCpuCall<0x80129AD4u>(&func_80129AD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        const auto regargs_result_80129AD4_3758 = func_80129AD4_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80129AD4_3758);
        r4 = static_cast<uint32_t>(regargs_result_80129AD4_3758 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x80129AD4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    }
}

loc_801C2928:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C2934;
    }
}

loc_801C292C:
{
    r3 = 1;
    goto loc_801C2948;
}

loc_801C2934:
{
    r3 = r30;
    if constexpr (KnownRegArgsCpuCall<0x8012A268u>(&func_8012A268)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8012A268_3B93 = func_8012A268_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8012A268_3B93);
        r4 = static_cast<uint32_t>(regargs_result_8012A268_3B93 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8012A268u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 134217727);
}

loc_801C2948:
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
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801C2748(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801C2748_ra38_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000001FF gpr_write=0x000009FB gpr_return=0x00000018 fpr_read=0x00000002 fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801C2748 func_801C2748 preserves=true fpr_mask=0x00000000
