//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8019FC60.hpp"



void fn_801B450C(PPC::Runtime::GCContext* context)
{
/*801B450C 001B130C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801B4510 001B1310*/ PPC::Runtime::ASM::mflr(context->r0);
/*801B4514 001B1314*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B4518 001B1318*/ PPC::Runtime::ASM::bl(fn_8019FC60);
/*801B451C 001B131C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B4520 001B1320*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801B4524 001B1324*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801B4528 001B1328*/ PPC::Runtime::ASM::blr();
}