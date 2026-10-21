#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8047B230(CpuContext* ctx);
extern "C" uint64_t func_8047B230_ra48_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_804868DC_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
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

    MKW_GUEST_ENTER(0x804868DCu);
    goto loc_804868DC;

loc_804868DC:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + -288), 0, 296u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + -288), r1);
    r1 = (r1 + -288);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_2, 292u, (r1 + 292), r0);
    r11 = (r1 + 288);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r31 = 0x80740000u;
    r26 = r4;
    r31 = (r31 + -17608);
    r27 = r5;
    r30 = MemoryInline::FlatRead32((r31 + 5756));
    r28 = r6;
    r29 = MemoryInline::FlatRead8((r31 + 5806));
    r3 = (r31 + 5760);
    if constexpr (KnownRegArgsCpuCall<0x8047B230u>(&func_8047B230)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8047B230_8B5 = func_8047B230_ra48_0_18_0(ctx, r3, r6);
        r3 = static_cast<uint32_t>(regargs_result_8047B230_8B5);
        r4 = static_cast<uint32_t>(regargs_result_8047B230_8B5 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8047B230u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r3 = 0;
}

loc_8048691C:
{
    MemoryInline::FlatWriteRam8((r31 + 5806), static_cast<uint8_t>(r3));
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(0))) {
        goto loc_804869D4;
    }
}

loc_80486924:
{
}

loc_80486928:
{
    r4 = (r1 + 12);
    r3 = 248;
    if ((static_cast<uint32_t>(r27) >= static_cast<uint32_t>(248))) {
        goto loc_80486938;
    }
}

loc_80486934:
{
    r3 = r27;
}

loc_80486938:
{
    r5 = (r3 & 65535);
}

loc_8048693C:
{
    r0 = 0;
    MemoryInline::FlatWriteRam16((r1 + 10), static_cast<uint16_t>(r3));
    MemoryInline::FlatWriteRam16((r1 + 8), static_cast<uint16_t>(r0));
    r3 = r5;
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_804869E4;
    }
}

loc_80486950:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
}

loc_80486954:
{
    ctr = r0;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804869B4;
    }
}

loc_8048695C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r26, 0, 8u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, r26);
    r5 = (r5 + -8);
    guest_range_1 = MemoryInline::ResolveRangeHost(r4, 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, r4, static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r26 + 1));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r4 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r26 + 2));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r4 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r26 + 3));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r4 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r26 + 4));
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r4 + 4), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r26 + 5));
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r4 + 5), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r26 + 6));
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r4 + 6), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r26 + 7));
    r26 = (r26 + 8);
    MemoryInline::WriteResolved8(guest_range_1, 7u, (r4 + 7), static_cast<uint8_t>(r0));
    r4 = (r4 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8048695C;
    }
}

loc_804869AC:
{
    r3 = (r3 & 7);
}

loc_804869B0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804869E4;
    }
}

loc_804869B4:
{
    ctr = r3;
}

loc_804869B8:
{
    r0 = MemoryInline::FlatRead8(r26);
    r5 = (r5 + -1);
    r26 = (r26 + 1);
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804869B8;
    }
}

loc_804869D0:
{
    goto loc_804869E4;
}

loc_804869D4:
{
    r0 = 9;
    MemoryInline::FlatWriteRam16((r1 + 10), static_cast<uint16_t>(r3));
    MemoryInline::FlatWriteRam16((r1 + 8), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r3));
}

loc_804869E4:
{
    r3 = (r31 + 5800);
    r4 = 0;
    r5 = 6;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r0 = (r29 & 1);
}

loc_804869F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80486A1C;
    }
}

loc_804869FC:
{
    r0 = 0;
}

loc_80486A04:
{
    MemoryInline::FlatWriteRam32((r31 + 5756), r0);
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_80486A1C;
    }
}

loc_80486A0C:
{
    r12 = r30;
    r3 = (r1 + 8);
    ctr = r12;
    ctx->lr = 0x80486A1Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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

loc_80486A1C:
{
    r11 = (r1 + 288);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::FlatRead32((r1 + 292));
    ctx->lr = r0;
    r1 = (r1 + 288);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804868DC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804868DC_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804868DC func_804868DC preserves=true fpr_mask=0x00000000
