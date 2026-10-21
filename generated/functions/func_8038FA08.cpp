#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800CEF7C(CpuContext* ctx);
extern "C" uint32_t func_800CEF7C_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_8038F90C(CpuContext* ctx);
extern "C" uint32_t func_8038F90C_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_8038FA08_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r29_addr_0 = 0;
    uint32_t r29_addr_1 = 0;
    uint32_t r29_addr_2 = 0;
    uint32_t r29_addr_3 = 0;
    uint32_t r29_addr_4 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x8038FA08u);
    goto loc_8038FA08;

loc_8038FA08:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r11 = (r1 + 80);
    // inline leaf 0x8045747C (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    // end of inlined leaf 0x8045747C
    r30 = r3;
    r5 = MemoryInline::FlatRead32((r13 + -17824));
    r0 = MemoryInline::FlatRead16((r5 + 18510));
    MemoryInline::FlatWrite16((r3 + 6), static_cast<uint16_t>(r0));
    r27 = 0;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    r26 = (r0 * 37);
    goto loc_8038FA4C;
}

loc_8038FA3C:
{
    r3 = MemoryInline::FlatRead16((r30 + 6));
    // inline leaf 0x800CEF7C (18 guest instruction(s))
}

loc_inl1_0x800CEF7C:
{
    r0 = (r3 & 65535);
}

loc_inl1_0x800CEF84:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x800CEF8C;
    }
}

loc_inl1_0x800CEF88:
{
    r0 = 1;
}

loc_inl1_0x800CEF8C:
{
    r5 = (r0 * 176);
    r3 = 11337728;
    r0 = (r3 + 30009);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r5)) >> 32));
    r0 = (r5 - r3);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_2 & 2147483647);
    r0 = (r0 + r3);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_2 & 131071);
    r3 = 65536;
    r0 = (r3 + -173);
    r0 = (r4 * r0);
    r0 = (r5 - r0);
    r3 = (r0 & 65535);
}

loc_inl1_cont_800CEF7C:
{
    // end of inlined leaf 0x800CEF7C
    MemoryInline::FlatWrite16((r30 + 6), static_cast<uint16_t>(r3));
    r27 = (r27 + 1);
}

loc_8038FA4C:
{
}

loc_8038FA50:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(r26))) {
        goto loc_8038FA3C;
    }
}

loc_8038FA54:
{
    r31 = 0;
    r3 = 0x805F0000u;
    r28 = (r3 + 5836);
    r27 = r30;
    r29 = (r1 + 8);
}

loc_8038FA68:
{
    r25 = 0;
    r24 = MemoryInline::FlatRead32(r28);
    r3 = (r1 + 8);
    r4 = 0;
    r5 = 32;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r26 = (r1 + 8);
    goto loc_8038FAA8;
}

loc_8038FA88:
{
    ctx->lr = 0x8038FA8Cu;
    if constexpr (KnownRegArgsCpuCall<0x8038F90Cu>(&func_8038F90C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        const auto regargs_result_8038F90C_F45 = func_8038F90C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8038F90C_F45;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8038F90Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_8038FA90:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8038FAA4;
    }
}

loc_8038FA94:
{
    r0 = MemoryInline::FlatRead8(r24);
    MemoryInline::FlatWrite8(r26, static_cast<uint8_t>(r0));
    r26 = (r26 + 1);
    r25 = (r25 + 1);
}

loc_8038FAA4:
{
    r24 = (r24 + 1);
}

loc_8038FAA8:
{
    r3 = MemoryInline::FlatRead8(r24);
}

loc_8038FAB0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8038FA88;
    }
}

loc_8038FAB4:
{
    r3 = MemoryInline::FlatRead16((r30 + 6));
    if constexpr (KnownRegArgsCpuCall<0x800CEF7Cu>(&func_800CEF7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        const auto regargs_result_800CEF7C_144A = func_800CEF7C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800CEF7C_144A;
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x800CEF7Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    MemoryInline::FlatWrite16((r30 + 6), static_cast<uint16_t>(r3));
}

loc_8038FAC4:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(4))) {
        goto loc_8038FAE4;
    }
}

loc_8038FAC8:
{
    r3 = (r3 & 65535);
    r0 = PPC_Divw(static_cast<int32_t>(r3), static_cast<int32_t>(r25));
    r0 = (r0 * r25);
    r0 = (r3 - r0);
    r29_addr_2 = (r29 + r0);
    r0 = MemoryInline::FlatRead8(r29_addr_2);
    MemoryInline::FlatWrite16((r30 + 86), static_cast<uint16_t>(r0));
    goto loc_8038FAFC;
}

loc_8038FAE4:
{
    r3 = (r3 & 65535);
    r0 = PPC_Divw(static_cast<int32_t>(r3), static_cast<int32_t>(r25));
    r0 = (r0 * r25);
    r0 = (r3 - r0);
    r29_addr_3 = (r29 + r0);
    r0 = MemoryInline::FlatRead8(r29_addr_3);
    MemoryInline::FlatWrite16((r27 + 78), static_cast<uint16_t>(r0));
}

loc_8038FAFC:
{
    r28 = (r28 + 4);
    r27 = (r27 + 2);
    r31 = (r31 + 1);
}

loc_8038FB0C:
{
    if ((static_cast<int32_t>(r31) < static_cast<int32_t>(5))) {
        goto loc_8038FA68;
    }
}

loc_8038FB10:
{
    r11 = (r1 + 80);
    // inline leaf 0x804574C8 (9 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, true, false);
    // end of inlined leaf 0x804574C8
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8038FA08(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8038FA08_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000203B gpr_write=0x0000083B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8038FA08 func_8038FA08 preserves=true fpr_mask=0x00000000
