//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801FF8D8.hpp"



void fn_80215D8C(PPC::Runtime::GCContext* context)
{
/*80215D8C 00212B8C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80215D90 00212B90*/ PPC::Runtime::ASM::mflr(context->r0);
/*80215D94 00212B94*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80215D98 00212B98*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DD878 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80215D9C 00212B9C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r4));
/*80215DA0 00212BA0*/ PPC::Runtime::ASM::bl(fn_801FF8D8);
/*80215DA4 00212BA4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80215DA8 00212BA8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80215DAC 00212BAC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80215DB0 00212BB0*/ PPC::Runtime::ASM::blr();
}