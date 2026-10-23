#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8027805C_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;

    goto loc_8027805C;

loc_8027805C:
{
    r5 = (r5 & 127);
    r3 = (r3 & 255);
    r0 = (r3 + -8);
}

loc_8027806C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_80278190;
    }
}

loc_80278070:
{
}

loc_80278074:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_8027809C;
    }
}

loc_80278078:
{
}

loc_8027807C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(2))) {
        goto loc_802780C4;
    }
}

loc_80278080:
{
}

loc_80278084:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(3))) {
        goto loc_802780F0;
    }
}

loc_80278088:
{
}

loc_8027808C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(4))) {
        goto loc_8027813C;
    }
}

loc_80278090:
{
}

loc_80278094:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(5))) {
        goto loc_8027815C;
    }
}

loc_80278098:
{
    goto loc_802781A0;
}

loc_8027809C:
{
    r3 = (r4 & 255);
    r0 = (r3 + -2);
}

loc_802780A8:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(4))) {
        goto loc_802780B4;
    }
}

loc_802780AC:
{
}

loc_802780B0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(11))) {
        goto loc_802781A0;
    }
}

loc_802780B4:
{
}

loc_802780B8:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_802781A0;
    }
}

loc_802780BC:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return r3;
}

loc_802780C4:
{
    r0 = (r4 & 255);
}

loc_802780CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_802780E0;
    }
}

loc_802780D0:
{
}

loc_802780D4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(9))) {
        goto loc_802780E0;
    }
}

loc_802780D8:
{
}

loc_802780DC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(11))) {
        goto loc_802781A0;
    }
}

loc_802780E0:
{
}

loc_802780E4:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_802781A0;
    }
}

loc_802780E8:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return r3;
}

loc_802780F0:
{
    r3 = (r4 & 255);
    r0 = (r3 + -5);
}

loc_802780FC:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_8027812C;
    }
}

loc_80278100:
{
}

loc_80278104:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_8027811C;
    }
}

loc_80278108:
{
}

loc_8027810C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(8))) {
        goto loc_8027811C;
    }
}

loc_80278110:
{
}

loc_80278114:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(9))) {
        goto loc_8027812C;
    }
}

loc_80278118:
{
    goto loc_802781A0;
}

loc_8027811C:
{
}

loc_80278120:
{
    if ((static_cast<uint32_t>(r5) <= static_cast<uint32_t>(1))) {
        goto loc_802781A0;
    }
}

loc_80278124:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return r3;
}

loc_8027812C:
{
}

loc_80278130:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_802781A0;
    }
}

loc_80278134:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return r3;
}

loc_8027813C:
{
    r3 = (r4 & 255);
    r0 = (r3 + -1);
}

loc_80278148:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(5))) {
        goto loc_802781A0;
    }
}

loc_8027814C:
{
}

loc_80278150:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_802781A0;
    }
}

loc_80278154:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return r3;
}

loc_8027815C:
{
    r0 = (r4 & 255);
}

loc_80278164:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_80278180;
    }
}

loc_80278168:
{
}

loc_8027816C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_80278180;
    }
}

loc_80278170:
{
}

loc_80278174:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(8))) {
        goto loc_80278180;
    }
}

loc_80278178:
{
}

loc_8027817C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(10))) {
        goto loc_802781A0;
    }
}

loc_80278180:
{
}

loc_80278184:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_802781A0;
    }
}

loc_80278188:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return r3;
}

loc_80278190:
{
}

loc_80278194:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_802781A0;
    }
}

loc_80278198:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return r3;
}

loc_802781A0:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return r3;
}

}

extern "C" void func_8027805C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8027805C_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000029 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8027805C func_8027805C preserves=true fpr_mask=0x00000000
