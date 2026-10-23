#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80212B80(CpuContext* ctx);
extern "C" uint64_t func_80212B80_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80212F98_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80212F98;

loc_80212F98:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x8045747C (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    // end of inlined leaf 0x8045747C
    r24 = r3;
    r25 = r4;
    r26 = r5;
    r27 = r6;
    r28 = r7;
    r29 = r8;
    r30 = r9;
    r31 = r10;
    r3 = (r3 & 255);
    r4 = (r6 & 65535);
    r5 = 1;
    ctx->lr = 0x80212FDCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    InvokeDirectCpu<0x802138D4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = (r3 & 65535);
    r3 = (16 - r4);
    r0 = (r4 + -16);
    r0 = (r3 | r0);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & 1);
}

loc_80212FF4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80213048;
    }
}

loc_80212FF8:
{
    r3 = (r24 & 255);
    r4 = (r25 & 255);
    r5 = (r28 & 65535);
    ctx->lr = 0x80213008u;
    if constexpr (KnownRegArgsCpuCall<0x80212B80u>(&func_80212B80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80212B80_B36 = func_80212B80_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80212B80_B36);
        r4 = static_cast<uint32_t>(regargs_result_80212B80_B36 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80212B80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(r3));
}

loc_8021300C:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8021301C;
    }
}

loc_80213010:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80213048;
    }
}

loc_80213014:
{
}

loc_80213018:
{
    if ((static_cast<int32_t>(r26) >= static_cast<int32_t>(r27))) {
        goto loc_80213048;
    }
}

loc_8021301C:
{
    r4 = MemoryInline::FlatRead32(r30);
}

loc_80213024:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(-1))) {
        goto loc_80213040;
    }
}

loc_80213028:
{
    r0 = MemoryInline::FlatRead32(r31);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_80213030:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80213040;
    }
}

loc_80213034:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80213048;
    }
}

loc_80213038:
{
}

loc_8021303C:
{
    if ((static_cast<int32_t>(r27) >= static_cast<int32_t>(r4))) {
        goto loc_80213048;
    }
}

loc_80213040:
{
    MemoryInline::FlatWrite32(r30, r27);
    MemoryInline::FlatWrite32(r31, r3);
}

loc_80213048:
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
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80212F98(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80212F98_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000037FF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80212F98 func_80212F98 preserves=true fpr_mask=0x00000000
