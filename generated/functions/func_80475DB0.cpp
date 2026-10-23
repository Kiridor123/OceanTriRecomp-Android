#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80475DB0_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_10 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
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

    goto loc_80475DB0;

loc_80475DB0:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457478 (10 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, false, true);
    // end of inlined leaf 0x80457478
    r23 = r3;
    r24 = 0;
    r30 = r23;
    r31 = 0;
    r29 = r23;
    r28 = r23;
}

loc_80475DDC:
{
    r0 = MemoryInline::FlatRead32((r23 + 28));
    r12 = MemoryInline::FlatRead32((r13 + -20728));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r3 = (r3_rot_2 & -4);
    ctr = r12;
    ctx->lr = 0x80475DF0u;
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
}

loc_80475DF4:
{
    MemoryInline::FlatWrite32(r30, r3);
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80475E04;
    }
}

loc_80475DFC:
{
    r3 = 0;
    goto loc_80475F0C;
}

loc_80475E04:
{
    r0 = MemoryInline::FlatRead32((r23 + 64));
}

loc_80475E0C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80475E34;
    }
}

loc_80475E10:
{
    r12 = MemoryInline::FlatRead32((r13 + -20728));
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r3 = (r3_rot_3 & -4);
    ctr = r12;
    ctx->lr = 0x80475E20u;
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
}

loc_80475E24:
{
    MemoryInline::FlatWrite32((r30 + 44), r3);
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80475E38;
    }
}

loc_80475E2C:
{
    r3 = 0;
    goto loc_80475F0C;
}

loc_80475E34:
{
    MemoryInline::FlatWrite32((r30 + 44), r31);
}

loc_80475E38:
{
    r26 = r23;
    r27 = r29;
    r25 = 0;
}

loc_80475E44:
{
    r0 = MemoryInline::FlatRead32((r26 + 128));
    r12 = MemoryInline::FlatRead32((r13 + -20728));
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r3 = (r3_rot_6 & -4);
    ctr = r12;
    ctx->lr = 0x80475E58u;
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
}

loc_80475E5C:
{
    MemoryInline::FlatWrite32((r27 + 68), r3);
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80475E6C;
    }
}

loc_80475E64:
{
    r3 = 0;
    goto loc_80475F0C;
}

loc_80475E6C:
{
    r25 = (r25 + 1);
    r27 = (r27 + 4);
}

loc_80475E78:
{
    r26 = (r26 + 4);
    if ((static_cast<uint32_t>(r25) < static_cast<uint32_t>(3))) {
        goto loc_80475E44;
    }
}

loc_80475E80:
{
    r27 = r23;
    r26 = r28;
    r25 = 0;
}

loc_80475E8C:
{
    r0 = MemoryInline::FlatRead32((r27 + 192));
    r12 = MemoryInline::FlatRead32((r13 + -20728));
    r3_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r3 = (r3_rot_8 & -4);
    ctr = r12;
    ctx->lr = 0x80475EA0u;
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
}

loc_80475EA4:
{
    MemoryInline::FlatWrite32((r26 + 152), r3);
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80475EB4;
    }
}

loc_80475EAC:
{
    r3 = 0;
    goto loc_80475F0C;
}

loc_80475EB4:
{
    r25 = (r25 + 1);
    r26 = (r26 + 4);
}

loc_80475EC0:
{
    r27 = (r27 + 4);
    if ((static_cast<uint32_t>(r25) < static_cast<uint32_t>(2))) {
        goto loc_80475E8C;
    }
}

loc_80475EC8:
{
    r0 = MemoryInline::FlatRead32((r30 + 236));
    r12 = MemoryInline::FlatRead32((r13 + -20728));
    r3_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r3 = (r3_rot_9 & -4);
    ctr = r12;
    ctx->lr = 0x80475EDCu;
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
}

loc_80475EE0:
{
    MemoryInline::FlatWrite32((r30 + 200), r3);
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80475EF0;
    }
}

loc_80475EE8:
{
    r3 = 0;
    goto loc_80475F0C;
}

loc_80475EF0:
{
    r24 = (r24 + 1);
    r29 = (r29 + 12);
}

loc_80475EFC:
{
    r28 = (r28 + 8);
    r30 = (r30 + 4);
    if ((static_cast<uint32_t>(r24) < static_cast<uint32_t>(3))) {
        goto loc_80475DDC;
    }
}

loc_80475F08:
{
    r3 = 1;
}

loc_80475F0C:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574C4 (10 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, true, false);
    // end of inlined leaf 0x804574C4
    r0 = MemoryInline::FlatRead32((r1 + 52));
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

extern "C" void func_80475DB0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80475DB0_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80475DB0 func_80475DB0 preserves=true fpr_mask=0x00000000
