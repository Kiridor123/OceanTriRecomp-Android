#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804D5400(CpuContext* ctx);
extern "C" uint64_t func_804D5400_ra0_0_18_0(CpuContext*);

extern "C" uint64_t func_804CBE80_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_ca_0 = 0;
    uint32_t r0_ca_1 = 0;
    uint32_t r0_ca_2 = 0;
    uint32_t r0_ca_3 = 0;
    uint32_t r0_not_0 = 0;
    uint32_t r0_not_1 = 0;
    uint32_t r0_not_2 = 0;
    uint32_t r0_not_3 = 0;
    uint32_t r0_subfe_rb_0 = 0;
    uint32_t r0_subfe_rb_1 = 0;
    uint32_t r0_subfe_rb_2 = 0;
    uint32_t r0_subfe_rb_3 = 0;
    uint32_t r3_ca_0 = 0;
    uint32_t r3_ca_1 = 0;
    uint32_t r3_ca_2 = 0;
    uint32_t r3_ca_3 = 0;
    uint32_t r3_ca_4 = 0;
    uint32_t r3_not_0 = 0;
    uint32_t r3_not_1 = 0;
    uint32_t r3_not_2 = 0;
    uint32_t r3_not_3 = 0;
    uint32_t r3_not_4 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r6_ca_0 = 0;
    uint32_t r6_ca_1 = 0;
    uint32_t r6_ca_2 = 0;
    uint32_t r6_ca_3 = 0;
    uint32_t r6_ca_4 = 0;
    uint32_t r6_not_0 = 0;
    uint32_t r6_not_1 = 0;
    uint32_t r6_not_2 = 0;
    uint32_t r6_not_3 = 0;
    uint32_t r6_not_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x804CBE80u);
    goto loc_804CBE80;

loc_804CBE80:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = r3;
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x804D12F0
    r0 = MemoryInline::FlatRead32(r30);
    r31 = r3;
}

loc_804CBEAC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804CBEB8;
    }
}

loc_804CBEB0:
{
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl1_0x804D1330:
{
}

loc_inl1_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl1_0x804D1344;
    }
}

loc_inl1_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl1_0x804D1348;
}

loc_inl1_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl1_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_1 & 1);
}

loc_inl1_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
    goto loc_804CBF7C;
}

loc_804CBEB8:
{
    r29 = MemoryInline::FlatRead32((r30 + 20));
}

loc_804CBEC0:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_804CBED4;
    }
}

loc_804CBEC4:
{
    r0 = MemoryInline::FlatRead32((r30 + 16));
    r3 = (r13 + -15120);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    goto loc_804CBEDC;
}

loc_804CBED4:
{
    r0 = MemoryInline::FlatRead32((r30 + 16));
    MemoryInline::FlatWrite32((r29 + 16), r0);
}

loc_804CBEDC:
{
    r3 = MemoryInline::FlatRead32((r30 + 16));
}

loc_804CBEE4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804CBEF0;
    }
}

loc_804CBEE8:
{
    MemoryInline::FlatWrite32((r3 + 20), r29);
    goto loc_804CBF6C;
}

loc_804CBEF0:
{
}

loc_804CBEF4:
{
    MemoryInline::FlatWrite32((r13 + -15120), r29);
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_804CBF6C;
    }
}

loc_804CBEFC:
{
    ctx->lr = 0x804CBF00u;
    if constexpr (KnownRegArgsCpuCall<0x804D5400u>(&func_804D5400)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_804D5400_106D = func_804D5400_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_804D5400_106D);
        r4 = static_cast<uint32_t>(regargs_result_804D5400_106D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x804D5400u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r5 = MemoryInline::FlatRead32((r29 + 12));
    r7 = 0;
    r0 = MemoryInline::FlatRead32((r29 + 8));
    r6 = (r7 ^ -2147483648);
    r8 = (r5 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r0_subfe_rb_1 = r0;
    r0_not_1 = ~(r3);
    r0_ca_1 = (xer >> 29) & 1u;
    r0 = (r0_not_1 + r0_subfe_rb_1);
    r0 = (r0 + r0_ca_1);
    r5 = (r0 ^ -2147483648);
    r0 = (r8 - r7);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r8) >= static_cast<uint32_t>(r7) ? 1u : 0u) << 29);
    r6_not_1 = ~(r6);
    r6_ca_1 = (xer >> 29) & 1u;
    r6 = (r6_not_1 + r5);
    r6 = (r6 + r6_ca_1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r6_not_1)) + static_cast<uint64_t>(static_cast<uint32_t>(r5)) + (static_cast<uint64_t>(static_cast<uint32_t>(r6_ca_1)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r6_not_2 = ~(r5);
    r6_ca_2 = (xer >> 29) & 1u;
    r6 = (r6_not_2 + r5);
    r6 = (r6 + r6_ca_2);
    r6 = (0 - r6);
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_804CBF3C;
    }
}

loc_804CBF30:
{
    r3 = 0;
    // inline leaf 0x804777C0 (2 guest instruction(s))
    // mtspr 22 (privileged/OS register) @ 0x804777C0
    PPC_WriteSpr(22, r3);
    // end of inlined leaf 0x804777C0
    goto loc_804CBF6C;
}

loc_804CBF3C:
{
    r4 = 0x80000000u;
    r3 = (r7 ^ -2147483648);
    r0 = (r8 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r8) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r3_not_1 = ~(r3);
    r3_ca_1 = (xer >> 29) & 1u;
    r3 = (r3_not_1 + r5);
    r3 = (r3 + r3_ca_1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r3_not_1)) + static_cast<uint64_t>(static_cast<uint32_t>(r5)) + (static_cast<uint64_t>(static_cast<uint32_t>(r3_ca_1)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r3_not_2 = ~(r5);
    r3_ca_2 = (xer >> 29) & 1u;
    r3 = (r3_not_2 + r5);
    r3 = (r3 + r3_ca_2);
    r3 = (0 - r3);
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804CBF64;
    }
}

loc_804CBF58:
{
    r3 = r8;
    // inline leaf 0x804777C0 (2 guest instruction(s))
    // mtspr 22 (privileged/OS register) @ 0x804777C0
    PPC_WriteSpr(22, r3);
    // end of inlined leaf 0x804777C0
    goto loc_804CBF6C;
}

loc_804CBF64:
{
    r3 = (r4 + -1);
    // inline leaf 0x804777C0 (2 guest instruction(s))
    // mtspr 22 (privileged/OS register) @ 0x804777C0
    PPC_WriteSpr(22, r3);
    // end of inlined leaf 0x804777C0
}

loc_804CBF6C:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r30, r0);
    r3 = r31;
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl5_0x804D1330:
{
}

loc_inl5_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl5_0x804D1344;
    }
}

loc_inl5_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl5_0x804D1348;
}

loc_inl5_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl5_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_2 & 1);
}

loc_inl5_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
}

loc_804CBF7C:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->xer = xer;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804CBE80(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804CBE80_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000021FB gpr_write=0x000001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804CBE80 func_804CBE80 preserves=true fpr_mask=0x00000000
