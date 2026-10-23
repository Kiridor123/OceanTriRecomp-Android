#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804825F4(CpuContext* ctx);
extern "C" uint64_t func_804825F4_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_8048BE0C_ra408_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r10, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
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
    ctx->gpr[10] = arg_r10;

    goto loc_8048BE0C;

loc_8048BE0C:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r6 = r3;
    MemoryInline::WriteResolved32(guest_range_1, 36u, (r1 + 36), r0);
    r5 = (r1 + 8);
    guest_range_0 = MemoryInline::ResolveRangeHost((r6 + 1), 0, 20u, true, false);
    r4 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r6 + 2));
    r3 = MemoryInline::FlatRead8(r3);
    r7 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r6 + 1));
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r4 = (r4_rot_0 & -256);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r6 + 3));
    r4 = (r7 + r4);
    MemoryInline::WriteResolved8(guest_range_1, 8u, (r1 + 8), static_cast<uint8_t>(r0));
    r4 = (r4 & 65535);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r6 + 4));
    MemoryInline::WriteResolved8(guest_range_1, 9u, (r1 + 9), static_cast<uint8_t>(r0));
    r7 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r6 + 8));
    r8 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r6 + 7));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r6 + 6));
    r9_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(24));
    r9 = (r9_rot_0 & -16777216);
    r7 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r6 + 5));
    r8_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(16));
    r8 = (r8_rot_0 & -65536);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_0 & -256);
    r7 = (r8 + r7);
    r0 = (r9 + r0);
    r0 = (r7 + r0);
    MemoryInline::WriteResolved32(guest_range_1, 12u, (r1 + 12), r0);
    r7 = MemoryInline::ReadResolved8(guest_range_0, 11u, (r6 + 12));
    r8 = MemoryInline::ReadResolved8(guest_range_0, 10u, (r6 + 11));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 9u, (r6 + 10));
    r9_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(24));
    r9 = (r9_rot_1 & -16777216);
    r7 = MemoryInline::ReadResolved8(guest_range_0, 8u, (r6 + 9));
    r8_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(16));
    r8 = (r8_rot_1 & -65536);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_1 & -256);
    r7 = (r8 + r7);
    r0 = (r9 + r0);
    r0 = (r7 + r0);
    MemoryInline::WriteResolved32(guest_range_1, 20u, (r1 + 20), r0);
    r7 = MemoryInline::ReadResolved8(guest_range_0, 15u, (r6 + 16));
    r8 = MemoryInline::ReadResolved8(guest_range_0, 14u, (r6 + 15));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 13u, (r6 + 14));
    r9_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(24));
    r9 = (r9_rot_2 & -16777216);
    r7 = MemoryInline::ReadResolved8(guest_range_0, 12u, (r6 + 13));
    r8_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(16));
    r8 = (r8_rot_2 & -65536);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_2 & -256);
    r7 = (r8 + r7);
    r0 = (r9 + r0);
    r0 = (r7 + r0);
    MemoryInline::WriteResolved32(guest_range_1, 24u, (r1 + 24), r0);
    r8 = MemoryInline::ReadResolved8(guest_range_0, 19u, (r6 + 20));
    r7 = MemoryInline::ReadResolved8(guest_range_0, 18u, (r6 + 19));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 17u, (r6 + 18));
    r8_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(24));
    r8 = (r8_rot_3 & -16777216);
    r6 = MemoryInline::ReadResolved8(guest_range_0, 16u, (r6 + 17));
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(16));
    r7 = (r7_rot_0 & -65536);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_3 & -256);
    r6 = (r7 + r6);
    r0 = (r8 + r0);
    r0 = (r6 + r0);
    MemoryInline::WriteResolved32(guest_range_1, 28u, (r1 + 28), r0);
    ctx->lr = 0x8048BEFCu;
    if constexpr (KnownRegArgsCpuCall<0x804825F4u>(&func_804825F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        const auto regargs_result_804825F4_1766 = func_804825F4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804825F4_1766);
        r4 = static_cast<uint32_t>(regargs_result_804825F4_1766 >> 32);
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
        InvokeDirectCpu<0x804825F4u>(ctx);
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
    }
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
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
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8048BE0C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8048BE0C_ra408_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[10], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003C0E gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8048BE0C func_8048BE0C preserves=true fpr_mask=0x00000000
