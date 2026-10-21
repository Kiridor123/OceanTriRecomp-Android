#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804780F0(CpuContext* ctx);
extern "C" uint64_t func_804780F0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80479520(CpuContext* ctx);
extern "C" uint64_t func_80479520_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804795E0(CpuContext* ctx);
extern "C" uint64_t func_804795E0_ra0_0_18_0(CpuContext*);
extern "C" void func_80479610(CpuContext* ctx);
extern "C" uint64_t func_80479610_ra0_0_18_0(CpuContext*);

extern "C" uint64_t func_804782B0_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x804782B0u);
    goto loc_804782B0;

loc_804782B0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r7 = 0x80710000u;
    r6 = 0x80610000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
}

loc_804782C8:
{
    r7 = (r7 + -3456);
    r6 = (r6 + 13784);
    r31 = r5;
    r30 = (r7 + 84);
    r29 = r4;
    r28 = r3;
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(8))) {
        goto loc_80478310;
    }
}

loc_804782F4:
{
}

loc_804782F8:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(4))) {
        goto loc_80478310;
    }
}

loc_804782FC:
{
    r0 = (r30 + 196608);
    r3 = (r0 + r3);
    r0 = MemoryInline::FlatRead8((r3 + -30804));
}

loc_8047830C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80478330;
    }
}

loc_80478310:
{
    r3 = 65536;
    r4 = (r6 + 104);
    r0 = (r3 + -5);
    r3 = (r0 & 65535);
    // inline leaf 0x80479660 (1 guest instruction(s))
    // end of inlined leaf 0x80479660
    r3 = r31;
    ctx->lr = 0x8047832Cu;
    if constexpr (KnownRegArgsCpuCall<0x804780F0u>(&func_804780F0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_804780F0_A47 = func_804780F0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804780F0_A47);
        r4 = static_cast<uint32_t>(regargs_result_804780F0_A47 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804780F0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_8047844C;
}

loc_80478330:
{
    r31 = (r5 + -8);
    r0 = (r31 & 1);
}

loc_80478338:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80478344;
    }
}

loc_8047833C:
{
    r0 = 0;
    goto loc_80478368;
}

loc_80478344:
{
    r0 = MemoryInline::FlatRead8((r31 + 4));
}

loc_8047834C:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(9))) {
        goto loc_80478364;
    }
}

loc_80478350:
{
    r3 = (r7 + 196608);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_1 & 4080);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead16((r3 + -30232));
    goto loc_80478368;
}

loc_80478364:
{
    r0 = 0;
}

loc_80478368:
{
    r4 = (r5 + r0);
    r0 = (r4 & 1);
}

loc_80478370:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8047837C;
    }
}

loc_80478374:
{
    r0 = 1;
    goto loc_80478398;
}

loc_8047837C:
{
    r3 = -574947328;
    r4 = MemoryInline::FlatRead32(r4);
    r0 = (r3 + -8774);
    r3 = (r0 - r4);
    r0 = (r4 - r0);
    r0 = (r3 | r0);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & 1);
}

loc_80478398:
{
    r0 = (r0 & 255);
}

loc_8047839C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804783B8;
    }
}

loc_804783A0:
{
    r3 = 65536;
    r4 = (r6 + 128);
    r0 = (r3 + -1);
    r3 = (r0 & 65535);
    // inline leaf 0x80479660 (1 guest instruction(s))
    // end of inlined leaf 0x80479660
    goto loc_8047844C;
}

loc_804783B8:
{
    r0 = MemoryInline::FlatRead8((r31 + 6));
}

loc_804783C0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_804783DC;
    }
}

loc_804783C4:
{
    r3 = 65536;
    r4 = (r6 + 152);
    r0 = (r3 + -6);
    r3 = (r0 & 65535);
    // inline leaf 0x80479660 (1 guest instruction(s))
    // end of inlined leaf 0x80479660
    goto loc_8047844C;
}

loc_804783DC:
{
    ctx->lr = 0x804783E0u;
    if constexpr (KnownRegArgsCpuCall<0x80479610u>(&func_80479610)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_80479610_1542 = func_80479610_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_80479610_1542);
        r4 = static_cast<uint32_t>(regargs_result_80479610_1542 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80479610u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(4));
    r4 = (r4_rot_1 & 4080);
    r0 = (r30 + 196608);
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r5 = (r5_rot_1 & 1020);
    r0 = (r0 + r4);
    r3 = (r0 + r5);
    r0 = MemoryInline::FlatRead32((r3 + -30580));
}

loc_804783FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8047840C;
    }
}

loc_80478400:
{
    r3 = MemoryInline::FlatRead32((r3 + -30452));
    MemoryInline::FlatWrite32(r3, r31);
    goto loc_80478410;
}

loc_8047840C:
{
    MemoryInline::FlatWrite32((r3 + -30580), r31);
}

loc_80478410:
{
    r0 = (r30 + 196608);
    r3 = 0;
    r4 = (r0 + r4);
    r4 = (r4 + r5);
    r0 = 2;
    MemoryInline::FlatWrite32((r4 + -30452), r31);
    MemoryInline::FlatWrite32(r31, r3);
    MemoryInline::FlatWrite8((r31 + 6), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r31 + 5), static_cast<uint8_t>(r28));
    if constexpr (KnownRegArgsCpuCall<0x804795E0u>(&func_804795E0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_804795E0_1C25 = func_804795E0_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_804795E0_1C25);
        r4 = static_cast<uint32_t>(regargs_result_804795E0_1C25 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804795E0u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = 1;
    r3 = r28;
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r29));
    r4 = (r0 & 65535);
    ctx->lr = 0x8047844Cu;
    if constexpr (KnownRegArgsCpuCall<0x80479520u>(&func_80479520)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_80479520_1F9F = func_80479520_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80479520_1F9F);
        r4 = static_cast<uint32_t>(regargs_result_80479520_1F9F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x80479520u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
}

loc_8047844C:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804782B0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804782B0_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000000FB gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804782B0 func_804782B0 preserves=true fpr_mask=0x00000000
