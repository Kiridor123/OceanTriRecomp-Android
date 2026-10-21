#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8052B410(CpuContext* ctx);
extern "C" uint64_t func_8052B410_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80533B04(CpuContext* ctx);
extern "C" uint64_t func_80533B04_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_8053526C_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
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
    uint32_t r0_rot_8 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x8053526Cu);
    goto loc_8053526C;

loc_8053526C:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x8045747C (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    // end of inlined leaf 0x8045747C
    r12 = MemoryInline::FlatRead32(r4);
    r27 = r3;
    r3 = r4;
    r28 = r5;
    r12 = MemoryInline::FlatRead32((r12 + 16));
    r24 = r6;
    ctr = r12;
    ctx->lr = 0x805352A0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    r12 = MemoryInline::FlatRead32(r3);
    r31 = r3;
    r5 = r24;
    r4 = MemoryInline::FlatRead32((r27 + 4));
    r12 = MemoryInline::FlatRead32((r12 + 16));
    r6 = MemoryInline::FlatRead16((r27 + 18));
    ctr = r12;
    ctx->lr = 0x805352C0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    r5 = MemoryInline::FlatRead16((r27 + 16));
    r30 = 0;
}

loc_805352CC:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(65535))) {
        goto loc_80535344;
    }
}

loc_805352D0:
{
    r0 = MemoryInline::FlatRead16((r31 + 28));
    r25 = MemoryInline::FlatRead32((r31 + 24));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_1 & -16);
    r3 = (r25 + r0);
    r0 = (r3 + 15);
    r0 = (r0 - r25);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(28));
    r0 = (r0_rot_2 & 268435455);
    ctr = r0;
}

loc_805352F4:
{
    if ((static_cast<uint32_t>(r25) >= static_cast<uint32_t>(r3))) {
        goto loc_80535310;
    }
}

loc_805352F8:
{
    r0 = MemoryInline::FlatRead32((r25 + 8));
}

loc_80535300:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80535308;
    }
}

loc_80535304:
{
    goto loc_80535314;
}

loc_80535308:
{
    r25 = (r25 + 16);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_805352F8;
    }
}

loc_80535310:
{
    r25 = 0;
}

loc_80535314:
{
}

loc_80535318:
{
    if ((static_cast<int32_t>(r25) != static_cast<int32_t>(0))) {
        goto loc_80535324;
    }
}

loc_8053531C:
{
    r30 = 0;
    goto loc_80535344;
}

loc_80535324:
{
    MemoryInline::FlatWrite32((r25 + 8), r31);
    r0 = 1;
    r3 = r28;
    r4 = r25;
    MemoryInline::FlatWrite16((r25 + 12), static_cast<uint16_t>(r5));
    MemoryInline::FlatWrite8((r25 + 14), static_cast<uint8_t>(r0));
    ctx->lr = 0x80535340u;
    if constexpr (KnownRegArgsCpuCall<0x8052B410u>(&func_8052B410)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        const auto regargs_result_8052B410_140D = func_8052B410_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8052B410_140D);
        r4 = static_cast<uint32_t>(regargs_result_8052B410_140D >> 32);
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
        InvokeDirectCpu<0x8052B410u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r30 = (r25 + 16);
}

loc_80535344:
{
    r12 = MemoryInline::FlatRead32(r28);
    r3 = r28;
    r12 = MemoryInline::FlatRead32((r12 + 100));
    ctr = r12;
    ctx->lr = 0x80535358u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    r4 = MemoryInline::FlatRead8((r27 + 38));
    r0 = (r3 & 255);
}

loc_80535364:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(r0))) {
        goto loc_8053536C;
    }
}

loc_80535368:
{
    r4 = r3;
}

loc_8053536C:
{
    r26 = (r4 & 255);
    r29 = 0;
    r25 = 1;
    goto loc_80535428;
}

loc_8053537C:
{
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(1));
    r0 = (r0_rot_5 & 510);
    r24 = (r27 + r0);
    r0 = MemoryInline::FlatRead16((r24 + 20));
}

loc_8053538C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_80535424;
    }
}

loc_80535390:
{
    r12 = MemoryInline::FlatRead32(r28);
    r3 = r28;
    r4 = (r29 & 255);
    r12 = MemoryInline::FlatRead32((r12 + 108));
    ctr = r12;
    ctx->lr = 0x805353A8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
}

loc_805353AC:
{
    r5 = MemoryInline::FlatRead16((r24 + 20));
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_805353B8;
    }
}

loc_805353B4:
{
    r30 = MemoryInline::FlatRead32((r31 + 24));
}

loc_805353B8:
{
    r0 = MemoryInline::FlatRead16((r31 + 28));
    r4 = MemoryInline::FlatRead32((r31 + 24));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_6 & -16);
    r4 = (r4 + r0);
    r0 = (r4 + 15);
    r0 = (r0 - r30);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(28));
    r0 = (r0_rot_7 & 268435455);
    ctr = r0;
}

loc_805353DC:
{
    if ((static_cast<uint32_t>(r30) >= static_cast<uint32_t>(r4))) {
        goto loc_805353F8;
    }
}

loc_805353E0:
{
    r0 = MemoryInline::FlatRead32((r30 + 8));
}

loc_805353E8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805353F0;
    }
}

loc_805353EC:
{
    goto loc_805353FC;
}

loc_805353F0:
{
    r30 = (r30 + 16);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_805353E0;
    }
}

loc_805353F8:
{
    r30 = 0;
}

loc_805353FC:
{
}

loc_80535400:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_8053540C;
    }
}

loc_80535404:
{
    r30 = 0;
    goto loc_80535424;
}

loc_8053540C:
{
    MemoryInline::FlatWrite32((r30 + 8), r31);
    r4 = r30;
    MemoryInline::FlatWrite16((r30 + 12), static_cast<uint16_t>(r5));
    MemoryInline::FlatWrite8((r30 + 14), static_cast<uint8_t>(r25));
    ctx->lr = 0x80535420u;
    if constexpr (KnownRegArgsCpuCall<0x80533B04u>(&func_80533B04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        const auto regargs_result_80533B04_24D2 = func_80533B04_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80533B04_24D2);
        r4 = static_cast<uint32_t>(regargs_result_80533B04_24D2 >> 32);
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
        InvokeDirectCpu<0x80533B04u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r30 = (r30 + 16);
}

loc_80535424:
{
    r29 = (r29 + 1);
}

loc_80535428:
{
    r0 = (r29 & 255);
}

loc_80535430:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r26))) {
        goto loc_8053537C;
    }
}

loc_80535434:
{
    r11 = (r1 + 48);
    r3 = r31;
    // inline leaf 0x804574C8 (9 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, true, false);
    // end of inlined leaf 0x804574C8
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8053526C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8053526C_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8053526C func_8053526C preserves=true fpr_mask=0x00000000
