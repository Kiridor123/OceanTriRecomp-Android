#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8041407C(CpuContext* ctx);
extern "C" uint64_t func_8041407C_ra38_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);

extern "C" uint64_t func_804140E8_ra38_1e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x804140E8u);
    goto loc_804140E8;

loc_804140E8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    ctx->lr = 0x804140F8u;
    if constexpr (KnownRegArgsCpuCall<0x8041407Cu>(&func_8041407C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_8041407C_57E = func_8041407C_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_8041407C_57E);
        r4 = static_cast<uint32_t>(regargs_result_8041407C_57E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8041407Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        ctr = ctx->ctr;
    }
}

loc_804140FC:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(176))) {
        goto loc_80414288;
    }
}

loc_80414100:
{
    r4 = 0x80600000u;
    r4 = (r4 + 11640);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r4_addr_1 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_1);
    ctr = r4;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x80414288u:
        goto loc_80414288;
        break;
    case 0x804141B8u:
        goto loc_804141B8;
        break;
    case 0x80414140u:
        goto loc_80414140;
        break;
    case 0x80414270u:
        goto loc_80414270;
        break;
    case 0x80414118u:
        goto loc_80414118;
        break;
    case 0x80414120u:
        goto loc_80414120;
        break;
    case 0x80414130u:
        goto loc_80414130;
        break;
    case 0x80414138u:
        goto loc_80414138;
        break;
    case 0x80414148u:
        goto loc_80414148;
        break;
    case 0x80414150u:
        goto loc_80414150;
        break;
    case 0x80414158u:
        goto loc_80414158;
        break;
    case 0x80414160u:
        goto loc_80414160;
        break;
    case 0x80414168u:
        goto loc_80414168;
        break;
    case 0x80414170u:
        goto loc_80414170;
        break;
    case 0x80414180u:
        goto loc_80414180;
        break;
    case 0x80414190u:
        goto loc_80414190;
        break;
    case 0x80414198u:
        goto loc_80414198;
        break;
    case 0x804141A8u:
        goto loc_804141A8;
        break;
    case 0x804141B0u:
        goto loc_804141B0;
        break;
    case 0x804141D0u:
        goto loc_804141D0;
        break;
    case 0x804141D8u:
        goto loc_804141D8;
        break;
    case 0x804141E0u:
        goto loc_804141E0;
        break;
    case 0x804141E8u:
        goto loc_804141E8;
        break;
    case 0x804141F8u:
        goto loc_804141F8;
        break;
    case 0x80414200u:
        goto loc_80414200;
        break;
    case 0x80414210u:
        goto loc_80414210;
        break;
    case 0x80414218u:
        goto loc_80414218;
        break;
    case 0x80414230u:
        goto loc_80414230;
        break;
    case 0x80414238u:
        goto loc_80414238;
        break;
    case 0x80414240u:
        goto loc_80414240;
        break;
    case 0x80414248u:
        goto loc_80414248;
        break;
    case 0x80414250u:
        goto loc_80414250;
        break;
    case 0x80414260u:
        goto loc_80414260;
        break;
    case 0x80414178u:
        goto loc_80414178;
        break;
    case 0x80414258u:
        goto loc_80414258;
        break;
    case 0x804141C0u:
        goto loc_804141C0;
        break;
    case 0x80414188u:
        goto loc_80414188;
        break;
    case 0x80414278u:
        goto loc_80414278;
        break;
    case 0x80414228u:
        goto loc_80414228;
        break;
    case 0x80414280u:
        goto loc_80414280;
        break;
    case 0x80414268u:
        goto loc_80414268;
        break;
    case 0x804141A0u:
        goto loc_804141A0;
        break;
    case 0x804141F0u:
        goto loc_804141F0;
        break;
    case 0x80414208u:
        goto loc_80414208;
        break;
    case 0x804141C8u:
        goto loc_804141C8;
        break;
    case 0x80414220u:
        goto loc_80414220;
        break;
    case 0x80414128u:
        goto loc_80414128;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_80414118:
{
    r3 = 1;
    goto loc_8041428C;
}

loc_80414120:
{
    r3 = 2;
    goto loc_8041428C;
}

loc_80414128:
{
    r3 = 3;
    goto loc_8041428C;
}

loc_80414130:
{
    r3 = 4;
    goto loc_8041428C;
}

loc_80414138:
{
    r3 = 5;
    goto loc_8041428C;
}

loc_80414140:
{
    r3 = 6;
    goto loc_8041428C;
}

loc_80414148:
{
    r3 = 7;
    goto loc_8041428C;
}

loc_80414150:
{
    r3 = 8;
    goto loc_8041428C;
}

loc_80414158:
{
    r3 = 9;
    goto loc_8041428C;
}

loc_80414160:
{
    r3 = 10;
    goto loc_8041428C;
}

loc_80414168:
{
    r3 = 11;
    goto loc_8041428C;
}

loc_80414170:
{
    r3 = 12;
    goto loc_8041428C;
}

loc_80414178:
{
    r3 = 13;
    goto loc_8041428C;
}

loc_80414180:
{
    r3 = 14;
    goto loc_8041428C;
}

loc_80414188:
{
    r3 = 15;
    goto loc_8041428C;
}

loc_80414190:
{
    r3 = 16;
    goto loc_8041428C;
}

loc_80414198:
{
    r3 = 17;
    goto loc_8041428C;
}

loc_804141A0:
{
    r3 = 18;
    goto loc_8041428C;
}

loc_804141A8:
{
    r3 = 19;
    goto loc_8041428C;
}

loc_804141B0:
{
    r3 = 21;
    goto loc_8041428C;
}

loc_804141B8:
{
    r3 = 22;
    goto loc_8041428C;
}

loc_804141C0:
{
    r3 = 23;
    goto loc_8041428C;
}

loc_804141C8:
{
    r3 = 24;
    goto loc_8041428C;
}

loc_804141D0:
{
    r3 = 26;
    goto loc_8041428C;
}

loc_804141D8:
{
    r3 = 27;
    goto loc_8041428C;
}

loc_804141E0:
{
    r3 = 28;
    goto loc_8041428C;
}

loc_804141E8:
{
    r3 = 29;
    goto loc_8041428C;
}

loc_804141F0:
{
    r3 = 30;
    goto loc_8041428C;
}

loc_804141F8:
{
    r3 = 31;
    goto loc_8041428C;
}

loc_80414200:
{
    r3 = 32;
    goto loc_8041428C;
}

loc_80414208:
{
    r3 = 33;
    goto loc_8041428C;
}

loc_80414210:
{
    r3 = 34;
    goto loc_8041428C;
}

loc_80414218:
{
    r3 = 35;
    goto loc_8041428C;
}

loc_80414220:
{
    r3 = 36;
    goto loc_8041428C;
}

loc_80414228:
{
    r3 = 37;
    goto loc_8041428C;
}

loc_80414230:
{
    r3 = 39;
    goto loc_8041428C;
}

loc_80414238:
{
    r3 = 40;
    goto loc_8041428C;
}

loc_80414240:
{
    r3 = 41;
    goto loc_8041428C;
}

loc_80414248:
{
    r3 = 42;
    goto loc_8041428C;
}

loc_80414250:
{
    r3 = 43;
    goto loc_8041428C;
}

loc_80414258:
{
    r3 = 44;
    goto loc_8041428C;
}

loc_80414260:
{
    r3 = 45;
    goto loc_8041428C;
}

loc_80414268:
{
    r3 = 46;
    goto loc_8041428C;
}

loc_80414270:
{
    r3 = 47;
    goto loc_8041428C;
}

loc_80414278:
{
    r3 = 49;
    goto loc_8041428C;
}

loc_80414280:
{
    r3 = 50;
    goto loc_8041428C;
}

loc_80414288:
{
    r3 = 48;
}

loc_8041428C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804140E8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804140E8_ra38_1e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFB gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x0000001E fpr_write=0x0000001E fpr_return=0x00000002 cr_read=0x23 cr_write=0x23 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804140E8 func_804140E8 preserves=true fpr_mask=0x00000000
