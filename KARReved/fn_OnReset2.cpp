//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_CARDUnmount.hpp"
#include "fn_CARDUnmount.hpp"



void fn_OnReset2(PPC::Runtime::GCContext* context)
{
/*803E30BC 003DFEBC*/ PPC::Runtime::ASM::mflr(context->r0);
/*803E30C0 003DFEC0*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*803E30C4 003DFEC4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*803E30C8 003DFEC8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8, context->r1));
/*803E30CC 003DFECC*/ PPC::Runtime::ASM::bne(.L_803E30F8);
/*803E30D0 003DFED0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803E30D4 003DFED4*/ PPC::Runtime::ASM::bl(fn_CARDUnmount);
/*803E30D8 003DFED8*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x1);
/*803E30DC 003DFEDC*/ PPC::Runtime::ASM::beq(.L_803E30F0);
/*803E30E0 003DFEE0*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*803E30E4 003DFEE4*/ PPC::Runtime::ASM::bl(fn_CARDUnmount);
/*803E30E8 003DFEE8*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x1);
/*803E30EC 003DFEEC*/ PPC::Runtime::ASM::bne(.L_803E30F8);
RUNTIME_PPC_JUMP_LABEL(.L_803E30F0, 0x803E30F0) //this is a jump label
/*803E30F0 003DFEF0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803E30F4 003DFEF4*/ PPC::Runtime::ASM::b(.L_803E30FC);
RUNTIME_PPC_JUMP_LABEL(.L_803E30F8, 0x803E30F8) //this is a jump label
/*803E30F8 003DFEF8*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_803E30FC, 0x803E30FC) //this is a jump label
/*803E30FC 003DFEFC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803E3100 003DFF00*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x8);
/*803E3104 003DFF04*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803E3108 003DFF08*/ PPC::Runtime::ASM::blr();
}