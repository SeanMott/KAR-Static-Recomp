//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80172990.hpp"



void fn_80137A54(PPC::Runtime::GCContext* context)
{
/*80137A54 00134854*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80137A58 00134858*/ PPC::Runtime::ASM::mflr(context->r0);
/*80137A5C 0013485C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80137A60 00134860*/ PPC::Runtime::ASM::bl(fn_80172990);
/*80137A64 00134864*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80137A68 00134868*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80137A6C 0013486C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80137A70 00134870*/ PPC::Runtime::ASM::blr();
}