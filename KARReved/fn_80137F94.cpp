//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80175570.hpp"



void fn_80137F94(PPC::Runtime::GCContext* context)
{
/*80137F94 00134D94*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80137F98 00134D98*/ PPC::Runtime::ASM::mflr(context->r0);
/*80137F9C 00134D9C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80137FA0 00134DA0*/ PPC::Runtime::ASM::bl(fn_80175570);
/*80137FA4 00134DA4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80137FA8 00134DA8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80137FAC 00134DAC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80137FB0 00134DB0*/ PPC::Runtime::ASM::blr();
}