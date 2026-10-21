#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804E85E0(CpuContext* ctx);
extern "C" uint64_t func_804E85E0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" void func_8003FA48(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];

    MKW_GUEST_ENTER(0x8003FA48u);
    goto loc_8003FA48;

loc_8003FA48:
{
    MemoryInline::FlatWriteRam32((r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    r31 = r3;
    r3 = (r3 & 255);
    r0 = MemoryInline::FlatRead8((r13 + -18063));
}

loc_8003FA6C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_8003FC34;
    }
}

loc_8003FA70:
{
    r0 = MemoryInline::FlatRead8((r13 + -18080));
}

loc_8003FA78:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8003FAAC;
    }
}

loc_8003FA7C:
{
    r3 = 0x80620000u;
    r3 = (r3 + -19780);
    r4 = (r1 + 8);
    r5 = 0;
    r6 = 16;
    ctx->lr = 0x8003FA94u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x804B7280u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    r0 = MemoryInline::FlatRead8((r13 + -18077));
}

loc_8003FA9C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8003FB48;
    }
}

loc_8003FAA0:
{
    r0 = 22;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    goto loc_8003FB48;
}

loc_8003FAAC:
{
    r0 = MemoryInline::FlatRead8((r13 + -18077));
}

loc_8003FAB4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8003FACC;
    }
}

loc_8003FAB8:
{
}

loc_8003FABC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_8003FAE8;
    }
}

loc_8003FAC0:
{
}

loc_8003FAC4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8003FB0C;
    }
}

loc_8003FAC8:
{
    goto loc_8003FC34;
}

loc_8003FACC:
{
    r3 = 0x80620000u;
    r3 = (r3 + -19840);
    r4 = (r1 + 8);
    r5 = 0;
    r6 = 16;
    ctx->lr = 0x8003FAE4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x804B7280u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    goto loc_8003FB48;
}

loc_8003FAE8:
{
    r3 = 0x80620000u;
    r3 = (r3 + -19840);
    r4 = (r1 + 8);
    r5 = 0;
    r6 = 16;
    ctx->lr = 0x8003FB00u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x804B7280u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    r0 = 20;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    goto loc_8003FB48;
}

loc_8003FB0C:
{
    r30 = 0x80620000u;
    r3 = (r30 + -19660);
    r4 = (r1 + 8);
    r5 = 0;
    r6 = 40;
    ctx->lr = 0x8003FB24u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x804B7280u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    r3 = (r30 + -19660);
    r0 = MemoryInline::FlatRead16((r3 + 8));
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 12));
    MemoryInline::FlatWriteRam16((r1 + 20), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 16));
    MemoryInline::FlatWriteRam16((r1 + 24), static_cast<uint16_t>(r0));
}

loc_8003FB48:
{
    r0 = MemoryInline::FlatRead16((r1 + 22));
    r3 = MemoryInline::FlatRead32((r13 + -18104));
    MemoryInline::FlatWrite16((r3 + 14), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r1 + 18));
    r3 = MemoryInline::FlatRead32((r13 + -18104));
    MemoryInline::FlatWrite16((r3 + 10), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -18104));
    ctx->lr = 0x8003FB68u;
    if constexpr (KnownRegArgsCpuCall<0x804E85E0u>(&func_804E85E0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        const auto regargs_result_804E85E0_1869 = func_804E85E0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804E85E0_1869);
        r4 = static_cast<uint32_t>(regargs_result_804E85E0_1869 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        InvokeDirectCpu<0x804E85E0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r3 = 0x80660000u;
    r4 = (r3 + -19268);
    r0 = 640;
    MemoryInline::FlatWriteRam16((r3 + -19268), static_cast<uint16_t>(r0));
    r0 = 448;
    MemoryInline::FlatWriteRam16((r4 + 2), static_cast<uint16_t>(r0));
    r0 = (r31 & 255);
}

loc_8003FB88:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8003FBCC;
    }
}

loc_8003FB8C:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -32768));
    MemoryInline::FlatWriteRamFloat32((r4 + 4), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -32764));
    MemoryInline::FlatWriteRamFloat32((r4 + 8), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -32760));
    MemoryInline::FlatWriteRamFloat32((r4 + 12), f0.d);
    f0.d = PPC_Fctiwz(f1.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword0;
    MemoryInline::FlatWriteRam16((r4 + 60), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -18104));
    r0 = MemoryInline::FlatRead16((r3 + 6));
    MemoryInline::FlatWriteRam16((r4 + 62), static_cast<uint16_t>(r0));
    r0 = 1;
    MemoryInline::FlatWriteRam8((r4 + 25), static_cast<uint8_t>(r0));
    goto loc_8003FC08;
}

loc_8003FBCC:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -32756));
    MemoryInline::FlatWriteRamFloat32((r4 + 4), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -32764));
    MemoryInline::FlatWriteRamFloat32((r4 + 8), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -32752));
    MemoryInline::FlatWriteRamFloat32((r4 + 12), f0.d);
    r0 = 0;
    MemoryInline::FlatWriteRam8((r4 + 25), static_cast<uint8_t>(r0));
    f0.d = PPC_Fctiwz(f1.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword1;
    MemoryInline::FlatWriteRam16((r4 + 60), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -18104));
    r0 = MemoryInline::FlatRead16((r3 + 6));
    MemoryInline::FlatWriteRam16((r4 + 62), static_cast<uint16_t>(r0));
}

loc_8003FC08:
{
    f2.d = MemoryInline::FlatReadFloat32((r2 + -32744));
    MemoryInline::FlatWriteRamFloat32((r4 + 44), f2.d);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -32740));
    MemoryInline::FlatWriteRamFloat32((r4 + 48), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    MemoryInline::FlatWriteRamFloat32((r4 + 52), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteRamFloat32((r4 + 56), f0.d);
    MemoryInline::FlatWrite8((r13 + -18063), static_cast<uint8_t>(r31));
}

loc_8003FC34:
{
    r0 = MemoryInline::FlatRead32((r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8003FA48 func_8003FA48 preserves=true fpr_mask=0x00000000
