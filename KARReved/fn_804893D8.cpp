//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80485180.hpp"



void fn_804893D8(PPC::Runtime::GCContext* context)
{
/*804893D8 004861D8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*804893DC 004861DC*/ PPC::Runtime::ASM::mflr(context->r0);
/*804893E0 004861E0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*804893E4 004861E4*/ PPC::Runtime::ASM::bl(fn_80485180);
/*804893E8 004861E8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*804893EC 004861EC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*804893F0 004861F0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*804893F4 004861F4*/ PPC::Runtime::ASM::blr();
}