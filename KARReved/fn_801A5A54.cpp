//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801A2D58.hpp"



void fn_801A5A54(PPC::Runtime::GCContext* context)
{
/*801A5A54 001A2854*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801A5A58 001A2858*/ PPC::Runtime::ASM::mflr(context->r0);
/*801A5A5C 001A285C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801A5A60 001A2860*/ PPC::Runtime::ASM::bl(fn_801A2D58);
/*801A5A64 001A2864*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801A5A68 001A2868*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801A5A6C 001A286C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801A5A70 001A2870*/ PPC::Runtime::ASM::blr();
}