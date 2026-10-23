#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800C6548(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    goto loc_800C6548;

loc_800C6548:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = r3;
    r31 = r5;
    r28 = r6;
    r0 = -1;
    MemoryInline::FlatWrite32((r3 + 176), r0);
    MemoryInline::FlatWrite32((r3 + 180), r0);
    r3 = 1;
    ctx->lr = 0x800C6584u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x804B8500u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    ctr = ctx->ctr;
    r3 = r28;
    // inline leaf 0x800C6944 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 96));
    // end of inlined leaf 0x800C6944
}

loc_800C6590:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800C65B8;
    }
}

loc_800C6594:
{
    r3 = 4;
    r4 = 0;
    r5 = 0;
    r6 = 0;
    r7 = 0;
    r8 = 0;
    r9 = 2;
    ctx->lr = 0x800C65B4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x804B8530u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    ctr = ctx->ctr;
    goto loc_800C6698;
}

loc_800C65B8:
{
    r0 = MemoryInline::FlatRead8((r31 + 96));
}

loc_800C65C0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_800C6608;
    }
}

loc_800C65C4:
{
    r3 = r28;
    // inline leaf 0x800C6934 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 108));
    // end of inlined leaf 0x800C6934
}

loc_800C65D0:
{
    r29 = 2;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800C65DC;
    }
}

loc_800C65D8:
{
    r29 = 1;
}

loc_800C65DC:
{
    r3 = r28;
    // inline leaf 0x800C693C (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 100));
    // end of inlined leaf 0x800C693C
    r7 = r3;
    r3 = 0;
    r4 = 1;
    r5 = 0;
    r6 = 0;
    r8 = 0;
    r9 = r29;
    ctx->lr = 0x800C6604u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x804B8530u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    ctr = ctx->ctr;
    goto loc_800C6628;
}

loc_800C6608:
{
    r3 = 0;
    r4 = 0;
    r5 = 0;
    r6 = 0;
    r7 = 0;
    r8 = 0;
    r9 = 2;
    ctx->lr = 0x800C6628u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x804B8530u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    ctr = ctx->ctr;
}

loc_800C6628:
{
    r0 = MemoryInline::FlatRead8((r31 + 104));
}

loc_800C6630:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_800C6678;
    }
}

loc_800C6634:
{
    r3 = r28;
    // inline leaf 0x800C6934 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 108));
    // end of inlined leaf 0x800C6934
}

loc_800C6640:
{
    r29 = 2;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800C664C;
    }
}

loc_800C6648:
{
    r29 = 1;
}

loc_800C664C:
{
    r3 = r28;
    // inline leaf 0x800C692C (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 104));
    // end of inlined leaf 0x800C692C
    r7 = r3;
    r3 = 2;
    r4 = 1;
    r5 = 0;
    r6 = 0;
    r8 = 0;
    r9 = r29;
    ctx->lr = 0x800C6674u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x804B8530u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    ctr = ctx->ctr;
    goto loc_800C6698;
}

loc_800C6678:
{
    r3 = 2;
    r4 = 0;
    r5 = 0;
    r6 = 0;
    r7 = 0;
    r8 = 0;
    r9 = 2;
    ctx->lr = 0x800C6698u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x804B8530u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    ctr = ctx->ctr;
}

loc_800C6698:
{
    r3 = 5;
    r4 = 0;
    r5 = 0;
    r6 = 0;
    r7 = 0;
    r8 = 0;
    r9 = 2;
    ctx->lr = 0x800C66B8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x804B8530u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    ctr = ctx->ctr;
    r3 = r28;
    // inline leaf 0x800C6924 (2 guest instruction(s))
    r3 = (r3 + 152);
    // end of inlined leaf 0x800C6924
    r0 = MemoryInline::FlatRead32(r3);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r3 = 4;
    r4 = (r1 + 12);
    ctx->lr = 0x800C66D4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x804B8420u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    ctr = ctx->ctr;
    r3 = r28;
    // inline leaf 0x800C691C (2 guest instruction(s))
    r3 = (r3 + 156);
    // end of inlined leaf 0x800C691C
    r0 = MemoryInline::FlatRead32(r3);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = 4;
    r4 = (r1 + 8);
    ctx->lr = 0x800C66F0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x804B8340u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    ctr = ctx->ctr;
    r0 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 184), 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r30 + 184), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r30 + 185), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r30 + 186), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r30 + 187), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r30 + 188), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r30 + 189), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r30 + 190), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r30 + 191), static_cast<uint8_t>(r0));
    r5 = 0;
    r3 = 1;
    r0 = 3;
    ctr = r0;
}

loc_800C6724:
{
    r4 = (r31 + r5);
    r0 = MemoryInline::FlatRead8((r4 + 97));
}

loc_800C6730:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_800C6760;
    }
}

loc_800C6734:
{
}

loc_800C6738:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_800C6768;
    }
}

loc_800C673C:
{
}

loc_800C6740:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_800C6770;
    }
}

loc_800C6744:
{
}

loc_800C6748:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_800C677C;
    }
}

loc_800C674C:
{
}

loc_800C6750:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_800C6784;
    }
}

loc_800C6754:
{
}

loc_800C6758:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_800C678C;
    }
}

loc_800C675C:
{
    goto loc_800C6794;
}

loc_800C6760:
{
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r30 + 184), static_cast<uint8_t>(r3));
    goto loc_800C6794;
}

loc_800C6768:
{
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r30 + 185), static_cast<uint8_t>(r3));
    goto loc_800C6794;
}

loc_800C6770:
{
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r30 + 184), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r30 + 185), static_cast<uint8_t>(r3));
    goto loc_800C6794;
}

loc_800C677C:
{
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r30 + 186), static_cast<uint8_t>(r3));
    goto loc_800C6794;
}

loc_800C6784:
{
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r30 + 187), static_cast<uint8_t>(r3));
    goto loc_800C6794;
}

loc_800C678C:
{
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r30 + 186), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r30 + 187), static_cast<uint8_t>(r3));
}

loc_800C6794:
{
    r0 = MemoryInline::FlatRead8((r4 + 105));
}

loc_800C679C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_800C67CC;
    }
}

loc_800C67A0:
{
}

loc_800C67A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_800C67D4;
    }
}

loc_800C67A8:
{
}

loc_800C67AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_800C67DC;
    }
}

loc_800C67B0:
{
}

loc_800C67B4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_800C67E8;
    }
}

loc_800C67B8:
{
}

loc_800C67BC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_800C67F0;
    }
}

loc_800C67C0:
{
}

loc_800C67C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_800C67F8;
    }
}

loc_800C67C8:
{
    goto loc_800C6800;
}

loc_800C67CC:
{
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r30 + 188), static_cast<uint8_t>(r3));
    goto loc_800C6800;
}

loc_800C67D4:
{
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r30 + 189), static_cast<uint8_t>(r3));
    goto loc_800C6800;
}

loc_800C67DC:
{
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r30 + 188), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r30 + 189), static_cast<uint8_t>(r3));
    goto loc_800C6800;
}

loc_800C67E8:
{
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r30 + 190), static_cast<uint8_t>(r3));
    goto loc_800C6800;
}

loc_800C67F0:
{
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r30 + 191), static_cast<uint8_t>(r3));
    goto loc_800C6800;
}

loc_800C67F8:
{
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r30 + 190), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r30 + 191), static_cast<uint8_t>(r3));
}

loc_800C6800:
{
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800C6724;
    }
}

loc_800C6808:
{
    r5 = 0;
    r3 = 1;
    r0 = 4;
    ctr = r0;
}

loc_800C6818:
{
    r4 = (r31 + r5);
    r0 = MemoryInline::FlatRead8((r4 + 100));
}

loc_800C6824:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_800C6854;
    }
}

loc_800C6828:
{
}

loc_800C682C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_800C685C;
    }
}

loc_800C6830:
{
}

loc_800C6834:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_800C6864;
    }
}

loc_800C6838:
{
}

loc_800C683C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_800C6870;
    }
}

loc_800C6840:
{
}

loc_800C6844:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_800C6878;
    }
}

loc_800C6848:
{
}

loc_800C684C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_800C6880;
    }
}

loc_800C6850:
{
    goto loc_800C6888;
}

loc_800C6854:
{
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r30 + 184), static_cast<uint8_t>(r3));
    goto loc_800C6888;
}

loc_800C685C:
{
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r30 + 185), static_cast<uint8_t>(r3));
    goto loc_800C6888;
}

loc_800C6864:
{
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r30 + 184), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r30 + 185), static_cast<uint8_t>(r3));
    goto loc_800C6888;
}

loc_800C6870:
{
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r30 + 186), static_cast<uint8_t>(r3));
    goto loc_800C6888;
}

loc_800C6878:
{
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r30 + 187), static_cast<uint8_t>(r3));
    goto loc_800C6888;
}

loc_800C6880:
{
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r30 + 186), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r30 + 187), static_cast<uint8_t>(r3));
}

loc_800C6888:
{
    r0 = MemoryInline::FlatRead8((r4 + 108));
}

loc_800C6890:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_800C68C0;
    }
}

loc_800C6894:
{
}

loc_800C6898:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_800C68C8;
    }
}

loc_800C689C:
{
}

loc_800C68A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_800C68D0;
    }
}

loc_800C68A4:
{
}

loc_800C68A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_800C68DC;
    }
}

loc_800C68AC:
{
}

loc_800C68B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_800C68E4;
    }
}

loc_800C68B4:
{
}

loc_800C68B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_800C68EC;
    }
}

loc_800C68BC:
{
    goto loc_800C68F4;
}

loc_800C68C0:
{
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r30 + 188), static_cast<uint8_t>(r3));
    goto loc_800C68F4;
}

loc_800C68C8:
{
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r30 + 189), static_cast<uint8_t>(r3));
    goto loc_800C68F4;
}

loc_800C68D0:
{
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r30 + 188), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r30 + 189), static_cast<uint8_t>(r3));
    goto loc_800C68F4;
}

loc_800C68DC:
{
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r30 + 190), static_cast<uint8_t>(r3));
    goto loc_800C68F4;
}

loc_800C68E4:
{
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r30 + 191), static_cast<uint8_t>(r3));
    goto loc_800C68F4;
}

loc_800C68EC:
{
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r30 + 190), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r30 + 191), static_cast<uint8_t>(r3));
}

loc_800C68F4:
{
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800C6818;
    }
}

loc_800C68FC:
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
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800C6548 func_800C6548 preserves=true fpr_mask=0x00000000
