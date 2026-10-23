#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_804795E0_ra0_0_18_0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];

    goto loc_804795E0;

loc_804795E0:
{
    r5 = 0x80710000u;
    r4 = MemoryInline::FlatRead8((r5 + -3456));
    r3 = (r5 + -3456);
    r0 = (r4 + -1);
    MemoryInline::FlatWriteRam8((r5 + -3456), static_cast<uint8_t>(r0));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & 1020);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl0_0x804D1330:
{
}

loc_inl0_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x804D1344;
    }
}

loc_inl0_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl0_0x804D1348;
}

loc_inl0_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl0_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_0 & 1);
}

loc_inl0_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804795E0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804795E0_ra0_0_18_0(ctx);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000000 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804795E0 func_804795E0 preserves=true fpr_mask=0x00000000
