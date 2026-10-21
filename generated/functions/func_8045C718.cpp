#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8045C718_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r6_stbu_ea_0 = 0;
    uint32_t r6_stbu_ea_1 = 0;
    uint32_t r6_stbu_ea_10 = 0;
    uint32_t r6_stbu_ea_2 = 0;
    uint32_t r6_stbu_ea_3 = 0;
    uint32_t r6_stbu_ea_4 = 0;
    uint32_t r6_stbu_ea_5 = 0;
    uint32_t r6_stbu_ea_6 = 0;
    uint32_t r6_stbu_ea_7 = 0;
    uint32_t r6_stbu_ea_8 = 0;
    uint32_t r6_stbu_ea_9 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];

    MKW_GUEST_ENTER(0x8045C718u);
    goto loc_8045C718;

loc_8045C718:
{
}

loc_8045C71C:
{
    r8 = 0;
    MemoryInline::FlatWrite8((r4 + -1), static_cast<uint8_t>(r8));
    r6 = (r4 + -1);
    r7 = 0;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8045C75C;
    }
}

loc_8045C730:
{
    r0 = MemoryInline::FlatRead32((r5 + 12));
}

loc_8045C738:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8045C75C;
    }
}

loc_8045C73C:
{
    r0 = MemoryInline::FlatRead8((r5 + 3));
}

loc_8045C744:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8045C754;
    }
}

loc_8045C748:
{
    r0 = MemoryInline::FlatRead8((r5 + 5));
}

loc_8045C750:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(111))) {
        goto loc_8045C75C;
    }
}

loc_8045C754:
{
    r3 = r6;
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8045C75C:
{
    r9 = MemoryInline::FlatRead8((r5 + 5));
}

loc_8045C764:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(100))) {
        goto loc_8045C794;
    }
}

loc_8045C768:
{
}

loc_8045C76C:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(105))) {
        goto loc_8045C794;
    }
}

loc_8045C770:
{
}

loc_8045C774:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(111))) {
        goto loc_8045C7C0;
    }
}

loc_8045C778:
{
}

loc_8045C77C:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(117))) {
        goto loc_8045C7D0;
    }
}

loc_8045C780:
{
}

loc_8045C784:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(120))) {
        goto loc_8045C7E0;
    }
}

loc_8045C788:
{
}

loc_8045C78C:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(88))) {
        goto loc_8045C7E0;
    }
}

loc_8045C790:
{
    goto loc_8045C7EC;
}

loc_8045C794:
{
}

loc_8045C798:
{
    r0 = 10;
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_8045C7EC;
    }
}

loc_8045C7A0:
{
    r9 = (static_cast<int32_t>(r3) >> 31);
    r8 = 0x80000000u;
    r8 = (r9 ^ r8);
    r8 = (r3 | r8);
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_8045C7B8;
    }
}

loc_8045C7B4:
{
    r3 = (0 - r3);
}

loc_8045C7B8:
{
    r8 = 1;
    goto loc_8045C7EC;
}

loc_8045C7C0:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r5 + 1), static_cast<uint8_t>(r0));
    r0 = 8;
    goto loc_8045C7EC;
}

loc_8045C7D0:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r5 + 1), static_cast<uint8_t>(r0));
    r0 = 10;
    goto loc_8045C7EC;
}

loc_8045C7E0:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r5 + 1), static_cast<uint8_t>(r0));
    r0 = 16;
}

loc_8045C7EC:
{
    r9 = PPC_Divwu(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r9 = (r9 * r0);
    r11 = (r3 - r9);
    r3 = PPC_Divwu(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_8045C800:
{
    if ((static_cast<int32_t>(r11) >= static_cast<int32_t>(10))) {
        goto loc_8045C80C;
    }
}

loc_8045C804:
{
    r11 = (r11 + 48);
    goto loc_8045C824;
}

loc_8045C80C:
{
    r9 = MemoryInline::FlatRead8((r5 + 5));
    r10 = (r11 + 55);
}

loc_8045C818:
{
    if ((static_cast<uint32_t>(r9) != static_cast<uint32_t>(120))) {
        goto loc_8045C820;
    }
}

loc_8045C81C:
{
    r10 = (r11 + 87);
}

loc_8045C820:
{
    r11 = r10;
}

loc_8045C824:
{
}

loc_8045C828:
{
    MemoryInline::FlatWrite8((r6 + -1), static_cast<uint8_t>(r11));
    r6 = (r6 + -1);
    r7 = (r7 + 1);
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8045C7EC;
    }
}

loc_8045C838:
{
}

loc_8045C83C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(8))) {
        goto loc_8045C864;
    }
}

loc_8045C840:
{
    r3 = MemoryInline::FlatRead8((r5 + 3));
}

loc_8045C848:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8045C864;
    }
}

loc_8045C84C:
{
    r3 = MemoryInline::FlatRead8(r6);
}

loc_8045C854:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(48))) {
        goto loc_8045C864;
    }
}

loc_8045C858:
{
    r3 = 48;
    r6_stbu_ea_1 = (r6 + -1);
    MemoryInline::FlatWrite8(r6_stbu_ea_1, static_cast<uint8_t>(r3));
    r6 = r6_stbu_ea_1;
    r7 = (r7 + 1);
}

loc_8045C864:
{
    r3 = MemoryInline::FlatRead8(r5);
}

loc_8045C86C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(2))) {
        goto loc_8045C8B8;
    }
}

loc_8045C870:
{
    r3 = MemoryInline::FlatRead32((r5 + 8));
}

loc_8045C878:
{
    MemoryInline::FlatWrite32((r5 + 12), r3);
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8045C88C;
    }
}

loc_8045C880:
{
    r3 = MemoryInline::FlatRead8((r5 + 1));
}

loc_8045C888:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8045C898;
    }
}

loc_8045C88C:
{
    r3 = MemoryInline::FlatRead32((r5 + 12));
    r3 = (r3 + -1);
    MemoryInline::FlatWrite32((r5 + 12), r3);
}

loc_8045C898:
{
}

loc_8045C89C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(16))) {
        goto loc_8045C8B8;
    }
}

loc_8045C8A0:
{
    r3 = MemoryInline::FlatRead8((r5 + 3));
}

loc_8045C8A8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8045C8B8;
    }
}

loc_8045C8AC:
{
    r3 = MemoryInline::FlatRead32((r5 + 12));
    r3 = (r3 + -2);
    MemoryInline::FlatWrite32((r5 + 12), r3);
}

loc_8045C8B8:
{
    r9 = MemoryInline::FlatRead32((r5 + 12));
    r3 = (r4 - r6);
    r3 = (r9 + r3);
}

loc_8045C8C8:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(509))) {
        goto loc_8045C8D4;
    }
}

loc_8045C8CC:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8045C8D4:
{
    r4 = 48;
    goto loc_8045C8E4;
}

loc_8045C8DC:
{
    r6_stbu_ea_4 = (r6 + -1);
    MemoryInline::FlatWrite8(r6_stbu_ea_4, static_cast<uint8_t>(r4));
    r6 = r6_stbu_ea_4;
    r7 = (r7 + 1);
}

loc_8045C8E4:
{
    r3 = MemoryInline::FlatRead32((r5 + 12));
}

loc_8045C8EC:
{
    if ((static_cast<int32_t>(r7) < static_cast<int32_t>(r3))) {
        goto loc_8045C8DC;
    }
}

loc_8045C8F0:
{
}

loc_8045C8F4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(16))) {
        goto loc_8045C914;
    }
}

loc_8045C8F8:
{
    r0 = MemoryInline::FlatRead8((r5 + 3));
}

loc_8045C900:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8045C914;
    }
}

loc_8045C904:
{
    r3 = MemoryInline::FlatRead8((r5 + 5));
    r0 = 48;
    MemoryInline::FlatWrite8((r6 + -1), static_cast<uint8_t>(r3));
    r6_stbu_ea_5 = (r6 + -2);
    MemoryInline::FlatWrite8(r6_stbu_ea_5, static_cast<uint8_t>(r0));
    r6 = r6_stbu_ea_5;
}

loc_8045C914:
{
}

loc_8045C918:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_8045C928;
    }
}

loc_8045C91C:
{
    r0 = 45;
    r6_stbu_ea_7 = (r6 + -1);
    MemoryInline::FlatWrite8(r6_stbu_ea_7, static_cast<uint8_t>(r0));
    r6 = r6_stbu_ea_7;
    goto loc_8045C950;
}

loc_8045C928:
{
    r0 = MemoryInline::FlatRead8((r5 + 1));
}

loc_8045C930:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8045C940;
    }
}

loc_8045C934:
{
    r0 = 43;
    r6_stbu_ea_8 = (r6 + -1);
    MemoryInline::FlatWrite8(r6_stbu_ea_8, static_cast<uint8_t>(r0));
    r6 = r6_stbu_ea_8;
    goto loc_8045C950;
}

loc_8045C940:
{
}

loc_8045C944:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_8045C950;
    }
}

loc_8045C948:
{
    r0 = 32;
    r6_stbu_ea_9 = (r6 + -1);
    MemoryInline::FlatWrite8(r6_stbu_ea_9, static_cast<uint8_t>(r0));
    r6 = r6_stbu_ea_9;
}

loc_8045C950:
{
    r3 = r6;
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8045C718(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8045C718_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000FF9 gpr_write=0x00000FD9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8045C718 func_8045C718 preserves=true fpr_mask=0x00000000
