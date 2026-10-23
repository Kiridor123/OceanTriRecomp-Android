#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_800E45FC_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t ctr = ctx->ctr;

    goto loc_800E45FC;

loc_800E45FC:
{
    r6 = 0;
}

loc_800E4640:
{
    r0 = (r4 & 255);
}

loc_800E4648:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(7))) {
        goto loc_800E46A0;
    }
}

loc_800E464C:
{
    r3 = 0x805A0000u;
    r3 = (r3 + -31480);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x800E4664u:
        goto loc_800E4664;
        break;
    case 0x800E466Cu:
        goto loc_800E466C;
        break;
    case 0x800E4674u:
        goto loc_800E4674;
        break;
    case 0x800E467Cu:
        goto loc_800E467C;
        break;
    case 0x800E4684u:
        goto loc_800E4684;
        break;
    case 0x800E468Cu:
        goto loc_800E468C;
        break;
    case 0x800E4694u:
        goto loc_800E4694;
        break;
    case 0x800E469Cu:
        goto loc_800E469C;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_800E4664:
{
    r7 = 0;
    goto loc_800E46A0;
}

loc_800E466C:
{
    r7 = 1;
    goto loc_800E46A0;
}

loc_800E4674:
{
    r7 = 2;
    goto loc_800E46A0;
}

loc_800E467C:
{
    r7 = 3;
    goto loc_800E46A0;
}

loc_800E4684:
{
    r7 = 4;
    goto loc_800E46A0;
}

loc_800E468C:
{
    r7 = 5;
    goto loc_800E46A0;
}

loc_800E4694:
{
    r7 = 6;
    goto loc_800E46A0;
}

loc_800E469C:
{
    r7 = 7;
}

loc_800E46A0:
{
    r0 = (r5 & 255);
}

loc_800E46A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800E46C0;
    }
}

loc_800E46AC:
{
}

loc_800E46B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_800E46C8;
    }
}

loc_800E46B4:
{
}

loc_800E46B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_800E46D0;
    }
}

loc_800E46BC:
{
    goto loc_800E46D8;
}

loc_800E46C0:
{
    r3 = 0;
    goto loc_800E46DC;
}

loc_800E46C8:
{
    r3 = 1;
    goto loc_800E46DC;
}

loc_800E46D0:
{
    r3 = 3;
    goto loc_800E46DC;
}

loc_800E46D8:
{
    r3 = 1;
}

loc_800E46DC:
{
    r4 = r6;
    r5 = r7;
    r6 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x804BA550u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    ctr = ctx->ctr;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800E45FC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800E45FC_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FF9 gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800E45FC func_800E45FC preserves=true fpr_mask=0x00000000
