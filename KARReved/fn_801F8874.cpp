//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801DD17C.hpp"



void fn_801F8874(PPC::Runtime::GCContext* context)
{
/*801F8874 001F5674*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801F8878 001F5678*/ PPC::Runtime::ASM::mflr(context->r0);
/*801F887C 001F567C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E20F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801F8880 001F5680*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801F8884 001F5684*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r3));
/*801F8888 001F5688*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x654, context->r3));
/*801F888C 001F568C*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 3);
/*801F8890 001F5690*/ PPC::Runtime::ASM::add(context->r4, context->r4, context->r0);
/*801F8894 001F5694*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r4));
/*801F8898 001F5698*/ PPC::Runtime::ASM::bl(fn_801DD17C);
/*801F889C 001F569C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801F88A0 001F56A0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801F88A4 001F56A4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801F88A8 001F56A8*/ PPC::Runtime::ASM::blr();
}