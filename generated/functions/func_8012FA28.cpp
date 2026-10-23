#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80126098(CpuContext* ctx);
extern "C" uint64_t func_80126098_ra8_0_18_0(CpuContext*, uint32_t);

extern "C" void func_8012FA28(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
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

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8012FA28;

loc_8012FA28:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r30 = r4;
    if constexpr (KnownRegArgsCpuCall<0x80126098u>(&func_80126098)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80126098_4A7 = func_80126098_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_80126098_4A7);
        r4 = static_cast<uint32_t>(regargs_result_80126098_4A7 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80126098u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r31 = MemoryInline::FlatRead32((r3 + 144));
}

loc_8012FA54:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_8012FBF0;
    }
}

loc_8012FA58:
{
    goto loc_8012FBE0;
}

loc_8012FA5C:
{
}

loc_8012FA60:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(r3))) {
        goto loc_8012FBDC;
    }
}

loc_8012FA64:
{
    r3 = 0;
    r0 = MemoryInline::FlatRead16((r31 + 4));
}

loc_8012FA70:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8012FAA8;
    }
}

loc_8012FA74:
{
}

loc_8012FA78:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8012FAC4;
    }
}

loc_8012FA7C:
{
}

loc_8012FA80:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_8012FAEC;
    }
}

loc_8012FA84:
{
}

loc_8012FA88:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_8012FB18;
    }
}

loc_8012FA8C:
{
}

loc_8012FA90:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_8012FB38;
    }
}

loc_8012FA94:
{
}

loc_8012FA98:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_8012FB5C;
    }
}

loc_8012FA9C:
{
}

loc_8012FAA0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(7))) {
        goto loc_8012FB8C;
    }
}

loc_8012FAA4:
{
    goto loc_8012FBA4;
}

loc_8012FAA8:
{
    r0 = MemoryInline::FlatRead8((r29 + 1890));
}

loc_8012FAB0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8012FABC;
    }
}

loc_8012FAB4:
{
    r3 = 1;
    goto loc_8012FBA4;
}

loc_8012FABC:
{
    r3 = 0;
    goto loc_8012FBA4;
}

loc_8012FAC4:
{
    r3 = r29;
    r0 = MemoryInline::FlatRead32((r31 + 8));
    r4 = (r0 & 65535);
    // inline leaf 0x801357AC (7 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 2102));
    r0 = (r4 & 65535);
    r3 = (r3 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_5 & 1);
    // end of inlined leaf 0x801357AC
}

loc_8012FAD8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8012FAE4;
    }
}

loc_8012FADC:
{
    r3 = 1;
    goto loc_8012FBA4;
}

loc_8012FAE4:
{
    r3 = 0;
    goto loc_8012FBA4;
}

loc_8012FAEC:
{
    r0 = MemoryInline::FlatRead8((r29 + 482));
}

loc_8012FAF4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_8012FB08;
    }
}

loc_8012FAF8:
{
    r3 = r29;
    // inline leaf 0x80130168 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead16((r3 + 552));
    r3 = (r0 & 1);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & 1);
    // end of inlined leaf 0x80130168
}

loc_8012FB04:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8012FB10;
    }
}

loc_8012FB08:
{
    r3 = 1;
    goto loc_8012FBA4;
}

loc_8012FB10:
{
    r3 = 0;
    goto loc_8012FBA4;
}

loc_8012FB18:
{
    r3 = MemoryInline::FlatRead8((r29 + 10));
    r0 = MemoryInline::FlatRead32((r31 + 8));
}

loc_8012FB24:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_8012FB30;
    }
}

loc_8012FB28:
{
    r3 = 1;
    goto loc_8012FBA4;
}

loc_8012FB30:
{
    r3 = 0;
    goto loc_8012FBA4;
}

loc_8012FB38:
{
    r3 = MemoryInline::FlatRead32((r31 + 8));
    r0 = MemoryInline::FlatRead8((r29 + 10));
    r0 = (r3 & r0);
}

loc_8012FB48:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_8012FB54;
    }
}

loc_8012FB4C:
{
    r3 = 1;
    goto loc_8012FBA4;
}

loc_8012FB54:
{
    r3 = 0;
    goto loc_8012FBA4;
}

loc_8012FB5C:
{
    r3 = r29;
    r0 = MemoryInline::FlatRead32((r31 + 8));
    r4 = (r0 & 255);
    // inline leaf 0x8011EA40 (5 guest instruction(s))
    r0 = (r4 & 255);
    r0 = (r0 * 6);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 2104));
    // end of inlined leaf 0x8011EA40
    r3 = (r3 & 255);
    r0 = MemoryInline::FlatRead32((r31 + 12));
}

loc_8012FB78:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_8012FB84;
    }
}

loc_8012FB7C:
{
    r3 = 1;
    goto loc_8012FBA4;
}

loc_8012FB84:
{
    r3 = 0;
    goto loc_8012FBA4;
}

loc_8012FB8C:
{
    r3 = MemoryInline::FlatRead8((r29 + 1889));
    r0 = MemoryInline::FlatRead32((r31 + 8));
    r3 = (r3 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
}

loc_8012FBA4:
{
    r0 = MemoryInline::FlatRead16((r31 + 6));
}

loc_8012FBAC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8012FBBC;
    }
}

loc_8012FBB0:
{
}

loc_8012FBB4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8012FBCC;
    }
}

loc_8012FBB8:
{
    goto loc_8012FBDC;
}

loc_8012FBBC:
{
}

loc_8012FBC0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8012FBDC;
    }
}

loc_8012FBC4:
{
    r3 = 0;
    goto loc_8012FBF4;
}

loc_8012FBCC:
{
}

loc_8012FBD0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8012FBDC;
    }
}

loc_8012FBD4:
{
    r3 = 0;
    goto loc_8012FBF4;
}

loc_8012FBDC:
{
    r31 = (r31 + 16);
}

loc_8012FBE0:
{
    r3 = MemoryInline::FlatRead32(r31);
    r0 = (r3 + 65536);
}

loc_8012FBEC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_8012FA5C;
    }
}

loc_8012FBF0:
{
    r3 = 1;
}

loc_8012FBF4:
{
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

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8012FA28 func_8012FA28 preserves=true fpr_mask=0x00000000
