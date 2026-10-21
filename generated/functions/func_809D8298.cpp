#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_809D8298(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x809D8298u);
    goto loc_809D8298;

loc_809D8298:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r3 = (r3 + 88);
    r4 = 0;
    ctx->lr = 0x809D82C0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x809D7D74u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r3 = (r29 + 92);
    r4 = 0;
    ctx->lr = 0x809D82CCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x809D83D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = (r29 + 108);
    r30 = (r29 + 140);
}

loc_809D82D4:
{
    r3 = r31;
    r4 = 0;
    ctx->lr = 0x809D82E0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x809D7D74u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = (r31 + 4);
}

loc_809D82E8:
{
    if ((static_cast<uint32_t>(r31) < static_cast<uint32_t>(r30))) {
        goto loc_809D82D4;
    }
}

loc_809D82EC:
{
    r31 = (r29 + 172);
}

loc_809D82F0:
{
    r3 = r30;
    r4 = 0;
    ctx->lr = 0x809D82FCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x809D83D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = (r30 + 4);
}

loc_809D8304:
{
    if ((static_cast<uint32_t>(r30) < static_cast<uint32_t>(r31))) {
        goto loc_809D82F0;
    }
}

loc_809D8308:
{
    r30 = (r29 + 200);
}

loc_809D830C:
{
    r3 = r31;
    r4 = 0;
    ctx->lr = 0x809D8318u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x809D7D74u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = (r31 + 4);
}

loc_809D8320:
{
    if ((static_cast<uint32_t>(r31) < static_cast<uint32_t>(r30))) {
        goto loc_809D830C;
    }
}

loc_809D8324:
{
    r31 = (r29 + 228);
}

loc_809D8328:
{
    r3 = r30;
    r4 = 0;
    ctx->lr = 0x809D8334u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x809D83D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = (r30 + 4);
}

loc_809D833C:
{
    if ((static_cast<uint32_t>(r30) < static_cast<uint32_t>(r31))) {
        goto loc_809D8328;
    }
}

loc_809D8340:
{
    r30 = (r29 + 240);
}

loc_809D8344:
{
    r3 = r31;
    r4 = 0;
    ctx->lr = 0x809D8350u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x809D7D74u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = (r31 + 4);
}

loc_809D8358:
{
    if ((static_cast<uint32_t>(r31) < static_cast<uint32_t>(r30))) {
        goto loc_809D8344;
    }
}

loc_809D835C:
{
    r31 = (r29 + 252);
}

loc_809D8360:
{
    r3 = r30;
    r4 = 0;
    ctx->lr = 0x809D836Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x809D83D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = (r30 + 4);
}

loc_809D8374:
{
    if ((static_cast<uint32_t>(r30) < static_cast<uint32_t>(r31))) {
        goto loc_809D8360;
    }
}

loc_809D8378:
{
    r30 = (r29 + 300);
}

loc_809D837C:
{
    r3 = r31;
    r4 = 0;
    ctx->lr = 0x809D8388u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x809D7D74u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = (r31 + 4);
}

loc_809D8390:
{
    if ((static_cast<uint32_t>(r31) < static_cast<uint32_t>(r30))) {
        goto loc_809D837C;
    }
}

loc_809D8394:
{
    r31 = (r29 + 348);
}

loc_809D8398:
{
    r3 = r30;
    r4 = 0;
    ctx->lr = 0x809D83A4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x809D83D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = (r30 + 4);
}

loc_809D83AC:
{
    if ((static_cast<uint32_t>(r30) < static_cast<uint32_t>(r31))) {
        goto loc_809D8398;
    }
}

loc_809D83B0:
{
    r3 = r29;
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000003A gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x809D8298 func_809D8298 preserves=true fpr_mask=0x00000000
