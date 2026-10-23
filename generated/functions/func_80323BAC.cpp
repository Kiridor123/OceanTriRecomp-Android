#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80323BAC_ra0_0_8_0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];

    goto loc_80323BAC;

loc_80323BAC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    // inline leaf 0x800D076C (7 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 2003));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_0 & 134217727);
    // end of inlined leaf 0x800D076C
}

loc_80323BC0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80323C28;
    }
}

loc_80323BC4:
{
    r3 = 20;
    ctx->lr = 0x80323BCCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x802FB520u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
}

loc_80323BD0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80323BDC;
    }
}

loc_80323BD4:
{
    r3 = 5;
    goto loc_80323CA0;
}

loc_80323BDC:
{
    r3 = 16;
    ctx->lr = 0x80323BE4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x802FB520u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
}

loc_80323BE8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80323BF4;
    }
}

loc_80323BEC:
{
    r3 = 4;
    goto loc_80323CA0;
}

loc_80323BF4:
{
    r3 = 12;
    ctx->lr = 0x80323BFCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x802FB520u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
}

loc_80323C00:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80323C0C;
    }
}

loc_80323C04:
{
    r3 = 3;
    goto loc_80323CA0;
}

loc_80323C0C:
{
    r3 = 9;
    ctx->lr = 0x80323C14u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x802FB520u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 134217727);
    r3 = (r3 + 1);
    goto loc_80323CA0;
}

loc_80323C28:
{
    r3 = 39;
    ctx->lr = 0x80323C30u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x802FB520u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
}

loc_80323C34:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80323C40;
    }
}

loc_80323C38:
{
    r3 = 6;
    goto loc_80323CA0;
}

loc_80323C40:
{
    r3 = 37;
    ctx->lr = 0x80323C48u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x802FB520u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
}

loc_80323C4C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80323C58;
    }
}

loc_80323C50:
{
    r3 = 5;
    goto loc_80323CA0;
}

loc_80323C58:
{
    r3 = 35;
    ctx->lr = 0x80323C60u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x802FB520u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
}

loc_80323C64:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80323C70;
    }
}

loc_80323C68:
{
    r3 = 4;
    goto loc_80323CA0;
}

loc_80323C70:
{
    r3 = 33;
    ctx->lr = 0x80323C78u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x802FB520u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
}

loc_80323C7C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80323C88;
    }
}

loc_80323C80:
{
    r3 = 3;
    goto loc_80323CA0;
}

loc_80323C88:
{
    r3 = 31;
    ctx->lr = 0x80323C90u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x802FB520u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_2 & 134217727);
    r3 = (r3 + 1);
}

loc_80323CA0:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return r3;
}

}

extern "C" void func_80323BAC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80323BAC_ra0_0_8_0(ctx);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00003FF7 gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80323BAC func_80323BAC preserves=true fpr_mask=0x00000000
