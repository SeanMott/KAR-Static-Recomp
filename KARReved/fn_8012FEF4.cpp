//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80112044.hpp"
#include "fn_80114F04.hpp"



void fn_8012FEF4(PPC::Runtime::GCContext* context)
{
/*8012FEF4 0012CCF4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8012FEF8 0012CCF8*/ PPC::Runtime::ASM::mflr(context->r0);
/*8012FEFC 0012CCFC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8012FF00 0012CD00*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8012FF04 0012CD04*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8012FF08 0012CD08*/ PPC::Runtime::ASM::bl(fn_80112044);
/*8012FF0C 0012CD0C*/ PPC::Runtime::ASM::slwi(context->r0, context->r31, 2);
/*8012FF10 0012CD10*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*8012FF14 0012CD14*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd4c, context->r3));
/*8012FF18 0012CD18*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8012FF1C 0012CD1C*/ PPC::Runtime::ASM::beq(.L_8012FF24);
/*8012FF20 0012CD20*/ PPC::Runtime::ASM::bl(fn_80114F04);
RUNTIME_PPC_JUMP_LABEL(.L_8012FF24, 0x8012FF24) //this is a jump label
/*8012FF24 0012CD24*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8012FF28 0012CD28*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8012FF2C 0012CD2C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8012FF30 0012CD30*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8012FF34 0012CD34*/ PPC::Runtime::ASM::blr();
}