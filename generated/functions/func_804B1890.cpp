#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804B0550(CpuContext* ctx);
extern "C" uint64_t func_804B0550_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804D1330(CpuContext* ctx);
extern "C" uint32_t func_804D1330_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_804B1890_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    goto loc_804B1890;

loc_804B1890:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r27 = r3;
    r31 = r4;
    r28 = r5;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(6));
    r0 = (r0_rot_0 & -64);
    r3 = 0x80750000u;
    r3 = (r3 + -28640);
    r30 = (r3 + r0);
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x804D12F0
    r29 = r3;
    r0 = MemoryInline::FlatRead32((r30 + 12));
    r0 = (r0 & 16);
}

loc_804B18D0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804B194C;
    }
}

loc_804B18D4:
{
}

loc_804B18D8:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_804B193C;
    }
}

loc_804B18DC:
{
    r3 = r30;
    r4 = MemoryInline::FlatRead32((r30 + 36));
    ctr = r4;
}

loc_804B18EC:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_804B1914;
    }
}

loc_804B18F0:
{
    r0 = MemoryInline::FlatRead32((r3 + 40));
}

loc_804B18F8:
{
    if ((static_cast<uint32_t>(r31) != static_cast<uint32_t>(r0))) {
        goto loc_804B190C;
    }
}

loc_804B18FC:
{
    r3 = r29;
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl2_0x804D1330:
{
}

loc_inl2_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl2_0x804D1344;
    }
}

loc_inl2_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl2_0x804D1348;
}

loc_inl2_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl2_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_1 & 1);
}

loc_inl2_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
    r3 = 0;
    goto loc_804B1974;
}

loc_804B190C:
{
    r3 = (r3 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804B18F0;
    }
}

loc_804B1914:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(3));
    r0 = (r0_rot_1 & -8);
    r3 = (r30 + r0);
    MemoryInline::FlatWrite32((r3 + 44), r28);
    r0 = MemoryInline::FlatRead32((r30 + 36));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_2 & -8);
    r3 = (r30 + r0);
    MemoryInline::FlatWrite32((r3 + 40), r31);
    r3 = MemoryInline::FlatRead32((r30 + 36));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r30 + 36), r0);
}

loc_804B193C:
{
    r3 = r29;
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl3_0x804D1330:
{
}

loc_inl3_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl3_0x804D1344;
    }
}

loc_inl3_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl3_0x804D1348;
}

loc_inl3_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl3_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_2 & 1);
}

loc_inl3_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
    r3 = 0;
    goto loc_804B1974;
}

loc_804B194C:
{
    r0 = MemoryInline::FlatRead32((r30 + 12));
    r0 = (r0 | 16);
    MemoryInline::FlatWrite32((r30 + 12), r0);
    MemoryInline::FlatWrite32((r30 + 24), r31);
    r3 = r27;
    r4 = r30;
    ctx->lr = 0x804B1968u;
    if constexpr (KnownRegArgsCpuCall<0x804B0550u>(&func_804B0550)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_804B0550_144E = func_804B0550_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804B0550_144E);
        r4 = static_cast<uint32_t>(regargs_result_804B0550_144E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804B0550u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = r29;
    if constexpr (KnownRegArgsCpuCall<0x804D1330u>(&func_804D1330)) {
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        const auto regargs_result_804D1330_1780 = func_804D1330_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_804D1330_1780;
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804D1330u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = 1;
}

loc_804B1974:
{
    r11 = (r1 + 32);
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804B1890(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804B1890_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000203B gpr_write=0x0000083B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804B1890 func_804B1890 preserves=true fpr_mask=0x00000000
