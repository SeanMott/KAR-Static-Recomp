//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80063610.hpp"



void fn_8018AB10(PPC::Runtime::GCContext* context)
{
/*8018AB10 00187910*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8018AB14 00187914*/ PPC::Runtime::ASM::mflr(context->r0);
/*8018AB18 00187918*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E0FF0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8018AB1C 0018791C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8018AB20 00187920*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r3));
/*8018AB24 00187924*/ PPC::Runtime::ASM::fcmpu(cr0, context->f1, context->f0);
/*8018AB28 00187928*/ PPC::Runtime::ASM::beq(.L_8018AB68);
/*8018AB2C 0018792C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E0FF4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8018AB30 00187930*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*8018AB34 00187934*/ PPC::Runtime::ASM::bge(.L_8018AB4C);
/*8018AB38 00187938*/ PPC::Runtime::ASM::mr(context->r3, context->r4);
/*8018AB3C 0018793C*/ PPC::Runtime::ASM::mr(context->r4, context->r5);
/*8018AB40 00187940*/ PPC::Runtime::ASM::mr(context->r5, context->r6);
/*8018AB44 00187944*/ PPC::Runtime::ASM::bl(fn_80063610);
/*8018AB48 00187948*/ PPC::Runtime::ASM::b(.L_8018AB80);
RUNTIME_PPC_JUMP_LABEL(.L_8018AB4C, 0x8018AB4C) //this is a jump label
/*8018AB4C 0018794C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*8018AB50 00187950*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*8018AB54 00187954*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*8018AB58 00187958*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r6));
/*8018AB5C 0018795C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r5));
/*8018AB60 00187960*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r6));
/*8018AB64 00187964*/ PPC::Runtime::ASM::b(.L_8018AB80);
RUNTIME_PPC_JUMP_LABEL(.L_8018AB68, 0x8018AB68) //this is a jump label
/*8018AB68 00187968*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8018AB6C 0018796C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*8018AB70 00187970*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*8018AB74 00187974*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r6));
/*8018AB78 00187978*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*8018AB7C 0018797C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r6));
RUNTIME_PPC_JUMP_LABEL(.L_8018AB80, 0x8018AB80) //this is a jump label
/*8018AB80 00187980*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8018AB84 00187984*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8018AB88 00187988*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8018AB8C 0018798C*/ PPC::Runtime::ASM::blr();
}