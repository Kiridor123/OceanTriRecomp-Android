#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8081DDA0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    goto loc_8081DDA0;

loc_8081DDA0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
}

loc_8081DDAC:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(4))) {
        goto loc_8081DDCC;
    }
}

loc_8081DDBC:
{
}

loc_8081DDC0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(23))) {
        goto loc_8081DDCC;
    }
}

loc_8081DDC4:
{
}

loc_8081DDC8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(25))) {
        goto loc_8081DDE4;
    }
}

loc_8081DDCC:
{
    r4 = 0x80870000u;
    r0 = 3;
    r4 = MemoryInline::FlatRead32((r4 + -32328));
    r5 = (r4 + 65536);
    r5 = (r5 + -18256);
    goto loc_8081DDF0;
}

loc_8081DDE4:
{
    r4 = 0x80870000u;
    r0 = 4;
    r5 = MemoryInline::FlatRead32((r4 + -32328));
}

loc_8081DDF0:
{
    r4 = r5;
    r31 = 0;
    r6 = 0;
    ctr = r0;
}

loc_8081DE04:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_8081DE34;
    }
}

loc_8081DE08:
{
    r0 = MemoryInline::FlatRead8((r4 + 11804));
}

loc_8081DE10:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8081DE28;
    }
}

loc_8081DE14:
{
    r4 = (r6 * 11820);
    r0 = 1;
    r31 = (r5 + r4);
    MemoryInline::FlatWrite8((r31 + 11804), static_cast<uint8_t>(r0));
    goto loc_8081DE34;
}

loc_8081DE28:
{
    r4 = (r4 + 11820);
    r6 = (r6 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8081DE08;
    }
}

loc_8081DE34:
{
}

loc_8081DE38:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_8081DF1C;
    }
}

loc_8081DE3C:
{
}

loc_8081DE40:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(4))) {
        goto loc_8081DE54;
    }
}

loc_8081DE44:
{
}

loc_8081DE48:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(23))) {
        goto loc_8081DE54;
    }
}

loc_8081DE4C:
{
}

loc_8081DE50:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(25))) {
        goto loc_8081DE68;
    }
}

loc_8081DE54:
{
    r3 = 0x80870000u;
    r4 = MemoryInline::FlatRead32((r3 + -32328));
    r3 = (r4 + 65536);
    r3 = (r3 + 17212);
    goto loc_8081DE78;
}

loc_8081DE68:
{
    r3 = 0x80870000u;
    r4 = MemoryInline::FlatRead32((r3 + -32328));
    r3 = (r4 + 65536);
    r3 = (r3 + 17204);
}

loc_8081DE78:
{
    r31 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r31 + 11816));
}

loc_8081DE84:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_8081DE98;
    }
}

loc_8081DE88:
{
}

loc_8081DE8C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(23))) {
        goto loc_8081DE98;
    }
}

loc_8081DE90:
{
}

loc_8081DE94:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(25))) {
        goto loc_8081DEA4;
    }
}

loc_8081DE98:
{
    r30 = (r4 + 65536);
    r30 = (r30 + 17212);
    goto loc_8081DEAC;
}

loc_8081DEA4:
{
    r30 = (r4 + 65536);
    r30 = (r30 + 17204);
}

loc_8081DEAC:
{
    r3 = r31;
    r4 = 0;
    ctx->lr = 0x8081DEB8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x80844280u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r3 = r31;
    ctx->lr = 0x8081DEC0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x808441E0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 11804), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r31 + 11812));
}

loc_8081DED0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8081DEE0;
    }
}

loc_8081DED4:
{
    r0 = MemoryInline::FlatRead32((r31 + 11808));
    MemoryInline::FlatWrite32(r30, r0);
    goto loc_8081DEE8;
}

loc_8081DEE0:
{
    r0 = MemoryInline::FlatRead32((r31 + 11808));
    MemoryInline::FlatWrite32((r3 + 11808), r0);
}

loc_8081DEE8:
{
    r3 = MemoryInline::FlatRead32((r31 + 11808));
}

loc_8081DEF0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8081DF00;
    }
}

loc_8081DEF4:
{
    r0 = MemoryInline::FlatRead32((r31 + 11812));
    MemoryInline::FlatWrite32((r30 + 4), r0);
    goto loc_8081DF08;
}

loc_8081DF00:
{
    r0 = MemoryInline::FlatRead32((r31 + 11812));
    MemoryInline::FlatWrite32((r3 + 11812), r0);
}

loc_8081DF08:
{
    r3 = 0;
    MemoryInline::FlatWrite32((r31 + 11808), r3);
    r0 = 1;
    MemoryInline::FlatWrite32((r31 + 11812), r3);
    MemoryInline::FlatWrite8((r31 + 11804), static_cast<uint8_t>(r0));
}

loc_8081DF1C:
{
    r3 = r31;
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000003FB gpr_write=0x00000BFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8081DDA0 func_8081DDA0 preserves=true fpr_mask=0x00000000
