//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8018C2E4.hpp"



void fn_80252248(PPC::Runtime::GCContext* context)
{
/*80252248 0024F048*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8025224C 0024F04C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80252250 0024F050*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80252254 0024F054*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x148, context->r3));
/*80252258 0024F058*/ PPC::Runtime::ASM::bl(fn_8018C2E4);
/*8025225C 0024F05C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80252260 0024F060*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80252264 0024F064*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80252268 0024F068*/ PPC::Runtime::ASM::blr();
}