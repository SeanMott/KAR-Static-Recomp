//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8019FD7C.hpp"



void fn_801BF63C(PPC::Runtime::GCContext* context)
{
/*801BF63C 001BC43C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801BF640 001BC440*/ PPC::Runtime::ASM::mflr(context->r0);
/*801BF644 001BC444*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801BF648 001BC448*/ PPC::Runtime::ASM::bl(fn_8019FD7C);
/*801BF64C 001BC44C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801BF650 001BC450*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801BF654 001BC454*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801BF658 001BC458*/ PPC::Runtime::ASM::blr();
}