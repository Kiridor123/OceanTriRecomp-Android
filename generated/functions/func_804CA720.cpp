#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_804CA720_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_804CA720;

loc_804CA720:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = MemoryInline::FlatRead32((r13 + -15136));
}

loc_804CA738:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804CA748;
    }
}

loc_804CA73C:
{
    r0 = MemoryInline::FlatRead32((r3 + 44));
}

loc_804CA744:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804CA754;
    }
}

loc_804CA748:
{
    r3 = 268435456;
    r3 = (r3 + 2);
    goto loc_804CA960;
}

loc_804CA754:
{
    r3 = 0x80000000u;
    r0 = MemoryInline::FlatRead16((r3 + 12518));
    r31 = MemoryInline::FlatRead32((r3 + 12600));
    r0 = (r0 & 32768);
}

loc_804CA764:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804CA87C;
    }
}

loc_804CA768:
{
    r0 = MemoryInline::FlatRead16((r3 + 12518));
    r3 = (r0 & -32769);
    r0 = (r3 + -2);
}

loc_804CA778:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_804CA79C;
    }
}

loc_804CA77C:
{
    r0 = (r3 + -513);
}

loc_804CA784:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_804CA7FC;
    }
}

loc_804CA788:
{
}

loc_804CA78C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(515))) {
        goto loc_804CA79C;
    }
}

loc_804CA790:
{
}

loc_804CA794:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(768))) {
        goto loc_804CA874;
    }
}

loc_804CA798:
{
    goto loc_804CA87C;
}

loc_804CA79C:
{
}

loc_804CA7A0:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_804CA7C8;
    }
}

loc_804CA7A4:
{
}

loc_804CA7A8:
{
    if ((static_cast<uint32_t>(r31) == static_cast<uint32_t>(1))) {
        goto loc_804CA7D0;
    }
}

loc_804CA7AC:
{
}

loc_804CA7B0:
{
    if ((static_cast<uint32_t>(r31) == static_cast<uint32_t>(2))) {
        goto loc_804CA7D8;
    }
}

loc_804CA7B4:
{
}

loc_804CA7B8:
{
    if ((static_cast<uint32_t>(r31) == static_cast<uint32_t>(16))) {
        goto loc_804CA7E0;
    }
}

loc_804CA7BC:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(17));
}

loc_804CA7C0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804CA7E8;
    }
}

loc_804CA7C4:
{
    goto loc_804CA7F0;
}

loc_804CA7C8:
{
    r3 = 16;
    goto loc_804CA960;
}

loc_804CA7D0:
{
    r3 = 17;
    goto loc_804CA960;
}

loc_804CA7D8:
{
    r3 = 18;
    goto loc_804CA960;
}

loc_804CA7E0:
{
    r3 = 32;
    goto loc_804CA960;
}

loc_804CA7E8:
{
    r3 = 33;
    goto loc_804CA960;
}

loc_804CA7F0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_804CA7FC;
    }
}

loc_804CA7F4:
{
    r3 = 33;
    goto loc_804CA960;
}

loc_804CA7FC:
{
}

loc_804CA800:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_804CA828;
    }
}

loc_804CA804:
{
}

loc_804CA808:
{
    if ((static_cast<uint32_t>(r31) == static_cast<uint32_t>(1))) {
        goto loc_804CA834;
    }
}

loc_804CA80C:
{
}

loc_804CA810:
{
    if ((static_cast<uint32_t>(r31) == static_cast<uint32_t>(2))) {
        goto loc_804CA840;
    }
}

loc_804CA814:
{
}

loc_804CA818:
{
    if ((static_cast<uint32_t>(r31) == static_cast<uint32_t>(16))) {
        goto loc_804CA84C;
    }
}

loc_804CA81C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(17));
}

loc_804CA820:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804CA858;
    }
}

loc_804CA824:
{
    goto loc_804CA864;
}

loc_804CA828:
{
    r3 = 268435456;
    r3 = (r3 + 16);
    goto loc_804CA960;
}

loc_804CA834:
{
    r3 = 268435456;
    r3 = (r3 + 17);
    goto loc_804CA960;
}

loc_804CA840:
{
    r3 = 268435456;
    r3 = (r3 + 18);
    goto loc_804CA960;
}

loc_804CA84C:
{
    r3 = 268435456;
    r3 = (r3 + 32);
    goto loc_804CA960;
}

loc_804CA858:
{
    r3 = 268435456;
    r3 = (r3 + 33);
    goto loc_804CA960;
}

loc_804CA864:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_804CA874;
    }
}

loc_804CA868:
{
    r3 = 268435456;
    r3 = (r3 + 33);
    goto loc_804CA960;
}

loc_804CA874:
{
    r3 = 256;
    goto loc_804CA960;
}

loc_804CA87C:
{
    // inline leaf 0x804D1DC0 (3 guest instruction(s))
    r3 = 0x80000000u;
    r3 = MemoryInline::FlatRead32((r3 + 12568));
    // end of inlined leaf 0x804D1DC0
}

loc_804CA884:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_804CA8AC;
    }
}

loc_804CA888:
{
}

loc_804CA88C:
{
    if ((static_cast<uint32_t>(r31) == static_cast<uint32_t>(1))) {
        goto loc_804CA8C8;
    }
}

loc_804CA890:
{
}

loc_804CA894:
{
    if ((static_cast<uint32_t>(r31) == static_cast<uint32_t>(2))) {
        goto loc_804CA8E4;
    }
}

loc_804CA898:
{
}

loc_804CA89C:
{
    if ((static_cast<uint32_t>(r31) == static_cast<uint32_t>(16))) {
        goto loc_804CA900;
    }
}

loc_804CA8A0:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(17));
}

loc_804CA8A4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804CA91C;
    }
}

loc_804CA8A8:
{
    goto loc_804CA938;
}

loc_804CA8AC:
{
    r0 = (r3 + -67108864);
    r3 = 268435456;
}

loc_804CA8B8:
{
    r3 = (r3 + 16);
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(0))) {
        goto loc_804CA960;
    }
}

loc_804CA8C0:
{
    r3 = 16;
    goto loc_804CA960;
}

loc_804CA8C8:
{
    r0 = (r3 + -67108864);
    r3 = 268435456;
}

loc_804CA8D4:
{
    r3 = (r3 + 17);
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(0))) {
        goto loc_804CA960;
    }
}

loc_804CA8DC:
{
    r3 = 17;
    goto loc_804CA960;
}

loc_804CA8E4:
{
    r0 = (r3 + -67108864);
    r3 = 268435456;
}

loc_804CA8F0:
{
    r3 = (r3 + 18);
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(0))) {
        goto loc_804CA960;
    }
}

loc_804CA8F8:
{
    r3 = 18;
    goto loc_804CA960;
}

loc_804CA900:
{
    r0 = (r3 + -67108864);
    r3 = 268435456;
}

loc_804CA90C:
{
    r3 = (r3 + 32);
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(0))) {
        goto loc_804CA960;
    }
}

loc_804CA914:
{
    r3 = 32;
    goto loc_804CA960;
}

loc_804CA91C:
{
    r0 = (r3 + -67108864);
    r3 = 268435456;
}

loc_804CA928:
{
    r3 = (r3 + 33);
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(0))) {
        goto loc_804CA960;
    }
}

loc_804CA930:
{
    r3 = 33;
    goto loc_804CA960;
}

loc_804CA938:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_804CA958;
    }
}

loc_804CA93C:
{
    r0 = (r3 + -67108864);
    r3 = 268435456;
}

loc_804CA948:
{
    r3 = (r3 + 33);
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(0))) {
        goto loc_804CA960;
    }
}

loc_804CA950:
{
    r3 = 33;
    goto loc_804CA960;
}

loc_804CA958:
{
    r3 = MemoryInline::FlatRead32((r13 + -15136));
    r3 = MemoryInline::FlatRead32((r3 + 44));
}

loc_804CA960:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->cr = cr;
    return r3;
}

}

extern "C" void func_804CA720(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_804CA720_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000200B gpr_write=0x0000000B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804CA720 func_804CA720 preserves=true fpr_mask=0x00000000
