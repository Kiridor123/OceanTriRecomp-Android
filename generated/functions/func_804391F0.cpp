#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803BE9F8(CpuContext* ctx);
extern "C" uint64_t func_803BE9F8_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_803BEC54(CpuContext* ctx);
extern "C" uint64_t func_803BEC54_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8043890C(CpuContext* ctx);
extern "C" uint32_t func_8043890C_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_80438984(CpuContext* ctx);
extern "C" uint32_t func_80438984_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_804391F0_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r22_addr_0 = 0;
    uint32_t r22_addr_1 = 0;
    uint32_t r22_addr_2 = 0;
    uint32_t r22_addr_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r20 = ctx->gpr[20];
    uint32_t r21 = ctx->gpr[21];
    uint32_t r22 = ctx->gpr[22];
    uint32_t r23 = ctx->gpr[23];
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

    MKW_GUEST_ENTER(0x804391F0u);
    goto loc_804391F0;

loc_804391F0:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x8045746C (13 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -48), 0, 48u, false, true);
    // end of inlined leaf 0x8045746C
    r24 = r3;
    r27 = (r3 + 108);
    r4 = MemoryInline::FlatRead8((r3 + 422));
    r0 = MemoryInline::FlatRead8((r3 + 424));
    r0 = (r4 * r0);
    r26 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r25 = 0;
    r3 = 0x80600000u;
    r0 = (r3 + 19824);
    r28 = (r0 + r26);
    r29 = 1;
    r30 = 0;
    r21 = 2112290816;
    r20 = 1854668800;
    r31 = 0x8C8D0000u;
    r3 = 0x80600000u;
    r22 = (r3 + -29464);
    r23 = 2;
    goto loc_80439368;
}

loc_80439250:
{
    MemoryInline::FlatWrite8((r27 + 2), static_cast<uint8_t>(r29));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r26)));
    MemoryInline::FlatWrite8(r27, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r24 + 423));
    r0 = (r0 - r25);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_2 & 134217727);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::FlatWrite8((r27 + 1), static_cast<uint8_t>(r0));
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r26)));
    r0 = (r3 + -11);
}

loc_80439280:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_804392D0;
    }
}

loc_80439284:
{
}

loc_80439288:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(3))) {
        goto loc_80439298;
    }
}

loc_8043928C:
{
}

loc_80439290:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804392B8;
    }
}

loc_80439294:
{
    goto loc_804392E4;
}

loc_80439298:
{
    r3 = MemoryInline::FlatRead8((r24 + 17));
    r4 = 14;
    ctx->lr = 0x804392A4u;
    if constexpr (KnownRegArgsCpuCall<0x803BE9F8u>(&func_803BE9F8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_803BE9F8_EF8 = func_803BE9F8_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_803BE9F8_EF8);
        r4 = static_cast<uint32_t>(regargs_result_803BE9F8_EF8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x803BE9F8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r0 = (r3 & 255);
}

loc_804392AC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_804392E4;
    }
}

loc_804392B0:
{
    MemoryInline::FlatWrite8((r27 + 2), static_cast<uint8_t>(r30));
    goto loc_804392E4;
}

loc_804392B8:
{
    r3 = r24;
    ctx->lr = 0x804392C0u;
    if constexpr (KnownRegArgsCpuCall<0x8043890Cu>(&func_8043890C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        const auto regargs_result_8043890C_133D = func_8043890C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8043890C_133D;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x8043890Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_804392C4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804392E4;
    }
}

loc_804392C8:
{
    MemoryInline::FlatWrite8((r27 + 2), static_cast<uint8_t>(r30));
    goto loc_804392E4;
}

loc_804392D0:
{
    r3 = r24;
    ctx->lr = 0x804392D8u;
    if constexpr (KnownRegArgsCpuCall<0x80438984u>(&func_80438984)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        const auto regargs_result_80438984_1723 = func_80438984_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80438984_1723;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80438984u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_804392DC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804392E4;
    }
}

loc_804392E0:
{
    MemoryInline::FlatWrite8((r27 + 2), static_cast<uint8_t>(r30));
}

loc_804392E4:
{
    r0 = MemoryInline::FlatRead8((r27 + 2));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_804392F0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80439300;
    }
}

loc_804392F4:
{
    r0 = (r31 + -29441);
    MemoryInline::FlatWrite32((r27 + 12), r0);
    goto loc_8043931C;
}

loc_80439300:
{
    r0 = MemoryInline::FlatRead8((r27 + 1));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8043930C:
{
    r0 = (r20 + 32511);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80439318;
    }
}

loc_80439314:
{
    r0 = (r21 + -16641);
}

loc_80439318:
{
    MemoryInline::FlatWrite32((r27 + 12), r0);
}

loc_8043931C:
{
    r3 = MemoryInline::FlatRead8((r24 + 17));
    r4 = MemoryInline::FlatRead8(r28);
    ctx->lr = 0x80439328u;
    if constexpr (KnownRegArgsCpuCall<0x803BEC54u>(&func_803BEC54)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_803BEC54_1E2B = func_803BEC54_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_803BEC54_1E2B);
        r4 = static_cast<uint32_t>(regargs_result_803BEC54_1E2B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x803BEC54u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r3 = (r3 & 255);
}

loc_80439330:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8043933C;
    }
}

loc_80439334:
{
    MemoryInline::FlatWrite16((r27 + 6), static_cast<uint16_t>(r29));
    goto loc_80439358;
}

loc_8043933C:
{
    r0 = MemoryInline::FlatRead8(r28);
    r22_addr_2 = (r22 + r0);
    r0 = MemoryInline::FlatRead8(r22_addr_2);
}

loc_80439348:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_80439354;
    }
}

loc_8043934C:
{
    MemoryInline::FlatWrite16((r27 + 6), static_cast<uint16_t>(r23));
    goto loc_80439358;
}

loc_80439354:
{
    MemoryInline::FlatWrite16((r27 + 6), static_cast<uint16_t>(r30));
}

loc_80439358:
{
    r28 = (r28 + 1);
    r26 = (r26 + 1);
    r27 = (r27 + 24);
    r25 = (r25 + 1);
}

loc_80439368:
{
    r0 = MemoryInline::FlatRead8((r24 + 425));
}

loc_80439370:
{
    if ((static_cast<int32_t>(r25) < static_cast<int32_t>(r0))) {
        goto loc_80439250;
    }
}

loc_80439374:
{
    r11 = (r1 + 64);
    // inline leaf 0x804574B8 (13 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -48), 0, 48u, true, false);
    // end of inlined leaf 0x804574B8
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804391F0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804391F0_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000081B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804391F0 func_804391F0 preserves=true fpr_mask=0x00000000
