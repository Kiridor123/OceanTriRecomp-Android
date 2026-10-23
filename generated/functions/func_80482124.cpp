#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80482124_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];

    goto loc_80482124;

loc_80482124:
{
    r5 = 0x80740000u;
    r6 = 0;
    r5 = (r5 + -17608);
    guest_range_0 = MemoryInline::ResolveRangeHost((r5 + 52), 0, 1134u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 281u, (r5 + 333));
}

loc_80482138:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80482148;
    }
}

loc_8048213C:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, (r5 + 52));
}

loc_80482144:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r3))) {
        goto loc_804821A0;
    }
}

loc_80482148:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 565u, (r5 + 617));
    r6 = 1;
}

loc_80482154:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80482164;
    }
}

loc_80482158:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 284u, (r5 + 336));
}

loc_80482160:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r3))) {
        goto loc_804821A0;
    }
}

loc_80482164:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 849u, (r5 + 901));
    r6 = 2;
}

loc_80482170:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80482180;
    }
}

loc_80482174:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 568u, (r5 + 620));
}

loc_8048217C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r3))) {
        goto loc_804821A0;
    }
}

loc_80482180:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1133u, (r5 + 1185));
    r6 = 3;
}

loc_8048218C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8048219C;
    }
}

loc_80482190:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 852u, (r5 + 904));
}

loc_80482198:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r3))) {
        goto loc_804821A0;
    }
}

loc_8048219C:
{
    r6 = 4;
}

loc_804821A0:
{
}

loc_804821A4:
{
    if ((static_cast<uint32_t>(r6) >= static_cast<uint32_t>(4))) {
        goto loc_return;
    }
}

loc_804821A8:
{
    r0 = (r6 * 284);
    r3 = 0x80740000u;
    r3 = (r3 + -17608);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite16((r3 + 58), static_cast<uint16_t>(r4));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return r3;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return r3;
}

}

extern "C" void func_80482124(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80482124_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000069 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80482124 func_80482124 preserves=true fpr_mask=0x00000000
