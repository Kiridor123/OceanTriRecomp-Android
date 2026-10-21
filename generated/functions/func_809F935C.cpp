#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_809F935C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsx_809F9524_loc_0 = 0;
    uint32_t addr_lfsx_809F95F0_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t fctiwzword3 = 0;
    uint32_t fctiwzword4 = 0;
    uint32_t fctiwzword5 = 0;
    uint32_t fctiwzword6 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t stackword1 = 0;
    uint32_t stackword2 = 0;
    uint32_t stackword3 = 0;
    uint32_t stackword4 = 0;
    uint32_t stackword5 = 0;
    uint32_t stackword6 = 0;
    uint32_t stackword7 = 0;
    uint32_t stackword8 = 0;
    uint32_t stackword9 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x809F935Cu);
    goto loc_809F935C;

loc_809F935C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = 1127219200;
    stackword1 = r0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 16u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + 8), r0);
    r0 = 1127219200;
    stackword2 = r0;
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r1 + 16), r0);
    r4 = MemoryInline::FlatRead32((r3 + 256));
    r7 = MemoryInline::FlatRead8((r3 + 2));
    r6 = (r7 * 40);
    r5 = 0x80A30000u;
    r0 = (r5 + -22424);
    r8 = (r0 + r6);
    r9 = 0;
    r0 = MemoryInline::FlatRead8((r3 + 158));
}

loc_809F9394:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(31))) {
        goto loc_809F93F4;
    }
}

loc_809F9398:
{
    r0 = MemoryInline::FlatRead16((r3 + 156));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r5 = 0x80A20000u;
    f1.d = MemoryInline::FlatReadFloat64((r5 + -6304));
    r0 = (r0 ^ -2147483648);
    stackword3 = r0;
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r1 + 12), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword1), static_cast<uint32_t>(stackword3));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 28));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r4 = fctiwzword0;
    r0 = (r4 & 65535);
}

loc_809F93D0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_809F93DC;
    }
}

loc_809F93D4:
{
    r4 = 1;
    goto loc_809F93E8;
}

loc_809F93DC:
{
}

loc_809F93E0:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(255))) {
        goto loc_809F93E8;
    }
}

loc_809F93E4:
{
    r4 = 255;
}

loc_809F93E8:
{
    r0 = (r4 & 255);
    MemoryInline::FlatWrite16((r3 + 156), static_cast<uint16_t>(r0));
    goto loc_809F98CC;
}

loc_809F93F4:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r4 + 3), 0, 34u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 21u);
        if (resolved_pair.valid) {
            f1.d = PpcBitCastToFloatInline(resolved_pair.first);
            f0.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 21u, (r4 + 24));
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 25u, (r4 + 28));
        }
    }
    f0.d = PpcFmulsInline(f1.d, f0.d);
    r0 = (r7 + -30);
}

loc_809F9408:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_809F9434;
    }
}

loc_809F940C:
{
    r0 = (r7 + -44);
}

loc_809F9414:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_809F9434;
    }
}

loc_809F9418:
{
    r0 = MemoryInline::ReadResolved32(guest_range_1, 29u, (r4 + 32));
    r0 = (r0 & 32768);
}

loc_809F9424:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_809F9434;
    }
}

loc_809F9428:
{
    r5 = 0x80A20000u;
    f1.d = MemoryInline::FlatReadFloat32((r5 + -6164));
    f0.d = PpcFmulsInline(f0.d, f1.d);
}

loc_809F9434:
{
}

loc_809F9438:
{
    if ((static_cast<uint32_t>(r7) > static_cast<uint32_t>(43))) {
        goto loc_809F9824;
    }
}

loc_809F943C:
{
    r5 = 0x80A30000u;
    r5 = (r5 + -19668);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r5_addr_1 = (r5 + r0);
    r5 = MemoryInline::FlatRead32(r5_addr_1);
    ctr = r5;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x809F9454u:
        goto loc_809F9454;
        break;
    case 0x809F948Cu:
        goto loc_809F948C;
        break;
    case 0x809F94ACu:
        goto loc_809F94AC;
        break;
    case 0x809F9824u:
        goto loc_809F9824;
        break;
    case 0x809F964Cu:
        goto loc_809F964C;
        break;
    case 0x809F96E8u:
        goto loc_809F96E8;
        break;
    case 0x809F9580u:
        goto loc_809F9580;
        break;
    case 0x809F97B0u:
        goto loc_809F97B0;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_809F9454:
{
    r6 = MemoryInline::ReadResolved32(guest_range_1, 29u, (r4 + 32));
    r0 = (r6 & 1);
}

loc_809F9460:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_809F9470;
    }
}

loc_809F9464:
{
    r5 = 0x80A20000u;
    f1.d = MemoryInline::FlatReadFloat32((r5 + -6160));
    f0.d = PpcFmulsInline(f0.d, f1.d);
}

loc_809F9470:
{
    r0 = (r6 & 4096);
}

loc_809F9478:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_809F9824;
    }
}

loc_809F947C:
{
    r5 = 0x80A20000u;
    f1.d = MemoryInline::FlatReadFloat32((r5 + -6160));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    goto loc_809F9824;
}

loc_809F948C:
{
    r0 = MemoryInline::ReadResolved32(guest_range_1, 29u, (r4 + 32));
    r0 = (r0 & 2);
}

loc_809F9498:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_809F9824;
    }
}

loc_809F949C:
{
    r5 = 0x80A20000u;
    f1.d = MemoryInline::FlatReadFloat32((r5 + -6160));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    goto loc_809F9824;
}

loc_809F94AC:
{
    r0 = MemoryInline::ReadResolved32(guest_range_1, 29u, (r4 + 32));
    r0 = (r0 & 4);
}

loc_809F94B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_809F94C8;
    }
}

loc_809F94BC:
{
    r5 = 0x80A20000u;
    f1.d = MemoryInline::FlatReadFloat32((r5 + -6156));
    f0.d = PpcFmulsInline(f0.d, f1.d);
}

loc_809F94C8:
{
    r6 = MemoryInline::ReadResolved8(guest_range_1, 0u, (r4 + 3));
}

loc_809F94D0:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_809F9824;
    }
}

loc_809F94D4:
{
    r0 = MemoryInline::FlatRead8((r8 + 39));
}

loc_809F94DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_809F94F4;
    }
}

loc_809F94E0:
{
}

loc_809F94E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_809F9500;
    }
}

loc_809F94E8:
{
}

loc_809F94EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_809F950C;
    }
}

loc_809F94F0:
{
    goto loc_809F9514;
}

loc_809F94F4:
{
    r5 = 0x80A30000u;
    r9 = (r5 + -19776);
    goto loc_809F9514;
}

loc_809F9500:
{
    r5 = 0x80A30000u;
    r9 = (r5 + -19760);
    goto loc_809F9514;
}

loc_809F950C:
{
    r5 = 0x80A30000u;
    r9 = (r5 + -19744);
}

loc_809F9514:
{
}

loc_809F9518:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_809F9824;
    }
}

loc_809F951C:
{
    r0 = (r6 + -1);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    addr_lfsx_809F9524_loc_0 = (r9 + r0);
    f3.d = MemoryInline::FlatReadFloat32(addr_lfsx_809F9524_loc_0);
    f0.d = PpcFmulsInline(f0.d, f3.d);
    r0 = MemoryInline::FlatRead8((r3 + 166));
    r5 = 0x80A20000u;
    f2.d = MemoryInline::FlatReadFloat64((r5 + -6136));
    stackword4 = r0;
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r1 + 20), r0);
    f1.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword2), static_cast<uint32_t>(stackword4));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f1.d = PpcFmulsInline(f1.d, f3.d);
    f1.d = PPC_Fctiwz(f1.d);
    fctiwzword1 = PPC_FprLowWordInline(f1.d);
    r5 = fctiwzword1;
    r0 = (r5 & 65535);
}

loc_809F955C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_809F9568;
    }
}

loc_809F9560:
{
    r5 = 1;
    goto loc_809F9574;
}

loc_809F9568:
{
}

loc_809F956C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(255))) {
        goto loc_809F9574;
    }
}

loc_809F9570:
{
    r5 = 255;
}

loc_809F9574:
{
    r0 = (r5 & 255);
    MemoryInline::FlatWrite8((r3 + 166), static_cast<uint8_t>(r0));
    goto loc_809F9824;
}

loc_809F9580:
{
    r6 = MemoryInline::ReadResolved8(guest_range_1, 0u, (r4 + 3));
}

loc_809F9588:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_809F9824;
    }
}

loc_809F958C:
{
    r0 = MemoryInline::FlatRead8((r8 + 39));
}

loc_809F9594:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_809F95B4;
    }
}

loc_809F9598:
{
}

loc_809F959C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_809F95C0;
    }
}

loc_809F95A0:
{
}

loc_809F95A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_809F95CC;
    }
}

loc_809F95A8:
{
}

loc_809F95AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_809F95D8;
    }
}

loc_809F95B0:
{
    goto loc_809F95E0;
}

loc_809F95B4:
{
    r5 = 0x80A30000u;
    r9 = (r5 + -19724);
    goto loc_809F95E0;
}

loc_809F95C0:
{
    r5 = 0x80A30000u;
    r9 = (r5 + -19712);
    goto loc_809F95E0;
}

loc_809F95CC:
{
    r5 = 0x80A30000u;
    r9 = (r5 + -19688);
    goto loc_809F95E0;
}

loc_809F95D8:
{
    r5 = 0x80A30000u;
    r9 = (r5 + -19680);
}

loc_809F95E0:
{
}

loc_809F95E4:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_809F9824;
    }
}

loc_809F95E8:
{
    r0 = (r6 + -1);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    addr_lfsx_809F95F0_loc_0 = (r9 + r0);
    f3.d = MemoryInline::FlatReadFloat32(addr_lfsx_809F95F0_loc_0);
    f0.d = PpcFmulsInline(f0.d, f3.d);
    r0 = MemoryInline::FlatRead8((r3 + 166));
    r5 = 0x80A20000u;
    f2.d = MemoryInline::FlatReadFloat64((r5 + -6136));
    stackword5 = r0;
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r1 + 12), r0);
    f1.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword1), static_cast<uint32_t>(stackword5));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f1.d = PpcFmulsInline(f1.d, f3.d);
    f1.d = PPC_Fctiwz(f1.d);
    fctiwzword2 = PPC_FprLowWordInline(f1.d);
    r5 = fctiwzword2;
    r0 = (r5 & 65535);
}

loc_809F9628:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_809F9634;
    }
}

loc_809F962C:
{
    r5 = 1;
    goto loc_809F9640;
}

loc_809F9634:
{
}

loc_809F9638:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(255))) {
        goto loc_809F9640;
    }
}

loc_809F963C:
{
    r5 = 255;
}

loc_809F9640:
{
    r0 = (r5 & 255);
    MemoryInline::FlatWrite8((r3 + 166), static_cast<uint8_t>(r0));
    goto loc_809F9824;
}

loc_809F964C:
{
}

loc_809F9650:
{
    if ((static_cast<uint32_t>(r7) != static_cast<uint32_t>(19))) {
        goto loc_809F965C;
    }
}

loc_809F9654:
{
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 25u, (r4 + 28));
    goto loc_809F9660;
}

loc_809F965C:
{
    f3.d = f0.d;
}

loc_809F9660:
{
    r6 = MemoryInline::ReadResolved32(guest_range_1, 29u, (r4 + 32));
    r0 = (r6 & 32);
}

loc_809F966C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_809F967C;
    }
}

loc_809F9670:
{
    r5 = 0x80A20000u;
    f1.d = MemoryInline::FlatReadFloat32((r5 + -6152));
    f3.d = PpcFmulsInline(f3.d, f1.d);
}

loc_809F967C:
{
    r0 = (r6 & 64);
}

loc_809F9684:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_809F9694;
    }
}

loc_809F9688:
{
    r5 = 0x80A20000u;
    f1.d = MemoryInline::FlatReadFloat32((r5 + -6148));
    f3.d = PpcFmulsInline(f3.d, f1.d);
}

loc_809F9694:
{
    r0 = MemoryInline::FlatRead8((r3 + 166));
    r5 = 0x80A20000u;
    f2.d = MemoryInline::FlatReadFloat64((r5 + -6136));
    stackword6 = r0;
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r1 + 20), r0);
    f1.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword2), static_cast<uint32_t>(stackword6));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f1.d = PpcFmulsInline(f1.d, f3.d);
    f1.d = PPC_Fctiwz(f1.d);
    fctiwzword3 = PPC_FprLowWordInline(f1.d);
    r5 = fctiwzword3;
    r0 = (r5 & 65535);
}

loc_809F96C4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_809F96D0;
    }
}

loc_809F96C8:
{
    r5 = 1;
    goto loc_809F96DC;
}

loc_809F96D0:
{
}

loc_809F96D4:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(255))) {
        goto loc_809F96DC;
    }
}

loc_809F96D8:
{
    r5 = 255;
}

loc_809F96DC:
{
    r0 = (r5 & 255);
    MemoryInline::FlatWrite8((r3 + 166), static_cast<uint8_t>(r0));
    goto loc_809F9824;
}

loc_809F96E8:
{
    r6 = MemoryInline::ReadResolved32(guest_range_1, 29u, (r4 + 32));
    r7 = (r6 & 8);
}

loc_809F96F4:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_809F9710;
    }
}

loc_809F96F8:
{
    r0 = (r6 & 16);
}

loc_809F9700:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_809F9710;
    }
}

loc_809F9704:
{
    r0 = (r6 & 2048);
}

loc_809F970C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_809F9824;
    }
}

loc_809F9710:
{
    r5 = 0x80A20000u;
    f3.d = MemoryInline::FlatReadFloat32((r5 + -6320));
}

loc_809F971C:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_809F972C;
    }
}

loc_809F9720:
{
    r5 = 0x80A20000u;
    f1.d = MemoryInline::FlatReadFloat32((r5 + -6144));
    f3.d = PpcFmulsInline(f3.d, f1.d);
}

loc_809F972C:
{
    r0 = (r6 & 16);
}

loc_809F9734:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_809F9744;
    }
}

loc_809F9738:
{
    r5 = 0x80A20000u;
    f1.d = MemoryInline::FlatReadFloat32((r5 + -6176));
    f3.d = PpcFmulsInline(f3.d, f1.d);
}

loc_809F9744:
{
    r0 = (r6 & 2048);
}

loc_809F974C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_809F975C;
    }
}

loc_809F9750:
{
    r5 = 0x80A20000u;
    f1.d = MemoryInline::FlatReadFloat32((r5 + -6144));
    f3.d = PpcFmulsInline(f3.d, f1.d);
}

loc_809F975C:
{
    r0 = MemoryInline::FlatRead8((r3 + 166));
    r5 = 0x80A20000u;
    f2.d = MemoryInline::FlatReadFloat64((r5 + -6136));
    stackword7 = r0;
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r1 + 12), r0);
    f1.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword1), static_cast<uint32_t>(stackword7));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f1.d = PpcFmulsInline(f1.d, f3.d);
    f1.d = PPC_Fctiwz(f1.d);
    fctiwzword4 = PPC_FprLowWordInline(f1.d);
    r5 = fctiwzword4;
    r0 = (r5 & 65535);
}

loc_809F978C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_809F9798;
    }
}

loc_809F9790:
{
    r5 = 1;
    goto loc_809F97A4;
}

loc_809F9798:
{
}

loc_809F979C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(255))) {
        goto loc_809F97A4;
    }
}

loc_809F97A0:
{
    r5 = 255;
}

loc_809F97A4:
{
    r0 = (r5 & 255);
    MemoryInline::FlatWrite8((r3 + 166), static_cast<uint8_t>(r0));
    goto loc_809F9824;
}

loc_809F97B0:
{
    r0 = MemoryInline::ReadResolved32(guest_range_1, 29u, (r4 + 32));
    r0 = (r0 & 65536);
}

loc_809F97BC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_809F9824;
    }
}

loc_809F97C0:
{
    r0 = MemoryInline::FlatRead8((r3 + 170));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r5 = 0x80A20000u;
    f2.d = MemoryInline::FlatReadFloat64((r5 + -6304));
    r0 = (r0 ^ -2147483648);
    stackword8 = r0;
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r1 + 20), r0);
    f1.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword2), static_cast<uint32_t>(stackword8));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    r5 = 0x80A20000u;
    f1.d = MemoryInline::FlatReadFloat32((r5 + -6160));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f1.d = PPC_Fctiwz(f1.d);
    fctiwzword5 = PPC_FprLowWordInline(f1.d);
    r5 = fctiwzword5;
    r0 = (r5 & 65535);
}

loc_809F9800:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_809F980C;
    }
}

loc_809F9804:
{
    r5 = 1;
    goto loc_809F9818;
}

loc_809F980C:
{
}

loc_809F9810:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(255))) {
        goto loc_809F9818;
    }
}

loc_809F9814:
{
    r5 = 255;
}

loc_809F9818:
{
    r0 = (r5 & 255);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::FlatWrite8((r3 + 170), static_cast<uint8_t>(r0));
}

loc_809F9824:
{
    r0 = MemoryInline::FlatRead16((r3 + 156));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_809F982C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_809F98CC;
    }
}

loc_809F9830:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 33u, (r4 + 36));
}

loc_809F9838:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_809F9858;
    }
}

loc_809F983C:
{
    r4 = 0x80A20000u;
    f1.d = MemoryInline::FlatReadFloat32((r4 + -6140));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    r0 = MemoryInline::FlatRead8((r3 + 168));
    r0 = (r0 | 128);
    MemoryInline::FlatWrite8((r3 + 168), static_cast<uint8_t>(r0));
    goto loc_809F9878;
}

loc_809F9858:
{
}

loc_809F985C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_809F9878;
    }
}

loc_809F9860:
{
    r4 = 0x80A20000u;
    f1.d = MemoryInline::FlatReadFloat32((r4 + -6288));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    r0 = MemoryInline::FlatRead8((r3 + 168));
    r0 = (r0 | 64);
    MemoryInline::FlatWrite8((r3 + 168), static_cast<uint8_t>(r0));
}

loc_809F9878:
{
    r0 = MemoryInline::FlatRead16((r3 + 156));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r4 = 0x80A20000u;
    f2.d = MemoryInline::FlatReadFloat64((r4 + -6304));
    r0 = (r0 ^ -2147483648);
    stackword9 = r0;
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r1 + 12), r0);
    f1.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword1), static_cast<uint32_t>(stackword9));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword6 = PPC_FprLowWordInline(f0.d);
    r4 = fctiwzword6;
    r0 = (r4 & 65535);
}

loc_809F98AC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_809F98B8;
    }
}

loc_809F98B0:
{
    r4 = 1;
    goto loc_809F98C4;
}

loc_809F98B8:
{
}

loc_809F98BC:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(255))) {
        goto loc_809F98C4;
    }
}

loc_809F98C0:
{
    r4 = 255;
}

loc_809F98C4:
{
    r0 = (r4 & 255);
    MemoryInline::FlatWrite16((r3 + 156), static_cast<uint16_t>(r0));
}

loc_809F98CC:
{
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000003FB gpr_write=0x000003F3 gpr_return=0x00000010 fpr_read=0x0000000F fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x809F935C func_809F935C preserves=true fpr_mask=0x00000000
