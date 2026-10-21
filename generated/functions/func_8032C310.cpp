#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8032C310_ra18_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, double arg_f1)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x8032C310u);
    goto loc_8032C310;

loc_8032C310:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r0 = MemoryInline::FlatRead8((r3 + 485));
}

loc_8032C32C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(13))) {
        goto loc_8032C33C;
    }
}

loc_8032C330:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 814), static_cast<uint16_t>(r0));
    goto loc_8032C4EC;
}

loc_8032C33C:
{
    r0 = MemoryInline::FlatRead16((r3 + 810));
}

loc_8032C344:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8032C3EC;
    }
}

loc_8032C348:
{
    r4 = MemoryInline::FlatRead16((r3 + 814));
}

loc_8032C350:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(6354))) {
        goto loc_8032C384;
    }
}

loc_8032C354:
{
    // inline leaf 0x8012F9AC (6 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r3 + 104));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28232));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
    r3 = cr;
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x8012F9AC
}

loc_8032C35C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8032C4EC;
    }
}

loc_8032C360:
{
    r3 = MemoryInline::FlatRead16((r31 + 814));
    r0 = (r3 + 1588);
    MemoryInline::FlatWrite16((r31 + 814), static_cast<uint16_t>(r0));
    r0 = (r0 & 65535);
}

loc_8032C374:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(6354))) {
        goto loc_8032C4EC;
    }
}

loc_8032C378:
{
    r0 = 6354;
    MemoryInline::FlatWrite16((r31 + 814), static_cast<uint16_t>(r0));
    goto loc_8032C4EC;
}

loc_8032C384:
{
}

loc_8032C388:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(2))) {
        goto loc_8032C3AC;
    }
}

loc_8032C38C:
{
    r0 = (r4 + 2730);
    MemoryInline::FlatWrite16((r3 + 814), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_8032C39C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(11833))) {
        goto loc_8032C3C8;
    }
}

loc_8032C3A0:
{
    r0 = 11833;
    MemoryInline::FlatWrite16((r3 + 814), static_cast<uint16_t>(r0));
    goto loc_8032C3C8;
}

loc_8032C3AC:
{
    r0 = (r4 + -2730);
    MemoryInline::FlatWrite16((r3 + 814), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_8032C3BC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(6372))) {
        goto loc_8032C3C8;
    }
}

loc_8032C3C0:
{
    r0 = 6372;
    MemoryInline::FlatWrite16((r3 + 814), static_cast<uint16_t>(r0));
}

loc_8032C3C8:
{
    r4 = MemoryInline::FlatRead16((r3 + 810));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite16((r3 + 810), static_cast<uint16_t>(r0));
    r0 = (r0 & 65535);
}

loc_8032C3DC:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(4))) {
        goto loc_8032C4EC;
    }
}

loc_8032C3E0:
{
    r0 = 1;
    MemoryInline::FlatWrite16((r3 + 810), static_cast<uint16_t>(r0));
    goto loc_8032C4EC;
}

loc_8032C3EC:
{
    r0 = MemoryInline::FlatRead16((r3 + 812));
}

loc_8032C3F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8032C49C;
    }
}

loc_8032C3F8:
{
    r4 = MemoryInline::FlatRead16((r3 + 814));
}

loc_8032C400:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(6354))) {
        goto loc_8032C434;
    }
}

loc_8032C404:
{
    // inline leaf 0x8012F9AC (6 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r3 + 104));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28232));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
    r3 = cr;
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r3 = (r3_rot_2 & 1);
    // end of inlined leaf 0x8012F9AC
}

loc_8032C40C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8032C4EC;
    }
}

loc_8032C410:
{
    r3 = MemoryInline::FlatRead16((r31 + 814));
    r0 = (r3 + 794);
    MemoryInline::FlatWrite16((r31 + 814), static_cast<uint16_t>(r0));
    r0 = (r0 & 65535);
}

loc_8032C424:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(6354))) {
        goto loc_8032C4EC;
    }
}

loc_8032C428:
{
    r0 = 6354;
    MemoryInline::FlatWrite16((r31 + 814), static_cast<uint16_t>(r0));
    goto loc_8032C4EC;
}

loc_8032C434:
{
}

loc_8032C438:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(5))) {
        goto loc_8032C45C;
    }
}

loc_8032C43C:
{
    r0 = (r4 + 1092);
    MemoryInline::FlatWrite16((r3 + 814), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_8032C44C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(11833))) {
        goto loc_8032C478;
    }
}

loc_8032C450:
{
    r0 = 11833;
    MemoryInline::FlatWrite16((r3 + 814), static_cast<uint16_t>(r0));
    goto loc_8032C478;
}

loc_8032C45C:
{
    r0 = (r4 + -1092);
    MemoryInline::FlatWrite16((r3 + 814), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_8032C46C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(6372))) {
        goto loc_8032C478;
    }
}

loc_8032C470:
{
    r0 = 6372;
    MemoryInline::FlatWrite16((r3 + 814), static_cast<uint16_t>(r0));
}

loc_8032C478:
{
    r4 = MemoryInline::FlatRead16((r3 + 812));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite16((r3 + 812), static_cast<uint16_t>(r0));
    r0 = (r0 & 65535);
}

loc_8032C48C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(10))) {
        goto loc_8032C4EC;
    }
}

loc_8032C490:
{
    r0 = 1;
    MemoryInline::FlatWrite16((r3 + 812), static_cast<uint16_t>(r0));
    goto loc_8032C4EC;
}

loc_8032C49C:
{
    r0 = MemoryInline::FlatRead8((r3 + 808));
}

loc_8032C4A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8032C4CC;
    }
}

loc_8032C4A8:
{
    r4 = MemoryInline::FlatRead16((r3 + 814));
    r0 = (r4 + 1638);
    MemoryInline::FlatWrite16((r3 + 814), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_8032C4BC:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(16384))) {
        goto loc_8032C4EC;
    }
}

loc_8032C4C0:
{
    r0 = 16384;
    MemoryInline::FlatWrite16((r3 + 814), static_cast<uint16_t>(r0));
    goto loc_8032C4EC;
}

loc_8032C4CC:
{
    r4 = MemoryInline::FlatRead16((r3 + 814));
    r0 = (r4 + -1638);
    MemoryInline::FlatWrite16((r3 + 814), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_8032C4E0:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_8032C4EC;
    }
}

loc_8032C4E4:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 814), static_cast<uint16_t>(r0));
}

loc_8032C4EC:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8032C310(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8032C310_ra18_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001F gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8032C310 func_8032C310 preserves=true fpr_mask=0x00000000
