#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" double func_804683A4_ra68_2_0_2(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r5, uint32_t arg_r6, double arg_f1)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t stackword1 = 0;
    uint32_t stackword2 = 0;
    uint32_t stackword3 = 0;
    uint32_t stackword4 = 0;
    uint32_t stackword5 = 0;
    uint32_t stackword6 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = arg_r5;
    uint32_t r6 = arg_r6;
    uint32_t r7 = ctx->gpr[7];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;

    goto loc_804683A4;

loc_804683A4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    MemoryInline::FlatWriteRamFloat64((r1 + 8), f1.d);
    r5 = MemoryInline::FlatRead32((r1 + 8));
    r6 = MemoryInline::FlatRead32((r1 + 12));
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(12));
    r4 = (r4_rot_0 & 2047);
    r7 = (r4 + -1023);
}

loc_804683C0:
{
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(20))) {
        goto loc_80468430;
    }
}

loc_804683C4:
{
}

loc_804683C8:
{
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(0))) {
        goto loc_804683E0;
    }
}

loc_804683CC:
{
    r4 = (r5 & -2147483648);
    r0 = 0;
    MemoryInline::FlatWrite32(r3, r4);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    goto loc_80468498;
}

loc_804683E0:
{
    r4 = 1048576;
    r0 = (r4 + -1);
    r4 = PPC_Sraw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r7));
    r0 = (r5 & r4);
    r0 = (r6 | r0);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80468414;
    }
}

loc_804683F8:
{
    r4 = (r5 & -2147483648);
    r0 = 0;
    stackword1 = r4;
    MemoryInline::FlatWriteRam32((r1 + 8), r4);
    stackword2 = r0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    MemoryInline::FlatWriteFloat64(r3, f1.d);
    f1.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword1), static_cast<uint32_t>(stackword2));
    goto loc_80468498;
}

loc_80468414:
{
    r4 = (r5 & ~r4);
    r0 = 0;
    MemoryInline::FlatWrite32(r3, r4);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    f0.d = MemoryInline::FlatReadFloat64(r3);
    f1.d = (f1.d - f0.d);
    goto loc_80468498;
}

loc_80468430:
{
}

loc_80468434:
{
    if ((static_cast<int32_t>(r7) <= static_cast<int32_t>(51))) {
        goto loc_80468454;
    }
}

loc_80468438:
{
    r4 = (r5 & -2147483648);
    r0 = 0;
    stackword3 = r4;
    MemoryInline::FlatWriteRam32((r1 + 8), r4);
    stackword4 = r0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    MemoryInline::FlatWriteFloat64(r3, f1.d);
    f1.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword3), static_cast<uint32_t>(stackword4));
    goto loc_80468498;
}

loc_80468454:
{
    r0 = (r7 + -20);
    r4 = -1;
    r4 = PPC_Srw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
    r0 = (r6 & r4);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80468484;
    }
}

loc_80468468:
{
    r4 = (r5 & -2147483648);
    r0 = 0;
    stackword5 = r4;
    MemoryInline::FlatWriteRam32((r1 + 8), r4);
    stackword6 = r0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    MemoryInline::FlatWriteFloat64(r3, f1.d);
    f1.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword5), static_cast<uint32_t>(stackword6));
    goto loc_80468498;
}

loc_80468484:
{
    r0 = (r6 & ~r4);
    MemoryInline::FlatWrite32(r3, r5);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    f0.d = MemoryInline::FlatReadFloat64(r3);
    f1.d = (f1.d - f0.d);
}

loc_80468498:
{
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    return f1.d;
}

}

extern "C" void func_804683A4(CpuContext* MKW_RESTRICT ctx)
{
    double result;
    [[clang::noinline]] result = func_804683A4_ra68_2_0_2(ctx, ctx->gpr[3], ctx->gpr[5], ctx->gpr[6], ctx->fpr[1].d);
    ctx->fpr[1].d = result;
}

// RECOMP_GUEST_ABI gpr_read=0x000000EA gpr_write=0x000000F3 gpr_return=0x00000010 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804683A4 func_804683A4 preserves=true fpr_mask=0x00000000
