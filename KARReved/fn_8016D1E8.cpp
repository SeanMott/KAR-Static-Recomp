//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_FuncDoesShit_5.hpp"



void fn_8016D1E8(PPC::Runtime::GCContext* context)
{
/*8016D1E8 00169FE8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8016D1EC 00169FEC*/ PPC::Runtime::ASM::mflr(context->r0);
/*8016D1F0 00169FF0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8016D1F4 00169FF4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8016D1F8 00169FF8*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8016D1FC 00169FFC*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8016D200 0016A000*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb18, context->r3));
/*8016D204 0016A004*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8016D208 0016A008*/ PPC::Runtime::ASM::beq(.L_8016D218);
/*8016D20C 0016A00C*/ PPC::Runtime::ASM::bl(fn_80428F64);
/*8016D210 0016A010*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8016D214 0016A014*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb18, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8016D218, 0x8016D218) //this is a jump label
/*8016D218 0016A018*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8016D21C 0016A01C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8016D220 0016A020*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb20, context->r3));
/*8016D224 0016A024*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8016D228 0016A028*/ PPC::Runtime::ASM::beq(.L_8016D238);
/*8016D22C 0016A02C*/ PPC::Runtime::ASM::bl(fn_80428F64);
/*8016D230 0016A030*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8016D234 0016A034*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb20, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8016D238, 0x8016D238) //this is a jump label
/*8016D238 0016A038*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8016D23C 0016A03C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8016D240 0016A040*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8016D244 0016A044*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8016D248 0016A048*/ PPC::Runtime::ASM::blr();
}