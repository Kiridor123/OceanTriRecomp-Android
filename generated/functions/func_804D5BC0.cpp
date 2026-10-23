#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_804D5BC0_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r6_mdest_0 = 0;
    uint32_t r6_mdest_1 = 0;
    uint32_t r6_mdest_2 = 0;
    uint32_t r6_mrot_0 = 0;
    uint32_t r6_mrot_1 = 0;
    uint32_t r6_mrot_2 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];

    goto loc_804D5BC0;

loc_804D5BC0:
{
    r5 = MemoryInline::FlatRead16(r3);
}

loc_804D5BC8:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_804D5BD0;
    }
}

loc_804D5BCC:
{
    r3 = (r3 + 2);
}

loc_804D5BD0:
{
}

loc_804D5BD4:
{
    if ((static_cast<uint32_t>(r5) < static_cast<uint32_t>(55296))) {
        goto loc_804D5BE0;
    }
}

loc_804D5BD8:
{
}

loc_804D5BDC:
{
    if ((static_cast<uint32_t>(r5) <= static_cast<uint32_t>(57343))) {
        goto loc_804D5BE8;
    }
}

loc_804D5BE0:
{
    r6 = r5;
    goto loc_804D5C28;
}

loc_804D5BE8:
{
}

loc_804D5BEC:
{
    if ((static_cast<uint32_t>(r5) > static_cast<uint32_t>(56319))) {
        goto loc_804D5C20;
    }
}

loc_804D5BF0:
{
    r0 = MemoryInline::FlatRead16(r3);
    r3 = (r3 + 2);
}

loc_804D5BFC:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(56320))) {
        goto loc_804D5C18;
    }
}

loc_804D5C00:
{
}

loc_804D5C04:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(57343))) {
        goto loc_804D5C18;
    }
}

loc_804D5C08:
{
    r6 = (r0 & 1023);
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(10));
    r6_mrot_0 = (r6_rot_0 & 1047552);
    r6_mdest_0 = (r6 & -1047553);
    r6 = (r6_mdest_0 | r6_mrot_0);
    r6 = (r6 + 65536);
    goto loc_804D5C28;
}

loc_804D5C18:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return r3;
}

loc_804D5C20:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return r3;
}

loc_804D5C28:
{
    MemoryInline::FlatWrite32(r4, r6);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return r3;
}

}

extern "C" void func_804D5BC0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_804D5BC0_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000069 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804D5BC0 func_804D5BC0 preserves=true fpr_mask=0x00000000
