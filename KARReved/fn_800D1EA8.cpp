//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800D1EE0.hpp"



void fn_800D1EA8(PPC::Runtime::GCContext* context)
{
/*800D1EA8 000CECA8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800D1EAC 000CECAC*/ PPC::Runtime::ASM::mflr(context->r0);
/*800D1EB0 000CECB0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800D1EB4 000CECB4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800D1EB8 000CECB8*/ PPC::Runtime::ASM::lwz(context->r31, STRUCT_BYTE4_COUNT_1805DD6C8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800D1EBC 000CECBC*/ PPC::Runtime::ASM::bl(fn_800D1EE0);
/*800D1EC0 000CECC0*/ PPC::Runtime::ASM::mulli(context->r0, context->r3, 0x1c);
/*800D1EC4 000CECC4*/ PPC::Runtime::ASM::add(context->r3, context->r31, context->r0);
/*800D1EC8 000CECC8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*800D1ECC 000CECCC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800D1ED0 000CECD0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800D1ED4 000CECD4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800D1ED8 000CECD8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800D1EDC 000CECDC*/ PPC::Runtime::ASM::blr();
}