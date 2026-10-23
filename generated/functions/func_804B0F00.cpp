#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804D1330(CpuContext* ctx);
extern "C" uint32_t func_804D1330_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_804D1740(CpuContext* ctx);
extern "C" uint64_t func_804D1740_ra8_0_18_0(CpuContext*, uint32_t);

extern "C" uint64_t func_804B0F00_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;

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

    goto loc_804B0F00;

loc_804B0F00:
{
    MemoryHw::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryHw::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r29 = r3;
    r27 = r4;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(6));
    r0 = (r0_rot_0 & -64);
    r4 = 0x80750000u;
    r4 = (r4 + -28640);
    r31 = (r4 + r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x804B0D80u>(ctx);
    r3 = ctx->gpr[3];
}

loc_804B0F34:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804B0F54;
    }
}

loc_804B0F38:
{
    r0 = MemoryHw::FlatRead32((r31 + 32));
}

loc_804B0F40:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804B0F54;
    }
}

loc_804B0F44:
{
    r3 = r29;
    r4 = 0;
    r5 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x804B1AA0u>(ctx);
    r3 = ctx->gpr[3];
}

loc_804B0F54:
{
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x804D12F0
    r30 = r3;
    r0 = MemoryHw::FlatRead32((r31 + 32));
}

loc_804B0F64:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804B0F74;
    }
}

loc_804B0F68:
{
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
    goto loc_804B1000;
}

loc_804B0F74:
{
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_2 & 1);
    // end of inlined leaf 0x804D12F0
    r28 = r3;
    r0 = MemoryHw::FlatRead32((r31 + 12));
    r0 = (r0 & 8);
}

loc_804B0F84:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804B0F98;
    }
}

loc_804B0F88:
{
    r3 = r29;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x804B0D80u>(ctx);
    r3 = ctx->gpr[3];
}

loc_804B0F94:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804B0FA8;
    }
}

loc_804B0F98:
{
    r3 = r28;
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
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_3 & 1);
}

loc_inl4_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
    r29 = 0;
    goto loc_804B0FF4;
}

loc_804B0FA8:
{
    r3 = (r29 * 20);
    r0 = -855638016;
    r3 = (r0 + r3);
    r0 = MemoryHw::FlatRead32((r3 + 26624));
    r0 = (r0 & 2037);
}

loc_804B0FBC:
{
    r0 = (r0 | 2);
    MemoryHw::FlatWrite32((r3 + 26624), r0);
    MemoryHw::FlatWrite32((r31 + 8), r27);
    r3 = 1048576;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r0 = (r0 - r29);
    r3 = PPC_Srw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    ctx->lr = 0x804B0FDCu;
    if constexpr (KnownRegArgsCpuCall<0x804D1740u>(&func_804D1740)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_804D1740_160B = func_804D1740_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_804D1740_160B);
        r4 = static_cast<uint32_t>(regargs_result_804D1740_160B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804D1740u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = MemoryHw::FlatRead32((r31 + 12));
    r0 = (r0 | 8);
    MemoryHw::FlatWrite32((r31 + 12), r0);
    r3 = r28;
    if constexpr (KnownRegArgsCpuCall<0x804D1330u>(&func_804D1330)) {
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        const auto regargs_result_804D1330_19A8 = func_804D1330_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_804D1330_19A8;
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
    r29 = 1;
}

loc_804B0FF4:
{
    r3 = r30;
    if constexpr (KnownRegArgsCpuCall<0x804D1330u>(&func_804D1330)) {
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        const auto regargs_result_804D1330_1C29 = func_804D1330_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_804D1330_1C29;
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
    r3 = r29;
}

loc_804B1000:
{
    r11 = (r1 + 48);
    r0 = MemoryHw::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804B0F00(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804B0F00_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000083B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804B0F00 func_804B0F00 preserves=true fpr_mask=0x00000000
