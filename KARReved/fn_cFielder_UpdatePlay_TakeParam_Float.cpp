//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8045DC24.hpp"



void fn_cFielder_UpdatePlay_TakeParam_Float(PPC::Runtime::GCContext* context)
{
/*8045F838 0045C638*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8045F83C 0045C63C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8045F840 0045C640*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8045F844 0045C644*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r3));
/*8045F848 0045C648*/ PPC::Runtime::ASM::bl(fn_8045DC24);
/*8045F84C 0045C64C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8045F850 0045C650*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8045F854 0045C654*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8045F858 0045C658*/ PPC::Runtime::ASM::blr();
}