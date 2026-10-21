#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804EF6F0(CpuContext* ctx);
extern "C" uint64_t func_804EF6F0_ra0_0_18_0(CpuContext*);

extern "C" void func_80820680(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x80820680u);
    goto loc_80820680;

loc_80820680:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    ctx->lr = 0x8082069Cu;
    if constexpr (KnownRegArgsCpuCall<0x804EF6F0u>(&func_804EF6F0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_804EF6F0_44E = func_804EF6F0_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_804EF6F0_44E);
        r4 = static_cast<uint32_t>(regargs_result_804EF6F0_44E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x804EF6F0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & 1);
}

loc_808206A8:
{
    MemoryInline::FlatWrite8((r31 + 140), static_cast<uint8_t>(r0));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808207B4;
    }
}

loc_808206B0:
{
    r4 = 0x80840000u;
    r0 = 37;
    r4 = (r4 + 17760);
    r3 = 0;
    ctr = r0;
    // nop
}

loc_808206C8:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_808206D0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(13))) {
        goto loc_808206E4;
    }
}

loc_808206D4:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_808206DC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(6))) {
        goto loc_808206E4;
    }
}

loc_808206E0:
{
    goto loc_80820714;
}

loc_808206E4:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r3 = (r3 + 1);
}

loc_808206F0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(13))) {
        goto loc_80820704;
    }
}

loc_808206F4:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_808206FC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(6))) {
        goto loc_80820704;
    }
}

loc_80820700:
{
    goto loc_80820714;
}

loc_80820704:
{
    r4 = (r4 + 16);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_808206C8;
    }
}

loc_80820710:
{
    r3 = -1;
}

loc_80820714:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r31 + r0);
    r30 = MemoryInline::FlatRead32((r3 + 752));
    r3 = r30;
    // inline leaf 0x8081AA10 (8 guest instruction(s))
}

loc_inl0_0x8081AA10:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl0_0x8081AA18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl0_0x8081AA24;
    }
}

loc_inl0_0x8081AA1C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl0_0x8081AA28;
}

loc_inl0_0x8081AA24:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl0_0x8081AA28:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl0_cont_8081AA10:
{
    // end of inlined leaf 0x8081AA10
    r4 = 0x80840000u;
    r0 = 37;
    r3 = 1;
    MemoryInline::FlatWrite32((r30 + 20), r3);
    r4 = (r4 + 17760);
    r3 = 0;
    ctr = r0;
    // nop
}

loc_80820748:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_80820750:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(14))) {
        goto loc_80820764;
    }
}

loc_80820754:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_8082075C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(8))) {
        goto loc_80820764;
    }
}

loc_80820760:
{
    goto loc_80820794;
}

loc_80820764:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r3 = (r3 + 1);
}

loc_80820770:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(14))) {
        goto loc_80820784;
    }
}

loc_80820774:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_8082077C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(8))) {
        goto loc_80820784;
    }
}

loc_80820780:
{
    goto loc_80820794;
}

loc_80820784:
{
    r4 = (r4 + 16);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80820748;
    }
}

loc_80820790:
{
    r3 = -1;
}

loc_80820794:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = (r31 + r0);
    r30 = MemoryInline::FlatRead32((r3 + 752));
    r3 = r30;
    // inline leaf 0x8081AA10 (8 guest instruction(s))
}

loc_inl1_0x8081AA10:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl1_0x8081AA18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl1_0x8081AA24;
    }
}

loc_inl1_0x8081AA1C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl1_0x8081AA28;
}

loc_inl1_0x8081AA24:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl1_0x8081AA28:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl1_cont_8081AA10:
{
    // end of inlined leaf 0x8081AA10
    r0 = 1;
    MemoryInline::FlatWrite32((r30 + 20), r0);
    goto loc_808208B0;
}

loc_808207B4:
{
    r4 = 0x80840000u;
    r0 = 37;
    r4 = (r4 + 17760);
    r3 = 0;
    ctr = r0;
}

loc_808207C8:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_808207D0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(13))) {
        goto loc_808207E4;
    }
}

loc_808207D4:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_808207DC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(8))) {
        goto loc_808207E4;
    }
}

loc_808207E0:
{
    goto loc_80820814;
}

loc_808207E4:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r3 = (r3 + 1);
}

loc_808207F0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(13))) {
        goto loc_80820804;
    }
}

loc_808207F4:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_808207FC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(8))) {
        goto loc_80820804;
    }
}

loc_80820800:
{
    goto loc_80820814;
}

loc_80820804:
{
    r4 = (r4 + 16);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_808207C8;
    }
}

loc_80820810:
{
    r3 = -1;
}

loc_80820814:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3 = (r31 + r0);
    r30 = MemoryInline::FlatRead32((r3 + 752));
    r3 = r30;
    // inline leaf 0x8081AA10 (8 guest instruction(s))
}

loc_inl2_0x8081AA10:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl2_0x8081AA18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl2_0x8081AA24;
    }
}

loc_inl2_0x8081AA1C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl2_0x8081AA28;
}

loc_inl2_0x8081AA24:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl2_0x8081AA28:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl2_cont_8081AA10:
{
    // end of inlined leaf 0x8081AA10
    r4 = 0x80840000u;
    r0 = 37;
    r3 = 1;
    MemoryInline::FlatWrite32((r30 + 20), r3);
    r4 = (r4 + 17760);
    r3 = 0;
    ctr = r0;
    // nop
}

loc_80820848:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_80820850:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(14))) {
        goto loc_80820864;
    }
}

loc_80820854:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_8082085C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(6))) {
        goto loc_80820864;
    }
}

loc_80820860:
{
    goto loc_80820894;
}

loc_80820864:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r3 = (r3 + 1);
}

loc_80820870:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(14))) {
        goto loc_80820884;
    }
}

loc_80820874:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_8082087C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(6))) {
        goto loc_80820884;
    }
}

loc_80820880:
{
    goto loc_80820894;
}

loc_80820884:
{
    r4 = (r4 + 16);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80820848;
    }
}

loc_80820890:
{
    r3 = -1;
}

loc_80820894:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r3 = (r31 + r0);
    r30 = MemoryInline::FlatRead32((r3 + 752));
    r3 = r30;
    // inline leaf 0x8081AA10 (8 guest instruction(s))
}

loc_inl3_0x8081AA10:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl3_0x8081AA18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl3_0x8081AA24;
    }
}

loc_inl3_0x8081AA1C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl3_0x8081AA28;
}

loc_inl3_0x8081AA24:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl3_0x8081AA28:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl3_cont_8081AA10:
{
    // end of inlined leaf 0x8081AA10
    r0 = 1;
    MemoryInline::FlatWrite32((r30 + 20), r0);
}

loc_808208B0:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000201B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80820680 func_80820680 preserves=true fpr_mask=0x00000000
