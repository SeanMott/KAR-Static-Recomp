//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8022D230.hpp"
#include "fn_gmGetGlobalP.hpp"
#include "fn_8022D128.hpp"



void fn_8001530C(PPC::Runtime::GCContext* context)
{
/*8001530C 0001210C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x40, context->r1));
/*80015310 00012110*/ PPC::Runtime::ASM::mflr(context->r0);
/*80015314 00012114*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*80015318 00012118*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*8001531C 0001211C*/ PPC::Runtime::ASM::li(context->r31, 0x0);
/*80015320 00012120*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*80015324 00012124*/ PPC::Runtime::ASM::li(context->r30, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80015328, 0x80015328) //this is a jump label
/*80015328 00012128*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8001532C 0001212C*/ PPC::Runtime::ASM::bl(fn_8022D230);
/*80015330 00012130*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80015334 00012134*/ PPC::Runtime::ASM::beq(.L_80015384);
/*80015338 00012138*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*8001533C 0001213C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DE818 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80015340 00012140*/ PPC::Runtime::ASM::addi(context->r5, context->r3, 0xa94);
/*80015344 00012144*/ PPC::Runtime::ASM::addi(context->r0, context->r31, 0x14);
/*80015348 00012148*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8001534C 0001214C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80015350 00012150*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*80015354 00012154*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80015358 00012158*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8001535C 0001215C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80015360 00012160*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80015364 00012164*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80015368 00012168*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8001536C 0001216C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80015370 00012170*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*80015374 00012174*/ PPC::Runtime::ASM::lfsx(context->f0, context->r5, context->r0);
/*80015378 00012178*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8001537C 0001217C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80015380 00012180*/ PPC::Runtime::ASM::bl(fn_8022D128);
RUNTIME_PPC_JUMP_LABEL(.L_80015384, 0x80015384) //this is a jump label
/*80015384 00012184*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x1);
/*80015388 00012188*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x4);
/*8001538C 0001218C*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x5);
/*80015390 00012190*/ PPC::Runtime::ASM::blt(.L_80015328);
/*80015394 00012194*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*80015398 00012198*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*8001539C 0001219C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*800153A0 000121A0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800153A4 000121A4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x40);
/*800153A8 000121A8*/ PPC::Runtime::ASM::blr();
}