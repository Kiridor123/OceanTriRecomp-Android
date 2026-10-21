#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800D4EEC(CpuContext* ctx);
extern "C" uint64_t func_800D4EEC_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_803A763C_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
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

    MKW_GUEST_ENTER(0x803A763Cu);
    goto loc_803A763C;

loc_803A763C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r3 = 0x806B0000u;
    r31 = (r3 + -12348);
    r29 = 0;
    r30 = (r31 + 204);
}

loc_803A7664:
{
    r3 = r30;
    r4 = 0;
    r5 = 12;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r30 = (r30 + 12);
    r29 = (r29 + 1);
}

loc_803A7680:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(8))) {
        goto loc_803A7664;
    }
}

loc_803A7684:
{
    r3 = 0;
    r4 = 655360;
    r5 = 1;
    ctx->lr = 0x803A7694u;
    if constexpr (KnownRegArgsCpuCall<0x800D4EECu>(&func_800D4EEC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_800D4EEC_828 = func_800D4EEC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800D4EEC_828);
        r4 = static_cast<uint32_t>(regargs_result_800D4EEC_828 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r13 = ctx->gpr[13];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x800D4EECu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r13 = ctx->gpr[13];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 196), 0, 104u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r31 + 196), r3);
    // inline leaf 0x800D5168 (13 guest instruction(s))
}

loc_inl0_0x800D5168:
{
}

loc_inl0_0x800D516C:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_inl0_0x800D5178;
    }
}

loc_inl0_0x800D5170:
{
    r3 = 0;
    goto loc_inl0_cont_800D5168;
}

loc_inl0_0x800D5178:
{
}

loc_inl0_0x800D517C:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(1024))) {
        goto loc_inl0_0x800D5188;
    }
}

loc_inl0_0x800D5180:
{
    r3 = 0;
    goto loc_inl0_cont_800D5168;
}

loc_inl0_0x800D5188:
{
    r4 = MemoryInline::FlatRead32((r13 + -17584));
    r0 = (r3 * 76);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 12400));
}

loc_inl0_cont_800D5168:
{
    // end of inlined leaf 0x800D5168
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r31 + 200), r3);
    r6 = 255;
    MemoryInline::WriteResolved8(guest_range_0, 10u, (r31 + 206), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 9u, (r31 + 205), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r31 + 208), r3);
    r4 = 65536;
    r5 = (r4 + 16384);
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r31 + 212), r5);
    MemoryInline::WriteResolved8(guest_range_0, 22u, (r31 + 218), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 21u, (r31 + 217), static_cast<uint8_t>(r6));
    r4 = (r3 + 65536);
    r0 = (r4 + 16384);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r31 + 220), r0);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r31 + 224), r5);
    }
    MemoryInline::WriteResolved8(guest_range_0, 34u, (r31 + 230), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 33u, (r31 + 229), static_cast<uint8_t>(r6));
    r4 = (r3 + 196608);
    r0 = (r4 + -32768);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r31 + 232), r0);
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r31 + 236), r5);
    }
    MemoryInline::WriteResolved8(guest_range_0, 46u, (r31 + 242), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 45u, (r31 + 241), static_cast<uint8_t>(r6));
    r4 = (r3 + 262144);
    r0 = (r4 + -16384);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r31 + 244), r0);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r31 + 248), r5);
    }
    MemoryInline::WriteResolved8(guest_range_0, 58u, (r31 + 254), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 57u, (r31 + 253), static_cast<uint8_t>(r6));
    r0 = (r3 + 327680);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 60u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r31 + 256), r0);
        MemoryInline::WriteResolved32(guest_range_0, 64u, (r31 + 260), r5);
    }
    MemoryInline::WriteResolved8(guest_range_0, 70u, (r31 + 266), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 69u, (r31 + 265), static_cast<uint8_t>(r6));
    r4 = (r3 + 393216);
    r0 = (r4 + 16384);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 72u, (r31 + 268), r0);
        MemoryInline::WriteResolved32(guest_range_0, 76u, (r31 + 272), r5);
    }
    MemoryInline::WriteResolved8(guest_range_0, 82u, (r31 + 278), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 81u, (r31 + 277), static_cast<uint8_t>(r6));
    r4 = (r3 + 524288);
    r0 = (r4 + -32768);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 84u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 84u, (r31 + 280), r0);
        MemoryInline::WriteResolved32(guest_range_0, 88u, (r31 + 284), r5);
    }
    MemoryInline::WriteResolved8(guest_range_0, 94u, (r31 + 290), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 93u, (r31 + 289), static_cast<uint8_t>(r6));
    r3 = (r3 + 589824);
    r0 = (r3 + -16384);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 96u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 96u, (r31 + 292), r0);
        MemoryInline::WriteResolved32(guest_range_0, 100u, (r31 + 296), r5);
    }
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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

extern "C" void func_803A763C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803A763C_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002FFF gpr_write=0x01FFFFFF gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803A763C func_803A763C preserves=true fpr_mask=0x00000000
