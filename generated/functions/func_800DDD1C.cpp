#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800D8EBC(CpuContext* ctx);
extern "C" uint32_t func_800D8EBC_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_800DDD1C_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
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
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    const uint32_t r28_entry = r28;
    const uint32_t r29_entry = r29;
    const uint32_t r30_entry = r30;
    const uint32_t r31_entry = r31;
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x800DDD1Cu);
    goto loc_800DDD1C;

loc_800DDD1C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r28 = r4;
    r0 = (r3 & 255);
}

loc_800DDD44:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(14))) {
        goto loc_800DDDD4;
    }
}

loc_800DDD48:
{
    r3 = 0x805A0000u;
    r3 = (r3 + -31896);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x800DDD60u:
        goto loc_800DDD60;
        break;
    case 0x800DDD68u:
        goto loc_800DDD68;
        break;
    case 0x800DDD70u:
        goto loc_800DDD70;
        break;
    case 0x800DDD78u:
        goto loc_800DDD78;
        break;
    case 0x800DDD80u:
        goto loc_800DDD80;
        break;
    case 0x800DDD88u:
        goto loc_800DDD88;
        break;
    case 0x800DDD90u:
        goto loc_800DDD90;
        break;
    case 0x800DDD98u:
        goto loc_800DDD98;
        break;
    case 0x800DDDA0u:
        goto loc_800DDDA0;
        break;
    case 0x800DDDA8u:
        goto loc_800DDDA8;
        break;
    case 0x800DDDB0u:
        goto loc_800DDDB0;
        break;
    case 0x800DDDB8u:
        goto loc_800DDDB8;
        break;
    case 0x800DDDC0u:
        goto loc_800DDDC0;
        break;
    case 0x800DDDC8u:
        goto loc_800DDDC8;
        break;
    case 0x800DDDD0u:
        goto loc_800DDDD0;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_800DDD60:
{
    r29 = 40;
    goto loc_800DDDD4;
}

loc_800DDD68:
{
    r29 = 41;
    goto loc_800DDDD4;
}

loc_800DDD70:
{
    r29 = 59;
    goto loc_800DDDD4;
}

loc_800DDD78:
{
    r29 = 60;
    goto loc_800DDDD4;
}

loc_800DDD80:
{
    r29 = 42;
    goto loc_800DDDD4;
}

loc_800DDD88:
{
    r29 = 43;
    goto loc_800DDDD4;
}

loc_800DDD90:
{
    r29 = 44;
    goto loc_800DDDD4;
}

loc_800DDD98:
{
    r29 = 49;
    goto loc_800DDDD4;
}

loc_800DDDA0:
{
    r29 = 50;
    goto loc_800DDDD4;
}

loc_800DDDA8:
{
    r29 = 55;
    goto loc_800DDDD4;
}

loc_800DDDB0:
{
    r29 = 19;
    goto loc_800DDDD4;
}

loc_800DDDB8:
{
    r29 = 16;
    goto loc_800DDDD4;
}

loc_800DDDC0:
{
    r29 = 47;
    goto loc_800DDDD4;
}

loc_800DDDC8:
{
    r29 = 45;
    goto loc_800DDDD4;
}

loc_800DDDD0:
{
    r29 = 58;
}

loc_800DDDD4:
{
    r3 = MemoryInline::FlatRead32((r13 + -17576));
    r3 = (r3 + 196608);
    r30 = MemoryInline::FlatRead32((r3 + -27936));
}

loc_800DDDE4:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_800DDE54;
    }
}

loc_800DDDE8:
{
    r3 = r30;
    r4 = r29;
    if constexpr (KnownRegArgsCpuCall<0x800D8EBCu>(&func_800D8EBC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_800D8EBC_10E2 = func_800D8EBC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800D8EBC_10E2;
        r0 = ctx->gpr[0];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800D8EBCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        ctr = ctx->ctr;
    }
    r31 = r3;
}

loc_800DDDFC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800DDE54;
    }
}

loc_800DDE00:
{
    r0 = 3;
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = 2;
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r30 + 12));
    MemoryInline::FlatWrite32((r3 + 40), r0);
    MemoryInline::FlatWrite32((r3 + 44), r29);
    r0 = -1;
    MemoryInline::FlatWrite32((r3 + 48), r0);
    MemoryInline::FlatWrite32((r3 + 52), r0);
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 56), r0);
    r3 = (r3 + 4);
    r4 = r28;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 4));
    MemoryInline::FlatWriteFloat32((r31 + 16), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 8));
    MemoryInline::FlatWriteFloat32((r31 + 20), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 12));
    MemoryInline::FlatWriteFloat32((r31 + 24), f0.d);
}

loc_800DDE54:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->ctr = ctr;
    ctx->gpr[28] = r28_entry;
    ctx->gpr[29] = r29_entry;
    ctx->gpr[30] = r30_entry;
    ctx->gpr[31] = r31_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800DDD1C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800DDD1C_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000201B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000001 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800DDD1C func_800DDD1C preserves=true fpr_mask=0x00000000
