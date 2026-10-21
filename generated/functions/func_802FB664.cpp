#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801E9BD8(CpuContext* ctx);
extern "C" uint64_t func_801E9BD8_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_801FE754(CpuContext* ctx);
extern "C" uint64_t func_801FE754_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_801FE8A8(CpuContext* ctx);
extern "C" uint32_t func_801FE8A8_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_802FB664_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    const uint32_t r31_entry = r31;
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x802FB664u);
    goto loc_802FB664;

loc_802FB664:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    // inline leaf 0x800D076C (7 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 2003));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_0 & 134217727);
    // end of inlined leaf 0x800D076C
}

loc_802FB680:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802FB6F0;
    }
}

loc_802FB684:
{
    r3 = (r31 & 255);
    r0 = (r3 + -27);
}

loc_802FB690:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(46))) {
        goto loc_802FB88C;
    }
}

loc_802FB694:
{
    r4 = 0x805E0000u;
    r4 = (r4 + -26888);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r4_addr_1 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_1);
    ctr = r4;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x802FB6ACu:
        goto loc_802FB6AC;
        break;
    case 0x802FB6B4u:
        goto loc_802FB6B4;
        break;
    case 0x802FB6C8u:
        goto loc_802FB6C8;
        break;
    case 0x802FB88Cu:
        goto loc_802FB88C;
        break;
    case 0x802FB6DCu:
        goto loc_802FB6DC;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[31] = r31;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_802FB6AC:
{
    r3 = 1;
    goto loc_802FB890;
}

loc_802FB6B4:
{
    // inline leaf 0x802FBA40 (7 guest instruction(s))
    r3 = 0x806B0000u;
    r3 = (r3 + -12348);
    r3 = MemoryInline::FlatRead8((r3 + 351));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 134217727);
    // end of inlined leaf 0x802FBA40
}

loc_802FB6BC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802FB88C;
    }
}

loc_802FB6C0:
{
    r3 = 1;
    goto loc_802FB890;
}

loc_802FB6C8:
{
    // inline leaf 0x802FBA40 (7 guest instruction(s))
    r3 = 0x806B0000u;
    r3 = (r3 + -12348);
    r3 = MemoryInline::FlatRead8((r3 + 351));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_2 & 134217727);
    // end of inlined leaf 0x802FBA40
}

loc_802FB6D0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802FB88C;
    }
}

loc_802FB6D4:
{
    r3 = 1;
    goto loc_802FB890;
}

loc_802FB6DC:
{
    ctx->lr = 0x802FB6E0u;
    if constexpr (KnownRegArgsCpuCall<0x801FE8A8u>(&func_801FE8A8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_801FE8A8_11D9 = func_801FE8A8_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_801FE8A8_11D9;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x801FE8A8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_802FB6E4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802FB88C;
    }
}

loc_802FB6E8:
{
    r3 = 1;
    goto loc_802FB890;
}

loc_802FB6F0:
{
    r3 = (r31 & 255);
}

loc_802FB6F8:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(25))) {
        goto loc_802FB88C;
    }
}

loc_802FB6FC:
{
    r4 = 0x805E0000u;
    r4 = (r4 + -26992);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r4_addr_2 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_2);
    ctr = r4;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x802FB88Cu:
        goto loc_802FB88C;
        break;
    case 0x802FB71Cu:
        goto loc_802FB71C;
        break;
    case 0x802FB714u:
        goto loc_802FB714;
        break;
    case 0x802FB748u:
        goto loc_802FB748;
        break;
    case 0x802FB760u:
        goto loc_802FB760;
        break;
    case 0x802FB774u:
        goto loc_802FB774;
        break;
    case 0x802FB7F4u:
        goto loc_802FB7F4;
        break;
    case 0x802FB80Cu:
        goto loc_802FB80C;
        break;
    case 0x802FB830u:
        goto loc_802FB830;
        break;
    case 0x802FB848u:
        goto loc_802FB848;
        break;
    case 0x802FB860u:
        goto loc_802FB860;
        break;
    case 0x802FB878u:
        goto loc_802FB878;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[31] = r31;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_802FB714:
{
    r3 = 1;
    goto loc_802FB890;
}

loc_802FB71C:
{
    r3 = 12;
    ctx->lr = 0x802FB724u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x802FB520u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    ctr = ctx->ctr;
}

loc_802FB728:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802FB88C;
    }
}

loc_802FB72C:
{
    r3 = 20;
    ctx->lr = 0x802FB734u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x802FB558u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    ctr = ctx->ctr;
    r4 = (1 - r3);
    r0 = (r3 + -1);
    r0 = (r4 | r0);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & 1);
    goto loc_802FB890;
}

loc_802FB748:
{
    r3 = 1;
    ctx->lr = 0x802FB750u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x802FB520u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    ctr = ctx->ctr;
}

loc_802FB754:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802FB88C;
    }
}

loc_802FB758:
{
    r3 = 1;
    goto loc_802FB890;
}

loc_802FB760:
{
    // inline leaf 0x802FF298 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    r0 = MemoryInline::FlatRead8((r3 + 18484));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_4 & 1);
    // end of inlined leaf 0x802FF298
}

loc_802FB768:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802FB88C;
    }
}

loc_802FB76C:
{
    r3 = 1;
    goto loc_802FB890;
}

loc_802FB774:
{
    r3 = 7;
    ctx->lr = 0x802FB77Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x802FB520u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    ctr = ctx->ctr;
}

loc_802FB780:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802FB88C;
    }
}

loc_802FB784:
{
    r3 = 26;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8004D2E0u>(ctx);
    r3 = ctx->gpr[3];
}

loc_802FB790:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802FB88C;
    }
}

loc_802FB794:
{
    r0 = (r31 & 255);
}

loc_802FB79C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(10))) {
        goto loc_802FB7B4;
    }
}

loc_802FB7A0:
{
}

loc_802FB7A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(11))) {
        goto loc_802FB7BC;
    }
}

loc_802FB7A8:
{
}

loc_802FB7AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(12))) {
        goto loc_802FB7C4;
    }
}

loc_802FB7B0:
{
    goto loc_802FB7C8;
}

loc_802FB7B4:
{
    r31 = 0;
    goto loc_802FB7C8;
}

loc_802FB7BC:
{
    r31 = 1;
    goto loc_802FB7C8;
}

loc_802FB7C4:
{
    r31 = 2;
}

loc_802FB7C8:
{
    // inline leaf 0x801E9BCC (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    r3 = MemoryInline::FlatRead8((r3 + 15874));
    // end of inlined leaf 0x801E9BCC
    r3 = (r3 & 255);
    r0 = (r31 + 1);
}

loc_802FB7D8:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(r3))) {
        goto loc_802FB7EC;
    }
}

loc_802FB7DC:
{
    r3 = r31;
    ctx->lr = 0x802FB7E4u;
    if constexpr (KnownRegArgsCpuCall<0x801E9BD8u>(&func_801E9BD8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_801E9BD8_2925 = func_801E9BD8_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_801E9BD8_2925);
        r4 = static_cast<uint32_t>(regargs_result_801E9BD8_2925 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x801E9BD8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_802FB7E8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802FB88C;
    }
}

loc_802FB7EC:
{
    r3 = 1;
    goto loc_802FB890;
}

loc_802FB7F4:
{
    r3 = 9;
    ctx->lr = 0x802FB7FCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x802FB520u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    ctr = ctx->ctr;
}

loc_802FB800:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802FB88C;
    }
}

loc_802FB804:
{
    r3 = 1;
    goto loc_802FB890;
}

loc_802FB80C:
{
    r3 = 9;
    ctx->lr = 0x802FB814u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x802FB520u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    ctr = ctx->ctr;
}

loc_802FB818:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802FB88C;
    }
}

loc_802FB81C:
{
    // inline leaf 0x802FF298 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    r0 = MemoryInline::FlatRead8((r3 + 18484));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_5 & 1);
    // end of inlined leaf 0x802FF298
}

loc_802FB824:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802FB88C;
    }
}

loc_802FB828:
{
    r3 = 1;
    goto loc_802FB890;
}

loc_802FB830:
{
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    r0 = MemoryInline::FlatRead8((r3 + 18032));
}

loc_802FB83C:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(1))) {
        goto loc_802FB88C;
    }
}

loc_802FB840:
{
    r3 = 1;
    goto loc_802FB890;
}

loc_802FB848:
{
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    r0 = MemoryInline::FlatRead8((r3 + 18032));
}

loc_802FB854:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(2))) {
        goto loc_802FB88C;
    }
}

loc_802FB858:
{
    r3 = 1;
    goto loc_802FB890;
}

loc_802FB860:
{
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    r0 = MemoryInline::FlatRead8((r3 + 18032));
}

loc_802FB86C:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(3))) {
        goto loc_802FB88C;
    }
}

loc_802FB870:
{
    r3 = 1;
    goto loc_802FB890;
}

loc_802FB878:
{
    ctx->lr = 0x802FB87Cu;
    if constexpr (KnownRegArgsCpuCall<0x801FE754u>(&func_801FE754)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_801FE754_3598 = func_801FE754_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_801FE754_3598);
        r4 = static_cast<uint32_t>(regargs_result_801FE754_3598 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x801FE754u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_802FB880:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802FB88C;
    }
}

loc_802FB884:
{
    r3 = 1;
    goto loc_802FB890;
}

loc_802FB88C:
{
    r3 = 0;
}

loc_802FB890:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->ctr = ctr;
    ctx->gpr[31] = r31_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802FB664(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802FB664_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802FB664 func_802FB664 preserves=true fpr_mask=0x00000000
