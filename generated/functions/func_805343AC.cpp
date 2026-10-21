#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_805343AC_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x805343ACu);
    goto loc_805343AC;

loc_805343AC:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x8045747C (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    // end of inlined leaf 0x8045747C
    r27 = MemoryInline::FlatRead16((r4 + 12));
    r30 = 0;
    MemoryInline::FlatWrite32((r3 + 12), r4);
    r31 = r3;
}

loc_805343D4:
{
    r24 = r5;
    MemoryInline::FlatWrite32((r3 + 20), r30);
    r25 = r6;
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_80534494;
    }
}

loc_805343E4:
{
    r3 = MemoryInline::FlatRead32((r13 + -13312));
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(2));
    r4 = (r4_rot_1 & 262140);
    ctx->lr = 0x805343F0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x804C2B00u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
}

loc_805343F4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80534400;
    }
}

loc_805343F8:
{
    r3 = 0;
    goto loc_80534424;
}

loc_80534400:
{
    r4 = r3;
    ctr = r27;
}

loc_8053440C:
{
    if ((static_cast<uint32_t>(r27) <= static_cast<uint32_t>(0))) {
        goto loc_80534424;
    }
}

loc_80534410:
{
}

loc_80534414:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8053441C;
    }
}

loc_80534418:
{
    MemoryInline::FlatWrite32(r4, r30);
}

loc_8053441C:
{
    r4 = (r4 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80534410;
    }
}

loc_80534424:
{
}

loc_80534428:
{
    MemoryInline::FlatWrite32((r31 + 20), r3);
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80534494;
    }
}

loc_80534430:
{
    r3 = MemoryInline::FlatRead32((r31 + 12));
    r26 = 0;
    r27 = 0;
    r30 = 1953038336;
    r29 = (r3 + 20);
    r28 = r29;
    goto loc_80534484;
}

loc_8053444C:
{
    r12 = MemoryInline::FlatRead32(r24);
    r3 = r24;
    r0 = MemoryInline::FlatRead32(r28);
    r4 = (r30 + 28007);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    r6 = 0;
    r5 = (r29 + r0);
    ctr = r12;
    ctx->lr = 0x80534470u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    r4 = MemoryInline::FlatRead32((r31 + 20));
    r28 = (r28 + 4);
    r26 = (r26 + 1);
    r4_addr_2 = (r4 + r27);
    MemoryInline::FlatWrite32(r4_addr_2, r3);
    r27 = (r27 + 4);
}

loc_80534484:
{
    r3 = MemoryInline::FlatRead32((r31 + 12));
    r0 = MemoryInline::FlatRead16((r3 + 12));
}

loc_80534490:
{
    if ((static_cast<int32_t>(r26) < static_cast<int32_t>(r0))) {
        goto loc_8053444C;
    }
}

loc_80534494:
{
    r3 = MemoryInline::FlatRead32((r13 + -13312));
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r25), static_cast<uint32_t>(4));
    r4 = (r4_rot_3 & 1048560);
    ctx->lr = 0x805344A0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x804C2B00u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
}

loc_805344A4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_805344B0;
    }
}

loc_805344A8:
{
    r3 = 0;
    goto loc_805344E8;
}

loc_805344B0:
{
    r4 = r3;
    r0 = 0;
    ctr = r25;
}

loc_805344C0:
{
    if ((static_cast<uint32_t>(r25) <= static_cast<uint32_t>(0))) {
        goto loc_805344E8;
    }
}

loc_805344C4:
{
}

loc_805344C8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_805344E0;
    }
}

loc_805344CC:
{
    MemoryInline::FlatWrite32(r4, r0);
    MemoryInline::FlatWrite32((r4 + 4), r0);
    MemoryInline::FlatWrite32((r4 + 8), r0);
    MemoryInline::FlatWrite16((r4 + 12), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite8((r4 + 14), static_cast<uint8_t>(r0));
}

loc_805344E0:
{
    r4 = (r4 + 16);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_805344C4;
    }
}

loc_805344E8:
{
}

loc_805344EC:
{
    MemoryInline::FlatWrite32((r31 + 24), r3);
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_805344F8;
    }
}

loc_805344F4:
{
    MemoryInline::FlatWrite16((r31 + 28), static_cast<uint16_t>(r25));
}

loc_805344F8:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574C8 (9 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, true, false);
    // end of inlined leaf 0x804574C8
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_805343AC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_805343AC_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x805343AC func_805343AC preserves=true fpr_mask=0x00000000
