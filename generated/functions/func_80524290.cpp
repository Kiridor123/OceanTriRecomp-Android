#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804CBD80(CpuContext* ctx);
extern "C" uint64_t func_804CBD80_ra68_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804CBE80(CpuContext* ctx);
extern "C" uint64_t func_804CBE80_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80524290_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80524290;

loc_80524290:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r0 = MemoryInline::FlatRead32((r13 + -13408));
}

loc_805242AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805242C4;
    }
}

loc_805242B0:
{
    r3 = 0x80790000u;
    r3 = (r3 + 8968);
    ctx->lr = 0x805242BCu;
    if constexpr (KnownRegArgsCpuCall<0x804CBE80u>(&func_804CBE80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_804CBE80_64A = func_804CBE80_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804CBE80_64A);
        r4 = static_cast<uint32_t>(regargs_result_804CBE80_64A >> 32);
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
        InvokeDirectCpu<0x804CBE80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r0 = 0;
    MemoryInline::FlatWrite32((r13 + -13408), r0);
}

loc_805242C4:
{
    r0 = MemoryInline::FlatRead32((r13 + -13544));
}

loc_805242CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-3))) {
        goto loc_80524358;
    }
}

loc_805242D0:
{
}

loc_805242D4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_80524358;
    }
}

loc_805242D8:
{
}

loc_805242DC:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(-6))) {
        goto loc_80524358;
    }
}

loc_805242E0:
{
}

loc_805242E4:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(-4))) {
        goto loc_80524358;
    }
}

loc_805242E8:
{
}

loc_805242EC:
{
    if ((static_cast<int32_t>(r31) >= static_cast<int32_t>(0))) {
        goto loc_8052432C;
    }
}

loc_805242F0:
{
    r3 = 0x80000000u;
    r4 = 274857984;
    r0 = MemoryInline::FlatRead32((r3 + 248));
    r3 = 0x80790000u;
    r7 = 0x80520000u;
    r4 = (r4 + 19923);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r0 = (r0_rot_1 & 1073741823);
    r3 = (r3 + 8968);
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r4) * static_cast<uint64_t>(r0)) >> 32));
    r7 = (r7 + 26352);
    r5 = 0;
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(26));
    r0 = (r0_rot_2 & 67108863);
    r6 = (r0 * 2000);
    ctx->lr = 0x80524328u;
    if constexpr (KnownRegArgsCpuCall<0x804CBD80u>(&func_804CBD80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[7] = r7;
        const auto regargs_result_804CBD80_FE2 = func_804CBD80_ra68_0_18_0(ctx, r3, r5, r6);
        r3 = static_cast<uint32_t>(regargs_result_804CBD80_FE2);
        r4 = static_cast<uint32_t>(regargs_result_804CBD80_FE2 >> 32);
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
        InvokeDirectCpu<0x804CBD80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    goto loc_80524358;
}

loc_8052432C:
{
    r3 = MemoryInline::FlatRead32((r13 + -13444));
    r0 = MemoryInline::FlatRead8(r3);
}

loc_80524338:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_80524348;
    }
}

loc_8052433C:
{
    r0 = -3;
    MemoryInline::FlatWrite32((r13 + -13544), r0);
    goto loc_80524358;
}

loc_80524348:
{
    r3 = 5;
    r0 = 0;
    MemoryInline::FlatWrite32((r13 + -13544), r3);
    MemoryInline::FlatWrite16((r13 + -13516), static_cast<uint16_t>(r0));
}

loc_80524358:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80524290(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80524290_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000027FB gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80524290 func_80524290 preserves=true fpr_mask=0x00000000
