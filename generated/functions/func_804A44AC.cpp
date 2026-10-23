#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_804A44AC_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];

    goto loc_804A44AC;

loc_804A44AC:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(3));
    r0 = (r0_rot_0 & 248);
    r6 = (r3 + 4);
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
}

loc_804A4524:
{
    r5 = 0;
    goto loc_804A4540;
}

loc_804A452C:
{
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r3_addr_2 = (r3 + r5);
    r0 = MemoryInline::FlatRead8(r3_addr_2);
    r5 = (r5 + 1);
    MemoryInline::FlatWrite8(r6, static_cast<uint8_t>(r0));
    r6 = (r6 + 1);
}

loc_804A4540:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_804A4548:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(r0))) {
        goto loc_804A452C;
    }
}

loc_804A454C:
{
    r3 = r6;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return r3;
}

}

extern "C" void func_804A44AC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_804A44AC_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000078 gpr_write=0x00000069 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804A44AC func_804A44AC preserves=true fpr_mask=0x00000000
