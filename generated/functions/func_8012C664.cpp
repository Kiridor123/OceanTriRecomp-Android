#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8012C664_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r31 = ctx->gpr[31];

    goto loc_8012C664;

loc_8012C664:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r0 = MemoryInline::FlatRead8((r3 + 2564));
}

loc_8012C680:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8012C72C;
    }
}

loc_8012C684:
{
    r0 = (r0 & 2);
}

loc_8012C68C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8012C6A4;
    }
}

loc_8012C690:
{
    r4 = 1;
    // inline leaf 0x801307DC (11 guest instruction(s))
}

loc_inl0_0x801307DC:
{
    r0 = MemoryInline::FlatRead8((r3 + 1085));
    r5 = (r4 & 255);
}

loc_inl0_0x801307E8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r5))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x801307EC:
{
    MemoryInline::FlatWrite8((r3 + 1085), static_cast<uint8_t>(r4));
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 1090), static_cast<uint16_t>(r0));
}

loc_inl0_0x801307FC:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(1))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x80130800:
{
    MemoryInline::FlatWrite8((r3 + 1082), static_cast<uint8_t>(r0));
    goto loc_inl0_cont_801307DC;
}

loc_inl0_return:
{
}

loc_inl0_cont_801307DC:
{
    // end of inlined leaf 0x801307DC
    r0 = MemoryInline::FlatRead8((r31 + 2564));
    r0 = (r0 & 253);
}

loc_8012C6A0:
{
    MemoryInline::FlatWrite8((r31 + 2564), static_cast<uint8_t>(r0));
}

loc_8012C6A4:
{
    r4 = MemoryInline::FlatRead8((r31 + 2564));
    r0 = (r4 & 1);
}

loc_8012C6B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8012C70C;
    }
}

loc_8012C6B4:
{
    r3 = MemoryInline::FlatRead8((r31 + 2566));
}

loc_8012C6BC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8012C6D8;
    }
}

loc_8012C6C0:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r31 + 2566), static_cast<uint8_t>(r0));
    r3 = r31;
    r4 = 8;
    // inline leaf 0x8012CEF0 (4 guest instruction(s))
    r0 = MemoryInline::FlatRead16((r3 + 1940));
    r0 = (r0 | r4);
    MemoryInline::FlatWrite16((r3 + 1940), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8012CEF0
    goto loc_8012C70C;
}

loc_8012C6D8:
{
    r3 = MemoryInline::FlatRead8((r31 + 481));
    r0 = MemoryInline::FlatRead8((r31 + 2565));
}

loc_8012C6E4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_8012C70C;
    }
}

loc_8012C6E8:
{
    r0 = (r4 & 254);
    MemoryInline::FlatWrite8((r31 + 2564), static_cast<uint8_t>(r0));
    r0 = 255;
    MemoryInline::FlatWrite8((r31 + 2565), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 2566), static_cast<uint8_t>(r0));
    r3 = r31;
    r4 = 8;
    // inline leaf 0x8012CF00 (6 guest instruction(s))
    r5 = MemoryInline::FlatRead16((r3 + 1940));
    r0 = ~(r4 | r4);
    r0 = (r0 & 65535);
    r0 = (r5 & r0);
    MemoryInline::FlatWrite16((r3 + 1940), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8012CF00
}

loc_8012C70C:
{
    r3 = MemoryInline::FlatRead8((r31 + 2564));
    r0 = (r3 & 4);
}

loc_8012C718:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8012C72C;
    }
}

loc_8012C71C:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 2567), static_cast<uint8_t>(r0));
    r0 = (r3 & 251);
}

loc_8012C728:
{
    MemoryInline::FlatWrite8((r31 + 2564), static_cast<uint8_t>(r0));
}

loc_8012C72C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8012C664(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8012C664_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8012C664 func_8012C664 preserves=true fpr_mask=0x00000000
