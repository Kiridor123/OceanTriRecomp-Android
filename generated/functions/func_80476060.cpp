#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80476060_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->gpr[4] = arg_r4;
    ctx->gpr[5] = arg_r5;
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;
    uint32_t ctr = ctx->ctr;

    goto loc_80476060;

loc_80476060:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457480 (8 guest instruction(s))
    // end of inlined leaf 0x80457480
    r25 = 0;
    r30 = r3;
    r31 = 0;
    r29 = r3;
    r28 = r3;
}

loc_80476088:
{
    r3 = MemoryInline::FlatRead32(r30);
}

loc_80476090:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804760A4;
    }
}

loc_80476094:
{
    r12 = MemoryInline::FlatRead32((r13 + -20724));
    ctr = r12;
    ctx->lr = 0x804760A0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    MemoryInline::FlatWrite32(r30, r31);
}

loc_804760A4:
{
    r3 = MemoryInline::FlatRead32((r30 + 44));
}

loc_804760AC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804760C0;
    }
}

loc_804760B0:
{
    r12 = MemoryInline::FlatRead32((r13 + -20724));
    ctr = r12;
    ctx->lr = 0x804760BCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    MemoryInline::FlatWrite32((r30 + 44), r31);
}

loc_804760C0:
{
    r27 = r29;
    r26 = 0;
}

loc_804760C8:
{
    r3 = MemoryInline::FlatRead32((r27 + 68));
}

loc_804760D0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804760E4;
    }
}

loc_804760D4:
{
    r12 = MemoryInline::FlatRead32((r13 + -20724));
    ctr = r12;
    ctx->lr = 0x804760E0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    MemoryInline::FlatWrite32((r27 + 68), r31);
}

loc_804760E4:
{
    r26 = (r26 + 1);
    r27 = (r27 + 4);
}

loc_804760F0:
{
    if ((static_cast<uint32_t>(r26) < static_cast<uint32_t>(3))) {
        goto loc_804760C8;
    }
}

loc_804760F4:
{
    r27 = r28;
    r26 = 0;
}

loc_804760FC:
{
    r3 = MemoryInline::FlatRead32((r27 + 152));
}

loc_80476104:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80476118;
    }
}

loc_80476108:
{
    r12 = MemoryInline::FlatRead32((r13 + -20724));
    ctr = r12;
    ctx->lr = 0x80476114u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    MemoryInline::FlatWrite32((r27 + 152), r31);
}

loc_80476118:
{
    r26 = (r26 + 1);
    r27 = (r27 + 4);
}

loc_80476124:
{
    if ((static_cast<uint32_t>(r26) < static_cast<uint32_t>(2))) {
        goto loc_804760FC;
    }
}

loc_80476128:
{
    r3 = MemoryInline::FlatRead32((r30 + 200));
}

loc_80476130:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80476144;
    }
}

loc_80476134:
{
    r12 = MemoryInline::FlatRead32((r13 + -20724));
    ctr = r12;
    ctx->lr = 0x80476140u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    MemoryInline::FlatWrite32((r30 + 200), r31);
}

loc_80476144:
{
    r25 = (r25 + 1);
    r29 = (r29 + 12);
}

loc_80476150:
{
    r28 = (r28 + 8);
    r30 = (r30 + 4);
    if ((static_cast<uint32_t>(r25) < static_cast<uint32_t>(3))) {
        goto loc_80476088;
    }
}

loc_8047615C:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574CC (8 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -28), 0, 36u, true, false);
    // end of inlined leaf 0x804574CC
    r0 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | r3;
}

}

extern "C" void func_80476060(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80476060_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80476060 func_80476060 preserves=true fpr_mask=0x00000000
