#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80270818_ra18_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, double arg_f1)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;

    MKW_GUEST_ENTER(0x80270818u);
    goto loc_80270818;

loc_80270818:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r4 = 96;
    ctx->lr = 0x80270834u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80270838:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80270850;
    }
}

loc_8027083C:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 964));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14912));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 964), f0.d);
    goto loc_8027089C;
}

loc_80270850:
{
    r3 = r31;
    r4 = 95;
    ctx->lr = 0x8027085Cu;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80270860:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80270878;
    }
}

loc_80270864:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 964));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14908));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 964), f0.d);
    goto loc_8027089C;
}

loc_80270878:
{
    r3 = r31;
    r4 = 94;
    ctx->lr = 0x80270884u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80270888:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8027089C;
    }
}

loc_8027088C:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 964));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14992));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 964), f0.d);
}

loc_8027089C:
{
    r3 = r31;
    r4 = 98;
    ctx->lr = 0x802708A8u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_802708AC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802708C4;
    }
}

loc_802708B0:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 964));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14908));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 964), f0.d);
    goto loc_802708E8;
}

loc_802708C4:
{
    r3 = r31;
    r4 = 97;
    ctx->lr = 0x802708D0u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_802708D4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802708E8;
    }
}

loc_802708D8:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 964));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14992));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 964), f0.d);
}

loc_802708E8:
{
    r3 = r31;
    r4 = 102;
    ctx->lr = 0x802708F4u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_802708F8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80270910;
    }
}

loc_802708FC:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 968));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14912));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 968), f0.d);
    goto loc_8027095C;
}

loc_80270910:
{
    r3 = r31;
    r4 = 101;
    ctx->lr = 0x8027091Cu;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80270920:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80270938;
    }
}

loc_80270924:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 968));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14908));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 968), f0.d);
    goto loc_8027095C;
}

loc_80270938:
{
    r3 = r31;
    r4 = 100;
    ctx->lr = 0x80270944u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80270948:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8027095C;
    }
}

loc_8027094C:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 968));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14992));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 968), f0.d);
}

loc_8027095C:
{
    r3 = r31;
    r4 = 104;
    ctx->lr = 0x80270968u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8027096C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80270984;
    }
}

loc_80270970:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 968));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14908));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 968), f0.d);
    goto loc_802709A8;
}

loc_80270984:
{
    r3 = r31;
    r4 = 103;
    ctx->lr = 0x80270990u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80270994:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802709A8;
    }
}

loc_80270998:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 968));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14992));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 968), f0.d);
}

loc_802709A8:
{
    r3 = r31;
    r4 = 108;
    ctx->lr = 0x802709B4u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_802709B8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802709D0;
    }
}

loc_802709BC:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 972));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14912));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 972), f0.d);
    goto loc_80270A1C;
}

loc_802709D0:
{
    r3 = r31;
    r4 = 107;
    ctx->lr = 0x802709DCu;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_802709E0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802709F8;
    }
}

loc_802709E4:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 972));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14908));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 972), f0.d);
    goto loc_80270A1C;
}

loc_802709F8:
{
    r3 = r31;
    r4 = 106;
    ctx->lr = 0x80270A04u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80270A08:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80270A1C;
    }
}

loc_80270A0C:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 972));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14992));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 972), f0.d);
}

loc_80270A1C:
{
    r3 = r31;
    r4 = 110;
    ctx->lr = 0x80270A28u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80270A2C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80270A44;
    }
}

loc_80270A30:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 972));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14908));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 972), f0.d);
    goto loc_80270A68;
}

loc_80270A44:
{
    r3 = r31;
    r4 = 109;
    ctx->lr = 0x80270A50u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80270A54:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80270A68;
    }
}

loc_80270A58:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 972));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14992));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 972), f0.d);
}

loc_80270A68:
{
    r3 = r31;
    r4 = 120;
    ctx->lr = 0x80270A74u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80270A78:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80270A90;
    }
}

loc_80270A7C:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 976));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14912));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 976), f0.d);
    goto loc_80270ADC;
}

loc_80270A90:
{
    r3 = r31;
    r4 = 119;
    ctx->lr = 0x80270A9Cu;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80270AA0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80270AB8;
    }
}

loc_80270AA4:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 976));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14908));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 976), f0.d);
    goto loc_80270ADC;
}

loc_80270AB8:
{
    r3 = r31;
    r4 = 118;
    ctx->lr = 0x80270AC4u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80270AC8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80270ADC;
    }
}

loc_80270ACC:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 976));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14992));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 976), f0.d);
}

loc_80270ADC:
{
    r3 = r31;
    r4 = 122;
    ctx->lr = 0x80270AE8u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80270AEC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80270B04;
    }
}

loc_80270AF0:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 976));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14908));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 976), f0.d);
    goto loc_80270B28;
}

loc_80270B04:
{
    r3 = r31;
    r4 = 121;
    ctx->lr = 0x80270B10u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80270B14:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80270B28;
    }
}

loc_80270B18:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 976));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14992));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 976), f0.d);
}

loc_80270B28:
{
    r3 = r31;
    r4 = 114;
    ctx->lr = 0x80270B34u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80270B38:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80270B50;
    }
}

loc_80270B3C:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 980));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14912));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 980), f0.d);
    goto loc_80270B9C;
}

loc_80270B50:
{
    r3 = r31;
    r4 = 113;
    ctx->lr = 0x80270B5Cu;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80270B60:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80270B78;
    }
}

loc_80270B64:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 980));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14908));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 980), f0.d);
    goto loc_80270B9C;
}

loc_80270B78:
{
    r3 = r31;
    r4 = 112;
    ctx->lr = 0x80270B84u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80270B88:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80270B9C;
    }
}

loc_80270B8C:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 980));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14992));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 980), f0.d);
}

loc_80270B9C:
{
    r3 = r31;
    r4 = 116;
    ctx->lr = 0x80270BA8u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80270BAC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80270BC4;
    }
}

loc_80270BB0:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 980));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14908));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 980), f0.d);
    goto loc_80270BE8;
}

loc_80270BC4:
{
    r3 = r31;
    r4 = 115;
    ctx->lr = 0x80270BD0u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80270BD4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80270BE8;
    }
}

loc_80270BD8:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 980));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14992));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 980), f0.d);
}

loc_80270BE8:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80270818(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80270818_ra18_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001E gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80270818 func_80270818 preserves=true fpr_mask=0x00000000
