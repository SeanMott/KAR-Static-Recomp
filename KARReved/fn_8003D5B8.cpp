//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_gmGetGlobalP.hpp"



void fn_8003D5B8(PPC::Runtime::GCContext* context)
{
/*8003D5B8 0003A3B8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8003D5BC 0003A3BC*/ PPC::Runtime::ASM::mflr(context->r0);
/*8003D5C0 0003A3C0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8003D5C4 0003A3C4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8003D5C8 0003A3C8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8003D5CC 0003A3CC*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*8003D5D0 0003A3D0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x35d, context->r3));
/*8003D5D4 0003A3D4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x35e, context->r3));
/*8003D5D8 0003A3D8*/ PPC::Runtime::ASM::stb(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x35d, context->r3));
/*8003D5DC 0003A3DC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8003D5E0 0003A3E0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8003D5E4 0003A3E4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8003D5E8 0003A3E8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8003D5EC 0003A3EC*/ PPC::Runtime::ASM::blr();
}