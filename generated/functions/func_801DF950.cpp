#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80129AD4(CpuContext* ctx);
extern "C" uint64_t func_80129AD4_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80129DA0(CpuContext* ctx);
extern "C" uint64_t func_80129DA0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80129E1C(CpuContext* ctx);
extern "C" uint64_t func_80129E1C_ra18_2_18_0(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_8012A078(CpuContext* ctx);
extern "C" uint64_t func_8012A078_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80137834(CpuContext* ctx);
extern "C" uint64_t func_80137834_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_801DF950_ra38_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r4_addr_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;

    MKW_GUEST_ENTER(0x801DF950u);
    goto loc_801DF950;

loc_801DF950:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r30 = r4;
    r3 = MemoryInline::FlatRead8((r3 + 480));
    // inline leaf 0x802B06CC (8 guest instruction(s))
}

loc_inl0_0x802B06CC:
{
    r0 = (r3 & 255);
    r4 = 0x805D0000u;
    r4 = (r4 + -2816);
    r4_addr_0 = (r4 + r0);
    r0 = MemoryInline::FlatRead8(r4_addr_0);
}

loc_inl0_0x802B06E0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x802B06E4:
{
    r3 = r0;
    goto loc_inl0_cont_802B06CC;
}

loc_inl0_return:
{
}

loc_inl0_cont_802B06CC:
{
    // end of inlined leaf 0x802B06CC
    r31 = r3;
    r3 = (r3 & 255);
    r0 = (r3 + -1);
}

loc_801DF98C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(4))) {
        goto loc_801DF998;
    }
}

loc_801DF990:
{
    r3 = 0;
    goto loc_801DFC4C;
}

loc_801DF998:
{
    r3 = r29;
    ctx->lr = 0x801DF9A0u;
    if constexpr (KnownRegArgsCpuCall<0x80129DA0u>(&func_80129DA0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80129DA0_AD5 = func_80129DA0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80129DA0_AD5);
        r4 = static_cast<uint32_t>(regargs_result_80129DA0_AD5 >> 32);
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

loc_801DF9A4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801DF9B0;
    }
}

loc_801DF9A8:
{
    r3 = 1;
    goto loc_801DFC4C;
}

loc_801DF9B0:
{
    r28 = 0;
    r0 = (r31 & 255);
}

loc_801DF9BC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_801DF9E4;
    }
}

loc_801DF9C0:
{
}

loc_801DF9C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_801DF9EC;
    }
}

loc_801DF9C8:
{
}

loc_801DF9CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_801DF9F4;
    }
}

loc_801DF9D0:
{
}

loc_801DF9D4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_801DF9FC;
    }
}

loc_801DF9D8:
{
}

loc_801DF9DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_801DFA04;
    }
}

loc_801DF9E0:
{
    goto loc_801DFA0C;
}

loc_801DF9E4:
{
    r4 = 9;
    goto loc_801DFA10;
}

loc_801DF9EC:
{
    r4 = 9;
    goto loc_801DFA10;
}

loc_801DF9F4:
{
    r4 = 10;
    goto loc_801DFA10;
}

loc_801DF9FC:
{
    r4 = 9;
    goto loc_801DFA10;
}

loc_801DFA04:
{
    r4 = 4;
    goto loc_801DFA10;
}

loc_801DFA0C:
{
    r4 = 255;
}

loc_801DFA10:
{
}

loc_801DFA14:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(255))) {
        goto loc_801DFA48;
    }
}

loc_801DFA18:
{
    r3 = r29;
    ctx->lr = 0x801DFA20u;
    if constexpr (KnownRegArgsCpuCall<0x80129E1Cu>(&func_80129E1C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_80129E1C_1378 = func_80129E1C_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80129E1C_1378);
        r4 = static_cast<uint32_t>(regargs_result_80129E1C_1378 >> 32);
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

loc_801DFA28:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_801DFA38;
    }
}

loc_801DFA2C:
{
}

loc_801DFA30:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_801DFA40;
    }
}

loc_801DFA34:
{
    goto loc_801DFA48;
}

loc_801DFA38:
{
    r28 = 1;
    goto loc_801DFA48;
}

loc_801DFA40:
{
    r3 = 1;
    goto loc_801DFC4C;
}

loc_801DFA48:
{
}

loc_801DFA4C:
{
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(0))) {
        goto loc_801DFB00;
    }
}

loc_801DFA50:
{
    r0 = (r31 & 255);
}

loc_801DFA58:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_801DFA80;
    }
}

loc_801DFA5C:
{
}

loc_801DFA60:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_801DFA8C;
    }
}

loc_801DFA64:
{
}

loc_801DFA68:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_801DFA98;
    }
}

loc_801DFA6C:
{
}

loc_801DFA70:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_801DFAA4;
    }
}

loc_801DFA74:
{
}

loc_801DFA78:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_801DFAB0;
    }
}

loc_801DFA7C:
{
    goto loc_801DFABC;
}

loc_801DFA80:
{
    r4 = 27;
    r5 = 9;
    goto loc_801DFAC4;
}

loc_801DFA8C:
{
    r4 = 27;
    r5 = 6;
    goto loc_801DFAC4;
}

loc_801DFA98:
{
    r4 = 27;
    r5 = 3;
    goto loc_801DFAC4;
}

loc_801DFAA4:
{
    r4 = 28;
    r5 = 5;
    goto loc_801DFAC4;
}

loc_801DFAB0:
{
    r4 = 27;
    r5 = 3;
    goto loc_801DFAC4;
}

loc_801DFABC:
{
    r4 = 0;
    r5 = 255;
}

loc_801DFAC4:
{
}

loc_801DFAC8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_801DFAD4;
    }
}

loc_801DFACC:
{
}

loc_801DFAD0:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(255))) {
        goto loc_801DFB00;
    }
}

loc_801DFAD4:
{
    r3 = r29;
    r6 = (r30 & 65535);
    r7 = 0x805B0000u;
    r7 = (r7 + 29188);
    r8 = 0x805B0000u;
    r8 = (r8 + 29200);
    ctx->lr = 0x801DFAF0u;
    if constexpr (KnownRegArgsCpuCall<0x8012A078u>(&func_8012A078)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_8012A078_1F60 = func_8012A078_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8012A078_1F60);
        r4 = static_cast<uint32_t>(regargs_result_8012A078_1F60 >> 32);
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
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x8012A078u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_801DFAF4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801DFB00;
    }
}

loc_801DFAF8:
{
    r3 = 1;
    goto loc_801DFC4C;
}

loc_801DFB00:
{
    r3 = r29;
    r4 = (r30 & 65535);
    ctx->lr = 0x801DFB0Cu;
    if constexpr (KnownRegArgsCpuCall<0x80129AD4u>(&func_80129AD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_80129AD4_23EF = func_80129AD4_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80129AD4_23EF);
        r4 = static_cast<uint32_t>(regargs_result_80129AD4_23EF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80129AD4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_801DFB10:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801DFB1C;
    }
}

loc_801DFB14:
{
    r3 = 1;
    goto loc_801DFC4C;
}

loc_801DFB1C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r29 + 481), 0, 627u, true, false);
    r3 = MemoryInline::ReadResolved16(guest_range_0, 625u, (r29 + 1106));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 623u, (r29 + 1104));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_801DFB28:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r0))) {
        goto loc_801DFB38;
    }
}

loc_801DFB2C:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 604u, (r29 + 1085));
}

loc_801DFB34:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_801DFC38;
    }
}

loc_801DFB38:
{
    r0 = (r31 & 255);
}

loc_801DFB40:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(4))) {
        goto loc_801DFB50;
    }
}

loc_801DFB44:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r29 + 481));
}

loc_801DFB4C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_801DFB68;
    }
}

loc_801DFB50:
{
    r0 = (r31 & 255);
}

loc_801DFB58:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_801DFC38;
    }
}

loc_801DFB5C:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r29 + 481));
}

loc_801DFB64:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(9))) {
        goto loc_801DFC38;
    }
}

loc_801DFB68:
{
    r4 = (r30 & 65535);
    r3 = 1374420992;
    r0 = (r3 + -31457);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 5);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    r0 = (r0 + r3);
    r0 = (r0 * 100);
    r0 = (r4 - r0);
}

loc_801DFB90:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(50))) {
        goto loc_801DFC38;
    }
}

loc_801DFB94:
{
    r4 = MemoryInline::ReadResolved8(guest_range_0, 417u, (r29 + 898));
}

loc_801DFB9C:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(255))) {
        goto loc_801DFC38;
    }
}

loc_801DFBA0:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 415u, (r29 + 896));
}

loc_801DFBA8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_801DFBC0;
    }
}

loc_801DFBAC:
{
    r3 = MemoryInline::ReadResolved8(guest_range_0, 416u, (r29 + 897));
    ctx->lr = 0x801DFBB4u;
    if constexpr (KnownRegArgsCpuCall<0x80137834u>(&func_80137834)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_80137834_31C6 = func_80137834_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80137834_31C6);
        r4 = static_cast<uint32_t>(regargs_result_80137834_31C6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x80137834u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
    r0 = MemoryInline::FlatRead8((r3 + 1446));
    r28 = (r0 & 127);
    goto loc_801DFBC4;
}

loc_801DFBC0:
{
    r28 = 255;
}

loc_801DFBC4:
{
    r0 = (r28 & 255);
}

loc_801DFBCC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_801DFC38;
    }
}

loc_801DFBD0:
{
    r3 = r29;
    // inline leaf 0x801302A0 (3 guest instruction(s))
    r0 = MemoryInline::FlatRead8((r3 + 554));
    r3 = (r0 & 127);
    // end of inlined leaf 0x801302A0
    r3 = (r3 & 255);
    r0 = (r28 & 255);
}

loc_801DFBE4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r3))) {
        goto loc_801DFC38;
    }
}

loc_801DFBE8:
{
    r0 = (r31 & 255);
}

loc_801DFBF0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_801DFC00;
    }
}

loc_801DFBF4:
{
}

loc_801DFBF8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_801DFC08;
    }
}

loc_801DFBFC:
{
    goto loc_801DFC10;
}

loc_801DFC00:
{
    r3 = 8;
    goto loc_801DFC14;
}

loc_801DFC08:
{
    r3 = 2;
    goto loc_801DFC14;
}

loc_801DFC10:
{
    r3 = 255;
}

loc_801DFC14:
{
}

loc_801DFC18:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(255))) {
        goto loc_801DFC38;
    }
}

loc_801DFC1C:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r29 + 508), static_cast<uint8_t>(r0));
    r0 = 10;
    MemoryInline::FlatWrite8((r29 + 510), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r29 + 511), static_cast<uint8_t>(r3));
    r3 = 1;
    goto loc_801DFC4C;
}

loc_801DFC38:
{
    r3 = r29;
    // inline leaf 0x8012A268 (20 guest instruction(s))
}

loc_inl2_0x8012A268:
{
    r0 = MemoryInline::FlatRead16((r3 + 1100));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_inl2_0x8012A270:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_inl2_0x8012A290;
    }
}

loc_inl2_0x8012A274:
{
    r0 = MemoryInline::FlatRead8((r3 + 1085));
}

loc_inl2_0x8012A27C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_inl2_0x8012A2B0;
    }
}

loc_inl2_0x8012A280:
{
    r4 = MemoryInline::FlatRead16((r3 + 1106));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = MemoryInline::FlatRead16((r3 + 1102));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_inl2_0x8012A28C:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(r0))) {
        goto loc_inl2_0x8012A2B0;
    }
}

loc_inl2_0x8012A290:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 508), static_cast<uint8_t>(r0));
    r0 = 2;
    MemoryInline::FlatWrite8((r3 + 510), static_cast<uint8_t>(r0));
    r0 = 255;
    MemoryInline::FlatWrite8((r3 + 511), static_cast<uint8_t>(r0));
    r3 = 1;
    goto loc_inl2_cont_8012A268;
}

loc_inl2_0x8012A2B0:
{
    r3 = 0;
}

loc_inl2_cont_8012A268:
{
    // end of inlined leaf 0x8012A268
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_3 & 134217727);
}

loc_801DFC4C:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[1] = f1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801DF950(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801DF950_ra38_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000001FF gpr_write=0x000009FB gpr_return=0x00000018 fpr_read=0x00000002 fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801DF950 func_801DF950 preserves=true fpr_mask=0x00000000
