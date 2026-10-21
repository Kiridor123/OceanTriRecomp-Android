#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80523E80(CpuContext* ctx);
extern "C" uint64_t func_80523E80_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_80526F10_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x80526F10u);
    goto loc_80526F10;

loc_80526F10:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r27 = r3;
    r28 = r4;
    r29 = r5;
    r30 = r6;
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

loc_80526F44:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(-3))) {
        goto loc_80526F50;
    }
}

loc_80526F48:
{
    r30 = -100;
    goto loc_80526FD8;
}

loc_80526F50:
{
}

loc_80526F54:
{
    if ((static_cast<uint32_t>(r27) <= static_cast<uint32_t>(2))) {
        goto loc_80526F60;
    }
}

loc_80526F58:
{
    r30 = -1;
    goto loc_80526FD8;
}

loc_80526F60:
{
}

loc_80526F64:
{
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(0))) {
        goto loc_80526F70;
    }
}

loc_80526F68:
{
    r30 = -1;
    goto loc_80526FD8;
}

loc_80526F70:
{
}

loc_80526F74:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(7))) {
        goto loc_80526F80;
    }
}

loc_80526F78:
{
    r30 = -4;
    goto loc_80526FD8;
}

loc_80526F80:
{
    // inline leaf 0x80523DD0 (8 guest instruction(s))
}

loc_inl3_0x80523DD0:
{
    r4 = MemoryInline::FlatRead32((r13 + -13528));
    r3 = 0;
}

loc_inl3_0x80523DDC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl3_return;
    }
}

loc_inl3_0x80523DE0:
{
    r0 = MemoryInline::FlatRead32(r4);
    r3 = r4;
    MemoryInline::FlatWrite32((r13 + -13528), r0);
    goto loc_inl3_cont_80523DD0;
}

loc_inl3_return:
{
}

loc_inl3_cont_80523DD0:
{
    // end of inlined leaf 0x80523DD0
}

loc_80526F88:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80526F94;
    }
}

loc_80526F8C:
{
    r30 = -5;
    goto loc_80526FD8;
}

loc_80526F94:
{
    r5 = 65536;
    r4 = 0x80520000u;
    r0 = (r5 + -26055);
    MemoryInline::FlatWrite16((r3 + 4), static_cast<uint16_t>(r0));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 131070);
    r5 = (r13 + -18864);
    r5_addr_1 = (r5 + r0);
    r0 = MemoryInline::FlatRead16(r5_addr_1);
    r4 = (r4 + 15856);
    MemoryInline::FlatWrite16((r3 + 6), static_cast<uint16_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 20), r28);
    MemoryInline::FlatWrite32((r3 + 24), r4);
    MemoryInline::FlatWrite32((r3 + 28), r29);
    MemoryInline::FlatWrite32((r3 + 32), r30);
    MemoryInline::FlatWrite8((r3 + 36), static_cast<uint8_t>(r0));
    if constexpr (KnownRegArgsCpuCall<0x80523E80u>(&func_80523E80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80523E80_102F = func_80523E80_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80523E80_102F);
        r4 = static_cast<uint32_t>(regargs_result_80523E80_102F >> 32);
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

loc_80526FD8:
{
    r3 = r31;
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
    r11 = (r1 + 32);
    r3 = r30;
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80526F10(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80526F10_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000207B gpr_write=0x0000083B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80526F10 func_80526F10 preserves=true fpr_mask=0x00000000
