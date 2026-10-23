#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80270020(CpuContext* ctx);
extern "C" uint32_t func_80270020_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_80272B14(CpuContext* ctx);
extern "C" uint64_t func_80272B14_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80273218(CpuContext* ctx);
extern "C" uint64_t func_80273218_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8027007C_ra38_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t fctiwzword3 = 0;
    uint32_t fctiwzword4 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;

    goto loc_8027007C;

loc_8027007C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r28 = r3;
    r29 = r4;
    r30 = r5;
    r0 = 1127219200;
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r1 + 8), r0);
    r0 = 1127219200;
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r1 + 16), r0);
    r31 = (r4 & 65535);
    r0 = 0;
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8026FE38u>(ctx);
    r3 = ctx->gpr[3];
}

loc_802700C8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8027039C;
    }
}

loc_802700CC:
{
    r3 = r28;
    r4 = 596;
    ctx->lr = 0x802700D8u;
    if constexpr (KnownRegArgsCpuCall<0x80273218u>(&func_80273218)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80273218_927 = func_80273218_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80273218_927);
        r4 = static_cast<uint32_t>(regargs_result_80273218_927 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80273218u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_802700DC:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_802700EC;
    }
}

loc_802700E0:
{
    r31 = (r31 + 6);
    r0 = 1;
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
}

loc_802700EC:
{
    r3 = r28;
    r4 = 597;
    ctx->lr = 0x802700F8u;
    if constexpr (KnownRegArgsCpuCall<0x80273218u>(&func_80273218)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80273218_D71 = func_80273218_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80273218_D71);
        r4 = static_cast<uint32_t>(regargs_result_80273218_D71 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80273218u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_802700FC:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_8027010C;
    }
}

loc_80270100:
{
    r31 = (r31 + 9);
    r0 = 1;
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
}

loc_8027010C:
{
    r0 = MemoryInline::FlatRead8((r28 + 1096));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r31 = (r31 + r0);
    r0 = MemoryInline::FlatRead8((r28 + 1097));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r31 = (r31 + r0);
    r3 = r28;
    r4 = 74;
    ctx->lr = 0x80270130u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80270134:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80270148;
    }
}

loc_80270138:
{
    r31 = (r31 + 10);
    r0 = 1;
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
    goto loc_8027018C;
}

loc_80270148:
{
    r3 = r28;
    r4 = 75;
    ctx->lr = 0x80270154u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80270158:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8027016C;
    }
}

loc_8027015C:
{
    r31 = (r31 + 15);
    r0 = 1;
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
    goto loc_8027018C;
}

loc_8027016C:
{
    r3 = r28;
    r4 = 76;
    ctx->lr = 0x80270178u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8027017C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8027018C;
    }
}

loc_80270180:
{
    r31 = (r31 + 20);
    r0 = 1;
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
}

loc_8027018C:
{
    r3 = r28;
    r4 = 77;
    ctx->lr = 0x80270198u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8027019C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802701B0;
    }
}

loc_802701A0:
{
    r31 = (r31 + -5);
    r0 = 2;
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
    goto loc_802701F4;
}

loc_802701B0:
{
    r3 = r28;
    r4 = 78;
    ctx->lr = 0x802701BCu;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_802701C0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802701D4;
    }
}

loc_802701C4:
{
    r31 = (r31 + -10);
    r0 = 2;
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
    goto loc_802701F4;
}

loc_802701D4:
{
    r3 = r28;
    r4 = 79;
    ctx->lr = 0x802701E0u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_802701E4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802701F4;
    }
}

loc_802701E8:
{
    r31 = (r31 + -15);
    r0 = 2;
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
}

loc_802701F4:
{
    r0 = MemoryInline::FlatRead16((r28 + 880));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_802701FC:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(10))) {
        goto loc_80270248;
    }
}

loc_80270200:
{
    r3 = r28;
    r4 = 18;
    if constexpr (KnownRegArgsCpuCall<0x80272B14u>(&func_80272B14)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80272B14_1ECE = func_80272B14_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80272B14_1ECE);
        r4 = static_cast<uint32_t>(regargs_result_80272B14_1ECE >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80272B14u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_80270210:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80270248;
    }
}

loc_80270214:
{
    f1.d = MemoryInline::FlatReadFloat64((r2 + -15000));
    r0 = (r31 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14960));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f0.d);
    r31 = fctiwzword0;
    r0 = 1;
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
    goto loc_802702E4;
}

loc_80270248:
{
    r3 = r28;
    if constexpr (KnownRegArgsCpuCall<0x80270020u>(&func_80270020)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_80270020_24C3 = func_80270020_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80270020_24C3;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x80270020u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
}

loc_80270254:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802702E4;
    }
}

loc_80270258:
{
    r3 = r28;
    r4 = 165;
    ctx->lr = 0x80270264u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80270268:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802702A0;
    }
}

loc_8027026C:
{
    f1.d = MemoryInline::FlatReadFloat64((r2 + -15000));
    r0 = (r31 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14956));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f0.d);
    r31 = fctiwzword1;
    r0 = 2;
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
    goto loc_802702E4;
}

loc_802702A0:
{
    r3 = r28;
    r4 = 164;
    ctx->lr = 0x802702ACu;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_802702B0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802702E4;
    }
}

loc_802702B4:
{
    f1.d = MemoryInline::FlatReadFloat64((r2 + -15000));
    r0 = (r31 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14952));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword2 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f0.d);
    r31 = fctiwzword2;
    r0 = 1;
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
}

loc_802702E4:
{
    r3 = r28;
    r4 = 202;
    ctx->lr = 0x802702F0u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_802702F4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80270360;
    }
}

loc_802702F8:
{
    r0 = MemoryInline::FlatRead8((r28 + 1094));
}

loc_80270300:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(2))) {
        goto loc_80270330;
    }
}

loc_80270304:
{
    f1.d = MemoryInline::FlatReadFloat64((r2 + -15000));
    r0 = (r31 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14948));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword3 = PPC_FprLowWordInline(f0.d);
    r31 = fctiwzword3;
    goto loc_80270360;
}

loc_80270330:
{
}

loc_80270334:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(1))) {
        goto loc_80270360;
    }
}

loc_80270338:
{
    f1.d = MemoryInline::FlatReadFloat64((r2 + -15000));
    r0 = (r31 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14944));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword4 = PPC_FprLowWordInline(f0.d);
    r31 = fctiwzword4;
}

loc_80270360:
{
}

loc_80270364:
{
    if ((static_cast<int32_t>(r31) > static_cast<int32_t>(0))) {
        goto loc_8027036C;
    }
}

loc_80270368:
{
    r31 = 1;
}

loc_8027036C:
{
    r0 = MemoryInline::FlatRead8(r30);
}

loc_80270374:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8027039C;
    }
}

loc_80270378:
{
    r3 = (r31 & 65535);
    r0 = (r29 & 65535);
}

loc_80270384:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_80270394;
    }
}

loc_80270388:
{
    r0 = 1;
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
    goto loc_8027039C;
}

loc_80270394:
{
    r0 = 2;
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
}

loc_8027039C:
{
    r3 = (r31 & 65535);
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8027007C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8027007C_ra38_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003F gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8027007C func_8027007C preserves=true fpr_mask=0x00000000
