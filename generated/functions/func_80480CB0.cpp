#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80480CB0_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t ctr = ctx->ctr;

    goto loc_80480CB0;

loc_80480CB0:
{
    r0 = (r3 + -5888);
    r4 = 0x80610000u;
}

loc_80480CBC:
{
    r4 = (r4 + 16000);
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(15))) {
        goto loc_80480D5C;
    }
}

loc_80480CC4:
{
    r3 = 0x80610000u;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3 = (r3 + 16672);
    r3_addr_0 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_0);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x80480CECu:
        goto loc_80480CEC;
        break;
    case 0x80480CF4u:
        goto loc_80480CF4;
        break;
    case 0x80480CFCu:
        goto loc_80480CFC;
        break;
    case 0x80480D04u:
        goto loc_80480D04;
        break;
    case 0x80480D14u:
        goto loc_80480D14;
        break;
    case 0x80480D1Cu:
        goto loc_80480D1C;
        break;
    case 0x80480D0Cu:
        goto loc_80480D0C;
        break;
    case 0x80480D2Cu:
        goto loc_80480D2C;
        break;
    case 0x80480D24u:
        goto loc_80480D24;
        break;
    case 0x80480D44u:
        goto loc_80480D44;
        break;
    case 0x80480D3Cu:
        goto loc_80480D3C;
        break;
    case 0x80480D4Cu:
        goto loc_80480D4C;
        break;
    case 0x80480CE4u:
        goto loc_80480CE4;
        break;
    case 0x80480CDCu:
        goto loc_80480CDC;
        break;
    case 0x80480D54u:
        goto loc_80480D54;
        break;
    case 0x80480D34u:
        goto loc_80480D34;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_80480CDC:
{
    r3 = (r4 + 264);
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80480CE4:
{
    r3 = (r4 + 288);
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80480CEC:
{
    r3 = (r4 + 312);
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80480CF4:
{
    r3 = (r4 + 332);
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80480CFC:
{
    r3 = (r4 + 356);
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80480D04:
{
    r3 = (r4 + 376);
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80480D0C:
{
    r3 = (r4 + 400);
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80480D14:
{
    r3 = (r4 + 424);
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80480D1C:
{
    r3 = (r4 + 444);
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80480D24:
{
    r3 = (r4 + 468);
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80480D2C:
{
    r3 = (r4 + 496);
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80480D34:
{
    r3 = (r4 + 516);
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80480D3C:
{
    r3 = (r4 + 540);
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80480D44:
{
    r3 = (r4 + 568);
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80480D4C:
{
    r3 = (r4 + 592);
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80480D54:
{
    r3 = (r4 + 616);
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80480D5C:
{
    r3 = (r4 + 644);
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80480CB0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80480CB0_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80480CB0 func_80480CB0 preserves=true fpr_mask=0x00000000
