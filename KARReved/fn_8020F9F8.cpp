//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801FED1C.hpp"



void fn_8020F9F8(PPC::Runtime::GCContext* context)
{
/*8020F9F8 0020C7F8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8020F9FC 0020C7FC*/ PPC::Runtime::ASM::mflr(context->r0);
/*8020FA00 0020C800*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8020FA04 0020C804*/ PPC::Runtime::ASM::bl(fn_801FED1C);
/*8020FA08 0020C808*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8020FA0C 0020C80C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8020FA10 0020C810*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8020FA14 0020C814*/ PPC::Runtime::ASM::blr();
}