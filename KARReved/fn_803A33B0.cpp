//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8031CBE0.hpp"



void fn_803A33B0(PPC::Runtime::GCContext* context)
{
/*803A33B0 003A01B0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0xe0, context->r1));
/*803A33B4 003A01B4*/ PPC::Runtime::ASM::mflr(context->r0);
/*803A33B8 003A01B8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe4, context->r1));
/*803A33BC 003A01BC*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd0, context->r1));
/*803A33C0 003A01C0*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd8, context->r1)0, context->qr0);
/*803A33C4 003A01C4*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc0, context->r1));
/*803A33C8 003A01C8*/ PPC::Runtime::ASM::psq_st(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc8, context->r1)0, context->qr0);
/*803A33CC 003A01CC*/ PPC::Runtime::ASM::stfd(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0, context->r1));
/*803A33D0 003A01D0*/ PPC::Runtime::ASM::psq_st(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb8, context->r1)0, context->qr0);
/*803A33D4 003A01D4*/ PPC::Runtime::ASM::stfd(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa0, context->r1));
/*803A33D8 003A01D8*/ PPC::Runtime::ASM::psq_st(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa8, context->r1)0, context->qr0);
/*803A33DC 003A01DC*/ PPC::Runtime::ASM::stfd(context->f27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r1));
/*803A33E0 003A01E0*/ PPC::Runtime::ASM::psq_st(context->f27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98, context->r1)0, context->qr0);
/*803A33E4 003A01E4*/ PPC::Runtime::ASM::stfd(context->f26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r1));
/*803A33E8 003A01E8*/ PPC::Runtime::ASM::psq_st(context->f26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r1)0, context->qr0);
/*803A33EC 003A01EC*/ PPC::Runtime::ASM::stfd(context->f25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r1));
/*803A33F0 003A01F0*/ PPC::Runtime::ASM::psq_st(context->f25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1)0, context->qr0);
/*803A33F4 003A01F4*/ PPC::Runtime::ASM::stfd(context->f24, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*803A33F8 003A01F8*/ PPC::Runtime::ASM::psq_st(context->f24, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1)0, context->qr0);
/*803A33FC 003A01FC*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x60);
/*803A3400 003A0200*/ PPC::Runtime::ASM::bl(_savegpr_27);
/*803A3404 003A0204*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*803A3408 003A0208*/ PPC::Runtime::ASM::mr(context->r28, context->r4);
/*803A340C 003A020C*/ PPC::Runtime::ASM::clrlwi(context->r3, context->r5, 24);
/*803A3410 003A0210*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*803A3414 003A0214*/ PPC::Runtime::ASM::bl(fn_GXSetLineWidth);
/*803A3418 003A0218*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*803A341C 003A021C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*803A3420 003A0220*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*803A3424 003A0224*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803A3428 003A0228*/ PPC::Runtime::ASM::bl(fn_GXSetTevColor);
/*803A342C 003A022C*/ PPC::Runtime::ASM::li(context->r3, 0xb0);
/*803A3430 003A0230*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*803A3434 003A0234*/ PPC::Runtime::ASM::li(context->r5, 0x65);
/*803A3438 003A0238*/ PPC::Runtime::ASM::bl(fn_GXBegin);
/*803A343C 003A023C*/ PPC::Runtime::ASM::lfs(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r27));
/*803A3440 003A0240*/ PPC::Runtime::ASM::li(context->r28, 0x0);
/*803A3444 003A0244*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r27));
/*803A3448 003A0248*/ PPC::Runtime::ASM::lis(context->r29, 0x4330);
/*803A344C 003A024C*/ PPC::Runtime::ASM::lfs(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r27));
/*803A3450 003A0250*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r27));
/*803A3454 003A0254*/ PPC::Runtime::ASM::fsubs(context->f26, context->f1, context->f30);
/*803A3458 003A0258*/ PPC::Runtime::ASM::lfd(context->f31, STRUCT_DOUBLE_COUNT_1805E50B0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803A345C 003A025C*/ PPC::Runtime::ASM::fsubs(context->f27, context->f0, context->f29);
/*803A3460 003A0260*/ PPC::Runtime::ASM::lhz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r27));
/*803A3464 003A0264*/ PPC::Runtime::ASM::lfs(context->f25, STRUCT_FLOAT_COUNT_1805E50B8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803A3468 003A0268*/ PPC::Runtime::ASM::lhz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e, context->r27));
/*803A346C 003A026C*/ PPC::Runtime::ASM::lfs(context->f28, STRUCT_FLOAT_COUNT_1805E50A4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_803A3470, 0x803A3470) //this is a jump label
/*803A3470 003A0270*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*803A3474 003A0274*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*803A3478 003A0278*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*803A347C 003A027C*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*803A3480 003A0280*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r12));
/*803A3484 003A0284*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*803A3488 003A0288*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803A348C 003A028C*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f31);
/*803A3490 003A0290*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803A3494 003A0294*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f26);
/*803A3498 003A0298*/ PPC::Runtime::ASM::lfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803A349C 003A029C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803A34A0 003A02A0*/ PPC::Runtime::ASM::fsubs(context->f3, context->f1, context->f31);
/*803A34A4 003A02A4*/ PPC::Runtime::ASM::fdivs(context->f0, context->f0, context->f25);
/*803A34A8 003A02A8*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*803A34AC 003A02AC*/ PPC::Runtime::ASM::lfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*803A34B0 003A02B0*/ PPC::Runtime::ASM::fsubs(context->f2, context->f1, context->f31);
/*803A34B4 003A02B4*/ PPC::Runtime::ASM::fadds(context->f1, context->f30, context->f0);
/*803A34B8 003A02B8*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f2);
/*803A34BC 003A02BC*/ PPC::Runtime::ASM::fdivs(context->f24, context->f0, context->f25);
/*803A34C0 003A02C0*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803A34C4 003A02C4*/ PPC::Runtime::ASM::bctrl();
/*803A34C8 003A02C8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*803A34CC 003A02CC*/ PPC::Runtime::ASM::fsubs(context->f1, context->f1, context->f29);
/*803A34D0 003A02D0*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0xc);
/*803A34D4 003A02D4*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*803A34D8 003A02D8*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*803A34DC 003A02DC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*803A34E0 003A02E0*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f31);
/*803A34E4 003A02E4*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*803A34E8 003A02E8*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f0);
/*803A34EC 003A02EC*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*803A34F0 003A02F0*/ PPC::Runtime::ASM::stfs(context->f24, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803A34F4 003A02F4*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f31);
/*803A34F8 003A02F8*/ PPC::Runtime::ASM::fdivs(context->f1, context->f1, context->f27);
/*803A34FC 003A02FC*/ PPC::Runtime::ASM::stfs(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803A3500 003A0300*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f1);
/*803A3504 003A0304*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803A3508 003A0308*/ PPC::Runtime::ASM::bl(fn_8031CBE0);
/*803A350C 003A030C*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x1);
/*803A3510 003A0310*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x65);
/*803A3514 003A0314*/ PPC::Runtime::ASM::blt(.L_803A3470);
/*803A3518 003A0318*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd8, context->r1)0, context->qr0);
/*803A351C 003A031C*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd0, context->r1));
/*803A3520 003A0320*/ PPC::Runtime::ASM::psq_l(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc8, context->r1)0, context->qr0);
/*803A3524 003A0324*/ PPC::Runtime::ASM::lfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc0, context->r1));
/*803A3528 003A0328*/ PPC::Runtime::ASM::psq_l(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb8, context->r1)0, context->qr0);
/*803A352C 003A032C*/ PPC::Runtime::ASM::lfd(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0, context->r1));
/*803A3530 003A0330*/ PPC::Runtime::ASM::psq_l(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa8, context->r1)0, context->qr0);
/*803A3534 003A0334*/ PPC::Runtime::ASM::lfd(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa0, context->r1));
/*803A3538 003A0338*/ PPC::Runtime::ASM::psq_l(context->f27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98, context->r1)0, context->qr0);
/*803A353C 003A033C*/ PPC::Runtime::ASM::lfd(context->f27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r1));
/*803A3540 003A0340*/ PPC::Runtime::ASM::psq_l(context->f26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r1)0, context->qr0);
/*803A3544 003A0344*/ PPC::Runtime::ASM::lfd(context->f26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r1));
/*803A3548 003A0348*/ PPC::Runtime::ASM::psq_l(context->f25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1)0, context->qr0);
/*803A354C 003A034C*/ PPC::Runtime::ASM::lfd(context->f25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r1));
/*803A3550 003A0350*/ PPC::Runtime::ASM::psq_l(context->f24, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1)0, context->qr0);
/*803A3554 003A0354*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x60);
/*803A3558 003A0358*/ PPC::Runtime::ASM::lfd(context->f24, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*803A355C 003A035C*/ PPC::Runtime::ASM::bl(_restgpr_27);
/*803A3560 003A0360*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe4, context->r1));
/*803A3564 003A0364*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803A3568 003A0368*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0xe0);
/*803A356C 003A036C*/ PPC::Runtime::ASM::blr();
}