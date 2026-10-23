#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80398CEC_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t ctr = ctx->ctr;

    goto loc_80398CEC;

loc_80398CEC:
{
    r9 = 0;
    r7 = 0;
    r5 = 1;
    r0 = 2;
}

loc_80398CFC:
{
    r8 = 0;
    r6 = MemoryInline::FlatRead16((r3 + 12344));
    ctr = r0;
}

loc_80398D08:
{
    r4 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r8));
    r4 = (r4 & r6);
}

loc_80398D14:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80398D20;
    }
}

loc_80398D18:
{
    r4 = (r9 + 1);
    r9 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
}

loc_80398D20:
{
    r8 = (r8 + 1);
    r4 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r8));
    r4 = (r4 & r6);
}

loc_80398D30:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80398D3C;
    }
}

loc_80398D34:
{
    r4 = (r9 + 1);
    r9 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
}

loc_80398D3C:
{
    r8 = (r8 + 1);
    r4 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r8));
    r4 = (r4 & r6);
}

loc_80398D4C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80398D58;
    }
}

loc_80398D50:
{
    r4 = (r9 + 1);
    r9 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
}

loc_80398D58:
{
    r8 = (r8 + 1);
    r4 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r8));
    r4 = (r4 & r6);
}

loc_80398D68:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80398D74;
    }
}

loc_80398D6C:
{
    r4 = (r9 + 1);
    r9 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
}

loc_80398D74:
{
    r8 = (r8 + 1);
    r4 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r8));
    r4 = (r4 & r6);
}

loc_80398D84:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80398D90;
    }
}

loc_80398D88:
{
    r4 = (r9 + 1);
    r9 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
}

loc_80398D90:
{
    r8 = (r8 + 1);
    r4 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r8));
    r4 = (r4 & r6);
}

loc_80398DA0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80398DAC;
    }
}

loc_80398DA4:
{
    r4 = (r9 + 1);
    r9 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
}

loc_80398DAC:
{
    r8 = (r8 + 1);
    r4 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r8));
    r4 = (r4 & r6);
}

loc_80398DBC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80398DC8;
    }
}

loc_80398DC0:
{
    r4 = (r9 + 1);
    r9 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
}

loc_80398DC8:
{
    r8 = (r8 + 1);
    r4 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r8));
    r4 = (r4 & r6);
}

loc_80398DD8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80398DE4;
    }
}

loc_80398DDC:
{
    r4 = (r9 + 1);
    r9 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
}

loc_80398DE4:
{
    r8 = (r8 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80398D08;
    }
}

loc_80398DEC:
{
    r3 = (r3 + 2);
    r7 = (r7 + 1);
}

loc_80398DF8:
{
    if ((static_cast<int32_t>(r7) < static_cast<int32_t>(3))) {
        goto loc_80398CFC;
    }
}

loc_80398DFC:
{
    r3 = r9;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80398CEC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80398CEC_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000003F9 gpr_write=0x000003F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80398CEC func_80398CEC preserves=true fpr_mask=0x00000000
