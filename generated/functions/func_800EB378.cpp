#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800EB378(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_psqx_800EBA88_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t fctiwzword3 = 0;
    uint32_t fctiwzword4 = 0;
    uint32_t fctiwzword5 = 0;
    uint32_t fctiwzword6 = 0;
    uint32_t fctiwzword7 = 0;
    uint32_t fctiwzword8 = 0;
    uint32_t fctiwzword9 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f31 = ctx->fpr[31];

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    MKW_GUEST_ENTER(0x800EB378u);
    goto loc_800EB378;

loc_800EB378:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -64), 0, 72u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 68u, (r1 + 68), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 48u, (r1 + 48), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r30 = r4;
    r0 = 1127219200;
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r1 + 8), r0);
    r0 = 1127219200;
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r1 + 16), r0);
    r3 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800EA840u>(ctx);
    r3 = ctx->gpr[3];
    r31 = r3;
    f31.d = MemoryInline::FlatReadFloat32((r2 + -30040));
    r29 = 0;
    r0 = MemoryInline::FlatRead8((r3 + 130));
}

loc_800EB3C8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800EB3F8;
    }
}

loc_800EB3CC:
{
}

loc_800EB3D0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(4))) {
        goto loc_800EB3F8;
    }
}

loc_800EB3D4:
{
    r0 = MemoryInline::FlatRead16((r3 + 76));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -30048));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30064));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    r29 = 1;
}

loc_800EB3F8:
{
    r3 = r30;
    r4 = 524288;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800E629Cu>(ctx);
    r3 = ctx->gpr[3];
}

loc_800EB408:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800EB47C;
    }
}

loc_800EB40C:
{
    r3 = MemoryInline::FlatRead32((r31 + 116));
    r3 = MH3_TickLoad(r3, 2148447244);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r31 + 116), r0);
    r3 = MemoryInline::FlatRead32((r31 + 112));
    r0 = MemoryInline::FlatRead32((r31 + 116));
}

loc_800EB424:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r3))) {
        goto loc_800EB448;
    }
}

loc_800EB428:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30040));
    MemoryInline::FlatWriteFloat32((r31 + 152), f0.d);
    r0 = MemoryInline::FlatRead16((r31 + 158));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r31 + 78), static_cast<uint16_t>(r0));
    r3 = r30;
    r4 = 524288;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800E5F8Cu>(ctx);
    goto loc_800EB478;
}

loc_800EB448:
{
    f2.d = MemoryInline::FlatReadFloat64((r2 + -30056));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 152), f0.d);
    r0 = MemoryInline::FlatRead16((r31 + 158));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r31 + 78), static_cast<uint16_t>(r0));
}

loc_800EB478:
{
    r29 = 1;
}

loc_800EB47C:
{
    r3 = r30;
    r4 = 1048576;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800E629Cu>(ctx);
    r3 = ctx->gpr[3];
}

loc_800EB48C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800EB500;
    }
}

loc_800EB490:
{
    r3 = MemoryInline::FlatRead32((r31 + 116));
    r3 = MH3_TickLoad(r3, 2148447376);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r31 + 116), r0);
    r3 = MemoryInline::FlatRead32((r31 + 112));
}

loc_800EB4A4:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r3))) {
        goto loc_800EB4C0;
    }
}

loc_800EB4A8:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30036));
    MemoryInline::FlatWriteFloat32((r31 + 152), f0.d);
    r3 = r30;
    r4 = 1048576;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800E5F8Cu>(ctx);
    goto loc_800EB4FC;
}

loc_800EB4C0:
{
    r0 = MemoryInline::FlatRead32((r31 + 116));
    f2.d = MemoryInline::FlatReadFloat64((r2 + -30056));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30040));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteFloat32((r31 + 152), f0.d);
    r0 = MemoryInline::FlatRead16((r31 + 158));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r31 + 78), static_cast<uint16_t>(r0));
}

loc_800EB4FC:
{
    r29 = 1;
}

loc_800EB500:
{
    r3 = r30;
    r4 = 2097152;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800E629Cu>(ctx);
    r3 = ctx->gpr[3];
}

loc_800EB510:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800EB650;
    }
}

loc_800EB514:
{
    r3 = MemoryInline::FlatRead32((r31 + 160));
    r3 = MH3_TickLoad(r3, 2148447508);
    r3 = (r3 + 1);
    MemoryInline::FlatWrite32((r31 + 160), r3);
    r0 = MemoryInline::FlatRead32((r31 + 188));
}

loc_800EB528:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_800EB5A0;
    }
}

loc_800EB52C:
{
    r0 = MemoryInline::FlatRead16((r31 + 156));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r31 + 140), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r31 + 140));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_800EB53C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(127))) {
        goto loc_800EB54C;
    }
}

loc_800EB540:
{
    r0 = 127;
    MemoryInline::FlatWrite16((r31 + 140), static_cast<uint16_t>(r0));
    goto loc_800EB55C;
}

loc_800EB54C:
{
}

loc_800EB550:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_800EB55C;
    }
}

loc_800EB554:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r31 + 140), static_cast<uint16_t>(r0));
}

loc_800EB55C:
{
    r0 = MemoryInline::FlatRead16((r31 + 140));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -30048));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f0.d, f31.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f0.d);
    r0 = fctiwzword0;
    MemoryInline::FlatWrite16((r31 + 78), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r31 + 78));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r31 + 158), static_cast<uint16_t>(r0));
    r3 = r30;
    r4 = 2097152;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800E5F8Cu>(ctx);
    goto loc_800EB64C;
}

loc_800EB5A0:
{
    r0 = MemoryInline::FlatRead16((r31 + 156));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r31 + 140), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r31 + 140));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_800EB5B0:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(127))) {
        goto loc_800EB5C0;
    }
}

loc_800EB5B4:
{
    r0 = 127;
    MemoryInline::FlatWrite16((r31 + 140), static_cast<uint16_t>(r0));
    goto loc_800EB5D0;
}

loc_800EB5C0:
{
}

loc_800EB5C4:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_800EB5D0;
    }
}

loc_800EB5C8:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r31 + 140), static_cast<uint16_t>(r0));
}

loc_800EB5D0:
{
    r3 = MemoryInline::FlatRead16((r31 + 158));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead32((r31 + 160));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -30056));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r0 = MemoryInline::FlatRead16((r31 + 140));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 - r3);
    f3.d = MemoryInline::FlatReadFloat64((r2 + -30048));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    r0 = MemoryInline::FlatRead32((r31 + 188));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30040));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f0.d));
    f1.d = PpcFmulsInline(f4.d, f0.d);
    r0 = (r3 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f0.d = PpcFmulsInline(f31.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f0.d);
    r0 = fctiwzword1;
    MemoryInline::FlatWrite16((r31 + 78), static_cast<uint16_t>(r0));
}

loc_800EB64C:
{
    r29 = 1;
}

loc_800EB650:
{
    r3 = r30;
    r4 = 4194304;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800E629Cu>(ctx);
    r3 = ctx->gpr[3];
}

loc_800EB660:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800EB7B8;
    }
}

loc_800EB664:
{
    r3 = MemoryInline::FlatRead32((r31 + 160));
    r3 = MH3_TickLoad(r3, 2148447844);
    r3 = (r3 + 1);
    MemoryInline::FlatWrite32((r31 + 160), r3);
    r0 = MemoryInline::FlatRead32((r31 + 188));
}

loc_800EB678:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_800EB6FC;
    }
}

loc_800EB67C:
{
    r3 = MemoryInline::FlatRead16((r31 + 158));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead16((r31 + 156));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r3 + r0);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWrite16((r31 + 140), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r31 + 140));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_800EB698:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(127))) {
        goto loc_800EB6A8;
    }
}

loc_800EB69C:
{
    r0 = 127;
    MemoryInline::FlatWrite16((r31 + 140), static_cast<uint16_t>(r0));
    goto loc_800EB6B8;
}

loc_800EB6A8:
{
}

loc_800EB6AC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_800EB6B8;
    }
}

loc_800EB6B0:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r31 + 140), static_cast<uint16_t>(r0));
}

loc_800EB6B8:
{
    r0 = MemoryInline::FlatRead16((r31 + 140));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -30048));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f0.d, f31.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword2 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f0.d);
    r0 = fctiwzword2;
    MemoryInline::FlatWrite16((r31 + 78), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r31 + 78));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r31 + 158), static_cast<uint16_t>(r0));
    r3 = r30;
    r4 = 4194304;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800E5F8Cu>(ctx);
    goto loc_800EB7B4;
}

loc_800EB6FC:
{
    r3 = MemoryInline::FlatRead16((r31 + 158));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead16((r31 + 156));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r3 + r0);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWrite16((r31 + 140), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r31 + 140));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_800EB718:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(127))) {
        goto loc_800EB728;
    }
}

loc_800EB71C:
{
    r0 = 127;
    MemoryInline::FlatWrite16((r31 + 140), static_cast<uint16_t>(r0));
    goto loc_800EB738;
}

loc_800EB728:
{
}

loc_800EB72C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_800EB738;
    }
}

loc_800EB730:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r31 + 140), static_cast<uint16_t>(r0));
}

loc_800EB738:
{
    r3 = MemoryInline::FlatRead16((r31 + 158));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead32((r31 + 160));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -30056));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r0 = MemoryInline::FlatRead16((r31 + 140));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 - r3);
    f3.d = MemoryInline::FlatReadFloat64((r2 + -30048));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    r0 = MemoryInline::FlatRead32((r31 + 188));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30040));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f0.d));
    f1.d = PpcFmulsInline(f4.d, f0.d);
    r0 = (r3 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f0.d = PpcFmulsInline(f31.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword3 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f0.d);
    r0 = fctiwzword3;
    MemoryInline::FlatWrite16((r31 + 78), static_cast<uint16_t>(r0));
}

loc_800EB7B4:
{
    r29 = 1;
}

loc_800EB7B8:
{
    r3 = r30;
    r4 = 8388608;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800E629Cu>(ctx);
    r3 = ctx->gpr[3];
}

loc_800EB7C8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800EB988;
    }
}

loc_800EB7CC:
{
    r3 = MemoryInline::FlatRead32((r31 + 160));
    r3 = MH3_TickLoad(r3, 2148448204);
    r3 = (r3 + 1);
    MemoryInline::FlatWrite32((r31 + 160), r3);
    r0 = MemoryInline::FlatRead32((r31 + 188));
}

loc_800EB7E0:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_800EB898;
    }
}

loc_800EB7E4:
{
    r0 = MemoryInline::FlatRead16((r31 + 72));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -30048));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r0 = MemoryInline::FlatRead16((r31 + 156));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30032));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword4 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword4;
    MemoryInline::FlatWrite16((r31 + 140), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r31 + 140));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_800EB834:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(127))) {
        goto loc_800EB844;
    }
}

loc_800EB838:
{
    r0 = 127;
    MemoryInline::FlatWrite16((r31 + 140), static_cast<uint16_t>(r0));
    goto loc_800EB854;
}

loc_800EB844:
{
}

loc_800EB848:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_800EB854;
    }
}

loc_800EB84C:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r31 + 140), static_cast<uint16_t>(r0));
}

loc_800EB854:
{
    r0 = MemoryInline::FlatRead16((r31 + 140));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -30048));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f0.d, f31.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword5 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f0.d);
    r0 = fctiwzword5;
    MemoryInline::FlatWrite16((r31 + 78), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r31 + 78));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r31 + 158), static_cast<uint16_t>(r0));
    r3 = r30;
    r4 = 8388608;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800E5F8Cu>(ctx);
    goto loc_800EB984;
}

loc_800EB898:
{
    r0 = MemoryInline::FlatRead16((r31 + 72));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -30048));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r0 = MemoryInline::FlatRead16((r31 + 156));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30028));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword6 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword6;
    MemoryInline::FlatWrite16((r31 + 140), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r31 + 140));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_800EB8E8:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(127))) {
        goto loc_800EB8F8;
    }
}

loc_800EB8EC:
{
    r0 = 127;
    MemoryInline::FlatWrite16((r31 + 140), static_cast<uint16_t>(r0));
    goto loc_800EB908;
}

loc_800EB8F8:
{
}

loc_800EB8FC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_800EB908;
    }
}

loc_800EB900:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r31 + 140), static_cast<uint16_t>(r0));
}

loc_800EB908:
{
    r3 = MemoryInline::FlatRead16((r31 + 158));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead32((r31 + 160));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -30056));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r0 = MemoryInline::FlatRead16((r31 + 140));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 - r3);
    f3.d = MemoryInline::FlatReadFloat64((r2 + -30048));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    r0 = MemoryInline::FlatRead32((r31 + 188));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30040));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f0.d));
    f1.d = PpcFmulsInline(f4.d, f0.d);
    r0 = (r3 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f0.d = PpcFmulsInline(f31.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword7 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f0.d);
    r0 = fctiwzword7;
    MemoryInline::FlatWrite16((r31 + 78), static_cast<uint16_t>(r0));
}

loc_800EB984:
{
    r29 = 1;
}

loc_800EB988:
{
}

loc_800EB98C:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_800EB9E8;
    }
}

loc_800EB990:
{
    r0 = MemoryInline::FlatRead16((r31 + 78));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -30048));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 152));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword8 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f0.d);
    r0 = fctiwzword8;
    MemoryInline::FlatWrite16((r31 + 78), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r31 + 78));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_800EB9C8:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(127))) {
        goto loc_800EB9D8;
    }
}

loc_800EB9CC:
{
    r0 = 127;
    MemoryInline::FlatWrite16((r31 + 78), static_cast<uint16_t>(r0));
    goto loc_800EB9E8;
}

loc_800EB9D8:
{
}

loc_800EB9DC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_800EB9E8;
    }
}

loc_800EB9E0:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r31 + 78), static_cast<uint16_t>(r0));
}

loc_800EB9E8:
{
    r30 = MemoryInline::FlatRead16((r31 + 78));
    r0 = MemoryInline::FlatRead16((r31 + 212));
    r3 = (r0 & 255);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800E4940u>(ctx);
    r3 = ctx->gpr[3];
}

loc_800EB9FC:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_800EBA08;
    }
}

loc_800EBA00:
{
}

loc_800EBA04:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_800EBA84;
    }
}

loc_800EBA08:
{
    r0 = MemoryInline::FlatRead16((r31 + 212));
    r3 = (r0 & 255);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x800E4948u>(ctx);
    f1 = ctx->fpr[1];
    f2.d = MemoryInline::FlatReadFloat64((r2 + -30056));
    MemoryInline::FlatWriteRam32((r1 + 20), r30);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword9 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f0.d);
    r30 = fctiwzword9;
    r0 = (r30 & 65535);
}

loc_800EBA3C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(127))) {
        goto loc_800EBA44;
    }
}

loc_800EBA40:
{
    r30 = 127;
}

loc_800EBA44:
{
    r0 = MemoryInline::FlatRead32((r31 + 4));
}

loc_800EBA4C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800EBA64;
    }
}

loc_800EBA50:
{
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r30)));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800E8EACu>(ctx);
    r3 = ctx->gpr[3];
    r4 = r3;
    r3 = MemoryInline::FlatRead32((r31 + 4));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x804C45B0u>(ctx);
}

loc_800EBA64:
{
    r0 = MemoryInline::FlatRead32((r31 + 8));
}

loc_800EBA6C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800EBA84;
    }
}

loc_800EBA70:
{
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r30)));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800E8EACu>(ctx);
    r3 = ctx->gpr[3];
    r4 = r3;
    r3 = MemoryInline::FlatRead32((r31 + 8));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x804C45B0u>(ctx);
}

loc_800EBA84:
{
    r0 = 56;
    addr_psqx_800EBA88_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800EBA88_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 48));
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000001F gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x8000001F fpr_write=0x8000001F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800EB378 func_800EB378 preserves=true fpr_mask=0x00000000
