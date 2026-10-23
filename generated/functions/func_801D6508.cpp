#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_801D6508_ra188_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r7, uint32_t arg_r8)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r31 = ctx->gpr[31];
    ctx->gpr[7] = arg_r7;
    ctx->gpr[8] = arg_r8;

    goto loc_801D6508;

loc_801D6508:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = r3;
    r3 = (r3 + 36);
    r4 = 5;
    r5 = 3;
    r6 = (r1 + 8);
    ctx->lr = 0x801D6530u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x800E2D38u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r3 = r31;
    // inline leaf 0x8012ECC4 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2218));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_0 & 134217727);
    // end of inlined leaf 0x8012ECC4
}

loc_801D653C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801D6564;
    }
}

loc_801D6540:
{
    r3 = MemoryInline::FlatRead8((r1 + 11));
}

loc_801D6548:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(251))) {
        goto loc_801D6558;
    }
}

loc_801D654C:
{
    r0 = (r3 + 4);
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r0));
    goto loc_801D6584;
}

loc_801D6558:
{
    r0 = 255;
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r0));
    goto loc_801D6584;
}

loc_801D6564:
{
    r3 = MemoryInline::FlatRead8((r1 + 11));
}

loc_801D656C:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(4))) {
        goto loc_801D657C;
    }
}

loc_801D6570:
{
    r0 = (r3 + -4);
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r0));
    goto loc_801D6584;
}

loc_801D657C:
{
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r0));
}

loc_801D6584:
{
    r3 = (r31 + 36);
    r4 = 5;
    r5 = 3;
    r6 = (r1 + 8);
    ctx->lr = 0x801D6598u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x800E2DC4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return r3;
}

}

extern "C" void func_801D6508(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_801D6508_ra188_0_8_0(ctx, ctx->gpr[3], ctx->gpr[7], ctx->gpr[8]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00003F8E gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801D6508 func_801D6508 preserves=true fpr_mask=0x00000000
