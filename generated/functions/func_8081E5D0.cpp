#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8081E5D0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8081E5D0;

loc_8081E5D0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r31 = 0x80870000u;
    r0 = MemoryInline::FlatRead32((r31 + -32328));
}

loc_8081E5F0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8081E77C;
    }
}

loc_8081E5F4:
{
    r27 = 0;
    r28 = 0;
    r30 = 0;
}

loc_8081E600:
{
    r3 = MemoryInline::FlatRead32((r31 + -32328));
    r26 = (r3 + r28);
    r0 = MemoryInline::FlatRead8((r26 + 11804));
}

loc_8081E610:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8081E6A4;
    }
}

loc_8081E614:
{
    r0 = MemoryInline::FlatRead32((r26 + 11816));
}

loc_8081E61C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_8081E630;
    }
}

loc_8081E620:
{
}

loc_8081E624:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(23))) {
        goto loc_8081E630;
    }
}

loc_8081E628:
{
}

loc_8081E62C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(25))) {
        goto loc_8081E63C;
    }
}

loc_8081E630:
{
    r29 = (r3 + 65536);
    r29 = (r29 + 17212);
    goto loc_8081E644;
}

loc_8081E63C:
{
    r29 = (r3 + 65536);
    r29 = (r29 + 17204);
}

loc_8081E644:
{
    r3 = r26;
    r4 = 0;
    ctx->lr = 0x8081E650u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    InvokeDirectCpu<0x80844280u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r3 = r26;
    ctx->lr = 0x8081E658u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    InvokeDirectCpu<0x808441E0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    MemoryInline::FlatWrite8((r26 + 11804), static_cast<uint8_t>(r30));
    r3 = MemoryInline::FlatRead32((r26 + 11812));
}

loc_8081E664:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8081E674;
    }
}

loc_8081E668:
{
    r0 = MemoryInline::FlatRead32((r26 + 11808));
    MemoryInline::FlatWrite32(r29, r0);
    goto loc_8081E67C;
}

loc_8081E674:
{
    r0 = MemoryInline::FlatRead32((r26 + 11808));
    MemoryInline::FlatWrite32((r3 + 11808), r0);
}

loc_8081E67C:
{
    r3 = MemoryInline::FlatRead32((r26 + 11808));
}

loc_8081E684:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8081E694;
    }
}

loc_8081E688:
{
    r0 = MemoryInline::FlatRead32((r26 + 11812));
    MemoryInline::FlatWrite32((r29 + 4), r0);
    goto loc_8081E69C;
}

loc_8081E694:
{
    r0 = MemoryInline::FlatRead32((r26 + 11812));
    MemoryInline::FlatWrite32((r3 + 11812), r0);
}

loc_8081E69C:
{
    MemoryInline::FlatWrite32((r26 + 11808), r30);
    MemoryInline::FlatWrite32((r26 + 11812), r30);
}

loc_8081E6A4:
{
    r27 = (r27 + 1);
    r28 = (r28 + 11820);
}

loc_8081E6B0:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(4))) {
        goto loc_8081E600;
    }
}

loc_8081E6B4:
{
    r26 = 0;
    r28 = 0;
    r31 = 0;
    r30 = 0x80870000u;
}

loc_8081E6C4:
{
    r5 = MemoryInline::FlatRead32((r30 + -32328));
    r4 = (r5 + 65536);
    r3 = (r4 + r28);
    r0 = MemoryInline::FlatRead8((r3 + -6452));
    r27 = (r3 + -18256);
}

loc_8081E6DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8081E76C;
    }
}

loc_8081E6E0:
{
    r0 = MemoryInline::FlatRead32((r27 + 11816));
}

loc_8081E6E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_8081E6FC;
    }
}

loc_8081E6EC:
{
}

loc_8081E6F0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(23))) {
        goto loc_8081E6FC;
    }
}

loc_8081E6F4:
{
}

loc_8081E6F8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(25))) {
        goto loc_8081E708;
    }
}

loc_8081E6FC:
{
    r29 = (r5 + 65536);
    r29 = (r29 + 17212);
    goto loc_8081E70C;
}

loc_8081E708:
{
    r29 = (r4 + 17204);
}

loc_8081E70C:
{
    r3 = r27;
    r4 = 0;
    ctx->lr = 0x8081E718u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    InvokeDirectCpu<0x80844280u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r3 = r27;
    ctx->lr = 0x8081E720u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    InvokeDirectCpu<0x808441E0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    MemoryInline::FlatWrite8((r27 + 11804), static_cast<uint8_t>(r31));
    r3 = MemoryInline::FlatRead32((r27 + 11812));
}

loc_8081E72C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8081E73C;
    }
}

loc_8081E730:
{
    r0 = MemoryInline::FlatRead32((r27 + 11808));
    MemoryInline::FlatWrite32(r29, r0);
    goto loc_8081E744;
}

loc_8081E73C:
{
    r0 = MemoryInline::FlatRead32((r27 + 11808));
    MemoryInline::FlatWrite32((r3 + 11808), r0);
}

loc_8081E744:
{
    r3 = MemoryInline::FlatRead32((r27 + 11808));
}

loc_8081E74C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8081E75C;
    }
}

loc_8081E750:
{
    r0 = MemoryInline::FlatRead32((r27 + 11812));
    MemoryInline::FlatWrite32((r29 + 4), r0);
    goto loc_8081E764;
}

loc_8081E75C:
{
    r0 = MemoryInline::FlatRead32((r27 + 11812));
    MemoryInline::FlatWrite32((r3 + 11812), r0);
}

loc_8081E764:
{
    MemoryInline::FlatWrite32((r27 + 11808), r31);
    MemoryInline::FlatWrite32((r27 + 11812), r31);
}

loc_8081E76C:
{
    r26 = (r26 + 1);
    r28 = (r28 + 11820);
}

loc_8081E778:
{
    if ((static_cast<int32_t>(r26) < static_cast<int32_t>(3))) {
        goto loc_8081E6C4;
    }
}

loc_8081E77C:
{
    r11 = (r1 + 32);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000003FB gpr_write=0x00000BFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8081E5D0 func_8081E5D0 preserves=true fpr_mask=0x00000000
