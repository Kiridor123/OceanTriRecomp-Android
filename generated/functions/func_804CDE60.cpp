#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80477860(CpuContext* ctx);
extern "C" uint32_t func_80477860_ra0_0_8_0(CpuContext*);
extern "C" void func_80477880(CpuContext* ctx);
extern "C" uint32_t func_80477880_ra8_0_10_0(CpuContext*, uint32_t);

extern "C" uint64_t func_804CDE60_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
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
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_804CDE60;

loc_804CDE60:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r28 = r4;
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x804D12F0
    r4 = 0x80750000u;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & 262140);
    r4 = (r4 + -2128);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r29), static_cast<uint32_t>(16));
}

loc_804CDE98:
{
    r4_addr_0 = (r4 + r0);
    r30 = MemoryInline::FlatRead32(r4_addr_0);
    r29 = r3;
    r4_addr_1 = (r4 + r0);
    MemoryInline::FlatWrite32(r4_addr_1, r28);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_804CE0C0;
    }
}

loc_804CDEA8:
{
    // inline leaf 0x80477760 (2 guest instruction(s))
    r3 = ctx->msr;
    // end of inlined leaf 0x80477760
    r31 = r3;
    r3 = (r3 | 8192);
    // inline leaf 0x80477770 (2 guest instruction(s))
    ctx->msr = r3;
    // end of inlined leaf 0x80477770
    if constexpr (KnownRegArgsCpuCall<0x80477860u>(&func_80477860)) {
        ctx->gpr[1] = r1;
        const auto regargs_result_80477860_A63 = func_80477860_ra0_0_8_0(ctx);
        r3 = regargs_result_80477860_A63;
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x80477860u>(ctx);
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_804CDEC0:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_804CE05C;
    }
}

loc_804CDEC4:
{
    r5 = 0x80000000u;
    r4 = 1611005952;
    r9 = MemoryInline::FlatRead32((r5 + 220));
    r5 = (r4 + -1793);
    r8 = -1;
    r7 = 4;
    r0 = 2;
    goto loc_804CE040;
}

loc_804CDEE8:
{
    r4 = MemoryInline::FlatRead32((r9 + 412));
    r4 = (r4 | 2304);
    MemoryInline::FlatWrite32((r9 + 412), r4);
    r6 = MemoryInline::FlatRead16((r9 + 418));
    r4 = (r6 & 1);
}

loc_804CDEFC:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_804CE024;
    }
}

loc_804CDF00:
{
    r4 = (r6 | 1);
    MemoryInline::FlatWrite16((r9 + 418), static_cast<uint16_t>(r4));
    r4 = (r9 + 144);
    r6 = (r9 + 456);
    ctr = r0;
}

loc_804CDF14:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 128u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r4 + 4), r8);
        MemoryInline::WriteResolved32(guest_range_0, 0u, r4, r8);
    }
    guest_range_1 = MemoryInline::ResolveRangeHost(r6, 0, 128u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r6 + 4), r8);
        MemoryInline::WriteResolved32(guest_range_1, 0u, r6, r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r4 + 12), r8);
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r4 + 8), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r6 + 12), r8);
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r6 + 8), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r4 + 20), r8);
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r4 + 16), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r6 + 20), r8);
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r6 + 16), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r4 + 28), r8);
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r4 + 24), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r6 + 28), r8);
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r6 + 24), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r4 + 36), r8);
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r4 + 32), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_1, 36u, (r6 + 36), r8);
        MemoryInline::WriteResolved32(guest_range_1, 32u, (r6 + 32), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r4 + 44), r8);
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r4 + 40), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_1, 44u, (r6 + 44), r8);
        MemoryInline::WriteResolved32(guest_range_1, 40u, (r6 + 40), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r4 + 52), r8);
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r4 + 48), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_1, 52u, (r6 + 52), r8);
        MemoryInline::WriteResolved32(guest_range_1, 48u, (r6 + 48), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r4 + 60), r8);
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r4 + 56), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_1, 60u, (r6 + 60), r8);
        MemoryInline::WriteResolved32(guest_range_1, 56u, (r6 + 56), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_0, 68u, (r4 + 68), r8);
        MemoryInline::WriteResolved32(guest_range_0, 64u, (r4 + 64), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_1, 68u, (r6 + 68), r8);
        MemoryInline::WriteResolved32(guest_range_1, 64u, (r6 + 64), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_0, 76u, (r4 + 76), r8);
        MemoryInline::WriteResolved32(guest_range_0, 72u, (r4 + 72), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_1, 76u, (r6 + 76), r8);
        MemoryInline::WriteResolved32(guest_range_1, 72u, (r6 + 72), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 80u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_0, 84u, (r4 + 84), r8);
        MemoryInline::WriteResolved32(guest_range_0, 80u, (r4 + 80), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 80u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_1, 84u, (r6 + 84), r8);
        MemoryInline::WriteResolved32(guest_range_1, 80u, (r6 + 80), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 88u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_0, 92u, (r4 + 92), r8);
        MemoryInline::WriteResolved32(guest_range_0, 88u, (r4 + 88), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 88u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_1, 92u, (r6 + 92), r8);
        MemoryInline::WriteResolved32(guest_range_1, 88u, (r6 + 88), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 96u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_0, 100u, (r4 + 100), r8);
        MemoryInline::WriteResolved32(guest_range_0, 96u, (r4 + 96), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 96u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_1, 100u, (r6 + 100), r8);
        MemoryInline::WriteResolved32(guest_range_1, 96u, (r6 + 96), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 104u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_0, 108u, (r4 + 108), r8);
        MemoryInline::WriteResolved32(guest_range_0, 104u, (r4 + 104), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 104u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_1, 108u, (r6 + 108), r8);
        MemoryInline::WriteResolved32(guest_range_1, 104u, (r6 + 104), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 112u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_0, 116u, (r4 + 116), r8);
        MemoryInline::WriteResolved32(guest_range_0, 112u, (r4 + 112), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 112u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_1, 116u, (r6 + 116), r8);
        MemoryInline::WriteResolved32(guest_range_1, 112u, (r6 + 112), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 120u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_0, 124u, (r4 + 124), r8);
        MemoryInline::WriteResolved32(guest_range_0, 120u, (r4 + 120), r8);
    }
    r4 = (r4 + 128);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 120u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_1, 124u, (r6 + 124), r8);
        MemoryInline::WriteResolved32(guest_range_1, 120u, (r6 + 120), r8);
    }
    r6 = (r6 + 128);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804CDF14;
    }
}

loc_804CE020:
{
    MemoryInline::FlatWrite32((r9 + 404), r7);
}

loc_804CE024:
{
    r4 = MemoryInline::FlatRead32((r13 + -20104));
    r6 = MemoryInline::FlatRead32((r9 + 404));
    r4 = (r4 & 248);
    r4 = (r6 | r4);
    r4 = (r4 & r5);
    MemoryInline::FlatWrite32((r9 + 404), r4);
    r9 = MemoryInline::FlatRead32((r9 + 764));
}

loc_804CE040:
{
}

loc_804CE044:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_804CDEE8;
    }
}

loc_804CE048:
{
    r0 = MemoryInline::FlatRead32((r13 + -20104));
    r31 = (r31 | 2304);
    r0 = (r0 & 248);
    r4 = (r3 | r0);
    goto loc_804CE0A8;
}

loc_804CE05C:
{
    r5 = 0x80000000u;
    r4 = 1611005952;
    r6 = MemoryInline::FlatRead32((r5 + 220));
    r4 = (r4 + -1793);
    r5 = -2305;
    goto loc_804CE094;
}

loc_804CE074:
{
    r0 = MemoryInline::FlatRead32((r6 + 412));
    r0 = (r0 & r5);
    MemoryInline::FlatWrite32((r6 + 412), r0);
    r0 = MemoryInline::FlatRead32((r6 + 404));
    r0 = (r0 & -249);
    r0 = (r0 & r4);
    MemoryInline::FlatWrite32((r6 + 404), r0);
    r6 = MemoryInline::FlatRead32((r6 + 764));
}

loc_804CE094:
{
}

loc_804CE098:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_804CE074;
    }
}

loc_804CE09C:
{
    r0 = -2305;
    r4 = (r3 & -249);
    r31 = (r31 & r0);
}

loc_804CE0A8:
{
    r3 = 1611005952;
    r0 = (r3 + -1793);
    r3 = (r4 & r0);
    if constexpr (KnownRegArgsCpuCall<0x80477880u>(&func_80477880)) {
        ctx->gpr[1] = r1;
        const auto regargs_result_80477880_3D60 = func_80477880_ra8_0_10_0(ctx, r3);
        r4 = regargs_result_80477880_3D60;
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80477880u>(ctx);
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    }
    r3 = r31;
    // inline leaf 0x80477770 (2 guest instruction(s))
    ctx->msr = r3;
    // end of inlined leaf 0x80477770
}

loc_804CE0C0:
{
    r3 = r29;
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl4_0x804D1330:
{
}

loc_inl4_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl4_0x804D1344;
    }
}

loc_inl4_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl4_0x804D1348;
}

loc_inl4_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl4_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_1 & 1);
}

loc_inl4_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
    r3 = r30;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804CDE60(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804CDE60_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000023FB gpr_write=0x000003FB gpr_return=0x00000018 fpr_read=0x80000000 fpr_write=0x80000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804CDE60 func_804CDE60 preserves=true fpr_mask=0x00000000
