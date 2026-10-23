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
extern "C" void func_80129EAC(CpuContext* ctx);
extern "C" uint64_t func_80129EAC_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_8012A078(CpuContext* ctx);
extern "C" uint64_t func_8012A078_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80154334_ra38_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r4_addr_0 = 0;

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

    goto loc_80154334;

loc_80154334:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = r3;
    r28 = r4;
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
    r30 = r3;
    r4 = (r3 & 255);
    r0 = (r4 + -1);
}

loc_80154370:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_80154384;
    }
}

loc_80154374:
{
}

loc_80154378:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(5))) {
        goto loc_80154384;
    }
}

loc_8015437C:
{
    r3 = 0;
    goto loc_80154534;
}

loc_80154384:
{
    r0 = (r3 & 255);
}

loc_8015438C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_801543BC;
    }
}

loc_80154390:
{
    r0 = MemoryInline::FlatRead8((r31 + 855));
}

loc_80154398:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_801543BC;
    }
}

loc_8015439C:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 508), static_cast<uint8_t>(r0));
    r0 = 10;
    MemoryInline::FlatWrite8((r31 + 510), static_cast<uint8_t>(r0));
    r0 = 4;
    MemoryInline::FlatWrite8((r31 + 511), static_cast<uint8_t>(r0));
    r3 = 1;
    goto loc_80154534;
}

loc_801543BC:
{
    r3 = r31;
    ctx->lr = 0x801543C4u;
    if constexpr (KnownRegArgsCpuCall<0x80129DA0u>(&func_80129DA0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80129DA0_E03 = func_80129DA0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80129DA0_E03);
        r4 = static_cast<uint32_t>(regargs_result_80129DA0_E03 >> 32);
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

loc_801543C8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801543D4;
    }
}

loc_801543CC:
{
    r3 = 1;
    goto loc_80154534;
}

loc_801543D4:
{
    r29 = 0;
    r0 = (r30 & 255);
}

loc_801543E0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80154400;
    }
}

loc_801543E4:
{
}

loc_801543E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80154408;
    }
}

loc_801543EC:
{
}

loc_801543F0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_80154410;
    }
}

loc_801543F4:
{
}

loc_801543F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_80154418;
    }
}

loc_801543FC:
{
    goto loc_80154420;
}

loc_80154400:
{
    r4 = 10;
    goto loc_80154424;
}

loc_80154408:
{
    r4 = 10;
    goto loc_80154424;
}

loc_80154410:
{
    r4 = 10;
    goto loc_80154424;
}

loc_80154418:
{
    r4 = 5;
    goto loc_80154424;
}

loc_80154420:
{
    r4 = 255;
}

loc_80154424:
{
}

loc_80154428:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(255))) {
        goto loc_8015445C;
    }
}

loc_8015442C:
{
    r3 = r31;
    ctx->lr = 0x80154434u;
    if constexpr (KnownRegArgsCpuCall<0x80129E1Cu>(&func_80129E1C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_80129E1C_166F = func_80129E1C_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80129E1C_166F);
        r4 = static_cast<uint32_t>(regargs_result_80129E1C_166F >> 32);
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

loc_8015443C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8015444C;
    }
}

loc_80154440:
{
}

loc_80154444:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80154454;
    }
}

loc_80154448:
{
    goto loc_8015445C;
}

loc_8015444C:
{
    r29 = 1;
    goto loc_8015445C;
}

loc_80154454:
{
    r3 = 1;
    goto loc_80154534;
}

loc_8015445C:
{
}

loc_80154460:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_80154494;
    }
}

loc_80154464:
{
    r3 = r31;
    ctx->lr = 0x8015446Cu;
    if constexpr (KnownRegArgsCpuCall<0x80129EACu>(&func_80129EAC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80129EAC_1C6D = func_80129EAC_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80129EAC_1C6D);
        r4 = static_cast<uint32_t>(regargs_result_80129EAC_1C6D >> 32);
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
        InvokeDirectCpu<0x80129EACu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    }
    r0 = (r3 & 255);
}

loc_80154474:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80154484;
    }
}

loc_80154478:
{
}

loc_8015447C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8015448C;
    }
}

loc_80154480:
{
    goto loc_80154494;
}

loc_80154484:
{
    r3 = 0;
    goto loc_80154534;
}

loc_8015448C:
{
    r3 = 1;
    goto loc_80154534;
}

loc_80154494:
{
}

loc_80154498:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_80154504;
    }
}

loc_8015449C:
{
    r3 = (r30 & 255);
    r0 = (r3 + -2);
}

loc_801544A8:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_801544C8;
    }
}

loc_801544AC:
{
}

loc_801544B0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_801544C0;
    }
}

loc_801544B4:
{
}

loc_801544B8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(5))) {
        goto loc_801544C8;
    }
}

loc_801544BC:
{
    goto loc_801544D0;
}

loc_801544C0:
{
    r5 = 10;
    goto loc_801544D4;
}

loc_801544C8:
{
    r5 = 3;
    goto loc_801544D4;
}

loc_801544D0:
{
    r5 = 255;
}

loc_801544D4:
{
    r3 = r31;
    r4 = 27;
    r6 = (r28 & 65535);
    r7 = 0x805A0000u;
    r7 = (r7 + 10376);
    r8 = 0x805A0000u;
    r8 = (r8 + 10388);
    ctx->lr = 0x801544F4u;
    if constexpr (KnownRegArgsCpuCall<0x8012A078u>(&func_8012A078)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_8012A078_25F9 = func_8012A078_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8012A078_25F9);
        r4 = static_cast<uint32_t>(regargs_result_8012A078_25F9 >> 32);
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

loc_801544F8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80154504;
    }
}

loc_801544FC:
{
    r3 = 1;
    goto loc_80154534;
}

loc_80154504:
{
    r3 = r31;
    r4 = (r28 & 65535);
    ctx->lr = 0x80154510u;
    if constexpr (KnownRegArgsCpuCall<0x80129AD4u>(&func_80129AD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_80129AD4_2AB8 = func_80129AD4_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80129AD4_2AB8);
        r4 = static_cast<uint32_t>(regargs_result_80129AD4_2AB8 >> 32);
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

loc_80154514:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80154520;
    }
}

loc_80154518:
{
    r3 = 1;
    goto loc_80154534;
}

loc_80154520:
{
    r3 = r31;
    // inline leaf 0x8012A268 (20 guest instruction(s))
}

loc_inl1_0x8012A268:
{
    r0 = MemoryInline::FlatRead16((r3 + 1100));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_inl1_0x8012A270:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_inl1_0x8012A290;
    }
}

loc_inl1_0x8012A274:
{
    r0 = MemoryInline::FlatRead8((r3 + 1085));
}

loc_inl1_0x8012A27C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_inl1_0x8012A2B0;
    }
}

loc_inl1_0x8012A280:
{
    r4 = MemoryInline::FlatRead16((r3 + 1106));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = MemoryInline::FlatRead16((r3 + 1102));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_inl1_0x8012A28C:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(r0))) {
        goto loc_inl1_0x8012A2B0;
    }
}

loc_inl1_0x8012A290:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 508), static_cast<uint8_t>(r0));
    r0 = 2;
    MemoryInline::FlatWrite8((r3 + 510), static_cast<uint8_t>(r0));
    r0 = 255;
    MemoryInline::FlatWrite8((r3 + 511), static_cast<uint8_t>(r0));
    r3 = 1;
    goto loc_inl1_cont_8012A268;
}

loc_inl1_0x8012A2B0:
{
    r3 = 0;
}

loc_inl1_cont_8012A268:
{
    // end of inlined leaf 0x8012A268
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 134217727);
}

loc_80154534:
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

extern "C" void func_80154334(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80154334_ra38_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000021FF gpr_write=0x000009FB gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80154334 func_80154334 preserves=true fpr_mask=0x00000000
