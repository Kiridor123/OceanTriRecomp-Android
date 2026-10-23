#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800A9724(CpuContext* ctx);
extern "C" uint32_t func_800A9724_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" void func_800A963C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_800A963C;

loc_800A963C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r27 = r3;
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 288), static_cast<uint8_t>(r0));
    r31 = 0;
    goto loc_800A966C;
}

loc_800A9664:
{
    r3 = r31;
    ctx->lr = 0x800A966Cu;
    if constexpr (KnownRegArgsCpuCall<0x800A9724u>(&func_800A9724)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800A9724_514 = func_800A9724_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800A9724_514;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x800A9724u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_800A966C:
{
    r3 = (r27 + 192);
    r4 = r31;
    // inline leaf 0x805022E0 (8 guest instruction(s))
}

loc_inl1_0x805022E0:
{
}

loc_inl1_0x805022E4:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x805022F0;
    }
}

loc_inl1_0x805022E8:
{
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_inl1_cont_805022E0;
}

loc_inl1_0x805022F0:
{
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl1_cont_805022E0:
{
    // end of inlined leaf 0x805022E0
    r31 = r3;
}

loc_800A9680:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800A9664;
    }
}

loc_800A9684:
{
    r0 = MemoryInline::FlatRead32((r27 + 188));
}

loc_800A968C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800A970C;
    }
}

loc_800A9690:
{
    r30 = 0;
    r31 = 1;
    goto loc_800A96F0;
}

loc_800A969C:
{
    r0 = MemoryInline::FlatRead8((r3 + 288));
}

loc_800A96A4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800A96F0;
    }
}

loc_800A96A8:
{
    r29 = MemoryInline::FlatRead32((r3 + 244));
    goto loc_800A96E8;
}

loc_800A96B0:
{
}

loc_800A96B4:
{
    if ((static_cast<uint32_t>(r29) != static_cast<uint32_t>(r27))) {
        goto loc_800A96E4;
    }
}

loc_800A96B8:
{
    MemoryInline::FlatWrite8((r30 + 288), static_cast<uint8_t>(r31));
    r28 = 0;
    goto loc_800A96CC;
}

loc_800A96C4:
{
    r3 = r28;
    ctx->lr = 0x800A96CCu;
    if constexpr (KnownRegArgsCpuCall<0x800A9724u>(&func_800A9724)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800A9724_DA0 = func_800A9724_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800A9724_DA0;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x800A9724u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_800A96CC:
{
    r3 = (r30 + 192);
    r4 = r28;
    // inline leaf 0x805022E0 (8 guest instruction(s))
}

loc_inl2_0x805022E0:
{
}

loc_inl2_0x805022E4:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl2_0x805022F0;
    }
}

loc_inl2_0x805022E8:
{
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_inl2_cont_805022E0;
}

loc_inl2_0x805022F0:
{
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl2_cont_805022E0:
{
    // end of inlined leaf 0x805022E0
    r28 = r3;
}

loc_800A96E0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800A96C4;
    }
}

loc_800A96E4:
{
    r29 = MemoryInline::FlatRead32((r29 + 244));
}

loc_800A96E8:
{
}

loc_800A96EC:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_800A96B0;
    }
}

loc_800A96F0:
{
    r3 = MemoryInline::FlatRead32((r27 + 188));
    r3 = (r3 + 36);
    r4 = r30;
    // inline leaf 0x805022E0 (8 guest instruction(s))
}

loc_inl3_0x805022E0:
{
}

loc_inl3_0x805022E4:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl3_0x805022F0;
    }
}

loc_inl3_0x805022E8:
{
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_inl3_cont_805022E0;
}

loc_inl3_0x805022F0:
{
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl3_cont_805022E0:
{
    // end of inlined leaf 0x805022E0
    r30 = r3;
}

loc_800A9708:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800A969C;
    }
}

loc_800A970C:
{
    r11 = (r1 + 32);
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000201B gpr_write=0x0000081B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800A963C func_800A963C preserves=true fpr_mask=0x00000000
