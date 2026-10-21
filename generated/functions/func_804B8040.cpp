#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804B8040(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x804B8040u);
    goto loc_804B8040;

loc_804B8040:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r2 + -2424), 0, 48u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -2424));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_804B8048:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804B8050;
    }
}

loc_804B804C:
{
    r4 = 0;
}

loc_804B8050:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -2424));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_804B8058:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804B8070;
    }
}

loc_804B8060:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r2 + -2400));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_804B8068:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_804B8074;
    }
}

loc_804B8070:
{
    r4 = 0;
}

loc_804B8074:
{
}

loc_804B8078:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(1))) {
        goto loc_804B8090;
    }
}

loc_804B807C:
{
}

loc_804B8080:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(2))) {
        goto loc_804B80A8;
    }
}

loc_804B8084:
{
}

loc_804B8088:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(3))) {
        goto loc_804B80CC;
    }
}

loc_804B808C:
{
    goto loc_804B80E8;
}

loc_804B8090:
{
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r2 + -2400));
    f0.d = PpcFmulsInline(f2.d, f1.d);
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -2424));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f2.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    goto loc_804B80F4;
}

loc_804B80A8:
{
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r2 + -2400));
    f3.d = PpcFmulsInline(f2.d, f1.d);
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 44u, (r2 + -2380));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f2.d));
    f0.d = PpcFmulsInline(f1.d, f3.d);
    f1.d = PpcFmulsInline(f4.d, f2.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f3.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    goto loc_804B80F4;
}

loc_804B80CC:
{
    f0.d = PpcFmulsInline(f2.d, f1.d);
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r2 + -2400));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -2424));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f2.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f0.d));
    goto loc_804B80F4;
}

loc_804B80E8:
{
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -2424));
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r2 + -2400));
    f4.d = f3.d;
}

loc_804B80F4:
{
    MemoryInline::FlatWriteFloat32((r3 + 28), f5.d);
    MemoryInline::FlatWriteFloat32((r3 + 32), f3.d);
    MemoryInline::FlatWriteFloat32((r3 + 36), f4.d);
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000001C gpr_write=0x00000010 gpr_return=0x00000010 fpr_read=0x00000007 fpr_write=0x0000003F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804B8040 func_804B8040 preserves=true fpr_mask=0x00000000
