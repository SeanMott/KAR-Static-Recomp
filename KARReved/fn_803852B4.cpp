//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_803852B4(PPC::Runtime::GCContext* context)
{
/*803852B4 003820B4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r3));
/*803852B8 003820B8*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*803852BC 003820BC*/ PPC::Runtime::ASM::add(context->r7, context->r3, context->r0);
/*803852C0 003820C0*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r7));
/*803852C4 003820C4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r3));
/*803852C8 003820C8*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*803852CC 003820CC*/ PPC::Runtime::ASM::add(context->r5, context->r3, context->r0);
/*803852D0 003820D0*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r5));
/*803852D4 003820D4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r3));
/*803852D8 003820D8*/ PPC::Runtime::ASM::add(context->r5, context->r3, context->r0);
/*803852DC 003820DC*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r5));
/*803852E0 003820E0*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r3));
/*803852E4 003820E4*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x1);
/*803852E8 003820E8*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r3));
/*803852EC 003820EC*/ PPC::Runtime::ASM::blr();
}