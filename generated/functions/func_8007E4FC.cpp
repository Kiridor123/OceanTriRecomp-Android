#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8005A980(CpuContext* ctx);
extern "C" uint64_t func_8005A980_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80064150(CpuContext* ctx);
extern "C" uint32_t func_80064150_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8006F140(CpuContext* ctx);
extern "C" uint64_t func_8006F140_ra68_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8006F188(CpuContext* ctx);
extern "C" uint64_t func_8006F188_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8006F284(CpuContext* ctx);
extern "C" uint64_t func_8006F284_ra68_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8006F2C8(CpuContext* ctx);
extern "C" uint64_t func_8006F2C8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8006F3A4(CpuContext* ctx);
extern "C" uint64_t func_8006F3A4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8006F44C(CpuContext* ctx);
extern "C" uint64_t func_8006F44C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8006F4EC(CpuContext* ctx);
extern "C" uint64_t func_8006F4EC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80076700(CpuContext* ctx);
extern "C" uint64_t func_80076700_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800767C8(CpuContext* ctx);
extern "C" uint64_t func_800767C8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8007688C(CpuContext* ctx);
extern "C" uint64_t func_8007688C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800769A4(CpuContext* ctx);
extern "C" uint64_t func_800769A4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8007E4DC(CpuContext* ctx);
extern "C" uint64_t func_8007E4DC_ra68_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8007E4E4(CpuContext* ctx);
extern "C" uint64_t func_8007E4E4_ra68_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8007E4EC(CpuContext* ctx);
extern "C" uint64_t func_8007E4EC_ra68_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8009528C(CpuContext* ctx);
extern "C" uint64_t func_8009528C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800956FC(CpuContext* ctx);
extern "C" uint64_t func_800956FC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80095C28(CpuContext* ctx);
extern "C" uint64_t func_80095C28_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8009713C(CpuContext* ctx);
extern "C" uint64_t func_8009713C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800975B0(CpuContext* ctx);
extern "C" uint64_t func_800975B0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8009A2DC(CpuContext* ctx);
extern "C" uint64_t func_8009A2DC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_8007E4FC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8007E4FC;

loc_8007E4FC:
{
    MemoryInline::FlatWriteRam32((r1 + -128), r1);
    r1 = (r1 + -128);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 132), r0);
    r29 = r3;
    r30 = r4;
    r31 = r5;
    // inline leaf 0x8005AB64 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 232));
    // end of inlined leaf 0x8005AB64
    MemoryInline::FlatWriteRam32((r1 + 96), r3);
    r3 = (r1 + 96);
    r4 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80098864u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWriteRam32((r1 + 100), r3);
    r3 = (r1 + 104);
    r4 = (r1 + 100);
    ctx->lr = 0x8007E544u;
    if constexpr (KnownRegArgsCpuCall<0x80064150u>(&func_80064150)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80064150_12D6 = func_80064150_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_80064150_12D6;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80064150u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r0 = (r31 & 1);
}

loc_8007E54C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8007E588;
    }
}

loc_8007E550:
{
    r0 = MemoryInline::FlatRead32((r29 + 332));
}

loc_8007E558:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8007E588;
    }
}

loc_8007E55C:
{
    r3 = (r1 + 104);
    ctx->lr = 0x8007E564u;
    if constexpr (KnownRegArgsCpuCall<0x8006F4ECu>(&func_8006F4EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8006F4EC_16AB = func_8006F4EC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8006F4EC_16AB);
        r4 = static_cast<uint32_t>(regargs_result_8006F4EC_16AB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8006F4ECu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    MemoryInline::FlatWriteRam32((r1 + 88), r3);
    r3 = (r1 + 88);
    r4 = MemoryInline::FlatRead32((r29 + 332));
    r0 = (r30 * 260);
    r4 = (r4 + r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80094C00u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWriteRam32((r1 + 92), r3);
    r3 = (r1 + 92);
    // inline leaf 0x8006F448 (1 guest instruction(s))
    // end of inlined leaf 0x8006F448
}

loc_8007E588:
{
    r0 = (r31 & 2);
}

loc_8007E590:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8007E5CC;
    }
}

loc_8007E594:
{
    r0 = MemoryInline::FlatRead32((r29 + 336));
}

loc_8007E59C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8007E5CC;
    }
}

loc_8007E5A0:
{
    r3 = (r1 + 104);
    ctx->lr = 0x8007E5A8u;
    if constexpr (KnownRegArgsCpuCall<0x8006F44Cu>(&func_8006F44C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8006F44C_1D51 = func_8006F44C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8006F44C_1D51);
        r4 = static_cast<uint32_t>(regargs_result_8006F44C_1D51 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8006F44Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    MemoryInline::FlatWriteRam32((r1 + 80), r3);
    r3 = (r1 + 80);
    r4 = MemoryInline::FlatRead32((r29 + 336));
    r0 = (r30 * 100);
    r4 = (r4 + r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80095114u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWriteRam32((r1 + 84), r3);
    r3 = (r1 + 84);
    // inline leaf 0x8006F444 (1 guest instruction(s))
    // end of inlined leaf 0x8006F444
}

loc_8007E5CC:
{
    r0 = (r31 & 4);
}

loc_8007E5D4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8007E610;
    }
}

loc_8007E5D8:
{
    r0 = MemoryInline::FlatRead32((r29 + 340));
}

loc_8007E5E0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8007E610;
    }
}

loc_8007E5E4:
{
    r3 = (r1 + 104);
    ctx->lr = 0x8007E5ECu;
    if constexpr (KnownRegArgsCpuCall<0x8006F3A4u>(&func_8006F3A4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8006F3A4_23F7 = func_8006F3A4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8006F3A4_23F7);
        r4 = static_cast<uint32_t>(regargs_result_8006F3A4_23F7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8006F3A4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    MemoryInline::FlatWriteRam32((r1 + 72), r3);
    r3 = (r1 + 72);
    r4 = MemoryInline::FlatRead32((r29 + 340));
    r0 = (r30 * 584);
    r4 = (r4 + r0);
    ctx->lr = 0x8007E604u;
    if constexpr (KnownRegArgsCpuCall<0x8009528Cu>(&func_8009528C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8009528C_27DA = func_8009528C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8009528C_27DA);
        r4 = static_cast<uint32_t>(regargs_result_8009528C_27DA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8009528Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    MemoryInline::FlatWriteRam32((r1 + 76), r3);
    r3 = (r1 + 76);
    // inline leaf 0x8006F280 (1 guest instruction(s))
    // end of inlined leaf 0x8006F280
}

loc_8007E610:
{
    r0 = (r31 & 8);
}

loc_8007E618:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8007E654;
    }
}

loc_8007E61C:
{
    r0 = MemoryInline::FlatRead32((r29 + 344));
}

loc_8007E624:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8007E654;
    }
}

loc_8007E628:
{
    r3 = (r1 + 104);
    ctx->lr = 0x8007E630u;
    if constexpr (KnownRegArgsCpuCall<0x8005A980u>(&func_8005A980)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8005A980_2D58 = func_8005A980_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8005A980_2D58);
        r4 = static_cast<uint32_t>(regargs_result_8005A980_2D58 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8005A980u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    MemoryInline::FlatWriteRam32((r1 + 64), r3);
    r3 = (r1 + 64);
    r4 = MemoryInline::FlatRead32((r29 + 344));
    r0 = (r30 * 40);
    r4 = (r4 + r0);
    ctx->lr = 0x8007E648u;
    if constexpr (KnownRegArgsCpuCall<0x8009713Cu>(&func_8009713C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8009713C_313A = func_8009713C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8009713C_313A);
        r4 = static_cast<uint32_t>(regargs_result_8009713C_313A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8009713Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    MemoryInline::FlatWriteRam32((r1 + 68), r3);
    r3 = (r1 + 68);
    // inline leaf 0x8006F148 (1 guest instruction(s))
    // end of inlined leaf 0x8006F148
}

loc_8007E654:
{
    r0 = (r31 & 16);
}

loc_8007E65C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8007E698;
    }
}

loc_8007E660:
{
    r0 = MemoryInline::FlatRead32((r29 + 348));
}

loc_8007E668:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8007E698;
    }
}

loc_8007E66C:
{
    r3 = (r1 + 104);
    ctx->lr = 0x8007E674u;
    if constexpr (KnownRegArgsCpuCall<0x8007688Cu>(&func_8007688C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8007688C_36B9 = func_8007688C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8007688C_36B9);
        r4 = static_cast<uint32_t>(regargs_result_8007688C_36B9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8007688Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    MemoryInline::FlatWriteRam32((r1 + 56), r3);
    r3 = (r1 + 56);
    r4 = MemoryInline::FlatRead32((r29 + 348));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(3));
    r0 = (r0_rot_1 & -8);
    r4 = (r4 + r0);
    ctx->lr = 0x8007E68Cu;
    if constexpr (KnownRegArgsCpuCall<0x800956FCu>(&func_800956FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800956FC_3AF7 = func_800956FC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800956FC_3AF7);
        r4 = static_cast<uint32_t>(regargs_result_800956FC_3AF7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800956FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    MemoryInline::FlatWriteRam32((r1 + 60), r3);
    r3 = (r1 + 60);
    // inline leaf 0x8007E4F8 (1 guest instruction(s))
    // end of inlined leaf 0x8007E4F8
}

loc_8007E698:
{
    r0 = (r31 & 32);
}

loc_8007E6A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8007E6DC;
    }
}

loc_8007E6A4:
{
    r0 = MemoryInline::FlatRead32((r29 + 352));
}

loc_8007E6AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8007E6DC;
    }
}

loc_8007E6B0:
{
    r3 = (r1 + 104);
    ctx->lr = 0x8007E6B8u;
    if constexpr (KnownRegArgsCpuCall<0x800769A4u>(&func_800769A4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800769A4_4076 = func_800769A4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800769A4_4076);
        r4 = static_cast<uint32_t>(regargs_result_800769A4_4076 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800769A4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    MemoryInline::FlatWriteRam32((r1 + 48), r3);
    r3 = (r1 + 48);
    r4 = MemoryInline::FlatRead32((r29 + 352));
    r0 = (r30 * 12);
    r4 = (r4 + r0);
    ctx->lr = 0x8007E6D0u;
    if constexpr (KnownRegArgsCpuCall<0x80095C28u>(&func_80095C28)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80095C28_4458 = func_80095C28_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80095C28_4458);
        r4 = static_cast<uint32_t>(regargs_result_80095C28_4458 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80095C28u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    MemoryInline::FlatWriteRam32((r1 + 52), r3);
    r3 = (r1 + 52);
    // inline leaf 0x8007E4F4 (1 guest instruction(s))
    // end of inlined leaf 0x8007E4F4
}

loc_8007E6DC:
{
    r0 = (r31 & 128);
}

loc_8007E6E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8007E720;
    }
}

loc_8007E6E8:
{
    r0 = MemoryInline::FlatRead32((r29 + 356));
}

loc_8007E6F0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8007E720;
    }
}

loc_8007E6F4:
{
    r3 = (r1 + 104);
    ctx->lr = 0x8007E6FCu;
    if constexpr (KnownRegArgsCpuCall<0x800767C8u>(&func_800767C8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800767C8_49D8 = func_800767C8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800767C8_49D8);
        r4 = static_cast<uint32_t>(regargs_result_800767C8_49D8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800767C8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    MemoryInline::FlatWriteRam32((r1 + 40), r3);
    r3 = (r1 + 40);
    r4 = MemoryInline::FlatRead32((r29 + 356));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(5));
    r0 = (r0_rot_3 & -32);
    r4 = (r4 + r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800946D8u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWriteRam32((r1 + 44), r3);
    r3 = (r1 + 44);
    ctx->lr = 0x8007E720u;
    if constexpr (KnownRegArgsCpuCall<0x8007E4ECu>(&func_8007E4EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8007E4EC_4EE2 = func_8007E4EC_ra68_0_18_0(ctx, r3, r5, r6);
        r3 = static_cast<uint32_t>(regargs_result_8007E4EC_4EE2);
        r4 = static_cast<uint32_t>(regargs_result_8007E4EC_4EE2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8007E4ECu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_8007E720:
{
    r0 = (r31 & 256);
}

loc_8007E728:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8007E764;
    }
}

loc_8007E72C:
{
    r0 = MemoryInline::FlatRead32((r29 + 360));
}

loc_8007E734:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8007E764;
    }
}

loc_8007E738:
{
    r3 = (r1 + 104);
    ctx->lr = 0x8007E740u;
    if constexpr (KnownRegArgsCpuCall<0x8006F188u>(&func_8006F188)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8006F188_53BC = func_8006F188_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8006F188_53BC);
        r4 = static_cast<uint32_t>(regargs_result_8006F188_53BC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8006F188u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    MemoryInline::FlatWriteRam32((r1 + 32), r3);
    r3 = (r1 + 32);
    r4 = MemoryInline::FlatRead32((r29 + 360));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(7));
    r0 = (r0_rot_5 & -128);
    r4 = (r4 + r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80094724u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWriteRam32((r1 + 36), r3);
    r3 = (r1 + 36);
    ctx->lr = 0x8007E764u;
    if constexpr (KnownRegArgsCpuCall<0x8006F140u>(&func_8006F140)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8006F140_58C7 = func_8006F140_ra68_0_18_0(ctx, r3, r5, r6);
        r3 = static_cast<uint32_t>(regargs_result_8006F140_58C7);
        r4 = static_cast<uint32_t>(regargs_result_8006F140_58C7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8006F140u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_8007E764:
{
    r0 = (r31 & 512);
}

loc_8007E76C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8007E7A8;
    }
}

loc_8007E770:
{
    r0 = MemoryInline::FlatRead32((r29 + 364));
}

loc_8007E778:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8007E7A8;
    }
}

loc_8007E77C:
{
    r3 = (r1 + 104);
    ctx->lr = 0x8007E784u;
    if constexpr (KnownRegArgsCpuCall<0x8006F2C8u>(&func_8006F2C8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8006F2C8_5DA1 = func_8006F2C8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8006F2C8_5DA1);
        r4 = static_cast<uint32_t>(regargs_result_8006F2C8_5DA1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8006F2C8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    MemoryInline::FlatWriteRam32((r1 + 24), r3);
    r3 = (r1 + 24);
    r4 = MemoryInline::FlatRead32((r29 + 364));
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(6));
    r0 = (r0_rot_7 & -64);
    r4 = (r4 + r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80094770u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWriteRam32((r1 + 28), r3);
    r3 = (r1 + 28);
    ctx->lr = 0x8007E7A8u;
    if constexpr (KnownRegArgsCpuCall<0x8006F284u>(&func_8006F284)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8006F284_62AB = func_8006F284_ra68_0_18_0(ctx, r3, r5, r6);
        r3 = static_cast<uint32_t>(regargs_result_8006F284_62AB);
        r4 = static_cast<uint32_t>(regargs_result_8006F284_62AB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8006F284u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_8007E7A8:
{
    r0 = (r31 & 1024);
}

loc_8007E7B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8007E7EC;
    }
}

loc_8007E7B4:
{
    r0 = MemoryInline::FlatRead32((r29 + 368));
}

loc_8007E7BC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8007E7EC;
    }
}

loc_8007E7C0:
{
    r3 = (r1 + 104);
    ctx->lr = 0x8007E7C8u;
    if constexpr (KnownRegArgsCpuCall<0x80076700u>(&func_80076700)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80076700_6786 = func_80076700_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80076700_6786);
        r4 = static_cast<uint32_t>(regargs_result_80076700_6786 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80076700u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    MemoryInline::FlatWriteRam32((r1 + 16), r3);
    r3 = (r1 + 16);
    r4 = MemoryInline::FlatRead32((r29 + 368));
    r0 = (r30 * 160);
    r4 = (r4 + r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800947BCu>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    r3 = (r1 + 20);
    ctx->lr = 0x8007E7ECu;
    if constexpr (KnownRegArgsCpuCall<0x8007E4E4u>(&func_8007E4E4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8007E4E4_6C34 = func_8007E4E4_ra68_0_18_0(ctx, r3, r5, r6);
        r3 = static_cast<uint32_t>(regargs_result_8007E4E4_6C34);
        r4 = static_cast<uint32_t>(regargs_result_8007E4E4_6C34 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8007E4E4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_8007E7EC:
{
    r0 = (r31 & 2048);
}

loc_8007E7F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8007E830;
    }
}

loc_8007E7F8:
{
    r0 = MemoryInline::FlatRead32((r29 + 372));
}

loc_8007E800:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8007E830;
    }
}

loc_8007E804:
{
    r3 = (r1 + 104);
    ctx->lr = 0x8007E80Cu;
    if constexpr (KnownRegArgsCpuCall<0x800975B0u>(&func_800975B0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800975B0_710F = func_800975B0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800975B0_710F);
        r4 = static_cast<uint32_t>(regargs_result_800975B0_710F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800975B0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    r3 = (r1 + 8);
    r4 = MemoryInline::FlatRead32((r29 + 372));
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(9));
    r0 = (r0_rot_9 & -512);
    r4 = (r4 + r0);
    ctx->lr = 0x8007E824u;
    if constexpr (KnownRegArgsCpuCall<0x8009A2DCu>(&func_8009A2DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8009A2DC_754D = func_8009A2DC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8009A2DC_754D);
        r4 = static_cast<uint32_t>(regargs_result_8009A2DC_754D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8009A2DCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    r3 = (r1 + 12);
    ctx->lr = 0x8007E830u;
    if constexpr (KnownRegArgsCpuCall<0x8007E4DCu>(&func_8007E4DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8007E4DC_78D3 = func_8007E4DC_ra68_0_18_0(ctx, r3, r5, r6);
        r3 = static_cast<uint32_t>(regargs_result_8007E4DC_78D3);
        r4 = static_cast<uint32_t>(regargs_result_8007E4DC_78D3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8007E4DCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_8007E830:
{
    r4 = MemoryInline::FlatRead32((r29 + 320));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(2));
    r3 = (r3_rot_0 & -4);
    r4_addr_0 = (r4 + r3);
    r0 = MemoryInline::FlatRead32(r4_addr_0);
    r0 = (r0 & ~r31);
    r4_addr_1 = (r4 + r3);
    MemoryInline::FlatWrite32(r4_addr_1, r0);
    r0 = MemoryInline::FlatRead32((r1 + 132));
    ctx->lr = r0;
    r1 = (r1 + 128);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000FB gpr_write=0x000008FB gpr_return=0x00000018 fpr_read=0x00000001 fpr_write=0x0000003F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8007E4FC func_8007E4FC preserves=true fpr_mask=0x00000000
