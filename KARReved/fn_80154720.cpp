//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"



void fn_80154720(PPC::Runtime::GCContext* context)
{
/*80154720 00151520*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80154724 00151524*/ PPC::Runtime::ASM::mflr(context->r0);
/*80154728 00151528*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8015472C 0015152C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80154730 00151530*/ PPC::Runtime::ASM::li(context->r31, 0x0);
/*80154734 00151534*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80154738 00151538*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8015473C 0015153C*/ PPC::Runtime::ASM::li(context->r29, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80154740, 0x80154740) //this is a jump label
/*80154740 00151540*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80154744 00151544*/ PPC::Runtime::ASM::extsb(context->r0, context->r29);
/*80154748 00151548*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*8015474C 0015154C*/ PPC::Runtime::ASM::add(context->r30, context->r3, context->r0);
/*80154750 00151550*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x604, context->r30));
/*80154754 00151554*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80154758 00151558*/ PPC::Runtime::ASM::beq(.L_80154764);
/*8015475C 0015155C*/ PPC::Runtime::ASM::bl(fn_80428F64);
/*80154760 00151560*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x604, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_80154764, 0x80154764) //this is a jump label
/*80154764 00151564*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
/*80154768 00151568*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x4);
/*8015476C 0015156C*/ PPC::Runtime::ASM::blt(.L_80154740);
/*80154770 00151570*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80154774 00151574*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80154778 00151578*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8015477C 0015157C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80154780 00151580*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80154784 00151584*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80154788 00151588*/ PPC::Runtime::ASM::blr();
}