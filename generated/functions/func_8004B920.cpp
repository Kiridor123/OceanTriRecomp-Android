#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004AED4(CpuContext* ctx);
extern "C" uint32_t func_8004AED4_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_8004B920_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;

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
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x8004B920u);
    goto loc_8004B920;

loc_8004B920:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r30 = r4;
    r31 = MemoryInline::FlatRead32((r13 + -17824));
    r3 = (r3 & 65535);
    // inline leaf 0x8004B098 (12 guest instruction(s))
}

loc_inl0_0x8004B098:
{
    r3 = (r3 & 65535);
    r0 = (r3 + -438);
}

loc_inl0_0x8004B0A4:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_inl0_0x8004B0B8;
    }
}

loc_inl0_0x8004B0A8:
{
}

loc_inl0_0x8004B0AC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x8004B0B8;
    }
}

loc_inl0_0x8004B0B0:
{
}

loc_inl0_0x8004B0B4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(223))) {
        goto loc_inl0_0x8004B0C0;
    }
}

loc_inl0_0x8004B0B8:
{
    r3 = 1;
    goto loc_inl0_cont_8004B098;
}

loc_inl0_0x8004B0C0:
{
    r3 = 0;
}

loc_inl0_cont_8004B098:
{
    // end of inlined leaf 0x8004B098
}

loc_8004B950:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8004B95C;
    }
}

loc_8004B954:
{
    r3 = 0;
    goto loc_8004BA48;
}

loc_8004B95C:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r30)));
}

loc_8004B964:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_8004B970;
    }
}

loc_8004B968:
{
    r3 = 0;
    goto loc_8004BA48;
}

loc_8004B970:
{
    r3 = r31;
    ctx->lr = 0x8004B978u;
    if constexpr (KnownRegArgsCpuCall<0x8004AED4u>(&func_8004AED4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        const auto regargs_result_8004AED4_A00 = func_8004AED4_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8004AED4_A00;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8004AED4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r6 = (r3 & 65535);
    r0 = (0 - r30);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r5 = r31;
    r0 = 0;
    ctr = r6;
}

loc_8004B994:
{
    if ((static_cast<uint32_t>(r6) <= static_cast<uint32_t>(0))) {
        goto loc_8004B9C0;
    }
}

loc_8004B998:
{
    r4 = MemoryInline::FlatRead16((r5 + 384));
}

loc_8004B9A0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8004B9B8;
    }
}

loc_8004B9A4:
{
    r4 = MemoryInline::FlatRead16((r5 + 386));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
}

loc_8004B9AC:
{
    if ((static_cast<int32_t>(r4) > static_cast<int32_t>(0))) {
        goto loc_8004B9B8;
    }
}

loc_8004B9B0:
{
    MemoryInline::FlatWrite16((r5 + 384), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r5 + 386), static_cast<uint16_t>(r0));
}

loc_8004B9B8:
{
    r5 = (r5 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8004B998;
    }
}

loc_8004B9C0:
{
    r7 = (r6 + -1);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r4 = (r31 + r0);
    r6 = (r4 + 384);
    r4 = 0;
    r5 = (r29 & 65535);
    r0 = (r7 + 1);
    ctr = r0;
}

loc_8004B9E4:
{
    if ((static_cast<int32_t>(r7) < static_cast<int32_t>(0))) {
        goto loc_8004BA48;
    }
}

loc_8004B9E8:
{
    r0 = MemoryInline::FlatRead16(r6);
}

loc_8004B9F0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r5))) {
        goto loc_8004BA40;
    }
}

loc_8004B9F4:
{
    r7 = MemoryInline::FlatRead16((r6 + 2));
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
}

loc_8004BA00:
{
    if ((static_cast<int32_t>(r7) < static_cast<int32_t>(r0))) {
        goto loc_8004BA14;
    }
}

loc_8004BA04:
{
    r0 = (r7 - r3);
    MemoryInline::FlatWrite16((r6 + 2), static_cast<uint16_t>(r0));
    r3 = 0;
    goto loc_8004BA1C;
}

loc_8004BA14:
{
    r3 = (r3 - r7);
    MemoryInline::FlatWrite16((r6 + 2), static_cast<uint16_t>(r4));
}

loc_8004BA1C:
{
    r0 = MemoryInline::FlatRead16((r6 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8004BA24:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_8004BA2C;
    }
}

loc_8004BA28:
{
    MemoryInline::FlatWrite16(r6, static_cast<uint16_t>(r4));
}

loc_8004BA2C:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
}

loc_8004BA34:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_8004BA40;
    }
}

loc_8004BA38:
{
    r3 = 0;
    goto loc_8004BA48;
}

loc_8004BA40:
{
    r6 = (r6 + -4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8004B9E8;
    }
}

loc_8004BA48:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8004B920(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8004B920_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000020FB gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8004B920 func_8004B920 preserves=true fpr_mask=0x00000000
