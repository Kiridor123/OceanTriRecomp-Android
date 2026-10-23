#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_804D0600_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;

    goto loc_804D0600;

loc_804D0600:
{
}

loc_804D0604:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_804D0714;
    }
}

loc_804D0608:
{
}

loc_804D060C:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(32))) {
        goto loc_804D0630;
    }
}

loc_804D0610:
{
}

loc_804D0614:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(223))) {
        goto loc_804D0630;
    }
}

loc_804D0618:
{
    r0 = (r4 + -32);
    r3 = 0x80620000u;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & -2);
    r3 = (r3 + -11904);
    r3_addr_0 = (r3 + r0);
    r3 = MemoryInline::FlatRead16(r3_addr_0);
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804D0630:
{
}

loc_804D0634:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(34974))) {
        goto loc_804D069C;
    }
}

loc_804D0638:
{
}

loc_804D063C:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(39026))) {
        goto loc_804D069C;
    }
}

loc_804D0640:
{
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(24));
    r3 = (r3_rot_0 & 255);
    r4 = (r4 & 255);
    r3 = (r3 + -136);
    r0 = 0;
}

loc_804D0654:
{
    r3 = (r3 * 188);
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(64))) {
        goto loc_804D0670;
    }
}

loc_804D065C:
{
}

loc_804D0660:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(252))) {
        goto loc_804D0670;
    }
}

loc_804D0664:
{
}

loc_804D0668:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(127))) {
        goto loc_804D0670;
    }
}

loc_804D066C:
{
    r0 = 1;
}

loc_804D0670:
{
}

loc_804D0674:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804D0680;
    }
}

loc_804D0678:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804D0680:
{
    r4 = (r4 + -64);
}

loc_804D0688:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(64))) {
        goto loc_804D0690;
    }
}

loc_804D068C:
{
    r4 = (r4 + -1);
}

loc_804D0690:
{
    r3 = (r3 + r4);
    r3 = (r3 + 702);
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804D069C:
{
}

loc_804D06A0:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(33088))) {
        goto loc_804D0730;
    }
}

loc_804D06A4:
{
}

loc_804D06A8:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(34718))) {
        goto loc_804D0730;
    }
}

loc_804D06AC:
{
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(24));
    r3 = (r3_rot_1 & 255);
    r4 = (r4 & 255);
    r3 = (r3 + -129);
    r0 = 0;
}

loc_804D06C0:
{
    r3 = (r3 * 188);
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(64))) {
        goto loc_804D06DC;
    }
}

loc_804D06C8:
{
}

loc_804D06CC:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(252))) {
        goto loc_804D06DC;
    }
}

loc_804D06D0:
{
}

loc_804D06D4:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(127))) {
        goto loc_804D06DC;
    }
}

loc_804D06D8:
{
    r0 = 1;
}

loc_804D06DC:
{
}

loc_804D06E0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804D06EC;
    }
}

loc_804D06E4:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804D06EC:
{
    r4 = (r4 + -64);
}

loc_804D06F4:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(64))) {
        goto loc_804D06FC;
    }
}

loc_804D06F8:
{
    r4 = (r4 + -1);
}

loc_804D06FC:
{
    r0 = (r3 + r4);
    r3 = 0x80620000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r3 = (r3 + -11520);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead16(r3_addr_1);
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804D0714:
{
    r3 = (r4 + 65536);
    r0 = (r3 + -33);
    r0 = (r0 & 65535);
}

loc_804D0724:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(222))) {
        goto loc_804D0730;
    }
}

loc_804D0728:
{
    r3 = (r4 + -32);
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804D0730:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804D0600(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804D0600_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804D0600 func_804D0600 preserves=true fpr_mask=0x00000000
