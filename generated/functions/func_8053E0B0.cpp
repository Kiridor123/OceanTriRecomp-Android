#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8053E0B0_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r12 = ctx->gpr[12];
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
    const uint32_t r30_entry = r30;
    const uint32_t r31_entry = r31;
    uint32_t ctr = ctx->ctr;

    goto loc_8053E0B0;

loc_8053E0B0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
}

loc_8053E0BC:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r30 = r4;
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(10))) {
        goto loc_8053E14C;
    }
}

loc_8053E0D4:
{
    r0 = MemoryInline::FlatRead32((r3 + 44));
    r4 = 1;
    MemoryInline::FlatWrite8((r3 + 52), static_cast<uint8_t>(r4));
}

loc_8053E0E4:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(10))) {
        goto loc_8053E108;
    }
}

loc_8053E0E8:
{
    r3 = 0x80650000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r3 + -152);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x8053E100u:
        goto loc_8053E100;
        break;
    case 0x8053E108u:
        goto loc_8053E108;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[12] = r12;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_8053E100:
{
    r0 = 0;
    goto loc_8053E10C;
}

loc_8053E108:
{
    r0 = 1;
}

loc_8053E10C:
{
}

loc_8053E110:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8053E130;
    }
}

loc_8053E114:
{
    r12 = MemoryInline::FlatRead32(r31);
    r3 = r31;
    r4 = 9;
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x8053E12Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    goto loc_8053E528;
}

loc_8053E130:
{
    r12 = MemoryInline::FlatRead32(r31);
    r3 = r31;
    r4 = 4;
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x8053E148u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    goto loc_8053E528;
}

loc_8053E14C:
{
}

loc_8053E150:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(11))) {
        goto loc_8053E1CC;
    }
}

loc_8053E154:
{
    r0 = MemoryInline::FlatRead32((r3 + 44));
    r4 = 0;
    MemoryInline::FlatWrite8((r3 + 52), static_cast<uint8_t>(r4));
}

loc_8053E164:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(10))) {
        goto loc_8053E188;
    }
}

loc_8053E168:
{
    r3 = 0x80650000u;
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r3 = (r3 + -196);
    r3_addr_4 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_4);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x8053E180u:
        goto loc_8053E180;
        break;
    case 0x8053E188u:
        goto loc_8053E188;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[12] = r12;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_8053E180:
{
    r0 = 0;
    goto loc_8053E18C;
}

loc_8053E188:
{
    r0 = 1;
}

loc_8053E18C:
{
}

loc_8053E190:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8053E1B0;
    }
}

loc_8053E194:
{
    r12 = MemoryInline::FlatRead32(r31);
    r3 = r31;
    r4 = 2;
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x8053E1ACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    goto loc_8053E528;
}

loc_8053E1B0:
{
    r12 = MemoryInline::FlatRead32(r31);
    r3 = r31;
    r4 = 11;
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x8053E1C8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    goto loc_8053E528;
}

loc_8053E1CC:
{
}

loc_8053E1D0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(5))) {
        goto loc_8053E238;
    }
}

loc_8053E1D4:
{
    r4 = MemoryInline::FlatRead32((r3 + 44));
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 52), static_cast<uint8_t>(r0));
}

loc_8053E1E4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(9))) {
        goto loc_8053E528;
    }
}

loc_8053E1E8:
{
}

loc_8053E1EC:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(10))) {
        goto loc_8053E208;
    }
}

loc_8053E1F0:
{
    r12 = MemoryInline::FlatRead32(r3);
    r4 = 6;
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x8053E204u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    goto loc_8053E528;
}

loc_8053E208:
{
}

loc_8053E20C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(8))) {
        goto loc_8053E21C;
    }
}

loc_8053E210:
{
    r0 = (r4 + -4);
}

loc_8053E218:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_8053E528;
    }
}

loc_8053E21C:
{
    r12 = MemoryInline::FlatRead32(r31);
    r3 = r31;
    r4 = 3;
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x8053E234u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    goto loc_8053E528;
}

loc_8053E238:
{
    r0 = MemoryInline::FlatRead8((r3 + 52));
}

loc_8053E240:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8053E3A8;
    }
}

loc_8053E244:
{
    r0 = MemoryInline::FlatRead32((r3 + 44));
}

loc_8053E24C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(11))) {
        goto loc_8053E528;
    }
}

loc_8053E250:
{
    r5 = 0x80650000u;
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & -4);
    r5 = (r5 + -244);
    r5_addr_1 = (r5 + r0);
    r5 = MemoryInline::FlatRead32(r5_addr_1);
    ctr = r5;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x8053E2A4u:
        goto loc_8053E2A4;
        break;
    case 0x8053E2C8u:
        goto loc_8053E2C8;
        break;
    case 0x8053E328u:
        goto loc_8053E328;
        break;
    case 0x8053E308u:
        goto loc_8053E308;
        break;
    case 0x8053E528u:
        goto loc_8053E528;
        break;
    case 0x8053E288u:
        goto loc_8053E288;
        break;
    case 0x8053E268u:
        goto loc_8053E268;
        break;
    case 0x8053E368u:
        goto loc_8053E368;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[12] = r12;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_8053E268:
{
}

loc_8053E26C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(4))) {
        goto loc_8053E528;
    }
}

loc_8053E270:
{
    r12 = MemoryInline::FlatRead32(r3);
    r4 = 0;
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x8053E284u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    goto loc_8053E528;
}

loc_8053E288:
{
}

loc_8053E28C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(4))) {
        goto loc_8053E2A4;
    }
}

loc_8053E290:
{
    r12 = MemoryInline::FlatRead32(r3);
    r4 = 0;
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x8053E2A4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
}

loc_8053E2A4:
{
}

loc_8053E2A8:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(1))) {
        goto loc_8053E528;
    }
}

loc_8053E2AC:
{
    r12 = MemoryInline::FlatRead32(r31);
    r3 = r31;
    r4 = 1;
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x8053E2C4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    goto loc_8053E528;
}

loc_8053E2C8:
{
}

loc_8053E2CC:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(4))) {
        goto loc_8053E2E4;
    }
}

loc_8053E2D0:
{
    r12 = MemoryInline::FlatRead32(r3);
    r4 = 3;
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x8053E2E4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
}

loc_8053E2E4:
{
}

loc_8053E2E8:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(2))) {
        goto loc_8053E528;
    }
}

loc_8053E2EC:
{
    r12 = MemoryInline::FlatRead32(r31);
    r3 = r31;
    r4 = 2;
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x8053E304u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    goto loc_8053E528;
}

loc_8053E308:
{
}

loc_8053E30C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(2))) {
        goto loc_8053E528;
    }
}

loc_8053E310:
{
    r12 = MemoryInline::FlatRead32(r3);
    r4 = 2;
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x8053E324u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    goto loc_8053E528;
}

loc_8053E328:
{
}

loc_8053E32C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(4))) {
        goto loc_8053E344;
    }
}

loc_8053E330:
{
    r12 = MemoryInline::FlatRead32(r3);
    r4 = 0;
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x8053E344u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
}

loc_8053E344:
{
}

loc_8053E348:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(1))) {
        goto loc_8053E528;
    }
}

loc_8053E34C:
{
    r12 = MemoryInline::FlatRead32(r31);
    r3 = r31;
    r4 = 1;
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x8053E364u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    goto loc_8053E528;
}

loc_8053E368:
{
}

loc_8053E36C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(4))) {
        goto loc_8053E384;
    }
}

loc_8053E370:
{
    r12 = MemoryInline::FlatRead32(r3);
    r4 = 3;
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x8053E384u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
}

loc_8053E384:
{
}

loc_8053E388:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(2))) {
        goto loc_8053E528;
    }
}

loc_8053E38C:
{
    r12 = MemoryInline::FlatRead32(r31);
    r3 = r31;
    r4 = 2;
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x8053E3A4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    goto loc_8053E528;
}

loc_8053E3A8:
{
    r0 = MemoryInline::FlatRead32((r3 + 44));
}

loc_8053E3B0:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(11))) {
        goto loc_8053E528;
    }
}

loc_8053E3B4:
{
    r5 = 0x80650000u;
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & -4);
    r5 = (r5 + -292);
    r5_addr_2 = (r5 + r0);
    r5 = MemoryInline::FlatRead32(r5_addr_2);
    ctr = r5;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x8053E3E8u:
        goto loc_8053E3E8;
        break;
    case 0x8053E528u:
        goto loc_8053E528;
        break;
    case 0x8053E4ECu:
        goto loc_8053E4EC;
        break;
    case 0x8053E48Cu:
        goto loc_8053E48C;
        break;
    case 0x8053E3CCu:
        goto loc_8053E3CC;
        break;
    case 0x8053E44Cu:
        goto loc_8053E44C;
        break;
    case 0x8053E4ACu:
        goto loc_8053E4AC;
        break;
    case 0x8053E42Cu:
        goto loc_8053E42C;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[12] = r12;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_8053E3CC:
{
}

loc_8053E3D0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(4))) {
        goto loc_8053E3E8;
    }
}

loc_8053E3D4:
{
    r12 = MemoryInline::FlatRead32(r3);
    r4 = 0;
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x8053E3E8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
}

loc_8053E3E8:
{
}

loc_8053E3EC:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(1))) {
        goto loc_8053E408;
    }
}

loc_8053E3F0:
{
    r12 = MemoryInline::FlatRead32(r31);
    r3 = r31;
    r4 = 1;
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x8053E408u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
}

loc_8053E408:
{
}

loc_8053E40C:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_8053E528;
    }
}

loc_8053E410:
{
    r12 = MemoryInline::FlatRead32(r31);
    r3 = r31;
    r4 = 9;
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x8053E428u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    goto loc_8053E528;
}

loc_8053E42C:
{
}

loc_8053E430:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(1))) {
        goto loc_8053E528;
    }
}

loc_8053E434:
{
    r12 = MemoryInline::FlatRead32(r3);
    r4 = 8;
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x8053E448u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    goto loc_8053E528;
}

loc_8053E44C:
{
}

loc_8053E450:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(4))) {
        goto loc_8053E468;
    }
}

loc_8053E454:
{
    r12 = MemoryInline::FlatRead32(r3);
    r4 = 5;
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x8053E468u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
}

loc_8053E468:
{
}

loc_8053E46C:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(2))) {
        goto loc_8053E528;
    }
}

loc_8053E470:
{
    r12 = MemoryInline::FlatRead32(r31);
    r3 = r31;
    r4 = 9;
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x8053E488u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    goto loc_8053E528;
}

loc_8053E48C:
{
}

loc_8053E490:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(2))) {
        goto loc_8053E528;
    }
}

loc_8053E494:
{
    r12 = MemoryInline::FlatRead32(r3);
    r4 = 9;
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x8053E4A8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    goto loc_8053E528;
}

loc_8053E4AC:
{
}

loc_8053E4B0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(4))) {
        goto loc_8053E4C8;
    }
}

loc_8053E4B4:
{
    r12 = MemoryInline::FlatRead32(r3);
    r4 = 10;
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x8053E4C8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
}

loc_8053E4C8:
{
}

loc_8053E4CC:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(1))) {
        goto loc_8053E528;
    }
}

loc_8053E4D0:
{
    r12 = MemoryInline::FlatRead32(r31);
    r3 = r31;
    r4 = 8;
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x8053E4E8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    goto loc_8053E528;
}

loc_8053E4EC:
{
}

loc_8053E4F0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(4))) {
        goto loc_8053E508;
    }
}

loc_8053E4F4:
{
    r12 = MemoryInline::FlatRead32(r3);
    r4 = 5;
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x8053E508u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
}

loc_8053E508:
{
}

loc_8053E50C:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(2))) {
        goto loc_8053E528;
    }
}

loc_8053E510:
{
    r12 = MemoryInline::FlatRead32(r31);
    r3 = r31;
    r4 = 9;
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x8053E528u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
}

loc_8053E528:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    ctx->gpr[30] = r30_entry;
    ctx->gpr[31] = r31_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8053E0B0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8053E0B0_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8053E0B0 func_8053E0B0 preserves=true fpr_mask=0x00000000
