#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804A0DD8(CpuContext* ctx);
extern "C" uint64_t func_804A0DD8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_804A1248_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x804A1248u);
    goto loc_804A1248;

loc_804A1248:
{
    MemoryInline::FlatWriteRam32((r1 + -176), r1);
    r1 = (r1 + -176);
    r0 = ctx->lr;
}

loc_804A1254:
{
    r6 = 0;
    MemoryInline::FlatWriteRam32((r1 + 180), r0);
    r8 = (r1 + 8);
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_804A13A0;
    }
}

loc_804A1264:
{
}

loc_804A1268:
{
    r7 = (r4 + 65536);
    r7 = (r7 + -8);
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(8))) {
        goto loc_804A1360;
    }
}

loc_804A1274:
{
    r9 = (r7 & 65535);
    r0 = 25;
    r7 = (r9 + 7);
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(29));
    r7 = (r7_rot_1 & 536870911);
    ctr = r7;
}

loc_804A128C:
{
    if ((static_cast<uint32_t>(r9) <= static_cast<uint32_t>(0))) {
        goto loc_804A1360;
    }
}

loc_804A1290:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r8, 0, 24u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, r8, static_cast<uint8_t>(r0));
    r6 = (r6 + 8);
    guest_range_1 = MemoryInline::ResolveRangeHost(r5, 0, 16u, true, false);
    r7 = MemoryInline::ReadResolved16(guest_range_1, 0u, r5);
    r7 = (static_cast<int32_t>(r7) >> 8);
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r8 + 1), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved16(guest_range_1, 0u, r5);
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r8 + 2), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r8 + 3), static_cast<uint8_t>(r0));
    r7 = MemoryInline::ReadResolved16(guest_range_1, 2u, (r5 + 2));
    r7 = (static_cast<int32_t>(r7) >> 8);
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r8 + 4), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved16(guest_range_1, 2u, (r5 + 2));
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r8 + 5), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r8 + 6), static_cast<uint8_t>(r0));
    r7 = MemoryInline::ReadResolved16(guest_range_1, 4u, (r5 + 4));
    r7 = (static_cast<int32_t>(r7) >> 8);
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r8 + 7), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved16(guest_range_1, 4u, (r5 + 4));
    MemoryInline::WriteResolved8(guest_range_0, 8u, (r8 + 8), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 9u, (r8 + 9), static_cast<uint8_t>(r0));
    r7 = MemoryInline::ReadResolved16(guest_range_1, 6u, (r5 + 6));
    r7 = (static_cast<int32_t>(r7) >> 8);
    MemoryInline::WriteResolved8(guest_range_0, 10u, (r8 + 10), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved16(guest_range_1, 6u, (r5 + 6));
    MemoryInline::WriteResolved8(guest_range_0, 11u, (r8 + 11), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 12u, (r8 + 12), static_cast<uint8_t>(r0));
    r7 = MemoryInline::ReadResolved16(guest_range_1, 8u, (r5 + 8));
    r7 = (static_cast<int32_t>(r7) >> 8);
    MemoryInline::WriteResolved8(guest_range_0, 13u, (r8 + 13), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved16(guest_range_1, 8u, (r5 + 8));
    MemoryInline::WriteResolved8(guest_range_0, 14u, (r8 + 14), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 15u, (r8 + 15), static_cast<uint8_t>(r0));
    r7 = MemoryInline::ReadResolved16(guest_range_1, 10u, (r5 + 10));
    r7 = (static_cast<int32_t>(r7) >> 8);
    MemoryInline::WriteResolved8(guest_range_0, 16u, (r8 + 16), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved16(guest_range_1, 10u, (r5 + 10));
    MemoryInline::WriteResolved8(guest_range_0, 17u, (r8 + 17), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 18u, (r8 + 18), static_cast<uint8_t>(r0));
    r7 = MemoryInline::ReadResolved16(guest_range_1, 12u, (r5 + 12));
    r7 = (static_cast<int32_t>(r7) >> 8);
    MemoryInline::WriteResolved8(guest_range_0, 19u, (r8 + 19), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved16(guest_range_1, 12u, (r5 + 12));
    MemoryInline::WriteResolved8(guest_range_0, 20u, (r8 + 20), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 21u, (r8 + 21), static_cast<uint8_t>(r0));
    r7 = MemoryInline::ReadResolved16(guest_range_1, 14u, (r5 + 14));
    r7 = (static_cast<int32_t>(r7) >> 8);
    MemoryInline::WriteResolved8(guest_range_0, 22u, (r8 + 22), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved16(guest_range_1, 14u, (r5 + 14));
    r5 = (r5 + 16);
    MemoryInline::WriteResolved8(guest_range_0, 23u, (r8 + 23), static_cast<uint8_t>(r7));
    r8 = (r8 + 24);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804A1290;
    }
}

loc_804A1360:
{
    r7 = (r6 & 65535);
    r9 = 25;
    r0 = (r4 - r7);
    ctr = r0;
}

loc_804A1374:
{
    if ((static_cast<uint32_t>(r7) >= static_cast<uint32_t>(r4))) {
        goto loc_804A13A0;
    }
}

loc_804A1378:
{
    MemoryInline::FlatWrite8(r8, static_cast<uint8_t>(r9));
    r6 = (r6 + 1);
    r0 = MemoryInline::FlatRead16(r5);
    r0 = (static_cast<int32_t>(r0) >> 8);
    MemoryInline::FlatWrite8((r8 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16(r5);
    r5 = (r5 + 2);
    MemoryInline::FlatWrite8((r8 + 2), static_cast<uint8_t>(r0));
    r8 = (r8 + 3);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804A1378;
    }
}

loc_804A13A0:
{
    r7 = (r1 + 8);
    r4 = 1;
    r6 = (r8 - r7);
    r5 = 6;
    ctx->lr = 0x804A13B4u;
    if constexpr (KnownRegArgsCpuCall<0x804A0DD8u>(&func_804A0DD8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->ctr = ctr;
        const auto regargs_result_804A0DD8_1BD1 = func_804A0DD8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804A0DD8_1BD1);
        r4 = static_cast<uint32_t>(regargs_result_804A0DD8_1BD1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804A0DD8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    r0 = MemoryInline::FlatRead32((r1 + 180));
    ctx->lr = r0;
    r1 = (r1 + 176);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804A1248(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804A1248_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804A1248 func_804A1248 preserves=true fpr_mask=0x00000000
