//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_8013120C.hpp"
#include "fn_80059520.hpp"



void fn_80150E34(PPC::Runtime::GCContext* context)
{
/*80150E34 0014DC34*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80150E38 0014DC38*/ PPC::Runtime::ASM::mflr(context->r0);
/*80150E3C 0014DC3C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80150E40 0014DC40*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80150E44 0014DC44*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80150E48 0014DC48*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80150E4C 0014DC4C*/ PPC::Runtime::ASM::bl(fn_8013120C);
/*80150E50 0014DC50*/ PPC::Runtime::ASM::lis(context->r4, String_Debug_ "ScMenSelplyCursor0_scene_model" Get_MemoryOffset_HighBit);
/*80150E54 0014DC54*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80150E58 0014DC58*/ PPC::Runtime::ASM::addi(context->r5, context->r4, String_Debug_ "ScMenSelplyCursor0_scene_model" Get_MemoryOffset_LowBit);
/*80150E5C 0014DC5C*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*80150E60 0014DC60*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x4dc);
/*80150E64 0014DC64*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80150E68 0014DC68*/ PPC::Runtime::ASM::bl(fn_80059520);
/*80150E6C 0014DC6C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80150E70 0014DC70*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80150E74 0014DC74*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80150E78 0014DC78*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80150E7C 0014DC7C*/ PPC::Runtime::ASM::blr();
}