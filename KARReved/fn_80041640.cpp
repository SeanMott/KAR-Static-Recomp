//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_gmGetClearcheckerP.hpp"



void fn_80041640(PPC::Runtime::GCContext* context)
{
/*80041640 0003E440*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80041644 0003E444*/ PPC::Runtime::ASM::mflr(context->r0);
/*80041648 0003E448*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8004164C 0003E44C*/ PPC::Runtime::ASM::bl(fn_gmGetClearcheckerP);
/*80041650 0003E450*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80041654 0003E454*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x5bc);
/*80041658 0003E458*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8004165C 0003E45C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80041660 0003E460*/ PPC::Runtime::ASM::blr();
}