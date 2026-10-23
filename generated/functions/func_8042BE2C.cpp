#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8042BE2C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8042BE2C;

loc_8042BE2C:
{
    r3 = MemoryInline::FlatRead32((r13 + -16440));
    r4 = (r3 + 320);
}

loc_8042BE38:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8042C1AC;
    }
}

loc_8042BE3C:
{
    r6 = MemoryInline::FlatRead32((r4 + 4));
    r0 = (r6 + -50);
}

loc_8042BE48:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(25))) {
        goto loc_8042BE5C;
    }
}

loc_8042BE4C:
{
    r3 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r3 + -2147483648);
}

loc_8042BE58:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(0))) {
        goto loc_return;
    }
}

loc_8042BE5C:
{
}

loc_8042BE60:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(95))) {
        goto loc_8042BE6C;
    }
}

loc_8042BE64:
{
    r3 = MemoryInline::FlatRead32((r4 + 8));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8042BE6C:
{
    r0 = MemoryInline::FlatRead32(r4);
    r5 = 0x80030000u;
    r3 = (r5 + 51);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r3));
}

loc_8042BE7C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8042C11C;
    }
}

loc_8042BE80:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8042BF70;
    }
}

loc_8042BE84:
{
    r3 = (r5 + 5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r3));
}

loc_8042BE8C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8042C0CC;
    }
}

loc_8042BE90:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8042BEFC;
    }
}

loc_8042BE94:
{
    r3 = 0x80020000u;
    r3 = (r3 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r3));
}

loc_8042BEA0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8042C094;
    }
}

loc_8042BEA4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8042BECC;
    }
}

loc_8042BEA8:
{
    r3 = 0x80000000u;
    r4 = (r3 + 8);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r4));
}

loc_8042BEB4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8042C09C;
    }
}

loc_8042BEB8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8042C1AC;
    }
}

loc_8042BEBC:
{
    r3 = (r3 + 2);
}

loc_8042BEC4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(r3))) {
        goto loc_8042C064;
    }
}

loc_8042BEC8:
{
    goto loc_8042C1AC;
}

loc_8042BECC:
{
    r3 = (r5 + 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r3));
}

loc_8042BED4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8042C0B4;
    }
}

loc_8042BED8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8042BEEC;
    }
}

loc_8042BEDC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r5));
}

loc_8042BEE0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8042C0A4;
    }
}

loc_8042BEE4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8042C0AC;
    }
}

loc_8042BEE8:
{
    goto loc_8042C1AC;
}

loc_8042BEEC:
{
    r3 = (r5 + 4);
}

loc_8042BEF4:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r3))) {
        goto loc_8042C0C4;
    }
}

loc_8042BEF8:
{
    goto loc_8042C0BC;
}

loc_8042BEFC:
{
    r3 = (r5 + 21);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r3));
}

loc_8042BF04:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8042C0F4;
    }
}

loc_8042BF08:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8042BF3C;
    }
}

loc_8042BF0C:
{
    r3 = (r5 + 18);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r3));
}

loc_8042BF14:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8042C0DC;
    }
}

loc_8042BF18:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8042BF2C;
    }
}

loc_8042BF1C:
{
    r3 = (r5 + 17);
}

loc_8042BF24:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r3))) {
        goto loc_8042C0D4;
    }
}

loc_8042BF28:
{
    goto loc_8042C1AC;
}

loc_8042BF2C:
{
    r3 = (r5 + 20);
}

loc_8042BF34:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r3))) {
        goto loc_8042C0EC;
    }
}

loc_8042BF38:
{
    goto loc_8042C0E4;
}

loc_8042BF3C:
{
    r3 = (r5 + 34);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r3));
}

loc_8042BF44:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8042C104;
    }
}

loc_8042BF48:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8042BF5C;
    }
}

loc_8042BF4C:
{
    r3 = (r5 + 33);
}

loc_8042BF54:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r3))) {
        goto loc_8042C0FC;
    }
}

loc_8042BF58:
{
    goto loc_8042C1AC;
}

loc_8042BF5C:
{
    r3 = (r5 + 49);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r3));
}

loc_8042BF64:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8042C10C;
    }
}

loc_8042BF68:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8042C114;
    }
}

loc_8042BF6C:
{
    goto loc_8042C1AC;
}

loc_8042BF70:
{
    r3 = (r5 + 64);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r3));
}

loc_8042BF78:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8042C184;
    }
}

loc_8042BF7C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8042BFF4;
    }
}

loc_8042BF80:
{
    r3 = (r5 + 58);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r3));
}

loc_8042BF88:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8042C154;
    }
}

loc_8042BF8C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8042BFC4;
    }
}

loc_8042BF90:
{
    r3 = (r5 + 55);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r3));
}

loc_8042BF98:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8042C13C;
    }
}

loc_8042BF9C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8042BFB4;
    }
}

loc_8042BFA0:
{
    r3 = (r5 + 53);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r3));
}

loc_8042BFA8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8042C12C;
    }
}

loc_8042BFAC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8042C134;
    }
}

loc_8042BFB0:
{
    goto loc_8042C124;
}

loc_8042BFB4:
{
    r3 = (r5 + 57);
}

loc_8042BFBC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r3))) {
        goto loc_8042C14C;
    }
}

loc_8042BFC0:
{
    goto loc_8042C144;
}

loc_8042BFC4:
{
    r3 = (r5 + 61);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r3));
}

loc_8042BFCC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8042C16C;
    }
}

loc_8042BFD0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8042BFE4;
    }
}

loc_8042BFD4:
{
    r3 = (r5 + 60);
}

loc_8042BFDC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r3))) {
        goto loc_8042C164;
    }
}

loc_8042BFE0:
{
    goto loc_8042C15C;
}

loc_8042BFE4:
{
    r3 = (r5 + 63);
}

loc_8042BFEC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r3))) {
        goto loc_8042C17C;
    }
}

loc_8042BFF0:
{
    goto loc_8042C174;
}

loc_8042BFF4:
{
    r4 = 0x80050000u;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r4));
}

loc_8042BFFC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8042C09C;
    }
}

loc_8042C000:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8042C034;
    }
}

loc_8042C004:
{
    r3 = (r5 + 67);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r3));
}

loc_8042C00C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8042C19C;
    }
}

loc_8042C010:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8042C024;
    }
}

loc_8042C014:
{
    r3 = (r5 + 66);
}

loc_8042C01C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r3))) {
        goto loc_8042C194;
    }
}

loc_8042C020:
{
    goto loc_8042C18C;
}

loc_8042C024:
{
    r3 = (r5 + 69);
}

loc_8042C02C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r3))) {
        goto loc_8042C1AC;
    }
}

loc_8042C030:
{
    goto loc_8042C1A4;
}

loc_8042C034:
{
    r3 = (r4 + 18);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r3));
}

loc_8042C03C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8042C06C;
    }
}

loc_8042C040:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8042C054;
    }
}

loc_8042C044:
{
    r3 = (r4 + 17);
}

loc_8042C04C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r3))) {
        goto loc_8042C07C;
    }
}

loc_8042C050:
{
    goto loc_8042C1AC;
}

loc_8042C054:
{
    r3 = (r4 + 55);
}

loc_8042C05C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(r3))) {
        goto loc_8042C08C;
    }
}

loc_8042C060:
{
    goto loc_8042C1AC;
}

loc_8042C064:
{
    r3 = 11620;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8042C06C:
{
}

loc_8042C070:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(112))) {
        goto loc_8042C1AC;
    }
}

loc_8042C074:
{
    r3 = 11621;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8042C07C:
{
}

loc_8042C080:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(112))) {
        goto loc_8042C1AC;
    }
}

loc_8042C084:
{
    r3 = 11622;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8042C08C:
{
    r3 = 11623;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8042C094:
{
    r3 = 11624;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8042C09C:
{
    r3 = 11625;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8042C0A4:
{
    r3 = 11630;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8042C0AC:
{
    r3 = 11631;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8042C0B4:
{
    r3 = 11632;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8042C0BC:
{
    r3 = 11633;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8042C0C4:
{
    r3 = 11634;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8042C0CC:
{
    r3 = 11635;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8042C0D4:
{
    r3 = 11640;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8042C0DC:
{
    r3 = 11641;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8042C0E4:
{
    r3 = 11642;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8042C0EC:
{
    r3 = 11643;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8042C0F4:
{
    r3 = 11644;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8042C0FC:
{
    r3 = 11650;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8042C104:
{
    r3 = 11651;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8042C10C:
{
    r3 = 11660;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8042C114:
{
    r3 = 11661;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8042C11C:
{
    r3 = 11662;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8042C124:
{
    r3 = 11663;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8042C12C:
{
    r3 = 11664;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8042C134:
{
    r3 = 11665;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8042C13C:
{
    r3 = 11666;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8042C144:
{
    r3 = 11667;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8042C14C:
{
    r3 = 11668;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8042C154:
{
    r3 = 11669;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8042C15C:
{
    r3 = 11670;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8042C164:
{
    r3 = 11671;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8042C16C:
{
    r3 = 11672;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8042C174:
{
    r3 = 11673;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8042C17C:
{
    r3 = 11674;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8042C184:
{
    r3 = 11675;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8042C18C:
{
    r3 = 11676;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8042C194:
{
    r3 = 11677;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8042C19C:
{
    r3 = 11678;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8042C1A4:
{
    r3 = 11679;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8042C1AC:
{
    r3 = 11625;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8042BE2C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8042BE2C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002079 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8042BE2C func_8042BE2C preserves=true fpr_mask=0x00000000
