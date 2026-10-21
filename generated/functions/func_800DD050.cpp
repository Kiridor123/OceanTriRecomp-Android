#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800DA790(CpuContext* ctx);
extern "C" uint64_t func_800DA790_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_800DD050_ra38_e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    const uint32_t r29_entry = r29;
    const uint32_t r30_entry = r30;
    const uint32_t r31_entry = r31;
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x800DD050u);
    goto loc_800DD050;

loc_800DD050:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r29 = r3;
    r31 = r4;
    // inline leaf 0x802AFCD8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3013));
    // end of inlined leaf 0x802AFCD8
    r3 = (r3 & 255);
    // inline leaf 0x802B06CC (8 guest instruction(s))
}

loc_inl1_0x802B06CC:
{
    r0 = (r3 & 255);
    r4 = 0x805D0000u;
    r4 = (r4 + -2816);
    r4_addr_0 = (r4 + r0);
    r0 = MemoryInline::FlatRead8(r4_addr_0);
}

loc_inl1_0x802B06E0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x802B06E4:
{
    r3 = r0;
    goto loc_inl1_cont_802B06CC;
}

loc_inl1_return:
{
}

loc_inl1_cont_802B06CC:
{
    // end of inlined leaf 0x802B06CC
    r30 = r3;
    // inline leaf 0x802AFCE8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3014));
    // end of inlined leaf 0x802AFCE8
    r0 = (r30 & 255);
}

loc_800DD08C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(10))) {
        goto loc_800DD22C;
    }
}

loc_800DD090:
{
    r5 = 0x805A0000u;
    r5 = (r5 + -31984);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r5_addr_1 = (r5 + r0);
    r5 = MemoryInline::FlatRead32(r5_addr_1);
    ctr = r5;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x800DD22Cu:
        goto loc_800DD22C;
        break;
    case 0x800DD0A8u:
        goto loc_800DD0A8;
        break;
    case 0x800DD0CCu:
        goto loc_800DD0CC;
        break;
    case 0x800DD0FCu:
        goto loc_800DD0FC;
        break;
    case 0x800DD144u:
        goto loc_800DD144;
        break;
    case 0x800DD158u:
        goto loc_800DD158;
        break;
    case 0x800DD17Cu:
        goto loc_800DD17C;
        break;
    case 0x800DD1F0u:
        goto loc_800DD1F0;
        break;
    case 0x800DD204u:
        goto loc_800DD204;
        break;
    case 0x800DD218u:
        goto loc_800DD218;
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
        ctx->fpr[3] = f3;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_800DD0A8:
{
    r4 = (r29 & 255);
    r3 = 1431633920;
    r0 = (r3 + 21846);
    r3 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 1);
    r0 = (r3 + r0);
    r0 = (r0 * 3);
    r4 = (r4 - r0);
    goto loc_800DD22C;
}

loc_800DD0CC:
{
    r0 = (r3 & 255);
}

loc_800DD0D4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(6))) {
        goto loc_800DD0F4;
    }
}

loc_800DD0D8:
{
    r0 = (r29 & 255);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    r0 = (r0 & 1);
    r0 = (r0 ^ r3);
    r3 = (r0 - r3);
    r4 = (r3 + 3);
    goto loc_800DD22C;
}

loc_800DD0F4:
{
    r4 = 10;
    goto loc_800DD22C;
}

loc_800DD0FC:
{
    r0 = (r3 & 255);
}

loc_800DD104:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_800DD124;
    }
}

loc_800DD108:
{
}

loc_800DD10C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(9))) {
        goto loc_800DD12C;
    }
}

loc_800DD110:
{
}

loc_800DD114:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_800DD134;
    }
}

loc_800DD118:
{
}

loc_800DD11C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(10))) {
        goto loc_800DD134;
    }
}

loc_800DD120:
{
    goto loc_800DD238;
}

loc_800DD124:
{
    r4 = 4;
    goto loc_800DD22C;
}

loc_800DD12C:
{
    r4 = 5;
    goto loc_800DD22C;
}

loc_800DD134:
{
    r3 = (r29 & 255);
    r4 = (r3 + 3);
    goto loc_800DD22C;
}

loc_800DD144:
{
    r0 = (r3 & 255);
}

loc_800DD14C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_800DD238;
    }
}

loc_800DD150:
{
    r4 = 3;
    goto loc_800DD22C;
}

loc_800DD158:
{
    r0 = (r3 & 255);
}

loc_800DD160:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_800DD16C;
    }
}

loc_800DD164:
{
}

loc_800DD168:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_800DD238;
    }
}

loc_800DD16C:
{
    r3 = (r29 & 255);
    r4 = (r3 + 3);
    goto loc_800DD22C;
}

loc_800DD17C:
{
    r0 = (r3 & 255);
}

loc_800DD184:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800DD19C;
    }
}

loc_800DD188:
{
}

loc_800DD18C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_800DD1A8;
    }
}

loc_800DD190:
{
}

loc_800DD194:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_800DD1B0;
    }
}

loc_800DD198:
{
    goto loc_800DD238;
}

loc_800DD19C:
{
    r3 = (r29 & 255);
    r4 = (r3 + 3);
    goto loc_800DD22C;
}

loc_800DD1A8:
{
    r4 = 5;
    goto loc_800DD22C;
}

loc_800DD1B0:
{
    r3 = (r29 & 255);
}

loc_800DD1B8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800DD1E4;
    }
}

loc_800DD1BC:
{
    r3 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -30352));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -30348));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -30344));
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    r3 = 46;
    r4 = 8;
    r5 = (r1 + 8);
    ctx->lr = 0x800DD1E0u;
    if constexpr (KnownRegArgsCpuCall<0x800DA790u>(&func_800DA790)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_800DA790_1E41 = func_800DA790_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800DA790_1E41);
        r4 = static_cast<uint32_t>(regargs_result_800DA790_1E41 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DA790u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        ctr = ctx->ctr;
    }
    goto loc_800DD238;
}

loc_800DD1E4:
{
    r4 = (r3 + 5);
    goto loc_800DD22C;
}

loc_800DD1F0:
{
    r0 = (r3 & 255);
}

loc_800DD1F8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_800DD238;
    }
}

loc_800DD1FC:
{
    r4 = 3;
    goto loc_800DD22C;
}

loc_800DD204:
{
    r0 = (r3 & 255);
}

loc_800DD20C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800DD238;
    }
}

loc_800DD210:
{
    r4 = 3;
    goto loc_800DD22C;
}

loc_800DD218:
{
    r0 = (r3 & 255);
}

loc_800DD220:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_800DD238;
    }
}

loc_800DD224:
{
    r3 = (r29 & 255);
    r4 = (r3 + 3);
}

loc_800DD22C:
{
    r3 = 46;
    r5 = r31;
    ctx->lr = 0x800DD238u;
    if constexpr (KnownRegArgsCpuCall<0x800DA790u>(&func_800DA790)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_800DA790_247F = func_800DA790_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800DA790_247F);
        r4 = static_cast<uint32_t>(regargs_result_800DA790_247F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DA790u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        ctr = ctx->ctr;
    }
}

loc_800DD238:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->ctr = ctr;
    ctx->gpr[29] = r29_entry;
    ctx->gpr[30] = r30_entry;
    ctx->gpr[31] = r31_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800DD050(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800DD050_ra38_e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003F gpr_write=0x0000083B gpr_return=0x00000018 fpr_read=0x0000000F fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800DD050 func_800DD050 preserves=true fpr_mask=0x00000000
