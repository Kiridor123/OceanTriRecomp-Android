#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8034C7E8_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_10 = 0;
    uint32_t r3_rot_11 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8034C7E8;

loc_8034C7E8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r5 = 1;
    r0 = (r3 & 255);
}

loc_8034C800:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_8034C9E8;
    }
}

loc_8034C804:
{
    r0 = (r4 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(50));
}

loc_8034C80C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8034C900;
    }
}

loc_8034C810:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8034C850;
    }
}

loc_8034C814:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(32));
}

loc_8034C818:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8034C88C;
    }
}

loc_8034C81C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8034C838;
    }
}

loc_8034C820:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(11));
}

loc_8034C824:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8034C8B0;
    }
}

loc_8034C828:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8034CA10;
    }
}

loc_8034C82C:
{
}

loc_8034C830:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(10))) {
        goto loc_8034C88C;
    }
}

loc_8034C834:
{
    goto loc_8034CA10;
}

loc_8034C838:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(42));
}

loc_8034C83C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8034C8D4;
    }
}

loc_8034C840:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8034CA10;
    }
}

loc_8034C844:
{
}

loc_8034C848:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(34))) {
        goto loc_8034CA10;
    }
}

loc_8034C84C:
{
    goto loc_8034C8B0;
}

loc_8034C850:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(105));
}

loc_8034C854:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8034C958;
    }
}

loc_8034C858:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8034C874;
    }
}

loc_8034C85C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(74));
}

loc_8034C860:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8034C910;
    }
}

loc_8034C864:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8034CA10;
    }
}

loc_8034C868:
{
}

loc_8034C86C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(104))) {
        goto loc_8034C934;
    }
}

loc_8034C870:
{
    goto loc_8034CA10;
}

loc_8034C874:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(107));
}

loc_8034C878:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8034C9A0;
    }
}

loc_8034C87C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8034C97C;
    }
}

loc_8034C880:
{
}

loc_8034C884:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(112))) {
        goto loc_8034CA10;
    }
}

loc_8034C888:
{
    goto loc_8034C9C4;
}

loc_8034C88C:
{
    // inline leaf 0x800D076C (7 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 2003));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_3 & 134217727);
    // end of inlined leaf 0x800D076C
}

loc_8034C894:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8034C8A8;
    }
}

loc_8034C898:
{
    r3 = 14;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8004D2E0u>(ctx);
    r3 = ctx->gpr[3];
    r5 = r3;
    goto loc_8034CA10;
}

loc_8034C8A8:
{
    r5 = 1;
    goto loc_8034CA10;
}

loc_8034C8B0:
{
    // inline leaf 0x800D076C (7 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 2003));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_2 & 134217727);
    // end of inlined leaf 0x800D076C
}

loc_8034C8B8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8034C8CC;
    }
}

loc_8034C8BC:
{
    r3 = 15;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8004D2E0u>(ctx);
    r3 = ctx->gpr[3];
    r5 = r3;
    goto loc_8034CA10;
}

loc_8034C8CC:
{
    r5 = 1;
    goto loc_8034CA10;
}

loc_8034C8D4:
{
    // inline leaf 0x800D076C (7 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 2003));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 134217727);
    // end of inlined leaf 0x800D076C
}

loc_8034C8DC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8034C8F0;
    }
}

loc_8034C8E0:
{
    r3 = 2004;
    ctx->lr = 0x8034C8E8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8004D770u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    r5 = r3;
    goto loc_8034CA10;
}

loc_8034C8F0:
{
    r3 = 14001;
    ctx->lr = 0x8034C8F8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8004D770u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    r5 = r3;
    goto loc_8034CA10;
}

loc_8034C900:
{
    r3 = 17;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8004D2E0u>(ctx);
    r3 = ctx->gpr[3];
    r5 = r3;
    goto loc_8034CA10;
}

loc_8034C910:
{
    // inline leaf 0x800D076C (7 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 2003));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_5 & 134217727);
    // end of inlined leaf 0x800D076C
}

loc_8034C918:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8034C924;
    }
}

loc_8034C91C:
{
    r5 = -1;
    goto loc_8034CA10;
}

loc_8034C924:
{
    r3 = 16;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8004D2E0u>(ctx);
    r3 = ctx->gpr[3];
    r5 = r3;
    goto loc_8034CA10;
}

loc_8034C934:
{
    // inline leaf 0x800D076C (7 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 2003));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_4 & 134217727);
    // end of inlined leaf 0x800D076C
}

loc_8034C93C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8034C950;
    }
}

loc_8034C940:
{
    r3 = 25;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8004D2E0u>(ctx);
    r3 = ctx->gpr[3];
    r5 = r3;
    goto loc_8034CA10;
}

loc_8034C950:
{
    r5 = -1;
    goto loc_8034CA10;
}

loc_8034C958:
{
    // inline leaf 0x800D076C (7 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 2003));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_9 & 134217727);
    // end of inlined leaf 0x800D076C
}

loc_8034C960:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8034C974;
    }
}

loc_8034C964:
{
    r3 = 26;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8004D2E0u>(ctx);
    r3 = ctx->gpr[3];
    r5 = r3;
    goto loc_8034CA10;
}

loc_8034C974:
{
    r5 = -1;
    goto loc_8034CA10;
}

loc_8034C97C:
{
    // inline leaf 0x800D076C (7 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 2003));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_7 & 134217727);
    // end of inlined leaf 0x800D076C
}

loc_8034C984:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8034C998;
    }
}

loc_8034C988:
{
    r3 = 28;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8004D2E0u>(ctx);
    r3 = ctx->gpr[3];
    r5 = r3;
    goto loc_8034CA10;
}

loc_8034C998:
{
    r5 = -1;
    goto loc_8034CA10;
}

loc_8034C9A0:
{
    // inline leaf 0x800D076C (7 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 2003));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_8 & 134217727);
    // end of inlined leaf 0x800D076C
}

loc_8034C9A8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8034C9BC;
    }
}

loc_8034C9AC:
{
    r3 = 28;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8004D2E0u>(ctx);
    r3 = ctx->gpr[3];
    r5 = r3;
    goto loc_8034CA10;
}

loc_8034C9BC:
{
    r5 = -1;
    goto loc_8034CA10;
}

loc_8034C9C4:
{
    // inline leaf 0x800D076C (7 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 2003));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_6 & 134217727);
    // end of inlined leaf 0x800D076C
}

loc_8034C9CC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8034C9E0;
    }
}

loc_8034C9D0:
{
    r3 = 31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8004D2E0u>(ctx);
    r3 = ctx->gpr[3];
    r5 = r3;
    goto loc_8034CA10;
}

loc_8034C9E0:
{
    r5 = -1;
    goto loc_8034CA10;
}

loc_8034C9E8:
{
}

loc_8034C9EC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8034CA10;
    }
}

loc_8034C9F0:
{
    r0 = (r4 & 255);
}

loc_8034C9F8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(12))) {
        goto loc_8034CA10;
    }
}

loc_8034C9FC:
{
    // inline leaf 0x800D076C (7 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 2003));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_10 & 134217727);
    // end of inlined leaf 0x800D076C
}

loc_8034CA04:
{
    r5 = 1;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8034CA10;
    }
}

loc_8034CA0C:
{
    r5 = -1;
}

loc_8034CA10:
{
    r3 = r5;
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8034C7E8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8034C7E8_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8034C7E8 func_8034C7E8 preserves=true fpr_mask=0x00000000
