#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80456C5C(CpuContext* ctx);
extern "C" uint32_t func_80456C5C_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8045C15C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
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
    uint32_t r3_addr_10 = 0;
    uint32_t r3_addr_11 = 0;
    uint32_t r3_addr_12 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    const uint32_t r29_entry = r29;
    const uint32_t r30_entry = r30;
    const uint32_t r31_entry = r31;
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x8045C15Cu);
    goto loc_8045C15C;

loc_8045C15C:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    r7 = 0;
    r6 = MemoryInline::FlatRead8((r3 + 1));
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r8 = 1;
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
}

loc_8045C180:
{
    r31 = (r3 + 1);
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 36u, false, true);
    r30 = r5;
    r29 = r4;
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r1 + 8), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r1 + 9), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r1 + 10), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r1 + 11), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r1 + 12), static_cast<uint8_t>(r7));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r1 + 16), r7);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r1 + 20), r7);
    }
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(37))) {
        goto loc_8045C1D8;
    }
}

loc_8045C1B4:
{
    MemoryInline::FlatWriteRam8((r1 + 13), static_cast<uint8_t>(r6));
    r3 = (r31 + 1);
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead32((r1 + 12));
    MemoryInline::FlatWrite32(r5, r4);
    MemoryInline::FlatWrite32((r5 + 4), r0);
    MemoryInline::FlatWrite32((r5 + 8), r7);
    MemoryInline::FlatWrite32((r5 + 12), r7);
    goto loc_8045C6FC;
}

loc_8045C1D8:
{
    r0 = 2;
}

loc_8045C1DC:
{
}

loc_8045C1E0:
{
    r4 = 1;
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(45))) {
        goto loc_8045C20C;
    }
}

loc_8045C1E8:
{
}

loc_8045C1EC:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(43))) {
        goto loc_8045C214;
    }
}

loc_8045C1F0:
{
}

loc_8045C1F4:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(32))) {
        goto loc_8045C21C;
    }
}

loc_8045C1F8:
{
}

loc_8045C1FC:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(35))) {
        goto loc_8045C230;
    }
}

loc_8045C200:
{
}

loc_8045C204:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(48))) {
        goto loc_8045C238;
    }
}

loc_8045C208:
{
    goto loc_8045C24C;
}

loc_8045C20C:
{
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r7));
    goto loc_8045C250;
}

loc_8045C214:
{
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r8));
    goto loc_8045C250;
}

loc_8045C21C:
{
    r3 = MemoryInline::FlatRead8((r1 + 9));
}

loc_8045C224:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_8045C250;
    }
}

loc_8045C228:
{
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r0));
    goto loc_8045C250;
}

loc_8045C230:
{
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r8));
    goto loc_8045C250;
}

loc_8045C238:
{
    r3 = MemoryInline::FlatRead8((r1 + 8));
}

loc_8045C240:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8045C250;
    }
}

loc_8045C244:
{
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    goto loc_8045C250;
}

loc_8045C24C:
{
    r4 = 0;
}

loc_8045C250:
{
}

loc_8045C254:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8045C264;
    }
}

loc_8045C258:
{
    r31 = (r31 + 1);
    r6 = MemoryInline::FlatRead8(r31);
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    goto loc_8045C1DC;
}

loc_8045C264:
{
}

loc_8045C268:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(42))) {
        goto loc_8045C2A4;
    }
}

loc_8045C26C:
{
    r3 = r29;
    r4 = 1;
    if constexpr (KnownRegArgsCpuCall<0x80456C5Cu>(&func_80456C5C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_80456C5C_1691 = func_80456C5C_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_80456C5C_1691;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x80456C5Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
    r0 = MemoryInline::FlatRead32(r3);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
}

loc_8045C284:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_8045C298;
    }
}

loc_8045C288:
{
    r0 = (0 - r0);
    r3 = 0;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
}

loc_8045C298:
{
    r31 = (r31 + 1);
    r6 = MemoryInline::FlatRead8(r31);
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    goto loc_8045C308;
}

loc_8045C2A4:
{
    r3 = 0x80610000u;
    r3 = (r3 + -2448);
    r4 = MemoryInline::FlatRead32((r3 + 56));
    goto loc_8045C2D0;
}

loc_8045C2B4:
{
    r0 = MemoryInline::FlatRead32((r1 + 16));
    r0 = (r0 * 10);
    r3 = (r6 + r0);
    r31 = (r31 + 1);
    r6 = MemoryInline::FlatRead8(r31);
    r0 = (r3 + -48);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
}

loc_8045C2D0:
{
}

loc_8045C2D4:
{
    r0 = 1;
    if ((static_cast<uint32_t>(r6) > static_cast<uint32_t>(255))) {
        goto loc_8045C2E0;
    }
}

loc_8045C2DC:
{
    r0 = 0;
}

loc_8045C2E0:
{
}

loc_8045C2E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8045C2F0;
    }
}

loc_8045C2E8:
{
    r0 = 0;
    goto loc_8045C300;
}

loc_8045C2F0:
{
    r3 = MemoryInline::FlatRead32((r4 + 8));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    r3_addr_2 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_2);
    r0 = (r0 & 8);
}

loc_8045C300:
{
}

loc_8045C304:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8045C2B4;
    }
}

loc_8045C308:
{
    r7 = MemoryInline::FlatRead32((r1 + 16));
}

loc_8045C310:
{
    if ((static_cast<int32_t>(r7) <= static_cast<int32_t>(509))) {
        goto loc_8045C340;
    }
}

loc_8045C314:
{
    r0 = 255;
    MemoryInline::FlatWriteRam8((r1 + 13), static_cast<uint8_t>(r0));
    r5 = MemoryInline::FlatRead32((r1 + 8));
    r3 = (r31 + 1);
    r4 = MemoryInline::FlatRead32((r1 + 12));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    MemoryInline::FlatWrite32(r30, r5);
    MemoryInline::FlatWrite32((r30 + 4), r4);
    MemoryInline::FlatWrite32((r30 + 8), r7);
    MemoryInline::FlatWrite32((r30 + 12), r0);
    goto loc_8045C6FC;
}

loc_8045C340:
{
}

loc_8045C344:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(46))) {
        goto loc_8045C3F4;
    }
}

loc_8045C348:
{
    r31 = (r31 + 1);
    r6 = MemoryInline::FlatRead8(r31);
    r0 = 1;
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r0));
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
}

loc_8045C35C:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(42))) {
        goto loc_8045C390;
    }
}

loc_8045C360:
{
    r3 = r29;
    r4 = 1;
    if constexpr (KnownRegArgsCpuCall<0x80456C5Cu>(&func_80456C5C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_80456C5C_2560 = func_80456C5C_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_80456C5C_2560;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x80456C5Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
    r0 = MemoryInline::FlatRead32(r3);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
}

loc_8045C378:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_8045C384;
    }
}

loc_8045C37C:
{
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r0));
}

loc_8045C384:
{
    r31 = (r31 + 1);
    r6 = MemoryInline::FlatRead8(r31);
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    goto loc_8045C3F4;
}

loc_8045C390:
{
    r3 = 0x80610000u;
    r3 = (r3 + -2448);
    r4 = MemoryInline::FlatRead32((r3 + 56));
    goto loc_8045C3BC;
}

loc_8045C3A0:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r0 = (r0 * 10);
    r3 = (r6 + r0);
    r31 = (r31 + 1);
    r6 = MemoryInline::FlatRead8(r31);
    r0 = (r3 + -48);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
}

loc_8045C3BC:
{
}

loc_8045C3C0:
{
    r0 = 1;
    if ((static_cast<uint32_t>(r6) > static_cast<uint32_t>(255))) {
        goto loc_8045C3CC;
    }
}

loc_8045C3C8:
{
    r0 = 0;
}

loc_8045C3CC:
{
}

loc_8045C3D0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8045C3DC;
    }
}

loc_8045C3D4:
{
    r0 = 0;
    goto loc_8045C3EC;
}

loc_8045C3DC:
{
    r3 = MemoryInline::FlatRead32((r4 + 8));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r0 = (r0_rot_6 & -2);
    r3_addr_6 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_6);
    r0 = (r0 & 8);
}

loc_8045C3EC:
{
}

loc_8045C3F0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8045C3A0;
    }
}

loc_8045C3F4:
{
}

loc_8045C3F8:
{
    r4 = 1;
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(104))) {
        goto loc_8045C42C;
    }
}

loc_8045C400:
{
}

loc_8045C404:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(108))) {
        goto loc_8045C458;
    }
}

loc_8045C408:
{
}

loc_8045C40C:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(76))) {
        goto loc_8045C484;
    }
}

loc_8045C410:
{
}

loc_8045C414:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(106))) {
        goto loc_8045C490;
    }
}

loc_8045C418:
{
}

loc_8045C41C:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(116))) {
        goto loc_8045C49C;
    }
}

loc_8045C420:
{
}

loc_8045C424:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(122))) {
        goto loc_8045C4A8;
    }
}

loc_8045C428:
{
    goto loc_8045C4B4;
}

loc_8045C42C:
{
    r0 = MemoryInline::FlatRead8((r31 + 1));
    r3 = 2;
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r3));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8045C440:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(104))) {
        goto loc_8045C4B8;
    }
}

loc_8045C444:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r0));
    r6 = r3;
    r31 = (r31 + 1);
    goto loc_8045C4B8;
}

loc_8045C458:
{
    r0 = MemoryInline::FlatRead8((r31 + 1));
    r3 = 3;
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r3));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8045C46C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(108))) {
        goto loc_8045C4B8;
    }
}

loc_8045C470:
{
    r0 = 4;
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r0));
    r6 = r3;
    r31 = (r31 + 1);
    goto loc_8045C4B8;
}

loc_8045C484:
{
    r0 = 9;
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r0));
    goto loc_8045C4B8;
}

loc_8045C490:
{
    r0 = 6;
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r0));
    goto loc_8045C4B8;
}

loc_8045C49C:
{
    r0 = 8;
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r0));
    goto loc_8045C4B8;
}

loc_8045C4A8:
{
    r0 = 7;
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r0));
    goto loc_8045C4B8;
}

loc_8045C4B4:
{
    r4 = 0;
}

loc_8045C4B8:
{
}

loc_8045C4BC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8045C4C8;
    }
}

loc_8045C4C0:
{
    r31 = (r31 + 1);
    r6 = MemoryInline::FlatRead8(r31);
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
}

loc_8045C4C8:
{
    r0 = (r6 + -65);
    MemoryInline::FlatWriteRam8((r1 + 13), static_cast<uint8_t>(r6));
}

loc_8045C4D4:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(55))) {
        goto loc_8045C6D0;
    }
}

loc_8045C4D8:
{
    r3 = 0x80610000u;
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_9 & -4);
    r3 = (r3 + -2376);
    r3_addr_9 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_9);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x8045C580u:
        goto loc_8045C580;
        break;
    case 0x8045C6D0u:
        goto loc_8045C6D0;
        break;
    case 0x8045C5E0u:
        goto loc_8045C5E0;
        break;
    case 0x8045C538u:
        goto loc_8045C538;
        break;
    case 0x8045C5CCu:
        goto loc_8045C5CC;
        break;
    case 0x8045C4F0u:
        goto loc_8045C4F0;
        break;
    case 0x8045C654u:
        goto loc_8045C654;
        break;
    case 0x8045C6B8u:
        goto loc_8045C6B8;
        break;
    case 0x8045C630u:
        goto loc_8045C630;
        break;
    case 0x8045C68Cu:
        goto loc_8045C68C;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_8045C4F0:
{
    r0 = MemoryInline::FlatRead8((r1 + 12));
}

loc_8045C4F8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(9))) {
        goto loc_8045C508;
    }
}

loc_8045C4FC:
{
    r0 = 255;
    MemoryInline::FlatWriteRam8((r1 + 13), static_cast<uint8_t>(r0));
    goto loc_8045C6D8;
}

loc_8045C508:
{
    r0 = MemoryInline::FlatRead8((r1 + 10));
}

loc_8045C510:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8045C520;
    }
}

loc_8045C514:
{
    r0 = 1;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    goto loc_8045C6D8;
}

loc_8045C520:
{
    r0 = MemoryInline::FlatRead8((r1 + 8));
}

loc_8045C528:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_8045C6D8;
    }
}

loc_8045C52C:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    goto loc_8045C6D8;
}

loc_8045C538:
{
    r3 = MemoryInline::FlatRead8((r1 + 12));
    r0 = (r3 + 250);
    r0 = (r0 & 255);
}

loc_8045C548:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_8045C55C;
    }
}

loc_8045C54C:
{
}

loc_8045C550:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(2))) {
        goto loc_8045C55C;
    }
}

loc_8045C554:
{
}

loc_8045C558:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(4))) {
        goto loc_8045C568;
    }
}

loc_8045C55C:
{
    r0 = 255;
    MemoryInline::FlatWriteRam8((r1 + 13), static_cast<uint8_t>(r0));
    goto loc_8045C6D8;
}

loc_8045C568:
{
    r0 = MemoryInline::FlatRead8((r1 + 10));
}

loc_8045C570:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8045C6D8;
    }
}

loc_8045C574:
{
    r0 = 6;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    goto loc_8045C6D8;
}

loc_8045C580:
{
    r0 = MemoryInline::FlatRead8((r1 + 10));
}

loc_8045C588:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8045C594;
    }
}

loc_8045C58C:
{
    r0 = 13;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
}

loc_8045C594:
{
    r3 = MemoryInline::FlatRead8((r1 + 12));
    r0 = (r3 + 250);
    r0 = (r0 & 255);
}

loc_8045C5A4:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_8045C5C0;
    }
}

loc_8045C5A8:
{
    r0 = (r3 + 255);
    r0 = (r0 & 255);
}

loc_8045C5B4:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_8045C5C0;
    }
}

loc_8045C5B8:
{
}

loc_8045C5BC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(4))) {
        goto loc_8045C6D8;
    }
}

loc_8045C5C0:
{
    r0 = 255;
    MemoryInline::FlatWriteRam8((r1 + 13), static_cast<uint8_t>(r0));
    goto loc_8045C6D8;
}

loc_8045C5CC:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
}

loc_8045C5D4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8045C5E0;
    }
}

loc_8045C5D8:
{
    r0 = 1;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
}

loc_8045C5E0:
{
    r3 = MemoryInline::FlatRead8((r1 + 12));
    r0 = (r3 + 250);
    r0 = (r0 & 255);
}

loc_8045C5F0:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_8045C60C;
    }
}

loc_8045C5F4:
{
    r0 = (r3 + 255);
    r0 = (r0 & 255);
}

loc_8045C600:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_8045C60C;
    }
}

loc_8045C604:
{
}

loc_8045C608:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(4))) {
        goto loc_8045C618;
    }
}

loc_8045C60C:
{
    r0 = 255;
    MemoryInline::FlatWriteRam8((r1 + 13), static_cast<uint8_t>(r0));
    goto loc_8045C6D8;
}

loc_8045C618:
{
    r0 = MemoryInline::FlatRead8((r1 + 10));
}

loc_8045C620:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8045C6D8;
    }
}

loc_8045C624:
{
    r0 = 6;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    goto loc_8045C6D8;
}

loc_8045C630:
{
    r5 = 120;
    r4 = 1;
    r3 = 3;
    r0 = 8;
    MemoryInline::FlatWriteRam8((r1 + 13), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    goto loc_8045C6D8;
}

loc_8045C654:
{
    r3 = MemoryInline::FlatRead8((r1 + 12));
}

loc_8045C65C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(3))) {
        goto loc_8045C66C;
    }
}

loc_8045C660:
{
    r0 = 5;
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r0));
    goto loc_8045C6D8;
}

loc_8045C66C:
{
    r0 = MemoryInline::FlatRead8((r1 + 10));
}

loc_8045C674:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8045C680;
    }
}

loc_8045C678:
{
}

loc_8045C67C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8045C6D8;
    }
}

loc_8045C680:
{
    r0 = 255;
    MemoryInline::FlatWriteRam8((r1 + 13), static_cast<uint8_t>(r0));
    goto loc_8045C6D8;
}

loc_8045C68C:
{
    r0 = MemoryInline::FlatRead8((r1 + 12));
}

loc_8045C694:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_8045C6A4;
    }
}

loc_8045C698:
{
    r0 = 5;
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r0));
    goto loc_8045C6D8;
}

loc_8045C6A4:
{
}

loc_8045C6A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8045C6D8;
    }
}

loc_8045C6AC:
{
    r0 = 255;
    MemoryInline::FlatWriteRam8((r1 + 13), static_cast<uint8_t>(r0));
    goto loc_8045C6D8;
}

loc_8045C6B8:
{
    r0 = MemoryInline::FlatRead8((r1 + 12));
}

loc_8045C6C0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(9))) {
        goto loc_8045C6D8;
    }
}

loc_8045C6C4:
{
    r0 = 255;
    MemoryInline::FlatWriteRam8((r1 + 13), static_cast<uint8_t>(r0));
    goto loc_8045C6D8;
}

loc_8045C6D0:
{
    r0 = 255;
    MemoryInline::FlatWriteRam8((r1 + 13), static_cast<uint8_t>(r0));
}

loc_8045C6D8:
{
    r6 = MemoryInline::FlatRead32((r1 + 8));
    r3 = (r31 + 1);
    r5 = MemoryInline::FlatRead32((r1 + 12));
    r4 = MemoryInline::FlatRead32((r1 + 16));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    MemoryInline::FlatWrite32(r30, r6);
    MemoryInline::FlatWrite32((r30 + 4), r5);
    MemoryInline::FlatWrite32((r30 + 8), r4);
    MemoryInline::FlatWrite32((r30 + 12), r0);
}

loc_8045C6FC:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->ctr = ctr;
    ctx->gpr[29] = r29_entry;
    ctx->gpr[30] = r30_entry;
    ctx->gpr[31] = r31_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8045C15C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8045C15C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000FFB gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8045C15C func_8045C15C preserves=true fpr_mask=0x00000000
