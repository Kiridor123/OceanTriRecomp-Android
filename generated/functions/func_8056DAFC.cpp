#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8052A270(CpuContext* ctx);
extern "C" uint64_t func_8052A270_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8056DAFC_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x8056DAFCu);
    goto loc_8056DAFC;

loc_8056DAFC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 10u, true, false);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, r3);
}

loc_8056DB18:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8056DB24;
    }
}

loc_8056DB1C:
{
    r0 = 0;
    goto loc_8056DC24;
}

loc_8056DB24:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r3 + 5));
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r6) < static_cast<int32_t>(0))) {
        goto loc_8056DB38;
    }
}

loc_8056DB30:
{
}

loc_8056DB34:
{
    if ((static_cast<int32_t>(r6) < static_cast<int32_t>(8))) {
        goto loc_8056DB40;
    }
}

loc_8056DB38:
{
    r0 = 0;
    goto loc_8056DC24;
}

loc_8056DB40:
{
    r4 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r3 + 6));
}

loc_8056DB48:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(1))) {
        goto loc_8056DB54;
    }
}

loc_8056DB4C:
{
    r0 = 0;
    goto loc_8056DC24;
}

loc_8056DB54:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8056DB5C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8056DBD0;
    }
}

loc_8056DB60:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8056DB74;
    }
}

loc_8056DB64:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8056DB68:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8056DB80;
    }
}

loc_8056DB6C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8056DBA8;
    }
}

loc_8056DB70:
{
    goto loc_8056DC20;
}

loc_8056DB74:
{
}

loc_8056DB78:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(4))) {
        goto loc_8056DC20;
    }
}

loc_8056DB7C:
{
    goto loc_8056DBF8;
}

loc_8056DB80:
{
    r0 = (r4 * 108);
    r4 = 1;
    r6 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r6));
    r4 = (r5 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 24));
    r4 = (r6 & r0);
    r0 = (0 - r4);
    r0 = (r0 | r4);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 1);
    goto loc_8056DC24;
}

loc_8056DBA8:
{
    r0 = (r4 * 108);
    r4 = 1;
    r6 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r6));
    r4 = (r5 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 28));
    r4 = (r6 & r0);
    r0 = (0 - r4);
    r0 = (r0 | r4);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
    goto loc_8056DC24;
}

loc_8056DBD0:
{
    r0 = (r4 * 108);
    r4 = 1;
    r6 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r6));
    r4 = (r5 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 32));
    r4 = (r6 & r0);
    r0 = (0 - r4);
    r0 = (r0 | r4);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & 1);
    goto loc_8056DC24;
}

loc_8056DBF8:
{
    r0 = (r4 * 108);
    r4 = 1;
    r6 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r6));
    r4 = (r5 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 36));
    r4 = (r6 & r0);
    r0 = (0 - r4);
    r0 = (r0 | r4);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & 1);
    goto loc_8056DC24;
}

loc_8056DC20:
{
    r0 = 0;
}

loc_8056DC24:
{
}

loc_8056DC28:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8056DC34;
    }
}

loc_8056DC2C:
{
    r3 = 0;
    goto loc_8056DD2C;
}

loc_8056DC34:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 8u, (r3 + 8));
}

loc_8056DC3C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8056DC48;
    }
}

loc_8056DC40:
{
    r3 = r0;
    goto loc_8056DD2C;
}

loc_8056DC48:
{
    r7 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r3 + 6));
}

loc_8056DC50:
{
    if ((static_cast<uint32_t>(r7) < static_cast<uint32_t>(1))) {
        goto loc_8056DC5C;
    }
}

loc_8056DC54:
{
    r3 = 0;
    goto loc_8056DD2C;
}

loc_8056DC5C:
{
    r4 = MemoryInline::FlatRead32((r5 + 52));
    r6 = MemoryInline::FlatRead32((r5 + 60));
    r0 = MemoryInline::FlatRead32((r5 + 56));
    r4 = (r4 & ~r6);
    r0 = (r0 & r6);
    r4 = (r4 | r0);
    r0 = (r4 & 13);
}

loc_8056DC78:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8056DC90;
    }
}

loc_8056DC7C:
{
    r0 = (r4 & 5);
}

loc_8056DC80:
{
}

loc_8056DC84:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(5))) {
        goto loc_8056DC90;
    }
}

loc_8056DC88:
{
    r3 = 0;
    goto loc_8056DD2C;
}

loc_8056DC90:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8056DC98:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8056DCF0;
    }
}

loc_8056DC9C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8056DCAC;
    }
}

loc_8056DCA0:
{
}

loc_8056DCA4:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_8056DCB4;
    }
}

loc_8056DCA8:
{
    goto loc_8056DD28;
}

loc_8056DCAC:
{
}

loc_8056DCB0:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(4))) {
        goto loc_8056DD28;
    }
}

loc_8056DCB4:
{
    r0 = (r7 * 108);
    r6 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r3 + 5));
    r3 = 1;
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    r5 = (r5 + r0);
    r0 = MemoryInline::FlatRead32((r5 + 44));
    r3 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r6));
    r0 = (r3 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8056DD28;
    }
}

loc_8056DCD8:
{
    r3 = (r5 + r6);
    r5 = MemoryInline::FlatRead32((r5 + 64));
    r3 = MemoryInline::FlatRead8((r3 + 77));
    if constexpr (KnownRegArgsCpuCall<0x8052A270u>(&func_8052A270)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_8052A270_1C4C = func_8052A270_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8052A270_1C4C);
        r4 = static_cast<uint32_t>(regargs_result_8052A270_1C4C >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        InvokeDirectCpu<0x8052A270u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    MemoryInline::FlatWrite16((r31 + 8), static_cast<uint16_t>(r3));
    goto loc_8056DD28;
}

loc_8056DCF0:
{
    r0 = (r7 * 108);
    r6 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r3 + 5));
    r3 = 1;
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    r5 = (r5 + r0);
    r0 = MemoryInline::FlatRead32((r5 + 40));
    r3 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r6));
    r0 = (r3 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8056DD28;
    }
}

loc_8056DD14:
{
    r3 = (r5 + r6);
    r5 = MemoryInline::FlatRead32((r5 + 64));
    r3 = MemoryInline::FlatRead8((r3 + 69));
    if constexpr (KnownRegArgsCpuCall<0x8052A270u>(&func_8052A270)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_8052A270_22C1 = func_8052A270_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8052A270_22C1);
        r4 = static_cast<uint32_t>(regargs_result_8052A270_22C1 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        InvokeDirectCpu<0x8052A270u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    MemoryInline::FlatWrite16((r31 + 8), static_cast<uint16_t>(r3));
}

loc_8056DD28:
{
    r3 = MemoryInline::FlatRead16((r31 + 8));
}

loc_8056DD2C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8056DAFC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8056DAFC_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002FFB gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8056DAFC func_8056DAFC preserves=true fpr_mask=0x00000000
