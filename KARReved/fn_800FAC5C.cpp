//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_800FAC5C(PPC::Runtime::GCContext* context)
{
/*800FAC5C 000F7A5C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800FAC60 000F7A60*/ PPC::Runtime::ASM::mflr(context->r0);
/*800FAC64 000F7A64*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800FAC68 000F7A68*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/* 800FAC6C 000F7A6C  7C 7F 1B 79 */ mr. context->r31 , context->r3
/*800FAC70 000F7A70*/ PPC::Runtime::ASM::bne(.L_800FAC84);
/*800FAC74 000F7A74*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6224 @ Get_MemoryOffset_SDA21);
/*800FAC78 000F7A78*/ PPC::Runtime::ASM::li(context->r4, 0xab);
/*800FAC7C 000F7A7C*/ PPC::Runtime::ASM::li(context->r5, lbl_805D622C @ Get_MemoryOffset_SDA21);
/*800FAC80 000F7A80*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800FAC84, 0x800FAC84) //this is a jump label
/*800FAC84 000F7A84*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800FAC88 000F7A88*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*800FAC8C 000F7A8C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800FAC90 000F7A90*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800FAC94 000F7A94*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800FAC98 000F7A98*/ PPC::Runtime::ASM::blr();
}