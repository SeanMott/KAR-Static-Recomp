//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_gmGetGlobalP.hpp"



void fn_8003EBBC(PPC::Runtime::GCContext* context)
{
/*8003EBBC 0003B9BC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8003EBC0 0003B9C0*/ PPC::Runtime::ASM::mflr(context->r0);
/*8003EBC4 0003B9C4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8003EBC8 0003B9C8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8003EBCC 0003B9CC*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8003EBD0 0003B9D0*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*8003EBD4 0003B9D4*/ PPC::Runtime::ASM::stb(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x388, context->r3));
/*8003EBD8 0003B9D8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8003EBDC 0003B9DC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8003EBE0 0003B9E0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8003EBE4 0003B9E4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8003EBE8 0003B9E8*/ PPC::Runtime::ASM::blr();
}