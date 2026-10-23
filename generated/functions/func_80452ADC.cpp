#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80427718(CpuContext* ctx);
extern "C" uint64_t func_80427718_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80452ADC_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80452ADC;

loc_80452ADC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = r3;
    MemoryInline::FlatWriteRam32((r1 + 8), r4);
    r29 = r5;
    r31 = MemoryInline::FlatRead32((r13 + -16440));
}

loc_80452B08:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_80452B18;
    }
}

loc_80452B0C:
{
    r0 = 0;
    r4 = (r31 + 65536);
    MemoryInline::FlatWrite8((r4 + -32060), static_cast<uint8_t>(r0));
}

loc_80452B18:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A5E4 (8 guest instruction(s))
}

loc_inl1_0x8041A5E4:
{
}

loc_inl1_0x8041A5E8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x8041A5FC;
    }
}

loc_inl1_0x8041A5EC:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    goto loc_inl1_cont_8041A5E4;
}

loc_inl1_0x8041A5FC:
{
    r3 = 0;
}

loc_inl1_cont_8041A5E4:
{
    // end of inlined leaf 0x8041A5E4
    r3 = (r3 + 1344);
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r0 * 124);
    r3 = (r3 + r0);
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 76), 0, 50u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 49u, (r3 + 125));
}

loc_80452B44:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80452BD0;
    }
}

loc_80452B48:
{
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 76));
}

loc_80452B50:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80452B68;
    }
}

loc_80452B54:
{
    r0 = 9;
    r3 = (r31 + 65536);
    MemoryInline::FlatWrite8((r3 + -15783), static_cast<uint8_t>(r0));
    r3 = 0;
    goto loc_80452C08;
}

loc_80452B68:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r3 + 80));
}

loc_80452B70:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(r0))) {
        goto loc_80452B88;
    }
}

loc_80452B74:
{
    r0 = 8;
    r3 = (r31 + 65536);
    MemoryInline::FlatWrite8((r3 + -15783), static_cast<uint8_t>(r0));
    r3 = 0;
    goto loc_80452C08;
}

loc_80452B88:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r3 + 88));
}

loc_80452B90:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(4))) {
        goto loc_80452BB4;
    }
}

loc_80452B94:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r3 + 96));
    MemoryInline::FlatWrite32((r31 + 25104), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r3 + 104));
    MemoryInline::FlatWrite32((r31 + 25108), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r3 + 112));
    MemoryInline::FlatWrite32((r31 + 25112), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 44u, (r3 + 120));
    MemoryInline::FlatWrite32((r31 + 25116), r0);
}

loc_80452BB4:
{
    r3 = 4;
    r4 = r30;
    r5 = 0;
    r6 = 1;
    r7 = (r1 + 8);
    ctx->lr = 0x80452BCCu;
    if constexpr (KnownRegArgsCpuCall<0x80427718u>(&func_80427718)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_80427718_11A6 = func_80427718_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80427718_11A6);
        r4 = static_cast<uint32_t>(regargs_result_80427718_11A6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x80427718u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    goto loc_80452C08;
}

loc_80452BD0:
{
    r0 = (r29 & 255);
}

loc_80452BD8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80452BF0;
    }
}

loc_80452BDC:
{
    r0 = 9;
    r3 = (r31 + 65536);
    MemoryInline::FlatWrite8((r3 + -15783), static_cast<uint8_t>(r0));
    r3 = 0;
    goto loc_80452C08;
}

loc_80452BF0:
{
    r3 = 16;
    r4 = r30;
    r5 = 0;
    r6 = 1;
    r7 = (r1 + 8);
    ctx->lr = 0x80452C08u;
    if constexpr (KnownRegArgsCpuCall<0x80427718u>(&func_80427718)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_80427718_1772 = func_80427718_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80427718_1772);
        r4 = static_cast<uint32_t>(regargs_result_80427718_1772 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x80427718u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
}

loc_80452C08:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80452ADC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80452ADC_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000021FB gpr_write=0x000009FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80452ADC func_80452ADC preserves=true fpr_mask=0x00000000
