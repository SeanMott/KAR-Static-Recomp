//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801FA0B8.hpp"



void fn_801FA078(PPC::Runtime::GCContext* context)
{
/*801FA078 001F6E78*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801FA07C 001F6E7C*/ PPC::Runtime::ASM::mflr(context->r0);
/*801FA080 001F6E80*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801FA084 001F6E84*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DD848 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801FA088 001F6E88*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x664, context->r3));
/*801FA08C 001F6E8C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x15c, context->r4));
/*801FA090 001F6E90*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*801FA094 001F6E94*/ PPC::Runtime::ASM::bge(.L_801FA0A4);
/*801FA098 001F6E98*/ PPC::Runtime::ASM::bl(fn_801FA0B8);
/*801FA09C 001F6E9C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*801FA0A0 001F6EA0*/ PPC::Runtime::ASM::b(.L_801FA0A8);
RUNTIME_PPC_JUMP_LABEL(.L_801FA0A4, 0x801FA0A4) //this is a jump label
/*801FA0A4 001F6EA4*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_801FA0A8, 0x801FA0A8) //this is a jump label
/*801FA0A8 001F6EA8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801FA0AC 001F6EAC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801FA0B0 001F6EB0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801FA0B4 001F6EB4*/ PPC::Runtime::ASM::blr();
}