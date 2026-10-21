#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80050D7C(CpuContext* ctx);
extern "C" uint64_t func_80050D7C_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);

extern "C" uint64_t func_80137F44_ra38_1f8_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
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
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;

    MKW_GUEST_ENTER(0x80137F44u);
    goto loc_80137F44;

loc_80137F44:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -80), 0, 88u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 84u, (r1 + 84), r0);
    r11 = (r1 + 80);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r0 = MemoryInline::FlatRead32((r3 + 536));
}

loc_80137F60:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80137F6C;
    }
}

loc_80137F64:
{
    r3 = -1;
    goto loc_80138070;
}

loc_80137F6C:
{
    r31 = 0;
    r26 = 0;
    r29 = r3;
    r28 = (r3 + 588);
    r27 = (r1 + 16);
    r30 = (r4 & 255);
}

loc_80137F84:
{
    r4 = MemoryInline::FlatRead16((r29 + 580));
}

loc_80137F8C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80137FE8;
    }
}

loc_80137F90:
{
}

loc_80137F94:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(1))) {
        goto loc_80137FA8;
    }
}

loc_80137F98:
{
    r3 = MemoryInline::FlatRead32((r29 + 584));
    r0 = (r3 + -24576);
}

loc_80137FA4:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(16384))) {
        goto loc_80137FD4;
    }
}

loc_80137FA8:
{
    r0 = (r4 & 2048);
}

loc_80137FB0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80137FD4;
    }
}

loc_80137FB4:
{
    r3 = r28;
    r4 = (r1 + 12);
    r5 = (r1 + 8);
    ctx->lr = 0x80137FC4u;
    if constexpr (KnownRegArgsCpuCall<0x80050D7Cu>(&func_80050D7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        const auto regargs_result_80050D7C_BF4 = func_80050D7C_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80050D7C_BF4);
        r4 = static_cast<uint32_t>(regargs_result_80050D7C_BF4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
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
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80050D7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r0 = MemoryInline::FlatRead32((r1 + 8));
    MemoryInline::FlatWrite32(r27, r0);
    r27 = (r27 + 4);
    r31 = (r31 + 1);
}

loc_80137FD4:
{
    r29 = (r29 + 20);
    r28 = (r28 + 20);
    r26 = (r26 + 1);
}

loc_80137FE4:
{
    if ((static_cast<int32_t>(r26) < static_cast<int32_t>(10))) {
        goto loc_80137F84;
    }
}

loc_80137FE8:
{
}

loc_80137FEC:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_80137FFC;
    }
}

loc_80137FF0:
{
}

loc_80137FF4:
{
    if ((static_cast<uint32_t>(r31) == static_cast<uint32_t>(1))) {
        goto loc_80138004;
    }
}

loc_80137FF8:
{
    goto loc_8013800C;
}

loc_80137FFC:
{
    r3 = -1;
    goto loc_80138070;
}

loc_80138004:
{
    r7 = MemoryInline::FlatRead32((r1 + 16));
    goto loc_8013806C;
}

loc_8013800C:
{
    r7 = MemoryInline::FlatRead32((r1 + 16));
    r6 = 1;
    r5 = (r1 + 20);
    r3 = 65536;
    r4 = (r3 + -32768);
    goto loc_80138060;
}

loc_80138024:
{
    r0 = MemoryInline::FlatRead32(r5);
    r8 = (r0 - r7);
}

loc_80138030:
{
    if ((static_cast<int32_t>(r8) <= static_cast<int32_t>(r4))) {
        goto loc_8013803C;
    }
}

loc_80138034:
{
    r8 = (r8 + -65536);
    goto loc_80138048;
}

loc_8013803C:
{
}

loc_80138040:
{
    if ((static_cast<int32_t>(r8) >= static_cast<int32_t>(-32768))) {
        goto loc_80138048;
    }
}

loc_80138044:
{
    r8 = (r8 + 65536);
}

loc_80138048:
{
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    r0 = (r3 + 1);
    r0 = PPC_Divw(static_cast<int32_t>(r8), static_cast<int32_t>(r0));
    r7 = (r7 + r0);
    r5 = (r5 + 4);
    r6 = (r6 + 1);
}

loc_80138060:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
}

loc_80138068:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r31))) {
        goto loc_80138024;
    }
}

loc_8013806C:
{
    r3 = (r7 & 65535);
}

loc_80138070:
{
    r11 = (r1 + 80);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80137F44(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80137F44_ra38_1f8_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FF9 fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80137F44 func_80137F44 preserves=true fpr_mask=0x00000000
