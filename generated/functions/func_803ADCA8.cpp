#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803A8E08(CpuContext* ctx);
extern "C" uint64_t func_803A8E08_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_803A8F48(CpuContext* ctx);
extern "C" uint64_t func_803A8F48_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_803ADCA8_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
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

    goto loc_803ADCA8;

loc_803ADCA8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = MemoryInline::FlatRead32((r13 + -16864));
}

loc_803ADCC8:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_803ADD6C;
    }
}

loc_803ADCCC:
{
    r29 = 0;
    r31 = r30;
}

loc_803ADCD4:
{
    r3 = 0;
    // inline leaf 0x800CEF20 (23 guest instruction(s))
}

loc_inl0_0x800CEF20:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    r6 = (r4 + r0);
    r0 = MemoryInline::FlatRead16((r6 + 24));
}

loc_inl0_0x800CEF38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x800CEF40;
    }
}

loc_inl0_0x800CEF3C:
{
    r0 = 1;
}

loc_inl0_0x800CEF40:
{
    r5 = (r0 * 176);
    r3 = 11337728;
    r0 = (r3 + 30009);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r5)) >> 32));
    r0 = (r5 - r3);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_3 & 2147483647);
    r0 = (r0 + r3);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_2 & 131071);
    r3 = 65536;
    r0 = (r3 + -173);
    r0 = (r4 * r0);
    r0 = (r5 - r0);
    r3 = (r0 & 65535);
    MemoryInline::FlatWriteRam16((r6 + 24), static_cast<uint16_t>(r3));
}

loc_inl0_cont_800CEF20:
{
    // end of inlined leaf 0x800CEF20
    r0 = (r3 & 255);
    MemoryInline::FlatWrite16((r31 + 108), static_cast<uint16_t>(r0));
    r31 = (r31 + 2);
    r29 = (r29 + 1);
}

loc_803ADCF0:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(15))) {
        goto loc_803ADCD4;
    }
}

loc_803ADCF4:
{
    ctx->lr = 0x803ADCF8u;
    if constexpr (KnownRegArgsCpuCall<0x803A8E08u>(&func_803A8E08)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803A8E08_CD8 = func_803A8E08_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803A8E08_CD8);
        r4 = static_cast<uint32_t>(regargs_result_803A8E08_CD8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x803A8E08u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    ctx->lr = 0x803ADCFCu;
    if constexpr (KnownRegArgsCpuCall<0x803A8F48u>(&func_803A8F48)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_803A8F48_1014 = func_803A8F48_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803A8F48_1014);
        r4 = static_cast<uint32_t>(regargs_result_803A8F48_1014 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x803A8F48u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r29 = 0;
    r31 = r30;
}

loc_803ADD04:
{
    ctx->lr = 0x803ADD08u;
    if constexpr (KnownRegArgsCpuCall<0x803A8F48u>(&func_803A8F48)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_803A8F48_13D9 = func_803A8F48_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803A8F48_13D9);
        r4 = static_cast<uint32_t>(regargs_result_803A8F48_13D9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x803A8F48u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r0 = (r3 & 255);
    MemoryInline::FlatWrite16((r31 + 108), static_cast<uint16_t>(r0));
    r31 = (r31 + 2);
    r29 = (r29 + 1);
}

loc_803ADD1C:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(4))) {
        goto loc_803ADD04;
    }
}

loc_803ADD20:
{
    r4 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost(r30, 0, 1138u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 92u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 96u, (r30 + 96), r4);
        MemoryInline::WriteResolved32(guest_range_0, 92u, (r30 + 92), r4);
    }
    MemoryInline::WriteResolved8(guest_range_0, 22u, (r30 + 22), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 780u, (r30 + 780), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 84u, (r30 + 84), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 85u, (r30 + 85), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 0u, r30, static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r30 + 1), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r30 + 36), r4);
    MemoryInline::WriteResolved8(guest_range_0, 20u, (r30 + 20), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 724u, (r30 + 724), static_cast<uint8_t>(r4));
    r3 = 65536;
    r0 = (r3 + -1);
    MemoryInline::WriteResolved16(guest_range_0, 1132u, (r30 + 1132), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 725u, (r30 + 725), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved16(guest_range_0, 1134u, (r30 + 1134), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 726u, (r30 + 726), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved16(guest_range_0, 1136u, (r30 + 1136), static_cast<uint16_t>(r0));
}

loc_803ADD6C:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803ADCA8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803ADCA8_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000207B gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803ADCA8 func_803ADCA8 preserves=true fpr_mask=0x00000000
