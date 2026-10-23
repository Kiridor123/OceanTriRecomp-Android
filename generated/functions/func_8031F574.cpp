#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800AB6BC(CpuContext* ctx);
extern "C" uint64_t func_800AB6BC_ra18_1a_18_0(CpuContext*, uint32_t, uint32_t, double, double, double);

extern "C" uint64_t func_8031F574_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_lfsx_801FE734_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t stackword6 = 0;
    uint32_t stackword7 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;

    goto loc_8031F574;

loc_8031F574:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r30 = r3;
    r3 = (r1 + 8);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r31 = MemoryInline::FlatRead32((r30 + 56));
    r28 = MemoryInline::FlatRead32((r30 + 48));
    r29 = MemoryInline::FlatRead32(r28);
    // inline leaf 0x800CF26C (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 36));
    // end of inlined leaf 0x800CF26C
    r0 = (r3 & 255);
}

loc_8031F5B4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_8031F5D0;
    }
}

loc_8031F5B8:
{
    r3 = MemoryInline::FlatRead8((r30 + 5));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r30 + 5), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 1), static_cast<uint8_t>(r0));
    goto loc_8031F7AC;
}

loc_8031F5D0:
{
    r0 = MemoryInline::FlatRead8((r29 + 1));
    MemoryInline::FlatWrite8((r30 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r29 + 22));
    MemoryInline::FlatWrite8((r30 + 68), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r28 + 341));
}

loc_8031F5E8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8031F7AC;
    }
}

loc_8031F5EC:
{
    r0 = MemoryInline::FlatRead16((r28 + 332));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8031F5F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-1))) {
        goto loc_8031F7AC;
    }
}

loc_8031F5F8:
{
}

loc_8031F5FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-2))) {
        goto loc_8031F608;
    }
}

loc_8031F600:
{
    goto loc_8031F63C;
}

loc_8031F608:
{
    r0 = MemoryInline::FlatRead8(r29);
}

loc_8031F610:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8031F7AC;
    }
}

loc_8031F614:
{
    r3 = MemoryInline::FlatRead32((r29 + 316));
    r3 = (r3 + 4);
    r4 = 13;
    r5 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800E0AF8u>(ctx);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -11204));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    goto loc_8031F6D8;
}

loc_8031F63C:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_1 & -16);
    r3 = (r28 + r0);
    r4 = MemoryInline::FlatRead32((r3 + 12));
}

loc_8031F64C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8031F67C;
    }
}

loc_8031F650:
{
    r0 = MemoryInline::FlatRead8(r4);
}

loc_8031F658:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8031F7AC;
    }
}

loc_8031F65C:
{
    r3 = (r1 + 8);
    r4 = (r4 + 60);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -11200));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    goto loc_8031F6D8;
}

loc_8031F67C:
{
    r4 = MemoryInline::FlatRead32((r3 + 16));
}

loc_8031F684:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8031F7AC;
    }
}

loc_8031F688:
{
    r0 = MemoryInline::FlatRead8(r4);
}

loc_8031F690:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8031F7AC;
    }
}

loc_8031F694:
{
    r3 = (r1 + 8);
    r4 = (r4 + 16);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r0 = MemoryInline::FlatRead16((r28 + 332));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_2 & -16);
    r3 = (r28 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r3 = MemoryInline::FlatRead32((r3 + 80));
    r3 = MemoryInline::FlatRead16((r3 + 2));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    // inline leaf 0x801FE728 (5 guest instruction(s))
    r4 = MemoryInline::FlatRead32((r13 + -17212));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    addr_lfsx_801FE734_loc_0 = (r4 + r0);
    f1.d = MemoryInline::FlatReadFloat32(addr_lfsx_801FE734_loc_0);
    // end of inlined leaf 0x801FE728
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -11204));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
}

loc_8031F6D8:
{
    r0 = MemoryInline::FlatRead16((r31 + 8));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_5 & -2);
    r0 = (r0 & 65535);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -11184));
    r0 = (r0 ^ -2147483648);
    stackword6 = r0;
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    r0 = 1127219200;
    stackword7 = r0;
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword7), static_cast<uint32_t>(stackword6));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -11196));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -11192));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    if constexpr (KnownRegArgsCpuCall<0x800AB6BCu>(&func_800AB6BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_800AB6BC_1EFC = func_800AB6BC_ra18_1a_18_0(ctx, r3, r4, f1.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_800AB6BC_1EFC);
        r4 = static_cast<uint32_t>(regargs_result_800AB6BC_1EFC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x800AB6BCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    f0.d = MemoryInline::FlatReadFloat32((r2 + -11208));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    r3 = MemoryInline::FlatRead16((r31 + 8));
    r3 = MH3_TickLoad(r3, 2150758184);
    r0 = (r3 + 512);
    MemoryInline::FlatWrite16((r31 + 8), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r30 + 40));
    r3 = MH3_TickLoad(r3, 2150758196);
    r0 = (r3 + 255);
    MemoryInline::FlatWrite32((r30 + 40), r0);
    r28 = 0;
    r29 = r31;
    goto loc_8031F78C;
}

loc_8031F74C:
{
    r3 = (r30 + 24);
    r4 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r4 = r3;
    r3 = MemoryInline::FlatRead32((r29 + 4));
    r3 = (r3 + 4);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = MemoryInline::FlatRead32((r29 + 4));
    r3 = (r3 + 40);
    r4 = (r30 + 36);
    // inline leaf 0x800FC138 (7 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWrite32(r3, r0);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite32((r3 + 4), r0);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWrite32((r3 + 8), r0);
    // end of inlined leaf 0x800FC138
    r3 = MemoryInline::FlatRead32((r29 + 4));
    r4 = 0;
    ctx->lr = 0x8031F784u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x800E078Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    r29 = (r29 + 4);
    r28 = (r28 + 1);
}

loc_8031F78C:
{
    r6 = MemoryInline::FlatRead32(r31);
}

loc_8031F794:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(r6))) {
        goto loc_8031F74C;
    }
}

loc_8031F798:
{
    r3 = r30;
    r4 = (r31 + 4);
    r5 = 2;
    r7 = 0;
    ctx->lr = 0x8031F7ACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x800F943Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
}

loc_8031F7AC:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8031F574(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8031F574_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8031F574 func_8031F574 preserves=true fpr_mask=0x00000000
