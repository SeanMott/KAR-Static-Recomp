//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8019FEE0.hpp"



void fn_801BF938(PPC::Runtime::GCContext* context)
{
/*801BF938 001BC738*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801BF93C 001BC73C*/ PPC::Runtime::ASM::mflr(context->r0);
/*801BF940 001BC740*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801BF944 001BC744*/ PPC::Runtime::ASM::bl(fn_8019FEE0);
/*801BF948 001BC748*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801BF94C 001BC74C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801BF950 001BC750*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801BF954 001BC754*/ PPC::Runtime::ASM::blr();
}