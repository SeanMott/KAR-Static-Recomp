//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"



void fn_801871EC(PPC::Runtime::GCContext* context)
{
/*801871EC 00183FEC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*801871F0 00183FF0*/ PPC::Runtime::ASM::mflr(context->r0);
/*801871F4 00183FF4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801871F8 00183FF8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801871FC 00183FFC*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80187200 00184000*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80187204 00184004*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80187208 00184008*/ PPC::Runtime::ASM::addi(context->r30, context->r3, 0x1294);
/*8018720C 0018400C*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*80187210 00184010*/ PPC::Runtime::ASM::li(context->r31, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80187214, 0x80187214) //this is a jump label
/*80187214 00184014*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*80187218 00184018*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8018721C 0018401C*/ PPC::Runtime::ASM::beq(.L_80187228);
/*80187220 00184020*/ PPC::Runtime::ASM::bl(fn_8044F350);
/*80187224 00184024*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_80187228, 0x80187228) //this is a jump label
/*80187228 00184028*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
/*8018722C 0018402C*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x4);
/*80187230 00184030*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x9);
/*80187234 00184034*/ PPC::Runtime::ASM::blt(.L_80187214);
/*80187238 00184038*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8018723C 0018403C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80187240 00184040*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80187244 00184044*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80187248 00184048*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8018724C 0018404C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80187250 00184050*/ PPC::Runtime::ASM::blr();
}