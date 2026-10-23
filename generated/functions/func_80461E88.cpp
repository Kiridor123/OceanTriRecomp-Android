#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80456C5C(CpuContext* ctx);
extern "C" uint32_t func_80456C5C_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80461E88_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
    uint32_t r4_addr_6 = 0;
    uint32_t r4_addr_7 = 0;
    uint32_t r4_addr_8 = 0;
    uint32_t r4_addr_9 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    const uint32_t r29_entry = r29;
    const uint32_t r30_entry = r30;
    const uint32_t r31_entry = r31;
    uint32_t ctr = ctx->ctr;

    goto loc_80461E88;

loc_80461E88:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    r6 = 0;
    r7 = 1;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r0 = MemoryInline::FlatRead16((r3 + 2));
    r31 = (r3 + 2);
}

loc_80461EAC:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 36u, false, true);
    r30 = r5;
    r29 = r4;
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r1 + 8), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r1 + 9), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r1 + 10), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r1 + 11), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r1 + 12), static_cast<uint8_t>(r6));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r1 + 16), r6);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r1 + 20), r6);
    }
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(37))) {
        goto loc_80461F00;
    }
}

loc_80461EDC:
{
    MemoryInline::FlatWriteRam16((r1 + 14), static_cast<uint16_t>(r0));
    r3 = (r31 + 2);
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead32((r1 + 12));
    MemoryInline::FlatWrite32(r5, r4);
    MemoryInline::FlatWrite32((r5 + 4), r0);
    MemoryInline::FlatWrite32((r5 + 8), r6);
    MemoryInline::FlatWrite32((r5 + 12), r6);
    goto loc_804623FC;
}

loc_80461F00:
{
    r3 = 2;
}

loc_80461F04:
{
}

loc_80461F08:
{
    r5 = 1;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(45))) {
        goto loc_80461F34;
    }
}

loc_80461F10:
{
}

loc_80461F14:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(43))) {
        goto loc_80461F3C;
    }
}

loc_80461F18:
{
}

loc_80461F1C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(32))) {
        goto loc_80461F44;
    }
}

loc_80461F20:
{
}

loc_80461F24:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(35))) {
        goto loc_80461F58;
    }
}

loc_80461F28:
{
}

loc_80461F2C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(48))) {
        goto loc_80461F60;
    }
}

loc_80461F30:
{
    goto loc_80461F74;
}

loc_80461F34:
{
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r6));
    goto loc_80461F78;
}

loc_80461F3C:
{
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r7));
    goto loc_80461F78;
}

loc_80461F44:
{
    r4 = MemoryInline::FlatRead8((r1 + 9));
}

loc_80461F4C:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(1))) {
        goto loc_80461F78;
    }
}

loc_80461F50:
{
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r3));
    goto loc_80461F78;
}

loc_80461F58:
{
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r7));
    goto loc_80461F78;
}

loc_80461F60:
{
    r4 = MemoryInline::FlatRead8((r1 + 8));
}

loc_80461F68:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80461F78;
    }
}

loc_80461F6C:
{
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r3));
    goto loc_80461F78;
}

loc_80461F74:
{
    r5 = 0;
}

loc_80461F78:
{
}

loc_80461F7C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80461F88;
    }
}

loc_80461F80:
{
    r31 = (r31 + 2);
    r0 = MemoryInline::FlatRead16(r31);
    goto loc_80461F04;
}

loc_80461F88:
{
}

loc_80461F8C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(42))) {
        goto loc_80461FC4;
    }
}

loc_80461F90:
{
    r3 = r29;
    r4 = 1;
    if constexpr (KnownRegArgsCpuCall<0x80456C5Cu>(&func_80456C5C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_80456C5C_173E = func_80456C5C_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_80456C5C_173E;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x80456C5Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r0 = MemoryInline::FlatRead32(r3);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
}

loc_80461FA8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_80461FBC;
    }
}

loc_80461FAC:
{
    r0 = (0 - r0);
    r3 = 0;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
}

loc_80461FBC:
{
    r31 = (r31 + 2);
    r0 = MemoryInline::FlatRead16(r31);
    goto loc_80462014;
}

loc_80461FC4:
{
    r3 = 0x80610000u;
    r3 = (r3 + -2448);
    r5 = MemoryInline::FlatRead32((r3 + 56));
    goto loc_80461FEC;
}

loc_80461FD4:
{
    r3 = MemoryInline::FlatRead32((r1 + 16));
    r3 = (r3 * 10);
    r3 = (r0 + r3);
    r31 = (r31 + 2);
    r0 = MemoryInline::FlatRead16(r31);
    r3 = (r3 + -48);
    MemoryInline::FlatWriteRam32((r1 + 16), r3);
}

loc_80461FEC:
{
}

loc_80461FF0:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(256))) {
        goto loc_80462008;
    }
}

loc_80461FF4:
{
    r4 = MemoryInline::FlatRead32((r5 + 20));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 131070);
    r4_addr_2 = (r4 + r3);
    r3 = MemoryInline::FlatRead16(r4_addr_2);
    r3 = (r3 & 8);
    goto loc_8046200C;
}

loc_80462008:
{
    r3 = 0;
}

loc_8046200C:
{
}

loc_80462010:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80461FD4;
    }
}

loc_80462014:
{
    r6 = MemoryInline::FlatRead32((r1 + 16));
}

loc_8046201C:
{
    if ((static_cast<int32_t>(r6) <= static_cast<int32_t>(509))) {
        goto loc_80462050;
    }
}

loc_80462020:
{
    r3 = 65536;
    r5 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r3 + -1);
    MemoryInline::FlatWriteRam16((r1 + 14), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r3 = (r31 + 2);
    r4 = MemoryInline::FlatRead32((r1 + 12));
    MemoryInline::FlatWrite32(r30, r5);
    MemoryInline::FlatWrite32((r30 + 4), r4);
    MemoryInline::FlatWrite32((r30 + 8), r6);
    MemoryInline::FlatWrite32((r30 + 12), r0);
    goto loc_804623FC;
}

loc_80462050:
{
}

loc_80462054:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(46))) {
        goto loc_804620E8;
    }
}

loc_80462058:
{
    r31 = (r31 + 2);
    r0 = MemoryInline::FlatRead16(r31);
    r3 = 1;
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r3));
}

loc_80462068:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(42))) {
        goto loc_80462098;
    }
}

loc_8046206C:
{
    r3 = r29;
    r4 = 1;
    if constexpr (KnownRegArgsCpuCall<0x80456C5Cu>(&func_80456C5C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_80456C5C_2510 = func_80456C5C_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_80456C5C_2510;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x80456C5Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r0 = MemoryInline::FlatRead32(r3);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
}

loc_80462084:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_80462090;
    }
}

loc_80462088:
{
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r0));
}

loc_80462090:
{
    r31 = (r31 + 2);
    r0 = MemoryInline::FlatRead16(r31);
    goto loc_804620E8;
}

loc_80462098:
{
    r3 = 0x80610000u;
    r3 = (r3 + -2448);
    r5 = MemoryInline::FlatRead32((r3 + 56));
    goto loc_804620C0;
}

loc_804620A8:
{
    r3 = MemoryInline::FlatRead32((r1 + 20));
    r3 = (r3 * 10);
    r3 = (r0 + r3);
    r31 = (r31 + 2);
    r0 = MemoryInline::FlatRead16(r31);
    r3 = (r3 + -48);
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
}

loc_804620C0:
{
}

loc_804620C4:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(256))) {
        goto loc_804620DC;
    }
}

loc_804620C8:
{
    r4 = MemoryInline::FlatRead32((r5 + 20));
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_6 & 131070);
    r4_addr_6 = (r4 + r3);
    r3 = MemoryInline::FlatRead16(r4_addr_6);
    r3 = (r3 & 8);
    goto loc_804620E0;
}

loc_804620DC:
{
    r3 = 0;
}

loc_804620E0:
{
}

loc_804620E4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804620A8;
    }
}

loc_804620E8:
{
}

loc_804620EC:
{
    r5 = 1;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(104))) {
        goto loc_80462120;
    }
}

loc_804620F4:
{
}

loc_804620F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(108))) {
        goto loc_80462148;
    }
}

loc_804620FC:
{
}

loc_80462100:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(76))) {
        goto loc_80462170;
    }
}

loc_80462104:
{
}

loc_80462108:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(106))) {
        goto loc_8046217C;
    }
}

loc_8046210C:
{
}

loc_80462110:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(116))) {
        goto loc_80462188;
    }
}

loc_80462114:
{
}

loc_80462118:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(122))) {
        goto loc_80462194;
    }
}

loc_8046211C:
{
    goto loc_804621A0;
}

loc_80462120:
{
    r3 = MemoryInline::FlatRead16((r31 + 2));
    r4 = 2;
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r4));
}

loc_80462130:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(104))) {
        goto loc_804621A4;
    }
}

loc_80462134:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r0));
    r0 = r3;
    r31 = (r31 + 2);
    goto loc_804621A4;
}

loc_80462148:
{
    r3 = MemoryInline::FlatRead16((r31 + 2));
    r4 = 3;
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r4));
}

loc_80462158:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(108))) {
        goto loc_804621A4;
    }
}

loc_8046215C:
{
    r0 = 4;
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r0));
    r0 = r3;
    r31 = (r31 + 2);
    goto loc_804621A4;
}

loc_80462170:
{
    r3 = 9;
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r3));
    goto loc_804621A4;
}

loc_8046217C:
{
    r3 = 6;
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r3));
    goto loc_804621A4;
}

loc_80462188:
{
    r3 = 8;
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r3));
    goto loc_804621A4;
}

loc_80462194:
{
    r3 = 7;
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r3));
    goto loc_804621A4;
}

loc_804621A0:
{
    r5 = 0;
}

loc_804621A4:
{
}

loc_804621A8:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_804621B0;
    }
}

loc_804621AC:
{
    r31 = (r31 + 2);
    r0 = MemoryInline::FlatRead16(r31);
}

loc_804621B0:
{
    r3 = (r0 & 65535);
    MemoryInline::FlatWriteRam16((r1 + 14), static_cast<uint16_t>(r0));
    r0 = (r3 + -65);
}

loc_804621C0:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(55))) {
        goto loc_804623CC;
    }
}

loc_804621C4:
{
    r3 = 0x80610000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r3 + -1192);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x8046226Cu:
        goto loc_8046226C;
        break;
    case 0x804623CCu:
        goto loc_804623CC;
        break;
    case 0x804622D0u:
        goto loc_804622D0;
        break;
    case 0x80462220u:
        goto loc_80462220;
        break;
    case 0x804622BCu:
        goto loc_804622BC;
        break;
    case 0x804621DCu:
        goto loc_804621DC;
        break;
    case 0x80462348u:
        goto loc_80462348;
        break;
    case 0x804623B4u:
        goto loc_804623B4;
        break;
    case 0x80462324u:
        goto loc_80462324;
        break;
    case 0x80462384u:
        goto loc_80462384;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_804621DC:
{
    r0 = MemoryInline::FlatRead8((r1 + 12));
}

loc_804621E4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(9))) {
        goto loc_804621F0;
    }
}

loc_804621E8:
{
    r0 = 4;
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r0));
}

loc_804621F0:
{
    r0 = MemoryInline::FlatRead8((r1 + 10));
}

loc_804621F8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80462208;
    }
}

loc_804621FC:
{
    r0 = 1;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    goto loc_804623D8;
}

loc_80462208:
{
    r0 = MemoryInline::FlatRead8((r1 + 8));
}

loc_80462210:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_804623D8;
    }
}

loc_80462214:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    goto loc_804623D8;
}

loc_80462220:
{
    r3 = MemoryInline::FlatRead8((r1 + 12));
    r0 = (r3 + 250);
    r0 = (r0 & 255);
}

loc_80462230:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_80462244;
    }
}

loc_80462234:
{
}

loc_80462238:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(2))) {
        goto loc_80462244;
    }
}

loc_8046223C:
{
}

loc_80462240:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(4))) {
        goto loc_80462254;
    }
}

loc_80462244:
{
    r3 = 65536;
    r0 = (r3 + -1);
    MemoryInline::FlatWriteRam16((r1 + 14), static_cast<uint16_t>(r0));
    goto loc_804623D8;
}

loc_80462254:
{
    r0 = MemoryInline::FlatRead8((r1 + 10));
}

loc_8046225C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804623D8;
    }
}

loc_80462260:
{
    r0 = 6;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    goto loc_804623D8;
}

loc_8046226C:
{
    r0 = MemoryInline::FlatRead8((r1 + 10));
}

loc_80462274:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80462280;
    }
}

loc_80462278:
{
    r0 = 13;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
}

loc_80462280:
{
    r3 = MemoryInline::FlatRead8((r1 + 12));
    r0 = (r3 + 250);
    r0 = (r0 & 255);
}

loc_80462290:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_804622AC;
    }
}

loc_80462294:
{
    r0 = (r3 + 255);
    r0 = (r0 & 255);
}

loc_804622A0:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_804622AC;
    }
}

loc_804622A4:
{
}

loc_804622A8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(4))) {
        goto loc_804623D8;
    }
}

loc_804622AC:
{
    r3 = 65536;
    r0 = (r3 + -1);
    MemoryInline::FlatWriteRam16((r1 + 14), static_cast<uint16_t>(r0));
    goto loc_804623D8;
}

loc_804622BC:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
}

loc_804622C4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804622D0;
    }
}

loc_804622C8:
{
    r0 = 1;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
}

loc_804622D0:
{
    r3 = MemoryInline::FlatRead8((r1 + 12));
    r0 = (r3 + 250);
    r0 = (r0 & 255);
}

loc_804622E0:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_804622FC;
    }
}

loc_804622E4:
{
    r0 = (r3 + 255);
    r0 = (r0 & 255);
}

loc_804622F0:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_804622FC;
    }
}

loc_804622F4:
{
}

loc_804622F8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(4))) {
        goto loc_8046230C;
    }
}

loc_804622FC:
{
    r3 = 65536;
    r0 = (r3 + -1);
    MemoryInline::FlatWriteRam16((r1 + 14), static_cast<uint16_t>(r0));
    goto loc_804623D8;
}

loc_8046230C:
{
    r0 = MemoryInline::FlatRead8((r1 + 10));
}

loc_80462314:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804623D8;
    }
}

loc_80462318:
{
    r0 = 6;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    goto loc_804623D8;
}

loc_80462324:
{
    r5 = 3;
    r4 = 1;
    r3 = 120;
    r0 = 8;
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam16((r1 + 14), static_cast<uint16_t>(r3));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    goto loc_804623D8;
}

loc_80462348:
{
    r3 = MemoryInline::FlatRead8((r1 + 12));
}

loc_80462350:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(3))) {
        goto loc_80462360;
    }
}

loc_80462354:
{
    r0 = 5;
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r0));
    goto loc_804623D8;
}

loc_80462360:
{
    r0 = MemoryInline::FlatRead8((r1 + 10));
}

loc_80462368:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80462374;
    }
}

loc_8046236C:
{
}

loc_80462370:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804623D8;
    }
}

loc_80462374:
{
    r3 = 65536;
    r0 = (r3 + -1);
    MemoryInline::FlatWriteRam16((r1 + 14), static_cast<uint16_t>(r0));
    goto loc_804623D8;
}

loc_80462384:
{
    r0 = MemoryInline::FlatRead8((r1 + 12));
}

loc_8046238C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_8046239C;
    }
}

loc_80462390:
{
    r0 = 5;
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r0));
    goto loc_804623D8;
}

loc_8046239C:
{
}

loc_804623A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804623D8;
    }
}

loc_804623A4:
{
    r3 = 65536;
    r0 = (r3 + -1);
    MemoryInline::FlatWriteRam16((r1 + 14), static_cast<uint16_t>(r0));
    goto loc_804623D8;
}

loc_804623B4:
{
    r0 = MemoryInline::FlatRead8((r1 + 12));
}

loc_804623BC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(9))) {
        goto loc_804623D8;
    }
}

loc_804623C0:
{
    r0 = 4;
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r0));
    goto loc_804623D8;
}

loc_804623CC:
{
    r3 = 65536;
    r0 = (r3 + -1);
    MemoryInline::FlatWriteRam16((r1 + 14), static_cast<uint16_t>(r0));
}

loc_804623D8:
{
    r6 = MemoryInline::FlatRead32((r1 + 8));
    r3 = (r31 + 2);
    r5 = MemoryInline::FlatRead32((r1 + 12));
    r4 = MemoryInline::FlatRead32((r1 + 16));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    MemoryInline::FlatWrite32(r30, r6);
    MemoryInline::FlatWrite32((r30 + 4), r5);
    MemoryInline::FlatWrite32((r30 + 8), r4);
    MemoryInline::FlatWrite32((r30 + 12), r0);
}

loc_804623FC:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    ctx->gpr[29] = r29_entry;
    ctx->gpr[30] = r30_entry;
    ctx->gpr[31] = r31_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80461E88(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80461E88_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000FFB gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80461E88 func_80461E88 preserves=true fpr_mask=0x00000000
