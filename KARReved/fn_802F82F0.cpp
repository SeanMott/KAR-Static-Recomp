//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802D4678.hpp"
#include "fn_802DE0E4.hpp"
#include "fn_802889D0.hpp"
#include "fn_802889D0.hpp"
#include "fn_802889D0.hpp"



void fn_802F82F0(PPC::Runtime::GCContext* context)
{
/*802F82F0 002F50F0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x50, context->r1));
/*802F82F4 002F50F4*/ PPC::Runtime::ASM::mflr(context->r0);
/*802F82F8 002F50F8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*802F82FC 002F50FC*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*802F8300 002F5100*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1)0, context->qr0);
/*802F8304 002F5104*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*802F8308 002F5108*/ PPC::Runtime::ASM::psq_st(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1)0, context->qr0);
/*802F830C 002F510C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*802F8310 002F5110*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*802F8314 002F5114*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*802F8318 002F5118*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*802F831C 002F511C*/ PPC::Runtime::ASM::bl(fn_802D4678);
/*802F8320 002F5120*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*802F8324 002F5124*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802F8328 002F5128*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802F832C 002F512C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r12));
/*802F8330 002F5130*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802F8334 002F5134*/ PPC::Runtime::ASM::bctrl();
/*802F8338 002F5138*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*802F833C 002F513C*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*802F8340 002F5140*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802F8344 002F5144*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802F8348 002F5148*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r12));
/*802F834C 002F514C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802F8350 002F5150*/ PPC::Runtime::ASM::bctrl();
/*802F8354 002F5154*/ PPC::Runtime::ASM::fmr(context->f30, context->f1);
/*802F8358 002F5158*/ PPC::Runtime::ASM::bl(fn_802DE0E4);
/*802F835C 002F515C*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*802F8360 002F5160*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*802F8364 002F5164*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x2120);
/*802F8368 002F5168*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x2124);
/*802F836C 002F516C*/ PPC::Runtime::ASM::bl(fn_802889D0);
/*802F8370 002F5170*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802F8374 002F5174*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*802F8378 002F5178*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x2128);
/*802F837C 002F517C*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*802F8380 002F5180*/ PPC::Runtime::ASM::bl(fn_802889D0);
/*802F8384 002F5184*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802F8388 002F5188*/ PPC::Runtime::ASM::fmr(context->f1, context->f30);
/*802F838C 002F518C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*802F8390 002F5190*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0xc);
/*802F8394 002F5194*/ PPC::Runtime::ASM::bl(fn_802889D0);
/*802F8398 002F5198*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*802F839C 002F519C*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*802F83A0 002F51A0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802F83A4 002F51A4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802F83A8 002F51A8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x120, context->r12));
/*802F83AC 002F51AC*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802F83B0 002F51B0*/ PPC::Runtime::ASM::bctrl();
/*802F83B4 002F51B4*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E3AD4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802F83B8 002F51B8*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*802F83BC 002F51BC*/ PPC::Runtime::ASM::fmuls(context->f3, context->f31, context->f1);
/*802F83C0 002F51C0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r30));
/*802F83C4 002F51C4*/ PPC::Runtime::ASM::fsubs(context->f2, context->f2, context->f31);
/*802F83C8 002F51C8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*802F83CC 002F51CC*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E3B08 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802F83D0 002F51D0*/ PPC::Runtime::ASM::fdivs(context->f2, context->f3, context->f2);
/*802F83D4 002F51D4*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f2);
/*802F83D8 002F51D8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r30));
/*802F83DC 002F51DC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r30));
/*802F83E0 002F51E0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802F83E4 002F51E4*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*802F83E8 002F51E8*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f1);
/*802F83EC 002F51EC*/ PPC::Runtime::ASM::fmuls(context->f1, context->f31, context->f0);
/*802F83F0 002F51F0*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*802F83F4 002F51F4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r30));
/*802F83F8 002F51F8*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f1);
/*802F83FC 002F51FC*/ PPC::Runtime::ASM::bge(.L_802F8408);
/*802F8400 002F5200*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x10);
/*802F8404 002F5204*/ PPC::Runtime::ASM::b(.L_802F840C);
RUNTIME_PPC_JUMP_LABEL(.L_802F8408, 0x802F8408) //this is a jump label
/*802F8408 002F5208*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x38);
RUNTIME_PPC_JUMP_LABEL(.L_802F840C, 0x802F840C) //this is a jump label
/*802F840C 002F520C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802F8410 002F5210*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r30));
/*802F8414 002F5214*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*802F8418 002F5218*/ PPC::Runtime::ASM::addi(context->r3, context->r4, 0x8);
/*802F841C 002F521C*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x20);
/*802F8420 002F5220*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*802F8424 002F5224*/ PPC::Runtime::ASM::bl(fn_PSVECAdd);
/*802F8428 002F5228*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1)0, context->qr0);
/*802F842C 002F522C*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*802F8430 002F5230*/ PPC::Runtime::ASM::psq_l(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1)0, context->qr0);
/*802F8434 002F5234*/ PPC::Runtime::ASM::lfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*802F8438 002F5238*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*802F843C 002F523C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*802F8440 002F5240*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*802F8444 002F5244*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802F8448 002F5248*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x50);
/*802F844C 002F524C*/ PPC::Runtime::ASM::blr();
}