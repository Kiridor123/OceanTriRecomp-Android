#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803BEBB4(CpuContext* ctx);
extern "C" uint64_t func_803BEBB4_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);

extern "C" void func_8097E890(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f1 = ctx->fpr[1];

    MKW_GUEST_ENTER(0x8097E890u);
    goto loc_8097E890;

loc_8097E890:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = 7;
    // inline leaf 0x803BECD4 (12 guest instruction(s))
}

loc_inl0_0x803BECD4:
{
    r0 = (r3 & 255);
}

loc_inl0_0x803BECDC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(20))) {
        goto loc_inl0_0x803BECF4;
    }
}

loc_inl0_0x803BECE0:
{
    r3 = 0x80660000u;
    r3 = (r3 + -19184);
    r3_addr_0 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_0);
    r3 = (r0 ^ 1);
    goto loc_inl0_cont_803BECD4;
}

loc_inl0_0x803BECF4:
{
    r3 = 0x80660000u;
    r3 = (r3 + -19184);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead8(r3_addr_1);
}

loc_inl0_cont_803BECD4:
{
    // end of inlined leaf 0x803BECD4
    r5 = 0;
    r4 = 0x809D0000u;
    r4 = MemoryInline::FlatRead32((r4 + 13672));
    r0 = MemoryInline::FlatRead32((r4 + 4444));
}

loc_8097E8B8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_8097E8C4;
    }
}

loc_8097E8BC:
{
    r3 = 1;
    goto loc_8097E99C;
}

loc_8097E8C4:
{
    r0 = MemoryInline::FlatRead8((r4 + 4308));
}

loc_8097E8CC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8097E8E8;
    }
}

loc_8097E8D0:
{
    r0 = MemoryInline::FlatRead8((r4 + 4309));
}

loc_8097E8D8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8097E8E8;
    }
}

loc_8097E8DC:
{
    r0 = MemoryInline::FlatRead8((r4 + 4310));
}

loc_8097E8E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8097E8EC;
    }
}

loc_8097E8E8:
{
    r5 = 1;
}

loc_8097E8EC:
{
    r4 = 0x80660000u;
    r4 = (r4 + -18480);
    r4 = MemoryInline::FlatRead8((r4 + 738));
}

loc_8097E8FC:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(1))) {
        goto loc_8097E914;
    }
}

loc_8097E900:
{
    r0 = (r3 & 255);
}

loc_8097E908:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8097E914;
    }
}

loc_8097E90C:
{
    r3 = 1;
    goto loc_8097E99C;
}

loc_8097E914:
{
}

loc_8097E918:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(1))) {
        goto loc_8097E954;
    }
}

loc_8097E91C:
{
    r0 = (r3 & 255);
}

loc_8097E924:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8097E930;
    }
}

loc_8097E928:
{
    r3 = 1;
    goto loc_8097E99C;
}

loc_8097E930:
{
}

loc_8097E934:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8097E94C;
    }
}

loc_8097E938:
{
    r3 = 7;
    r4 = 0;
    ctx->lr = 0x8097E944u;
    if constexpr (KnownRegArgsCpuCall<0x803BEBB4u>(&func_803BEBB4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803BEBB4_DA4 = func_803BEBB4_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_803BEBB4_DA4);
        r4 = static_cast<uint32_t>(regargs_result_803BEBB4_DA4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x803BEBB4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    }
    r3 = 1;
    goto loc_8097E99C;
}

loc_8097E94C:
{
    r3 = 0;
    goto loc_8097E99C;
}

loc_8097E954:
{
}

loc_8097E958:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(2))) {
        goto loc_8097E998;
    }
}

loc_8097E95C:
{
    r0 = (r3 + 255);
    r0 = (r0 & 255);
}

loc_8097E968:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_8097E974;
    }
}

loc_8097E96C:
{
    r3 = 1;
    goto loc_8097E99C;
}

loc_8097E974:
{
}

loc_8097E978:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8097E990;
    }
}

loc_8097E97C:
{
    r3 = 7;
    r4 = 1;
    ctx->lr = 0x8097E988u;
    if constexpr (KnownRegArgsCpuCall<0x803BEBB4u>(&func_803BEBB4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803BEBB4_1367 = func_803BEBB4_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_803BEBB4_1367);
        r4 = static_cast<uint32_t>(regargs_result_803BEBB4_1367 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x803BEBB4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    }
    r3 = 1;
    goto loc_8097E99C;
}

loc_8097E990:
{
    r3 = 0;
    goto loc_8097E99C;
}

loc_8097E998:
{
    r3 = 0;
}

loc_8097E99C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000203F gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8097E890 func_8097E890 preserves=true fpr_mask=0x00000000
