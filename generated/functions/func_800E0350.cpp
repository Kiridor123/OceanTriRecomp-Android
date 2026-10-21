#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_800E0350_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
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
    PPC_FPR f0 = ctx->fpr[0];

    MKW_GUEST_ENTER(0x800E0350u);
    goto loc_800E0350;

loc_800E0350:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x8045747C (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    // end of inlined leaf 0x8045747C
    r25 = r3;
    // inline leaf 0x800F2964 (9 guest instruction(s))
}

loc_inl1_0x800F2964:
{
    r3 = MemoryInline::FlatRead32((r13 + -17396));
    r3 = (r3 + 65536);
    r0 = MemoryInline::FlatRead32((r3 + -26700));
}

loc_inl1_0x800F2974:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_inl1_0x800F2980;
    }
}

loc_inl1_0x800F2978:
{
    r3 = MemoryInline::FlatRead32((r3 + -26704));
    goto loc_inl1_cont_800F2964;
}

loc_inl1_0x800F2980:
{
    r3 = 0;
}

loc_inl1_cont_800F2964:
{
    // end of inlined leaf 0x800F2964
    r31 = r3;
}

loc_800E0374:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800E0474;
    }
}

loc_800E0378:
{
    r27 = (r3 + 8);
    r0 = MemoryInline::FlatRead32(r3);
}

loc_800E0384:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800E0474;
    }
}

loc_800E0388:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_800E0390:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800E0398;
    }
}

loc_800E0394:
{
    goto loc_800E0474;
}

loc_800E0398:
{
    r26 = 0;
    r24 = (r25 + 196608);
    r24 = (r24 + -27804);
}

loc_800E03A4:
{
    r3 = r24;
    r4 = 0;
    r5 = 20;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r24 = (r24 + 20);
    r26 = (r26 + 1);
}

loc_800E03C0:
{
    if ((static_cast<int32_t>(r26) < static_cast<int32_t>(32))) {
        goto loc_800E03A4;
    }
}

loc_800E03C4:
{
    r26 = 0;
    r28 = 0;
    r30 = r25;
    r29 = (r25 + 196608);
    r29 = (r29 + -27800);
    r24 = 1;
    goto loc_800E0468;
}

loc_800E03E0:
{
    r0 = MemoryInline::FlatRead8(r27);
}

loc_800E03E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800E0460;
    }
}

loc_800E03EC:
{
    r4 = MemoryInline::FlatRead8((r27 + 69));
    r3 = (r25 + 196608);
    r0 = MemoryInline::FlatRead8((r3 + -28034));
}

loc_800E03FC:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_800E0460;
    }
}

loc_800E0400:
{
    r0 = MemoryInline::FlatRead8((r27 + 2));
}

loc_800E0408:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_800E0460;
    }
}

loc_800E040C:
{
    r0 = MemoryInline::FlatRead8((r27 + 1));
}

loc_800E0414:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800E0474;
    }
}

loc_800E0418:
{
    r3 = (r30 + 196608);
    MemoryInline::FlatWrite8((r3 + -27804), static_cast<uint8_t>(r24));
    r0 = MemoryInline::FlatRead8((r27 + 69));
    MemoryInline::FlatWrite8((r3 + -27803), static_cast<uint8_t>(r0));
    r3 = r29;
    r4 = (r27 + 4);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    f0.d = MemoryInline::FlatReadFloat32((r27 + 52));
    r3 = (r30 + 196608);
    MemoryInline::FlatWriteFloat32((r3 + -27788), f0.d);
    r0 = MemoryInline::FlatRead32((r27 + 64));
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8((r3 + -27801), static_cast<uint8_t>(r0));
    r30 = (r30 + 20);
    r29 = (r29 + 20);
    r26 = (r26 + 1);
}

loc_800E045C:
{
    if ((static_cast<int32_t>(r26) >= static_cast<int32_t>(32))) {
        goto loc_800E0474;
    }
}

loc_800E0460:
{
    r28 = (r28 + 1);
    r27 = (r27 + 72);
}

loc_800E0468:
{
    r0 = MemoryInline::FlatRead32((r31 + 4));
}

loc_800E0470:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(r0))) {
        goto loc_800E03E0;
    }
}

loc_800E0474:
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
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800E0350(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800E0350_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000203B gpr_write=0x0000083B gpr_return=0x00000018 fpr_read=0x00000001 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800E0350 func_800E0350 preserves=true fpr_mask=0x00000000
