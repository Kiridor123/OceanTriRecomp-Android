#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_808DFBBC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    const uint32_t r28_entry = r28;
    const uint32_t r29_entry = r29;
    const uint32_t r30_entry = r30;
    const uint32_t r31_entry = r31;
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x808DFBBCu);
    goto loc_808DFBBC;

loc_808DFBBC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r3 = 0x806B0000u;
    r3 = (r3 + -12348);
    r30 = MemoryInline::FlatRead32((r3 + 180));
    ctx->lr = 0x808DFBE8u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x803C4878u>(ctx);
    r3 = ctx->gpr[3];
}

loc_808DFBEC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_808DFC04;
    }
}

loc_808DFBF0:
{
    // inline leaf 0x803C48B4 (4 guest instruction(s))
    r3 = 0x806D0000u;
    r3 = (r3 + 20384);
    r3 = MemoryInline::FlatRead8((r3 + 2));
    // end of inlined leaf 0x803C48B4
    r0 = (r3 + 244);
    r0 = (r0 & 255);
}

loc_808DFC00:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_808E0050;
    }
}

loc_808DFC04:
{
    r3 = 0;
    // inline leaf 0x800582D4 (6 guest instruction(s))
    r4 = 0x80670000u;
    r4 = (r4 + -12024);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
    // end of inlined leaf 0x800582D4
}

loc_808DFC10:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(2))) {
        goto loc_808E0050;
    }
}

loc_808DFC14:
{
    r3 = 0x806B0000u;
    r29 = (r3 + -24544);
    r28 = 0;
    r31 = 0x80930000u;
}

loc_808DFC24:
{
    r0 = MemoryInline::FlatRead8(r29);
}

loc_808DFC2C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808E0040;
    }
}

loc_808DFC30:
{
    r0 = MemoryInline::FlatRead8((r29 + 3));
}

loc_808DFC38:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808E0040;
    }
}

loc_808DFC3C:
{
    r0 = MemoryInline::FlatRead8((r29 + 5));
}

loc_808DFC44:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808E0040;
    }
}

loc_808DFC48:
{
    r0 = MemoryInline::FlatRead8((r29 + 2));
}

loc_808DFC50:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(73))) {
        goto loc_808E0040;
    }
}

loc_808DFC54:
{
    r3 = (r31 + 9172);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x808E0040u:
        goto loc_808E0040;
        break;
    case 0x808DFC68u:
        goto loc_808DFC68;
        break;
    case 0x808DFC78u:
        goto loc_808DFC78;
        break;
    case 0x808DFC88u:
        goto loc_808DFC88;
        break;
    case 0x808DFC98u:
        goto loc_808DFC98;
        break;
    case 0x808DFCA8u:
        goto loc_808DFCA8;
        break;
    case 0x808DFCB8u:
        goto loc_808DFCB8;
        break;
    case 0x808DFCC8u:
        goto loc_808DFCC8;
        break;
    case 0x808DFCD8u:
        goto loc_808DFCD8;
        break;
    case 0x808DFCE8u:
        goto loc_808DFCE8;
        break;
    case 0x808DFCF8u:
        goto loc_808DFCF8;
        break;
    case 0x808DFD08u:
        goto loc_808DFD08;
        break;
    case 0x808DFD18u:
        goto loc_808DFD18;
        break;
    case 0x808DFD28u:
        goto loc_808DFD28;
        break;
    case 0x808DFD38u:
        goto loc_808DFD38;
        break;
    case 0x808DFD48u:
        goto loc_808DFD48;
        break;
    case 0x808DFD58u:
        goto loc_808DFD58;
        break;
    case 0x808DFD68u:
        goto loc_808DFD68;
        break;
    case 0x808DFD78u:
        goto loc_808DFD78;
        break;
    case 0x808DFD88u:
        goto loc_808DFD88;
        break;
    case 0x808DFDB4u:
        goto loc_808DFDB4;
        break;
    case 0x808DFDC4u:
        goto loc_808DFDC4;
        break;
    case 0x808DFDD4u:
        goto loc_808DFDD4;
        break;
    case 0x808DFDE4u:
        goto loc_808DFDE4;
        break;
    case 0x808DFDF4u:
        goto loc_808DFDF4;
        break;
    case 0x808DFE04u:
        goto loc_808DFE04;
        break;
    case 0x808DFE14u:
        goto loc_808DFE14;
        break;
    case 0x808DFE24u:
        goto loc_808DFE24;
        break;
    case 0x808DFE34u:
        goto loc_808DFE34;
        break;
    case 0x808DFE44u:
        goto loc_808DFE44;
        break;
    case 0x808DFE54u:
        goto loc_808DFE54;
        break;
    case 0x808DFE64u:
        goto loc_808DFE64;
        break;
    case 0x808DFE74u:
        goto loc_808DFE74;
        break;
    case 0x808DFE84u:
        goto loc_808DFE84;
        break;
    case 0x808DFE94u:
        goto loc_808DFE94;
        break;
    case 0x808DFEA4u:
        goto loc_808DFEA4;
        break;
    case 0x808DFEB4u:
        goto loc_808DFEB4;
        break;
    case 0x808DFEC4u:
        goto loc_808DFEC4;
        break;
    case 0x808DFED4u:
        goto loc_808DFED4;
        break;
    case 0x808DFEE4u:
        goto loc_808DFEE4;
        break;
    case 0x808DFEF4u:
        goto loc_808DFEF4;
        break;
    case 0x808DFF04u:
        goto loc_808DFF04;
        break;
    case 0x808DFF14u:
        goto loc_808DFF14;
        break;
    case 0x808DFF24u:
        goto loc_808DFF24;
        break;
    case 0x808DFF34u:
        goto loc_808DFF34;
        break;
    case 0x808DFF44u:
        goto loc_808DFF44;
        break;
    case 0x808DFF54u:
        goto loc_808DFF54;
        break;
    case 0x808DFF64u:
        goto loc_808DFF64;
        break;
    case 0x808DFF74u:
        goto loc_808DFF74;
        break;
    case 0x808DFF84u:
        goto loc_808DFF84;
        break;
    case 0x808DFF94u:
        goto loc_808DFF94;
        break;
    case 0x808DFFA4u:
        goto loc_808DFFA4;
        break;
    case 0x808DFFB4u:
        goto loc_808DFFB4;
        break;
    case 0x808DFFC4u:
        goto loc_808DFFC4;
        break;
    case 0x808DFFD4u:
        goto loc_808DFFD4;
        break;
    case 0x808DFFE4u:
        goto loc_808DFFE4;
        break;
    case 0x808DFFF4u:
        goto loc_808DFFF4;
        break;
    case 0x808E0004u:
        goto loc_808E0004;
        break;
    case 0x808E0014u:
        goto loc_808E0014;
        break;
    case 0x808E0024u:
        goto loc_808E0024;
        break;
    case 0x808E0034u:
        goto loc_808E0034;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_808DFC68:
{
    r3 = r30;
    r4 = r29;
    ctx->lr = 0x808DFC74u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x808C87C4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    ctr = ctx->ctr;
    goto loc_808E0040;
}

loc_808DFC78:
{
    r3 = r30;
    r4 = r29;
    ctx->lr = 0x808DFC84u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x808C8B34u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    ctr = ctx->ctr;
    goto loc_808E0040;
}

loc_808DFC88:
{
    r3 = r30;
    r4 = r29;
    ctx->lr = 0x808DFC94u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x808C8D7Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    ctr = ctx->ctr;
    goto loc_808E0040;
}

loc_808DFC98:
{
    r3 = r30;
    r4 = r29;
    ctx->lr = 0x808DFCA4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x808C9198u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    ctr = ctx->ctr;
    goto loc_808E0040;
}

loc_808DFCA8:
{
    r3 = r30;
    r4 = r29;
    ctx->lr = 0x808DFCB4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x808C932Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    ctr = ctx->ctr;
    goto loc_808E0040;
}

loc_808DFCB8:
{
    r3 = r30;
    r4 = r29;
    ctx->lr = 0x808DFCC4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x808C9578u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    ctr = ctx->ctr;
    goto loc_808E0040;
}

loc_808DFCC8:
{
    r3 = r30;
    r4 = r29;
    ctx->lr = 0x808DFCD4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x808C97B4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    ctr = ctx->ctr;
    goto loc_808E0040;
}

loc_808DFCD8:
{
    r3 = r30;
    r4 = r29;
    ctx->lr = 0x808DFCE4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x808C9B10u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    ctr = ctx->ctr;
    goto loc_808E0040;
}

loc_808DFCE8:
{
    r3 = r30;
    r4 = r29;
    ctx->lr = 0x808DFCF4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x808C9E6Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    ctr = ctx->ctr;
    goto loc_808E0040;
}

loc_808DFCF8:
{
    r3 = r30;
    r4 = r29;
    ctx->lr = 0x808DFD04u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x808CA1C8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    ctr = ctx->ctr;
    goto loc_808E0040;
}

loc_808DFD08:
{
    r3 = r30;
    r4 = r29;
    ctx->lr = 0x808DFD14u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x808CB104u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    ctr = ctx->ctr;
    goto loc_808E0040;
}

loc_808DFD18:
{
    r3 = r30;
    r4 = r29;
    ctx->lr = 0x808DFD24u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x808CB50Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    ctr = ctx->ctr;
    goto loc_808E0040;
}

loc_808DFD28:
{
    r3 = r30;
    r4 = r29;
    ctx->lr = 0x808DFD34u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x808CB914u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    ctr = ctx->ctr;
    goto loc_808E0040;
}

loc_808DFD38:
{
    r3 = r30;
    r4 = r29;
    ctx->lr = 0x808DFD44u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x808CB9A8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    ctr = ctx->ctr;
    goto loc_808E0040;
}

loc_808DFD48:
{
    r3 = r30;
    r4 = r29;
    ctx->lr = 0x808DFD54u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x808CBCA4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    ctr = ctx->ctr;
    goto loc_808E0040;
}

loc_808DFD58:
{
    r3 = r30;
    r4 = r29;
    ctx->lr = 0x808DFD64u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x808CBD60u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    ctr = ctx->ctr;
    goto loc_808E0040;
}

loc_808DFD68:
{
    r3 = r30;
    r4 = r29;
    ctx->lr = 0x808DFD74u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x808CCCACu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    ctr = ctx->ctr;
    goto loc_808E0040;
}

loc_808DFD78:
{
    r3 = r30;
    r4 = r29;
    ctx->lr = 0x808DFD84u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x808CDBF8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    ctr = ctx->ctr;
    goto loc_808E0040;
}

loc_808DFD88:
{
    ctx->lr = 0x808DFD8Cu;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x803C4878u>(ctx);
    r3 = ctx->gpr[3];
}

loc_808DFD90:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_808DFDA4;
    }
}

loc_808DFD94:
{
    // inline leaf 0x803C48B4 (4 guest instruction(s))
    r3 = 0x806D0000u;
    r3 = (r3 + 20384);
    r3 = MemoryInline::FlatRead8((r3 + 2));
    // end of inlined leaf 0x803C48B4
    r0 = (r3 & 255);
}

loc_808DFDA0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(3))) {
        goto loc_808E0040;
    }
}

loc_808DFDA4:
{
    r3 = r30;
    r4 = r29;
    ctx->lr = 0x808DFDB0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x808CEB44u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    ctr = ctx->ctr;
    goto loc_808E0040;
}

loc_808DFDB4:
{
    r3 = r30;
    r4 = r29;
    ctx->lr = 0x808DFDC0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x808CFE64u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    ctr = ctx->ctr;
    goto loc_808E0040;
}

loc_808DFDC4:
{
    r3 = r30;
    r4 = r29;
    ctx->lr = 0x808DFDD0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x808D0DA0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    ctr = ctx->ctr;
    goto loc_808E0040;
}

loc_808DFDD4:
{
    r3 = r30;
    r4 = r29;
    ctx->lr = 0x808DFDE0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x808D11A8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    ctr = ctx->ctr;
    goto loc_808E0040;
}

loc_808DFDE4:
{
    r3 = r30;
    r4 = r29;
    ctx->lr = 0x808DFDF0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x808D138Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    ctr = ctx->ctr;
    goto loc_808E0040;
}

loc_808DFDF4:
{
    r3 = r30;
    r4 = r29;
    ctx->lr = 0x808DFE00u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x808D22C8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    ctr = ctx->ctr;
    goto loc_808E0040;
}

loc_808DFE04:
{
    r3 = r30;
    r4 = r29;
    ctx->lr = 0x808DFE10u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x808D3204u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    ctr = ctx->ctr;
    goto loc_808E0040;
}

loc_808DFE14:
{
    r3 = r30;
    r4 = r29;
    ctx->lr = 0x808DFE20u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x808D4140u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    ctr = ctx->ctr;
    goto loc_808E0040;
}

loc_808DFE24:
{
    r3 = r30;
    r4 = r29;
    ctx->lr = 0x808DFE30u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x808D41ECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    ctr = ctx->ctr;
    goto loc_808E0040;
}

loc_808DFE34:
{
    r3 = r30;
    r4 = r29;
    ctx->lr = 0x808DFE40u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x808D42C0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    ctr = ctx->ctr;
    goto loc_808E0040;
}

loc_808DFE44:
{
    r3 = r30;
    r4 = r29;
    ctx->lr = 0x808DFE50u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x808D4354u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    ctr = ctx->ctr;
    goto loc_808E0040;
}

loc_808DFE54:
{
    r3 = r30;
    r4 = r29;
    ctx->lr = 0x808DFE60u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x808D43E8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    ctr = ctx->ctr;
    goto loc_808E0040;
}

loc_808DFE64:
{
    r3 = r30;
    r4 = r29;
    ctx->lr = 0x808DFE70u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x808D46E4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    ctr = ctx->ctr;
    goto loc_808E0040;
}

loc_808DFE74:
{
    r3 = r30;
    r4 = r29;
    ctx->lr = 0x808DFE80u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x808D49E0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    ctr = ctx->ctr;
    goto loc_808E0040;
}

loc_808DFE84:
{
    r3 = r30;
    r4 = r29;
    ctx->lr = 0x808DFE90u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x808D4B74u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    ctr = ctx->ctr;
    goto loc_808E0040;
}

loc_808DFE94:
{
    r3 = r30;
    r4 = r29;
    ctx->lr = 0x808DFEA0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x808D4F7Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    ctr = ctx->ctr;
    goto loc_808E0040;
}

loc_808DFEA4:
{
    r3 = r30;
    r4 = r29;
    ctx->lr = 0x808DFEB0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x808D5160u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    ctr = ctx->ctr;
    goto loc_808E0040;
}

loc_808DFEB4:
{
    r3 = r30;
    r4 = r29;
    ctx->lr = 0x808DFEC0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x808D533Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    ctr = ctx->ctr;
    goto loc_808E0040;
}

loc_808DFEC4:
{
    r3 = r30;
    r4 = r29;
    ctx->lr = 0x808DFED0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x808D6278u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    ctr = ctx->ctr;
    goto loc_808E0040;
}

loc_808DFED4:
{
    r3 = r30;
    r4 = r29;
    ctx->lr = 0x808DFEE0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x808D71B4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    ctr = ctx->ctr;
    goto loc_808E0040;
}

loc_808DFEE4:
{
    r3 = r30;
    r4 = r29;
    ctx->lr = 0x808DFEF0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x808D7288u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    ctr = ctx->ctr;
    goto loc_808E0040;
}

loc_808DFEF4:
{
    r3 = r30;
    r4 = r29;
    ctx->lr = 0x808DFF00u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x808D7584u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    ctr = ctx->ctr;
    goto loc_808E0040;
}

loc_808DFF04:
{
    r3 = r30;
    r4 = r29;
    ctx->lr = 0x808DFF10u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x808D7880u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    ctr = ctx->ctr;
    goto loc_808E0040;
}

loc_808DFF14:
{
    r3 = r30;
    r4 = r29;
    ctx->lr = 0x808DFF20u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x808D7A3Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    ctr = ctx->ctr;
    goto loc_808E0040;
}

loc_808DFF24:
{
    r3 = r30;
    r4 = r29;
    ctx->lr = 0x808DFF30u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x808D7D38u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    ctr = ctx->ctr;
    goto loc_808E0040;
}

loc_808DFF34:
{
    r3 = r30;
    r4 = r29;
    ctx->lr = 0x808DFF40u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x808D7DE4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    ctr = ctx->ctr;
    goto loc_808E0040;
}

loc_808DFF44:
{
    r3 = r30;
    r4 = r29;
    ctx->lr = 0x808DFF50u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x808D80E0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    ctr = ctx->ctr;
    goto loc_808E0040;
}

loc_808DFF54:
{
    r3 = r30;
    r4 = r29;
    ctx->lr = 0x808DFF60u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x808D82DCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    ctr = ctx->ctr;
    goto loc_808E0040;
}

loc_808DFF64:
{
    r3 = r30;
    r4 = r29;
    ctx->lr = 0x808DFF70u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x808D9218u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    ctr = ctx->ctr;
    goto loc_808E0040;
}

loc_808DFF74:
{
    r3 = r30;
    r4 = r29;
    ctx->lr = 0x808DFF80u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x808D92D8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    ctr = ctx->ctr;
    goto loc_808E0040;
}

loc_808DFF84:
{
    r3 = r30;
    r4 = r29;
    ctx->lr = 0x808DFF90u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x808DA214u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    ctr = ctx->ctr;
    goto loc_808E0040;
}

loc_808DFF94:
{
    r3 = r30;
    r4 = r29;
    ctx->lr = 0x808DFFA0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x808DB150u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    ctr = ctx->ctr;
    goto loc_808E0040;
}

loc_808DFFA4:
{
    r3 = r30;
    r4 = r29;
    ctx->lr = 0x808DFFB0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x808DB1FCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    ctr = ctx->ctr;
    goto loc_808E0040;
}

loc_808DFFB4:
{
    r3 = r30;
    r4 = r29;
    ctx->lr = 0x808DFFC0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x808DB2D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    ctr = ctx->ctr;
    goto loc_808E0040;
}

loc_808DFFC4:
{
    r3 = r30;
    r4 = r29;
    ctx->lr = 0x808DFFD0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x808DB49Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    ctr = ctx->ctr;
    goto loc_808E0040;
}

loc_808DFFD4:
{
    r3 = r30;
    r4 = r29;
    ctx->lr = 0x808DFFE0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x808DC3D8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    ctr = ctx->ctr;
    goto loc_808E0040;
}

loc_808DFFE4:
{
    r3 = r30;
    r4 = r29;
    ctx->lr = 0x808DFFF0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x808DD6CCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    ctr = ctx->ctr;
    goto loc_808E0040;
}

loc_808DFFF4:
{
    r3 = r30;
    r4 = r29;
    ctx->lr = 0x808E0000u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x808DD778u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    ctr = ctx->ctr;
    goto loc_808E0040;
}

loc_808E0004:
{
    r3 = r30;
    r4 = r29;
    ctx->lr = 0x808E0010u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x808DD84Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    ctr = ctx->ctr;
    goto loc_808E0040;
}

loc_808E0014:
{
    r3 = r30;
    r4 = r29;
    ctx->lr = 0x808E0020u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x808DD8E0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    ctr = ctx->ctr;
    goto loc_808E0040;
}

loc_808E0024:
{
    r3 = r30;
    r4 = r29;
    ctx->lr = 0x808E0030u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x808DE81Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    ctr = ctx->ctr;
    goto loc_808E0040;
}

loc_808E0034:
{
    r3 = r30;
    r4 = r29;
    ctx->lr = 0x808E0040u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x808DE8C8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    ctr = ctx->ctr;
}

loc_808E0040:
{
    r28 = (r28 + 1);
    r29 = (r29 + 616);
}

loc_808E004C:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(18))) {
        goto loc_808DFC24;
    }
}

loc_808E0050:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->ctr = ctr;
    ctx->gpr[28] = r28_entry;
    ctx->gpr[29] = r29_entry;
    ctx->gpr[30] = r30_entry;
    ctx->gpr[31] = r31_entry;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000021FF gpr_write=0x000009FB gpr_return=0x00000018 fpr_read=0xC00003FF fpr_write=0xC0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x808DFBBC func_808DFBBC preserves=true fpr_mask=0x00000000
