//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_OSResumeThread.hpp"



void fn_8045F6C4(PPC::Runtime::GCContext* context)
{
/*8045F6C4 0045C4C4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8045F6C8 0045C4C8*/ PPC::Runtime::ASM::mflr(context->r0);
/*8045F6CC 0045C4CC*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x78);
/*8045F6D0 0045C4D0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8045F6D4 0045C4D4*/ PPC::Runtime::ASM::bl(fn_OSResumeThread);
/*8045F6D8 0045C4D8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8045F6DC 0045C4DC*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*8045F6E0 0045C4E0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8045F6E4 0045C4E4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8045F6E8 0045C4E8*/ PPC::Runtime::ASM::blr();
}