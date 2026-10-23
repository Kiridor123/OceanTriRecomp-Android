#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800CF2E4(CpuContext* ctx);
extern "C" uint32_t func_800CF2E4_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_802DA214(CpuContext* ctx);
extern "C" uint32_t func_802DA214_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_802DFD38(CpuContext* ctx);
extern "C" uint64_t func_802DFD38_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802E49DC(CpuContext* ctx);
extern "C" uint64_t func_802E49DC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_803A96F4(CpuContext* ctx);
extern "C" uint32_t func_803A96F4_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint32_t func_802E4B38_ra68_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r5, uint32_t arg_r6)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = arg_r5;
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->gpr[6] = arg_r6;

    goto loc_802E4B38;

loc_802E4B38:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r3 = 2;
    // inline leaf 0x800CFAF4 (16 guest instruction(s))
}

loc_inl0_0x800CFAF4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl0_0x800CFB04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x800CFB10;
    }
}

loc_inl0_0x800CFB08:
{
    r3 = 0;
    goto loc_inl0_cont_800CFAF4;
}

loc_inl0_0x800CFB10:
{
    r0 = (r3 & 255);
}

loc_inl0_0x800CFB18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl0_0x800CFB24;
    }
}

loc_inl0_0x800CFB1C:
{
    r3 = 0;
    goto loc_inl0_cont_800CFAF4;
}

loc_inl0_0x800CFB24:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl0_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    r30 = r3;
    r3 = 0x806C0000u;
    r29 = (r3 + 1136);
    r0 = 1;
    MemoryInline::FlatWriteRam8((r3 + 1136), static_cast<uint8_t>(r0));
    r31 = 0;
    MemoryInline::FlatWriteRam8((r29 + 89), static_cast<uint8_t>(r31));
    MemoryInline::FlatWriteRam8((r29 + 88), static_cast<uint8_t>(r31));
    ctx->lr = 0x802E4B7Cu;
    if constexpr (KnownRegArgsCpuCall<0x800CF2E4u>(&func_800CF2E4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_800CF2E4_B8A = func_800CF2E4_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800CF2E4_B8A;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800CF2E4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_802E4B80:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802E4B98;
    }
}

loc_802E4B84:
{
    MemoryInline::FlatWriteRam16((r29 + 92), static_cast<uint16_t>(r31));
    MemoryInline::FlatWriteRam8((r29 + 90), static_cast<uint8_t>(r31));
    // inline leaf 0x803B8E80 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -22424));
    r3 = MemoryInline::FlatRead32((r3 + 1240));
    // end of inlined leaf 0x803B8E80
    MemoryInline::FlatWriteRam32((r29 + 112), r3);
    goto loc_802E4BA8;
}

loc_802E4B98:
{
    MemoryInline::FlatWriteRam16((r29 + 92), static_cast<uint16_t>(r31));
    MemoryInline::FlatWriteRam8((r29 + 90), static_cast<uint8_t>(r31));
    ctx->lr = 0x802E4BA4u;
    if constexpr (KnownRegArgsCpuCall<0x803A96F4u>(&func_803A96F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_803A96F4_1109 = func_803A96F4_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803A96F4_1109;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803A96F4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    MemoryInline::FlatWriteRam32((r29 + 112), r3);
}

loc_802E4BA8:
{
    r0 = 0;
    MemoryInline::FlatWriteRam8((r29 + 116), static_cast<uint8_t>(r0));
    // inline leaf 0x800CF3E8 (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 39));
    // end of inlined leaf 0x800CF3E8
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r0 = (r0 * 2848);
    r4 = (r30 + r0);
    r3 = 0x806C0000u;
    r3 = (r3 + 328);
    ctx->lr = 0x802E4BCCu;
    if constexpr (KnownRegArgsCpuCall<0x802E49DCu>(&func_802E49DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802E49DC_1580 = func_802E49DC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802E49DC_1580);
        r4 = static_cast<uint32_t>(regargs_result_802E49DC_1580 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802E49DCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    ctx->lr = 0x802E4BD0u;
    if constexpr (KnownRegArgsCpuCall<0x802DFD38u>(&func_802DFD38)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802DFD38_18A4 = func_802DFD38_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802DFD38_18A4);
        r4 = static_cast<uint32_t>(regargs_result_802DFD38_18A4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802DFD38u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    ctx->lr = 0x802E4BD4u;
    if constexpr (KnownRegArgsCpuCall<0x802DA214u>(&func_802DA214)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802DA214_1BC8 = func_802DA214_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_802DA214_1BC8;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x802DA214u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return r3;
}

}

extern "C" void func_802E4B38(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_802E4B38_ra68_0_8_0(ctx, ctx->gpr[3], ctx->gpr[5], ctx->gpr[6]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x000020EA gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802E4B38 func_802E4B38 preserves=true fpr_mask=0x00000000
