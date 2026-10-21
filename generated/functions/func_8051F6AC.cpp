#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8051F6AC_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x8051F6ACu);
    goto loc_8051F6AC;

loc_8051F6AC:
{
    r30 = 0;
}

loc_8051F6D0:
{
}

loc_8051F6D4:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_8051F700;
    }
}

loc_8051F6D8:
{
    r31 = 0x80770000u;
    r31 = (r31 + -28416);
    r3 = MemoryInline::FlatRead32((r31 + 12));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x804BC810u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8051F6EC:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_8051F6F8;
    }
}

loc_8051F6F0:
{
    r30 = 0x80000000u;
    goto loc_8051F700;
}

loc_8051F6F8:
{
    r0 = -1;
    MemoryInline::FlatWriteRam32((r31 + 12), r0);
}

loc_8051F700:
{
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x804D12F0
}

loc_8051F708:
{
    r29 = r3;
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_8051F72C;
    }
}

loc_8051F710:
{
    r3 = 0x80770000u;
    r4 = 1;
    r3 = (r3 + -28416);
    r0 = -2;
    MemoryInline::FlatWrite8((r13 + -13640), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam32((r3 + 8), r0);
    goto loc_8051F750;
}

loc_8051F72C:
{
    r0 = (r30 + -2147483648);
}

loc_8051F734:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8051F750;
    }
}

loc_8051F738:
{
    r3 = 0x80770000u;
    r4 = 2;
    r3 = (r3 + -28416);
    r0 = 0;
    MemoryInline::FlatWrite8((r13 + -13640), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam32((r3 + 8), r0);
}

loc_8051F750:
{
    // inline leaf 0x804D3FF0 (3 guest instruction(s))
    r3 = 0x80000000u;
    r3 = MemoryInline::FlatRead32((r3 + 228));
    // end of inlined leaf 0x804D3FF0
}

loc_8051F758:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8051F764;
    }
}

loc_8051F75C:
{
    MemoryInline::FlatWrite32((r3 + 780), r30);
    goto loc_8051F768;
}

loc_8051F764:
{
    MemoryInline::FlatWrite32((r13 + -13636), r30);
}

loc_8051F768:
{
    r3 = r29;
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl2_0x804D1330:
{
}

loc_inl2_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl2_0x804D1344;
    }
}

loc_inl2_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl2_0x804D1348;
}

loc_inl2_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl2_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_1 & 1);
}

loc_inl2_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
    r3 = r30;
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8051F6AC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8051F6AC_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0xE000201B gpr_write=0xE000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8051F6AC func_8051F6AC preserves=true fpr_mask=0x00000000
