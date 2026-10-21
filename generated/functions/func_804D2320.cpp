#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804CCC90(CpuContext* ctx);
extern "C" uint64_t func_804CCC90_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_804D2320_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x804D2320u);
    goto loc_804D2320;

loc_804D2320:
{
    MemoryHw::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r4 = 0x80000000u;
    MemoryHw::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = MemoryHw::FlatRead32((r4 + 12548));
    r0 = MemoryHw::FlatRead32((r4 + 12544));
}

loc_804D2348:
{
    if ((static_cast<uint32_t>(r31) >= static_cast<uint32_t>(r0))) {
        goto loc_804D2370;
    }
}

loc_804D234C:
{
    r0 = (r31 + -25165824);
}

loc_804D2354:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(0))) {
        goto loc_804D2370;
    }
}

loc_804D2358:
{
    r3 = 0x81800000u;
    r4 = 25165824;
    if constexpr (KnownRegArgsCpuCall<0x804CCC90u>(&func_804CCC90)) {
        ctx->gpr[1] = r1;
        const auto regargs_result_804CCC90_54D = func_804CCC90_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804CCC90_54D);
        r4 = static_cast<uint32_t>(regargs_result_804CCC90_54D >> 32);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x804CCC90u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r3 = -872415232;
    r0 = 2;
    MemoryHw::FlatWrite16((r3 + 16424), static_cast<uint16_t>(r0));
}

loc_804D2370:
{
    r0 = 25165824;
}

loc_804D2378:
{
    if ((static_cast<uint32_t>(r31) > static_cast<uint32_t>(r0))) {
        goto loc_804D2388;
    }
}

loc_804D237C:
{
    r3 = 0x804D0000u;
    r3 = (r3 + 7808);
    // inline leaf 0x804D2300 (6 guest instruction(s))
    r3 = (r3 & 1073741823);
    ctx->srr0 = r3;
    r3 = ctx->msr;
    r3 = (r3 & -49);
    ctx->srr1 = r3;
    // end of inlined leaf 0x804D2300
}

loc_804D2388:
{
    r3 = 0x80000000u;
    r0 = 67108864;
    r4 = MemoryHw::FlatRead32((r3 + 12572));
    r3 = MemoryHw::FlatRead32((r3 + 12576));
}

loc_804D239C:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(r0))) {
        goto loc_804D23E8;
    }
}

loc_804D23A0:
{
    r0 = 0x93400000u;
}

loc_804D23A8:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(r0))) {
        goto loc_804D23BC;
    }
}

loc_804D23AC:
{
    r3 = 0x804D0000u;
    r3 = (r3 + 7936);
    // inline leaf 0x804D2300 (6 guest instruction(s))
    r3 = (r3 & 1073741823);
    ctx->srr0 = r3;
    r3 = ctx->msr;
    r3 = (r3 & -49);
    ctx->srr1 = r3;
    // end of inlined leaf 0x804D2300
    goto loc_804D241C;
}

loc_804D23BC:
{
    r0 = 0x93800000u;
}

loc_804D23C4:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(r0))) {
        goto loc_804D23D8;
    }
}

loc_804D23C8:
{
    r3 = 0x804D0000u;
    r3 = (r3 + 8160);
    // inline leaf 0x804D2300 (6 guest instruction(s))
    r3 = (r3 & 1073741823);
    ctx->srr0 = r3;
    r3 = ctx->msr;
    r3 = (r3 & -49);
    ctx->srr1 = r3;
    // end of inlined leaf 0x804D2300
    goto loc_804D241C;
}

loc_804D23D8:
{
    r3 = 0x804D0000u;
    r3 = (r3 + 8384);
    // inline leaf 0x804D2300 (6 guest instruction(s))
    r3 = (r3 & 1073741823);
    ctx->srr0 = r3;
    r3 = ctx->msr;
    r3 = (r3 & -49);
    ctx->srr1 = r3;
    // end of inlined leaf 0x804D2300
    goto loc_804D241C;
}

loc_804D23E8:
{
    r0 = 134217728;
}

loc_804D23F0:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(r0))) {
        goto loc_804D241C;
    }
}

loc_804D23F4:
{
    r0 = -1761607680;
}

loc_804D23FC:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(r0))) {
        goto loc_804D2410;
    }
}

loc_804D2400:
{
    r3 = 0x804D0000u;
    r3 = (r3 + 8560);
    // inline leaf 0x804D2300 (6 guest instruction(s))
    r3 = (r3 & 1073741823);
    ctx->srr0 = r3;
    r3 = ctx->msr;
    r3 = (r3 & -49);
    ctx->srr1 = r3;
    // end of inlined leaf 0x804D2300
    goto loc_804D241C;
}

loc_804D2410:
{
    r3 = 0x804D0000u;
    r3 = (r3 + 8784);
    // inline leaf 0x804D2300 (6 guest instruction(s))
    r3 = (r3 & 1073741823);
    ctx->srr0 = r3;
    r3 = ctx->msr;
    r3 = (r3 & -49);
    ctx->srr1 = r3;
    // end of inlined leaf 0x804D2300
}

loc_804D241C:
{
    r0 = (r30 + -720896);
}

loc_804D2420:
{
}

loc_804D2424:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(41679))) {
        goto loc_804D2420;
    }
}

loc_804D2428:
{
    r0 = MemoryHw::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804D2320(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804D2320_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804D2320 func_804D2320 preserves=true fpr_mask=0x00000000
