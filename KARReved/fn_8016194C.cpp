//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80131234.hpp"
#include "fn_80059520.hpp"



void fn_8016194C(PPC::Runtime::GCContext* context)
{
/*8016194C 0015E74C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80161950 0015E750*/ PPC::Runtime::ASM::mflr(context->r0);
/*80161954 0015E754*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80161958 0015E758*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8016195C 0015E75C*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80161960 0015E760*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80161964 0015E764*/ PPC::Runtime::ASM::bl(fn_80131234);
/*80161968 0015E768*/ PPC::Runtime::ASM::lis(context->r4, String_Debug_ "ScMenLoadingUeride_scene_model" Get_MemoryOffset_HighBit);
/*8016196C 0015E76C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80161970 0015E770*/ PPC::Runtime::ASM::addi(context->r5, context->r4, String_Debug_ "ScMenLoadingUeride_scene_model" Get_MemoryOffset_LowBit);
/*80161974 0015E774*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*80161978 0015E778*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x114);
/*8016197C 0015E77C*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80161980 0015E780*/ PPC::Runtime::ASM::bl(fn_80059520);
/*80161984 0015E784*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80161988 0015E788*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8016198C 0015E78C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80161990 0015E790*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80161994 0015E794*/ PPC::Runtime::ASM::blr();
}