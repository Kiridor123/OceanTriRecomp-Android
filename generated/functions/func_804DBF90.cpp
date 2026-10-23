#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_804DBF90_ra38_1e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r5_mdest_0 = 0;
    uint32_t r5_mdest_1 = 0;
    uint32_t r5_mdest_2 = 0;
    uint32_t r5_mdest_3 = 0;
    uint32_t r5_mrot_0 = 0;
    uint32_t r5_mrot_1 = 0;
    uint32_t r5_mrot_2 = 0;
    uint32_t r5_mrot_3 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;

    goto loc_804DBF90;

loc_804DBF90:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r5 = 32;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r4;
    r4 = 0;
    r30 = r3;
    r3 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead8(r30);
    r4 = (r30 + 1);
    r3 = (r0 & 31);
    r6 = (r0 & 224);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r31 + 20), r4);
    r3 = (r30 + r0);
}

loc_804DBFDC:
{
    r3 = (r3 + 1);
    MemoryInline::FlatWrite32((r31 + 12), r0);
    MemoryInline::FlatWrite32((r31 + 24), r3);
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(96))) {
        goto loc_804DC020;
    }
}

loc_804DBFEC:
{
}

loc_804DBFF0:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(224))) {
        goto loc_804DC020;
    }
}

loc_804DBFF4:
{
}

loc_804DBFF8:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(128))) {
        goto loc_804DC02C;
    }
}

loc_804DBFFC:
{
}

loc_804DC000:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(160))) {
        goto loc_804DC038;
    }
}

loc_804DC004:
{
}

loc_804DC008:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(192))) {
        goto loc_804DC044;
    }
}

loc_804DC00C:
{
}

loc_804DC010:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(64))) {
        goto loc_804DC050;
    }
}

loc_804DC014:
{
}

loc_804DC018:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(32))) {
        goto loc_804DC074;
    }
}

loc_804DC01C:
{
    goto loc_804DC0E8;
}

loc_804DC020:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r31 + 16), r0);
    goto loc_804DC09C;
}

loc_804DC02C:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r31 + 16), r0);
    goto loc_804DC09C;
}

loc_804DC038:
{
    r0 = 4;
    MemoryInline::FlatWrite32((r31 + 16), r0);
    goto loc_804DC09C;
}

loc_804DC044:
{
    r0 = 8;
    MemoryInline::FlatWrite32((r31 + 16), r0);
    goto loc_804DC09C;
}

loc_804DC050:
{
    r5 = MemoryInline::FlatRead8(r3);
    r4 = (r3 + 1);
    r3 = MemoryInline::FlatRead32((r31 + 28));
    r0 = (r5 + 1);
    MemoryInline::FlatWrite32((r31 + 16), r0);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r31 + 24), r4);
    MemoryInline::FlatWrite32((r31 + 28), r0);
    goto loc_804DC09C;
}

loc_804DC074:
{
    r0 = MemoryInline::FlatRead8(r3);
    r4 = (r3 + 2);
    r5 = MemoryInline::FlatRead8((r3 + 1));
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r5_mrot_1 = (r5_rot_1 & 65280);
    r5_mdest_1 = (r5 & -65281);
    r5 = (r5_mdest_1 | r5_mrot_1);
    r3 = MemoryInline::FlatRead32((r31 + 28));
    r0 = (r5 + 1);
    MemoryInline::FlatWrite32((r31 + 16), r0);
    r0 = (r3 + 2);
    MemoryInline::FlatWrite32((r31 + 24), r4);
    MemoryInline::FlatWrite32((r31 + 28), r0);
}

loc_804DC09C:
{
}

loc_804DC0A0:
{
    if ((static_cast<uint32_t>(r6) == static_cast<uint32_t>(64))) {
        goto loc_804DC0AC;
    }
}

loc_804DC0A4:
{
}

loc_804DC0A8:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(32))) {
        goto loc_804DC0B8;
    }
}

loc_804DC0AC:
{
    r0 = 64;
    MemoryInline::FlatWrite8((r31 + 9), static_cast<uint8_t>(r0));
    goto loc_804DC0CC;
}

loc_804DC0B8:
{
    MemoryInline::FlatWrite8((r31 + 8), static_cast<uint8_t>(r6));
    r3 = r31;
    r4 = MemoryInline::FlatRead32((r31 + 24));
    r5 = MemoryInline::FlatRead32((r31 + 16));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
}

loc_804DC0CC:
{
    r3 = MemoryInline::FlatRead32((r31 + 12));
    r0 = MemoryInline::FlatRead32((r31 + 16));
    r4 = MemoryInline::FlatRead32((r31 + 28));
    r0 = (r3 + r0);
    r3 = (r0 + r4);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r31 + 28), r0);
}

loc_804DC0E8:
{
    r3 = MemoryInline::FlatRead32((r31 + 16));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804DBF90(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804DBF90_ra38_1e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804DBF90 func_804DBF90 preserves=true fpr_mask=0x00000000
