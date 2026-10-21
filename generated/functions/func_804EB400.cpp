#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804E9420(CpuContext* ctx);
extern "C" uint64_t func_804E9420_ra0_0_18_0(CpuContext*);
extern "C" void func_804E9840(CpuContext* ctx);
extern "C" uint64_t func_804E9840_ra608_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804EB100(CpuContext* ctx);
extern "C" uint64_t func_804EB100_ra608_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint32_t func_804EB400_ra608_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r9, uint32_t arg_r10)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r5_mdest_0 = 0;
    uint32_t r5_mrot_0 = 0;
    uint32_t r5_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = arg_r9;
    uint32_t r10 = arg_r10;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x804EB400u);
    goto loc_804EB400;

loc_804EB400:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -112), 0, 120u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -112), r1);
    r1 = (r1 + -112);
    r0 = ctx->lr;
    r3 = 224;
    r5 = 2;
    MemoryInline::WriteResolved32(guest_range_1, 116u, (r1 + 116), r0);
    r0 = 106;
    r4 = (r1 + 32);
    r28 = 1;
    MemoryInline::WriteResolved8(guest_range_1, 32u, (r1 + 32), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 33u, (r1 + 33), static_cast<uint8_t>(r28));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x804E9C20u>(ctx);
    r3 = ctx->gpr[3];
    r3 = 2;
    ctx->lr = 0x804EB444u;
    if constexpr (KnownRegArgsCpuCall<0x804E9840u>(&func_804E9840)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_804E9840_A07 = func_804E9840_ra608_0_18_0(ctx, r3, r9, r10);
        r3 = static_cast<uint32_t>(regargs_result_804E9840_A07);
        r4 = static_cast<uint32_t>(regargs_result_804E9840_A07 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        InvokeDirectCpu<0x804E9840u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
    }
    r0 = 101;
    MemoryInline::FlatWriteRam8((r1 + 28), static_cast<uint8_t>(r0));
    r4 = (r1 + 28);
    r3 = 224;
    MemoryInline::FlatWriteRam8((r1 + 29), static_cast<uint8_t>(r28));
    r5 = 2;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x804E9C20u>(ctx);
    r3 = ctx->gpr[3];
    r3 = 2;
    ctx->lr = 0x804EB468u;
    if constexpr (KnownRegArgsCpuCall<0x804E9840u>(&func_804E9840)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_804E9840_1071 = func_804E9840_ra608_0_18_0(ctx, r3, r9, r10);
        r3 = static_cast<uint32_t>(regargs_result_804E9840_1071);
        r4 = static_cast<uint32_t>(regargs_result_804E9840_1071 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        InvokeDirectCpu<0x804E9840u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
    }
    ctx->lr = 0x804EB46Cu;
    if constexpr (KnownRegArgsCpuCall<0x804E9420u>(&func_804E9420)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_804E9420_1526 = func_804E9420_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_804E9420_1526);
        r4 = static_cast<uint32_t>(regargs_result_804E9420_1526 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804E9420u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r4 = 0x80000000u;
    r0 = MemoryInline::FlatRead32((r4 + 204));
}

loc_804EB478:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_804EB498;
    }
}

loc_804EB47C:
{
}

loc_804EB480:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(5))) {
        goto loc_804EB498;
    }
}

loc_804EB484:
{
}

loc_804EB488:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_804EB4A4;
    }
}

loc_804EB48C:
{
}

loc_804EB490:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804EB4AC;
    }
}

loc_804EB494:
{
    goto loc_804EB4B8;
}

loc_804EB498:
{
    r28 = 2;
    MemoryInline::FlatWrite32((r13 + -14204), r28);
    goto loc_804EB4C0;
}

loc_804EB4A4:
{
    MemoryInline::FlatWrite32((r13 + -14204), r28);
    goto loc_804EB4C0;
}

loc_804EB4AC:
{
    r28 = 0;
    MemoryInline::FlatWrite32((r13 + -14204), r28);
    goto loc_804EB4C0;
}

loc_804EB4B8:
{
    r28 = 0;
    MemoryInline::FlatWrite32((r13 + -14204), r28);
}

loc_804EB4C0:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(5));
    r0 = (r0_rot_0 & 8160);
    r3 = 1;
    r0 = (r0 | r28);
    MemoryInline::FlatWriteRam8((r1 + 24), static_cast<uint8_t>(r3));
    r4 = (r1 + 24);
    r3 = 224;
    MemoryInline::FlatWriteRam8((r1 + 25), static_cast<uint8_t>(r0));
    r5 = 2;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x804E9C20u>(ctx);
    r3 = ctx->gpr[3];
    r3 = 2;
    ctx->lr = 0x804EB4ECu;
    if constexpr (KnownRegArgsCpuCall<0x804E9840u>(&func_804E9840)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_804E9840_1E98 = func_804E9840_ra608_0_18_0(ctx, r3, r9, r10);
        r3 = static_cast<uint32_t>(regargs_result_804E9840_1E98);
        r4 = static_cast<uint32_t>(regargs_result_804E9840_1E98 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        InvokeDirectCpu<0x804E9840u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
    }
    r28 = 0;
    MemoryInline::FlatWriteRam8((r1 + 20), static_cast<uint8_t>(r28));
    r4 = (r1 + 20);
    r3 = 224;
    MemoryInline::FlatWriteRam8((r1 + 21), static_cast<uint8_t>(r28));
    r5 = 2;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x804E9C20u>(ctx);
    r3 = ctx->gpr[3];
    r3 = 2;
    ctx->lr = 0x804EB510u;
    if constexpr (KnownRegArgsCpuCall<0x804E9840u>(&func_804E9840)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_804E9840_2505 = func_804E9840_ra608_0_18_0(ctx, r3, r9, r10);
        r3 = static_cast<uint32_t>(regargs_result_804E9840_2505);
        r4 = static_cast<uint32_t>(regargs_result_804E9840_2505 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        InvokeDirectCpu<0x804E9840u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
    }
    r0 = 142;
    r3 = 113;
    MemoryInline::FlatWriteRam8((r1 + 44), static_cast<uint8_t>(r3));
    r4 = (r1 + 44);
    r3 = 224;
    r5 = 3;
    MemoryInline::FlatWriteRam8((r1 + 45), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 46), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x804E9C20u>(ctx);
    r3 = ctx->gpr[3];
    r3 = 2;
    ctx->lr = 0x804EB53Cu;
    if constexpr (KnownRegArgsCpuCall<0x804E9840u>(&func_804E9840)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_804E9840_2BC5 = func_804E9840_ra608_0_18_0(ctx, r3, r9, r10);
        r3 = static_cast<uint32_t>(regargs_result_804E9840_2BC5);
        r4 = static_cast<uint32_t>(regargs_result_804E9840_2BC5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        InvokeDirectCpu<0x804E9840u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
    }
    r3 = 2;
    r0 = 7;
    MemoryInline::FlatWriteRam8((r1 + 16), static_cast<uint8_t>(r3));
    r4 = (r1 + 16);
    r3 = 224;
    r5 = 2;
    MemoryInline::FlatWriteRam8((r1 + 17), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x804E9C20u>(ctx);
    r3 = ctx->gpr[3];
    r3 = 2;
    ctx->lr = 0x804EB564u;
    if constexpr (KnownRegArgsCpuCall<0x804E9840u>(&func_804E9840)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_804E9840_323B = func_804E9840_ra608_0_18_0(ctx, r3, r9, r10);
        r3 = static_cast<uint32_t>(regargs_result_804E9840_323B);
        r4 = static_cast<uint32_t>(regargs_result_804E9840_323B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        InvokeDirectCpu<0x804E9840u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
    }
    r0 = 5;
    MemoryInline::FlatWrite8((r13 + -19596), static_cast<uint8_t>(r28));
    r4 = (r1 + 40);
    r3 = 224;
    MemoryInline::FlatWrite8((r13 + -19595), static_cast<uint8_t>(r28));
    r5 = 3;
    MemoryInline::FlatWrite8((r13 + -19594), static_cast<uint8_t>(r28));
    MemoryInline::FlatWriteRam8((r1 + 40), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 41), static_cast<uint8_t>(r28));
    MemoryInline::FlatWriteRam8((r1 + 42), static_cast<uint8_t>(r28));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x804E9C20u>(ctx);
    r3 = ctx->gpr[3];
    r3 = 2;
    ctx->lr = 0x804EB598u;
    if constexpr (KnownRegArgsCpuCall<0x804E9840u>(&func_804E9840)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_804E9840_39C8 = func_804E9840_ra608_0_18_0(ctx, r3, r9, r10);
        r3 = static_cast<uint32_t>(regargs_result_804E9840_39C8);
        r4 = static_cast<uint32_t>(regargs_result_804E9840_39C8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        InvokeDirectCpu<0x804E9840u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
    }
    r0 = MemoryInline::FlatRead8((r13 + -19593));
}

loc_804EB5A0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804EB5C8;
    }
}

loc_804EB5A4:
{
    r0 = MemoryInline::FlatRead8((r13 + -19592));
}

loc_804EB5AC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804EB5C8;
    }
}

loc_804EB5B0:
{
    r0 = MemoryInline::FlatRead8((r13 + -19591));
}

loc_804EB5B8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804EB5C8;
    }
}

loc_804EB5BC:
{
    r0 = MemoryInline::FlatRead8((r13 + -19590));
}

loc_804EB5C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804EB5E8;
    }
}

loc_804EB5C8:
{
    r0 = MemoryInline::FlatRead32((r13 + -14224));
    r3 = 0;
    MemoryInline::FlatWrite8((r13 + -19593), static_cast<uint8_t>(r3));
    r0 = (r0 | 2);
    MemoryInline::FlatWrite8((r13 + -19592), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r13 + -19591), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r13 + -19590), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite32((r13 + -14224), r0);
}

loc_804EB5E8:
{
    r3 = MemoryInline::FlatRead8((r13 + -19593));
    r7 = 8;
    r0 = MemoryInline::FlatRead8((r13 + -19591));
    r4 = (r1 + 36);
    r5 = (r3 & 15);
    r6 = MemoryInline::FlatRead8((r13 + -19592));
    r3 = MemoryInline::FlatRead8((r13 + -19590));
    r0 = (r0 & 7);
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(4));
    r5_mrot_0 = (r5_rot_0 & 240);
    r5_mdest_0 = (r5 & -241);
    r5 = (r5_mdest_0 | r5_mrot_0);
    MemoryInline::FlatWriteRam8((r1 + 37), static_cast<uint8_t>(r5));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r0_mrot_0 = (r0_rot_1 & 56);
    r0_mdest_0 = (r0 & -57);
    r0 = (r0_mdest_0 | r0_mrot_0);
    r3 = 224;
    MemoryInline::FlatWriteRam8((r1 + 36), static_cast<uint8_t>(r7));
    r5 = 3;
    MemoryInline::FlatWriteRam8((r1 + 38), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x804E9C20u>(ctx);
    r3 = ctx->gpr[3];
    r3 = 2;
    ctx->lr = 0x804EB630u;
    if constexpr (KnownRegArgsCpuCall<0x804E9840u>(&func_804E9840)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_804E9840_4775 = func_804E9840_ra608_0_18_0(ctx, r3, r9, r10);
        r3 = static_cast<uint32_t>(regargs_result_804E9840_4775);
        r4 = static_cast<uint32_t>(regargs_result_804E9840_4775 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        InvokeDirectCpu<0x804E9840u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
    }
    r0 = MemoryInline::FlatRead8((r13 + -19589));
}

loc_804EB638:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804EB660;
    }
}

loc_804EB63C:
{
    r0 = MemoryInline::FlatRead8((r13 + -19588));
}

loc_804EB644:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804EB660;
    }
}

loc_804EB648:
{
    r0 = MemoryInline::FlatRead8((r13 + -19587));
}

loc_804EB650:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804EB660;
    }
}

loc_804EB654:
{
    r0 = MemoryInline::FlatRead8((r13 + -19586));
}

loc_804EB65C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804EB680;
    }
}

loc_804EB660:
{
    r0 = MemoryInline::FlatRead32((r13 + -14224));
    r3 = 0;
    MemoryInline::FlatWrite8((r13 + -19589), static_cast<uint8_t>(r3));
    r0 = (r0 | 4);
    MemoryInline::FlatWrite8((r13 + -19588), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r13 + -19587), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r13 + -19586), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite32((r13 + -14224), r0);
}

loc_804EB680:
{
    r0 = MemoryInline::FlatRead8((r13 + -19589));
    r9 = 122;
    r5 = MemoryInline::FlatRead8((r13 + -19588));
    r4 = (r1 + 48);
    r8 = (r0 & 127);
    r3 = MemoryInline::FlatRead8((r13 + -19587));
    r0 = MemoryInline::FlatRead8((r13 + -19586));
    r7 = (r5 & 127);
    r6 = (r3 & 127);
    MemoryInline::FlatWriteRam8((r1 + 48), static_cast<uint8_t>(r9));
    r0 = (r0 & 127);
    r3 = 224;
    MemoryInline::FlatWriteRam8((r1 + 49), static_cast<uint8_t>(r8));
    r5 = 5;
    MemoryInline::FlatWriteRam8((r1 + 50), static_cast<uint8_t>(r7));
    MemoryInline::FlatWriteRam8((r1 + 51), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r1 + 52), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x804E9C20u>(ctx);
    r3 = ctx->gpr[3];
    r3 = 2;
    ctx->lr = 0x804EB6D0u;
    if constexpr (KnownRegArgsCpuCall<0x804E9840u>(&func_804E9840)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_804E9840_546F = func_804E9840_ra608_0_18_0(ctx, r3, r9, r10);
        r3 = static_cast<uint32_t>(regargs_result_804E9840_546F);
        r4 = static_cast<uint32_t>(regargs_result_804E9840_546F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        InvokeDirectCpu<0x804E9840u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
    }
    r29 = 0x80760000u;
    r29 = (r29 + -10432);
    guest_range_0 = MemoryInline::ResolveRangeHost(r29, 0, 26u, true, false);
    r30 = MemoryInline::ReadResolved8(guest_range_0, 0u, r29);
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 56), 0, 27u, false, true);
    MemoryInline::WriteResolved8(guest_range_2, 1u, (r1 + 57), static_cast<uint8_t>(r30));
    r28 = 64;
    r31 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r29 + 1));
    r4 = (r1 + 56);
    r12 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r29 + 2));
    r3 = 224;
    r11 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r29 + 3));
    r5 = 27;
    r10 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r29 + 4));
    r9 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r29 + 5));
    r8 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r29 + 6));
    r7 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r29 + 7));
    r30 = MemoryInline::ReadResolved8(guest_range_0, 8u, (r29 + 8));
    MemoryInline::WriteResolved8(guest_range_2, 2u, (r1 + 58), static_cast<uint8_t>(r31));
    r31 = MemoryInline::ReadResolved8(guest_range_0, 9u, (r29 + 9));
    MemoryInline::WriteResolved8(guest_range_2, 3u, (r1 + 59), static_cast<uint8_t>(r12));
    r12 = MemoryInline::ReadResolved8(guest_range_0, 10u, (r29 + 10));
    MemoryInline::WriteResolved8(guest_range_2, 4u, (r1 + 60), static_cast<uint8_t>(r11));
    r11 = MemoryInline::ReadResolved8(guest_range_0, 11u, (r29 + 11));
    MemoryInline::WriteResolved8(guest_range_2, 5u, (r1 + 61), static_cast<uint8_t>(r10));
    r10 = MemoryInline::ReadResolved8(guest_range_0, 12u, (r29 + 12));
    MemoryInline::WriteResolved8(guest_range_2, 6u, (r1 + 62), static_cast<uint8_t>(r9));
    r9 = MemoryInline::ReadResolved8(guest_range_0, 13u, (r29 + 13));
    MemoryInline::WriteResolved8(guest_range_2, 7u, (r1 + 63), static_cast<uint8_t>(r8));
    r8 = MemoryInline::ReadResolved8(guest_range_0, 14u, (r29 + 14));
    MemoryInline::WriteResolved8(guest_range_2, 8u, (r1 + 64), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_0, 15u, (r29 + 15));
    MemoryInline::WriteResolved8(guest_range_2, 9u, (r1 + 65), static_cast<uint8_t>(r30));
    r30 = MemoryInline::ReadResolved8(guest_range_0, 16u, (r29 + 16));
    MemoryInline::WriteResolved8(guest_range_2, 10u, (r1 + 66), static_cast<uint8_t>(r31));
    r31 = MemoryInline::ReadResolved8(guest_range_0, 17u, (r29 + 17));
    MemoryInline::WriteResolved8(guest_range_2, 11u, (r1 + 67), static_cast<uint8_t>(r12));
    r12 = MemoryInline::ReadResolved8(guest_range_0, 18u, (r29 + 18));
    MemoryInline::WriteResolved8(guest_range_2, 12u, (r1 + 68), static_cast<uint8_t>(r11));
    r11 = MemoryInline::ReadResolved8(guest_range_0, 19u, (r29 + 19));
    MemoryInline::WriteResolved8(guest_range_2, 13u, (r1 + 69), static_cast<uint8_t>(r10));
    r10 = MemoryInline::ReadResolved8(guest_range_0, 20u, (r29 + 20));
    MemoryInline::WriteResolved8(guest_range_2, 14u, (r1 + 70), static_cast<uint8_t>(r9));
    r9 = MemoryInline::ReadResolved8(guest_range_0, 21u, (r29 + 21));
    MemoryInline::WriteResolved8(guest_range_2, 15u, (r1 + 71), static_cast<uint8_t>(r8));
    r8 = MemoryInline::ReadResolved8(guest_range_0, 22u, (r29 + 22));
    MemoryInline::WriteResolved8(guest_range_2, 16u, (r1 + 72), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_0, 23u, (r29 + 23));
    r6 = MemoryInline::ReadResolved8(guest_range_0, 24u, (r29 + 24));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 25u, (r29 + 25));
    MemoryInline::WriteResolved8(guest_range_2, 0u, (r1 + 56), static_cast<uint8_t>(r28));
    MemoryInline::WriteResolved8(guest_range_2, 17u, (r1 + 73), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_2, 18u, (r1 + 74), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_2, 19u, (r1 + 75), static_cast<uint8_t>(r12));
    MemoryInline::WriteResolved8(guest_range_2, 20u, (r1 + 76), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_2, 21u, (r1 + 77), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_2, 22u, (r1 + 78), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_2, 23u, (r1 + 79), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_2, 24u, (r1 + 80), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_2, 25u, (r1 + 81), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_2, 26u, (r1 + 82), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x804E9C20u>(ctx);
    r3 = ctx->gpr[3];
    r3 = 2;
    ctx->lr = 0x804EB7C4u;
    if constexpr (KnownRegArgsCpuCall<0x804E9840u>(&func_804E9840)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_804E9840_6BD3 = func_804E9840_ra608_0_18_0(ctx, r3, r9, r10);
        r3 = static_cast<uint32_t>(regargs_result_804E9840_6BD3);
        r4 = static_cast<uint32_t>(regargs_result_804E9840_6BD3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        InvokeDirectCpu<0x804E9840u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
    }
    r0 = MemoryInline::FlatRead32((r13 + -14216));
}

loc_804EB7CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804EB7E4;
    }
}

loc_804EB7D0:
{
    r0 = MemoryInline::FlatRead32((r13 + -14224));
    r3 = 0;
    MemoryInline::FlatWrite32((r13 + -14216), r3);
    r0 = (r0 | 64);
    MemoryInline::FlatWrite32((r13 + -14224), r0);
}

loc_804EB7E4:
{
    r0 = MemoryInline::FlatRead32((r13 + -14204));
}

loc_804EB7EC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(3))) {
        goto loc_804EB824;
    }
}

loc_804EB7F0:
{
    r0 = MemoryInline::FlatRead32((r13 + -14216));
    r3 = 10;
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r3));
    r4 = (r1 + 12);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    r3 = 224;
    r0 = (r0 | 1);
    MemoryInline::FlatWriteRam8((r1 + 13), static_cast<uint8_t>(r0));
    r5 = 2;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x804E9C20u>(ctx);
    r3 = ctx->gpr[3];
    r3 = 2;
    ctx->lr = 0x804EB820u;
    if constexpr (KnownRegArgsCpuCall<0x804E9840u>(&func_804E9840)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_804E9840_7535 = func_804E9840_ra608_0_18_0(ctx, r3, r9, r10);
        r3 = static_cast<uint32_t>(regargs_result_804E9840_7535);
        r4 = static_cast<uint32_t>(regargs_result_804E9840_7535 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        InvokeDirectCpu<0x804E9840u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
    }
    goto loc_804EB84C;
}

loc_804EB824:
{
    r3 = 10;
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r3));
    r4 = (r1 + 12);
    r3 = 224;
    r5 = 2;
    MemoryInline::FlatWriteRam8((r1 + 13), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x804E9C20u>(ctx);
    r3 = ctx->gpr[3];
    r3 = 2;
    ctx->lr = 0x804EB84Cu;
    if constexpr (KnownRegArgsCpuCall<0x804E9840u>(&func_804E9840)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_804E9840_7BD6 = func_804E9840_ra608_0_18_0(ctx, r3, r9, r10);
        r3 = static_cast<uint32_t>(regargs_result_804E9840_7BD6);
        r4 = static_cast<uint32_t>(regargs_result_804E9840_7BD6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        InvokeDirectCpu<0x804E9840u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
    }
}

loc_804EB84C:
{
    r3 = 3;
    r0 = 1;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r3));
    r4 = (r1 + 8);
    r3 = 224;
    r5 = 2;
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x804E9C20u>(ctx);
    r3 = ctx->gpr[3];
    r3 = 2;
    ctx->lr = 0x804EB874u;
    if constexpr (KnownRegArgsCpuCall<0x804E9840u>(&func_804E9840)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_804E9840_825C = func_804E9840_ra608_0_18_0(ctx, r3, r9, r10);
        r3 = static_cast<uint32_t>(regargs_result_804E9840_825C);
        r4 = static_cast<uint32_t>(regargs_result_804E9840_825C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        InvokeDirectCpu<0x804E9840u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
    }
    r3 = 0x80630000u;
    r3 = (r3 + -15904);
    r3 = (r3 + 340);
    ctx->lr = 0x804EB884u;
    if constexpr (KnownRegArgsCpuCall<0x804EB100u>(&func_804EB100)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_804EB100_87A2 = func_804EB100_ra608_0_18_0(ctx, r3, r9, r10);
        r3 = static_cast<uint32_t>(regargs_result_804EB100_87A2);
        r4 = static_cast<uint32_t>(regargs_result_804EB100_87A2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        InvokeDirectCpu<0x804EB100u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
    }
    r0 = 0;
    MemoryInline::FlatWrite32((r13 + -14220), r0);
    r0 = MemoryInline::FlatRead32((r1 + 116));
    ctx->lr = r0;
    r1 = (r1 + 112);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    return r3;
}

}

extern "C" void func_804EB400(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_804EB400_ra608_0_8_0(ctx, ctx->gpr[3], ctx->gpr[9], ctx->gpr[10]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000260B gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804EB400 func_804EB400 preserves=true fpr_mask=0x00000000
