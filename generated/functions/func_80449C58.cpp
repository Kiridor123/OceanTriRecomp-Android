#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80043BAC(CpuContext* ctx);
extern "C" uint32_t func_80043BAC_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_80449C58_ra58_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r6)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    ctx->gpr[6] = arg_r6;
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x80449C58u);
    goto loc_80449C58;

loc_80449C58:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r3 = (r1 + 16);
    r4 = 0;
    r5 = 16;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = 0;
    if constexpr (KnownRegArgsCpuCall<0x80043BACu>(&func_80043BAC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_80043BAC_486 = func_80043BAC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80043BAC_486;
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80043BACu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (r3 & 255);
}

loc_80449C84:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_80449E58;
    }
}

loc_80449C88:
{
    r3 = 0x80660000u;
    r3 = (r3 + -18480);
    r0 = MemoryInline::FlatRead16((r3 + 214));
    MemoryInline::FlatWriteRam16((r1 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 218));
    MemoryInline::FlatWriteRam16((r1 + 10), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 220));
    MemoryInline::FlatWriteRam16((r1 + 12), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 248));
    MemoryInline::FlatWriteRam16((r1 + 14), static_cast<uint16_t>(r0));
    r3 = (r1 + 8);
    r4 = (r1 + 16);
    r0 = 4;
    ctr = r0;
}

loc_80449CC0:
{
    r0 = MemoryInline::FlatRead16(r3);
    r0 = (r0 & 8192);
}

loc_80449CCC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80449CDC;
    }
}

loc_80449CD0:
{
    r0 = MemoryInline::FlatRead32(r4);
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32(r4, r0);
}

loc_80449CDC:
{
    r0 = MemoryInline::FlatRead16(r3);
    r0 = (r0 & 4096);
}

loc_80449CE8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80449CF8;
    }
}

loc_80449CEC:
{
    r0 = MemoryInline::FlatRead32(r4);
    r0 = (r0 | 2);
    MemoryInline::FlatWrite32(r4, r0);
}

loc_80449CF8:
{
    r0 = MemoryInline::FlatRead16(r3);
    r0 = (r0 & 2048);
}

loc_80449D04:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80449D14;
    }
}

loc_80449D08:
{
    r0 = MemoryInline::FlatRead32(r4);
    r0 = (r0 | 4);
    MemoryInline::FlatWrite32(r4, r0);
}

loc_80449D14:
{
    r0 = MemoryInline::FlatRead16(r3);
    r0 = (r0 & 1024);
}

loc_80449D20:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80449D30;
    }
}

loc_80449D24:
{
    r0 = MemoryInline::FlatRead32(r4);
    r0 = (r0 | 8);
    MemoryInline::FlatWrite32(r4, r0);
}

loc_80449D30:
{
    r0 = MemoryInline::FlatRead16(r3);
    r0 = (r0 & 32);
}

loc_80449D3C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80449D4C;
    }
}

loc_80449D40:
{
    r0 = MemoryInline::FlatRead32(r4);
    r0 = (r0 | 16);
    MemoryInline::FlatWrite32(r4, r0);
}

loc_80449D4C:
{
    r0 = MemoryInline::FlatRead16(r3);
    r0 = (r0 & 64);
}

loc_80449D58:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80449D68;
    }
}

loc_80449D5C:
{
    r0 = MemoryInline::FlatRead32(r4);
    r0 = (r0 | 32);
    MemoryInline::FlatWrite32(r4, r0);
}

loc_80449D68:
{
    r0 = MemoryInline::FlatRead16(r3);
    r0 = (r0 & 32768);
}

loc_80449D74:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80449D84;
    }
}

loc_80449D78:
{
    r0 = MemoryInline::FlatRead32(r4);
    r0 = (r0 | 64);
    MemoryInline::FlatWrite32(r4, r0);
}

loc_80449D84:
{
    r0 = MemoryInline::FlatRead16(r3);
    r0 = (r0 & 16384);
}

loc_80449D90:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80449DA0;
    }
}

loc_80449D94:
{
    r0 = MemoryInline::FlatRead32(r4);
    r0 = (r0 | 128);
    MemoryInline::FlatWrite32(r4, r0);
}

loc_80449DA0:
{
    r0 = MemoryInline::FlatRead16(r3);
    r0 = (r0 & 256);
}

loc_80449DAC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80449DBC;
    }
}

loc_80449DB0:
{
    r0 = MemoryInline::FlatRead32(r4);
    r0 = (r0 | 2048);
    MemoryInline::FlatWrite32(r4, r0);
}

loc_80449DBC:
{
    r0 = MemoryInline::FlatRead16(r3);
    r0 = (r0 & 512);
}

loc_80449DC8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80449DD8;
    }
}

loc_80449DCC:
{
    r0 = MemoryInline::FlatRead32(r4);
    r0 = (r0 | 4096);
    MemoryInline::FlatWrite32(r4, r0);
}

loc_80449DD8:
{
    r0 = MemoryInline::FlatRead16(r3);
    r0 = (r0 & 128);
}

loc_80449DE4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80449DF4;
    }
}

loc_80449DE8:
{
    r0 = MemoryInline::FlatRead32(r4);
    r0 = (r0 | 16384);
    MemoryInline::FlatWrite32(r4, r0);
}

loc_80449DF4:
{
    r0 = MemoryInline::FlatRead16(r3);
    r0 = (r0 & 8);
}

loc_80449E00:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80449E10;
    }
}

loc_80449E04:
{
    r0 = MemoryInline::FlatRead32(r4);
    r0 = (r0 | 32768);
    MemoryInline::FlatWrite32(r4, r0);
}

loc_80449E10:
{
    r0 = MemoryInline::FlatRead16(r3);
    r0 = (r0 & 16);
}

loc_80449E1C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80449E2C;
    }
}

loc_80449E20:
{
    r0 = MemoryInline::FlatRead32(r4);
    r0 = (r0 | 65536);
    MemoryInline::FlatWrite32(r4, r0);
}

loc_80449E2C:
{
    r0 = MemoryInline::FlatRead16(r3);
    r0 = (r0 & 4);
}

loc_80449E38:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80449E48;
    }
}

loc_80449E3C:
{
    r0 = MemoryInline::FlatRead32(r4);
    r0 = (r0 | 131072);
    MemoryInline::FlatWrite32(r4, r0);
}

loc_80449E48:
{
    r3 = (r3 + 2);
    r4 = (r4 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80449CC0;
    }
}

loc_80449E54:
{
    goto loc_8044A000;
}

loc_80449E58:
{
    r3 = 0;
    if constexpr (KnownRegArgsCpuCall<0x80043BACu>(&func_80043BAC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_80043BAC_1BA4 = func_80043BAC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80043BAC_1BA4;
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80043BACu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (r3 & 255);
}

loc_80449E68:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8044A000;
    }
}

loc_80449E6C:
{
    r3 = 0x80660000u;
    r3 = (r3 + -18480);
    r0 = MemoryInline::FlatRead16((r3 + 252));
    MemoryInline::FlatWriteRam16((r1 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 256));
    MemoryInline::FlatWriteRam16((r1 + 10), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 258));
    MemoryInline::FlatWriteRam16((r1 + 12), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 286));
    MemoryInline::FlatWriteRam16((r1 + 14), static_cast<uint16_t>(r0));
    r3 = (r1 + 8);
    r4 = (r1 + 16);
    r0 = 4;
    ctr = r0;
}

loc_80449EA4:
{
    r0 = MemoryInline::FlatRead16(r3);
    r0 = (r0 & 8192);
}

loc_80449EB0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80449EC0;
    }
}

loc_80449EB4:
{
    r0 = MemoryInline::FlatRead32(r4);
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32(r4, r0);
}

loc_80449EC0:
{
    r0 = MemoryInline::FlatRead16(r3);
    r0 = (r0 & 4096);
}

loc_80449ECC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80449EDC;
    }
}

loc_80449ED0:
{
    r0 = MemoryInline::FlatRead32(r4);
    r0 = (r0 | 2);
    MemoryInline::FlatWrite32(r4, r0);
}

loc_80449EDC:
{
    r0 = MemoryInline::FlatRead16(r3);
    r0 = (r0 & 2048);
}

loc_80449EE8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80449EF8;
    }
}

loc_80449EEC:
{
    r0 = MemoryInline::FlatRead32(r4);
    r0 = (r0 | 4);
    MemoryInline::FlatWrite32(r4, r0);
}

loc_80449EF8:
{
    r0 = MemoryInline::FlatRead16(r3);
    r0 = (r0 & 1024);
}

loc_80449F04:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80449F14;
    }
}

loc_80449F08:
{
    r0 = MemoryInline::FlatRead32(r4);
    r0 = (r0 | 8);
    MemoryInline::FlatWrite32(r4, r0);
}

loc_80449F14:
{
    r0 = MemoryInline::FlatRead16(r3);
    r0 = (r0 & 512);
}

loc_80449F20:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80449F30;
    }
}

loc_80449F24:
{
    r0 = MemoryInline::FlatRead32(r4);
    r0 = (r0 | 16);
    MemoryInline::FlatWrite32(r4, r0);
}

loc_80449F30:
{
    r0 = MemoryInline::FlatRead16(r3);
    r0 = (r0 & 256);
}

loc_80449F3C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80449F4C;
    }
}

loc_80449F40:
{
    r0 = MemoryInline::FlatRead32(r4);
    r0 = (r0 | 32);
    MemoryInline::FlatWrite32(r4, r0);
}

loc_80449F4C:
{
    r0 = MemoryInline::FlatRead16(r3);
    r0 = (r0 & 64);
}

loc_80449F58:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80449F68;
    }
}

loc_80449F5C:
{
    r0 = MemoryInline::FlatRead32(r4);
    r0 = (r0 | 4096);
    MemoryInline::FlatWrite32(r4, r0);
}

loc_80449F68:
{
    r0 = MemoryInline::FlatRead16(r3);
    r0 = (r0 & 128);
}

loc_80449F74:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80449F84;
    }
}

loc_80449F78:
{
    r0 = MemoryInline::FlatRead32(r4);
    r0 = (r0 | 2048);
    MemoryInline::FlatWrite32(r4, r0);
}

loc_80449F84:
{
    r0 = MemoryInline::FlatRead16(r3);
    r0 = (r0 & 32);
}

loc_80449F90:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80449FA0;
    }
}

loc_80449F94:
{
    r0 = MemoryInline::FlatRead32(r4);
    r0 = (r0 | 65536);
    MemoryInline::FlatWrite32(r4, r0);
}

loc_80449FA0:
{
    r0 = MemoryInline::FlatRead16(r3);
    r0 = (r0 & 16);
}

loc_80449FAC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80449FBC;
    }
}

loc_80449FB0:
{
    r0 = MemoryInline::FlatRead32(r4);
    r0 = (r0 | 128);
    MemoryInline::FlatWrite32(r4, r0);
}

loc_80449FBC:
{
    r0 = MemoryInline::FlatRead16(r3);
    r0 = (r0 & 4);
}

loc_80449FC8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80449FD8;
    }
}

loc_80449FCC:
{
    r0 = MemoryInline::FlatRead32(r4);
    r0 = (r0 | 16384);
    MemoryInline::FlatWrite32(r4, r0);
}

loc_80449FD8:
{
    r0 = MemoryInline::FlatRead16(r3);
    r0 = (r0 & 8);
}

loc_80449FE4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80449FF4;
    }
}

loc_80449FE8:
{
    r0 = MemoryInline::FlatRead32(r4);
    r0 = (r0 | 1024);
    MemoryInline::FlatWrite32(r4, r0);
}

loc_80449FF4:
{
    r3 = (r3 + 2);
    r4 = (r4 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80449EA4;
    }
}

loc_8044A000:
{
    r0 = MemoryInline::FlatRead32((r1 + 16));
    r3 = 0x806F0000u;
    MemoryInline::FlatWriteRam32((r3 + -28776), r0);
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r3 = (r3 + -28776);
    MemoryInline::FlatWriteRam32((r3 + 4), r0);
    r0 = MemoryInline::FlatRead32((r1 + 24));
    MemoryInline::FlatWriteRam32((r3 + 8), r0);
    r0 = MemoryInline::FlatRead32((r1 + 28));
    MemoryInline::FlatWriteRam32((r3 + 12), r0);
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80449C58(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80449C58_ra58_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[6]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80449C58 func_80449C58 preserves=true fpr_mask=0x00000000
