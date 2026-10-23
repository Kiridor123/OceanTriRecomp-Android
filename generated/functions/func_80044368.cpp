#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802AA6F0(CpuContext* ctx);
extern "C" uint64_t func_802AA6F0_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_803BED2C(CpuContext* ctx);
extern "C" uint64_t func_803BED2C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_80044368(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    goto loc_80044368;

loc_80044368:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r3 = (r3 & 255);
    r5 = (r3 * 848);
    r4 = 0x80660000u;
    r0 = (r4 + -18480);
    r31 = (r0 + r5);
    r30 = (r31 + 704);
    r0 = MemoryInline::FlatRead16(r30);
    MemoryInline::FlatWrite16((r30 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 8));
    MemoryInline::FlatWrite16((r30 + 10), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r30 + 29));
    MemoryInline::FlatWrite8((r30 + 30), static_cast<uint8_t>(r0));
    r4 = 0;
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite16((r30 + 8), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite16((r30 + 12), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite16((r30 + 14), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite16((r30 + 16), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite16((r30 + 18), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite16((r30 + 24), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite16((r30 + 26), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite8((r30 + 28), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r30 + 29), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite16((r30 + 20), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite8((r30 + 31), static_cast<uint8_t>(r4));
    r0 = MemoryInline::FlatRead32((r31 + 48));
}

loc_800443F0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80044468;
    }
}

loc_800443F4:
{
    r0 = MemoryInline::FlatRead32((r31 + 52));
}

loc_800443FC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_8004440C;
    }
}

loc_80044400:
{
}

loc_80044404:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_80044420;
    }
}

loc_80044408:
{
    goto loc_80044454;
}

loc_8004440C:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 34), static_cast<uint8_t>(r0));
    r3 = 0x80580000u;
    r4 = (r3 + 5872);
    goto loc_8004446C;
}

loc_80044420:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r30 + 34), static_cast<uint8_t>(r0));
    r4 = 7;
    r5 = 1;
    ctx->lr = 0x80044434u;
    if constexpr (KnownRegArgsCpuCall<0x803BED2Cu>(&func_803BED2C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803BED2C_E74 = func_803BED2C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803BED2C_E74);
        r4 = static_cast<uint32_t>(regargs_result_803BED2C_E74 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x803BED2Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_80044438:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80044448;
    }
}

loc_8004443C:
{
    r3 = 0x80580000u;
    r4 = (r3 + 5940);
    goto loc_8004446C;
}

loc_80044448:
{
    r3 = 0x80580000u;
    r4 = (r3 + 6008);
    goto loc_8004446C;
}

loc_80044454:
{
    r0 = 3;
    MemoryInline::FlatWrite8((r30 + 34), static_cast<uint8_t>(r0));
    r3 = 0x80580000u;
    r4 = (r3 + 6076);
    goto loc_8004446C;
}

loc_80044468:
{
    MemoryInline::FlatWrite8((r30 + 34), static_cast<uint8_t>(r4));
}

loc_8004446C:
{
    r0 = MemoryInline::FlatRead8((r30 + 34));
}

loc_80044474:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80044488;
    }
}

loc_80044478:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r30 + 22), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r30 + 32), static_cast<uint16_t>(r0));
    goto loc_800449D8;
}

loc_80044488:
{
    r3 = 0x80580000u;
    r5 = (r3 + 6144);
    r3 = r4;
    r0 = 1;
    r6 = 17;
    ctr = r6;
}

loc_800444A0:
{
    r7 = MemoryInline::FlatRead16(r3);
    r8 = MemoryInline::FlatRead16((r3 + 2));
    r3 = (r3 + 4);
    r10 = MemoryInline::FlatRead16(r5);
    r9 = MemoryInline::FlatRead16((r5 + 2));
    r5 = (r5 + 4);
}

loc_800444BC:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_800445BC;
    }
}

loc_800444C0:
{
    r6 = (r30 + r10);
    r6 = MemoryInline::FlatRead8((r6 + 118));
}

loc_800444CC:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_800444F0;
    }
}

loc_800444D0:
{
    r8 = MemoryInline::FlatRead16(r30);
    r7 = MemoryInline::FlatRead16((r30 + 2));
    r6 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r10));
    r6 = (r7 & r6);
    r6 = (r6 & 65535);
    r6 = (r8 | r6);
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r6));
    goto loc_800445BC;
}

loc_800444F0:
{
    r6 = MemoryInline::FlatRead8((r30 + 34));
}

loc_800444F8:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(1))) {
        goto loc_80044510;
    }
}

loc_800444FC:
{
}

loc_80044500:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(2))) {
        goto loc_80044558;
    }
}

loc_80044504:
{
}

loc_80044508:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(3))) {
        goto loc_800445A0;
    }
}

loc_8004450C:
{
    goto loc_800445BC;
}

loc_80044510:
{
}

loc_80044514:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_80044538;
    }
}

loc_80044518:
{
    r6 = MemoryInline::FlatRead16((r31 + 252));
    r6 = (r6 & r8);
}

loc_80044524:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_800445BC;
    }
}

loc_80044528:
{
    r6 = MemoryInline::FlatRead16(r30);
    r6 = (r6 | r9);
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r6));
    goto loc_800445BC;
}

loc_80044538:
{
    r6 = MemoryInline::FlatRead16((r31 + 202));
    r6 = (r6 & r8);
}

loc_80044544:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_800445BC;
    }
}

loc_80044548:
{
    r6 = MemoryInline::FlatRead16(r30);
    r6 = (r6 | r9);
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r6));
    goto loc_800445BC;
}

loc_80044558:
{
}

loc_8004455C:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_80044580;
    }
}

loc_80044560:
{
    r6 = MemoryInline::FlatRead16((r31 + 202));
    r6 = (r6 & r8);
}

loc_8004456C:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_800445BC;
    }
}

loc_80044570:
{
    r6 = MemoryInline::FlatRead16(r30);
    r6 = (r6 | r9);
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r6));
    goto loc_800445BC;
}

loc_80044580:
{
    r6 = MemoryInline::FlatRead16((r31 + 214));
    r6 = (r6 & r8);
}

loc_8004458C:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_800445BC;
    }
}

loc_80044590:
{
    r6 = MemoryInline::FlatRead16(r30);
    r6 = (r6 | r9);
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r6));
    goto loc_800445BC;
}

loc_800445A0:
{
    r6 = MemoryInline::FlatRead16((r31 + 202));
    r6 = (r6 & r8);
}

loc_800445AC:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_800445BC;
    }
}

loc_800445B0:
{
    r6 = MemoryInline::FlatRead16(r30);
    r6 = (r6 | r9);
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r6));
}

loc_800445BC:
{
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800444A0;
    }
}

loc_800445C0:
{
    r0 = MemoryInline::FlatRead8((r30 + 34));
}

loc_800445C8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_800445EC;
    }
}

loc_800445CC:
{
    r0 = MemoryInline::FlatRead16((r31 + 260));
    MemoryInline::FlatWrite16((r30 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r31 + 276));
    MemoryInline::FlatWrite16((r30 + 24), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r31 + 280));
    MemoryInline::FlatWrite16((r30 + 26), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r31 + 284));
    MemoryInline::FlatWrite8((r30 + 28), static_cast<uint8_t>(r0));
}

loc_800445EC:
{
    r0 = MemoryInline::FlatRead8((r30 + 34));
}

loc_800445F4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_80044618;
    }
}

loc_800445F8:
{
    r0 = MemoryInline::FlatRead16((r31 + 222));
    MemoryInline::FlatWrite16((r30 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r31 + 238));
    MemoryInline::FlatWrite16((r30 + 24), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r31 + 242));
    MemoryInline::FlatWrite16((r30 + 26), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r31 + 246));
    MemoryInline::FlatWrite8((r30 + 28), static_cast<uint8_t>(r0));
}

loc_80044618:
{
    r0 = MemoryInline::FlatRead16((r30 + 8));
    r0 = (r0 & 15360);
    MemoryInline::FlatWrite16((r30 + 8), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead16((r30 + 8));
    r0 = MemoryInline::FlatRead16((r30 + 10));
    r0 = (r3 & ~r0);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16((r30 + 12), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead16((r30 + 10));
    r0 = MemoryInline::FlatRead16((r30 + 8));
    r0 = (r3 & ~r0);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16((r30 + 14), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r30 + 28));
    r0 = (r0 & 1);
}

loc_80044658:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80044668;
    }
}

loc_8004465C:
{
    r0 = MemoryInline::FlatRead8((r30 + 29));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite8((r30 + 29), static_cast<uint8_t>(r0));
}

loc_80044668:
{
    r0 = MemoryInline::FlatRead8((r30 + 28));
    r0 = (r0 & 2);
}

loc_80044674:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80044684;
    }
}

loc_80044678:
{
    r0 = MemoryInline::FlatRead8((r30 + 29));
    r0 = (r0 | 2);
    MemoryInline::FlatWrite8((r30 + 29), static_cast<uint8_t>(r0));
}

loc_80044684:
{
    r0 = MemoryInline::FlatRead8((r30 + 28));
    r0 = (r0 & 4);
}

loc_80044690:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800446A0;
    }
}

loc_80044694:
{
    r0 = MemoryInline::FlatRead8((r30 + 29));
    r0 = (r0 | 4);
    MemoryInline::FlatWrite8((r30 + 29), static_cast<uint8_t>(r0));
}

loc_800446A0:
{
    r0 = MemoryInline::FlatRead8((r30 + 28));
    r0 = (r0 & 8);
}

loc_800446AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800446BC;
    }
}

loc_800446B0:
{
    r0 = MemoryInline::FlatRead8((r30 + 29));
    r0 = (r0 | 8);
    MemoryInline::FlatWrite8((r30 + 29), static_cast<uint8_t>(r0));
}

loc_800446BC:
{
    r3 = MemoryInline::FlatRead8((r30 + 30));
    r0 = MemoryInline::FlatRead8((r30 + 29));
}

loc_800446C8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_800446F8;
    }
}

loc_800446CC:
{
    r3 = MemoryInline::FlatRead16((r30 + 32));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r30 + 32), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 32));
}

loc_800446E0:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(12))) {
        goto loc_80044700;
    }
}

loc_800446E4:
{
    r0 = 10;
    MemoryInline::FlatWrite16((r30 + 32), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r30 + 29));
    MemoryInline::FlatWrite8((r30 + 31), static_cast<uint8_t>(r0));
    goto loc_80044700;
}

loc_800446F8:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r30 + 32), static_cast<uint16_t>(r0));
}

loc_80044700:
{
    r0 = MemoryInline::FlatRead8((r30 + 117));
}

loc_80044708:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80044884;
    }
}

loc_8004470C:
{
    r0 = MemoryInline::FlatRead16(r30);
    r0 = (r0 & 15);
}

loc_80044718:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80044884;
    }
}

loc_8004471C:
{
    r3 = MemoryInline::FlatRead8((r30 + 29));
    r5 = (r3 & 15);
    r3 = (r5 & 1);
}

loc_8004472C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80044738;
    }
}

loc_80044730:
{
    r0 = (r0 | 8192);
    r0 = (r0 & 65535);
}

loc_80044738:
{
    r3 = (r5 & 2);
}

loc_80044740:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8004474C;
    }
}

loc_80044744:
{
    r0 = (r0 | 4096);
    r0 = (r0 & 65535);
}

loc_8004474C:
{
    r3 = (r5 & 4);
}

loc_80044754:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80044760;
    }
}

loc_80044758:
{
    r0 = (r0 | 2048);
    r0 = (r0 & 65535);
}

loc_80044760:
{
    r3 = (r5 & 8);
}

loc_80044768:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80044774;
    }
}

loc_8004476C:
{
    r0 = (r0 | 1024);
    r0 = (r0 & 65535);
}

loc_80044774:
{
    r3 = 0x80580000u;
    r3 = (r3 + 6144);
    r5 = 17;
    ctr = r5;
}

loc_80044784:
{
    r6 = MemoryInline::FlatRead16(r4);
    r7 = MemoryInline::FlatRead16((r4 + 2));
    r4 = (r4 + 4);
    r5 = MemoryInline::FlatRead16(r3);
    r8 = MemoryInline::FlatRead16((r3 + 2));
    r3 = (r3 + 4);
}

loc_800447A0:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_80044880;
    }
}

loc_800447A4:
{
    r5 = (r30 + r5);
    r5 = MemoryInline::FlatRead8((r5 + 118));
}

loc_800447B0:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_80044880;
    }
}

loc_800447B4:
{
    r5 = MemoryInline::FlatRead8((r30 + 34));
}

loc_800447BC:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(1))) {
        goto loc_800447D4;
    }
}

loc_800447C0:
{
}

loc_800447C4:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(2))) {
        goto loc_8004481C;
    }
}

loc_800447C8:
{
}

loc_800447CC:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(3))) {
        goto loc_80044864;
    }
}

loc_800447D0:
{
    goto loc_80044880;
}

loc_800447D4:
{
}

loc_800447D8:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800447FC;
    }
}

loc_800447DC:
{
    r5 = (r0 & 65535);
    r5 = (r5 & r7);
}

loc_800447E8:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80044880;
    }
}

loc_800447EC:
{
    r5 = MemoryInline::FlatRead16(r30);
    r5 = (r5 | r8);
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r5));
    goto loc_80044880;
}

loc_800447FC:
{
    r5 = (r0 & 65535);
    r5 = (r5 & r7);
}

loc_80044808:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80044880;
    }
}

loc_8004480C:
{
    r5 = MemoryInline::FlatRead16(r30);
    r5 = (r5 | r8);
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r5));
    goto loc_80044880;
}

loc_8004481C:
{
}

loc_80044820:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_80044844;
    }
}

loc_80044824:
{
    r5 = (r0 & 65535);
    r5 = (r5 & r7);
}

loc_80044830:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80044880;
    }
}

loc_80044834:
{
    r5 = MemoryInline::FlatRead16(r30);
    r5 = (r5 | r8);
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r5));
    goto loc_80044880;
}

loc_80044844:
{
    r5 = (r0 & 65535);
    r5 = (r5 & r7);
}

loc_80044850:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80044880;
    }
}

loc_80044854:
{
    r5 = MemoryInline::FlatRead16(r30);
    r5 = (r5 | r8);
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r5));
    goto loc_80044880;
}

loc_80044864:
{
    r5 = (r0 & 65535);
    r5 = (r5 & r7);
}

loc_80044870:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80044880;
    }
}

loc_80044874:
{
    r5 = MemoryInline::FlatRead16(r30);
    r5 = (r5 | r8);
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r5));
}

loc_80044880:
{
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80044784;
    }
}

loc_80044884:
{
    r3 = MemoryInline::FlatRead16((r30 + 2));
    r0 = MemoryInline::FlatRead16(r30);
}

loc_80044890:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_800448C0;
    }
}

loc_80044894:
{
    r3 = MemoryInline::FlatRead16((r30 + 22));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r30 + 22), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 22));
}

loc_800448A8:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(12))) {
        goto loc_800448C8;
    }
}

loc_800448AC:
{
    r0 = 10;
    MemoryInline::FlatWrite16((r30 + 22), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16(r30);
    MemoryInline::FlatWrite16((r30 + 20), static_cast<uint16_t>(r0));
    goto loc_800448C8;
}

loc_800448C0:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r30 + 22), static_cast<uint16_t>(r0));
}

loc_800448C8:
{
    r6 = 0;
    r5 = 1;
    r0 = 8;
    ctr = r0;
}

loc_800448D8:
{
    r4 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r6));
    r0 = MemoryInline::FlatRead16((r30 + 2));
    r3 = (r0 & r4);
    r0 = MemoryInline::FlatRead16(r30);
    r0 = (r0 & r4);
}

loc_800448F0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(r0))) {
        goto loc_80044910;
    }
}

loc_800448F4:
{
    r0 = MemoryInline::FlatRead8((r30 + 116));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_2 & -16);
    r4 = (r6 + r30);
    r3 = (r0 + r4);
    r0 = MemoryInline::FlatRead8((r3 + 36));
    MemoryInline::FlatWrite8((r4 + 118), static_cast<uint8_t>(r0));
    goto loc_80044928;
}

loc_80044910:
{
    r4 = (r30 + r6);
    r3 = MemoryInline::FlatRead8((r4 + 118));
}

loc_8004491C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80044928;
    }
}

loc_80044920:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite8((r4 + 118), static_cast<uint8_t>(r0));
}

loc_80044928:
{
    r6 = (r6 + 1);
    r4 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r6));
    r0 = MemoryInline::FlatRead16((r30 + 2));
    r3 = (r0 & r4);
    r0 = MemoryInline::FlatRead16(r30);
    r0 = (r0 & r4);
}

loc_80044944:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(r0))) {
        goto loc_80044964;
    }
}

loc_80044948:
{
    r0 = MemoryInline::FlatRead8((r30 + 116));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_4 & -16);
    r4 = (r6 + r30);
    r3 = (r0 + r4);
    r0 = MemoryInline::FlatRead8((r3 + 36));
    MemoryInline::FlatWrite8((r4 + 118), static_cast<uint8_t>(r0));
    goto loc_8004497C;
}

loc_80044964:
{
    r4 = (r30 + r6);
    r3 = MemoryInline::FlatRead8((r4 + 118));
}

loc_80044970:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8004497C;
    }
}

loc_80044974:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite8((r4 + 118), static_cast<uint8_t>(r0));
}

loc_8004497C:
{
    r6 = (r6 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800448D8;
    }
}

loc_80044984:
{
    r3 = MemoryInline::FlatRead16(r30);
    r0 = MemoryInline::FlatRead16((r30 + 2));
    r0 = (r3 & ~r0);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16((r30 + 4), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead16((r30 + 2));
    r0 = MemoryInline::FlatRead16(r30);
    r0 = (r3 & ~r0);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16((r30 + 6), static_cast<uint16_t>(r0));
    // inline leaf 0x800CF26C (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 36));
    // end of inlined leaf 0x800CF26C
    r0 = (r3 & 255);
}

loc_800449B8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_800449CC;
    }
}

loc_800449BC:
{
    r3 = (r29 & 255);
    r4 = 0;
    if constexpr (KnownRegArgsCpuCall<0x802AA6F0u>(&func_802AA6F0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_802AA6F0_58CE = func_802AA6F0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802AA6F0_58CE);
        r4 = static_cast<uint32_t>(regargs_result_802AA6F0_58CE >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x802AA6F0u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        ctr = ctx->ctr;
    }
    goto loc_800449D8;
}

loc_800449CC:
{
    r3 = (r29 & 255);
    r4 = 1;
    if constexpr (KnownRegArgsCpuCall<0x802AA6F0u>(&func_802AA6F0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_802AA6F0_5D46 = func_802AA6F0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802AA6F0_5D46);
        r4 = static_cast<uint32_t>(regargs_result_802AA6F0_5D46 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x802AA6F0u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        ctr = ctx->ctr;
    }
}

loc_800449D8:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000007FB gpr_write=0x000007FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80044368 func_80044368 preserves=true fpr_mask=0x00000000
