//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80254058.hpp"



void fn_8025FAF8(PPC::Runtime::GCContext* context)
{
/*8025FAF8 0025C8F8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8025FAFC 0025C8FC*/ PPC::Runtime::ASM::mflr(context->r0);
/*8025FB00 0025C900*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025FB04 0025C904*/ PPC::Runtime::ASM::bl(fn_80254058);
/*8025FB08 0025C908*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025FB0C 0025C90C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8025FB10 0025C910*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8025FB14 0025C914*/ PPC::Runtime::ASM::blr();
}