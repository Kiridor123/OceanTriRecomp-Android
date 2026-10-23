#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802A6498(CpuContext* ctx);
extern "C" uint32_t func_802A6498_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_802A6514(CpuContext* ctx);
extern "C" uint64_t func_802A6514_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" MkwStateFreeResult2 func_802A6498_statefree(uint32_t);

extern "C" uint64_t func_802A4F5C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;

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

    goto loc_802A4F5C;

loc_802A4F5C:
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
    r30 = (r3 + 36);
    r29 = 0;
    r31 = 0;
}

loc_802A4F84:
{
    MemoryInline::FlatWrite8((r30 + 1), static_cast<uint8_t>(r31));
    MemoryInline::FlatWrite8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 11;
    r4 = (r29 & 65535);
    // inline leaf 0x8029F844 (10 guest instruction(s))
    r5 = 0x806B0000u;
    r5 = (r5 + -3160);
    r0 = (r3 & 65535);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = (r5 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 1644));
    r0 = (r4 & 65535);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    // end of inlined leaf 0x8029F844
    MemoryInline::FlatWrite32((r30 + 8), r3);
    MemoryInline::FlatWrite32((r30 + 12), r31);
    r29 = (r29 + 1);
    r30 = (r30 + 24);
}

loc_802A4FAC:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(3))) {
        goto loc_802A4F84;
    }
}

loc_802A4FB0:
{
    r3 = MemoryInline::FlatRead32((r27 + 400));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x802A6498u) && KnownTranslatedCpuCall<0x802A6498u>::kAvailable && !KnownTranslatedCpuCall<0x802A6498u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x802A6498u>()) {
        const auto state_free_result_802A6498_B4D = func_802A6498_statefree(r3);
        r0 = static_cast<uint32_t>(state_free_result_802A6498_B4D[0]);
        r3 = static_cast<uint32_t>(state_free_result_802A6498_B4D[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x802A6498u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    }
}

loc_802A4FBC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802A4FF0;
    }
}

loc_802A4FC0:
{
    r31 = 1;
    MemoryInline::FlatWrite8((r27 + 62), static_cast<uint8_t>(r31));
    MemoryInline::FlatWrite8((r27 + 38), static_cast<uint8_t>(r31));
    r0 = MemoryInline::FlatRead8((r27 + 22));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_802A4FD8:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(3))) {
        goto loc_802A4FF0;
    }
}

loc_802A4FDC:
{
    r3 = r27;
    ctx->lr = 0x802A4FE4u;
    if constexpr (KnownRegArgsCpuCall<0x802A6514u>(&func_802A6514)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802A6514_1089 = func_802A6514_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802A6514_1089);
        r4 = static_cast<uint32_t>(regargs_result_802A6514_1089 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802A6514u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_802A4FE8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802A4FF0;
    }
}

loc_802A4FEC:
{
    MemoryInline::FlatWrite8((r27 + 86), static_cast<uint8_t>(r31));
}

loc_802A4FF0:
{
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r28)));
    r0 = MemoryInline::FlatRead8((r27 + 22));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_802A5000:
{
    if ((static_cast<int32_t>(r5) > static_cast<int32_t>(r0))) {
        goto loc_802A5038;
    }
}

loc_802A5004:
{
    r0 = MemoryInline::FlatRead8((r27 + 1));
}

loc_802A500C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_802A5024;
    }
}

loc_802A5010:
{
    r4 = 1;
    r0 = (r5 * 24);
    r3 = (r27 + r0);
    MemoryInline::FlatWrite8((r3 + 37), static_cast<uint8_t>(r4));
    goto loc_802A5038;
}

loc_802A5024:
{
    r3 = -391905280;
    r4 = (r3 + 4095);
    r0 = (r5 * 24);
    r3 = (r27 + r0);
    MemoryInline::FlatWrite32((r3 + 48), r4);
}

loc_802A5038:
{
    r11 = (r1 + 32);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
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

extern "C" void func_802A4F5C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802A4F5C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000087B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802A4F5C func_802A4F5C preserves=true fpr_mask=0x00000000
