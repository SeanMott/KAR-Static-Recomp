//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8005FD38(PPC::Runtime::GCContext* context)
{
/*8005FD38 0005CB38*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8005FD3C 0005CB3C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8005FD40 0005CB40*/ PPC::Runtime::ASM::lis(context->r4, STRUCT_BYTE4_COUNT_180538088 @ Get_MemoryOffset_HighBit);
/*8005FD44 0005CB44*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8005FD48 0005CB48*/ PPC::Runtime::ASM::addi(context->r4, context->r4, STRUCT_BYTE4_COUNT_180538088 @ Get_MemoryOffset_LowBit);
/*8005FD4C 0005CB4C*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r3, 24);
/*8005FD50 0005CB50*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x42, context->r4));
/*8005FD54 0005CB54*/ PPC::Runtime::ASM::rlwimi(context->r3, context->r0, 7, 24, 24);
/*8005FD58 0005CB58*/ PPC::Runtime::ASM::lha(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r4));
/* 8005FD5C 0005CB5C  54 60 CF FF */ extrwi. context->r0 , context->r3 , 1 , 24
/*8005FD60 0005CB60*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x42, context->r4));
/*8005FD64 0005CB64*/ PPC::Runtime::ASM::mr(context->r0, context->r5);
/*8005FD68 0005CB68*/ PPC::Runtime::ASM::bne(.L_8005FD70);
/*8005FD6C 0005CB6C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8005FD70, 0x8005FD70) //this is a jump label
/*8005FD70 0005CB70*/ PPC::Runtime::ASM::cmpw(context->r5, context->r0);
/*8005FD74 0005CB74*/ PPC::Runtime::ASM::beq(.L_8005FD8C);
/*8005FD78 0005CB78*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r4));
/*8005FD7C 0005CB7C*/ PPC::Runtime::ASM::clrlwi(context->r3, context->r0, 24);
/*8005FD80 0005CB80*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8005FD84 0005CB84*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8005FD88 0005CB88*/ PPC::Runtime::ASM::bl(fn_8044C500);
RUNTIME_PPC_JUMP_LABEL(.L_8005FD8C, 0x8005FD8C) //this is a jump label
/*8005FD8C 0005CB8C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8005FD90 0005CB90*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8005FD94 0005CB94*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8005FD98 0005CB98*/ PPC::Runtime::ASM::blr();
}