#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_800E79F4_ra38_1f0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->fpr[4].d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;

    goto loc_800E79F4;

loc_800E79F4:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r26 = r4;
    r27 = r5;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800E4A58u>(ctx);
    r3 = ctx->gpr[3];
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800EDB88u>(ctx);
    r3 = ctx->gpr[3];
    r28 = r3;
    r30 = 1;
    r31 = 0;
    goto loc_800E7AE8;
}

loc_800E7A28:
{
    r0 = MemoryInline::FlatRead8((r28 + 25));
}

loc_800E7A30:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_800E7ADC;
    }
}

loc_800E7A34:
{
    r0 = MemoryInline::FlatRead32((r28 + 16));
}

loc_800E7A3C:
{
    if ((static_cast<uint32_t>(r26) != static_cast<uint32_t>(r0))) {
        goto loc_800E7ADC;
    }
}

loc_800E7A40:
{
    r0 = (r27 & 65535);
}

loc_800E7A48:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(16000))) {
        goto loc_800E7A50;
    }
}

loc_800E7A4C:
{
    r27 = 16000;
}

loc_800E7A50:
{
    r3 = r28;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800E5F9Cu>(ctx);
    r3 = ctx->gpr[3];
    r29 = r3;
    r4 = (r27 & 65535);
    r0 = MemoryInline::FlatRead16((r3 + 26));
}

loc_800E7A68:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(r0))) {
        goto loc_800E7ADC;
    }
}

loc_800E7A6C:
{
    r0 = MemoryInline::FlatRead8((r3 + 30));
}

loc_800E7A74:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800E7AB8;
    }
}

loc_800E7A78:
{
    r3 = r4;
    r4 = (r1 + 10);
    r5 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80471F10u>(ctx);
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r30));
    MemoryInline::FlatWriteRam16((r1 + 18), static_cast<uint16_t>(r31));
    r0 = MemoryInline::FlatRead16((r1 + 10));
    MemoryInline::FlatWriteRam16((r1 + 20), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r1 + 8));
    MemoryInline::FlatWriteRam16((r1 + 22), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r29 + 68));
    r4 = (r1 + 16);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80471E40u>(ctx);
    MemoryInline::FlatWrite8((r29 + 30), static_cast<uint8_t>(r30));
    MemoryInline::FlatWrite16((r29 + 26), static_cast<uint16_t>(r27));
    goto loc_800E7ADC;
}

loc_800E7AB8:
{
    r3 = r4;
    r4 = (r1 + 10);
    r5 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80471F10u>(ctx);
    r3 = MemoryInline::FlatRead32((r29 + 68));
    r4 = MemoryInline::FlatRead16((r1 + 10));
    r5 = MemoryInline::FlatRead16((r1 + 8));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80471EB0u>(ctx);
    MemoryInline::FlatWrite16((r29 + 26), static_cast<uint16_t>(r27));
}

loc_800E7ADC:
{
    r3 = r28;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800E61B0u>(ctx);
    r3 = ctx->gpr[3];
    r28 = r3;
}

loc_800E7AE8:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800E4A58u>(ctx);
    r3 = ctx->gpr[3];
    r4 = r28;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800E6164u>(ctx);
    r3 = ctx->gpr[3];
}

loc_800E7AF8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_800E7A28;
    }
}

loc_800E7AFC:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800E79F4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800E79F4_ra38_1f0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000083B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800E79F4 func_800E79F4 preserves=true fpr_mask=0x00000000
