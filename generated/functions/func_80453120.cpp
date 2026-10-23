#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80453120_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r5_addr_4 = 0;
    uint32_t r5_addr_5 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r6_addr_3 = 0;
    uint32_t r6_addr_4 = 0;
    uint32_t r6_addr_5 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
    uint32_t r9_rot_3 = 0;
    uint32_t r9_rot_4 = 0;
    uint32_t r9_rot_5 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    goto loc_80453120;

loc_80453120:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r9 = MemoryInline::FlatRead32((r13 + -16440));
}

loc_80453130:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8045313C;
    }
}

loc_80453134:
{
    r3 = 0;
    goto loc_80453218;
}

loc_8045313C:
{
    r10 = (r9 + 65536);
    r10 = (r10 + -29308);
    r12 = 0;
    r11 = 0;
    r0 = 64;
    ctr = r0;
}

loc_80453154:
{
    r0 = MemoryInline::FlatRead8((r10 + 30));
}

loc_8045315C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80453208;
    }
}

loc_80453160:
{
    r31 = 0;
    r0 = MemoryInline::FlatRead8((r10 + 31));
}

loc_8045316C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80453184;
    }
}

loc_80453170:
{
}

loc_80453174:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8045318C;
    }
}

loc_80453178:
{
}

loc_8045317C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_804531B0;
    }
}

loc_80453180:
{
    goto loc_804531E0;
}

loc_80453184:
{
    r31 = 1;
    goto loc_804531E0;
}

loc_8045318C:
{
    r9 = (r4 & 65535);
    r0 = MemoryInline::FlatRead16((r10 + 32));
}

loc_80453198:
{
    if ((static_cast<uint32_t>(r9) < static_cast<uint32_t>(r0))) {
        goto loc_804531E0;
    }
}

loc_8045319C:
{
    r0 = MemoryInline::FlatRead16((r10 + 34));
}

loc_804531A4:
{
    if ((static_cast<uint32_t>(r9) > static_cast<uint32_t>(r0))) {
        goto loc_804531E0;
    }
}

loc_804531A8:
{
    r31 = 1;
    goto loc_804531E0;
}

loc_804531B0:
{
    r0 = MemoryInline::FlatRead16((r10 + 32));
}

loc_804531B8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r7))) {
        goto loc_804531E0;
    }
}

loc_804531BC:
{
    r9_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r9 = (r9_rot_2 & -2);
    r5_addr_2 = (r5 + r9);
    r0 = MemoryInline::FlatRead16(r5_addr_2);
}

loc_804531C8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804531D0;
    }
}

loc_804531CC:
{
    r31 = 1;
}

loc_804531D0:
{
    r6_addr_2 = (r6 + r9);
    r0 = MemoryInline::FlatRead16(r6_addr_2);
}

loc_804531D8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804531E0;
    }
}

loc_804531DC:
{
    r31 = 1;
}

loc_804531E0:
{
}

loc_804531E4:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(1))) {
        goto loc_80453208;
    }
}

loc_804531E8:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r11)));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r3 = (r3 + 1);
    r12 = (r12 + 1);
}

loc_804531FC:
{
    if ((static_cast<int32_t>(r8) > static_cast<int32_t>(r12))) {
        goto loc_80453208;
    }
}

loc_80453200:
{
    r3 = r12;
    goto loc_80453218;
}

loc_80453208:
{
    r11 = (r11 + 1);
    r10 = (r10 + 36);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80453154;
    }
}

loc_80453214:
{
    r3 = r12;
}

loc_80453218:
{
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    return r3;
}

}

extern "C" void func_80453120(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80453120_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFB gpr_write=0x00001E0B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80453120 func_80453120 preserves=true fpr_mask=0x00000000
