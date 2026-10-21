#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802A0368(CpuContext* ctx);
extern "C" uint64_t func_802A0368_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" void func_8026AB00(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x8026AB00u);
    goto loc_8026AB00;

loc_8026AB00:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x8045747C (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    // end of inlined leaf 0x8045747C
    r26 = r3;
    r27 = r4;
    r28 = 0;
    r3 = 0x805C0000u;
    r30 = (r3 + 26448);
    r31 = 0;
    r25 = 100;
    r24 = 1;
}

loc_8026AB34:
{
    r29 = (r27 + r28);
    r0 = MemoryInline::FlatRead8((r29 + 96));
}

loc_8026AB40:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026AB50;
    }
}

loc_8026AB44:
{
}

loc_8026AB48:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8026ABB0;
    }
}

loc_8026AB4C:
{
    goto loc_8026ABEC;
}

loc_8026AB50:
{
    MemoryInline::FlatWrite8((r29 + 104), static_cast<uint8_t>(r31));
    r0 = MemoryInline::FlatRead8((r27 + 112));
}

loc_8026AB5C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8026AB70;
    }
}

loc_8026AB60:
{
}

loc_8026AB64:
{
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(1))) {
        goto loc_8026AB70;
    }
}

loc_8026AB68:
{
    r3 = MemoryInline::FlatRead16((r27 + 4));
    goto loc_8026AB74;
}

loc_8026AB70:
{
    r3 = MemoryInline::FlatRead16(r27);
}

loc_8026AB74:
{
    r0 = MemoryInline::FlatRead16(r30);
    r0 = (r3 & r0);
}

loc_8026AB80:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026ABEC;
    }
}

loc_8026AB84:
{
    r3 = r26;
    ctx->lr = 0x8026AB8Cu;
    if constexpr (KnownRegArgsCpuCall<0x802A0368u>(&func_802A0368)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802A0368_A72 = func_802A0368_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802A0368_A72);
        r4 = static_cast<uint32_t>(regargs_result_802A0368_A72 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802A0368u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_8026AB90:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8026AB9C;
    }
}

loc_8026AB94:
{
}

loc_8026AB98:
{
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(6))) {
        goto loc_8026ABEC;
    }
}

loc_8026AB9C:
{
    r3 = MemoryInline::FlatRead8((r29 + 96));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r29 + 96), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r29 + 104), static_cast<uint8_t>(r24));
    goto loc_8026ABEC;
}

loc_8026ABB0:
{
    r3 = MemoryInline::FlatRead16(r27);
    r0 = MemoryInline::FlatRead16(r30);
    r0 = (r3 & r0);
}

loc_8026ABC0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026ABE8;
    }
}

loc_8026ABC4:
{
    r3 = MemoryInline::FlatRead8((r29 + 104));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r29 + 104), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r29 + 104));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8026ABDC:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(100))) {
        goto loc_8026ABEC;
    }
}

loc_8026ABE0:
{
    MemoryInline::FlatWrite8((r29 + 104), static_cast<uint8_t>(r25));
    goto loc_8026ABEC;
}

loc_8026ABE8:
{
    MemoryInline::FlatWrite8((r29 + 96), static_cast<uint8_t>(r31));
}

loc_8026ABEC:
{
    r30 = (r30 + 2);
    r28 = (r28 + 1);
}

loc_8026ABF8:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(8))) {
        goto loc_8026AB34;
    }
}

loc_8026ABFC:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574C8 (9 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, true, false);
    // end of inlined leaf 0x804574C8
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000081B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8026AB00 func_8026AB00 preserves=true fpr_mask=0x00000000
