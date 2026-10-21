#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802F519C(CpuContext* ctx);
extern "C" uint64_t func_802F519C_ra18_6_18_0(CpuContext*, uint32_t, uint32_t, double, double);

extern "C" uint64_t func_802F5358_ra38_6_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    const uint32_t r29_entry = r29;
    const uint32_t r30_entry = r30;
    const uint32_t r31_entry = r31;
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x802F5358u);
    goto loc_802F5358;

loc_802F5358:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r30 = r4;
    r31 = r5;
    ctx->lr = 0x802F5380u;
    if constexpr (KnownRegArgsCpuCall<0x802F519Cu>(&func_802F519C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_802F519C_5CA = func_802F519C_ra18_6_18_0(ctx, r3, r4, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_802F519C_5CA);
        r4 = static_cast<uint32_t>(regargs_result_802F519C_5CA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        InvokeDirectCpu<0x802F519Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
    }
}

loc_802F5384:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802F54AC;
    }
}

loc_802F5388:
{
    r0 = MemoryInline::FlatRead8((r29 + 10));
}

loc_802F5390:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_802F539C;
    }
}

loc_802F5394:
{
}

loc_802F5398:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(5))) {
        goto loc_802F54AC;
    }
}

loc_802F539C:
{
    r0 = MemoryInline::FlatRead8(r30);
}

loc_802F53A4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(5))) {
        goto loc_802F54AC;
    }
}

loc_802F53A8:
{
    r0 = MemoryInline::FlatRead8(r31);
}

loc_802F53B0:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(52))) {
        goto loc_802F54AC;
    }
}

loc_802F53B4:
{
    r3 = 0x805D0000u;
    r3 = (r3 + 30012);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x802F53CCu:
        goto loc_802F53CC;
        break;
    case 0x802F5408u:
        goto loc_802F5408;
        break;
    case 0x802F54ACu:
        goto loc_802F54AC;
        break;
    case 0x802F5414u:
        goto loc_802F5414;
        break;
    case 0x802F53D8u:
        goto loc_802F53D8;
        break;
    case 0x802F5420u:
        goto loc_802F5420;
        break;
    case 0x802F542Cu:
        goto loc_802F542C;
        break;
    case 0x802F5438u:
        goto loc_802F5438;
        break;
    case 0x802F53E4u:
        goto loc_802F53E4;
        break;
    case 0x802F53F0u:
        goto loc_802F53F0;
        break;
    case 0x802F53FCu:
        goto loc_802F53FC;
        break;
    case 0x802F5468u:
        goto loc_802F5468;
        break;
    case 0x802F5444u:
        goto loc_802F5444;
        break;
    case 0x802F5474u:
        goto loc_802F5474;
        break;
    case 0x802F5450u:
        goto loc_802F5450;
        break;
    case 0x802F5480u:
        goto loc_802F5480;
        break;
    case 0x802F548Cu:
        goto loc_802F548C;
        break;
    case 0x802F545Cu:
        goto loc_802F545C;
        break;
    case 0x802F5498u:
        goto loc_802F5498;
        break;
    case 0x802F54A4u:
        goto loc_802F54A4;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_802F53CC:
{
    r0 = 32;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    goto loc_802F54AC;
}

loc_802F53D8:
{
    r0 = 33;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    goto loc_802F54AC;
}

loc_802F53E4:
{
    r0 = 34;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    goto loc_802F54AC;
}

loc_802F53F0:
{
    r0 = 35;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    goto loc_802F54AC;
}

loc_802F53FC:
{
    r0 = 36;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    goto loc_802F54AC;
}

loc_802F5408:
{
    r0 = 37;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    goto loc_802F54AC;
}

loc_802F5414:
{
    r0 = 38;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    goto loc_802F54AC;
}

loc_802F5420:
{
    r0 = 39;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    goto loc_802F54AC;
}

loc_802F542C:
{
    r0 = 40;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    goto loc_802F54AC;
}

loc_802F5438:
{
    r0 = 41;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    goto loc_802F54AC;
}

loc_802F5444:
{
    r0 = 42;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    goto loc_802F54AC;
}

loc_802F5450:
{
    r0 = 43;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    goto loc_802F54AC;
}

loc_802F545C:
{
    r0 = 44;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    goto loc_802F54AC;
}

loc_802F5468:
{
    r0 = 45;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    goto loc_802F54AC;
}

loc_802F5474:
{
    r0 = 46;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    goto loc_802F54AC;
}

loc_802F5480:
{
    r0 = 47;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    goto loc_802F54AC;
}

loc_802F548C:
{
    r0 = 48;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    goto loc_802F54AC;
}

loc_802F5498:
{
    r0 = 49;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    goto loc_802F54AC;
}

loc_802F54A4:
{
    r0 = 53;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
}

loc_802F54AC:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->ctr = ctr;
    ctx->gpr[29] = r29_entry;
    ctx->gpr[30] = r30_entry;
    ctx->gpr[31] = r31_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802F5358(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802F5358_ra38_6_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003F gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000007 fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802F5358 func_802F5358 preserves=true fpr_mask=0x00000000
