//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802FB060.hpp"



void fn_802DA1C0(PPC::Runtime::GCContext* context)
{
/*802DA1C0 002D6FC0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*802DA1C4 002D6FC4*/ PPC::Runtime::ASM::mflr(context->r0);
/*802DA1C8 002D6FC8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802DA1CC 002D6FCC*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*802DA1D0 002D6FD0*/ PPC::Runtime::ASM::bl(_savegpr_27);
/*802DA1D4 002D6FD4*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*802DA1D8 002D6FD8*/ PPC::Runtime::ASM::mr(context->r28, context->r4);
/*802DA1DC 002D6FDC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r3));
/*802DA1E0 002D6FE0*/ PPC::Runtime::ASM::mr(context->r29, context->r5);
/*802DA1E4 002D6FE4*/ PPC::Runtime::ASM::mr(context->r30, context->r6);
/*802DA1E8 002D6FE8*/ PPC::Runtime::ASM::mr(context->r31, context->r7);
/*802DA1EC 002D6FEC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802DA1F0 002D6FF0*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802DA1F4 002D6FF4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*802DA1F8 002D6FF8*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802DA1FC 002D6FFC*/ PPC::Runtime::ASM::bctrl();
/*802DA200 002D7000*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r27));
/*802DA204 002D7004*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*802DA208 002D7008*/ PPC::Runtime::ASM::beq(.L_802DA224);
/*802DA20C 002D700C*/ PPC::Runtime::ASM::mr(context->r5, context->r28);
/*802DA210 002D7010*/ PPC::Runtime::ASM::mr(context->r6, context->r29);
/*802DA214 002D7014*/ PPC::Runtime::ASM::mr(context->r7, context->r30);
/*802DA218 002D7018*/ PPC::Runtime::ASM::mr(context->r8, context->r31);
/*802DA21C 002D701C*/ PPC::Runtime::ASM::addi(context->r4, context->r27, 0x80);
/*802DA220 002D7020*/ PPC::Runtime::ASM::bl(fn_802FB060);
RUNTIME_PPC_JUMP_LABEL(.L_802DA224, 0x802DA224) //this is a jump label
/*802DA224 002D7024*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*802DA228 002D7028*/ PPC::Runtime::ASM::bl(_restgpr_27);
/*802DA22C 002D702C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802DA230 002D7030*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802DA234 002D7034*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*802DA238 002D7038*/ PPC::Runtime::ASM::blr();
}