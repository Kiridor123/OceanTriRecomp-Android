#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80500EC4(CpuContext* ctx);
extern "C" uint32_t func_80500EC4_ra18_0_10_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_80503994_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r11_rot_0 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80503994;

loc_80503994:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r7 = 0x80760000u;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -1456));
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r8 = -1;
    r0 = 255;
    r6 = (r7 + 12648);
    r31 = r3;
    r4 = (r1 + 8);
    r5 = (r1 + 12);
    r30 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 76u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r8);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 4), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 8), r8);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 12), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r3 + 16), r8);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r3 + 20), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r3 + 24), r8);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r3 + 28), r8);
    }
    MemoryInline::WriteResolved8(guest_range_0, 66u, (r3 + 66), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 67u, (r3 + 67), static_cast<uint8_t>(r30));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 68u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 68u, (r3 + 68), f0.d);
        MemoryInline::WriteResolved32(guest_range_0, 72u, (r3 + 72), r30);
    }
    MemoryInline::FlatWriteRam32((r7 + 12648), r0);
    MemoryInline::FlatWriteRam32((r6 + 4), r30);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    MemoryInline::FlatWriteRam32((r1 + 12), r8);
    // inline leaf 0x80503BB4 (17 guest instruction(s))
    r11 = MemoryInline::FlatRead8(r4);
    r10 = MemoryInline::FlatRead8((r4 + 1));
    r9 = MemoryInline::FlatRead8((r4 + 2));
    r8 = MemoryInline::FlatRead8((r4 + 3));
    r7 = MemoryInline::FlatRead8(r5);
    r6 = MemoryInline::FlatRead8((r5 + 1));
    r4 = MemoryInline::FlatRead8((r5 + 2));
    r0 = MemoryInline::FlatRead8((r5 + 3));
    MemoryInline::WriteResolved8(guest_range_0, 0u, r3, static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r3 + 1), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r3 + 2), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r3 + 3), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r3 + 4), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r3 + 5), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r3 + 6), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r3 + 7), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x80503BB4
    r5 = MemoryInline::FlatRead8((r31 + 24));
}

loc_80503A18:
{
    r4 = MemoryInline::FlatRead8((r31 + 25));
    r3 = MemoryInline::FlatRead8((r31 + 26));
    r0 = MemoryInline::FlatRead8((r31 + 27));
    MemoryInline::FlatWrite32((r31 + 32), r30);
    MemoryInline::FlatWrite8((r31 + 8), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r31 + 9), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r31 + 10), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r31 + 11), static_cast<uint8_t>(r0));
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(1))) {
        goto loc_80503A44;
    }
}

loc_80503A3C:
{
    r4 = (r31 + 24);
    goto loc_80503A48;
}

loc_80503A44:
{
    r4 = (r31 + 28);
}

loc_80503A48:
{
    r3 = MemoryInline::FlatRead8(r4);
    r0 = MemoryInline::FlatRead32((r31 + 32));
    MemoryInline::FlatWrite8((r31 + 12), static_cast<uint8_t>(r3));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80503A58:
{
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::FlatWrite8((r31 + 13), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 2));
    MemoryInline::FlatWrite8((r31 + 14), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    MemoryInline::FlatWrite8((r31 + 15), static_cast<uint8_t>(r0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80503A7C;
    }
}

loc_80503A74:
{
    r4 = (r31 + 24);
    goto loc_80503A80;
}

loc_80503A7C:
{
    r4 = (r31 + 28);
}

loc_80503A80:
{
    r3 = MemoryInline::FlatRead8(r4);
    r0 = MemoryInline::FlatRead32((r31 + 32));
    MemoryInline::FlatWrite8((r31 + 16), static_cast<uint8_t>(r3));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80503A90:
{
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::FlatWrite8((r31 + 17), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 2));
    MemoryInline::FlatWrite8((r31 + 18), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    MemoryInline::FlatWrite8((r31 + 19), static_cast<uint8_t>(r0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80503AB4;
    }
}

loc_80503AAC:
{
    r10 = (r31 + 24);
    goto loc_80503AB8;
}

loc_80503AB4:
{
    r10 = (r31 + 28);
}

loc_80503AB8:
{
    r0 = MemoryInline::FlatRead8(r10);
    r3 = 0x80810000u;
    r12 = (r3 + -32639);
    r5 = MemoryInline::FlatRead8((r31 + 11));
    MemoryInline::FlatWrite8((r31 + 20), static_cast<uint8_t>(r0));
    r0 = -1;
    r9 = MemoryInline::FlatRead8((r31 + 66));
    r3 = r31;
    r7 = MemoryInline::FlatRead8((r10 + 1));
    r4 = (r1 + 16);
    r6 = MemoryInline::FlatRead8((r31 + 15));
    r8 = (r5 * r9);
    MemoryInline::FlatWrite8((r31 + 21), static_cast<uint8_t>(r7));
    r5 = MemoryInline::FlatRead8((r31 + 19));
    r7 = MemoryInline::FlatRead8((r10 + 2));
    MemoryInline::FlatWrite8((r31 + 22), static_cast<uint8_t>(r7));
    r6 = (r6 * r9);
    r10 = MemoryInline::FlatRead8((r10 + 3));
    r7 = (r5 * r9);
    r5 = (r10 * r9);
    r10 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r12)) * static_cast<int64_t>(static_cast<int32_t>(r8))) >> 32));
    r9 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r12)) * static_cast<int64_t>(static_cast<int32_t>(r6))) >> 32));
    r8 = (r10 + r8);
    r10 = (static_cast<int32_t>(r8) >> 7);
    r8 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r12)) * static_cast<int64_t>(static_cast<int32_t>(r7))) >> 32));
    r11_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(1));
    r11 = (r11_rot_0 & 1);
    r6 = (r9 + r6);
    r10 = (r10 + r11);
    r9 = (static_cast<int32_t>(r6) >> 7);
    MemoryInline::FlatWrite8((r31 + 11), static_cast<uint8_t>(r10));
    r7 = (r8 + r7);
    r8_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(1));
    r8 = (r8_rot_0 & 1);
    r6 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r12)) * static_cast<int64_t>(static_cast<int32_t>(r5))) >> 32));
    r9 = (r9 + r8);
    r7 = (static_cast<int32_t>(r7) >> 7);
    MemoryInline::FlatWrite8((r31 + 15), static_cast<uint8_t>(r9));
    r8_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r8 = (r8_rot_1 & 1);
    r5 = (r6 + r5);
    r5 = (static_cast<int32_t>(r5) >> 7);
    r7 = (r7 + r8);
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r6 = (r6_rot_0 & 1);
    MemoryInline::FlatWrite8((r31 + 19), static_cast<uint8_t>(r7));
    r5 = (r5 + r6);
    MemoryInline::FlatWrite8((r31 + 23), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    if constexpr (KnownRegArgsCpuCall<0x80500EC4u>(&func_80500EC4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        const auto regargs_result_80500EC4_26BD = func_80500EC4_ra18_0_10_0(ctx, r3, r4);
        r4 = regargs_result_80500EC4_26BD;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        cr = ctx->cr;
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
        ctx->cr = cr;
        InvokeDirectCpu<0x80500EC4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    f0.d = MemoryInline::FlatReadFloat32((r2 + -1456));
    r0 = 1;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -1452));
    r3 = r31;
    MemoryInline::FlatWriteFloat32((r31 + 44), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 36), f1.d);
    MemoryInline::FlatWriteFloat32((r31 + 40), f1.d);
    MemoryInline::FlatWriteFloat32((r31 + 48), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 52), f0.d);
    MemoryInline::FlatWrite32((r31 + 56), r0);
    MemoryInline::FlatWrite32((r31 + 60), r0);
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
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80503994(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80503994_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003E gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80503994 func_80503994 preserves=true fpr_mask=0x00000000
