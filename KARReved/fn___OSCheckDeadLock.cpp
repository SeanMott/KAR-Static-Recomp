//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn___OSCheckDeadLock(PPC::Runtime::GCContext* context)
{
/*803D816C 003D4F6C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f0, context->r3));
/*803D8170 003D4F70*/ PPC::Runtime::ASM::b(.L_803D8188);
RUNTIME_PPC_JUMP_LABEL(.L_803D8174, 0x803D8174) //this is a jump label
/*803D8174 003D4F74*/ PPC::Runtime::ASM::cmplw(context->r4, context->r3);
/*803D8178 003D4F78*/ PPC::Runtime::ASM::bne(.L_803D8184);
/*803D817C 003D4F7C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*803D8180 003D4F80*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_803D8184, 0x803D8184) //this is a jump label
/*803D8184 003D4F84*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f0, context->r4));
RUNTIME_PPC_JUMP_LABEL(.L_803D8188, 0x803D8188) //this is a jump label
/*803D8188 003D4F88*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*803D818C 003D4F8C*/ PPC::Runtime::ASM::beq(.L_803D819C);
/*803D8190 003D4F90*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*803D8194 003D4F94*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*803D8198 003D4F98*/ PPC::Runtime::ASM::bne(.L_803D8174);
RUNTIME_PPC_JUMP_LABEL(.L_803D819C, 0x803D819C) //this is a jump label
/*803D819C 003D4F9C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803D81A0 003D4FA0*/ PPC::Runtime::ASM::blr();
}