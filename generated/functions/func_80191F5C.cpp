#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80191F5C_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x80191F5Cu);
    goto loc_80191F5C;

loc_80191F5C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    // inline leaf 0x8012ECC4 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2218));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_0 & 134217727);
    // end of inlined leaf 0x8012ECC4
}

loc_80191F78:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80192020;
    }
}

loc_80191F7C:
{
    r3 = MemoryInline::FlatRead32((r31 + 808));
    r0 = (r3 + 546);
    MemoryInline::FlatWrite32((r31 + 808), r0);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_80191F90:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80191F9C;
    }
}

loc_80191F94:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 808), r0);
}

loc_80191F9C:
{
    r3 = MemoryInline::FlatRead32((r31 + 812));
    r0 = (r3 + 455);
    MemoryInline::FlatWrite32((r31 + 812), r0);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_80191FB0:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80191FBC;
    }
}

loc_80191FB4:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 812), r0);
}

loc_80191FBC:
{
    r3 = MemoryInline::FlatRead32((r31 + 816));
    r0 = (r3 + 455);
    MemoryInline::FlatWrite32((r31 + 816), r0);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_80191FD0:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80191FDC;
    }
}

loc_80191FD4:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 816), r0);
}

loc_80191FDC:
{
    r3 = MemoryInline::FlatRead32((r31 + 824));
    r0 = (r3 + 455);
    MemoryInline::FlatWrite32((r31 + 824), r0);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_80191FF0:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80191FFC;
    }
}

loc_80191FF4:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 824), r0);
}

loc_80191FFC:
{
    r3 = MemoryInline::FlatRead32((r31 + 828));
    r0 = (r3 + -455);
    MemoryInline::FlatWrite32((r31 + 828), r0);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_80192010:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_801920D0;
    }
}

loc_80192014:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 828), r0);
    goto loc_801920D0;
}

loc_80192020:
{
    r3 = MemoryInline::FlatRead32((r31 + 808));
    r0 = (r3 + -546);
    MemoryInline::FlatWrite32((r31 + 808), r0);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_80192034:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(-5460))) {
        goto loc_80192044;
    }
}

loc_80192038:
{
    r3 = 65536;
    r0 = (r3 + -5460);
    MemoryInline::FlatWrite32((r31 + 808), r0);
}

loc_80192044:
{
    r3 = MemoryInline::FlatRead32((r31 + 812));
    r0 = (r3 + -455);
    MemoryInline::FlatWrite32((r31 + 812), r0);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_80192058:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(-4550))) {
        goto loc_80192068;
    }
}

loc_8019205C:
{
    r3 = 65536;
    r0 = (r3 + -4550);
    MemoryInline::FlatWrite32((r31 + 812), r0);
}

loc_80192068:
{
    r3 = MemoryInline::FlatRead32((r31 + 816));
    r0 = (r3 + -455);
    MemoryInline::FlatWrite32((r31 + 816), r0);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_8019207C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(-4550))) {
        goto loc_8019208C;
    }
}

loc_80192080:
{
    r3 = 65536;
    r0 = (r3 + -4550);
    MemoryInline::FlatWrite32((r31 + 816), r0);
}

loc_8019208C:
{
    r3 = MemoryInline::FlatRead32((r31 + 824));
    r0 = (r3 + -455);
    MemoryInline::FlatWrite32((r31 + 824), r0);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_801920A0:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(-4550))) {
        goto loc_801920B0;
    }
}

loc_801920A4:
{
    r3 = 65536;
    r0 = (r3 + -4550);
    MemoryInline::FlatWrite32((r31 + 824), r0);
}

loc_801920B0:
{
    r3 = MemoryInline::FlatRead32((r31 + 828));
    r0 = (r3 + 455);
    MemoryInline::FlatWrite32((r31 + 828), r0);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_801920C4:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(4551))) {
        goto loc_801920D0;
    }
}

loc_801920C8:
{
    r0 = 4551;
    MemoryInline::FlatWrite32((r31 + 828), r0);
}

loc_801920D0:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return r3;
}

}

extern "C" void func_80191F5C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80191F5C_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000B gpr_write=0x0000000B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80191F5C func_80191F5C preserves=true fpr_mask=0x00000000
