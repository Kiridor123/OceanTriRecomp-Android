#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8082C050(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x8082C050u);
    goto loc_8082C050;

loc_8082C050:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r0 = (r3 + -1885405184);
}

loc_8082C064:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(28209))) {
        goto loc_8082C0A0;
    }
}

loc_8082C06C:
{
    r0 = (r3 + -1885929472);
}

loc_8082C074:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(25393))) {
        goto loc_8082C0D4;
    }
}

loc_8082C078:
{
    r0 = (r3 + -1954021376);
}

loc_8082C080:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(29745))) {
        goto loc_8082C12C;
    }
}

loc_8082C084:
{
    r0 = (r3 + -2003697664);
}

loc_8082C08C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(25649))) {
        goto loc_8082C184;
    }
}

loc_8082C090:
{
    r0 = (r3 + -1651376128);
}

loc_8082C098:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(25649))) {
        goto loc_8082C1DC;
    }
}

loc_8082C09C:
{
    goto loc_8082C234;
}

loc_8082C0A0:
{
    r3 = 0x80870000u;
    r31 = r4;
    r3 = MemoryInline::FlatRead32((r3 + -32224));
    r4 = 212;
    ctx->lr = 0x8082C0B4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    InvokeDirectCpu<0x804C2B00u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8082C0B8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8082C0CC;
    }
}

loc_8082C0BC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8082C238;
    }
}

loc_8082C0C0:
{
    r4 = r31;
    ctx->lr = 0x8082C0C8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    InvokeDirectCpu<0x808303F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_8082C238;
}

loc_8082C0CC:
{
    r3 = 0;
    goto loc_8082C238;
}

loc_8082C0D4:
{
    r8 = MemoryInline::FlatRead32(r5);
    r3 = 0x80870000u;
    r7 = MemoryInline::FlatRead32((r5 + 4));
    r31 = r4;
    r6 = MemoryInline::FlatRead32((r5 + 8));
    r4 = 236;
    r0 = MemoryInline::FlatRead32((r5 + 12));
    MemoryInline::FlatWriteRam32((r1 + 56), r8);
    r3 = MemoryInline::FlatRead32((r3 + -32224));
    MemoryInline::FlatWriteRam32((r1 + 60), r7);
    MemoryInline::FlatWriteRam32((r1 + 64), r6);
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    ctx->lr = 0x8082C108u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    InvokeDirectCpu<0x804C2B00u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8082C10C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8082C124;
    }
}

loc_8082C110:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8082C238;
    }
}

loc_8082C114:
{
    r4 = r31;
    r5 = (r1 + 56);
    ctx->lr = 0x8082C120u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    InvokeDirectCpu<0x80831880u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_8082C238;
}

loc_8082C124:
{
    r3 = 0;
    goto loc_8082C238;
}

loc_8082C12C:
{
    r8 = MemoryInline::FlatRead32(r5);
    r3 = 0x80870000u;
    r7 = MemoryInline::FlatRead32((r5 + 4));
    r31 = r4;
    r6 = MemoryInline::FlatRead32((r5 + 8));
    r4 = 256;
    r0 = MemoryInline::FlatRead32((r5 + 12));
    MemoryInline::FlatWriteRam32((r1 + 40), r8);
    r3 = MemoryInline::FlatRead32((r3 + -32224));
    MemoryInline::FlatWriteRam32((r1 + 44), r7);
    MemoryInline::FlatWriteRam32((r1 + 48), r6);
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    ctx->lr = 0x8082C160u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    InvokeDirectCpu<0x804C2B00u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8082C164:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8082C17C;
    }
}

loc_8082C168:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8082C238;
    }
}

loc_8082C16C:
{
    r4 = r31;
    r5 = (r1 + 40);
    ctx->lr = 0x8082C178u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    InvokeDirectCpu<0x80832440u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_8082C238;
}

loc_8082C17C:
{
    r3 = 0;
    goto loc_8082C238;
}

loc_8082C184:
{
    r8 = MemoryInline::FlatRead32(r5);
    r3 = 0x80870000u;
    r7 = MemoryInline::FlatRead32((r5 + 4));
    r31 = r4;
    r6 = MemoryInline::FlatRead32((r5 + 8));
    r4 = 260;
    r0 = MemoryInline::FlatRead32((r5 + 12));
    MemoryInline::FlatWriteRam32((r1 + 24), r8);
    r3 = MemoryInline::FlatRead32((r3 + -32224));
    MemoryInline::FlatWriteRam32((r1 + 28), r7);
    MemoryInline::FlatWriteRam32((r1 + 32), r6);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    ctx->lr = 0x8082C1B8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    InvokeDirectCpu<0x804C2B00u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8082C1BC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8082C1D4;
    }
}

loc_8082C1C0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8082C238;
    }
}

loc_8082C1C4:
{
    r4 = r31;
    r5 = (r1 + 24);
    ctx->lr = 0x8082C1D0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    InvokeDirectCpu<0x808341B0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_8082C238;
}

loc_8082C1D4:
{
    r3 = 0;
    goto loc_8082C238;
}

loc_8082C1DC:
{
    r8 = MemoryInline::FlatRead32(r5);
    r3 = 0x80870000u;
    r7 = MemoryInline::FlatRead32((r5 + 4));
    r31 = r4;
    r6 = MemoryInline::FlatRead32((r5 + 8));
    r4 = 212;
    r0 = MemoryInline::FlatRead32((r5 + 12));
    MemoryInline::FlatWriteRam32((r1 + 8), r8);
    r3 = MemoryInline::FlatRead32((r3 + -32224));
    MemoryInline::FlatWriteRam32((r1 + 12), r7);
    MemoryInline::FlatWriteRam32((r1 + 16), r6);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    ctx->lr = 0x8082C210u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    InvokeDirectCpu<0x804C2B00u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8082C214:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8082C22C;
    }
}

loc_8082C218:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8082C238;
    }
}

loc_8082C21C:
{
    r4 = r31;
    r5 = (r1 + 8);
    ctx->lr = 0x8082C228u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    InvokeDirectCpu<0x80829BF0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_8082C238;
}

loc_8082C22C:
{
    r3 = 0;
    goto loc_8082C238;
}

loc_8082C234:
{
    r3 = 0;
}

loc_8082C238:
{
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8082C050 func_8082C050 preserves=true fpr_mask=0x00000000
