#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80522610_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->gpr[5] = arg_r5;
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x80522610u);
    goto loc_80522610;

loc_80522610:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r27 = MemoryInline::FlatRead32((r13 + -13584));
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r27), static_cast<int32_t>(0));
}

loc_8052262C:
{
    if (((cr & 0x02000000u) != 0)) {
        goto loc_80522708;
    }
}

loc_80522630:
{
    r0 = MemoryInline::FlatRead32((r13 + -13600));
}

loc_80522638:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80522644;
    }
}

loc_8052263C:
{
    if (((cr & 0x02000000u) != 0)) {
        goto loc_80522644;
    }
}

loc_80522640:
{
    goto loc_80522648;
}

loc_80522644:
{
    r27 = 0;
}

loc_80522648:
{
}

loc_8052264C:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_805226EC;
    }
}

loc_80522650:
{
    r0 = (r0 * 320);
    r31 = 0;
    r30 = (r27 + r0);
    goto loc_805226E4;
}

loc_80522660:
{
}

loc_80522664:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_805226E0;
    }
}

loc_80522668:
{
    r29 = (r27 + 28);
}

loc_8052266C:
{
    r28 = MemoryInline::FlatRead32(r29);
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_805226C4;
    }
}

loc_80522674:
{
    r4 = MemoryInline::FlatRead32((r29 + 8));
}

loc_8052267C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80522690;
    }
}

loc_80522680:
{
}

loc_80522684:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_80522690;
    }
}

loc_80522688:
{
    r3 = r28;
    ctx->lr = 0x80522690u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    InvokeDirectCpu<0x804C2930u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80522690:
{
    r4 = MemoryInline::FlatRead32((r29 + 12));
}

loc_80522698:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_805226AC;
    }
}

loc_8052269C:
{
    r3 = MemoryInline::FlatRead32(r29);
}

loc_805226A4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_805226AC;
    }
}

loc_805226A8:
{
    ctx->lr = 0x805226ACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    InvokeDirectCpu<0x804C2930u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_805226AC:
{
}

loc_805226B0:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_805226C4;
    }
}

loc_805226B4:
{
    MemoryInline::FlatWrite32(r29, r31);
    MemoryInline::FlatWrite32((r29 + 4), r31);
    MemoryInline::FlatWrite32((r29 + 8), r31);
    MemoryInline::FlatWrite32((r29 + 12), r31);
}

loc_805226C4:
{
    r0 = MemoryInline::FlatRead32((r13 + -13592));
}

loc_805226CC:
{
    if ((static_cast<uint32_t>(r28) == static_cast<uint32_t>(r0))) {
        goto loc_805226E0;
    }
}

loc_805226D0:
{
}

loc_805226D4:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_805226E0;
    }
}

loc_805226D8:
{
    r3 = r28;
    ctx->lr = 0x805226E0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    InvokeDirectCpu<0x804C2850u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_805226E0:
{
    r27 = (r27 + 320);
}

loc_805226E4:
{
}

loc_805226E8:
{
    if ((static_cast<uint32_t>(r27) != static_cast<uint32_t>(r30))) {
        goto loc_80522660;
    }
}

loc_805226EC:
{
    r3 = MemoryInline::FlatRead32((r13 + -13592));
    r4 = MemoryInline::FlatRead32((r13 + -13584));
}

loc_805226F8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80522700;
    }
}

loc_805226FC:
{
    ctx->lr = 0x80522700u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    InvokeDirectCpu<0x804C2930u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80522700:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r13 + -13584), r0);
}

loc_80522708:
{
    r0 = MemoryInline::FlatRead32((r13 + -13588));
    r29 = MemoryInline::FlatRead32((r13 + -13600));
}

loc_80522714:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80522764;
    }
}

loc_80522718:
{
    r28 = 0x80790000u;
    r30 = 0;
    r28 = (r28 + 6744);
    r31 = 0;
    goto loc_80522754;
}

loc_8052272C:
{
    r4 = MemoryInline::FlatRead32(r28);
}

loc_80522734:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8052274C;
    }
}

loc_80522738:
{
    r3 = MemoryInline::FlatRead32((r13 + -13592));
}

loc_80522740:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80522748;
    }
}

loc_80522744:
{
    ctx->lr = 0x80522748u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    InvokeDirectCpu<0x804C2930u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80522748:
{
    MemoryInline::FlatWrite32(r28, r31);
}

loc_8052274C:
{
    r28 = (r28 + 4);
    r30 = (r30 + 1);
}

loc_80522754:
{
}

loc_80522758:
{
    if ((static_cast<uint32_t>(r30) < static_cast<uint32_t>(r29))) {
        goto loc_8052272C;
    }
}

loc_8052275C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r13 + -13588), r0);
}

loc_80522764:
{
    r3 = MemoryInline::FlatRead32((r13 + -13592));
}

loc_8052276C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8052277C;
    }
}

loc_80522770:
{
    ctx->lr = 0x80522774u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    InvokeDirectCpu<0x804C2850u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = 0;
    MemoryInline::FlatWrite32((r13 + -13592), r0);
}

loc_8052277C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r13 + -13600), r0);
    r11 = (r1 + 32);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80522610(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80522610_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80522610 func_80522610 preserves=true fpr_mask=0x00000000
