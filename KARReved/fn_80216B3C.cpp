//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80205A60.hpp"



void fn_80216B3C(PPC::Runtime::GCContext* context)
{
/*80216B3C 0021393C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80216B40 00213940*/ PPC::Runtime::ASM::mflr(context->r0);
/*80216B44 00213944*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80216B48 00213948*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80216B4C 0021394C*/ PPC::Runtime::ASM::bl(fn_80205A60);
/*80216B50 00213950*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80216B54 00213954*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80216B58 00213958*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80216B5C 0021395C*/ PPC::Runtime::ASM::blr();
}