#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_804EFDF0_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;
    const uint32_t r29_entry = r29;
    const uint32_t r30_entry = r30;
    const uint32_t r31_entry = r31;
    uint32_t ctr = ctx->ctr;

    goto loc_804EFDF0;

loc_804EFDF0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r4 = 0x80760000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r4 = (r4 + -10352);
    r29 = r3;
    r4_addr_0 = (r4 + r0);
    r31 = MemoryInline::FlatRead32(r4_addr_0);
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x804D12F0
    r0 = MemoryInline::FlatRead8((r31 + 2248));
    r30 = r3;
    r3 = MemoryInline::FlatRead32((r31 + 2232));
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r4 = (r4_rot_0 & 255);
    r0 = (r3 + -3);
    r3 = (r4 * 96);
}

loc_804EFE40:
{
    r3 = (r31 + r3);
    r4 = (r3 + 160);
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(12))) {
        goto loc_804EFE94;
    }
}

loc_804EFE4C:
{
    r3 = 0x80630000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r3 + -13408);
    r3_addr_0 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_0);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x804EFE64u:
        goto loc_804EFE64;
        break;
    case 0x804EFE6Cu:
        goto loc_804EFE6C;
        break;
    case 0x804EFE8Cu:
        goto loc_804EFE8C;
        break;
    case 0x804EFE74u:
        goto loc_804EFE74;
        break;
    case 0x804EFE7Cu:
        goto loc_804EFE7C;
        break;
    case 0x804EFE84u:
        goto loc_804EFE84;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[12] = r12;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_804EFE64:
{
    r5 = 50;
    goto loc_804EFE98;
}

loc_804EFE6C:
{
    r5 = 54;
    goto loc_804EFE98;
}

loc_804EFE74:
{
    r5 = 46;
    goto loc_804EFE98;
}

loc_804EFE7C:
{
    r5 = 52;
    goto loc_804EFE98;
}

loc_804EFE84:
{
    r5 = 74;
    goto loc_804EFE98;
}

loc_804EFE8C:
{
    r5 = 90;
    goto loc_804EFE98;
}

loc_804EFE94:
{
    r5 = 42;
}

loc_804EFE98:
{
    r0 = MemoryInline::FlatRead32((r31 + 2220));
}

loc_804EFEA0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804EFEE8;
    }
}

loc_804EFEA4:
{
    r3 = MemoryInline::FlatRead32((r31 + 2224));
    r3 = (r3 + 1);
    MemoryInline::FlatWrite32((r31 + 2224), r3);
    r0 = MemoryInline::FlatRead32((r31 + 2228));
}

loc_804EFEB8:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_804EFEC4;
    }
}

loc_804EFEBC:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 2224), r0);
}

loc_804EFEC4:
{
    r3 = MemoryInline::FlatRead32((r31 + 2224));
    r0 = MemoryInline::FlatRead8((r4 + 41));
    r3 = (r3 * r5);
    r6 = MemoryInline::FlatRead32((r31 + 2220));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r3 = (r6 + r3);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804EFEE4;
    }
}

loc_804EFEE0:
{
    r5 = 42;
}

loc_804EFEE4:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
}

loc_804EFEE8:
{
    r12 = MemoryInline::FlatRead32((r31 + 2216));
}

loc_804EFEF0:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_804EFF00;
    }
}

loc_804EFEF4:
{
    r3 = r29;
    ctr = r12;
    ctx->lr = 0x804EFF00u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
}

loc_804EFF00:
{
    r4 = MemoryInline::FlatRead16((r31 + 2436));
    r3 = r30;
    r0 = (r4 + 1);
    MemoryInline::FlatWrite16((r31 + 2436), static_cast<uint16_t>(r0));
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl1_0x804D1330:
{
}

loc_inl1_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl1_0x804D1344;
    }
}

loc_inl1_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl1_0x804D1348;
}

loc_inl1_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl1_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_1 & 1);
}

loc_inl1_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    ctx->gpr[29] = r29_entry;
    ctx->gpr[30] = r30_entry;
    ctx->gpr[31] = r31_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804EFDF0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804EFDF0_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804EFDF0 func_804EFDF0 preserves=true fpr_mask=0x00000000
