//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_gmGetGlobalP.hpp"



void fn_8003D644(PPC::Runtime::GCContext* context)
{
/*8003D644 0003A444*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8003D648 0003A448*/ PPC::Runtime::ASM::mflr(context->r0);
/*8003D64C 0003A44C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8003D650 0003A450*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*8003D654 0003A454*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8003D658 0003A458*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x35f, context->r3));
/*8003D65C 0003A45C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8003D660 0003A460*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8003D664 0003A464*/ PPC::Runtime::ASM::blr();
}