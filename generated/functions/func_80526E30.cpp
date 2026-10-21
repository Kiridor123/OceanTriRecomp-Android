#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80523E80(CpuContext* ctx);
extern "C" uint64_t func_80523E80_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_80526E30_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x80526E30u);
    goto loc_80526E30;

loc_80526E30:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = r5;
    r29 = r4;
    r28 = r3;
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x804D12F0
    r31 = r3;
    // inline leaf 0x80523ED0 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -13544));
    // end of inlined leaf 0x80523ED0
}

loc_80526E68:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(-3))) {
        goto loc_80526E74;
    }
}

loc_80526E6C:
{
    r30 = -100;
    goto loc_80526EDC;
}

loc_80526E74:
{
}

loc_80526E78:
{
    if ((static_cast<uint32_t>(r28) <= static_cast<uint32_t>(3))) {
        goto loc_80526E84;
    }
}

loc_80526E7C:
{
    r30 = -1;
    goto loc_80526EDC;
}

loc_80526E84:
{
}

loc_80526E88:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(7))) {
        goto loc_80526E94;
    }
}

loc_80526E8C:
{
    r30 = -4;
    goto loc_80526EDC;
}

loc_80526E94:
{
    // inline leaf 0x80523DD0 (8 guest instruction(s))
}

loc_inl2_0x80523DD0:
{
    r4 = MemoryInline::FlatRead32((r13 + -13528));
    r3 = 0;
}

loc_inl2_0x80523DDC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x80523DE0:
{
    r0 = MemoryInline::FlatRead32(r4);
    r3 = r4;
    MemoryInline::FlatWrite32((r13 + -13528), r0);
    goto loc_inl2_cont_80523DD0;
}

loc_inl2_return:
{
}

loc_inl2_cont_80523DD0:
{
    // end of inlined leaf 0x80523DD0
}

loc_80526E9C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80526EA8;
    }
}

loc_80526EA0:
{
    r30 = -5;
    goto loc_80526EDC;
}

loc_80526EA8:
{
    r5 = 65536;
    r4 = 0x80520000u;
    r0 = (r5 + -26110);
    MemoryInline::FlatWrite16((r3 + 4), static_cast<uint16_t>(r0));
    r4 = (r4 + 15856);
    MemoryInline::FlatWrite16((r3 + 6), static_cast<uint16_t>(r28));
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 24), r4);
    MemoryInline::FlatWrite32((r3 + 28), r29);
    MemoryInline::FlatWrite32((r3 + 32), r30);
    MemoryInline::FlatWrite8((r3 + 36), static_cast<uint8_t>(r0));
    if constexpr (KnownRegArgsCpuCall<0x80523E80u>(&func_80523E80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80523E80_CE4 = func_80523E80_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80523E80_CE4);
        r4 = static_cast<uint32_t>(regargs_result_80523E80_CE4 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80523E80u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r30 = r3;
}

loc_80526EDC:
{
    r3 = r31;
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
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_1 & 1);
}

loc_inl3_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
    r3 = r30;
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80526E30(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80526E30_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000203B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80526E30 func_80526E30 preserves=true fpr_mask=0x00000000
