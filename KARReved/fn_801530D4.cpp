//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_8013120C.hpp"
#include "fn_80059520.hpp"



void fn_801530D4(PPC::Runtime::GCContext* context)
{
/*801530D4 0014FED4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801530D8 0014FED8*/ PPC::Runtime::ASM::mflr(context->r0);
/*801530DC 0014FEDC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801530E0 0014FEE0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801530E4 0014FEE4*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*801530E8 0014FEE8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801530EC 0014FEEC*/ PPC::Runtime::ASM::bl(fn_8013120C);
/*801530F0 0014FEF0*/ PPC::Runtime::ASM::lis(context->r4, String_Debug_ "ScMenSelplyCursor2_scene_model" Get_MemoryOffset_HighBit);
/*801530F4 0014FEF4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*801530F8 0014FEF8*/ PPC::Runtime::ASM::addi(context->r5, context->r4, String_Debug_ "ScMenSelplyCursor2_scene_model" Get_MemoryOffset_LowBit);
/*801530FC 0014FEFC*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*80153100 0014FF00*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x5a8);
/*80153104 0014FF04*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80153108 0014FF08*/ PPC::Runtime::ASM::bl(fn_80059520);
/*8015310C 0014FF0C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80153110 0014FF10*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80153114 0014FF14*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80153118 0014FF18*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8015311C 0014FF1C*/ PPC::Runtime::ASM::blr();
}