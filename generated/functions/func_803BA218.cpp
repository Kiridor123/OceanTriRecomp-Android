#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8028F2B0(CpuContext* ctx);
extern "C" uint32_t func_8028F2B0_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_803BA218_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
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
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x803BA218u);
    goto loc_803BA218;

loc_803BA218:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r0 = MemoryInline::FlatRead32((r3 + 488));
}

loc_803BA240:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803BA5E0;
    }
}

loc_803BA244:
{
    ctx->lr = 0x803BA248u;
    if constexpr (KnownRegArgsCpuCall<0x8028F2B0u>(&func_8028F2B0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_8028F2B0_86B = func_8028F2B0_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8028F2B0_86B;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8028F2B0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r31 = r3;
    r3 = MemoryInline::FlatRead32((r29 + 488));
    r28 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 4), 0, 254u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, (r3 + 4));
}

loc_803BA25C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803BA264;
    }
}

loc_803BA260:
{
    r28 = 1;
}

loc_803BA264:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 36u, (r3 + 40));
}

loc_803BA26C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803BA274;
    }
}

loc_803BA270:
{
    r28 = (r28 + 1);
}

loc_803BA274:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 72u, (r3 + 76));
}

loc_803BA27C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803BA284;
    }
}

loc_803BA280:
{
    r28 = (r28 + 1);
}

loc_803BA284:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 108u, (r3 + 112));
}

loc_803BA28C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803BA294;
    }
}

loc_803BA290:
{
    r28 = (r28 + 1);
}

loc_803BA294:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 144u, (r3 + 148));
}

loc_803BA29C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803BA2A4;
    }
}

loc_803BA2A0:
{
    r28 = (r28 + 1);
}

loc_803BA2A4:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 180u, (r3 + 184));
}

loc_803BA2AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803BA2B4;
    }
}

loc_803BA2B0:
{
    r28 = (r28 + 1);
}

loc_803BA2B4:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 216u, (r3 + 220));
}

loc_803BA2BC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803BA2C4;
    }
}

loc_803BA2C0:
{
    r28 = (r28 + 1);
}

loc_803BA2C4:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 252u, (r3 + 256));
}

loc_803BA2CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803BA2D4;
    }
}

loc_803BA2D0:
{
    r28 = (r28 + 1);
}

loc_803BA2D4:
{
}

loc_803BA2D8:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_803BA5E0;
    }
}

loc_803BA2DC:
{
    r3 = 0;
    // inline leaf 0x800CEF20 (23 guest instruction(s))
}

loc_inl0_0x800CEF20:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r6 = (r4 + r0);
    r0 = MemoryInline::FlatRead16((r6 + 24));
}

loc_inl0_0x800CEF38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x800CEF40;
    }
}

loc_inl0_0x800CEF3C:
{
    r0 = 1;
}

loc_inl0_0x800CEF40:
{
    r5 = (r0 * 176);
    r3 = 11337728;
    r0 = (r3 + 30009);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r5)) >> 32));
    r0 = (r5 - r3);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_2 & 2147483647);
    r0 = (r0 + r3);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_1 & 131071);
    r3 = 65536;
    r0 = (r3 + -173);
    r0 = (r4 * r0);
    r0 = (r5 - r0);
    r3 = (r0 & 65535);
    MemoryInline::FlatWriteRam16((r6 + 24), static_cast<uint16_t>(r3));
}

loc_inl0_cont_800CEF20:
{
    // end of inlined leaf 0x800CEF20
    r3 = (r3 & 65535);
    r0 = PPC_Divw(static_cast<int32_t>(r3), static_cast<int32_t>(r28));
    r0 = (r0 * r28);
    r0 = (r3 - r0);
    r3 = MemoryInline::FlatRead32((r29 + 488));
    r28 = (r3 + 4);
    r0 = (r0 * 36);
    r28 = (r28 + r0);
    r30 = 0;
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 292), 0, 120u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 7u, (r3 + 299));
}

loc_803BA310:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803BA31C;
    }
}

loc_803BA314:
{
    r0 = MemoryInline::ReadResolved16(guest_range_1, 0u, (r3 + 292));
    r30 = r0;
}

loc_803BA31C:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 23u, (r3 + 315));
}

loc_803BA324:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803BA330;
    }
}

loc_803BA328:
{
    r0 = MemoryInline::ReadResolved16(guest_range_1, 16u, (r3 + 308));
    r30 = (r30 + r0);
}

loc_803BA330:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 39u, (r3 + 331));
}

loc_803BA338:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803BA344;
    }
}

loc_803BA33C:
{
    r0 = MemoryInline::ReadResolved16(guest_range_1, 32u, (r3 + 324));
    r30 = (r30 + r0);
}

loc_803BA344:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 55u, (r3 + 347));
}

loc_803BA34C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803BA358;
    }
}

loc_803BA350:
{
    r0 = MemoryInline::ReadResolved16(guest_range_1, 48u, (r3 + 340));
    r30 = (r30 + r0);
}

loc_803BA358:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 71u, (r3 + 363));
}

loc_803BA360:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803BA36C;
    }
}

loc_803BA364:
{
    r0 = MemoryInline::ReadResolved16(guest_range_1, 64u, (r3 + 356));
    r30 = (r30 + r0);
}

loc_803BA36C:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 87u, (r3 + 379));
}

loc_803BA374:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803BA380;
    }
}

loc_803BA378:
{
    r0 = MemoryInline::ReadResolved16(guest_range_1, 80u, (r3 + 372));
    r30 = (r30 + r0);
}

loc_803BA380:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 103u, (r3 + 395));
}

loc_803BA388:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803BA394;
    }
}

loc_803BA38C:
{
    r0 = MemoryInline::ReadResolved16(guest_range_1, 96u, (r3 + 388));
    r30 = (r30 + r0);
}

loc_803BA394:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 119u, (r3 + 411));
}

loc_803BA39C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803BA3A8;
    }
}

loc_803BA3A0:
{
    r0 = MemoryInline::ReadResolved16(guest_range_1, 112u, (r3 + 404));
    r30 = (r30 + r0);
}

loc_803BA3A8:
{
}

loc_803BA3AC:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_803BA5E0;
    }
}

loc_803BA3B0:
{
    r3 = 0;
    // inline leaf 0x800CEF20 (23 guest instruction(s))
}

loc_inl1_0x800CEF20:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & -2);
    r6 = (r4 + r0);
    r0 = MemoryInline::FlatRead16((r6 + 24));
}

loc_inl1_0x800CEF38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x800CEF40;
    }
}

loc_inl1_0x800CEF3C:
{
    r0 = 1;
}

loc_inl1_0x800CEF40:
{
    r5 = (r0 * 176);
    r3 = 11337728;
    r0 = (r3 + 30009);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r5)) >> 32));
    r0 = (r5 - r3);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_4 & 2147483647);
    r0 = (r0 + r3);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_2 & 131071);
    r3 = 65536;
    r0 = (r3 + -173);
    r0 = (r4 * r0);
    r0 = (r5 - r0);
    r3 = (r0 & 65535);
    MemoryInline::FlatWriteRam16((r6 + 24), static_cast<uint16_t>(r3));
}

loc_inl1_cont_800CEF20:
{
    // end of inlined leaf 0x800CEF20
    r3 = (r3 & 65535);
    r0 = PPC_Divw(static_cast<int32_t>(r3), static_cast<int32_t>(r30));
    r0 = (r0 * r30);
    r7 = (r3 - r0);
    r3 = MemoryInline::FlatRead32((r29 + 488));
    r3 = (r3 + 292);
    r6 = r3;
    r4 = 0;
    r5 = 0;
    r0 = 2;
    ctr = r0;
}

loc_803BA3E4:
{
    r0 = MemoryInline::FlatRead8((r6 + 7));
}

loc_803BA3EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803BA400;
    }
}

loc_803BA3F0:
{
    r0 = MemoryInline::FlatRead16(r6);
    r4 = (r4 + r0);
}

loc_803BA3FC:
{
    if ((static_cast<int32_t>(r7) <= static_cast<int32_t>(r4))) {
        goto loc_803BA46C;
    }
}

loc_803BA400:
{
    r5 = (r5 + 1);
    r0 = MemoryInline::FlatRead8((r6 + 23));
}

loc_803BA40C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803BA420;
    }
}

loc_803BA410:
{
    r0 = MemoryInline::FlatRead16((r6 + 16));
    r4 = (r4 + r0);
}

loc_803BA41C:
{
    if ((static_cast<int32_t>(r7) <= static_cast<int32_t>(r4))) {
        goto loc_803BA46C;
    }
}

loc_803BA420:
{
    r5 = (r5 + 1);
    r0 = MemoryInline::FlatRead8((r6 + 39));
}

loc_803BA42C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803BA440;
    }
}

loc_803BA430:
{
    r0 = MemoryInline::FlatRead16((r6 + 32));
    r4 = (r4 + r0);
}

loc_803BA43C:
{
    if ((static_cast<int32_t>(r7) <= static_cast<int32_t>(r4))) {
        goto loc_803BA46C;
    }
}

loc_803BA440:
{
    r5 = (r5 + 1);
    r0 = MemoryInline::FlatRead8((r6 + 55));
}

loc_803BA44C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803BA460;
    }
}

loc_803BA450:
{
    r0 = MemoryInline::FlatRead16((r6 + 48));
    r4 = (r4 + r0);
}

loc_803BA45C:
{
    if ((static_cast<int32_t>(r7) <= static_cast<int32_t>(r4))) {
        goto loc_803BA46C;
    }
}

loc_803BA460:
{
    r5 = (r5 + 1);
    r6 = (r6 + 64);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803BA3E4;
    }
}

loc_803BA46C:
{
}

loc_803BA470:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(8))) {
        goto loc_803BA5E0;
    }
}

loc_803BA474:
{
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(4));
    r0 = (r0_rot_5 & -16);
    r30 = (r3 + r0);
    r3 = (r29 + 464);
    r4 = (r28 + 4);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r29 + 476);
    r4 = (r28 + 16);
    // inline leaf 0x800FC138 (7 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWrite32(r3, r0);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite32((r3 + 4), r0);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWrite32((r3 + 8), r0);
    // end of inlined leaf 0x800FC138
    r3 = (r29 + 20);
    r4 = (r28 + 4);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r29 + 32);
    r4 = (r28 + 16);
    // inline leaf 0x800FC138 (7 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r4);
    guest_range_3 = MemoryInline::ResolveRangeHost(r3, 0, 488u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 0u, r3, r0);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::WriteResolved32(guest_range_3, 4u, (r3 + 4), r0);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::WriteResolved32(guest_range_3, 8u, (r3 + 8), r0);
    // end of inlined leaf 0x800FC138
    f0.d = MemoryInline::FlatReadFloat32((r28 + 28));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 464u, (r29 + 496), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 32));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 468u, (r29 + 500), f0.d);
    guest_range_2 = MemoryInline::ResolveRangeHost((r30 + 2), 0, 14u, true, false);
    r3 = MemoryInline::ReadResolved8(guest_range_2, 4u, (r30 + 6));
    MemoryInline::WriteResolved16(guest_range_3, 472u, (r29 + 504), static_cast<uint16_t>(r3));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 4u, (r30 + 6));
    MemoryInline::WriteResolved16(guest_range_3, 476u, (r29 + 508), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 6u, (r30 + 8));
    MemoryInline::WriteResolved16(guest_range_3, 474u, (r29 + 506), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 8u, (r30 + 10));
    MemoryInline::WriteResolved16(guest_range_3, 478u, (r29 + 510), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 10u, (r30 + 12));
    MemoryInline::WriteResolved16(guest_range_3, 484u, (r29 + 516), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 12u, (r30 + 14));
    MemoryInline::WriteResolved16(guest_range_3, 486u, (r29 + 518), static_cast<uint16_t>(r0));
    r0 = (r3 + -5);
}

loc_803BA4F4:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(3))) {
        goto loc_803BA50C;
    }
}

loc_803BA4F8:
{
    r0 = (r3 + -16);
}

loc_803BA500:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_803BA50C;
    }
}

loc_803BA504:
{
}

loc_803BA508:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(10))) {
        goto loc_803BA518;
    }
}

loc_803BA50C:
{
    r0 = 255;
    MemoryInline::FlatWrite8((r29 + 5), static_cast<uint8_t>(r0));
    goto loc_803BA574;
}

loc_803BA518:
{
    r4 = MemoryInline::ReadResolved16(guest_range_2, 2u, (r30 + 4));
}

loc_803BA520:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(255))) {
        goto loc_803BA530;
    }
}

loc_803BA524:
{
    r0 = 255;
    MemoryInline::FlatWrite8((r29 + 5), static_cast<uint8_t>(r0));
    goto loc_803BA574;
}

loc_803BA530:
{
    r0 = (r31 & 255);
}

loc_803BA538:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_803BA564;
    }
}

loc_803BA53C:
{
}

loc_803BA540:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(18))) {
        goto loc_803BA550;
    }
}

loc_803BA544:
{
    r0 = 129;
    MemoryInline::FlatWrite8((r29 + 5), static_cast<uint8_t>(r0));
    goto loc_803BA574;
}

loc_803BA550:
{
    r3 = 0x80600000u;
    r3 = (r3 + -30220);
    r3_addr_1 = (r3 + r4);
    r0 = MemoryInline::FlatRead8(r3_addr_1);
    MemoryInline::FlatWrite8((r29 + 5), static_cast<uint8_t>(r0));
    goto loc_803BA574;
}

loc_803BA564:
{
    r3 = 0x80600000u;
    r3 = (r3 + -30220);
    r3_addr_2 = (r3 + r4);
    r0 = MemoryInline::FlatRead8(r3_addr_2);
    MemoryInline::FlatWrite8((r29 + 5), static_cast<uint8_t>(r0));
}

loc_803BA574:
{
    r0 = MemoryInline::FlatRead8((r29 + 5));
}

loc_803BA57C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(13))) {
        goto loc_803BA588;
    }
}

loc_803BA580:
{
    r0 = 12;
    MemoryInline::FlatWrite8((r29 + 5), static_cast<uint8_t>(r0));
}

loc_803BA588:
{
    r0 = MemoryInline::FlatRead8((r29 + 5));
}

loc_803BA590:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(17))) {
        goto loc_803BA59C;
    }
}

loc_803BA594:
{
    r0 = 16;
    MemoryInline::FlatWrite8((r29 + 5), static_cast<uint8_t>(r0));
}

loc_803BA59C:
{
    r0 = MemoryInline::FlatRead8((r29 + 5));
}

loc_803BA5A4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(11))) {
        goto loc_803BA5B0;
    }
}

loc_803BA5A8:
{
    r0 = 10;
    MemoryInline::FlatWrite8((r29 + 5), static_cast<uint8_t>(r0));
}

loc_803BA5B0:
{
    r3 = MemoryInline::FlatRead32((r13 + -16828));
    r0 = (r31 & 255);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r3_addr_4 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_4);
    r0 = MemoryInline::ReadResolved16(guest_range_2, 0u, (r30 + 2));
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & -4);
    r3_addr_5 = (r3 + r0);
    r0 = MemoryInline::FlatRead32(r3_addr_5);
    MemoryInline::FlatWrite32((r29 + 492), r0);
    r0 = 0;
    MemoryInline::FlatWrite32((r29 + 440), r0);
    r3 = 1;
    goto loc_803BA5E4;
}

loc_803BA5E0:
{
    r3 = 0;
}

loc_803BA5E4:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803BA218(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803BA218_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000020FB gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x00000001 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803BA218 func_803BA218 preserves=true fpr_mask=0x00000000
