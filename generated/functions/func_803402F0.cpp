#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_803402F0_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_ca_0 = 0;
    uint32_t r0_ca_1 = 0;
    uint32_t r0_ca_2 = 0;
    uint32_t r0_subfc_min_0 = 0;
    uint32_t r0_subfc_min_1 = 0;
    uint32_t r0_subfc_min_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_803402F0;

loc_803402F0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r30 = r4;
    r3 = MemoryInline::FlatRead32((r5 + 56));
    r3 = MemoryInline::FlatRead8((r3 + 88));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    // inline leaf 0x80340230 (6 guest instruction(s))
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r4 = (r0 * 20);
    r3 = 0x805E0000u;
    r0 = (r3 + 32056);
    r3 = (r0 + r4);
    // end of inlined leaf 0x80340230
    r31 = r3;
    r3 = r29;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x8026FE38u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80340330:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8034033C;
    }
}

loc_80340334:
{
    r3 = 0;
    goto loc_80340470;
}

loc_8034033C:
{
    r3 = MemoryInline::FlatRead16((r29 + 1436));
}

loc_80340344:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8034035C;
    }
}

loc_80340348:
{
    r0 = MemoryInline::FlatRead16(r31);
}

loc_80340350:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_8034035C;
    }
}

loc_80340354:
{
    r3 = 0;
    goto loc_80340470;
}

loc_8034035C:
{
    r0 = MemoryInline::FlatRead16((r29 + 774));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(353));
}

loc_80340364:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80340414;
    }
}

loc_80340368:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80340398;
    }
}

loc_8034036C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(206));
}

loc_80340370:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_803403BC;
    }
}

loc_80340374:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8034038C;
    }
}

loc_80340378:
{
}

loc_8034037C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(205))) {
        goto loc_803403CC;
    }
}

loc_80340380:
{
}

loc_80340384:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(202))) {
        goto loc_803403C4;
    }
}

loc_80340388:
{
    goto loc_8034046C;
}

loc_8034038C:
{
}

loc_80340390:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(351))) {
        goto loc_803403F0;
    }
}

loc_80340394:
{
    goto loc_8034046C;
}

loc_80340398:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(389));
}

loc_8034039C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_803403D4;
    }
}

loc_803403A0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_803403B0;
    }
}

loc_803403A4:
{
}

loc_803403A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(355))) {
        goto loc_80340450;
    }
}

loc_803403AC:
{
    goto loc_8034046C;
}

loc_803403B0:
{
}

loc_803403B4:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(391))) {
        goto loc_8034046C;
    }
}

loc_803403B8:
{
    goto loc_80340434;
}

loc_803403BC:
{
    r3 = 0;
    goto loc_80340470;
}

loc_803403C4:
{
    r3 = 1;
    goto loc_80340470;
}

loc_803403CC:
{
    r3 = 1;
    goto loc_80340470;
}

loc_803403D4:
{
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r30)));
    r3 = (r4 + -1);
    r0 = (1 - r4);
    r0 = ~(r3 | r0);
    r3 = (static_cast<int32_t>(r0) >> 31);
    r3 = (r3 + 3);
    goto loc_80340470;
}

loc_803403F0:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r30)));
}

loc_803403F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_80340404;
    }
}

loc_803403FC:
{
}

loc_80340400:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(10))) {
        goto loc_8034040C;
    }
}

loc_80340404:
{
    r3 = 2;
    goto loc_80340470;
}

loc_8034040C:
{
    r3 = 3;
    goto loc_80340470;
}

loc_80340414:
{
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r30)));
    r3 = (r3 + -5);
    r0 = 1;
    r0_subfc_min_1 = r0;
    r0 = (r0_subfc_min_1 - r3);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r0_subfc_min_1) >= static_cast<uint32_t>(r3) ? 1u : 0u) << 29);
    r0_ca_1 = (xer >> 29) & 1u;
    r0 = (r3 + r0_ca_1);
    r3 = (r3 - r0);
    r3 = (r3 + 3);
    goto loc_80340470;
}

loc_80340434:
{
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r30)));
    r3 = (r4 + -2);
    r0 = (2 - r4);
    r0 = ~(r3 | r0);
    r3 = (static_cast<int32_t>(r0) >> 31);
    r3 = (r3 + 3);
    goto loc_80340470;
}

loc_80340450:
{
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r30)));
    r3 = (r4 + -7);
    r0 = (7 - r4);
    r0 = ~(r3 | r0);
    r3 = (static_cast<int32_t>(r0) >> 31);
    r3 = (r3 + 3);
    goto loc_80340470;
}

loc_8034046C:
{
    r3 = 0;
}

loc_80340470:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->cr = cr;
    ctx->xer = xer;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803402F0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803402F0_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803402F0 func_803402F0 preserves=true fpr_mask=0x00000000
