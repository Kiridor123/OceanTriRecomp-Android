#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_804CCBA0_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x804CCBA0u);
    goto loc_804CCBA0;

loc_804CCBA0:
{
    MemoryHw::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r3 = -872415232;
    MemoryHw::FlatWriteRam32((r1 + 20), r0);
    r0 = 2052;
    MemoryHw::FlatWrite16((r3 + 20490), static_cast<uint16_t>(r0));
    r0 = MemoryHw::FlatRead16((r3 + 20534));
    r0 = (r0 & 32767);
    MemoryHw::FlatWrite16((r3 + 20534), static_cast<uint16_t>(r0));
    r0 = MemoryHw::FlatRead16((r3 + 20490));
    goto loc_804CCBD4;
}

loc_804CCBD0:
{
    r0 = MemoryHw::FlatRead16((r3 + 20490));
}

loc_804CCBD4:
{
    r0 = (r0 & 1024);
}

loc_804CCBD8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804CCBD0;
    }
}

loc_804CCBDC:
{
    r3 = -872415232;
    r0 = MemoryHw::FlatRead16((r3 + 20490));
    goto loc_804CCBEC;
}

loc_804CCBE8:
{
    r0 = MemoryHw::FlatRead16((r3 + 20490));
}

loc_804CCBEC:
{
    r0 = (r0 & 512);
}

loc_804CCBF0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804CCBE8;
    }
}

loc_804CCBF4:
{
    r4 = -872415232;
    r0 = 2220;
    MemoryHw::FlatWrite16((r4 + 20490), static_cast<uint16_t>(r0));
    r0 = 0;
    MemoryHw::FlatWrite16((r4 + 20480), static_cast<uint16_t>(r0));
}

loc_804CCC08:
{
    r3 = MemoryHw::FlatRead16((r4 + 20484));
    r0 = MemoryHw::FlatRead16((r4 + 20486));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0_mrot_2 = (r0_rot_2 & -65536);
    r0_mdest_2 = (r0 & 65535);
    r0 = (r0_mdest_2 | r0_mrot_2);
    r0 = (r0 & -2147483648);
}

loc_804CCC18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804CCC08;
    }
}

loc_804CCC1C:
{
    // inline leaf 0x804D53F0 (2 guest instruction(s))
    r3 = PPC_Mftb();
    // end of inlined leaf 0x804D53F0
    r31 = r3;
}

loc_804CCC24:
{
    // inline leaf 0x804D53F0 (2 guest instruction(s))
    r3 = PPC_Mftb();
    // end of inlined leaf 0x804D53F0
    r0 = (r3 - r31);
}

loc_804CCC30:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(44))) {
        goto loc_804CCC24;
    }
}

loc_804CCC34:
{
    r3 = -872415232;
    r0 = MemoryHw::FlatRead16((r3 + 20490));
    r0 = (r0 | 1);
    MemoryHw::FlatWrite16((r3 + 20490), static_cast<uint16_t>(r0));
    r0 = MemoryHw::FlatRead16((r3 + 20490));
    goto loc_804CCC54;
}

loc_804CCC50:
{
    r0 = MemoryHw::FlatRead16((r3 + 20490));
}

loc_804CCC54:
{
    r0 = (r0 & 1);
}

loc_804CCC58:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804CCC50;
    }
}

loc_804CCC5C:
{
    r0 = MemoryHw::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804CCBA0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804CCBA0_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804CCBA0 func_804CCBA0 preserves=true fpr_mask=0x00000000
