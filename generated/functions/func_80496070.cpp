#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8047AC70(CpuContext* ctx);
extern "C" uint64_t func_8047AC70_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_80496070_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_ca_0 = 0;
    uint32_t r3_ca_1 = 0;
    uint32_t r3_ca_2 = 0;
    uint32_t r3_ca_3 = 0;
    uint32_t r3_ca_4 = 0;
    uint32_t r3_not_0 = 0;
    uint32_t r3_not_1 = 0;
    uint32_t r3_not_2 = 0;
    uint32_t r3_not_3 = 0;
    uint32_t r3_not_4 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    uint32_t xer = ctx->xer;

    goto loc_80496070;

loc_80496070:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457478 (10 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, false, true);
    // end of inlined leaf 0x80457478
    r3 = 0x80740000u;
    r26 = 0;
    r3 = (r3 + -5120);
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 8), 0, 1970u, true, false);
    r4 = MemoryInline::ReadResolved16(guest_range_1, 1968u, (r3 + 1976));
}

loc_80496098:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_804961F0;
    }
}

loc_8049609C:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 0u, (r3 + 8));
}

loc_804960A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804960B8;
    }
}

loc_804960A8:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 90u, (r3 + 98));
}

loc_804960B0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_804960B8;
    }
}

loc_804960B4:
{
    r26 = 1;
}

loc_804960B8:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 92u, (r3 + 100));
}

loc_804960C0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804960D4;
    }
}

loc_804960C4:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 182u, (r3 + 190));
}

loc_804960CC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_804960D4;
    }
}

loc_804960D0:
{
    r26 = (r26 + 1);
}

loc_804960D4:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 184u, (r3 + 192));
}

loc_804960DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804960F0;
    }
}

loc_804960E0:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 274u, (r3 + 282));
}

loc_804960E8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_804960F0;
    }
}

loc_804960EC:
{
    r26 = (r26 + 1);
}

loc_804960F0:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 276u, (r3 + 284));
}

loc_804960F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8049610C;
    }
}

loc_804960FC:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 366u, (r3 + 374));
}

loc_80496104:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8049610C;
    }
}

loc_80496108:
{
    r26 = (r26 + 1);
}

loc_8049610C:
{
    r30 = 0x80740000u;
    r29 = 0;
    r3 = (r30 + -5120);
    r31 = 3;
    r0 = MemoryInline::FlatRead16((r3 + 2));
    r28 = (r3 + 8);
    r24 = 524288;
    r25 = 0x80610000u;
    r3 = PPC_Divw(static_cast<int32_t>(r0), static_cast<int32_t>(r4));
    r23 = 1374420992;
    r0 = (r3 + 1);
    r27 = (r0 & 65535);
}

loc_8049613C:
{
    r0 = MemoryInline::FlatRead8(r28);
}

loc_80496144:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804961E0;
    }
}

loc_80496148:
{
}

loc_8049614C:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(0))) {
        goto loc_8049615C;
    }
}

loc_80496150:
{
    r0 = MemoryInline::FlatRead8((r28 + 90));
}

loc_80496158:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80496168;
    }
}

loc_8049615C:
{
    MemoryInline::FlatWrite16((r28 + 52), static_cast<uint16_t>(r27));
    MemoryInline::FlatWrite16((r28 + 54), static_cast<uint16_t>(r27));
    goto loc_80496170;
}

loc_80496168:
{
    MemoryInline::FlatWrite16((r28 + 52), static_cast<uint16_t>(r31));
    MemoryInline::FlatWrite16((r28 + 54), static_cast<uint16_t>(r31));
}

loc_80496170:
{
    r0 = MemoryInline::FlatRead16((r28 + 52));
    r3 = (r23 + -31457);
    r0 = (r0 * 120);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r3)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 5);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    r0 = (r0 + r3);
    r4 = (r0 & 65535);
    MemoryInline::FlatWrite16((r28 + 58), static_cast<uint16_t>(r0));
    r0 = (r31 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r31) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r3_not_2 = ~(r0);
    r3_ca_2 = (xer >> 29) & 1u;
    r3 = (r3_not_2 + r0);
    r3 = (r3 + r3_ca_2);
    r0 = (r4 + -3);
    r3 = (r0 & r3);
    MemoryInline::FlatWrite16((r28 + 60), static_cast<uint16_t>(r3));
    r0 = (r4 + 2);
    MemoryInline::FlatWrite16((r28 + 62), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r30 + -5120));
}

loc_804961B8:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(5))) {
        goto loc_804961E0;
    }
}

loc_804961BC:
{
    r6 = MemoryInline::FlatRead8((r28 + 90));
    r3 = (r24 + 4);
    r7 = MemoryInline::FlatRead16((r28 + 54));
    r4 = (r25 + 29976);
    r8 = MemoryInline::FlatRead16((r28 + 58));
    r5 = (r29 & 65535);
    r9 = MemoryInline::FlatRead16((r28 + 60));
    r10 = MemoryInline::FlatRead16((r28 + 62));
    ctx->lr = 0x804961E0u;
    if constexpr (KnownRegArgsCpuCall<0x8047AC70u>(&func_8047AC70)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->xer = xer;
        const auto regargs_result_8047AC70_1E81 = func_8047AC70_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8047AC70_1E81);
        r4 = static_cast<uint32_t>(regargs_result_8047AC70_1E81 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        xer = ctx->xer;
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
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->xer = xer;
        InvokeDirectCpu<0x8047AC70u>(ctx);
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
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        xer = ctx->xer;
    }
}

loc_804961E0:
{
    r29 = (r29 + 1);
    r28 = (r28 + 92);
}

loc_804961EC:
{
    if ((static_cast<uint32_t>(r29) < static_cast<uint32_t>(4))) {
        goto loc_8049613C;
    }
}

loc_804961F0:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574C4 (10 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, true, false);
    // end of inlined leaf 0x804574C4
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->xer = xer;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80496070(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80496070_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000027FF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80496070 func_80496070 preserves=true fpr_mask=0x00000000
