//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8019FF24.hpp"



void fn_801C337C(PPC::Runtime::GCContext* context)
{
/*801C337C 001C017C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801C3380 001C0180*/ PPC::Runtime::ASM::mflr(context->r0);
/*801C3384 001C0184*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C3388 001C0188*/ PPC::Runtime::ASM::bl(fn_8019FF24);
/*801C338C 001C018C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C3390 001C0190*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801C3394 001C0194*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801C3398 001C0198*/ PPC::Runtime::ASM::blr();
}