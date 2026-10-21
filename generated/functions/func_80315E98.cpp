#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8027E3A8(CpuContext* ctx);
extern "C" uint64_t func_8027E3A8_ra28_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80315A30(CpuContext* ctx);
extern "C" uint32_t func_80315A30_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_80315E98_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
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

    MKW_GUEST_ENTER(0x80315E98u);
    goto loc_80315E98;

loc_80315E98:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x8045747C (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    // end of inlined leaf 0x8045747C
    r24 = r5;
    r25 = r6;
    r26 = r7;
    r31 = MemoryInline::FlatRead32((r4 + 12));
    r30 = MemoryInline::FlatRead32(r4);
    r29 = 0;
    r28 = 0;
    r27 = 0;
    r3 = (r5 & 255);
    if constexpr (KnownRegArgsCpuCall<0x80315A30u>(&func_80315A30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80315A30_768 = func_80315A30_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80315A30_768;
        r0 = ctx->gpr[0];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->cr = cr;
        InvokeDirectCpu<0x80315A30u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = (r3 & 255);
    r0 = (r3 + -1);
}

loc_80315EE0:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_80315EF4;
    }
}

loc_80315EE4:
{
    r0 = (r3 + -5);
}

loc_80315EEC:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_80315FE8;
    }
}

loc_80315EF0:
{
    goto loc_80316058;
}

loc_80315EF4:
{
    r0 = MemoryInline::FlatRead16((r31 + 2));
}

loc_80315EFC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80315F08;
    }
}

loc_80315F00:
{
    r24 = (r24 & 247);
}

loc_80315F04:
{
    goto loc_80315F74;
}

loc_80315F08:
{
    r3 = r31;
    ctx->lr = 0x80315F10u;
    if constexpr (KnownRegArgsCpuCall<0x8027E3A8u>(&func_8027E3A8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8027E3A8_C6F = func_8027E3A8_ra28_0_18_0(ctx, r3, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027E3A8_C6F);
        r4 = static_cast<uint32_t>(regargs_result_8027E3A8_C6F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x8027E3A8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
}

loc_80315F14:
{
    if ((static_cast<int32_t>(r25) == static_cast<int32_t>(1))) {
        goto loc_80315F3C;
    }
}

loc_80315F18:
{
}

loc_80315F1C:
{
    if ((static_cast<int32_t>(r25) == static_cast<int32_t>(2))) {
        goto loc_80315F48;
    }
}

loc_80315F20:
{
}

loc_80315F24:
{
    if ((static_cast<int32_t>(r25) == static_cast<int32_t>(3))) {
        goto loc_80315F54;
    }
}

loc_80315F28:
{
}

loc_80315F2C:
{
    if ((static_cast<int32_t>(r25) == static_cast<int32_t>(4))) {
        goto loc_80315F60;
    }
}

loc_80315F30:
{
}

loc_80315F34:
{
    if ((static_cast<int32_t>(r25) == static_cast<int32_t>(5))) {
        goto loc_80315F6C;
    }
}

loc_80315F38:
{
    goto loc_80315F74;
}

loc_80315F3C:
{
    r28 = MemoryInline::FlatRead8((r3 + 8));
    r28 = (static_cast<int32_t>(static_cast<int8_t>(r28)));
    goto loc_80315F74;
}

loc_80315F48:
{
    r28 = MemoryInline::FlatRead8((r3 + 9));
    r28 = (static_cast<int32_t>(static_cast<int8_t>(r28)));
    goto loc_80315F74;
}

loc_80315F54:
{
    r28 = MemoryInline::FlatRead8((r3 + 10));
    r28 = (static_cast<int32_t>(static_cast<int8_t>(r28)));
    goto loc_80315F74;
}

loc_80315F60:
{
    r28 = MemoryInline::FlatRead8((r3 + 12));
    r28 = (static_cast<int32_t>(static_cast<int8_t>(r28)));
    goto loc_80315F74;
}

loc_80315F6C:
{
    r28 = MemoryInline::FlatRead8((r3 + 11));
    r28 = (static_cast<int32_t>(static_cast<int8_t>(r28)));
}

loc_80315F74:
{
    r3 = r30;
    ctx->lr = 0x80315F7Cu;
    if constexpr (KnownRegArgsCpuCall<0x8027E3A8u>(&func_8027E3A8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8027E3A8_157D = func_8027E3A8_ra28_0_18_0(ctx, r3, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027E3A8_157D);
        r4 = static_cast<uint32_t>(regargs_result_8027E3A8_157D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x8027E3A8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
}

loc_80315F80:
{
    if ((static_cast<int32_t>(r25) == static_cast<int32_t>(1))) {
        goto loc_80315FA8;
    }
}

loc_80315F84:
{
}

loc_80315F88:
{
    if ((static_cast<int32_t>(r25) == static_cast<int32_t>(2))) {
        goto loc_80315FB4;
    }
}

loc_80315F8C:
{
}

loc_80315F90:
{
    if ((static_cast<int32_t>(r25) == static_cast<int32_t>(3))) {
        goto loc_80315FC0;
    }
}

loc_80315F94:
{
}

loc_80315F98:
{
    if ((static_cast<int32_t>(r25) == static_cast<int32_t>(4))) {
        goto loc_80315FCC;
    }
}

loc_80315F9C:
{
}

loc_80315FA0:
{
    if ((static_cast<int32_t>(r25) == static_cast<int32_t>(5))) {
        goto loc_80315FD8;
    }
}

loc_80315FA4:
{
    goto loc_80315FE0;
}

loc_80315FA8:
{
    r27 = MemoryInline::FlatRead8((r3 + 8));
    r27 = (static_cast<int32_t>(static_cast<int8_t>(r27)));
    goto loc_80315FE0;
}

loc_80315FB4:
{
    r27 = MemoryInline::FlatRead8((r3 + 9));
    r27 = (static_cast<int32_t>(static_cast<int8_t>(r27)));
    goto loc_80315FE0;
}

loc_80315FC0:
{
    r27 = MemoryInline::FlatRead8((r3 + 10));
    r27 = (static_cast<int32_t>(static_cast<int8_t>(r27)));
    goto loc_80315FE0;
}

loc_80315FCC:
{
    r27 = MemoryInline::FlatRead8((r3 + 12));
    r27 = (static_cast<int32_t>(static_cast<int8_t>(r27)));
    goto loc_80315FE0;
}

loc_80315FD8:
{
    r27 = MemoryInline::FlatRead8((r3 + 11));
    r27 = (static_cast<int32_t>(static_cast<int8_t>(r27)));
}

loc_80315FE0:
{
    r29 = (r29 | 1);
    goto loc_80316058;
}

loc_80315FE8:
{
    r3 = r30;
    ctx->lr = 0x80315FF0u;
    if constexpr (KnownRegArgsCpuCall<0x8027E3A8u>(&func_8027E3A8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8027E3A8_1ECD = func_8027E3A8_ra28_0_18_0(ctx, r3, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027E3A8_1ECD);
        r4 = static_cast<uint32_t>(regargs_result_8027E3A8_1ECD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x8027E3A8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
}

loc_80315FF4:
{
    if ((static_cast<int32_t>(r25) == static_cast<int32_t>(1))) {
        goto loc_8031601C;
    }
}

loc_80315FF8:
{
}

loc_80315FFC:
{
    if ((static_cast<int32_t>(r25) == static_cast<int32_t>(2))) {
        goto loc_80316028;
    }
}

loc_80316000:
{
}

loc_80316004:
{
    if ((static_cast<int32_t>(r25) == static_cast<int32_t>(3))) {
        goto loc_80316034;
    }
}

loc_80316008:
{
}

loc_8031600C:
{
    if ((static_cast<int32_t>(r25) == static_cast<int32_t>(4))) {
        goto loc_80316040;
    }
}

loc_80316010:
{
}

loc_80316014:
{
    if ((static_cast<int32_t>(r25) == static_cast<int32_t>(5))) {
        goto loc_8031604C;
    }
}

loc_80316018:
{
    goto loc_80316054;
}

loc_8031601C:
{
    r27 = MemoryInline::FlatRead8((r3 + 8));
    r27 = (static_cast<int32_t>(static_cast<int8_t>(r27)));
    goto loc_80316054;
}

loc_80316028:
{
    r27 = MemoryInline::FlatRead8((r3 + 9));
    r27 = (static_cast<int32_t>(static_cast<int8_t>(r27)));
    goto loc_80316054;
}

loc_80316034:
{
    r27 = MemoryInline::FlatRead8((r3 + 10));
    r27 = (static_cast<int32_t>(static_cast<int8_t>(r27)));
    goto loc_80316054;
}

loc_80316040:
{
    r27 = MemoryInline::FlatRead8((r3 + 12));
    r27 = (static_cast<int32_t>(static_cast<int8_t>(r27)));
    goto loc_80316054;
}

loc_8031604C:
{
    r27 = MemoryInline::FlatRead8((r3 + 11));
    r27 = (static_cast<int32_t>(static_cast<int8_t>(r27)));
}

loc_80316054:
{
    r29 = (r29 | 1);
}

loc_80316058:
{
    r0 = (r29 & 255);
    r0 = (r0 & 1);
}

loc_80316064:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803160A0;
    }
}

loc_80316068:
{
    r3 = (r24 & 255);
    r0 = (r3 & 8);
}

loc_80316074:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8031609C;
    }
}

loc_80316078:
{
    r0 = (r3 & 1);
}

loc_80316080:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8031609C;
    }
}

loc_80316084:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(r27));
}

loc_80316088:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8031609C;
    }
}

loc_8031608C:
{
    r0 = 4;
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80316098;
    }
}

loc_80316094:
{
    r0 = 2;
}

loc_80316098:
{
    r29 = (r29 | r0);
}

loc_8031609C:
{
    MemoryInline::FlatWrite16(r26, static_cast<uint16_t>(r27));
}

loc_803160A0:
{
    r3 = r29;
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

extern "C" void func_80315E98(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80315E98_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000000FB gpr_write=0x0000083B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80315E98 func_80315E98 preserves=true fpr_mask=0x00000000
