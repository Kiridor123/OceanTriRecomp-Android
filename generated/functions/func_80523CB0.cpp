#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80523CB0_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x80523CB0u);
    goto loc_80523CB0;

loc_80523CB0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r4;
    r30 = r3;
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x804D12F0
    r0 = MemoryInline::FlatRead32((r13 + -13544));
}

loc_80523CD8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-3))) {
        goto loc_80523CE4;
    }
}

loc_80523CDC:
{
    r31 = -100;
    goto loc_80523DA8;
}

loc_80523CE4:
{
}

loc_80523CE8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(8))) {
        goto loc_80523CF4;
    }
}

loc_80523CEC:
{
    r31 = -5;
    goto loc_80523DA8;
}

loc_80523CF4:
{
}

loc_80523CF8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(9))) {
        goto loc_80523D04;
    }
}

loc_80523CFC:
{
    r31 = -4;
    goto loc_80523DA8;
}

loc_80523D04:
{
    r4 = MemoryInline::FlatRead32((r13 + -13528));
    r6 = 0;
}

loc_80523D10:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80523D20;
    }
}

loc_80523D14:
{
    r0 = MemoryInline::FlatRead32(r4);
    r6 = r4;
    MemoryInline::FlatWrite32((r13 + -13528), r0);
}

loc_80523D20:
{
}

loc_80523D24:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_80523D30;
    }
}

loc_80523D28:
{
    r31 = -5;
    goto loc_80523DA8;
}

loc_80523D30:
{
    r0 = 8;
    MemoryInline::FlatWrite32((r13 + -13544), r0);
    r5 = 65536;
    r4 = 0x80520000u;
    r0 = (r5 + -26100);
    guest_range_0 = MemoryInline::ResolveRangeHost(r6, 0, 37u, false, true);
    MemoryInline::WriteResolved16(guest_range_0, 4u, (r6 + 4), static_cast<uint16_t>(r0));
    r0 = 1;
    r4 = (r4 + 25152);
    MemoryInline::WriteResolved16(guest_range_0, 6u, (r6 + 6), static_cast<uint16_t>(r0));
    r0 = 0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r6 + 24), r4);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r6 + 28), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r6 + 32), r31);
    MemoryInline::WriteResolved8(guest_range_0, 36u, (r6 + 36), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead32((r13 + -13532));
}

loc_80523D70:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80523D8C;
    }
}

loc_80523D74:
{
    MemoryInline::FlatWrite32((r13 + -13532), r6);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r6, r0);
    goto loc_80523DA4;
}

loc_80523D88:
{
    r4 = r0;
}

loc_80523D8C:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_80523D94:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80523D88;
    }
}

loc_80523D98:
{
    MemoryInline::FlatWrite32(r4, r6);
    r0 = 0;
    MemoryInline::WriteResolved32(guest_range_0, 0u, r6, r0);
}

loc_80523DA4:
{
    r31 = 0;
}

loc_80523DA8:
{
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl1_0x804D1330:
{
}

loc_inl1_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl1_0x804D1344;
    }
}

loc_inl1_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl1_0x804D1348;
}

loc_inl1_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl1_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_1 & 1);
}

loc_inl1_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
    r3 = r31;
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80523CB0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80523CB0_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000207B gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80523CB0 func_80523CB0 preserves=true fpr_mask=0x00000000
