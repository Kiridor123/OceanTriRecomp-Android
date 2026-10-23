#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8034BCBC(CpuContext* ctx);
extern "C" uint64_t func_8034BCBC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8034C7E8(CpuContext* ctx);
extern "C" uint64_t func_8034C7E8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8034C678_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
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
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8034C678;

loc_8034C678:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r30 = r3;
    r31 = r4;
    r4 = 0;
    r0 = 0;
    MemoryInline::WriteResolved8(guest_range_0, 12u, (r1 + 12), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 13u, (r1 + 13), static_cast<uint8_t>(r0));
    r0 = (r3 & 255);
}

loc_8034C6AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8034C6CC;
    }
}

loc_8034C6B0:
{
}

loc_8034C6B4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8034C6DC;
    }
}

loc_8034C6B8:
{
}

loc_8034C6BC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8034C6EC;
    }
}

loc_8034C6C0:
{
}

loc_8034C6C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_8034C6FC;
    }
}

loc_8034C6C8:
{
    goto loc_8034C708;
}

loc_8034C6CC:
{
    r3 = 0;
    // inline leaf 0x8029F87C (7 guest instruction(s))
    r4 = 0x806B0000u;
    r4 = (r4 + -3160);
    r0 = (r3 & 65535);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 1880));
    // end of inlined leaf 0x8029F87C
    r4 = r3;
    goto loc_8034C708;
}

loc_8034C6DC:
{
    r3 = 1;
    // inline leaf 0x8029F87C (7 guest instruction(s))
    r4 = 0x806B0000u;
    r4 = (r4 + -3160);
    r0 = (r3 & 65535);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 1880));
    // end of inlined leaf 0x8029F87C
    r4 = r3;
    goto loc_8034C708;
}

loc_8034C6EC:
{
    r3 = 2;
    // inline leaf 0x8029F87C (7 guest instruction(s))
    r4 = 0x806B0000u;
    r4 = (r4 + -3160);
    r0 = (r3 & 65535);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 1880));
    // end of inlined leaf 0x8029F87C
    r4 = r3;
    goto loc_8034C708;
}

loc_8034C6FC:
{
    r3 = 3;
    // inline leaf 0x8029F87C (7 guest instruction(s))
    r4 = 0x806B0000u;
    r4 = (r4 + -3160);
    r0 = (r3 & 65535);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 1880));
    // end of inlined leaf 0x8029F87C
    r4 = r3;
}

loc_8034C708:
{
}

loc_8034C70C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8034C71C;
    }
}

loc_8034C710:
{
    r0 = MemoryInline::FlatRead16((r1 + 12));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r3 = (r3_rot_0 & -65536);
    goto loc_8034C7D0;
}

loc_8034C71C:
{
    r3 = (r1 + 12);
    r0 = (r31 & 255);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_6 & -2);
    r4 = (r4 + r0);
    // inline leaf 0x80349978 (5 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWriteRam8(r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x80349978
    r28 = MemoryInline::FlatRead8((r1 + 13));
    r27 = 0;
    r3 = (r30 & 255);
    r29 = (r3 + 1);
    goto loc_8034C7A4;
}

loc_8034C744:
{
    r0 = MemoryInline::FlatRead8((r1 + 12));
}

loc_8034C74C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_8034C770;
    }
}

loc_8034C750:
{
    r3 = (r29 & 255);
    r0 = (r0 + r27);
    r4 = (r0 & 255);
    ctx->lr = 0x8034C760u;
    if constexpr (KnownRegArgsCpuCall<0x8034C7E8u>(&func_8034C7E8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8034C7E8_164E = func_8034C7E8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8034C7E8_164E);
        r4 = static_cast<uint32_t>(regargs_result_8034C7E8_164E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8034C7E8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_8034C764:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(-1))) {
        goto loc_8034C7A0;
    }
}

loc_8034C768:
{
    r28 = (r28 + -1);
    goto loc_8034C7A0;
}

loc_8034C770:
{
    r3 = (r30 & 255);
    r4 = (r31 & 255);
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r27)));
    r6 = (r1 + 8);
    ctx->lr = 0x8034C784u;
    if constexpr (KnownRegArgsCpuCall<0x8034BCBCu>(&func_8034BCBC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        const auto regargs_result_8034BCBC_1B02 = func_8034BCBC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8034BCBC_1B02);
        r4 = static_cast<uint32_t>(regargs_result_8034BCBC_1B02 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x8034BCBCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
    }
    r0 = MemoryInline::FlatRead8((r1 + 8));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8034C790:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8034C7A0;
    }
}

loc_8034C794:
{
    r3 = (r28 & 255);
    r0 = (r3 + -1);
    r28 = (r0 & 255);
}

loc_8034C7A0:
{
    r27 = (r27 + 1);
}

loc_8034C7A4:
{
    r3 = MemoryInline::FlatRead8((r1 + 13));
}

loc_8034C7AC:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(r3))) {
        goto loc_8034C744;
    }
}

loc_8034C7B0:
{
    r0 = (r28 & 255);
}

loc_8034C7B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8034C7C8;
    }
}

loc_8034C7BC:
{
}

loc_8034C7C0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r3))) {
        goto loc_8034C7C8;
    }
}

loc_8034C7C4:
{
    MemoryInline::FlatWriteRam8((r1 + 13), static_cast<uint8_t>(r28));
}

loc_8034C7C8:
{
    r0 = MemoryInline::FlatRead16((r1 + 12));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r3 = (r3_rot_1 & -65536);
}

loc_8034C7D0:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8034C678(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8034C678_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000021FB gpr_write=0x000009FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8034C678 func_8034C678 preserves=true fpr_mask=0x00000000
